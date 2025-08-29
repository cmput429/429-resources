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

// The __global__ qualifier indicates that Hardswish is a kernel
// https://rocm.docs.amd.com/projects/HIP/en/latest/how-to/hip_cpp_language_extensions.html#global
__global__ void Hardswish(float* A) {
    // Dimensions of kernel are set when the kernel is invoked 
    // on lines 88-89
    // "threadIdx identifies the thread within a block, meaning its values are
    //  within 0 and blockDim.{x,y,z} - 1. Likewise blockIdx identifies the 
    // block within the grid, and the values are within 0 and gridDim.{} - 1."
    // https://rocm.docs.amd.com/projects/HIP/en/latest/how-to/hip_cpp_language_extensions.html#built-in-constants
    const unsigned tid  = threadIdx.x;
    const unsigned bid  = blockIdx.x;
    const unsigned base = bid * threadsPerBlock * N + tid * N; 

    #pragma nounroll
    for (int i = 0; i < (int)N; ++i) {
        const unsigned idx = base + i;
        float x = A[idx];
        float y;
        if (x <= -3.0f) {
            y = 0.0f;
        } else if (x >= 3.0f) {
            y = x;
        } else {
            y = x * (x + 3.0f) * (1.0f / 6.0f);
        }
        A[idx] = y; 
    }
}

int main() {
#ifdef GPUFS
    // Required to use m5ops in Full-System mode
    m5op_addr = 0xFFFF0000;
    map_m5_mem();
    m5_work_begin_addr(0, 0);
#endif
    // Number of elements and size in bytes are 
    // calculated based off kernel dimensions
    const size_t elements = (size_t)numBlocks * threadsPerBlock * N;
    const size_t bytes    = elements * sizeof(float);

    // hipMalloc allocates GPU memory
    float* A_dev = nullptr;
    HIP_CHECK(hipMalloc(&A_dev, bytes));
    
    // Initalizing array of randomly generated numbers on host
    std::vector<float> A_host(elements);
    std::uniform_real_distribution<float> dist(-9.0f, 9.0f);
    std::mt19937 rng(N);
    for (auto& v : A_host) v = dist(rng);
    // Copying host array to GPU allocated memory
    HIP_CHECK(hipMemcpy(A_dev, A_host.data(), bytes, hipMemcpyHostToDevice));

    // Resetting stats so startup doesn't impact kernel stats
#ifdef GPUFS
    m5_reset_stats_addr(0,0);
#else
    m5_reset_stats(0,0); 
#endif

    // In HIP C++, thread blocks are automatically partitioned into
    // wavefronts for ease of programming, so you can run
    // kernels with a dynamic number of threads

    // Number of blocks and threads in a block are in 3 dimensions 
    // as GPUs are commonly used to render 3D scenes

    // Calling kernel with (numBlocks x 1 x 1) blocks, 
    // and (threadsPerBlock, 1, 1) threads in each block
    // https://rocm.docs.amd.com/projects/HIP/en/latest/how-to/hip_cpp_language_extensions.html#calling-global-functions
    dim3 grid(numBlocks), block(threadsPerBlock);
    Hardswish<<<grid, block>>>(A_dev);
    HIP_CHECK(hipDeviceSynchronize()); // Make sure to continue only after kernel is done

    // Dumping stats so exit routine doesn't impact kernel stats
#ifdef GPUFS
    m5_dump_reset_stats_addr(0,0);
#else
    m5_dump_reset_stats(0,0);
#endif
    // Exits gem5 simulator
#ifdef GPUFS
    m5_work_end_addr(0,0);
    m5_exit_addr(0);
#else
    m5_exit(0);
#endif
}
