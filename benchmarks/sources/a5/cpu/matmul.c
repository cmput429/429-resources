/*
GEMM implementations from https://github.com/jaopaulolc/KernelFaRer/tree/main
 * */
#include <stdio.h>
#include <stdlib.h>

#ifdef GEM5
#include <gem5/m5ops.h>
#endif

#ifndef CACHE_SIZE_IN_KB
#define CACHE_SIZE_IN_KB (48*1024*1024)
#endif
#ifndef M_DIM
#define M_DIM (32)
#endif
#ifndef K_DIM
#define K_DIM (32)
#endif
#ifndef N_DIM
#define N_DIM (32)
#endif

#ifdef VECTORIZED
#define VECTORIZED_TYPE "Vectorized"
#else
#define VECTORIZED_TYPE "Scalar"
#endif

void step0_dgemm(double *A, double *B, double *C, int m, int k, int n) {
  int i, j, p;

#ifdef NAIVE_GEMM
#define MATMUL_TYPE "Naive"
  // Naive GEMM
  for (i = 0; i < m; i++) {
    for (j = 0; j < n; j++) {
      for (p = 0; p < k; p++) {
        C[ j * m + i ] += A[ p * m + i ] * B[ j * k + p ];
      }
    }
  }
#elifdef TRANSPOSE_GEMM
#define MATMUL_TYPE "Transpose"
  // Naive + Transpose(A) GEMM
  for (i = 0; i < m; i++) {
    const double *A_ptr = &A [ i * k /*+ p*/ ];
    for (j = 0; j < n; j++) {
      double *C_ptr = &C [ j * m /*+ i*/ ];
      const double *B_ptr = &B [ j * k /*+ p*/];
      for (p = 0; p < k; p++) {
        C_ptr[i] += A_ptr[p] * B_ptr[p];
      }
    }
  }
#elifdef INTERCHANGE_GEMM
#define MATMUL_TYPE "Interchange"
  // Naive + Interchange (i,j,p) -> (j,p,i) GEMM
  for (j = 0; j < n; j++) {
    double *B_ptr = &B [ j * k /*+ p*/ ];
    double *C_ptr = &C [ j * m /*+ i*/ ];
    for (p = 0; p < k; p++) {
      double *A_ptr = &A [ p * m /*+ i*/ ];
      for (i = 0; i < m; i++) {
        C_ptr[i] += A_ptr[i] * B_ptr[p];
      }
    }
  }
#elifdef INTERCHANGE_BLOCKING_GEMM
#define MATMUL_TYPE "InterchangeBlocking"
  const int i_blk = 64;
  const int j_blk = 64;
  const int p_blk = 64;

  // Naive + Interchange + Blocking GEMM
  for (j = 0; j < n; j+=j_blk) {
    for (p = 0; p < k; p+=p_blk) {
      for (i = 0; i < m; i+=i_blk) {
        const int jj_end = n < (j + j_blk) ? n : (j + j_blk);
        for (long jj = j; jj < jj_end; jj++ ) {
          double* B_ptr = &B [ jj * k /*+ pp*/ ];
          double* C_ptr = &C [ jj * m /*+ ii*/ ];
          const int pp_end = k < (p + p_blk) ? k : (p + p_blk);
          for (long pp = p; pp < pp_end; pp++) {
            double* A_ptr = &A [ pp * m /*+ ii*/ ];
            const int ii_end = m < (i + i_blk) ? i : (i + i_blk);
            for (long ii = i; ii < ii_end; ii++) {
              C_ptr[ii] += A_ptr[ii] * B_ptr[pp];
            }
          }
        }
      }
    }
  }
#else
#error "GEMM type not defined"
#endif
}

void randomizeMatrix(double *mat, int d1, int d2) {
    // Seed the random number generator
    for (int i = 0; i < d1 * d2; ++i) {
        // Generate a random number: 0, 1, or 2
        mat[i] = (double)(i % 3);
    }
}

void setToZero(double *mat, int d1, int d2) {
  for (int i = 0; i < d1 * d2; ++i) {
    mat[i] = 0;
  }
}

#ifndef MATMUL_TYPE
#error "GEMM type not defined"
#endif

void runGeMMTest(double *A, double *B, double *C, double *CExp, int m, int k,
    int n) {
  A = malloc(sizeof(double)*m*k);
  B = malloc(sizeof(double)*k*n);
  randomizeMatrix(A, m, k);
  randomizeMatrix(B, k, n);
  C = malloc(sizeof(double)*m*n);
  CExp = malloc(sizeof(double)*m*n);
  setToZero(C, m, n);
  setToZero(CExp, m, n);

#ifdef GEM5
  m5_reset_stats(0,0);
#endif
  step0_dgemm(A, B, C, m, k, n);
#ifdef GEM5
  m5_dump_stats(0,0);
  printf("Finished matmul type %s %s, early exit\n", MATMUL_TYPE, VECTORIZED_TYPE);
  m5_exit(0);
#else
#warning "GEM5 is not defined! You will not collect accurate statistics in the simulator!"
  printf("Finished matmul type %s %s\n", MATMUL_TYPE, VECTORIZED_TYPE);
#endif
}

int main() {
  double *A[] = {NULL, NULL, NULL, NULL, NULL};
  double *B[] = {NULL, NULL, NULL, NULL, NULL};
  double *C[] = {NULL, NULL, NULL, NULL, NULL};
  double *CExp = NULL;

  runGeMMTest(A[0], B[0], C[0], CExp, M_DIM, K_DIM, N_DIM);
  // runGeMMTest("Step1", step1_dgemm, A[1], B[1], C[1], CExp, M_DIM, K_DIM, N_DIM);
  // runGeMMTest("Step2", step2_dgemm, A[2], B[2], C[2], CExp, M_DIM, K_DIM, N_DIM);
  // runGeMMTest("Step3", step3_dgemm, A[3], B[3], C[3], CExp, M_DIM, K_DIM, N_DIM);
  // runGeMMTest("Step4", step4_dgemm, A[4], B[4], C[4], CExp, M_DIM, K_DIM, N_DIM);

  for(int i = 0; i < 5; ++i) {
    free(A[i]);
    free(B[i]);
    free(C[i]);
  }
  free(CExp);

  return 0;
}
