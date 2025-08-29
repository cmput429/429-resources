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
constexpr unsigned numBlocks       = (DIM + threadsPerBlock - 1) / threadsPerBlock;

// Kernel 1: branchless (dot then subtract aii*xi)
__global__ void jacobi_naive_hoisted(
    const float* __restrict__ A,
    const float* __restrict__ b,
    const float* __restrict__ x_old,
    float* __restrict__ x_new,
    int n)
{
    int i = blockIdx.x * blockDim.x + threadIdx.x;
    if (i >= n) return;

    const float* Ai = A + (size_t)i * n;
    float aii = Ai[i];

    float dot = 0.0f;
    for (int j = 0; j < n; ++j) {
        dot += Ai[j] * x_old[j];
    }
    float sigma = dot - aii * x_old[i];
    x_new[i] = (b[i] - sigma) / aii;
}

int main() {
#ifdef GPUFS
    m5op_addr = 0xFFFF0000; map_m5_mem(); m5_work_begin_addr(0, 0);
#endif

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

    dim3 grid(numBlocks), block(threadsPerBlock);
    for (unsigned it=0; it<ITERS; ++it) {
        jacobi_naive_hoisted<<<grid, block>>>(A_dev, b_dev, x0_dev, x1_dev, (int)n);
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
