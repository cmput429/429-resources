#include <hip/hip_runtime.h>
#include <iostream>
#include <vector>
#include <gem5/m5ops.h>
#ifdef GPUFS
#include <m5_mmap.h>
#endif

#define HIP_CHECK(cmd) do { hipError_t s=(cmd); if(s!=hipSuccess){ \
  std::cerr<<"HIP: "<<hipGetErrorString(s)<<" @ "<<__FILE__<<":"<<__LINE__<<"\n"; \
  std::exit(EXIT_FAILURE);} } while(0)

constexpr unsigned DIM             = 128;
constexpr unsigned ITERS           = 50;
constexpr unsigned threadsPerBlock = 128;
constexpr unsigned numBlocks       = (DIM + (threadsPerBlock/warpSize) - 1) / (threadsPerBlock/warpSize);

__device__ inline float warp_reduce_sum(float v) {
    for (int offset = warpSize >> 1; offset > 0; offset >>= 1) {
        v += __shfl_down(v, offset);
    }
    return v;
}

// Kernel 3: one warp (wavefront) per row, branchless
__global__ void jacobi_warp_hoisted(
    const float* __restrict__ A,
    const float* __restrict__ b,
    const float* __restrict__ x_old,
    float* __restrict__ x_new,
    int n)
{
    // blockDim.x must be multiple of warpSize
    int lane            = threadIdx.x & (warpSize - 1);
    int warp_in_block   = threadIdx.x / warpSize;
    int warps_per_block = blockDim.x / warpSize;

    int row = blockIdx.x * warps_per_block + warp_in_block;
    if (row >= n) return;

    const float* Ai = A + (size_t)row * n;
    float aii = Ai[row];

    float partial = 0.0f;
    for (int j = lane; j < n; j += warpSize) {
        partial += Ai[j] * x_old[j];
    }
    float dot = warp_reduce_sum(partial);

    if (lane == 0) {
        float sigma = dot - aii * x_old[row];
        x_new[row] = (b[row] - sigma) / aii;
    }
}

int main() {
#ifdef GPUFS
    m5op_addr = 0xFFFF0000; map_m5_mem(); m5_work_begin_addr(0, 0);
#endif

    if (threadsPerBlock % warpSize != 0) {
        std::cerr << "threadsPerBlock must be multiple of warpSize (" << warpSize << ")\n";
        return 1;
    }

    const size_t n = DIM, n2 = n*n, bytesA = n2*sizeof(float), bytesV = n*sizeof(float);

    float *A_dev=nullptr, *b_dev=nullptr, *x0_dev=nullptr, *x1_dev=nullptr;
    HIP_CHECK(hipMalloc(&A_dev, bytesA));
    HIP_CHECK(hipMalloc(&b_dev, bytesV));
    HIP_CHECK(hipMalloc(&x0_dev, bytesV));
    HIP_CHECK(hipMalloc(&x1_dev, bytesV));

    std::vector<float> A_host(n2, 0.0f), b_host(n, 1.0f), x0_host(n, 0.0f);
    for (size_t i=0;i<n;++i){ if(i>0)A_host[i*n+i-1]=-1.0f; A_host[i*n+i]=2.1f; if(i+1<n)A_host[i*n+i+1]=-1.0f; }

    HIP_CHECK(hipMemcpy(A_dev, A_host.data(), bytesA, hipMemcpyHostToDevice));
    HIP_CHECK(hipMemcpy(b_dev, b_host.data(), bytesV, hipMemcpyHostToDevice));
    HIP_CHECK(hipMemcpy(x0_dev, x0_host.data(), bytesV, hipMemcpyHostToDevice));
    HIP_CHECK(hipMemset(x1_dev, 0, bytesV));

#ifdef GPUFS
    m5_reset_stats_addr(0,0);
#else
    m5_reset_stats(0,0);
#endif

    // One warp per row: grid over warps
    dim3 block(threadsPerBlock);
    int warps_per_block = threadsPerBlock / warpSize;
    dim3 grid((unsigned)((DIM + warps_per_block - 1) / warps_per_block));

    for (unsigned it=0; it<ITERS; ++it) {
        jacobi_warp_hoisted<<<grid, block>>>(A_dev, b_dev, x0_dev, x1_dev, (int)DIM);
        HIP_CHECK(hipGetLastError());
        std::swap(x0_dev, x1_dev);
    }
    HIP_CHECK(hipDeviceSynchronize());

#ifdef GPUFS
    m5_dump_reset_stats_addr(0,0); m5_work_end_addr(0,0); m5_exit_addr(0);
#else
    m5_dump_reset_stats(0,0); m5_exit(0);
#endif
}
