#include <hip/hip_runtime.h>
#include <iostream>
#include <cstdlib>
#include <random>
#include <algorithm>
#include <gem5/m5ops.h>

#ifdef GPUFS
#include <m5_mmap.h>
#endif

// Used since HIP functions are marked [[nodiscard]]
#define HIP_CHECK(command) { \
    hipError_t status = command; \
    if (status != hipSuccess) { \
        std::cerr << "HIP Error: " << hipGetErrorString(status) \
                  << " at " << __FILE__ << ":" << __LINE__ << std::endl; \
        exit(EXIT_FAILURE); \
    } \
}

// Globals
constexpr unsigned int N = 64; 
constexpr unsigned int numBlocks = 128; 
constexpr unsigned int threadsPerBlock = 128; 

constexpr float min_val = -3.0F; 
constexpr float max_val = 3.0F; 

// Kernel
__global__ void Hardswish(float *A) {
    unsigned int idx = blockIdx.x*threadsPerBlock*N+threadIdx.x;
    for (int i = 0; i < N; ++i) {
        float x = A[idx+i*threadsPerBlock];
        A[idx+i*threadsPerBlock] = 
            (x > -3.0F) * (x + (x < 3.0F) * (x*(x+3)/6-x));
    }
}

int main() {
    #ifdef GPUFS
    m5op_addr = 0xFFFF0000;
    map_m5_mem();
    m5_work_begin_addr(0, 0);
    #endif
    std::mt19937 random_engine(N);
    size_t elements = numBlocks*threadsPerBlock*N;
    size_t size = elements*sizeof(float);

    auto A_host = new float[elements];
    float *A_device;
    HIP_CHECK(hipMalloc(&A_device, size));

    std::uniform_real_distribution<float> distribution(-9.0F, 9.0F);
    for(int i = 0; i < elements; ++i) {
        A_host[i] = distribution(random_engine);
    }

    HIP_CHECK(hipMemcpy(A_device, A_host, size, hipMemcpyHostToDevice));

    #ifdef GPUFS
    m5_reset_stats_addr(0,0);
    #else
    m5_reset_stats(0, 0);
    #endif
    
    dim3 block_dim(numBlocks, 1, 1);
    dim3 thread_dim(threadsPerBlock, 1, 1);

    Hardswish<<<block_dim, thread_dim>>>(A_device);
    HIP_CHECK(hipDeviceSynchronize());
    #ifdef GPUFS
    m5_dump_reset_stats_addr(0,0);
    #else
    m5_dump_reset_stats(0,0);
    #endif

    #ifdef GPUFS
    m5_work_end_addr(0, 0);
    m5_exit_addr(0);
    #else
    m5_exit(0);
    #endif
}