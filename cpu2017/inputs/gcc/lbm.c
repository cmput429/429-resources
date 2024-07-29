# 1 "modified/includes.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "modified/includes.c"
# 1 "modified/lbm.h" 1
# 10 "modified/lbm.h"
# 1 "modified/config.h" 1
# 11 "modified/lbm.h" 2



typedef enum {C = 0,
              N, S, E, W, T, B,
              NE, NW, SE, SW,
              NT, NB, ST, SB,
              ET, EB, WT, WB,
              FLAGS, N_CELL_ENTRIES} CELL_ENTRIES;


typedef enum {OBSTACLE = 1 << 0,
              ACCEL = 1 << 1,
              IN_OUT_FLOW = 1 << 2} CELL_FLAGS;

# 1 "modified/lbm_1d_array.h" 1







typedef double LBM_Grid[(130)*(1*(100))*(1*(100))*N_CELL_ENTRIES];
typedef LBM_Grid* LBM_GridPtr;
# 27 "modified/lbm.h" 2



void LBM_allocateGrid( double** ptr );
void LBM_freeGrid( double** ptr );
void LBM_initializeGrid( LBM_Grid grid );
void LBM_initializeSpecialCellsForLDC( LBM_Grid grid );
void LBM_loadObstacleFile( LBM_Grid grid, const char* filename );
void LBM_initializeSpecialCellsForChannel( LBM_Grid grid );
void LBM_swapGrids( LBM_GridPtr* grid1, LBM_GridPtr* grid2 );
void LBM_performStreamCollideBGK( LBM_Grid srcGrid, LBM_Grid dstGrid );
void LBM_performStreamCollideTRT( LBM_Grid srcGrid, LBM_Grid dstGrid );
void LBM_handleInOutFlow( LBM_Grid srcGrid );
void LBM_showGridStatistics( LBM_Grid Grid );
void LBM_storeVelocityField( LBM_Grid grid, const char* filename,
                           const int binary );
void LBM_compareVelocityField( LBM_Grid grid, const char* filename,
                             const int binary );
# 2 "modified/includes.c" 2
# 1 "/usr/include/math.h" 1 3 4
# 26 "/usr/include/math.h" 3 4
# 1 "/usr/include/features.h" 1 3 4
# 374 "/usr/include/features.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 1 3 4
# 385 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 386 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 2 3 4
# 375 "/usr/include/features.h" 2 3 4
# 398 "/usr/include/features.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 1 3 4
# 10 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs-64.h" 1 3 4
# 11 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 2 3 4
# 399 "/usr/include/features.h" 2 3 4
# 27 "/usr/include/math.h" 2 3 4





# 1 "/usr/include/x86_64-linux-gnu/bits/huge_val.h" 1 3 4
# 33 "/usr/include/math.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/huge_valf.h" 1 3 4
# 35 "/usr/include/math.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/huge_vall.h" 1 3 4
# 36 "/usr/include/math.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/inf.h" 1 3 4
# 39 "/usr/include/math.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/nan.h" 1 3 4
# 42 "/usr/include/math.h" 2 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/mathdef.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/mathdef.h" 3 4
typedef float float_t;
typedef double double_t;
# 46 "/usr/include/math.h" 2 3 4
# 69 "/usr/include/math.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 1 3 4
# 52 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4


extern double acos (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __acos (double __x) __attribute__ ((__nothrow__ , __leaf__));

extern double asin (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __asin (double __x) __attribute__ ((__nothrow__ , __leaf__));

extern double atan (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __atan (double __x) __attribute__ ((__nothrow__ , __leaf__));

extern double atan2 (double __y, double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __atan2 (double __y, double __x) __attribute__ ((__nothrow__ , __leaf__));


extern double cos (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __cos (double __x) __attribute__ ((__nothrow__ , __leaf__));

extern double sin (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __sin (double __x) __attribute__ ((__nothrow__ , __leaf__));

extern double tan (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __tan (double __x) __attribute__ ((__nothrow__ , __leaf__));




extern double cosh (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __cosh (double __x) __attribute__ ((__nothrow__ , __leaf__));

extern double sinh (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __sinh (double __x) __attribute__ ((__nothrow__ , __leaf__));

extern double tanh (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __tanh (double __x) __attribute__ ((__nothrow__ , __leaf__));

# 86 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4


extern double acosh (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __acosh (double __x) __attribute__ ((__nothrow__ , __leaf__));

extern double asinh (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __asinh (double __x) __attribute__ ((__nothrow__ , __leaf__));

extern double atanh (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __atanh (double __x) __attribute__ ((__nothrow__ , __leaf__));







extern double exp (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __exp (double __x) __attribute__ ((__nothrow__ , __leaf__));


extern double frexp (double __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__)); extern double __frexp (double __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__));


extern double ldexp (double __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__)); extern double __ldexp (double __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__));


extern double log (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __log (double __x) __attribute__ ((__nothrow__ , __leaf__));


extern double log10 (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __log10 (double __x) __attribute__ ((__nothrow__ , __leaf__));


extern double modf (double __x, double *__iptr) __attribute__ ((__nothrow__ , __leaf__)); extern double __modf (double __x, double *__iptr) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));

# 126 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4


extern double expm1 (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __expm1 (double __x) __attribute__ ((__nothrow__ , __leaf__));


extern double log1p (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __log1p (double __x) __attribute__ ((__nothrow__ , __leaf__));


extern double logb (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __logb (double __x) __attribute__ ((__nothrow__ , __leaf__));






extern double exp2 (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __exp2 (double __x) __attribute__ ((__nothrow__ , __leaf__));


extern double log2 (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __log2 (double __x) __attribute__ ((__nothrow__ , __leaf__));








extern double pow (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)); extern double __pow (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__));


extern double sqrt (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __sqrt (double __x) __attribute__ ((__nothrow__ , __leaf__));





extern double hypot (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)); extern double __hypot (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__));






extern double cbrt (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __cbrt (double __x) __attribute__ ((__nothrow__ , __leaf__));








extern double ceil (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __ceil (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern double fabs (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __fabs (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern double floor (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __floor (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern double fmod (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)); extern double __fmod (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__));




extern int __isinf (double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern int __finite (double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));





extern int isinf (double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern int finite (double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern double drem (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)); extern double __drem (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__));



extern double significand (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __significand (double __x) __attribute__ ((__nothrow__ , __leaf__));





extern double copysign (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __copysign (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));






extern double nan (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __nan (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));





extern int __isnan (double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern int isnan (double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern double j0 (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __j0 (double) __attribute__ ((__nothrow__ , __leaf__));
extern double j1 (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __j1 (double) __attribute__ ((__nothrow__ , __leaf__));
extern double jn (int, double) __attribute__ ((__nothrow__ , __leaf__)); extern double __jn (int, double) __attribute__ ((__nothrow__ , __leaf__));
extern double y0 (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __y0 (double) __attribute__ ((__nothrow__ , __leaf__));
extern double y1 (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __y1 (double) __attribute__ ((__nothrow__ , __leaf__));
extern double yn (int, double) __attribute__ ((__nothrow__ , __leaf__)); extern double __yn (int, double) __attribute__ ((__nothrow__ , __leaf__));






extern double erf (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __erf (double) __attribute__ ((__nothrow__ , __leaf__));
extern double erfc (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __erfc (double) __attribute__ ((__nothrow__ , __leaf__));
extern double lgamma (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __lgamma (double) __attribute__ ((__nothrow__ , __leaf__));






extern double tgamma (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __tgamma (double) __attribute__ ((__nothrow__ , __leaf__));





extern double gamma (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __gamma (double) __attribute__ ((__nothrow__ , __leaf__));






extern double lgamma_r (double, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__)); extern double __lgamma_r (double, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__));







extern double rint (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __rint (double __x) __attribute__ ((__nothrow__ , __leaf__));


extern double nextafter (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __nextafter (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));

extern double nexttoward (double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __nexttoward (double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern double remainder (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)); extern double __remainder (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__));



extern double scalbn (double __x, int __n) __attribute__ ((__nothrow__ , __leaf__)); extern double __scalbn (double __x, int __n) __attribute__ ((__nothrow__ , __leaf__));



extern int ilogb (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern int __ilogb (double __x) __attribute__ ((__nothrow__ , __leaf__));




extern double scalbln (double __x, long int __n) __attribute__ ((__nothrow__ , __leaf__)); extern double __scalbln (double __x, long int __n) __attribute__ ((__nothrow__ , __leaf__));



extern double nearbyint (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __nearbyint (double __x) __attribute__ ((__nothrow__ , __leaf__));



extern double round (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __round (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern double trunc (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __trunc (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));




extern double remquo (double __x, double __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__)); extern double __remquo (double __x, double __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__));






extern long int lrint (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lrint (double __x) __attribute__ ((__nothrow__ , __leaf__));
__extension__
extern long long int llrint (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llrint (double __x) __attribute__ ((__nothrow__ , __leaf__));



extern long int lround (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lround (double __x) __attribute__ ((__nothrow__ , __leaf__));
__extension__
extern long long int llround (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llround (double __x) __attribute__ ((__nothrow__ , __leaf__));



extern double fdim (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)); extern double __fdim (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__));


extern double fmax (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __fmax (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern double fmin (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __fmin (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern int __fpclassify (double __value) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__const__));


extern int __signbit (double __value) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__const__));



extern double fma (double __x, double __y, double __z) __attribute__ ((__nothrow__ , __leaf__)); extern double __fma (double __x, double __y, double __z) __attribute__ ((__nothrow__ , __leaf__));




# 371 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern double scalb (double __x, double __n) __attribute__ ((__nothrow__ , __leaf__)); extern double __scalb (double __x, double __n) __attribute__ ((__nothrow__ , __leaf__));
# 70 "/usr/include/math.h" 2 3 4
# 88 "/usr/include/math.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 1 3 4
# 52 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4


extern float acosf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __acosf (float __x) __attribute__ ((__nothrow__ , __leaf__));

extern float asinf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __asinf (float __x) __attribute__ ((__nothrow__ , __leaf__));

extern float atanf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __atanf (float __x) __attribute__ ((__nothrow__ , __leaf__));

extern float atan2f (float __y, float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __atan2f (float __y, float __x) __attribute__ ((__nothrow__ , __leaf__));


extern float cosf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __cosf (float __x) __attribute__ ((__nothrow__ , __leaf__));

extern float sinf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __sinf (float __x) __attribute__ ((__nothrow__ , __leaf__));

extern float tanf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __tanf (float __x) __attribute__ ((__nothrow__ , __leaf__));




extern float coshf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __coshf (float __x) __attribute__ ((__nothrow__ , __leaf__));

extern float sinhf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __sinhf (float __x) __attribute__ ((__nothrow__ , __leaf__));

extern float tanhf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __tanhf (float __x) __attribute__ ((__nothrow__ , __leaf__));

# 86 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4


extern float acoshf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __acoshf (float __x) __attribute__ ((__nothrow__ , __leaf__));

extern float asinhf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __asinhf (float __x) __attribute__ ((__nothrow__ , __leaf__));

extern float atanhf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __atanhf (float __x) __attribute__ ((__nothrow__ , __leaf__));







extern float expf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __expf (float __x) __attribute__ ((__nothrow__ , __leaf__));


extern float frexpf (float __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__)); extern float __frexpf (float __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__));


extern float ldexpf (float __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__)); extern float __ldexpf (float __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__));


extern float logf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __logf (float __x) __attribute__ ((__nothrow__ , __leaf__));


extern float log10f (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __log10f (float __x) __attribute__ ((__nothrow__ , __leaf__));


extern float modff (float __x, float *__iptr) __attribute__ ((__nothrow__ , __leaf__)); extern float __modff (float __x, float *__iptr) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));

# 126 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4


extern float expm1f (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __expm1f (float __x) __attribute__ ((__nothrow__ , __leaf__));


extern float log1pf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __log1pf (float __x) __attribute__ ((__nothrow__ , __leaf__));


extern float logbf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __logbf (float __x) __attribute__ ((__nothrow__ , __leaf__));






extern float exp2f (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __exp2f (float __x) __attribute__ ((__nothrow__ , __leaf__));


extern float log2f (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __log2f (float __x) __attribute__ ((__nothrow__ , __leaf__));








extern float powf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)); extern float __powf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__));


extern float sqrtf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __sqrtf (float __x) __attribute__ ((__nothrow__ , __leaf__));





extern float hypotf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)); extern float __hypotf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__));






extern float cbrtf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __cbrtf (float __x) __attribute__ ((__nothrow__ , __leaf__));








extern float ceilf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __ceilf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern float fabsf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __fabsf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern float floorf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __floorf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern float fmodf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)); extern float __fmodf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__));




extern int __isinff (float __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern int __finitef (float __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));





extern int isinff (float __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern int finitef (float __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern float dremf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)); extern float __dremf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__));



extern float significandf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __significandf (float __x) __attribute__ ((__nothrow__ , __leaf__));





extern float copysignf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __copysignf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));






extern float nanf (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __nanf (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));





extern int __isnanf (float __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern int isnanf (float __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern float j0f (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __j0f (float) __attribute__ ((__nothrow__ , __leaf__));
extern float j1f (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __j1f (float) __attribute__ ((__nothrow__ , __leaf__));
extern float jnf (int, float) __attribute__ ((__nothrow__ , __leaf__)); extern float __jnf (int, float) __attribute__ ((__nothrow__ , __leaf__));
extern float y0f (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __y0f (float) __attribute__ ((__nothrow__ , __leaf__));
extern float y1f (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __y1f (float) __attribute__ ((__nothrow__ , __leaf__));
extern float ynf (int, float) __attribute__ ((__nothrow__ , __leaf__)); extern float __ynf (int, float) __attribute__ ((__nothrow__ , __leaf__));






extern float erff (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __erff (float) __attribute__ ((__nothrow__ , __leaf__));
extern float erfcf (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __erfcf (float) __attribute__ ((__nothrow__ , __leaf__));
extern float lgammaf (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __lgammaf (float) __attribute__ ((__nothrow__ , __leaf__));






extern float tgammaf (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __tgammaf (float) __attribute__ ((__nothrow__ , __leaf__));





extern float gammaf (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __gammaf (float) __attribute__ ((__nothrow__ , __leaf__));






extern float lgammaf_r (float, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__)); extern float __lgammaf_r (float, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__));







extern float rintf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __rintf (float __x) __attribute__ ((__nothrow__ , __leaf__));


extern float nextafterf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __nextafterf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));

extern float nexttowardf (float __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __nexttowardf (float __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern float remainderf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)); extern float __remainderf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__));



extern float scalbnf (float __x, int __n) __attribute__ ((__nothrow__ , __leaf__)); extern float __scalbnf (float __x, int __n) __attribute__ ((__nothrow__ , __leaf__));



extern int ilogbf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern int __ilogbf (float __x) __attribute__ ((__nothrow__ , __leaf__));




extern float scalblnf (float __x, long int __n) __attribute__ ((__nothrow__ , __leaf__)); extern float __scalblnf (float __x, long int __n) __attribute__ ((__nothrow__ , __leaf__));



extern float nearbyintf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __nearbyintf (float __x) __attribute__ ((__nothrow__ , __leaf__));



extern float roundf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __roundf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern float truncf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __truncf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));




extern float remquof (float __x, float __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__)); extern float __remquof (float __x, float __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__));






extern long int lrintf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lrintf (float __x) __attribute__ ((__nothrow__ , __leaf__));
__extension__
extern long long int llrintf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llrintf (float __x) __attribute__ ((__nothrow__ , __leaf__));



extern long int lroundf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lroundf (float __x) __attribute__ ((__nothrow__ , __leaf__));
__extension__
extern long long int llroundf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llroundf (float __x) __attribute__ ((__nothrow__ , __leaf__));



extern float fdimf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)); extern float __fdimf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__));


extern float fmaxf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __fmaxf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern float fminf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __fminf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern int __fpclassifyf (float __value) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__const__));


extern int __signbitf (float __value) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__const__));



extern float fmaf (float __x, float __y, float __z) __attribute__ ((__nothrow__ , __leaf__)); extern float __fmaf (float __x, float __y, float __z) __attribute__ ((__nothrow__ , __leaf__));




# 371 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern float scalbf (float __x, float __n) __attribute__ ((__nothrow__ , __leaf__)); extern float __scalbf (float __x, float __n) __attribute__ ((__nothrow__ , __leaf__));
# 89 "/usr/include/math.h" 2 3 4
# 132 "/usr/include/math.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 1 3 4
# 52 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4


extern long double acosl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __acosl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

extern long double asinl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __asinl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

extern long double atanl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __atanl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

extern long double atan2l (long double __y, long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __atan2l (long double __y, long double __x) __attribute__ ((__nothrow__ , __leaf__));


extern long double cosl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __cosl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

extern long double sinl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __sinl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

extern long double tanl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __tanl (long double __x) __attribute__ ((__nothrow__ , __leaf__));




extern long double coshl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __coshl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

extern long double sinhl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __sinhl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

extern long double tanhl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __tanhl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

# 86 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4


extern long double acoshl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __acoshl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

extern long double asinhl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __asinhl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

extern long double atanhl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __atanhl (long double __x) __attribute__ ((__nothrow__ , __leaf__));







extern long double expl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __expl (long double __x) __attribute__ ((__nothrow__ , __leaf__));


extern long double frexpl (long double __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__)); extern long double __frexpl (long double __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__));


extern long double ldexpl (long double __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__)); extern long double __ldexpl (long double __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__));


extern long double logl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __logl (long double __x) __attribute__ ((__nothrow__ , __leaf__));


extern long double log10l (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __log10l (long double __x) __attribute__ ((__nothrow__ , __leaf__));


extern long double modfl (long double __x, long double *__iptr) __attribute__ ((__nothrow__ , __leaf__)); extern long double __modfl (long double __x, long double *__iptr) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));

# 126 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4


extern long double expm1l (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __expm1l (long double __x) __attribute__ ((__nothrow__ , __leaf__));


extern long double log1pl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __log1pl (long double __x) __attribute__ ((__nothrow__ , __leaf__));


extern long double logbl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __logbl (long double __x) __attribute__ ((__nothrow__ , __leaf__));






extern long double exp2l (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __exp2l (long double __x) __attribute__ ((__nothrow__ , __leaf__));


extern long double log2l (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __log2l (long double __x) __attribute__ ((__nothrow__ , __leaf__));








extern long double powl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)); extern long double __powl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));


extern long double sqrtl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __sqrtl (long double __x) __attribute__ ((__nothrow__ , __leaf__));





extern long double hypotl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)); extern long double __hypotl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));






extern long double cbrtl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __cbrtl (long double __x) __attribute__ ((__nothrow__ , __leaf__));








extern long double ceill (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __ceill (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern long double fabsl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __fabsl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern long double floorl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __floorl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern long double fmodl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)); extern long double __fmodl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));




extern int __isinfl (long double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern int __finitel (long double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));





extern int isinfl (long double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern int finitel (long double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern long double dreml (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)); extern long double __dreml (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));



extern long double significandl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __significandl (long double __x) __attribute__ ((__nothrow__ , __leaf__));





extern long double copysignl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __copysignl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));






extern long double nanl (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __nanl (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));





extern int __isnanl (long double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern int isnanl (long double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern long double j0l (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __j0l (long double) __attribute__ ((__nothrow__ , __leaf__));
extern long double j1l (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __j1l (long double) __attribute__ ((__nothrow__ , __leaf__));
extern long double jnl (int, long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __jnl (int, long double) __attribute__ ((__nothrow__ , __leaf__));
extern long double y0l (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __y0l (long double) __attribute__ ((__nothrow__ , __leaf__));
extern long double y1l (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __y1l (long double) __attribute__ ((__nothrow__ , __leaf__));
extern long double ynl (int, long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __ynl (int, long double) __attribute__ ((__nothrow__ , __leaf__));






extern long double erfl (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __erfl (long double) __attribute__ ((__nothrow__ , __leaf__));
extern long double erfcl (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __erfcl (long double) __attribute__ ((__nothrow__ , __leaf__));
extern long double lgammal (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __lgammal (long double) __attribute__ ((__nothrow__ , __leaf__));






extern long double tgammal (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __tgammal (long double) __attribute__ ((__nothrow__ , __leaf__));





extern long double gammal (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __gammal (long double) __attribute__ ((__nothrow__ , __leaf__));






extern long double lgammal_r (long double, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__)); extern long double __lgammal_r (long double, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__));







extern long double rintl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __rintl (long double __x) __attribute__ ((__nothrow__ , __leaf__));


extern long double nextafterl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __nextafterl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));

extern long double nexttowardl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __nexttowardl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern long double remainderl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)); extern long double __remainderl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));



extern long double scalbnl (long double __x, int __n) __attribute__ ((__nothrow__ , __leaf__)); extern long double __scalbnl (long double __x, int __n) __attribute__ ((__nothrow__ , __leaf__));



extern int ilogbl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern int __ilogbl (long double __x) __attribute__ ((__nothrow__ , __leaf__));




extern long double scalblnl (long double __x, long int __n) __attribute__ ((__nothrow__ , __leaf__)); extern long double __scalblnl (long double __x, long int __n) __attribute__ ((__nothrow__ , __leaf__));



extern long double nearbyintl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __nearbyintl (long double __x) __attribute__ ((__nothrow__ , __leaf__));



extern long double roundl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __roundl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern long double truncl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __truncl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));




extern long double remquol (long double __x, long double __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__)); extern long double __remquol (long double __x, long double __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__));






extern long int lrintl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lrintl (long double __x) __attribute__ ((__nothrow__ , __leaf__));
__extension__
extern long long int llrintl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llrintl (long double __x) __attribute__ ((__nothrow__ , __leaf__));



extern long int lroundl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lroundl (long double __x) __attribute__ ((__nothrow__ , __leaf__));
__extension__
extern long long int llroundl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llroundl (long double __x) __attribute__ ((__nothrow__ , __leaf__));



extern long double fdiml (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)); extern long double __fdiml (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));


extern long double fmaxl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __fmaxl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern long double fminl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __fminl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern int __fpclassifyl (long double __value) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__const__));


extern int __signbitl (long double __value) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__const__));



extern long double fmal (long double __x, long double __y, long double __z) __attribute__ ((__nothrow__ , __leaf__)); extern long double __fmal (long double __x, long double __y, long double __z) __attribute__ ((__nothrow__ , __leaf__));




# 371 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern long double scalbl (long double __x, long double __n) __attribute__ ((__nothrow__ , __leaf__)); extern long double __scalbl (long double __x, long double __n) __attribute__ ((__nothrow__ , __leaf__));
# 133 "/usr/include/math.h" 2 3 4
# 148 "/usr/include/math.h" 3 4
extern int signgam;
# 189 "/usr/include/math.h" 3 4
enum
  {
    FP_NAN =

      0,
    FP_INFINITE =

      1,
    FP_ZERO =

      2,
    FP_SUBNORMAL =

      3,
    FP_NORMAL =

      4
  };
# 301 "/usr/include/math.h" 3 4
typedef enum
{
  _IEEE_ = -1,
  _SVID_,
  _XOPEN_,
  _POSIX_,
  _ISOC_
} _LIB_VERSION_TYPE;




extern _LIB_VERSION_TYPE _LIB_VERSION;
# 326 "/usr/include/math.h" 3 4
struct exception

  {
    int type;
    char *name;
    double arg1;
    double arg2;
    double retval;
  };




extern int matherr (struct exception *__exc);
# 488 "/usr/include/math.h" 3 4

# 3 "modified/includes.c" 2
# 1 "/usr/include/stdlib.h" 1 3 4
# 32 "/usr/include/stdlib.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 1 3 4
# 212 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 324 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 3 4
typedef int wchar_t;
# 33 "/usr/include/stdlib.h" 2 3 4








# 1 "/usr/include/x86_64-linux-gnu/bits/waitflags.h" 1 3 4
# 50 "/usr/include/x86_64-linux-gnu/bits/waitflags.h" 3 4
typedef enum
{
  P_ALL,
  P_PID,
  P_PGID
} idtype_t;
# 42 "/usr/include/stdlib.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 1 3 4
# 64 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 3 4
# 1 "/usr/include/endian.h" 1 3 4
# 36 "/usr/include/endian.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/endian.h" 1 3 4
# 37 "/usr/include/endian.h" 2 3 4
# 60 "/usr/include/endian.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4


typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;


typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;

typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;







typedef long int __quad_t;
typedef unsigned long int __u_quad_t;
# 121 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/typesizes.h" 1 3 4
# 122 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4


typedef unsigned long int __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long int __ino_t;
typedef unsigned long int __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned long int __nlink_t;
typedef long int __off_t;
typedef long int __off64_t;
typedef int __pid_t;
typedef struct { int __val[2]; } __fsid_t;
typedef long int __clock_t;
typedef unsigned long int __rlim_t;
typedef unsigned long int __rlim64_t;
typedef unsigned int __id_t;
typedef long int __time_t;
typedef unsigned int __useconds_t;
typedef long int __suseconds_t;

typedef int __daddr_t;
typedef int __key_t;


typedef int __clockid_t;


typedef void * __timer_t;


typedef long int __blksize_t;




typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;


typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;


typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;


typedef long int __fsword_t;

typedef long int __ssize_t;


typedef long int __syscall_slong_t;

typedef unsigned long int __syscall_ulong_t;



typedef __off64_t __loff_t;
typedef __quad_t *__qaddr_t;
typedef char *__caddr_t;


typedef long int __intptr_t;


typedef unsigned int __socklen_t;
# 28 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 29 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 2 3 4






# 1 "/usr/include/x86_64-linux-gnu/bits/byteswap-16.h" 1 3 4
# 36 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 2 3 4
# 44 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
static __inline unsigned int
__bswap_32 (unsigned int __bsx)
{
  return __builtin_bswap32 (__bsx);
}
# 108 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
static __inline __uint64_t
__bswap_64 (__uint64_t __bsx)
{
  return __builtin_bswap64 (__bsx);
}
# 61 "/usr/include/endian.h" 2 3 4
# 65 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 2 3 4

union wait
  {
    int w_status;
    struct
      {

 unsigned int __w_termsig:7;
 unsigned int __w_coredump:1;
 unsigned int __w_retcode:8;
 unsigned int:16;







      } __wait_terminated;
    struct
      {

 unsigned int __w_stopval:8;
 unsigned int __w_stopsig:8;
 unsigned int:16;






      } __wait_stopped;
  };
# 43 "/usr/include/stdlib.h" 2 3 4
# 67 "/usr/include/stdlib.h" 3 4
typedef union
  {
    union wait *__uptr;
    int *__iptr;
  } __WAIT_STATUS __attribute__ ((__transparent_union__));
# 95 "/usr/include/stdlib.h" 3 4


typedef struct
  {
    int quot;
    int rem;
  } div_t;



typedef struct
  {
    long int quot;
    long int rem;
  } ldiv_t;







__extension__ typedef struct
  {
    long long int quot;
    long long int rem;
  } lldiv_t;


# 139 "/usr/include/stdlib.h" 3 4
extern size_t __ctype_get_mb_cur_max (void) __attribute__ ((__nothrow__ , __leaf__)) ;




extern double atof (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern int atoi (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern long int atol (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;





__extension__ extern long long int atoll (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;





extern double strtod (const char *__restrict __nptr,
        char **__restrict __endptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern float strtof (const char *__restrict __nptr,
       char **__restrict __endptr) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

extern long double strtold (const char *__restrict __nptr,
       char **__restrict __endptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern long int strtol (const char *__restrict __nptr,
   char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

extern unsigned long int strtoul (const char *__restrict __nptr,
      char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));




__extension__
extern long long int strtoq (const char *__restrict __nptr,
        char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

__extension__
extern unsigned long long int strtouq (const char *__restrict __nptr,
           char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





__extension__
extern long long int strtoll (const char *__restrict __nptr,
         char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

__extension__
extern unsigned long long int strtoull (const char *__restrict __nptr,
     char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

# 305 "/usr/include/stdlib.h" 3 4
extern char *l64a (long int __n) __attribute__ ((__nothrow__ , __leaf__)) ;


extern long int a64l (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;




# 1 "/usr/include/x86_64-linux-gnu/sys/types.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4






typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;




typedef __loff_t loff_t;



typedef __ino_t ino_t;
# 60 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef __dev_t dev_t;




typedef __gid_t gid_t;




typedef __mode_t mode_t;




typedef __nlink_t nlink_t;




typedef __uid_t uid_t;





typedef __off_t off_t;
# 98 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef __pid_t pid_t;





typedef __id_t id_t;




typedef __ssize_t ssize_t;





typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;





typedef __key_t key_t;
# 132 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/include/time.h" 1 3 4
# 57 "/usr/include/time.h" 3 4


typedef __clock_t clock_t;



# 73 "/usr/include/time.h" 3 4


typedef __time_t time_t;



# 91 "/usr/include/time.h" 3 4
typedef __clockid_t clockid_t;
# 103 "/usr/include/time.h" 3 4
typedef __timer_t timer_t;
# 133 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4
# 146 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 1 3 4
# 147 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4



typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;
# 194 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef int int8_t __attribute__ ((__mode__ (__QI__)));
typedef int int16_t __attribute__ ((__mode__ (__HI__)));
typedef int int32_t __attribute__ ((__mode__ (__SI__)));
typedef int int64_t __attribute__ ((__mode__ (__DI__)));


typedef unsigned int u_int8_t __attribute__ ((__mode__ (__QI__)));
typedef unsigned int u_int16_t __attribute__ ((__mode__ (__HI__)));
typedef unsigned int u_int32_t __attribute__ ((__mode__ (__SI__)));
typedef unsigned int u_int64_t __attribute__ ((__mode__ (__DI__)));

typedef int register_t __attribute__ ((__mode__ (__word__)));
# 219 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/sys/select.h" 1 3 4
# 30 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/select.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/select.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 23 "/usr/include/x86_64-linux-gnu/bits/select.h" 2 3 4
# 31 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/sigset.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/sigset.h" 3 4
typedef int __sig_atomic_t;




typedef struct
  {
    unsigned long int __val[(1024 / (8 * sizeof (unsigned long int)))];
  } __sigset_t;
# 34 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4



typedef __sigset_t sigset_t;





# 1 "/usr/include/time.h" 1 3 4
# 120 "/usr/include/time.h" 3 4
struct timespec
  {
    __time_t tv_sec;
    __syscall_slong_t tv_nsec;
  };
# 44 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/time.h" 1 3 4
# 30 "/usr/include/x86_64-linux-gnu/bits/time.h" 3 4
struct timeval
  {
    __time_t tv_sec;
    __suseconds_t tv_usec;
  };
# 46 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4


typedef __suseconds_t suseconds_t;





typedef long int __fd_mask;
# 64 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
typedef struct
  {






    __fd_mask __fds_bits[1024 / (8 * (int) sizeof (__fd_mask))];


  } fd_set;






typedef __fd_mask fd_mask;
# 96 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4

# 106 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
extern int select (int __nfds, fd_set *__restrict __readfds,
     fd_set *__restrict __writefds,
     fd_set *__restrict __exceptfds,
     struct timeval *__restrict __timeout);
# 118 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
extern int pselect (int __nfds, fd_set *__restrict __readfds,
      fd_set *__restrict __writefds,
      fd_set *__restrict __exceptfds,
      const struct timespec *__restrict __timeout,
      const __sigset_t *__restrict __sigmask);
# 131 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4

# 220 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 3 4


__extension__
extern unsigned int gnu_dev_major (unsigned long long int __dev)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
__extension__
extern unsigned int gnu_dev_minor (unsigned long long int __dev)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
__extension__
extern unsigned long long int gnu_dev_makedev (unsigned int __major,
            unsigned int __minor)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
# 58 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 3 4

# 223 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4





typedef __blksize_t blksize_t;






typedef __blkcnt_t blkcnt_t;



typedef __fsblkcnt_t fsblkcnt_t;



typedef __fsfilcnt_t fsfilcnt_t;
# 270 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 1 3 4
# 21 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 2 3 4
# 60 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
typedef unsigned long int pthread_t;


union pthread_attr_t
{
  char __size[56];
  long int __align;
};

typedef union pthread_attr_t pthread_attr_t;





typedef struct __pthread_internal_list
{
  struct __pthread_internal_list *__prev;
  struct __pthread_internal_list *__next;
} __pthread_list_t;
# 90 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
typedef union
{
  struct __pthread_mutex_s
  {
    int __lock;
    unsigned int __count;
    int __owner;

    unsigned int __nusers;



    int __kind;

    short __spins;
    short __elision;
    __pthread_list_t __list;
# 124 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
  } __data;
  char __size[40];
  long int __align;
} pthread_mutex_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_mutexattr_t;




typedef union
{
  struct
  {
    int __lock;
    unsigned int __futex;
    __extension__ unsigned long long int __total_seq;
    __extension__ unsigned long long int __wakeup_seq;
    __extension__ unsigned long long int __woken_seq;
    void *__mutex;
    unsigned int __nwaiters;
    unsigned int __broadcast_seq;
  } __data;
  char __size[48];
  __extension__ long long int __align;
} pthread_cond_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_condattr_t;



typedef unsigned int pthread_key_t;



typedef int pthread_once_t;





typedef union
{

  struct
  {
    int __lock;
    unsigned int __nr_readers;
    unsigned int __readers_wakeup;
    unsigned int __writer_wakeup;
    unsigned int __nr_readers_queued;
    unsigned int __nr_writers_queued;
    int __writer;
    int __shared;
    unsigned long int __pad1;
    unsigned long int __pad2;


    unsigned int __flags;

  } __data;
# 211 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
  char __size[56];
  long int __align;
} pthread_rwlock_t;

typedef union
{
  char __size[8];
  long int __align;
} pthread_rwlockattr_t;





typedef volatile int pthread_spinlock_t;




typedef union
{
  char __size[32];
  long int __align;
} pthread_barrier_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_barrierattr_t;
# 271 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4



# 315 "/usr/include/stdlib.h" 2 3 4






extern long int random (void) __attribute__ ((__nothrow__ , __leaf__));


extern void srandom (unsigned int __seed) __attribute__ ((__nothrow__ , __leaf__));





extern char *initstate (unsigned int __seed, char *__statebuf,
   size_t __statelen) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));



extern char *setstate (char *__statebuf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));







struct random_data
  {
    int32_t *fptr;
    int32_t *rptr;
    int32_t *state;
    int rand_type;
    int rand_deg;
    int rand_sep;
    int32_t *end_ptr;
  };

extern int random_r (struct random_data *__restrict __buf,
       int32_t *__restrict __result) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern int srandom_r (unsigned int __seed, struct random_data *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));

extern int initstate_r (unsigned int __seed, char *__restrict __statebuf,
   size_t __statelen,
   struct random_data *__restrict __buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4)));

extern int setstate_r (char *__restrict __statebuf,
         struct random_data *__restrict __buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));






extern int rand (void) __attribute__ ((__nothrow__ , __leaf__));

extern void srand (unsigned int __seed) __attribute__ ((__nothrow__ , __leaf__));




extern int rand_r (unsigned int *__seed) __attribute__ ((__nothrow__ , __leaf__));







extern double drand48 (void) __attribute__ ((__nothrow__ , __leaf__));
extern double erand48 (unsigned short int __xsubi[3]) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern long int lrand48 (void) __attribute__ ((__nothrow__ , __leaf__));
extern long int nrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern long int mrand48 (void) __attribute__ ((__nothrow__ , __leaf__));
extern long int jrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern void srand48 (long int __seedval) __attribute__ ((__nothrow__ , __leaf__));
extern unsigned short int *seed48 (unsigned short int __seed16v[3])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern void lcong48 (unsigned short int __param[7]) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





struct drand48_data
  {
    unsigned short int __x[3];
    unsigned short int __old_x[3];
    unsigned short int __c;
    unsigned short int __init;
    __extension__ unsigned long long int __a;

  };


extern int drand48_r (struct drand48_data *__restrict __buffer,
        double *__restrict __result) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int erand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        double *__restrict __result) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int lrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int nrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int mrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int jrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int srand48_r (long int __seedval, struct drand48_data *__buffer)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));

extern int seed48_r (unsigned short int __seed16v[3],
       struct drand48_data *__buffer) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern int lcong48_r (unsigned short int __param[7],
        struct drand48_data *__buffer)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));









extern void *malloc (size_t __size) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) ;

extern void *calloc (size_t __nmemb, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) ;










extern void *realloc (void *__ptr, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));

extern void free (void *__ptr) __attribute__ ((__nothrow__ , __leaf__));




extern void cfree (void *__ptr) __attribute__ ((__nothrow__ , __leaf__));



# 1 "/usr/include/alloca.h" 1 3 4
# 24 "/usr/include/alloca.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 1 3 4
# 25 "/usr/include/alloca.h" 2 3 4







extern void *alloca (size_t __size) __attribute__ ((__nothrow__ , __leaf__));






# 493 "/usr/include/stdlib.h" 2 3 4





extern void *valloc (size_t __size) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) ;




extern int posix_memalign (void **__memptr, size_t __alignment, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
# 513 "/usr/include/stdlib.h" 3 4


extern void abort (void) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));



extern int atexit (void (*__func) (void)) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 530 "/usr/include/stdlib.h" 3 4





extern int on_exit (void (*__func) (int __status, void *__arg), void *__arg)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));






extern void exit (int __status) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));













extern void _Exit (int __status) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));






extern char *getenv (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;

# 578 "/usr/include/stdlib.h" 3 4
extern int putenv (char *__string) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int setenv (const char *__name, const char *__value, int __replace)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));


extern int unsetenv (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));






extern int clearenv (void) __attribute__ ((__nothrow__ , __leaf__));
# 606 "/usr/include/stdlib.h" 3 4
extern char *mktemp (char *__template) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 620 "/usr/include/stdlib.h" 3 4
extern int mkstemp (char *__template) __attribute__ ((__nonnull__ (1))) ;
# 642 "/usr/include/stdlib.h" 3 4
extern int mkstemps (char *__template, int __suffixlen) __attribute__ ((__nonnull__ (1))) ;
# 663 "/usr/include/stdlib.h" 3 4
extern char *mkdtemp (char *__template) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
# 712 "/usr/include/stdlib.h" 3 4





extern int system (const char *__command) ;

# 734 "/usr/include/stdlib.h" 3 4
extern char *realpath (const char *__restrict __name,
         char *__restrict __resolved) __attribute__ ((__nothrow__ , __leaf__)) ;






typedef int (*__compar_fn_t) (const void *, const void *);
# 752 "/usr/include/stdlib.h" 3 4



extern void *bsearch (const void *__key, const void *__base,
        size_t __nmemb, size_t __size, __compar_fn_t __compar)
     __attribute__ ((__nonnull__ (1, 2, 5))) ;







extern void qsort (void *__base, size_t __nmemb, size_t __size,
     __compar_fn_t __compar) __attribute__ ((__nonnull__ (1, 4)));
# 775 "/usr/include/stdlib.h" 3 4
extern int abs (int __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;
extern long int labs (long int __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;



__extension__ extern long long int llabs (long long int __x)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;







extern div_t div (int __numer, int __denom)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;
extern ldiv_t ldiv (long int __numer, long int __denom)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;




__extension__ extern lldiv_t lldiv (long long int __numer,
        long long int __denom)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;

# 812 "/usr/include/stdlib.h" 3 4
extern char *ecvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;




extern char *fcvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;




extern char *gcvt (double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3))) ;




extern char *qecvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qfcvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qgcvt (long double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3))) ;




extern int ecvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int fcvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));

extern int qecvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int qfcvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));






extern int mblen (const char *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__));


extern int mbtowc (wchar_t *__restrict __pwc,
     const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__ , __leaf__));


extern int wctomb (char *__s, wchar_t __wchar) __attribute__ ((__nothrow__ , __leaf__));



extern size_t mbstowcs (wchar_t *__restrict __pwcs,
   const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__ , __leaf__));

extern size_t wcstombs (char *__restrict __s,
   const wchar_t *__restrict __pwcs, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__));








extern int rpmatch (const char *__response) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
# 899 "/usr/include/stdlib.h" 3 4
extern int getsubopt (char **__restrict __optionp,
        char *const *__restrict __tokens,
        char **__restrict __valuep)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2, 3))) ;
# 951 "/usr/include/stdlib.h" 3 4
extern int getloadavg (double __loadavg[], int __nelem)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


# 1 "/usr/include/x86_64-linux-gnu/bits/stdlib-float.h" 1 3 4
# 956 "/usr/include/stdlib.h" 2 3 4
# 968 "/usr/include/stdlib.h" 3 4

# 4 "modified/includes.c" 2
# 1 "/usr/include/stdio.h" 1 3 4
# 29 "/usr/include/stdio.h" 3 4




# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 1 3 4
# 34 "/usr/include/stdio.h" 2 3 4
# 44 "/usr/include/stdio.h" 3 4
struct _IO_FILE;



typedef struct _IO_FILE FILE;





# 64 "/usr/include/stdio.h" 3 4
typedef struct _IO_FILE __FILE;
# 74 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/libio.h" 1 3 4
# 31 "/usr/include/libio.h" 3 4
# 1 "/usr/include/_G_config.h" 1 3 4
# 15 "/usr/include/_G_config.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 1 3 4
# 16 "/usr/include/_G_config.h" 2 3 4




# 1 "/usr/include/wchar.h" 1 3 4
# 82 "/usr/include/wchar.h" 3 4
typedef struct
{
  int __count;
  union
  {

    unsigned int __wch;



    char __wchb[4];
  } __value;
} __mbstate_t;
# 21 "/usr/include/_G_config.h" 2 3 4
typedef struct
{
  __off_t __pos;
  __mbstate_t __state;
} _G_fpos_t;
typedef struct
{
  __off64_t __pos;
  __mbstate_t __state;
} _G_fpos64_t;
# 32 "/usr/include/libio.h" 2 3 4
# 49 "/usr/include/libio.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stdarg.h" 1 3 4
# 40 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 50 "/usr/include/libio.h" 2 3 4
# 144 "/usr/include/libio.h" 3 4
struct _IO_jump_t; struct _IO_FILE;
# 154 "/usr/include/libio.h" 3 4
typedef void _IO_lock_t;





struct _IO_marker {
  struct _IO_marker *_next;
  struct _IO_FILE *_sbuf;



  int _pos;
# 177 "/usr/include/libio.h" 3 4
};


enum __codecvt_result
{
  __codecvt_ok,
  __codecvt_partial,
  __codecvt_error,
  __codecvt_noconv
};
# 245 "/usr/include/libio.h" 3 4
struct _IO_FILE {
  int _flags;




  char* _IO_read_ptr;
  char* _IO_read_end;
  char* _IO_read_base;
  char* _IO_write_base;
  char* _IO_write_ptr;
  char* _IO_write_end;
  char* _IO_buf_base;
  char* _IO_buf_end;

  char *_IO_save_base;
  char *_IO_backup_base;
  char *_IO_save_end;

  struct _IO_marker *_markers;

  struct _IO_FILE *_chain;

  int _fileno;



  int _flags2;

  __off_t _old_offset;



  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];



  _IO_lock_t *_lock;
# 293 "/usr/include/libio.h" 3 4
  __off64_t _offset;
# 302 "/usr/include/libio.h" 3 4
  void *__pad1;
  void *__pad2;
  void *__pad3;
  void *__pad4;
  size_t __pad5;

  int _mode;

  char _unused2[15 * sizeof (int) - 4 * sizeof (void *) - sizeof (size_t)];

};


typedef struct _IO_FILE _IO_FILE;


struct _IO_FILE_plus;

extern struct _IO_FILE_plus _IO_2_1_stdin_;
extern struct _IO_FILE_plus _IO_2_1_stdout_;
extern struct _IO_FILE_plus _IO_2_1_stderr_;
# 338 "/usr/include/libio.h" 3 4
typedef __ssize_t __io_read_fn (void *__cookie, char *__buf, size_t __nbytes);







typedef __ssize_t __io_write_fn (void *__cookie, const char *__buf,
     size_t __n);







typedef int __io_seek_fn (void *__cookie, __off64_t *__pos, int __w);


typedef int __io_close_fn (void *__cookie);
# 390 "/usr/include/libio.h" 3 4
extern int __underflow (_IO_FILE *);
extern int __uflow (_IO_FILE *);
extern int __overflow (_IO_FILE *, int);
# 434 "/usr/include/libio.h" 3 4
extern int _IO_getc (_IO_FILE *__fp);
extern int _IO_putc (int __c, _IO_FILE *__fp);
extern int _IO_feof (_IO_FILE *__fp) __attribute__ ((__nothrow__ , __leaf__));
extern int _IO_ferror (_IO_FILE *__fp) __attribute__ ((__nothrow__ , __leaf__));

extern int _IO_peekc_locked (_IO_FILE *__fp);





extern void _IO_flockfile (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
extern void _IO_funlockfile (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
extern int _IO_ftrylockfile (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
# 464 "/usr/include/libio.h" 3 4
extern int _IO_vfscanf (_IO_FILE * __restrict, const char * __restrict,
   __gnuc_va_list, int *__restrict);
extern int _IO_vfprintf (_IO_FILE *__restrict, const char *__restrict,
    __gnuc_va_list);
extern __ssize_t _IO_padn (_IO_FILE *, int, __ssize_t);
extern size_t _IO_sgetn (_IO_FILE *, void *, size_t);

extern __off64_t _IO_seekoff (_IO_FILE *, __off64_t, int, int);
extern __off64_t _IO_seekpos (_IO_FILE *, __off64_t, int);

extern void _IO_free_backup_area (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
# 75 "/usr/include/stdio.h" 2 3 4




typedef __gnuc_va_list va_list;
# 108 "/usr/include/stdio.h" 3 4


typedef _G_fpos_t fpos_t;




# 164 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/stdio_lim.h" 1 3 4
# 165 "/usr/include/stdio.h" 2 3 4



extern struct _IO_FILE *stdin;
extern struct _IO_FILE *stdout;
extern struct _IO_FILE *stderr;







extern int remove (const char *__filename) __attribute__ ((__nothrow__ , __leaf__));

extern int rename (const char *__old, const char *__new) __attribute__ ((__nothrow__ , __leaf__));




extern int renameat (int __oldfd, const char *__old, int __newfd,
       const char *__new) __attribute__ ((__nothrow__ , __leaf__));








extern FILE *tmpfile (void) ;
# 209 "/usr/include/stdio.h" 3 4
extern char *tmpnam (char *__s) __attribute__ ((__nothrow__ , __leaf__)) ;





extern char *tmpnam_r (char *__s) __attribute__ ((__nothrow__ , __leaf__)) ;
# 227 "/usr/include/stdio.h" 3 4
extern char *tempnam (const char *__dir, const char *__pfx)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) ;








extern int fclose (FILE *__stream);




extern int fflush (FILE *__stream);

# 252 "/usr/include/stdio.h" 3 4
extern int fflush_unlocked (FILE *__stream);
# 266 "/usr/include/stdio.h" 3 4






extern FILE *fopen (const char *__restrict __filename,
      const char *__restrict __modes) ;




extern FILE *freopen (const char *__restrict __filename,
        const char *__restrict __modes,
        FILE *__restrict __stream) ;
# 295 "/usr/include/stdio.h" 3 4

# 306 "/usr/include/stdio.h" 3 4
extern FILE *fdopen (int __fd, const char *__modes) __attribute__ ((__nothrow__ , __leaf__)) ;
# 319 "/usr/include/stdio.h" 3 4
extern FILE *fmemopen (void *__s, size_t __len, const char *__modes)
  __attribute__ ((__nothrow__ , __leaf__)) ;




extern FILE *open_memstream (char **__bufloc, size_t *__sizeloc) __attribute__ ((__nothrow__ , __leaf__)) ;






extern void setbuf (FILE *__restrict __stream, char *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__));



extern int setvbuf (FILE *__restrict __stream, char *__restrict __buf,
      int __modes, size_t __n) __attribute__ ((__nothrow__ , __leaf__));





extern void setbuffer (FILE *__restrict __stream, char *__restrict __buf,
         size_t __size) __attribute__ ((__nothrow__ , __leaf__));


extern void setlinebuf (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));








extern int fprintf (FILE *__restrict __stream,
      const char *__restrict __format, ...);




extern int printf (const char *__restrict __format, ...);

extern int sprintf (char *__restrict __s,
      const char *__restrict __format, ...) __attribute__ ((__nothrow__));





extern int vfprintf (FILE *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg);




extern int vprintf (const char *__restrict __format, __gnuc_va_list __arg);

extern int vsprintf (char *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg) __attribute__ ((__nothrow__));





extern int snprintf (char *__restrict __s, size_t __maxlen,
       const char *__restrict __format, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 4)));

extern int vsnprintf (char *__restrict __s, size_t __maxlen,
        const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 0)));

# 412 "/usr/include/stdio.h" 3 4
extern int vdprintf (int __fd, const char *__restrict __fmt,
       __gnuc_va_list __arg)
     __attribute__ ((__format__ (__printf__, 2, 0)));
extern int dprintf (int __fd, const char *__restrict __fmt, ...)
     __attribute__ ((__format__ (__printf__, 2, 3)));








extern int fscanf (FILE *__restrict __stream,
     const char *__restrict __format, ...) ;




extern int scanf (const char *__restrict __format, ...) ;

extern int sscanf (const char *__restrict __s,
     const char *__restrict __format, ...) __attribute__ ((__nothrow__ , __leaf__));
# 443 "/usr/include/stdio.h" 3 4
extern int fscanf (FILE *__restrict __stream, const char *__restrict __format, ...) __asm__ ("" "__isoc99_fscanf")

                               ;
extern int scanf (const char *__restrict __format, ...) __asm__ ("" "__isoc99_scanf")
                              ;
extern int sscanf (const char *__restrict __s, const char *__restrict __format, ...) __asm__ ("" "__isoc99_sscanf") __attribute__ ((__nothrow__ , __leaf__))

                      ;
# 463 "/usr/include/stdio.h" 3 4








extern int vfscanf (FILE *__restrict __s, const char *__restrict __format,
      __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 2, 0))) ;





extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 1, 0))) ;


extern int vsscanf (const char *__restrict __s,
      const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__format__ (__scanf__, 2, 0)));
# 494 "/usr/include/stdio.h" 3 4
extern int vfscanf (FILE *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vfscanf")



     __attribute__ ((__format__ (__scanf__, 2, 0))) ;
extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vscanf")

     __attribute__ ((__format__ (__scanf__, 1, 0))) ;
extern int vsscanf (const char *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vsscanf") __attribute__ ((__nothrow__ , __leaf__))



     __attribute__ ((__format__ (__scanf__, 2, 0)));
# 522 "/usr/include/stdio.h" 3 4









extern int fgetc (FILE *__stream);
extern int getc (FILE *__stream);





extern int getchar (void);

# 550 "/usr/include/stdio.h" 3 4
extern int getc_unlocked (FILE *__stream);
extern int getchar_unlocked (void);
# 561 "/usr/include/stdio.h" 3 4
extern int fgetc_unlocked (FILE *__stream);











extern int fputc (int __c, FILE *__stream);
extern int putc (int __c, FILE *__stream);





extern int putchar (int __c);

# 594 "/usr/include/stdio.h" 3 4
extern int fputc_unlocked (int __c, FILE *__stream);







extern int putc_unlocked (int __c, FILE *__stream);
extern int putchar_unlocked (int __c);






extern int getw (FILE *__stream);


extern int putw (int __w, FILE *__stream);








extern char *fgets (char *__restrict __s, int __n, FILE *__restrict __stream)
     ;
# 638 "/usr/include/stdio.h" 3 4
extern char *gets (char *__s) __attribute__ ((__deprecated__));


# 665 "/usr/include/stdio.h" 3 4
extern __ssize_t __getdelim (char **__restrict __lineptr,
          size_t *__restrict __n, int __delimiter,
          FILE *__restrict __stream) ;
extern __ssize_t getdelim (char **__restrict __lineptr,
        size_t *__restrict __n, int __delimiter,
        FILE *__restrict __stream) ;







extern __ssize_t getline (char **__restrict __lineptr,
       size_t *__restrict __n,
       FILE *__restrict __stream) ;








extern int fputs (const char *__restrict __s, FILE *__restrict __stream);





extern int puts (const char *__s);






extern int ungetc (int __c, FILE *__stream);






extern size_t fread (void *__restrict __ptr, size_t __size,
       size_t __n, FILE *__restrict __stream) ;




extern size_t fwrite (const void *__restrict __ptr, size_t __size,
        size_t __n, FILE *__restrict __s);

# 737 "/usr/include/stdio.h" 3 4
extern size_t fread_unlocked (void *__restrict __ptr, size_t __size,
         size_t __n, FILE *__restrict __stream) ;
extern size_t fwrite_unlocked (const void *__restrict __ptr, size_t __size,
          size_t __n, FILE *__restrict __stream);








extern int fseek (FILE *__stream, long int __off, int __whence);




extern long int ftell (FILE *__stream) ;




extern void rewind (FILE *__stream);

# 773 "/usr/include/stdio.h" 3 4
extern int fseeko (FILE *__stream, __off_t __off, int __whence);




extern __off_t ftello (FILE *__stream) ;
# 792 "/usr/include/stdio.h" 3 4






extern int fgetpos (FILE *__restrict __stream, fpos_t *__restrict __pos);




extern int fsetpos (FILE *__stream, const fpos_t *__pos);
# 815 "/usr/include/stdio.h" 3 4

# 824 "/usr/include/stdio.h" 3 4


extern void clearerr (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));

extern int feof (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;

extern int ferror (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;




extern void clearerr_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));
extern int feof_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;
extern int ferror_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;








extern void perror (const char *__s);






# 1 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h" 1 3 4
# 26 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h" 3 4
extern int sys_nerr;
extern const char *const sys_errlist[];
# 854 "/usr/include/stdio.h" 2 3 4




extern int fileno (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int fileno_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;
# 873 "/usr/include/stdio.h" 3 4
extern FILE *popen (const char *__command, const char *__modes) ;





extern int pclose (FILE *__stream);





extern char *ctermid (char *__s) __attribute__ ((__nothrow__ , __leaf__));
# 913 "/usr/include/stdio.h" 3 4
extern void flockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));



extern int ftrylockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;


extern void funlockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));
# 943 "/usr/include/stdio.h" 3 4

# 5 "modified/includes.c" 2
# 37 "modified/includes.c"
# 1 "modified/main.h" 1
# 13 "modified/main.h"
# 1 "/usr/include/x86_64-linux-gnu/sys/times.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/sys/times.h" 3 4
# 1 "/usr/include/time.h" 1 3 4
# 29 "/usr/include/x86_64-linux-gnu/sys/times.h" 2 3 4





struct tms
  {
    clock_t tms_utime;
    clock_t tms_stime;

    clock_t tms_cutime;
    clock_t tms_cstime;
  };






extern clock_t times (struct tms *__buffer) __attribute__ ((__nothrow__ , __leaf__));


# 14 "modified/main.h" 2





typedef struct {
 double timeScale;
 clock_t tickStart, tickStop;
 struct tms timeStart, timeStop;

} MAIN_Time;


typedef enum {NOTHING = 0, COMPARE, STORE} MAIN_Action;
typedef enum {LDC = 0, CHANNEL} MAIN_SimType;

typedef struct {
 int nTimeSteps;
 char* resultFilename;
 MAIN_Action action;
 MAIN_SimType simType;
 char* obstacleFilename;
} MAIN_Param;



void MAIN_parseCommandLine( int nArgs, char* arg[], MAIN_Param* param );
void MAIN_printInfo( const MAIN_Param* param );
void MAIN_initialize( const MAIN_Param* param );
void MAIN_finalize( const MAIN_Param* param );


void MAIN_startClock( MAIN_Time* time );
void MAIN_stopClock( MAIN_Time* time, const MAIN_Param* param );
# 38 "modified/includes.c" 2



# 1 "/usr/include/x86_64-linux-gnu/sys/stat.h" 1 3 4
# 37 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
# 1 "/usr/include/time.h" 1 3 4
# 38 "/usr/include/x86_64-linux-gnu/sys/stat.h" 2 3 4
# 103 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/stat.h" 1 3 4
# 46 "/usr/include/x86_64-linux-gnu/bits/stat.h" 3 4
struct stat
  {
    __dev_t st_dev;




    __ino_t st_ino;







    __nlink_t st_nlink;
    __mode_t st_mode;

    __uid_t st_uid;
    __gid_t st_gid;

    int __pad0;

    __dev_t st_rdev;




    __off_t st_size;



    __blksize_t st_blksize;

    __blkcnt_t st_blocks;
# 91 "/usr/include/x86_64-linux-gnu/bits/stat.h" 3 4
    struct timespec st_atim;
    struct timespec st_mtim;
    struct timespec st_ctim;
# 106 "/usr/include/x86_64-linux-gnu/bits/stat.h" 3 4
    __syscall_slong_t __glibc_reserved[3];
# 115 "/usr/include/x86_64-linux-gnu/bits/stat.h" 3 4
  };
# 106 "/usr/include/x86_64-linux-gnu/sys/stat.h" 2 3 4
# 209 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
extern int stat (const char *__restrict __file,
   struct stat *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern int fstat (int __fd, struct stat *__buf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));
# 238 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
extern int fstatat (int __fd, const char *__restrict __file,
      struct stat *__restrict __buf, int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));
# 263 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
extern int lstat (const char *__restrict __file,
    struct stat *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
# 284 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
extern int chmod (const char *__file, __mode_t __mode)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int lchmod (const char *__file, __mode_t __mode)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));




extern int fchmod (int __fd, __mode_t __mode) __attribute__ ((__nothrow__ , __leaf__));





extern int fchmodat (int __fd, const char *__file, __mode_t __mode,
       int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2))) ;






extern __mode_t umask (__mode_t __mask) __attribute__ ((__nothrow__ , __leaf__));
# 321 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
extern int mkdir (const char *__path, __mode_t __mode)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int mkdirat (int __fd, const char *__path, __mode_t __mode)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));






extern int mknod (const char *__path, __mode_t __mode, __dev_t __dev)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int mknodat (int __fd, const char *__path, __mode_t __mode,
      __dev_t __dev) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));





extern int mkfifo (const char *__path, __mode_t __mode)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int mkfifoat (int __fd, const char *__path, __mode_t __mode)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));





extern int utimensat (int __fd, const char *__path,
        const struct timespec __times[2],
        int __flags)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));




extern int futimens (int __fd, const struct timespec __times[2]) __attribute__ ((__nothrow__ , __leaf__));
# 399 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
extern int __fxstat (int __ver, int __fildes, struct stat *__stat_buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3)));
extern int __xstat (int __ver, const char *__filename,
      struct stat *__stat_buf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));
extern int __lxstat (int __ver, const char *__filename,
       struct stat *__stat_buf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));
extern int __fxstatat (int __ver, int __fildes, const char *__filename,
         struct stat *__stat_buf, int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4)));
# 442 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
extern int __xmknod (int __ver, const char *__path, __mode_t __mode,
       __dev_t *__dev) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4)));

extern int __xmknodat (int __ver, int __fd, const char *__path,
         __mode_t __mode, __dev_t *__dev)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 5)));
# 534 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4

# 42 "modified/includes.c" 2
void LBM_allocateGrid ( double **ptr ) {
	const size_t margin = 2 *( 1 *( 100 ) ) *( 1 *( 100 ) ) *N_CELL_ENTRIES , size = sizeof ( LBM_Grid ) + 2 *margin *sizeof ( double );
	*ptr = malloc ( size );
	if ( ! *ptr ) {
		printf ( "LBM_allocateGrid: could not allocate %.1f MByte\n" , size / ( 1024.0 *1024.0 ) );
		exit ( 1 );
	}

	printf ( "LBM_allocateGrid: allocated %.1f MByte\n" , size / ( 1024.0 *1024.0 ) );
	*ptr += margin;
}

void LBM_freeGrid ( double **ptr ) {
	const size_t margin = 2 *( 1 *( 100 ) ) *( 1 *( 100 ) ) *N_CELL_ENTRIES;
	free ( *ptr - margin );
	*ptr = ( ( void *) 0 );
}

void LBM_initializeGrid ( LBM_Grid grid ) {
	int i;
	for ( i = ( ( 0 ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( - 2 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) );
	i < ( ( 0 ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( ( 130 ) + 2 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) );
	i += N_CELL_ENTRIES ) {
		( ( ( grid ) [ ( ( C ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) = ( 1.0 / 3.0 );
		( ( ( grid ) [ ( ( N ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) = ( 1.0 / 18.0 );
		( ( ( grid ) [ ( ( S ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) = ( 1.0 / 18.0 );
		( ( ( grid ) [ ( ( E ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) = ( 1.0 / 18.0 );
		( ( ( grid ) [ ( ( W ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) = ( 1.0 / 18.0 );
		( ( ( grid ) [ ( ( T ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) = ( 1.0 / 18.0 );
		( ( ( grid ) [ ( ( B ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) = ( 1.0 / 18.0 );
		( ( ( grid ) [ ( ( NE ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) = ( 1.0 / 36.0 );
		( ( ( grid ) [ ( ( NW ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) = ( 1.0 / 36.0 );
		( ( ( grid ) [ ( ( SE ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) = ( 1.0 / 36.0 );
		( ( ( grid ) [ ( ( SW ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) = ( 1.0 / 36.0 );
		( ( ( grid ) [ ( ( NT ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) = ( 1.0 / 36.0 );
		( ( ( grid ) [ ( ( NB ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) = ( 1.0 / 36.0 );
		( ( ( grid ) [ ( ( ST ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) = ( 1.0 / 36.0 );
		( ( ( grid ) [ ( ( SB ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) = ( 1.0 / 36.0 );
		( ( ( grid ) [ ( ( ET ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) = ( 1.0 / 36.0 );
		( ( ( grid ) [ ( ( EB ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) = ( 1.0 / 36.0 );
		( ( ( grid ) [ ( ( WT ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) = ( 1.0 / 36.0 );
		( ( ( grid ) [ ( ( WB ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) = ( 1.0 / 36.0 );
		{
			unsigned int *const _aux_ = ( ( unsigned int *) ( ( void *) ( &( ( ( ( grid ) [ ( ( FLAGS ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) ) ) );
			( *_aux_ ) = 0;
		}

		;
	}

}

void LBM_swapGrids ( LBM_GridPtr *grid1 , LBM_GridPtr *grid2 ) {
	LBM_GridPtr aux = *grid1;
	*grid1 = *grid2;
	*grid2 = aux;
}

void LBM_loadObstacleFile ( LBM_Grid grid , const char *filename ) {
	int x , y , z;
	FILE *file = fopen ( filename , "rb" );
	for ( z = 0;
	z < ( 130 );
	z ++ ) {
		for ( y = 0;
		y < ( 1 *( 100 ) );
		y ++ ) {
			for ( x = 0;
			x < ( 1 *( 100 ) );
			x ++ ) {
				if ( fgetc ( file ) != '.' ) {
					unsigned int *const _aux_ = ( ( unsigned int *) ( ( void *) ( &( ( ( grid ) [ ( ( FLAGS ) + N_CELL_ENTRIES *( ( x ) + ( y ) *( 1 *( 100 ) ) + ( z ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) ] ) ) ) ) );
					( *_aux_ ) |= ( OBSTACLE );
				}

				;
			}

			fgetc ( file );
		}

		fgetc ( file );
	}

	fclose ( file );
}

void LBM_initializeSpecialCellsForLDC ( LBM_Grid grid ) {
	int x , y , z;
	for ( z = - 2;
	z < ( 130 ) + 2;
	z ++ ) {
		for ( y = 0;
		y < ( 1 *( 100 ) );
		y ++ ) {
			for ( x = 0;
			x < ( 1 *( 100 ) );
			x ++ ) {
				if ( x == 0 || x == ( 1 *( 100 ) ) - 1 || y == 0 || y == ( 1 *( 100 ) ) - 1 || z == 0 || z == ( 130 ) - 1 ) {
					{
						unsigned int *const _aux_ = ( ( unsigned int *) ( ( void *) ( &( ( ( grid ) [ ( ( FLAGS ) + N_CELL_ENTRIES *( ( x ) + ( y ) *( 1 *( 100 ) ) + ( z ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) ] ) ) ) ) );
						( *_aux_ ) |= ( OBSTACLE );
					}

					;
				}

				else {
					if ( ( z == 1 || z == ( 130 ) - 2 ) && x > 1 && x < ( 1 *( 100 ) ) - 2 && y > 1 && y < ( 1 *( 100 ) ) - 2 ) {
						{
							unsigned int *const _aux_ = ( ( unsigned int *) ( ( void *) ( &( ( ( grid ) [ ( ( FLAGS ) + N_CELL_ENTRIES *( ( x ) + ( y ) *( 1 *( 100 ) ) + ( z ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) ] ) ) ) ) );
							( *_aux_ ) |= ( ACCEL );
						}

						;
					}

				}

			}

		}

	}

}

void LBM_initializeSpecialCellsForChannel ( LBM_Grid grid ) {
	int x , y , z;
	for ( z = - 2;
	z < ( 130 ) + 2;
	z ++ ) {
		for ( y = 0;
		y < ( 1 *( 100 ) );
		y ++ ) {
			for ( x = 0;
			x < ( 1 *( 100 ) );
			x ++ ) {
				if ( x == 0 || x == ( 1 *( 100 ) ) - 1 || y == 0 || y == ( 1 *( 100 ) ) - 1 ) {
					{
						unsigned int *const _aux_ = ( ( unsigned int *) ( ( void *) ( &( ( ( grid ) [ ( ( FLAGS ) + N_CELL_ENTRIES *( ( x ) + ( y ) *( 1 *( 100 ) ) + ( z ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) ] ) ) ) ) );
						( *_aux_ ) |= ( OBSTACLE );
					}

					;
					if ( ( z == 0 || z == ( 130 ) - 1 ) && ! ( ( *( ( unsigned int *) ( ( void *) ( &( ( ( grid ) [ ( ( FLAGS ) + N_CELL_ENTRIES *( ( x ) + ( y ) *( 1 *( 100 ) ) + ( z ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) ] ) ) ) ) ) ) & ( OBSTACLE ) ) ) {
						unsigned int *const _aux_ = ( ( unsigned int *) ( ( void *) ( &( ( ( grid ) [ ( ( FLAGS ) + N_CELL_ENTRIES *( ( x ) + ( y ) *( 1 *( 100 ) ) + ( z ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) ] ) ) ) ) );
						( *_aux_ ) |= ( IN_OUT_FLOW );
					}

					;
				}

			}

		}

	}

}

void LBM_performStreamCollideBGK ( LBM_Grid srcGrid , LBM_Grid dstGrid ) {
	int i;
	double ux , uy , uz , u2 , rho;
	for ( i = ( ( 0 ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) );
	i < ( ( 0 ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( ( 130 ) ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) );
	i += N_CELL_ENTRIES ) {
		if ( ( ( *( ( unsigned int *) ( ( void *) ( &( ( ( ( srcGrid ) [ ( ( FLAGS ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) ) ) ) ) & ( OBSTACLE ) ) ) {
			( ( ( ( dstGrid ) [ ( ( C ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) = ( ( ( ( srcGrid ) [ ( ( C ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) );
			( ( ( ( dstGrid ) [ ( ( S ) + N_CELL_ENTRIES *( ( 0 ) + ( - 1 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) = ( ( ( ( srcGrid ) [ ( ( N ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) );
			( ( ( ( dstGrid ) [ ( ( N ) + N_CELL_ENTRIES *( ( 0 ) + ( + 1 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) = ( ( ( ( srcGrid ) [ ( ( S ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) );
			( ( ( ( dstGrid ) [ ( ( W ) + N_CELL_ENTRIES *( ( - 1 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) = ( ( ( ( srcGrid ) [ ( ( E ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) );
			( ( ( ( dstGrid ) [ ( ( E ) + N_CELL_ENTRIES *( ( + 1 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) = ( ( ( ( srcGrid ) [ ( ( W ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) );
			( ( ( ( dstGrid ) [ ( ( B ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( - 1 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) = ( ( ( ( srcGrid ) [ ( ( T ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) );
			( ( ( ( dstGrid ) [ ( ( T ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( + 1 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) = ( ( ( ( srcGrid ) [ ( ( B ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) );
			( ( ( ( dstGrid ) [ ( ( SW ) + N_CELL_ENTRIES *( ( - 1 ) + ( - 1 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) = ( ( ( ( srcGrid ) [ ( ( NE ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) );
			( ( ( ( dstGrid ) [ ( ( SE ) + N_CELL_ENTRIES *( ( + 1 ) + ( - 1 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) = ( ( ( ( srcGrid ) [ ( ( NW ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) );
			( ( ( ( dstGrid ) [ ( ( NW ) + N_CELL_ENTRIES *( ( - 1 ) + ( + 1 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) = ( ( ( ( srcGrid ) [ ( ( SE ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) );
			( ( ( ( dstGrid ) [ ( ( NE ) + N_CELL_ENTRIES *( ( + 1 ) + ( + 1 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) = ( ( ( ( srcGrid ) [ ( ( SW ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) );
			( ( ( ( dstGrid ) [ ( ( SB ) + N_CELL_ENTRIES *( ( 0 ) + ( - 1 ) *( 1 *( 100 ) ) + ( - 1 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) = ( ( ( ( srcGrid ) [ ( ( NT ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) );
			( ( ( ( dstGrid ) [ ( ( ST ) + N_CELL_ENTRIES *( ( 0 ) + ( - 1 ) *( 1 *( 100 ) ) + ( + 1 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) = ( ( ( ( srcGrid ) [ ( ( NB ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) );
			( ( ( ( dstGrid ) [ ( ( NB ) + N_CELL_ENTRIES *( ( 0 ) + ( + 1 ) *( 1 *( 100 ) ) + ( - 1 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) = ( ( ( ( srcGrid ) [ ( ( ST ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) );
			( ( ( ( dstGrid ) [ ( ( NT ) + N_CELL_ENTRIES *( ( 0 ) + ( + 1 ) *( 1 *( 100 ) ) + ( + 1 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) = ( ( ( ( srcGrid ) [ ( ( SB ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) );
			( ( ( ( dstGrid ) [ ( ( WB ) + N_CELL_ENTRIES *( ( - 1 ) + ( 0 ) *( 1 *( 100 ) ) + ( - 1 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) = ( ( ( ( srcGrid ) [ ( ( ET ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) );
			( ( ( ( dstGrid ) [ ( ( WT ) + N_CELL_ENTRIES *( ( - 1 ) + ( 0 ) *( 1 *( 100 ) ) + ( + 1 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) = ( ( ( ( srcGrid ) [ ( ( EB ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) );
			( ( ( ( dstGrid ) [ ( ( EB ) + N_CELL_ENTRIES *( ( + 1 ) + ( 0 ) *( 1 *( 100 ) ) + ( - 1 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) = ( ( ( ( srcGrid ) [ ( ( WT ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) );
			( ( ( ( dstGrid ) [ ( ( ET ) + N_CELL_ENTRIES *( ( + 1 ) + ( 0 ) *( 1 *( 100 ) ) + ( + 1 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) = ( ( ( ( srcGrid ) [ ( ( WB ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) );
			continue;
		}

		rho = + ( ( ( ( srcGrid ) [ ( ( C ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) + ( ( ( ( srcGrid ) [ ( ( N ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) + ( ( ( ( srcGrid ) [ ( ( S ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) + ( ( ( ( srcGrid ) [ ( ( E ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) + ( ( ( ( srcGrid ) [ ( ( W ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) + ( ( ( ( srcGrid ) [ ( ( T ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) + ( ( ( ( srcGrid ) [ ( ( B ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) + ( ( ( ( srcGrid ) [ ( ( NE ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) + ( ( ( ( srcGrid ) [ ( ( NW ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) + ( ( ( ( srcGrid ) [ ( ( SE ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) + ( ( ( ( srcGrid ) [ ( ( SW ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) + ( ( ( ( srcGrid ) [ ( ( NT ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) + ( ( ( ( srcGrid ) [ ( ( NB ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) + ( ( ( ( srcGrid ) [ ( ( ST ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) + ( ( ( ( srcGrid ) [ ( ( SB ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) + ( ( ( ( srcGrid ) [ ( ( ET ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) + ( ( ( ( srcGrid ) [ ( ( EB ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) + ( ( ( ( srcGrid ) [ ( ( WT ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) + ( ( ( ( srcGrid ) [ ( ( WB ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) );
		ux = + ( ( ( ( srcGrid ) [ ( ( E ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) - ( ( ( ( srcGrid ) [ ( ( W ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) + ( ( ( ( srcGrid ) [ ( ( NE ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) - ( ( ( ( srcGrid ) [ ( ( NW ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) + ( ( ( ( srcGrid ) [ ( ( SE ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) - ( ( ( ( srcGrid ) [ ( ( SW ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) + ( ( ( ( srcGrid ) [ ( ( ET ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) + ( ( ( ( srcGrid ) [ ( ( EB ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) - ( ( ( ( srcGrid ) [ ( ( WT ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) - ( ( ( ( srcGrid ) [ ( ( WB ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) );
		uy = + ( ( ( ( srcGrid ) [ ( ( N ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) - ( ( ( ( srcGrid ) [ ( ( S ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) + ( ( ( ( srcGrid ) [ ( ( NE ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) + ( ( ( ( srcGrid ) [ ( ( NW ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) - ( ( ( ( srcGrid ) [ ( ( SE ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) - ( ( ( ( srcGrid ) [ ( ( SW ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) + ( ( ( ( srcGrid ) [ ( ( NT ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) + ( ( ( ( srcGrid ) [ ( ( NB ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) - ( ( ( ( srcGrid ) [ ( ( ST ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) - ( ( ( ( srcGrid ) [ ( ( SB ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) );
		uz = + ( ( ( ( srcGrid ) [ ( ( T ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) - ( ( ( ( srcGrid ) [ ( ( B ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) + ( ( ( ( srcGrid ) [ ( ( NT ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) - ( ( ( ( srcGrid ) [ ( ( NB ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) + ( ( ( ( srcGrid ) [ ( ( ST ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) - ( ( ( ( srcGrid ) [ ( ( SB ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) + ( ( ( ( srcGrid ) [ ( ( ET ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) - ( ( ( ( srcGrid ) [ ( ( EB ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) + ( ( ( ( srcGrid ) [ ( ( WT ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) - ( ( ( ( srcGrid ) [ ( ( WB ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) );
		ux /= rho;
		uy /= rho;
		uz /= rho;
		if ( ( ( *( ( unsigned int *) ( ( void *) ( &( ( ( ( srcGrid ) [ ( ( FLAGS ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) ) ) ) ) & ( ACCEL ) ) ) {
			ux = 0.005;
			uy = 0.002;
			uz = 0.000;
		}

		u2 = 1.5 *( ux *ux + uy *uy + uz *uz );
		( ( ( ( dstGrid ) [ ( ( C ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) = ( 1.0 - ( 1.95 ) ) *( ( ( ( srcGrid ) [ ( ( C ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) + ( 1.0 / 3.0 ) *( 1.95 ) *rho *( 1.0 - u2 );
		( ( ( ( dstGrid ) [ ( ( N ) + N_CELL_ENTRIES *( ( 0 ) + ( + 1 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) = ( 1.0 - ( 1.95 ) ) *( ( ( ( srcGrid ) [ ( ( N ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) + ( 1.0 / 18.0 ) *( 1.95 ) *rho *( 1.0 + uy *( 4.5 *uy + 3.0 ) - u2 );
		( ( ( ( dstGrid ) [ ( ( S ) + N_CELL_ENTRIES *( ( 0 ) + ( - 1 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) = ( 1.0 - ( 1.95 ) ) *( ( ( ( srcGrid ) [ ( ( S ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) + ( 1.0 / 18.0 ) *( 1.95 ) *rho *( 1.0 + uy *( 4.5 *uy - 3.0 ) - u2 );
		( ( ( ( dstGrid ) [ ( ( E ) + N_CELL_ENTRIES *( ( + 1 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) = ( 1.0 - ( 1.95 ) ) *( ( ( ( srcGrid ) [ ( ( E ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) + ( 1.0 / 18.0 ) *( 1.95 ) *rho *( 1.0 + ux *( 4.5 *ux + 3.0 ) - u2 );
		( ( ( ( dstGrid ) [ ( ( W ) + N_CELL_ENTRIES *( ( - 1 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) = ( 1.0 - ( 1.95 ) ) *( ( ( ( srcGrid ) [ ( ( W ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) + ( 1.0 / 18.0 ) *( 1.95 ) *rho *( 1.0 + ux *( 4.5 *ux - 3.0 ) - u2 );
		( ( ( ( dstGrid ) [ ( ( T ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( + 1 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) = ( 1.0 - ( 1.95 ) ) *( ( ( ( srcGrid ) [ ( ( T ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) + ( 1.0 / 18.0 ) *( 1.95 ) *rho *( 1.0 + uz *( 4.5 *uz + 3.0 ) - u2 );
		( ( ( ( dstGrid ) [ ( ( B ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( - 1 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) = ( 1.0 - ( 1.95 ) ) *( ( ( ( srcGrid ) [ ( ( B ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) + ( 1.0 / 18.0 ) *( 1.95 ) *rho *( 1.0 + uz *( 4.5 *uz - 3.0 ) - u2 );
		( ( ( ( dstGrid ) [ ( ( NE ) + N_CELL_ENTRIES *( ( + 1 ) + ( + 1 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) = ( 1.0 - ( 1.95 ) ) *( ( ( ( srcGrid ) [ ( ( NE ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) + ( 1.0 / 36.0 ) *( 1.95 ) *rho *( 1.0 + ( + ux + uy ) *( 4.5 *( + ux + uy ) + 3.0 ) - u2 );
		( ( ( ( dstGrid ) [ ( ( NW ) + N_CELL_ENTRIES *( ( - 1 ) + ( + 1 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) = ( 1.0 - ( 1.95 ) ) *( ( ( ( srcGrid ) [ ( ( NW ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) + ( 1.0 / 36.0 ) *( 1.95 ) *rho *( 1.0 + ( - ux + uy ) *( 4.5 *( - ux + uy ) + 3.0 ) - u2 );
		( ( ( ( dstGrid ) [ ( ( SE ) + N_CELL_ENTRIES *( ( + 1 ) + ( - 1 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) = ( 1.0 - ( 1.95 ) ) *( ( ( ( srcGrid ) [ ( ( SE ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) + ( 1.0 / 36.0 ) *( 1.95 ) *rho *( 1.0 + ( + ux - uy ) *( 4.5 *( + ux - uy ) + 3.0 ) - u2 );
		( ( ( ( dstGrid ) [ ( ( SW ) + N_CELL_ENTRIES *( ( - 1 ) + ( - 1 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) = ( 1.0 - ( 1.95 ) ) *( ( ( ( srcGrid ) [ ( ( SW ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) + ( 1.0 / 36.0 ) *( 1.95 ) *rho *( 1.0 + ( - ux - uy ) *( 4.5 *( - ux - uy ) + 3.0 ) - u2 );
		( ( ( ( dstGrid ) [ ( ( NT ) + N_CELL_ENTRIES *( ( 0 ) + ( + 1 ) *( 1 *( 100 ) ) + ( + 1 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) = ( 1.0 - ( 1.95 ) ) *( ( ( ( srcGrid ) [ ( ( NT ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) + ( 1.0 / 36.0 ) *( 1.95 ) *rho *( 1.0 + ( + uy + uz ) *( 4.5 *( + uy + uz ) + 3.0 ) - u2 );
		( ( ( ( dstGrid ) [ ( ( NB ) + N_CELL_ENTRIES *( ( 0 ) + ( + 1 ) *( 1 *( 100 ) ) + ( - 1 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) = ( 1.0 - ( 1.95 ) ) *( ( ( ( srcGrid ) [ ( ( NB ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) + ( 1.0 / 36.0 ) *( 1.95 ) *rho *( 1.0 + ( + uy - uz ) *( 4.5 *( + uy - uz ) + 3.0 ) - u2 );
		( ( ( ( dstGrid ) [ ( ( ST ) + N_CELL_ENTRIES *( ( 0 ) + ( - 1 ) *( 1 *( 100 ) ) + ( + 1 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) = ( 1.0 - ( 1.95 ) ) *( ( ( ( srcGrid ) [ ( ( ST ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) + ( 1.0 / 36.0 ) *( 1.95 ) *rho *( 1.0 + ( - uy + uz ) *( 4.5 *( - uy + uz ) + 3.0 ) - u2 );
		( ( ( ( dstGrid ) [ ( ( SB ) + N_CELL_ENTRIES *( ( 0 ) + ( - 1 ) *( 1 *( 100 ) ) + ( - 1 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) = ( 1.0 - ( 1.95 ) ) *( ( ( ( srcGrid ) [ ( ( SB ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) + ( 1.0 / 36.0 ) *( 1.95 ) *rho *( 1.0 + ( - uy - uz ) *( 4.5 *( - uy - uz ) + 3.0 ) - u2 );
		( ( ( ( dstGrid ) [ ( ( ET ) + N_CELL_ENTRIES *( ( + 1 ) + ( 0 ) *( 1 *( 100 ) ) + ( + 1 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) = ( 1.0 - ( 1.95 ) ) *( ( ( ( srcGrid ) [ ( ( ET ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) + ( 1.0 / 36.0 ) *( 1.95 ) *rho *( 1.0 + ( + ux + uz ) *( 4.5 *( + ux + uz ) + 3.0 ) - u2 );
		( ( ( ( dstGrid ) [ ( ( EB ) + N_CELL_ENTRIES *( ( + 1 ) + ( 0 ) *( 1 *( 100 ) ) + ( - 1 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) = ( 1.0 - ( 1.95 ) ) *( ( ( ( srcGrid ) [ ( ( EB ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) + ( 1.0 / 36.0 ) *( 1.95 ) *rho *( 1.0 + ( + ux - uz ) *( 4.5 *( + ux - uz ) + 3.0 ) - u2 );
		( ( ( ( dstGrid ) [ ( ( WT ) + N_CELL_ENTRIES *( ( - 1 ) + ( 0 ) *( 1 *( 100 ) ) + ( + 1 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) = ( 1.0 - ( 1.95 ) ) *( ( ( ( srcGrid ) [ ( ( WT ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) + ( 1.0 / 36.0 ) *( 1.95 ) *rho *( 1.0 + ( - ux + uz ) *( 4.5 *( - ux + uz ) + 3.0 ) - u2 );
		( ( ( ( dstGrid ) [ ( ( WB ) + N_CELL_ENTRIES *( ( - 1 ) + ( 0 ) *( 1 *( 100 ) ) + ( - 1 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) = ( 1.0 - ( 1.95 ) ) *( ( ( ( srcGrid ) [ ( ( WB ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) + ( 1.0 / 36.0 ) *( 1.95 ) *rho *( 1.0 + ( - ux - uz ) *( 4.5 *( - ux - uz ) + 3.0 ) - u2 );
	}

}

void LBM_performStreamCollideTRT ( LBM_Grid srcGrid , LBM_Grid dstGrid ) {
	int i;
	double ux , uy , uz , u2 , rho;
	const double lambda0 = 1.0 / ( 0.5 + 3.0 / ( 16.0 *( 1.0 / ( 1.95 ) - 0.5 ) ) );
	double fs [ N_CELL_ENTRIES ] , fa [ N_CELL_ENTRIES ] , feqs [ N_CELL_ENTRIES ] , feqa [ N_CELL_ENTRIES ];
	for ( i = ( ( 0 ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) );
	i < ( ( 0 ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( ( 130 ) ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) );
	i += N_CELL_ENTRIES ) {
		if ( ( ( *( ( unsigned int *) ( ( void *) ( &( ( ( ( srcGrid ) [ ( ( FLAGS ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) ) ) ) ) & ( OBSTACLE ) ) ) {
			( ( ( ( dstGrid ) [ ( ( C ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) = ( ( ( ( srcGrid ) [ ( ( C ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) );
			( ( ( ( dstGrid ) [ ( ( S ) + N_CELL_ENTRIES *( ( 0 ) + ( - 1 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) = ( ( ( ( srcGrid ) [ ( ( N ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) );
			( ( ( ( dstGrid ) [ ( ( N ) + N_CELL_ENTRIES *( ( 0 ) + ( + 1 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) = ( ( ( ( srcGrid ) [ ( ( S ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) );
			( ( ( ( dstGrid ) [ ( ( W ) + N_CELL_ENTRIES *( ( - 1 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) = ( ( ( ( srcGrid ) [ ( ( E ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) );
			( ( ( ( dstGrid ) [ ( ( E ) + N_CELL_ENTRIES *( ( + 1 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) = ( ( ( ( srcGrid ) [ ( ( W ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) );
			( ( ( ( dstGrid ) [ ( ( B ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( - 1 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) = ( ( ( ( srcGrid ) [ ( ( T ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) );
			( ( ( ( dstGrid ) [ ( ( T ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( + 1 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) = ( ( ( ( srcGrid ) [ ( ( B ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) );
			( ( ( ( dstGrid ) [ ( ( SW ) + N_CELL_ENTRIES *( ( - 1 ) + ( - 1 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) = ( ( ( ( srcGrid ) [ ( ( NE ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) );
			( ( ( ( dstGrid ) [ ( ( SE ) + N_CELL_ENTRIES *( ( + 1 ) + ( - 1 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) = ( ( ( ( srcGrid ) [ ( ( NW ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) );
			( ( ( ( dstGrid ) [ ( ( NW ) + N_CELL_ENTRIES *( ( - 1 ) + ( + 1 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) = ( ( ( ( srcGrid ) [ ( ( SE ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) );
			( ( ( ( dstGrid ) [ ( ( NE ) + N_CELL_ENTRIES *( ( + 1 ) + ( + 1 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) = ( ( ( ( srcGrid ) [ ( ( SW ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) );
			( ( ( ( dstGrid ) [ ( ( SB ) + N_CELL_ENTRIES *( ( 0 ) + ( - 1 ) *( 1 *( 100 ) ) + ( - 1 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) = ( ( ( ( srcGrid ) [ ( ( NT ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) );
			( ( ( ( dstGrid ) [ ( ( ST ) + N_CELL_ENTRIES *( ( 0 ) + ( - 1 ) *( 1 *( 100 ) ) + ( + 1 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) = ( ( ( ( srcGrid ) [ ( ( NB ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) );
			( ( ( ( dstGrid ) [ ( ( NB ) + N_CELL_ENTRIES *( ( 0 ) + ( + 1 ) *( 1 *( 100 ) ) + ( - 1 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) = ( ( ( ( srcGrid ) [ ( ( ST ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) );
			( ( ( ( dstGrid ) [ ( ( NT ) + N_CELL_ENTRIES *( ( 0 ) + ( + 1 ) *( 1 *( 100 ) ) + ( + 1 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) = ( ( ( ( srcGrid ) [ ( ( SB ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) );
			( ( ( ( dstGrid ) [ ( ( WB ) + N_CELL_ENTRIES *( ( - 1 ) + ( 0 ) *( 1 *( 100 ) ) + ( - 1 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) = ( ( ( ( srcGrid ) [ ( ( ET ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) );
			( ( ( ( dstGrid ) [ ( ( WT ) + N_CELL_ENTRIES *( ( - 1 ) + ( 0 ) *( 1 *( 100 ) ) + ( + 1 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) = ( ( ( ( srcGrid ) [ ( ( EB ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) );
			( ( ( ( dstGrid ) [ ( ( EB ) + N_CELL_ENTRIES *( ( + 1 ) + ( 0 ) *( 1 *( 100 ) ) + ( - 1 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) = ( ( ( ( srcGrid ) [ ( ( WT ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) );
			( ( ( ( dstGrid ) [ ( ( ET ) + N_CELL_ENTRIES *( ( + 1 ) + ( 0 ) *( 1 *( 100 ) ) + ( + 1 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) = ( ( ( ( srcGrid ) [ ( ( WB ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) );
			continue;
		}

		rho = + ( ( ( ( srcGrid ) [ ( ( C ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) + ( ( ( ( srcGrid ) [ ( ( N ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) + ( ( ( ( srcGrid ) [ ( ( S ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) + ( ( ( ( srcGrid ) [ ( ( E ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) + ( ( ( ( srcGrid ) [ ( ( W ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) + ( ( ( ( srcGrid ) [ ( ( T ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) + ( ( ( ( srcGrid ) [ ( ( B ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) + ( ( ( ( srcGrid ) [ ( ( NE ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) + ( ( ( ( srcGrid ) [ ( ( NW ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) + ( ( ( ( srcGrid ) [ ( ( SE ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) + ( ( ( ( srcGrid ) [ ( ( SW ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) + ( ( ( ( srcGrid ) [ ( ( NT ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) + ( ( ( ( srcGrid ) [ ( ( NB ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) + ( ( ( ( srcGrid ) [ ( ( ST ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) + ( ( ( ( srcGrid ) [ ( ( SB ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) + ( ( ( ( srcGrid ) [ ( ( ET ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) + ( ( ( ( srcGrid ) [ ( ( EB ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) + ( ( ( ( srcGrid ) [ ( ( WT ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) + ( ( ( ( srcGrid ) [ ( ( WB ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) );
		ux = + ( ( ( ( srcGrid ) [ ( ( E ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) - ( ( ( ( srcGrid ) [ ( ( W ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) + ( ( ( ( srcGrid ) [ ( ( NE ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) - ( ( ( ( srcGrid ) [ ( ( NW ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) + ( ( ( ( srcGrid ) [ ( ( SE ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) - ( ( ( ( srcGrid ) [ ( ( SW ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) + ( ( ( ( srcGrid ) [ ( ( ET ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) + ( ( ( ( srcGrid ) [ ( ( EB ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) - ( ( ( ( srcGrid ) [ ( ( WT ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) - ( ( ( ( srcGrid ) [ ( ( WB ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) );
		uy = + ( ( ( ( srcGrid ) [ ( ( N ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) - ( ( ( ( srcGrid ) [ ( ( S ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) + ( ( ( ( srcGrid ) [ ( ( NE ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) + ( ( ( ( srcGrid ) [ ( ( NW ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) - ( ( ( ( srcGrid ) [ ( ( SE ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) - ( ( ( ( srcGrid ) [ ( ( SW ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) + ( ( ( ( srcGrid ) [ ( ( NT ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) + ( ( ( ( srcGrid ) [ ( ( NB ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) - ( ( ( ( srcGrid ) [ ( ( ST ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) - ( ( ( ( srcGrid ) [ ( ( SB ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) );
		uz = + ( ( ( ( srcGrid ) [ ( ( T ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) - ( ( ( ( srcGrid ) [ ( ( B ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) + ( ( ( ( srcGrid ) [ ( ( NT ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) - ( ( ( ( srcGrid ) [ ( ( NB ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) + ( ( ( ( srcGrid ) [ ( ( ST ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) - ( ( ( ( srcGrid ) [ ( ( SB ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) + ( ( ( ( srcGrid ) [ ( ( ET ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) - ( ( ( ( srcGrid ) [ ( ( EB ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) + ( ( ( ( srcGrid ) [ ( ( WT ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) - ( ( ( ( srcGrid ) [ ( ( WB ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) );
		ux /= rho;
		uy /= rho;
		uz /= rho;
		if ( ( ( *( ( unsigned int *) ( ( void *) ( &( ( ( ( srcGrid ) [ ( ( FLAGS ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) ) ) ) ) & ( ACCEL ) ) ) {
			ux = 0.005;
			uy = 0.002;
			uz = 0.000;
		}

		u2 = 1.5 *( ux *ux + uy *uy + uz *uz );
		feqs [ C ] = ( 1.0 / 3.0 ) *rho *( 1.0 - u2 );
		feqs [ N ] = feqs [ S ] = ( 1.0 / 18.0 ) *rho *( 1.0 + 4.5 *( + uy ) *( + uy ) - u2 );
		feqs [ E ] = feqs [ W ] = ( 1.0 / 18.0 ) *rho *( 1.0 + 4.5 *( + ux ) *( + ux ) - u2 );
		feqs [ T ] = feqs [ B ] = ( 1.0 / 18.0 ) *rho *( 1.0 + 4.5 *( + uz ) *( + uz ) - u2 );
		feqs [ NE ] = feqs [ SW ] = ( 1.0 / 36.0 ) *rho *( 1.0 + 4.5 *( + ux + uy ) *( + ux + uy ) - u2 );
		feqs [ NW ] = feqs [ SE ] = ( 1.0 / 36.0 ) *rho *( 1.0 + 4.5 *( - ux + uy ) *( - ux + uy ) - u2 );
		feqs [ NT ] = feqs [ SB ] = ( 1.0 / 36.0 ) *rho *( 1.0 + 4.5 *( + uy + uz ) *( + uy + uz ) - u2 );
		feqs [ NB ] = feqs [ ST ] = ( 1.0 / 36.0 ) *rho *( 1.0 + 4.5 *( + uy - uz ) *( + uy - uz ) - u2 );
		feqs [ ET ] = feqs [ WB ] = ( 1.0 / 36.0 ) *rho *( 1.0 + 4.5 *( + ux + uz ) *( + ux + uz ) - u2 );
		feqs [ EB ] = feqs [ WT ] = ( 1.0 / 36.0 ) *rho *( 1.0 + 4.5 *( + ux - uz ) *( + ux - uz ) - u2 );
		feqa [ C ] = 0.0;
		feqa [ S ] = - ( feqa [ N ] = ( 1.0 / 18.0 ) *rho *3.0 *( + uy ) );
		feqa [ W ] = - ( feqa [ E ] = ( 1.0 / 18.0 ) *rho *3.0 *( + ux ) );
		feqa [ B ] = - ( feqa [ T ] = ( 1.0 / 18.0 ) *rho *3.0 *( + uz ) );
		feqa [ SW ] = - ( feqa [ NE ] = ( 1.0 / 36.0 ) *rho *3.0 *( + ux + uy ) );
		feqa [ SE ] = - ( feqa [ NW ] = ( 1.0 / 36.0 ) *rho *3.0 *( - ux + uy ) );
		feqa [ SB ] = - ( feqa [ NT ] = ( 1.0 / 36.0 ) *rho *3.0 *( + uy + uz ) );
		feqa [ ST ] = - ( feqa [ NB ] = ( 1.0 / 36.0 ) *rho *3.0 *( + uy - uz ) );
		feqa [ WB ] = - ( feqa [ ET ] = ( 1.0 / 36.0 ) *rho *3.0 *( + ux + uz ) );
		feqa [ WT ] = - ( feqa [ EB ] = ( 1.0 / 36.0 ) *rho *3.0 *( + ux - uz ) );
		fs [ C ] = ( ( ( ( srcGrid ) [ ( ( C ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) );
		fs [ N ] = fs [ S ] = 0.5 *( ( ( ( ( srcGrid ) [ ( ( N ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) + ( ( ( ( srcGrid ) [ ( ( S ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) );
		fs [ E ] = fs [ W ] = 0.5 *( ( ( ( ( srcGrid ) [ ( ( E ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) + ( ( ( ( srcGrid ) [ ( ( W ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) );
		fs [ T ] = fs [ B ] = 0.5 *( ( ( ( ( srcGrid ) [ ( ( T ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) + ( ( ( ( srcGrid ) [ ( ( B ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) );
		fs [ NE ] = fs [ SW ] = 0.5 *( ( ( ( ( srcGrid ) [ ( ( NE ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) + ( ( ( ( srcGrid ) [ ( ( SW ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) );
		fs [ NW ] = fs [ SE ] = 0.5 *( ( ( ( ( srcGrid ) [ ( ( NW ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) + ( ( ( ( srcGrid ) [ ( ( SE ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) );
		fs [ NT ] = fs [ SB ] = 0.5 *( ( ( ( ( srcGrid ) [ ( ( NT ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) + ( ( ( ( srcGrid ) [ ( ( SB ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) );
		fs [ NB ] = fs [ ST ] = 0.5 *( ( ( ( ( srcGrid ) [ ( ( NB ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) + ( ( ( ( srcGrid ) [ ( ( ST ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) );
		fs [ ET ] = fs [ WB ] = 0.5 *( ( ( ( ( srcGrid ) [ ( ( ET ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) + ( ( ( ( srcGrid ) [ ( ( WB ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) );
		fs [ EB ] = fs [ WT ] = 0.5 *( ( ( ( ( srcGrid ) [ ( ( EB ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) + ( ( ( ( srcGrid ) [ ( ( WT ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) );
		fa [ C ] = 0.0;
		fa [ S ] = - ( fa [ N ] = 0.5 *( ( ( ( ( srcGrid ) [ ( ( N ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) - ( ( ( ( srcGrid ) [ ( ( S ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) ) );
		fa [ W ] = - ( fa [ E ] = 0.5 *( ( ( ( ( srcGrid ) [ ( ( E ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) - ( ( ( ( srcGrid ) [ ( ( W ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) ) );
		fa [ B ] = - ( fa [ T ] = 0.5 *( ( ( ( ( srcGrid ) [ ( ( T ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) - ( ( ( ( srcGrid ) [ ( ( B ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) ) );
		fa [ SW ] = - ( fa [ NE ] = 0.5 *( ( ( ( ( srcGrid ) [ ( ( NE ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) - ( ( ( ( srcGrid ) [ ( ( SW ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) ) );
		fa [ SE ] = - ( fa [ NW ] = 0.5 *( ( ( ( ( srcGrid ) [ ( ( NW ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) - ( ( ( ( srcGrid ) [ ( ( SE ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) ) );
		fa [ SB ] = - ( fa [ NT ] = 0.5 *( ( ( ( ( srcGrid ) [ ( ( NT ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) - ( ( ( ( srcGrid ) [ ( ( SB ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) ) );
		fa [ ST ] = - ( fa [ NB ] = 0.5 *( ( ( ( ( srcGrid ) [ ( ( NB ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) - ( ( ( ( srcGrid ) [ ( ( ST ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) ) );
		fa [ WB ] = - ( fa [ ET ] = 0.5 *( ( ( ( ( srcGrid ) [ ( ( ET ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) - ( ( ( ( srcGrid ) [ ( ( WB ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) ) );
		fa [ WT ] = - ( fa [ EB ] = 0.5 *( ( ( ( ( srcGrid ) [ ( ( EB ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) - ( ( ( ( srcGrid ) [ ( ( WT ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) ) );
		( ( ( ( dstGrid ) [ ( ( C ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) = ( ( ( ( srcGrid ) [ ( ( C ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) - ( 1.95 ) *( fs [ C ] - feqs [ C ] );
		( ( ( ( dstGrid ) [ ( ( N ) + N_CELL_ENTRIES *( ( 0 ) + ( + 1 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) = ( ( ( ( srcGrid ) [ ( ( N ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) - ( 1.95 ) *( fs [ N ] - feqs [ N ] ) - lambda0 *( fa [ N ] - feqa [ N ] );
		( ( ( ( dstGrid ) [ ( ( S ) + N_CELL_ENTRIES *( ( 0 ) + ( - 1 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) = ( ( ( ( srcGrid ) [ ( ( S ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) - ( 1.95 ) *( fs [ S ] - feqs [ S ] ) - lambda0 *( fa [ S ] - feqa [ S ] );
		( ( ( ( dstGrid ) [ ( ( E ) + N_CELL_ENTRIES *( ( + 1 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) = ( ( ( ( srcGrid ) [ ( ( E ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) - ( 1.95 ) *( fs [ E ] - feqs [ E ] ) - lambda0 *( fa [ E ] - feqa [ E ] );
		( ( ( ( dstGrid ) [ ( ( W ) + N_CELL_ENTRIES *( ( - 1 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) = ( ( ( ( srcGrid ) [ ( ( W ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) - ( 1.95 ) *( fs [ W ] - feqs [ W ] ) - lambda0 *( fa [ W ] - feqa [ W ] );
		( ( ( ( dstGrid ) [ ( ( T ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( + 1 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) = ( ( ( ( srcGrid ) [ ( ( T ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) - ( 1.95 ) *( fs [ T ] - feqs [ T ] ) - lambda0 *( fa [ T ] - feqa [ T ] );
		( ( ( ( dstGrid ) [ ( ( B ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( - 1 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) = ( ( ( ( srcGrid ) [ ( ( B ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) - ( 1.95 ) *( fs [ B ] - feqs [ B ] ) - lambda0 *( fa [ B ] - feqa [ B ] );
		( ( ( ( dstGrid ) [ ( ( NE ) + N_CELL_ENTRIES *( ( + 1 ) + ( + 1 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) = ( ( ( ( srcGrid ) [ ( ( NE ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) - ( 1.95 ) *( fs [ NE ] - feqs [ NE ] ) - lambda0 *( fa [ NE ] - feqa [ NE ] );
		( ( ( ( dstGrid ) [ ( ( NW ) + N_CELL_ENTRIES *( ( - 1 ) + ( + 1 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) = ( ( ( ( srcGrid ) [ ( ( NW ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) - ( 1.95 ) *( fs [ NW ] - feqs [ NW ] ) - lambda0 *( fa [ NW ] - feqa [ NW ] );
		( ( ( ( dstGrid ) [ ( ( SE ) + N_CELL_ENTRIES *( ( + 1 ) + ( - 1 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) = ( ( ( ( srcGrid ) [ ( ( SE ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) - ( 1.95 ) *( fs [ SE ] - feqs [ SE ] ) - lambda0 *( fa [ SE ] - feqa [ SE ] );
		( ( ( ( dstGrid ) [ ( ( SW ) + N_CELL_ENTRIES *( ( - 1 ) + ( - 1 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) = ( ( ( ( srcGrid ) [ ( ( SW ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) - ( 1.95 ) *( fs [ SW ] - feqs [ SW ] ) - lambda0 *( fa [ SW ] - feqa [ SW ] );
		( ( ( ( dstGrid ) [ ( ( NT ) + N_CELL_ENTRIES *( ( 0 ) + ( + 1 ) *( 1 *( 100 ) ) + ( + 1 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) = ( ( ( ( srcGrid ) [ ( ( NT ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) - ( 1.95 ) *( fs [ NT ] - feqs [ NT ] ) - lambda0 *( fa [ NT ] - feqa [ NT ] );
		( ( ( ( dstGrid ) [ ( ( NB ) + N_CELL_ENTRIES *( ( 0 ) + ( + 1 ) *( 1 *( 100 ) ) + ( - 1 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) = ( ( ( ( srcGrid ) [ ( ( NB ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) - ( 1.95 ) *( fs [ NB ] - feqs [ NB ] ) - lambda0 *( fa [ NB ] - feqa [ NB ] );
		( ( ( ( dstGrid ) [ ( ( ST ) + N_CELL_ENTRIES *( ( 0 ) + ( - 1 ) *( 1 *( 100 ) ) + ( + 1 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) = ( ( ( ( srcGrid ) [ ( ( ST ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) - ( 1.95 ) *( fs [ ST ] - feqs [ ST ] ) - lambda0 *( fa [ ST ] - feqa [ ST ] );
		( ( ( ( dstGrid ) [ ( ( SB ) + N_CELL_ENTRIES *( ( 0 ) + ( - 1 ) *( 1 *( 100 ) ) + ( - 1 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) = ( ( ( ( srcGrid ) [ ( ( SB ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) - ( 1.95 ) *( fs [ SB ] - feqs [ SB ] ) - lambda0 *( fa [ SB ] - feqa [ SB ] );
		( ( ( ( dstGrid ) [ ( ( ET ) + N_CELL_ENTRIES *( ( + 1 ) + ( 0 ) *( 1 *( 100 ) ) + ( + 1 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) = ( ( ( ( srcGrid ) [ ( ( ET ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) - ( 1.95 ) *( fs [ ET ] - feqs [ ET ] ) - lambda0 *( fa [ ET ] - feqa [ ET ] );
		( ( ( ( dstGrid ) [ ( ( EB ) + N_CELL_ENTRIES *( ( + 1 ) + ( 0 ) *( 1 *( 100 ) ) + ( - 1 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) = ( ( ( ( srcGrid ) [ ( ( EB ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) - ( 1.95 ) *( fs [ EB ] - feqs [ EB ] ) - lambda0 *( fa [ EB ] - feqa [ EB ] );
		( ( ( ( dstGrid ) [ ( ( WT ) + N_CELL_ENTRIES *( ( - 1 ) + ( 0 ) *( 1 *( 100 ) ) + ( + 1 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) = ( ( ( ( srcGrid ) [ ( ( WT ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) - ( 1.95 ) *( fs [ WT ] - feqs [ WT ] ) - lambda0 *( fa [ WT ] - feqa [ WT ] );
		( ( ( ( dstGrid ) [ ( ( WB ) + N_CELL_ENTRIES *( ( - 1 ) + ( 0 ) *( 1 *( 100 ) ) + ( - 1 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) = ( ( ( ( srcGrid ) [ ( ( WB ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) - ( 1.95 ) *( fs [ WB ] - feqs [ WB ] ) - lambda0 *( fa [ WB ] - feqa [ WB ] );
	}

}

void LBM_handleInOutFlow ( LBM_Grid srcGrid ) {
	double ux , uy , uz , rho , ux1 , uy1 , uz1 , rho1 , ux2 , uy2 , uz2 , rho2 , u2 , px , py;
	int i;
	for ( i = ( ( 0 ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) );
	i < ( ( 0 ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 1 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) );
	i += N_CELL_ENTRIES ) {
		rho1 = + ( ( srcGrid ) [ ( ( C ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 1 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) + ( ( srcGrid ) [ ( ( N ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 1 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) + ( ( srcGrid ) [ ( ( S ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 1 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) + ( ( srcGrid ) [ ( ( E ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 1 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) + ( ( srcGrid ) [ ( ( W ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 1 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) + ( ( srcGrid ) [ ( ( T ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 1 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) + ( ( srcGrid ) [ ( ( B ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 1 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) + ( ( srcGrid ) [ ( ( NE ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 1 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) + ( ( srcGrid ) [ ( ( NW ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 1 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) + ( ( srcGrid ) [ ( ( SE ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 1 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) + ( ( srcGrid ) [ ( ( SW ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 1 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) + ( ( srcGrid ) [ ( ( NT ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 1 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) + ( ( srcGrid ) [ ( ( NB ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 1 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) + ( ( srcGrid ) [ ( ( ST ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 1 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) + ( ( srcGrid ) [ ( ( SB ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 1 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) + ( ( srcGrid ) [ ( ( ET ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 1 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) + ( ( srcGrid ) [ ( ( EB ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 1 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) + ( ( srcGrid ) [ ( ( WT ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 1 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) + ( ( srcGrid ) [ ( ( WB ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 1 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] );
		rho2 = + ( ( srcGrid ) [ ( ( C ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 2 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) + ( ( srcGrid ) [ ( ( N ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 2 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) + ( ( srcGrid ) [ ( ( S ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 2 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) + ( ( srcGrid ) [ ( ( E ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 2 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) + ( ( srcGrid ) [ ( ( W ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 2 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) + ( ( srcGrid ) [ ( ( T ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 2 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) + ( ( srcGrid ) [ ( ( B ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 2 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) + ( ( srcGrid ) [ ( ( NE ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 2 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) + ( ( srcGrid ) [ ( ( NW ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 2 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) + ( ( srcGrid ) [ ( ( SE ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 2 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) + ( ( srcGrid ) [ ( ( SW ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 2 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) + ( ( srcGrid ) [ ( ( NT ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 2 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) + ( ( srcGrid ) [ ( ( NB ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 2 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) + ( ( srcGrid ) [ ( ( ST ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 2 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) + ( ( srcGrid ) [ ( ( SB ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 2 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) + ( ( srcGrid ) [ ( ( ET ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 2 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) + ( ( srcGrid ) [ ( ( EB ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 2 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) + ( ( srcGrid ) [ ( ( WT ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 2 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) + ( ( srcGrid ) [ ( ( WB ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 2 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] );
		rho = 2.0 *rho1 - rho2;
		px = ( ( ( i / N_CELL_ENTRIES ) % ( 1 *( 100 ) ) ) / ( 0.5 *( ( 1 *( 100 ) ) - 1 ) ) ) - 1.0;
		py = ( ( ( ( i / N_CELL_ENTRIES ) / ( 1 *( 100 ) ) ) % ( 1 *( 100 ) ) ) / ( 0.5 *( ( 1 *( 100 ) ) - 1 ) ) ) - 1.0;
		ux = 0.00;
		uy = 0.00;
		uz = 0.01 *( 1.0 - px *px ) *( 1.0 - py *py );
		u2 = 1.5 *( ux *ux + uy *uy + uz *uz );
		( ( ( srcGrid ) [ ( ( C ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) = ( 1.0 / 3.0 ) *rho *( 1.0 - u2 );
		( ( ( srcGrid ) [ ( ( N ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) = ( 1.0 / 18.0 ) *rho *( 1.0 + uy *( 4.5 *uy + 3.0 ) - u2 );
		( ( ( srcGrid ) [ ( ( S ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) = ( 1.0 / 18.0 ) *rho *( 1.0 + uy *( 4.5 *uy - 3.0 ) - u2 );
		( ( ( srcGrid ) [ ( ( E ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) = ( 1.0 / 18.0 ) *rho *( 1.0 + ux *( 4.5 *ux + 3.0 ) - u2 );
		( ( ( srcGrid ) [ ( ( W ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) = ( 1.0 / 18.0 ) *rho *( 1.0 + ux *( 4.5 *ux - 3.0 ) - u2 );
		( ( ( srcGrid ) [ ( ( T ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) = ( 1.0 / 18.0 ) *rho *( 1.0 + uz *( 4.5 *uz + 3.0 ) - u2 );
		( ( ( srcGrid ) [ ( ( B ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) = ( 1.0 / 18.0 ) *rho *( 1.0 + uz *( 4.5 *uz - 3.0 ) - u2 );
		( ( ( srcGrid ) [ ( ( NE ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) = ( 1.0 / 36.0 ) *rho *( 1.0 + ( + ux + uy ) *( 4.5 *( + ux + uy ) + 3.0 ) - u2 );
		( ( ( srcGrid ) [ ( ( NW ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) = ( 1.0 / 36.0 ) *rho *( 1.0 + ( - ux + uy ) *( 4.5 *( - ux + uy ) + 3.0 ) - u2 );
		( ( ( srcGrid ) [ ( ( SE ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) = ( 1.0 / 36.0 ) *rho *( 1.0 + ( + ux - uy ) *( 4.5 *( + ux - uy ) + 3.0 ) - u2 );
		( ( ( srcGrid ) [ ( ( SW ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) = ( 1.0 / 36.0 ) *rho *( 1.0 + ( - ux - uy ) *( 4.5 *( - ux - uy ) + 3.0 ) - u2 );
		( ( ( srcGrid ) [ ( ( NT ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) = ( 1.0 / 36.0 ) *rho *( 1.0 + ( + uy + uz ) *( 4.5 *( + uy + uz ) + 3.0 ) - u2 );
		( ( ( srcGrid ) [ ( ( NB ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) = ( 1.0 / 36.0 ) *rho *( 1.0 + ( + uy - uz ) *( 4.5 *( + uy - uz ) + 3.0 ) - u2 );
		( ( ( srcGrid ) [ ( ( ST ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) = ( 1.0 / 36.0 ) *rho *( 1.0 + ( - uy + uz ) *( 4.5 *( - uy + uz ) + 3.0 ) - u2 );
		( ( ( srcGrid ) [ ( ( SB ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) = ( 1.0 / 36.0 ) *rho *( 1.0 + ( - uy - uz ) *( 4.5 *( - uy - uz ) + 3.0 ) - u2 );
		( ( ( srcGrid ) [ ( ( ET ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) = ( 1.0 / 36.0 ) *rho *( 1.0 + ( + ux + uz ) *( 4.5 *( + ux + uz ) + 3.0 ) - u2 );
		( ( ( srcGrid ) [ ( ( EB ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) = ( 1.0 / 36.0 ) *rho *( 1.0 + ( + ux - uz ) *( 4.5 *( + ux - uz ) + 3.0 ) - u2 );
		( ( ( srcGrid ) [ ( ( WT ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) = ( 1.0 / 36.0 ) *rho *( 1.0 + ( - ux + uz ) *( 4.5 *( - ux + uz ) + 3.0 ) - u2 );
		( ( ( srcGrid ) [ ( ( WB ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) = ( 1.0 / 36.0 ) *rho *( 1.0 + ( - ux - uz ) *( 4.5 *( - ux - uz ) + 3.0 ) - u2 );
	}

	for ( i = ( ( 0 ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( ( 130 ) - 1 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) );
	i < ( ( 0 ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( ( 130 ) ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) );
	i += N_CELL_ENTRIES ) {
		rho1 = + ( ( srcGrid ) [ ( ( C ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( - 1 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) + ( ( srcGrid ) [ ( ( N ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( - 1 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) + ( ( srcGrid ) [ ( ( S ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( - 1 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) + ( ( srcGrid ) [ ( ( E ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( - 1 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) + ( ( srcGrid ) [ ( ( W ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( - 1 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) + ( ( srcGrid ) [ ( ( T ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( - 1 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) + ( ( srcGrid ) [ ( ( B ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( - 1 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) + ( ( srcGrid ) [ ( ( NE ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( - 1 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) + ( ( srcGrid ) [ ( ( NW ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( - 1 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) + ( ( srcGrid ) [ ( ( SE ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( - 1 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) + ( ( srcGrid ) [ ( ( SW ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( - 1 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) + ( ( srcGrid ) [ ( ( NT ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( - 1 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) + ( ( srcGrid ) [ ( ( NB ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( - 1 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) + ( ( srcGrid ) [ ( ( ST ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( - 1 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) + ( ( srcGrid ) [ ( ( SB ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( - 1 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) + ( ( srcGrid ) [ ( ( ET ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( - 1 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) + ( ( srcGrid ) [ ( ( EB ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( - 1 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) + ( ( srcGrid ) [ ( ( WT ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( - 1 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) + ( ( srcGrid ) [ ( ( WB ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( - 1 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] );
		ux1 = + ( ( srcGrid ) [ ( ( E ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( - 1 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) - ( ( srcGrid ) [ ( ( W ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( - 1 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) + ( ( srcGrid ) [ ( ( NE ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( - 1 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) - ( ( srcGrid ) [ ( ( NW ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( - 1 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) + ( ( srcGrid ) [ ( ( SE ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( - 1 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) - ( ( srcGrid ) [ ( ( SW ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( - 1 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) + ( ( srcGrid ) [ ( ( ET ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( - 1 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) + ( ( srcGrid ) [ ( ( EB ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( - 1 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) - ( ( srcGrid ) [ ( ( WT ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( - 1 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) - ( ( srcGrid ) [ ( ( WB ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( - 1 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] );
		uy1 = + ( ( srcGrid ) [ ( ( N ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( - 1 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) - ( ( srcGrid ) [ ( ( S ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( - 1 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) + ( ( srcGrid ) [ ( ( NE ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( - 1 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) + ( ( srcGrid ) [ ( ( NW ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( - 1 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) - ( ( srcGrid ) [ ( ( SE ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( - 1 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) - ( ( srcGrid ) [ ( ( SW ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( - 1 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) + ( ( srcGrid ) [ ( ( NT ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( - 1 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) + ( ( srcGrid ) [ ( ( NB ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( - 1 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) - ( ( srcGrid ) [ ( ( ST ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( - 1 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) - ( ( srcGrid ) [ ( ( SB ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( - 1 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] );
		uz1 = + ( ( srcGrid ) [ ( ( T ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( - 1 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) - ( ( srcGrid ) [ ( ( B ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( - 1 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) + ( ( srcGrid ) [ ( ( NT ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( - 1 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) - ( ( srcGrid ) [ ( ( NB ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( - 1 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) + ( ( srcGrid ) [ ( ( ST ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( - 1 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) - ( ( srcGrid ) [ ( ( SB ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( - 1 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) + ( ( srcGrid ) [ ( ( ET ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( - 1 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) - ( ( srcGrid ) [ ( ( EB ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( - 1 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) + ( ( srcGrid ) [ ( ( WT ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( - 1 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) - ( ( srcGrid ) [ ( ( WB ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( - 1 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] );
		ux1 /= rho1;
		uy1 /= rho1;
		uz1 /= rho1;
		rho2 = + ( ( srcGrid ) [ ( ( C ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( - 2 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) + ( ( srcGrid ) [ ( ( N ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( - 2 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) + ( ( srcGrid ) [ ( ( S ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( - 2 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) + ( ( srcGrid ) [ ( ( E ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( - 2 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) + ( ( srcGrid ) [ ( ( W ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( - 2 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) + ( ( srcGrid ) [ ( ( T ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( - 2 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) + ( ( srcGrid ) [ ( ( B ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( - 2 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) + ( ( srcGrid ) [ ( ( NE ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( - 2 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) + ( ( srcGrid ) [ ( ( NW ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( - 2 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) + ( ( srcGrid ) [ ( ( SE ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( - 2 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) + ( ( srcGrid ) [ ( ( SW ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( - 2 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) + ( ( srcGrid ) [ ( ( NT ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( - 2 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) + ( ( srcGrid ) [ ( ( NB ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( - 2 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) + ( ( srcGrid ) [ ( ( ST ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( - 2 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) + ( ( srcGrid ) [ ( ( SB ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( - 2 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) + ( ( srcGrid ) [ ( ( ET ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( - 2 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) + ( ( srcGrid ) [ ( ( EB ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( - 2 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) + ( ( srcGrid ) [ ( ( WT ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( - 2 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) + ( ( srcGrid ) [ ( ( WB ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( - 2 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] );
		ux2 = + ( ( srcGrid ) [ ( ( E ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( - 2 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) - ( ( srcGrid ) [ ( ( W ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( - 2 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) + ( ( srcGrid ) [ ( ( NE ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( - 2 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) - ( ( srcGrid ) [ ( ( NW ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( - 2 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) + ( ( srcGrid ) [ ( ( SE ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( - 2 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) - ( ( srcGrid ) [ ( ( SW ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( - 2 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) + ( ( srcGrid ) [ ( ( ET ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( - 2 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) + ( ( srcGrid ) [ ( ( EB ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( - 2 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) - ( ( srcGrid ) [ ( ( WT ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( - 2 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) - ( ( srcGrid ) [ ( ( WB ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( - 2 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] );
		uy2 = + ( ( srcGrid ) [ ( ( N ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( - 2 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) - ( ( srcGrid ) [ ( ( S ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( - 2 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) + ( ( srcGrid ) [ ( ( NE ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( - 2 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) + ( ( srcGrid ) [ ( ( NW ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( - 2 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) - ( ( srcGrid ) [ ( ( SE ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( - 2 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) - ( ( srcGrid ) [ ( ( SW ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( - 2 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) + ( ( srcGrid ) [ ( ( NT ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( - 2 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) + ( ( srcGrid ) [ ( ( NB ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( - 2 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) - ( ( srcGrid ) [ ( ( ST ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( - 2 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) - ( ( srcGrid ) [ ( ( SB ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( - 2 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] );
		uz2 = + ( ( srcGrid ) [ ( ( T ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( - 2 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) - ( ( srcGrid ) [ ( ( B ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( - 2 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) + ( ( srcGrid ) [ ( ( NT ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( - 2 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) - ( ( srcGrid ) [ ( ( NB ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( - 2 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) + ( ( srcGrid ) [ ( ( ST ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( - 2 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) - ( ( srcGrid ) [ ( ( SB ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( - 2 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) + ( ( srcGrid ) [ ( ( ET ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( - 2 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) - ( ( srcGrid ) [ ( ( EB ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( - 2 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) + ( ( srcGrid ) [ ( ( WT ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( - 2 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) - ( ( srcGrid ) [ ( ( WB ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( - 2 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] );
		ux2 /= rho2;
		uy2 /= rho2;
		uz2 /= rho2;
		rho = 1.0;
		ux = 2 *ux1 - ux2;
		uy = 2 *uy1 - uy2;
		uz = 2 *uz1 - uz2;
		u2 = 1.5 *( ux *ux + uy *uy + uz *uz );
		( ( ( srcGrid ) [ ( ( C ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) = ( 1.0 / 3.0 ) *rho *( 1.0 - u2 );
		( ( ( srcGrid ) [ ( ( N ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) = ( 1.0 / 18.0 ) *rho *( 1.0 + uy *( 4.5 *uy + 3.0 ) - u2 );
		( ( ( srcGrid ) [ ( ( S ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) = ( 1.0 / 18.0 ) *rho *( 1.0 + uy *( 4.5 *uy - 3.0 ) - u2 );
		( ( ( srcGrid ) [ ( ( E ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) = ( 1.0 / 18.0 ) *rho *( 1.0 + ux *( 4.5 *ux + 3.0 ) - u2 );
		( ( ( srcGrid ) [ ( ( W ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) = ( 1.0 / 18.0 ) *rho *( 1.0 + ux *( 4.5 *ux - 3.0 ) - u2 );
		( ( ( srcGrid ) [ ( ( T ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) = ( 1.0 / 18.0 ) *rho *( 1.0 + uz *( 4.5 *uz + 3.0 ) - u2 );
		( ( ( srcGrid ) [ ( ( B ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) = ( 1.0 / 18.0 ) *rho *( 1.0 + uz *( 4.5 *uz - 3.0 ) - u2 );
		( ( ( srcGrid ) [ ( ( NE ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) = ( 1.0 / 36.0 ) *rho *( 1.0 + ( + ux + uy ) *( 4.5 *( + ux + uy ) + 3.0 ) - u2 );
		( ( ( srcGrid ) [ ( ( NW ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) = ( 1.0 / 36.0 ) *rho *( 1.0 + ( - ux + uy ) *( 4.5 *( - ux + uy ) + 3.0 ) - u2 );
		( ( ( srcGrid ) [ ( ( SE ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) = ( 1.0 / 36.0 ) *rho *( 1.0 + ( + ux - uy ) *( 4.5 *( + ux - uy ) + 3.0 ) - u2 );
		( ( ( srcGrid ) [ ( ( SW ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) = ( 1.0 / 36.0 ) *rho *( 1.0 + ( - ux - uy ) *( 4.5 *( - ux - uy ) + 3.0 ) - u2 );
		( ( ( srcGrid ) [ ( ( NT ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) = ( 1.0 / 36.0 ) *rho *( 1.0 + ( + uy + uz ) *( 4.5 *( + uy + uz ) + 3.0 ) - u2 );
		( ( ( srcGrid ) [ ( ( NB ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) = ( 1.0 / 36.0 ) *rho *( 1.0 + ( + uy - uz ) *( 4.5 *( + uy - uz ) + 3.0 ) - u2 );
		( ( ( srcGrid ) [ ( ( ST ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) = ( 1.0 / 36.0 ) *rho *( 1.0 + ( - uy + uz ) *( 4.5 *( - uy + uz ) + 3.0 ) - u2 );
		( ( ( srcGrid ) [ ( ( SB ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) = ( 1.0 / 36.0 ) *rho *( 1.0 + ( - uy - uz ) *( 4.5 *( - uy - uz ) + 3.0 ) - u2 );
		( ( ( srcGrid ) [ ( ( ET ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) = ( 1.0 / 36.0 ) *rho *( 1.0 + ( + ux + uz ) *( 4.5 *( + ux + uz ) + 3.0 ) - u2 );
		( ( ( srcGrid ) [ ( ( EB ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) = ( 1.0 / 36.0 ) *rho *( 1.0 + ( + ux - uz ) *( 4.5 *( + ux - uz ) + 3.0 ) - u2 );
		( ( ( srcGrid ) [ ( ( WT ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) = ( 1.0 / 36.0 ) *rho *( 1.0 + ( - ux + uz ) *( 4.5 *( - ux + uz ) + 3.0 ) - u2 );
		( ( ( srcGrid ) [ ( ( WB ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) = ( 1.0 / 36.0 ) *rho *( 1.0 + ( - ux - uz ) *( 4.5 *( - ux - uz ) + 3.0 ) - u2 );
	}

}

void LBM_showGridStatistics ( LBM_Grid grid ) {
	int nObstacleCells = 0 , nAccelCells = 0 , nFluidCells = 0;
	double ux , uy , uz;
	double minU2 = 1e+30 , maxU2 = - 1e+30 , u2;
	double minRho = 1e+30 , maxRho = - 1e+30 , rho;
	double mass = 0;
	int i;
	for ( i = ( ( 0 ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) );
	i < ( ( 0 ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( ( 130 ) ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) );
	i += N_CELL_ENTRIES ) {
		rho = + ( ( ( grid ) [ ( ( C ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) + ( ( ( grid ) [ ( ( N ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) + ( ( ( grid ) [ ( ( S ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) + ( ( ( grid ) [ ( ( E ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) + ( ( ( grid ) [ ( ( W ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) + ( ( ( grid ) [ ( ( T ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) + ( ( ( grid ) [ ( ( B ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) + ( ( ( grid ) [ ( ( NE ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) + ( ( ( grid ) [ ( ( NW ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) + ( ( ( grid ) [ ( ( SE ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) + ( ( ( grid ) [ ( ( SW ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) + ( ( ( grid ) [ ( ( NT ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) + ( ( ( grid ) [ ( ( NB ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) + ( ( ( grid ) [ ( ( ST ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) + ( ( ( grid ) [ ( ( SB ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) + ( ( ( grid ) [ ( ( ET ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) + ( ( ( grid ) [ ( ( EB ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) + ( ( ( grid ) [ ( ( WT ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) + ( ( ( grid ) [ ( ( WB ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) );
		if ( rho < minRho ) minRho = rho;
		if ( rho > maxRho ) maxRho = rho;
		mass += rho;
		if ( ( ( *( ( unsigned int *) ( ( void *) ( &( ( ( ( grid ) [ ( ( FLAGS ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) ) ) ) ) & ( OBSTACLE ) ) ) {
			nObstacleCells ++;
		}

		else {
			if ( ( ( *( ( unsigned int *) ( ( void *) ( &( ( ( ( grid ) [ ( ( FLAGS ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) ) ) ) ) ) & ( ACCEL ) ) ) nAccelCells ++;
			else nFluidCells ++;
			ux = + ( ( ( grid ) [ ( ( E ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) - ( ( ( grid ) [ ( ( W ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) + ( ( ( grid ) [ ( ( NE ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) - ( ( ( grid ) [ ( ( NW ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) + ( ( ( grid ) [ ( ( SE ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) - ( ( ( grid ) [ ( ( SW ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) + ( ( ( grid ) [ ( ( ET ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) + ( ( ( grid ) [ ( ( EB ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) - ( ( ( grid ) [ ( ( WT ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) - ( ( ( grid ) [ ( ( WB ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) );
			uy = + ( ( ( grid ) [ ( ( N ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) - ( ( ( grid ) [ ( ( S ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) + ( ( ( grid ) [ ( ( NE ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) + ( ( ( grid ) [ ( ( NW ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) - ( ( ( grid ) [ ( ( SE ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) - ( ( ( grid ) [ ( ( SW ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) + ( ( ( grid ) [ ( ( NT ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) + ( ( ( grid ) [ ( ( NB ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) - ( ( ( grid ) [ ( ( ST ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) - ( ( ( grid ) [ ( ( SB ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) );
			uz = + ( ( ( grid ) [ ( ( T ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) - ( ( ( grid ) [ ( ( B ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) + ( ( ( grid ) [ ( ( NT ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) - ( ( ( grid ) [ ( ( NB ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) + ( ( ( grid ) [ ( ( ST ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) - ( ( ( grid ) [ ( ( SB ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) + ( ( ( grid ) [ ( ( ET ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) - ( ( ( grid ) [ ( ( EB ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) + ( ( ( grid ) [ ( ( WT ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) ) - ( ( ( grid ) [ ( ( WB ) + N_CELL_ENTRIES *( ( 0 ) + ( 0 ) *( 1 *( 100 ) ) + ( 0 ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) + ( i ) ] ) );
			u2 = ( ux *ux + uy *uy + uz *uz ) / ( rho *rho );
			if ( u2 < minU2 ) minU2 = u2;
			if ( u2 > maxU2 ) maxU2 = u2;
		}

	}

	printf ( "LBM_showGridStatistics:\n" "\tnObstacleCells: %7i nAccelCells: %7i nFluidCells: %7i\n" "\tminRho: %8.6f maxRho: %8.6f Mass: %e\n" "\tminU  : %8.6f maxU  : %8.6f\n\n" , nObstacleCells , nAccelCells , nFluidCells , minRho , maxRho , mass , sqrt ( minU2 ) , sqrt ( maxU2 ) );
}

static void nm_lbm_storeValue ( FILE *file , float *v ) {
	const int litteBigEndianTest = 1;
	if ( ( *( ( unsigned char *) & litteBigEndianTest ) ) == 0 ) {
		const char *vPtr = ( char *) v;
		char buffer [ sizeof ( float ) ];
		int i;
		for ( i = 0;
		i < sizeof ( float );
		i ++ ) buffer [ i ] = vPtr [ sizeof ( float ) - i - 1 ];
		fwrite ( buffer , sizeof ( float ) , 1 , file );
	}

	else {
		fwrite ( v , sizeof ( float ) , 1 , file );
	}

}

static void nm_lbm_loadValue ( FILE *file , float *v ) {
	const int litteBigEndianTest = 1;
	if ( ( *( ( unsigned char *) & litteBigEndianTest ) ) == 0 ) {
		char *vPtr = ( char *) v;
		char buffer [ sizeof ( float ) ];
		int i;
		fread ( buffer , sizeof ( float ) , 1 , file );
		for ( i = 0;
		i < sizeof ( float );
		i ++ ) vPtr [ i ] = buffer [ sizeof ( float ) - i - 1 ];
	}

	else {
		fread ( v , sizeof ( float ) , 1 , file );
	}

}

void LBM_storeVelocityField ( LBM_Grid grid , const char *filename , const int binary ) {
	int x , y , z;
	float rho , ux , uy , uz;
	FILE *file = fopen ( filename , ( binary ? "wb" : "w" ) );
	for ( z = 0;
	z < ( 130 );
	z ++ ) {
		for ( y = 0;
		y < ( 1 *( 100 ) );
		y ++ ) {
			for ( x = 0;
			x < ( 1 *( 100 ) );
			x ++ ) {
				rho = + ( ( grid ) [ ( ( C ) + N_CELL_ENTRIES *( ( x ) + ( y ) *( 1 *( 100 ) ) + ( z ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) ] ) + ( ( grid ) [ ( ( N ) + N_CELL_ENTRIES *( ( x ) + ( y ) *( 1 *( 100 ) ) + ( z ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) ] ) + ( ( grid ) [ ( ( S ) + N_CELL_ENTRIES *( ( x ) + ( y ) *( 1 *( 100 ) ) + ( z ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) ] ) + ( ( grid ) [ ( ( E ) + N_CELL_ENTRIES *( ( x ) + ( y ) *( 1 *( 100 ) ) + ( z ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) ] ) + ( ( grid ) [ ( ( W ) + N_CELL_ENTRIES *( ( x ) + ( y ) *( 1 *( 100 ) ) + ( z ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) ] ) + ( ( grid ) [ ( ( T ) + N_CELL_ENTRIES *( ( x ) + ( y ) *( 1 *( 100 ) ) + ( z ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) ] ) + ( ( grid ) [ ( ( B ) + N_CELL_ENTRIES *( ( x ) + ( y ) *( 1 *( 100 ) ) + ( z ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) ] ) + ( ( grid ) [ ( ( NE ) + N_CELL_ENTRIES *( ( x ) + ( y ) *( 1 *( 100 ) ) + ( z ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) ] ) + ( ( grid ) [ ( ( NW ) + N_CELL_ENTRIES *( ( x ) + ( y ) *( 1 *( 100 ) ) + ( z ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) ] ) + ( ( grid ) [ ( ( SE ) + N_CELL_ENTRIES *( ( x ) + ( y ) *( 1 *( 100 ) ) + ( z ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) ] ) + ( ( grid ) [ ( ( SW ) + N_CELL_ENTRIES *( ( x ) + ( y ) *( 1 *( 100 ) ) + ( z ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) ] ) + ( ( grid ) [ ( ( NT ) + N_CELL_ENTRIES *( ( x ) + ( y ) *( 1 *( 100 ) ) + ( z ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) ] ) + ( ( grid ) [ ( ( NB ) + N_CELL_ENTRIES *( ( x ) + ( y ) *( 1 *( 100 ) ) + ( z ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) ] ) + ( ( grid ) [ ( ( ST ) + N_CELL_ENTRIES *( ( x ) + ( y ) *( 1 *( 100 ) ) + ( z ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) ] ) + ( ( grid ) [ ( ( SB ) + N_CELL_ENTRIES *( ( x ) + ( y ) *( 1 *( 100 ) ) + ( z ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) ] ) + ( ( grid ) [ ( ( ET ) + N_CELL_ENTRIES *( ( x ) + ( y ) *( 1 *( 100 ) ) + ( z ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) ] ) + ( ( grid ) [ ( ( EB ) + N_CELL_ENTRIES *( ( x ) + ( y ) *( 1 *( 100 ) ) + ( z ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) ] ) + ( ( grid ) [ ( ( WT ) + N_CELL_ENTRIES *( ( x ) + ( y ) *( 1 *( 100 ) ) + ( z ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) ] ) + ( ( grid ) [ ( ( WB ) + N_CELL_ENTRIES *( ( x ) + ( y ) *( 1 *( 100 ) ) + ( z ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) ] );
				ux = + ( ( grid ) [ ( ( E ) + N_CELL_ENTRIES *( ( x ) + ( y ) *( 1 *( 100 ) ) + ( z ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) ] ) - ( ( grid ) [ ( ( W ) + N_CELL_ENTRIES *( ( x ) + ( y ) *( 1 *( 100 ) ) + ( z ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) ] ) + ( ( grid ) [ ( ( NE ) + N_CELL_ENTRIES *( ( x ) + ( y ) *( 1 *( 100 ) ) + ( z ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) ] ) - ( ( grid ) [ ( ( NW ) + N_CELL_ENTRIES *( ( x ) + ( y ) *( 1 *( 100 ) ) + ( z ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) ] ) + ( ( grid ) [ ( ( SE ) + N_CELL_ENTRIES *( ( x ) + ( y ) *( 1 *( 100 ) ) + ( z ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) ] ) - ( ( grid ) [ ( ( SW ) + N_CELL_ENTRIES *( ( x ) + ( y ) *( 1 *( 100 ) ) + ( z ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) ] ) + ( ( grid ) [ ( ( ET ) + N_CELL_ENTRIES *( ( x ) + ( y ) *( 1 *( 100 ) ) + ( z ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) ] ) + ( ( grid ) [ ( ( EB ) + N_CELL_ENTRIES *( ( x ) + ( y ) *( 1 *( 100 ) ) + ( z ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) ] ) - ( ( grid ) [ ( ( WT ) + N_CELL_ENTRIES *( ( x ) + ( y ) *( 1 *( 100 ) ) + ( z ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) ] ) - ( ( grid ) [ ( ( WB ) + N_CELL_ENTRIES *( ( x ) + ( y ) *( 1 *( 100 ) ) + ( z ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) ] );
				uy = + ( ( grid ) [ ( ( N ) + N_CELL_ENTRIES *( ( x ) + ( y ) *( 1 *( 100 ) ) + ( z ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) ] ) - ( ( grid ) [ ( ( S ) + N_CELL_ENTRIES *( ( x ) + ( y ) *( 1 *( 100 ) ) + ( z ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) ] ) + ( ( grid ) [ ( ( NE ) + N_CELL_ENTRIES *( ( x ) + ( y ) *( 1 *( 100 ) ) + ( z ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) ] ) + ( ( grid ) [ ( ( NW ) + N_CELL_ENTRIES *( ( x ) + ( y ) *( 1 *( 100 ) ) + ( z ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) ] ) - ( ( grid ) [ ( ( SE ) + N_CELL_ENTRIES *( ( x ) + ( y ) *( 1 *( 100 ) ) + ( z ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) ] ) - ( ( grid ) [ ( ( SW ) + N_CELL_ENTRIES *( ( x ) + ( y ) *( 1 *( 100 ) ) + ( z ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) ] ) + ( ( grid ) [ ( ( NT ) + N_CELL_ENTRIES *( ( x ) + ( y ) *( 1 *( 100 ) ) + ( z ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) ] ) + ( ( grid ) [ ( ( NB ) + N_CELL_ENTRIES *( ( x ) + ( y ) *( 1 *( 100 ) ) + ( z ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) ] ) - ( ( grid ) [ ( ( ST ) + N_CELL_ENTRIES *( ( x ) + ( y ) *( 1 *( 100 ) ) + ( z ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) ] ) - ( ( grid ) [ ( ( SB ) + N_CELL_ENTRIES *( ( x ) + ( y ) *( 1 *( 100 ) ) + ( z ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) ] );
				uz = + ( ( grid ) [ ( ( T ) + N_CELL_ENTRIES *( ( x ) + ( y ) *( 1 *( 100 ) ) + ( z ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) ] ) - ( ( grid ) [ ( ( B ) + N_CELL_ENTRIES *( ( x ) + ( y ) *( 1 *( 100 ) ) + ( z ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) ] ) + ( ( grid ) [ ( ( NT ) + N_CELL_ENTRIES *( ( x ) + ( y ) *( 1 *( 100 ) ) + ( z ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) ] ) - ( ( grid ) [ ( ( NB ) + N_CELL_ENTRIES *( ( x ) + ( y ) *( 1 *( 100 ) ) + ( z ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) ] ) + ( ( grid ) [ ( ( ST ) + N_CELL_ENTRIES *( ( x ) + ( y ) *( 1 *( 100 ) ) + ( z ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) ] ) - ( ( grid ) [ ( ( SB ) + N_CELL_ENTRIES *( ( x ) + ( y ) *( 1 *( 100 ) ) + ( z ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) ] ) + ( ( grid ) [ ( ( ET ) + N_CELL_ENTRIES *( ( x ) + ( y ) *( 1 *( 100 ) ) + ( z ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) ] ) - ( ( grid ) [ ( ( EB ) + N_CELL_ENTRIES *( ( x ) + ( y ) *( 1 *( 100 ) ) + ( z ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) ] ) + ( ( grid ) [ ( ( WT ) + N_CELL_ENTRIES *( ( x ) + ( y ) *( 1 *( 100 ) ) + ( z ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) ] ) - ( ( grid ) [ ( ( WB ) + N_CELL_ENTRIES *( ( x ) + ( y ) *( 1 *( 100 ) ) + ( z ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) ] );
				ux /= rho;
				uy /= rho;
				uz /= rho;
				if ( binary ) {
					nm_lbm_storeValue ( file , &ux );
					nm_lbm_storeValue ( file , &uy );
					nm_lbm_storeValue ( file , &uz );
				}

				else fprintf ( file , "%e %e %e\n" , ux , uy , uz );
			}

		}

	}

	fclose ( file );
}

void LBM_compareVelocityField ( LBM_Grid grid , const char *filename , const int binary ) {
	int x , y , z;
	double rho , ux , uy , uz;
	float fileUx , fileUy , fileUz , dUx , dUy , dUz , diff2 , maxDiff2 = - 1e+30;
	FILE *file = fopen ( filename , ( binary ? "rb" : "r" ) );
	for ( z = 0;
	z < ( 130 );
	z ++ ) {
		for ( y = 0;
		y < ( 1 *( 100 ) );
		y ++ ) {
			for ( x = 0;
			x < ( 1 *( 100 ) );
			x ++ ) {
				rho = + ( ( grid ) [ ( ( C ) + N_CELL_ENTRIES *( ( x ) + ( y ) *( 1 *( 100 ) ) + ( z ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) ] ) + ( ( grid ) [ ( ( N ) + N_CELL_ENTRIES *( ( x ) + ( y ) *( 1 *( 100 ) ) + ( z ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) ] ) + ( ( grid ) [ ( ( S ) + N_CELL_ENTRIES *( ( x ) + ( y ) *( 1 *( 100 ) ) + ( z ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) ] ) + ( ( grid ) [ ( ( E ) + N_CELL_ENTRIES *( ( x ) + ( y ) *( 1 *( 100 ) ) + ( z ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) ] ) + ( ( grid ) [ ( ( W ) + N_CELL_ENTRIES *( ( x ) + ( y ) *( 1 *( 100 ) ) + ( z ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) ] ) + ( ( grid ) [ ( ( T ) + N_CELL_ENTRIES *( ( x ) + ( y ) *( 1 *( 100 ) ) + ( z ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) ] ) + ( ( grid ) [ ( ( B ) + N_CELL_ENTRIES *( ( x ) + ( y ) *( 1 *( 100 ) ) + ( z ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) ] ) + ( ( grid ) [ ( ( NE ) + N_CELL_ENTRIES *( ( x ) + ( y ) *( 1 *( 100 ) ) + ( z ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) ] ) + ( ( grid ) [ ( ( NW ) + N_CELL_ENTRIES *( ( x ) + ( y ) *( 1 *( 100 ) ) + ( z ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) ] ) + ( ( grid ) [ ( ( SE ) + N_CELL_ENTRIES *( ( x ) + ( y ) *( 1 *( 100 ) ) + ( z ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) ] ) + ( ( grid ) [ ( ( SW ) + N_CELL_ENTRIES *( ( x ) + ( y ) *( 1 *( 100 ) ) + ( z ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) ] ) + ( ( grid ) [ ( ( NT ) + N_CELL_ENTRIES *( ( x ) + ( y ) *( 1 *( 100 ) ) + ( z ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) ] ) + ( ( grid ) [ ( ( NB ) + N_CELL_ENTRIES *( ( x ) + ( y ) *( 1 *( 100 ) ) + ( z ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) ] ) + ( ( grid ) [ ( ( ST ) + N_CELL_ENTRIES *( ( x ) + ( y ) *( 1 *( 100 ) ) + ( z ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) ] ) + ( ( grid ) [ ( ( SB ) + N_CELL_ENTRIES *( ( x ) + ( y ) *( 1 *( 100 ) ) + ( z ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) ] ) + ( ( grid ) [ ( ( ET ) + N_CELL_ENTRIES *( ( x ) + ( y ) *( 1 *( 100 ) ) + ( z ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) ] ) + ( ( grid ) [ ( ( EB ) + N_CELL_ENTRIES *( ( x ) + ( y ) *( 1 *( 100 ) ) + ( z ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) ] ) + ( ( grid ) [ ( ( WT ) + N_CELL_ENTRIES *( ( x ) + ( y ) *( 1 *( 100 ) ) + ( z ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) ] ) + ( ( grid ) [ ( ( WB ) + N_CELL_ENTRIES *( ( x ) + ( y ) *( 1 *( 100 ) ) + ( z ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) ] );
				ux = + ( ( grid ) [ ( ( E ) + N_CELL_ENTRIES *( ( x ) + ( y ) *( 1 *( 100 ) ) + ( z ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) ] ) - ( ( grid ) [ ( ( W ) + N_CELL_ENTRIES *( ( x ) + ( y ) *( 1 *( 100 ) ) + ( z ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) ] ) + ( ( grid ) [ ( ( NE ) + N_CELL_ENTRIES *( ( x ) + ( y ) *( 1 *( 100 ) ) + ( z ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) ] ) - ( ( grid ) [ ( ( NW ) + N_CELL_ENTRIES *( ( x ) + ( y ) *( 1 *( 100 ) ) + ( z ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) ] ) + ( ( grid ) [ ( ( SE ) + N_CELL_ENTRIES *( ( x ) + ( y ) *( 1 *( 100 ) ) + ( z ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) ] ) - ( ( grid ) [ ( ( SW ) + N_CELL_ENTRIES *( ( x ) + ( y ) *( 1 *( 100 ) ) + ( z ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) ] ) + ( ( grid ) [ ( ( ET ) + N_CELL_ENTRIES *( ( x ) + ( y ) *( 1 *( 100 ) ) + ( z ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) ] ) + ( ( grid ) [ ( ( EB ) + N_CELL_ENTRIES *( ( x ) + ( y ) *( 1 *( 100 ) ) + ( z ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) ] ) - ( ( grid ) [ ( ( WT ) + N_CELL_ENTRIES *( ( x ) + ( y ) *( 1 *( 100 ) ) + ( z ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) ] ) - ( ( grid ) [ ( ( WB ) + N_CELL_ENTRIES *( ( x ) + ( y ) *( 1 *( 100 ) ) + ( z ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) ] );
				uy = + ( ( grid ) [ ( ( N ) + N_CELL_ENTRIES *( ( x ) + ( y ) *( 1 *( 100 ) ) + ( z ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) ] ) - ( ( grid ) [ ( ( S ) + N_CELL_ENTRIES *( ( x ) + ( y ) *( 1 *( 100 ) ) + ( z ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) ] ) + ( ( grid ) [ ( ( NE ) + N_CELL_ENTRIES *( ( x ) + ( y ) *( 1 *( 100 ) ) + ( z ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) ] ) + ( ( grid ) [ ( ( NW ) + N_CELL_ENTRIES *( ( x ) + ( y ) *( 1 *( 100 ) ) + ( z ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) ] ) - ( ( grid ) [ ( ( SE ) + N_CELL_ENTRIES *( ( x ) + ( y ) *( 1 *( 100 ) ) + ( z ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) ] ) - ( ( grid ) [ ( ( SW ) + N_CELL_ENTRIES *( ( x ) + ( y ) *( 1 *( 100 ) ) + ( z ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) ] ) + ( ( grid ) [ ( ( NT ) + N_CELL_ENTRIES *( ( x ) + ( y ) *( 1 *( 100 ) ) + ( z ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) ] ) + ( ( grid ) [ ( ( NB ) + N_CELL_ENTRIES *( ( x ) + ( y ) *( 1 *( 100 ) ) + ( z ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) ] ) - ( ( grid ) [ ( ( ST ) + N_CELL_ENTRIES *( ( x ) + ( y ) *( 1 *( 100 ) ) + ( z ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) ] ) - ( ( grid ) [ ( ( SB ) + N_CELL_ENTRIES *( ( x ) + ( y ) *( 1 *( 100 ) ) + ( z ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) ] );
				uz = + ( ( grid ) [ ( ( T ) + N_CELL_ENTRIES *( ( x ) + ( y ) *( 1 *( 100 ) ) + ( z ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) ] ) - ( ( grid ) [ ( ( B ) + N_CELL_ENTRIES *( ( x ) + ( y ) *( 1 *( 100 ) ) + ( z ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) ] ) + ( ( grid ) [ ( ( NT ) + N_CELL_ENTRIES *( ( x ) + ( y ) *( 1 *( 100 ) ) + ( z ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) ] ) - ( ( grid ) [ ( ( NB ) + N_CELL_ENTRIES *( ( x ) + ( y ) *( 1 *( 100 ) ) + ( z ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) ] ) + ( ( grid ) [ ( ( ST ) + N_CELL_ENTRIES *( ( x ) + ( y ) *( 1 *( 100 ) ) + ( z ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) ] ) - ( ( grid ) [ ( ( SB ) + N_CELL_ENTRIES *( ( x ) + ( y ) *( 1 *( 100 ) ) + ( z ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) ] ) + ( ( grid ) [ ( ( ET ) + N_CELL_ENTRIES *( ( x ) + ( y ) *( 1 *( 100 ) ) + ( z ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) ] ) - ( ( grid ) [ ( ( EB ) + N_CELL_ENTRIES *( ( x ) + ( y ) *( 1 *( 100 ) ) + ( z ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) ] ) + ( ( grid ) [ ( ( WT ) + N_CELL_ENTRIES *( ( x ) + ( y ) *( 1 *( 100 ) ) + ( z ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) ] ) - ( ( grid ) [ ( ( WB ) + N_CELL_ENTRIES *( ( x ) + ( y ) *( 1 *( 100 ) ) + ( z ) *( 1 *( 100 ) ) *( 1 *( 100 ) ) ) ) ] );
				ux /= rho;
				uy /= rho;
				uz /= rho;
				if ( binary ) {
					nm_lbm_loadValue ( file , &fileUx );
					nm_lbm_loadValue ( file , &fileUy );
					nm_lbm_loadValue ( file , &fileUz );
				}

				else {
					if ( sizeof ( float ) == sizeof ( double ) ) {
						fscanf ( file , "%lf %lf %lf\n" , &fileUx , &fileUy , &fileUz );
					}

					else {
						fscanf ( file , "%f %f %f\n" , &fileUx , &fileUy , &fileUz );
					}

				}

				dUx = ux - fileUx;
				dUy = uy - fileUy;
				dUz = uz - fileUz;
				diff2 = dUx *dUx + dUy *dUy + dUz *dUz;
				if ( diff2 > maxDiff2 ) maxDiff2 = diff2;
			}

		}

	}

	printf ( "LBM_compareVelocityField: maxDiff = %e  ==>  %s\n\n" , sqrt ( maxDiff2 ) , sqrt ( maxDiff2 ) > 1e-5 ? "##### ERROR #####" : "OK" );
	fclose ( file );
}

static LBM_GridPtr main_srcGrid , main_dstGrid;
int main ( int nArgs , char *arg [ ] ) {
	MAIN_Param param;
	MAIN_Time time;
	int t;
	MAIN_parseCommandLine ( nArgs , arg , &param );
	MAIN_printInfo ( &param );
	MAIN_initialize ( &param );
	MAIN_startClock ( &time );
	for ( t = 1;
	t <= param.nTimeSteps;
	t ++ ) {
		if ( param.simType == CHANNEL ) {
			LBM_handleInOutFlow ( *main_srcGrid );
		}

		LBM_performStreamCollideTRT ( *main_srcGrid , *main_dstGrid );
		LBM_swapGrids ( &main_srcGrid , &main_dstGrid );
		if ( ( t & 63 ) == 0 ) {
			printf ( "timestep: %i\n" , t );
			LBM_showGridStatistics ( *main_srcGrid );
		}

	}

	MAIN_stopClock ( &time , &param );
	MAIN_finalize ( &param );
	return 0;
}

void MAIN_parseCommandLine ( int nArgs , char *arg [ ] , MAIN_Param *param ) {
	struct stat fileStat;
	if ( nArgs < 5 || nArgs > 6 ) {
		printf ( "syntax: lbm <time steps> <result file> <0: nil, 1: cmp, 2: str> <0: ldc, 1: channel flow> [<obstacle file>]\n" );
		exit ( 1 );
	}

	param -> nTimeSteps = atoi ( arg [ 1 ] );
	param -> resultFilename = arg [ 2 ];
	param -> action = ( MAIN_Action ) atoi ( arg [ 3 ] );
	param -> simType = ( MAIN_SimType ) atoi ( arg [ 4 ] );
	if ( nArgs == 6 ) {
		param -> obstacleFilename = arg [ 5 ];
		if ( stat ( param -> obstacleFilename , &fileStat ) != 0 ) {
			printf ( "MAIN_parseCommandLine: cannot stat obstacle file '%s'\n" , param -> obstacleFilename );
			exit ( 1 );
		}

		if ( fileStat.st_size != ( 1 *( 100 ) ) *( 1 *( 100 ) ) *( 130 ) + ( ( 1 *( 100 ) ) + 1 ) *( 130 ) ) {
			printf ( "MAIN_parseCommandLine:\n" "\tsize of file '%s' is %i bytes\n" "\texpected size is %i bytes\n" , param -> obstacleFilename , ( int ) fileStat.st_size , ( 1 *( 100 ) ) *( 1 *( 100 ) ) *( 130 ) + ( ( 1 *( 100 ) ) + 1 ) *( 130 ) );
			exit ( 1 );
		}

	}

	else param -> obstacleFilename = ( ( void *) 0 );
	if ( param -> action == COMPARE && stat ( param -> resultFilename , &fileStat ) != 0 ) {
		printf ( "MAIN_parseCommandLine: cannot stat result file '%s'\n" , param -> resultFilename );
		exit ( 1 );
	}

}

void MAIN_printInfo ( const MAIN_Param *param ) {
	const char actionString [ 3 ] [ 32 ] = {
		"nothing" , "compare" , "store" 	}

	;
	const char simTypeString [ 3 ] [ 32 ] = {
		"lid-driven cavity" , "channel flow" 	}

	;
	printf ( "MAIN_printInfo:\n" "\tgrid size      : %i x %i x %i = %.2f * 10^6 Cells\n" "\tnTimeSteps     : %i\n" "\tresult file    : %s\n" "\taction         : %s\n" "\tsimulation type: %s\n" "\tobstacle file  : %s\n\n" , ( 1 *( 100 ) ) , ( 1 *( 100 ) ) , ( 130 ) , 1e-6 *( 1 *( 100 ) ) *( 1 *( 100 ) ) *( 130 ) , param -> nTimeSteps , param -> resultFilename , actionString [ param -> action ] , simTypeString [ param -> simType ] , ( param -> obstacleFilename == ( ( void *) 0 ) ) ? "<none>" : param -> obstacleFilename );
}

void MAIN_initialize ( const MAIN_Param *param ) {
	LBM_allocateGrid ( ( double **) & main_srcGrid );
	LBM_allocateGrid ( ( double **) & main_dstGrid );
	LBM_initializeGrid ( *main_srcGrid );
	LBM_initializeGrid ( *main_dstGrid );
	if ( param -> obstacleFilename != ( ( void *) 0 ) ) {
		LBM_loadObstacleFile ( *main_srcGrid , param -> obstacleFilename );
		LBM_loadObstacleFile ( *main_dstGrid , param -> obstacleFilename );
	}

	if ( param -> simType == CHANNEL ) {
		LBM_initializeSpecialCellsForChannel ( *main_srcGrid );
		LBM_initializeSpecialCellsForChannel ( *main_dstGrid );
	}

	else {
		LBM_initializeSpecialCellsForLDC ( *main_srcGrid );
		LBM_initializeSpecialCellsForLDC ( *main_dstGrid );
	}

	LBM_showGridStatistics ( *main_srcGrid );
}

void MAIN_finalize ( const MAIN_Param *param ) {
	LBM_showGridStatistics ( *main_srcGrid );
	if ( param -> action == COMPARE ) LBM_compareVelocityField ( *main_srcGrid , param -> resultFilename , ( - 1 ) );
	if ( param -> action == STORE ) LBM_storeVelocityField ( *main_srcGrid , param -> resultFilename , ( - 1 ) );
	LBM_freeGrid ( ( double **) & main_srcGrid );
	LBM_freeGrid ( ( double **) & main_dstGrid );
}

void MAIN_startClock ( MAIN_Time *time ) {
	time -> timeScale = 1.0; // sysconf ( _SC_CLK_TCK );
	time -> tickStart = times ( &( time -> timeStart ) );
}

void MAIN_stopClock ( MAIN_Time *time , const MAIN_Param *param ) {
	time -> tickStop = times ( &( time -> timeStop ) );
	printf ( "MAIN_stopClock:\n" "\tusr: %7.2f sys: %7.2f tot: %7.2f wct: %7.2f MLUPS: %5.2f\n\n" , ( time -> timeStop.tms_utime - time -> timeStart.tms_utime ) *time -> timeScale , ( time -> timeStop.tms_stime - time -> timeStart.tms_stime ) *time -> timeScale , ( time -> timeStop.tms_utime - time -> timeStart.tms_utime + time -> timeStop.tms_stime - time -> timeStart.tms_stime ) *time -> timeScale , ( time -> tickStop - time -> tickStart ) *time -> timeScale , 1.0e-6 *( 1 *( 100 ) ) *( 1 *( 100 ) ) *( 130 ) *param -> nTimeSteps / ( time -> tickStop - time -> tickStart ) / time -> timeScale );
}

