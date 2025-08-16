#include <hip/hip_runtime.h>
#include <iostream>
#include <vector>
#include <random>
#include <gem5/m5ops.h>
#ifdef GPUFS
#include <m5_mmap.h>
#endif

#define HIP_CHECK(cmd) do { hipError_t s=(cmd); if(s!=hipSuccess){ \
  std::cerr<<"HIP: "<<hipGetErrorString(s)<<" @ "<<__FILE__<<":"<<__LINE__<<"\n"; \
  std::exit(EXIT_FAILURE);} } while(0)

constexpr unsigned int N = 128;
constexpr unsigned int numBlocks = 64;
constexpr unsigned int threadsPerBlock = 64;

__global__ void Hardswish(float* A) {
    const unsigned tid  = threadIdx.x;
    const unsigned bid  = blockIdx.x;
    const unsigned base = bid * threadsPerBlock * N + tid * N;

    #pragma nounroll
    for (int i = 0; i < (int)N; ++i) {
        const unsigned idx = base + i;
        float x = A[idx];
        float t = fminf(fmaxf(x + 3.0f, 0.0f), 6.0f) * (1.0f/6.0f);
        A[idx] = x * t;
    }
}

int main() {
#ifdef GPUFS
    m5op_addr = 0xFFFF0000;
    map_m5_mem();
    m5_work_begin_addr(0, 0);
#endif

    std::mt19937 rng(N);
    const size_t elements = (size_t)numBlocks * threadsPerBlock * N;
    const size_t bytes    = elements * sizeof(float);

    float* A_dev = nullptr;
    HIP_CHECK(hipMalloc(&A_dev, bytes));

    std::vector<float> A_host(elements);
    std::uniform_real_distribution<float> dist(-9.0f, 9.0f);
    for (auto& v : A_host) v = dist(rng);
    HIP_CHECK(hipMemcpy(A_dev, A_host.data(), bytes, hipMemcpyHostToDevice));

#ifdef GPUFS
    m5_reset_stats_addr(0,0);
#else
    m5_reset_stats(0,0);
#endif

    dim3 grid(numBlocks), block(threadsPerBlock);
    Hardswish<<<grid, block>>>(A_dev);
    HIP_CHECK(hipDeviceSynchronize());

#ifdef GPUFS
    m5_dump_reset_stats_addr(0,0);
#else
    m5_dump_reset_stats(0,0);
#endif

#ifdef GPUFS
    m5_work_end_addr(0,0);
    m5_exit_addr(0);
#else
    m5_exit(0);
#endif
}
