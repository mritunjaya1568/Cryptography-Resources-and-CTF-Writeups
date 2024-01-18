#define __STDC_WANT_IEC_60559_TYPES_EXT__
#include <float.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <tgmath.h>

struct test
  {
    void (*func) (void);
    const char *func_name;
    const char *test_name;
    int mant_dig;
    int narrow_mant_dig;
  };
int num_pass, num_fail;
volatile int called_mant_dig;
const char *volatile called_func_name;
enum e { E, F };
struct s
  {
    int bf:2;
  };
#if defined HUGE_VAL_F64
# if LDBL_MANT_DIG == DBL_MANT_DIG
typedef _Float64 long_double_Float64;
typedef __CFLOAT64 complex_long_double_Float64;
# else
typedef long double long_double_Float64;
typedef _Complex long double complex_long_double_Float64;
# endif
#endif
#if defined HUGE_VAL_F64X
# if LDBL_MANT_DIG == DBL_MANT_DIG
typedef _Float64x long_double_Float64x;
typedef __CFLOAT64X complex_long_double_Float64x;
# else
typedef long double long_double_Float64x;
typedef _Complex long double complex_long_double_Float64x;
# endif
#endif
#ifdef HUGE_VAL_F64X
typedef _Float64x Float32x_ext;
typedef __CFLOAT64X complex_Float32x_ext;
# define FLT32X_EXT_MANT_DIG FLT64X_MANT_DIG
#else
typedef _Float64 Float32x_ext;
typedef __CFLOAT64 complex_Float32x_ext;
# define FLT32X_EXT_MANT_DIG FLT64_MANT_DIG
#endif
#if defined HUGE_VAL_F16
_Float16 var__Float16 __attribute__ ((unused));
_Float16 volatile vol_var__Float16 __attribute__ ((unused));
#endif
#if defined HUGE_VAL_F16
__CFLOAT16 var___CFLOAT16 __attribute__ ((unused));
__CFLOAT16 volatile vol_var___CFLOAT16 __attribute__ ((unused));
#endif
float var_float __attribute__ ((unused));
float volatile vol_var_float __attribute__ ((unused));
_Complex float var__Complex_float __attribute__ ((unused));
_Complex float volatile vol_var__Complex_float __attribute__ ((unused));
#if defined HUGE_VAL_F32
_Float32 var__Float32 __attribute__ ((unused));
_Float32 volatile vol_var__Float32 __attribute__ ((unused));
#endif
#if defined HUGE_VAL_F32
__CFLOAT32 var___CFLOAT32 __attribute__ ((unused));
__CFLOAT32 volatile vol_var___CFLOAT32 __attribute__ ((unused));
#endif
#if defined HUGE_VAL_F32X
_Float32x var__Float32x __attribute__ ((unused));
_Float32x volatile vol_var__Float32x __attribute__ ((unused));
#endif
#if defined HUGE_VAL_F32X
__CFLOAT32X var___CFLOAT32X __attribute__ ((unused));
__CFLOAT32X volatile vol_var___CFLOAT32X __attribute__ ((unused));
#endif
double var_double __attribute__ ((unused));
double volatile vol_var_double __attribute__ ((unused));
_Complex double var__Complex_double __attribute__ ((unused));
_Complex double volatile vol_var__Complex_double __attribute__ ((unused));
long double var_long_double __attribute__ ((unused));
long double volatile vol_var_long_double __attribute__ ((unused));
_Complex long double var__Complex_long_double __attribute__ ((unused));
_Complex long double volatile vol_var__Complex_long_double __attribute__ ((unused));
#if defined HUGE_VAL_F64
_Float64 var__Float64 __attribute__ ((unused));
_Float64 volatile vol_var__Float64 __attribute__ ((unused));
#endif
#if defined HUGE_VAL_F64
__CFLOAT64 var___CFLOAT64 __attribute__ ((unused));
__CFLOAT64 volatile vol_var___CFLOAT64 __attribute__ ((unused));
#endif
#if defined HUGE_VAL_F64X
_Float64x var__Float64x __attribute__ ((unused));
_Float64x volatile vol_var__Float64x __attribute__ ((unused));
#endif
#if defined HUGE_VAL_F64X
__CFLOAT64X var___CFLOAT64X __attribute__ ((unused));
__CFLOAT64X volatile vol_var___CFLOAT64X __attribute__ ((unused));
#endif
#if defined HUGE_VAL_F128
_Float128 var__Float128 __attribute__ ((unused));
_Float128 volatile vol_var__Float128 __attribute__ ((unused));
#endif
#if defined HUGE_VAL_F128
__CFLOAT128 var___CFLOAT128 __attribute__ ((unused));
__CFLOAT128 volatile vol_var___CFLOAT128 __attribute__ ((unused));
#endif
char var_char __attribute__ ((unused));
char volatile vol_var_char __attribute__ ((unused));
_Complex char var__Complex_char __attribute__ ((unused));
_Complex char volatile vol_var__Complex_char __attribute__ ((unused));
signed char var_signed_char __attribute__ ((unused));
signed char volatile vol_var_signed_char __attribute__ ((unused));
_Complex signed char var__Complex_signed_char __attribute__ ((unused));
_Complex signed char volatile vol_var__Complex_signed_char __attribute__ ((unused));
unsigned char var_unsigned_char __attribute__ ((unused));
unsigned char volatile vol_var_unsigned_char __attribute__ ((unused));
_Complex unsigned char var__Complex_unsigned_char __attribute__ ((unused));
_Complex unsigned char volatile vol_var__Complex_unsigned_char __attribute__ ((unused));
short int var_short_int __attribute__ ((unused));
short int volatile vol_var_short_int __attribute__ ((unused));
_Complex short int var__Complex_short_int __attribute__ ((unused));
_Complex short int volatile vol_var__Complex_short_int __attribute__ ((unused));
unsigned short int var_unsigned_short_int __attribute__ ((unused));
unsigned short int volatile vol_var_unsigned_short_int __attribute__ ((unused));
_Complex unsigned short int var__Complex_unsigned_short_int __attribute__ ((unused));
_Complex unsigned short int volatile vol_var__Complex_unsigned_short_int __attribute__ ((unused));
int var_int __attribute__ ((unused));
int volatile vol_var_int __attribute__ ((unused));
_Complex int var__Complex_int __attribute__ ((unused));
_Complex int volatile vol_var__Complex_int __attribute__ ((unused));
unsigned int var_unsigned_int __attribute__ ((unused));
unsigned int volatile vol_var_unsigned_int __attribute__ ((unused));
_Complex unsigned int var__Complex_unsigned_int __attribute__ ((unused));
_Complex unsigned int volatile vol_var__Complex_unsigned_int __attribute__ ((unused));
long int var_long_int __attribute__ ((unused));
long int volatile vol_var_long_int __attribute__ ((unused));
_Complex long int var__Complex_long_int __attribute__ ((unused));
_Complex long int volatile vol_var__Complex_long_int __attribute__ ((unused));
unsigned long int var_unsigned_long_int __attribute__ ((unused));
unsigned long int volatile vol_var_unsigned_long_int __attribute__ ((unused));
_Complex unsigned long int var__Complex_unsigned_long_int __attribute__ ((unused));
_Complex unsigned long int volatile vol_var__Complex_unsigned_long_int __attribute__ ((unused));
long long int var_long_long_int __attribute__ ((unused));
long long int volatile vol_var_long_long_int __attribute__ ((unused));
_Complex long long int var__Complex_long_long_int __attribute__ ((unused));
_Complex long long int volatile vol_var__Complex_long_long_int __attribute__ ((unused));
unsigned long long int var_unsigned_long_long_int __attribute__ ((unused));
unsigned long long int volatile vol_var_unsigned_long_long_int __attribute__ ((unused));
_Complex unsigned long long int var__Complex_unsigned_long_long_int __attribute__ ((unused));
_Complex unsigned long long int volatile vol_var__Complex_unsigned_long_long_int __attribute__ ((unused));
#if defined __SIZEOF_INT128__
__int128 var___int128 __attribute__ ((unused));
__int128 volatile vol_var___int128 __attribute__ ((unused));
#endif
#if defined __SIZEOF_INT128__
_Complex __int128 var__Complex___int128 __attribute__ ((unused));
_Complex __int128 volatile vol_var__Complex___int128 __attribute__ ((unused));
#endif
#if defined __SIZEOF_INT128__
unsigned __int128 var_unsigned___int128 __attribute__ ((unused));
unsigned __int128 volatile vol_var_unsigned___int128 __attribute__ ((unused));
#endif
#if defined __SIZEOF_INT128__
_Complex unsigned __int128 var__Complex_unsigned___int128 __attribute__ ((unused));
_Complex unsigned __int128 volatile vol_var__Complex_unsigned___int128 __attribute__ ((unused));
#endif
enum e var_enum_e __attribute__ ((unused));
enum e volatile vol_var_enum_e __attribute__ ((unused));
_Bool var__Bool __attribute__ ((unused));
_Bool volatile vol_var__Bool __attribute__ ((unused));
struct s var_struct_s __attribute__ ((unused));
struct s volatile vol_var_struct_s __attribute__ ((unused));
#define vol_var_bit_field vol_var_struct_s.bf
#if defined HUGE_VAL_F64
long_double_Float64 var_long_double_Float64 __attribute__ ((unused));
long_double_Float64 volatile vol_var_long_double_Float64 __attribute__ ((unused));
#endif
#if defined HUGE_VAL_F64
complex_long_double_Float64 var_complex_long_double_Float64 __attribute__ ((unused));
complex_long_double_Float64 volatile vol_var_complex_long_double_Float64 __attribute__ ((unused));
#endif
#if defined HUGE_VAL_F64X
long_double_Float64x var_long_double_Float64x __attribute__ ((unused));
long_double_Float64x volatile vol_var_long_double_Float64x __attribute__ ((unused));
#endif
#if defined HUGE_VAL_F64X
complex_long_double_Float64x var_complex_long_double_Float64x __attribute__ ((unused));
complex_long_double_Float64x volatile vol_var_complex_long_double_Float64x __attribute__ ((unused));
#endif
Float32x_ext var_Float32x_ext __attribute__ ((unused));
Float32x_ext volatile vol_var_Float32x_ext __attribute__ ((unused));
complex_Float32x_ext var_complex_Float32x_ext __attribute__ ((unused));
complex_Float32x_ext volatile vol_var_complex_Float32x_ext __attribute__ ((unused));
#if defined HUGE_VAL_F16
_Float16
(powf16) (_Float16 arg0 __attribute__ ((unused)), _Float16 arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT16_MANT_DIG;
  called_func_name = "pow";
  return 0;
}
#endif
#if defined HUGE_VAL_F16
__CFLOAT16
(cpowf16) (__CFLOAT16 arg0 __attribute__ ((unused)), __CFLOAT16 arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT16_MANT_DIG;
  called_func_name = "cpow";
  return 0;
}
#endif
float
(powf) (float arg0 __attribute__ ((unused)), float arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT_MANT_DIG;
  called_func_name = "pow";
  return 0;
}
_Complex float
(cpowf) (_Complex float arg0 __attribute__ ((unused)), _Complex float arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT_MANT_DIG;
  called_func_name = "cpow";
  return 0;
}
#if defined HUGE_VAL_F32
_Float32
(powf32) (_Float32 arg0 __attribute__ ((unused)), _Float32 arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT32_MANT_DIG;
  called_func_name = "pow";
  return 0;
}
#endif
#if defined HUGE_VAL_F32
__CFLOAT32
(cpowf32) (__CFLOAT32 arg0 __attribute__ ((unused)), __CFLOAT32 arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT32_MANT_DIG;
  called_func_name = "cpow";
  return 0;
}
#endif
#if defined HUGE_VAL_F32X
_Float32x
(powf32x) (_Float32x arg0 __attribute__ ((unused)), _Float32x arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT32X_MANT_DIG;
  called_func_name = "pow";
  return 0;
}
#endif
#if defined HUGE_VAL_F32X
__CFLOAT32X
(cpowf32x) (__CFLOAT32X arg0 __attribute__ ((unused)), __CFLOAT32X arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT32X_MANT_DIG;
  called_func_name = "cpow";
  return 0;
}
#endif
double
(pow) (double arg0 __attribute__ ((unused)), double arg1 __attribute__ ((unused)))
{
  called_mant_dig = DBL_MANT_DIG;
  called_func_name = "pow";
  return 0;
}
_Complex double
(cpow) (_Complex double arg0 __attribute__ ((unused)), _Complex double arg1 __attribute__ ((unused)))
{
  called_mant_dig = DBL_MANT_DIG;
  called_func_name = "cpow";
  return 0;
}
long double
(powl) (long double arg0 __attribute__ ((unused)), long double arg1 __attribute__ ((unused)))
{
  called_mant_dig = LDBL_MANT_DIG;
  called_func_name = "pow";
  return 0;
}
_Complex long double
(cpowl) (_Complex long double arg0 __attribute__ ((unused)), _Complex long double arg1 __attribute__ ((unused)))
{
  called_mant_dig = LDBL_MANT_DIG;
  called_func_name = "cpow";
  return 0;
}
#if defined HUGE_VAL_F64
_Float64
(powf64) (_Float64 arg0 __attribute__ ((unused)), _Float64 arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT64_MANT_DIG;
  called_func_name = "pow";
  return 0;
}
#endif
#if defined HUGE_VAL_F64
__CFLOAT64
(cpowf64) (__CFLOAT64 arg0 __attribute__ ((unused)), __CFLOAT64 arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT64_MANT_DIG;
  called_func_name = "cpow";
  return 0;
}
#endif
#if defined HUGE_VAL_F64X
_Float64x
(powf64x) (_Float64x arg0 __attribute__ ((unused)), _Float64x arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT64X_MANT_DIG;
  called_func_name = "pow";
  return 0;
}
#endif
#if defined HUGE_VAL_F64X
__CFLOAT64X
(cpowf64x) (__CFLOAT64X arg0 __attribute__ ((unused)), __CFLOAT64X arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT64X_MANT_DIG;
  called_func_name = "cpow";
  return 0;
}
#endif
#if defined HUGE_VAL_F128
_Float128
(powf128) (_Float128 arg0 __attribute__ ((unused)), _Float128 arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT128_MANT_DIG;
  called_func_name = "pow";
  return 0;
}
#endif
#if defined HUGE_VAL_F128
__CFLOAT128
(cpowf128) (__CFLOAT128 arg0 __attribute__ ((unused)), __CFLOAT128 arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT128_MANT_DIG;
  called_func_name = "cpow";
  return 0;
}
#endif
#if defined HUGE_VAL_F16
static void
test_pow_0 (void)
{
  extern typeof (pow (vol_var__Float16, vol_var__Float16)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = pow (vol_var__Float16, vol_var__Float16);
}
#endif
#if defined HUGE_VAL_F16
static void
test_pow_1 (void)
{
  extern typeof (pow (vol_var__Float16, vol_var___CFLOAT16)) var___CFLOAT16 __attribute__ ((unused));
  vol_var___CFLOAT16 = pow (vol_var__Float16, vol_var___CFLOAT16);
}
#endif
#if defined HUGE_VAL_F16
static void
test_pow_2 (void)
{
  extern typeof (pow (vol_var__Float16, vol_var_float)) var_float __attribute__ ((unused));
  vol_var_float = pow (vol_var__Float16, vol_var_float);
}
#endif
#if defined HUGE_VAL_F16
static void
test_pow_3 (void)
{
  extern typeof (pow (vol_var__Float16, vol_var__Complex_float)) var__Complex_float __attribute__ ((unused));
  vol_var__Complex_float = pow (vol_var__Float16, vol_var__Complex_float);
}
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F32
static void
test_pow_4 (void)
{
  extern typeof (pow (vol_var__Float16, vol_var__Float32)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = pow (vol_var__Float16, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F32
static void
test_pow_5 (void)
{
  extern typeof (pow (vol_var__Float16, vol_var___CFLOAT32)) var___CFLOAT32 __attribute__ ((unused));
  vol_var___CFLOAT32 = pow (vol_var__Float16, vol_var___CFLOAT32);
}
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
static void
test_pow_6 (void)
{
  extern typeof (pow (vol_var__Float16, vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = pow (vol_var__Float16, vol_var__Float32x);
}
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
static void
test_pow_7 (void)
{
  extern typeof (pow (vol_var__Float16, vol_var___CFLOAT32X)) var___CFLOAT32X __attribute__ ((unused));
  vol_var___CFLOAT32X = pow (vol_var__Float16, vol_var___CFLOAT32X);
}
#endif
#if defined HUGE_VAL_F16
static void
test_pow_8 (void)
{
  extern typeof (pow (vol_var__Float16, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var__Float16, vol_var_double);
}
#endif
#if defined HUGE_VAL_F16
static void
test_pow_9 (void)
{
  extern typeof (pow (vol_var__Float16, vol_var__Complex_double)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Float16, vol_var__Complex_double);
}
#endif
#if defined HUGE_VAL_F16
static void
test_pow_10 (void)
{
  extern typeof (pow (vol_var__Float16, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = pow (vol_var__Float16, vol_var_long_double);
}
#endif
#if defined HUGE_VAL_F16
static void
test_pow_11 (void)
{
  extern typeof (pow (vol_var__Float16, vol_var__Complex_long_double)) var__Complex_long_double __attribute__ ((unused));
  vol_var__Complex_long_double = pow (vol_var__Float16, vol_var__Complex_long_double);
}
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F64
static void
test_pow_12 (void)
{
  extern typeof (pow (vol_var__Float16, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = pow (vol_var__Float16, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F64
static void
test_pow_13 (void)
{
  extern typeof (pow (vol_var__Float16, vol_var___CFLOAT64)) var___CFLOAT64 __attribute__ ((unused));
  vol_var___CFLOAT64 = pow (vol_var__Float16, vol_var___CFLOAT64);
}
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
static void
test_pow_14 (void)
{
  extern typeof (pow (vol_var__Float16, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = pow (vol_var__Float16, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
static void
test_pow_15 (void)
{
  extern typeof (pow (vol_var__Float16, vol_var___CFLOAT64X)) var___CFLOAT64X __attribute__ ((unused));
  vol_var___CFLOAT64X = pow (vol_var__Float16, vol_var___CFLOAT64X);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F16
static void
test_pow_16 (void)
{
  extern typeof (pow (vol_var__Float16, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = pow (vol_var__Float16, vol_var__Float128);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F16
static void
test_pow_17 (void)
{
  extern typeof (pow (vol_var__Float16, vol_var___CFLOAT128)) var___CFLOAT128 __attribute__ ((unused));
  vol_var___CFLOAT128 = pow (vol_var__Float16, vol_var___CFLOAT128);
}
#endif
#if defined HUGE_VAL_F16
static void
test_pow_18 (void)
{
  extern typeof (pow (vol_var__Float16, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var__Float16, vol_var_char);
}
#endif
#if defined HUGE_VAL_F16
static void
test_pow_19 (void)
{
  extern typeof (pow (vol_var__Float16, vol_var__Complex_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Float16, vol_var__Complex_char);
}
#endif
#if defined HUGE_VAL_F16
static void
test_pow_20 (void)
{
  extern typeof (pow (vol_var__Float16, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var__Float16, vol_var_signed_char);
}
#endif
#if defined HUGE_VAL_F16
static void
test_pow_21 (void)
{
  extern typeof (pow (vol_var__Float16, vol_var__Complex_signed_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Float16, vol_var__Complex_signed_char);
}
#endif
#if defined HUGE_VAL_F16
static void
test_pow_22 (void)
{
  extern typeof (pow (vol_var__Float16, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var__Float16, vol_var_unsigned_char);
}
#endif
#if defined HUGE_VAL_F16
static void
test_pow_23 (void)
{
  extern typeof (pow (vol_var__Float16, vol_var__Complex_unsigned_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Float16, vol_var__Complex_unsigned_char);
}
#endif
#if defined HUGE_VAL_F16
static void
test_pow_24 (void)
{
  extern typeof (pow (vol_var__Float16, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var__Float16, vol_var_short_int);
}
#endif
#if defined HUGE_VAL_F16
static void
test_pow_25 (void)
{
  extern typeof (pow (vol_var__Float16, vol_var__Complex_short_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Float16, vol_var__Complex_short_int);
}
#endif
#if defined HUGE_VAL_F16
static void
test_pow_26 (void)
{
  extern typeof (pow (vol_var__Float16, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var__Float16, vol_var_unsigned_short_int);
}
#endif
#if defined HUGE_VAL_F16
static void
test_pow_27 (void)
{
  extern typeof (pow (vol_var__Float16, vol_var__Complex_unsigned_short_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Float16, vol_var__Complex_unsigned_short_int);
}
#endif
#if defined HUGE_VAL_F16
static void
test_pow_28 (void)
{
  extern typeof (pow (vol_var__Float16, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var__Float16, vol_var_int);
}
#endif
#if defined HUGE_VAL_F16
static void
test_pow_29 (void)
{
  extern typeof (pow (vol_var__Float16, vol_var__Complex_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Float16, vol_var__Complex_int);
}
#endif
#if defined HUGE_VAL_F16
static void
test_pow_30 (void)
{
  extern typeof (pow (vol_var__Float16, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var__Float16, vol_var_unsigned_int);
}
#endif
#if defined HUGE_VAL_F16
static void
test_pow_31 (void)
{
  extern typeof (pow (vol_var__Float16, vol_var__Complex_unsigned_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Float16, vol_var__Complex_unsigned_int);
}
#endif
#if defined HUGE_VAL_F16
static void
test_pow_32 (void)
{
  extern typeof (pow (vol_var__Float16, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var__Float16, vol_var_long_int);
}
#endif
#if defined HUGE_VAL_F16
static void
test_pow_33 (void)
{
  extern typeof (pow (vol_var__Float16, vol_var__Complex_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Float16, vol_var__Complex_long_int);
}
#endif
#if defined HUGE_VAL_F16
static void
test_pow_34 (void)
{
  extern typeof (pow (vol_var__Float16, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var__Float16, vol_var_unsigned_long_int);
}
#endif
#if defined HUGE_VAL_F16
static void
test_pow_35 (void)
{
  extern typeof (pow (vol_var__Float16, vol_var__Complex_unsigned_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Float16, vol_var__Complex_unsigned_long_int);
}
#endif
#if defined HUGE_VAL_F16
static void
test_pow_36 (void)
{
  extern typeof (pow (vol_var__Float16, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var__Float16, vol_var_long_long_int);
}
#endif
#if defined HUGE_VAL_F16
static void
test_pow_37 (void)
{
  extern typeof (pow (vol_var__Float16, vol_var__Complex_long_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Float16, vol_var__Complex_long_long_int);
}
#endif
#if defined HUGE_VAL_F16
static void
test_pow_38 (void)
{
  extern typeof (pow (vol_var__Float16, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var__Float16, vol_var_unsigned_long_long_int);
}
#endif
#if defined HUGE_VAL_F16
static void
test_pow_39 (void)
{
  extern typeof (pow (vol_var__Float16, vol_var__Complex_unsigned_long_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Float16, vol_var__Complex_unsigned_long_long_int);
}
#endif
#if defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_pow_40 (void)
{
  extern typeof (pow (vol_var__Float16, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var__Float16, vol_var___int128);
}
#endif
#if defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_pow_41 (void)
{
  extern typeof (pow (vol_var__Float16, vol_var__Complex___int128)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Float16, vol_var__Complex___int128);
}
#endif
#if defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_pow_42 (void)
{
  extern typeof (pow (vol_var__Float16, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var__Float16, vol_var_unsigned___int128);
}
#endif
#if defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_pow_43 (void)
{
  extern typeof (pow (vol_var__Float16, vol_var__Complex_unsigned___int128)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Float16, vol_var__Complex_unsigned___int128);
}
#endif
#if defined HUGE_VAL_F16
static void
test_pow_44 (void)
{
  extern typeof (pow (vol_var__Float16, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var__Float16, vol_var_enum_e);
}
#endif
#if defined HUGE_VAL_F16
static void
test_pow_45 (void)
{
  extern typeof (pow (vol_var__Float16, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var__Float16, vol_var__Bool);
}
#endif
#if defined HUGE_VAL_F16
static void
test_pow_46 (void)
{
  extern typeof (pow (vol_var__Float16, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var__Float16, vol_var_bit_field);
}
#endif
#if defined HUGE_VAL_F16
static void
test_pow_47 (void)
{
  extern typeof (pow (vol_var___CFLOAT16, vol_var__Float16)) var___CFLOAT16 __attribute__ ((unused));
  vol_var___CFLOAT16 = pow (vol_var___CFLOAT16, vol_var__Float16);
}
#endif
#if defined HUGE_VAL_F16
static void
test_pow_48 (void)
{
  extern typeof (pow (vol_var___CFLOAT16, vol_var___CFLOAT16)) var___CFLOAT16 __attribute__ ((unused));
  vol_var___CFLOAT16 = pow (vol_var___CFLOAT16, vol_var___CFLOAT16);
}
#endif
#if defined HUGE_VAL_F16
static void
test_pow_49 (void)
{
  extern typeof (pow (vol_var___CFLOAT16, vol_var_float)) var__Complex_float __attribute__ ((unused));
  vol_var__Complex_float = pow (vol_var___CFLOAT16, vol_var_float);
}
#endif
#if defined HUGE_VAL_F16
static void
test_pow_50 (void)
{
  extern typeof (pow (vol_var___CFLOAT16, vol_var__Complex_float)) var__Complex_float __attribute__ ((unused));
  vol_var__Complex_float = pow (vol_var___CFLOAT16, vol_var__Complex_float);
}
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F32
static void
test_pow_51 (void)
{
  extern typeof (pow (vol_var___CFLOAT16, vol_var__Float32)) var___CFLOAT32 __attribute__ ((unused));
  vol_var___CFLOAT32 = pow (vol_var___CFLOAT16, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F32
static void
test_pow_52 (void)
{
  extern typeof (pow (vol_var___CFLOAT16, vol_var___CFLOAT32)) var___CFLOAT32 __attribute__ ((unused));
  vol_var___CFLOAT32 = pow (vol_var___CFLOAT16, vol_var___CFLOAT32);
}
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
static void
test_pow_53 (void)
{
  extern typeof (pow (vol_var___CFLOAT16, vol_var__Float32x)) var___CFLOAT32X __attribute__ ((unused));
  vol_var___CFLOAT32X = pow (vol_var___CFLOAT16, vol_var__Float32x);
}
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
static void
test_pow_54 (void)
{
  extern typeof (pow (vol_var___CFLOAT16, vol_var___CFLOAT32X)) var___CFLOAT32X __attribute__ ((unused));
  vol_var___CFLOAT32X = pow (vol_var___CFLOAT16, vol_var___CFLOAT32X);
}
#endif
#if defined HUGE_VAL_F16
static void
test_pow_55 (void)
{
  extern typeof (pow (vol_var___CFLOAT16, vol_var_double)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var___CFLOAT16, vol_var_double);
}
#endif
#if defined HUGE_VAL_F16
static void
test_pow_56 (void)
{
  extern typeof (pow (vol_var___CFLOAT16, vol_var__Complex_double)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var___CFLOAT16, vol_var__Complex_double);
}
#endif
#if defined HUGE_VAL_F16
static void
test_pow_57 (void)
{
  extern typeof (pow (vol_var___CFLOAT16, vol_var_long_double)) var__Complex_long_double __attribute__ ((unused));
  vol_var__Complex_long_double = pow (vol_var___CFLOAT16, vol_var_long_double);
}
#endif
#if defined HUGE_VAL_F16
static void
test_pow_58 (void)
{
  extern typeof (pow (vol_var___CFLOAT16, vol_var__Complex_long_double)) var__Complex_long_double __attribute__ ((unused));
  vol_var__Complex_long_double = pow (vol_var___CFLOAT16, vol_var__Complex_long_double);
}
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F64
static void
test_pow_59 (void)
{
  extern typeof (pow (vol_var___CFLOAT16, vol_var__Float64)) var___CFLOAT64 __attribute__ ((unused));
  vol_var___CFLOAT64 = pow (vol_var___CFLOAT16, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F64
static void
test_pow_60 (void)
{
  extern typeof (pow (vol_var___CFLOAT16, vol_var___CFLOAT64)) var___CFLOAT64 __attribute__ ((unused));
  vol_var___CFLOAT64 = pow (vol_var___CFLOAT16, vol_var___CFLOAT64);
}
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
static void
test_pow_61 (void)
{
  extern typeof (pow (vol_var___CFLOAT16, vol_var__Float64x)) var___CFLOAT64X __attribute__ ((unused));
  vol_var___CFLOAT64X = pow (vol_var___CFLOAT16, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
static void
test_pow_62 (void)
{
  extern typeof (pow (vol_var___CFLOAT16, vol_var___CFLOAT64X)) var___CFLOAT64X __attribute__ ((unused));
  vol_var___CFLOAT64X = pow (vol_var___CFLOAT16, vol_var___CFLOAT64X);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F16
static void
test_pow_63 (void)
{
  extern typeof (pow (vol_var___CFLOAT16, vol_var__Float128)) var___CFLOAT128 __attribute__ ((unused));
  vol_var___CFLOAT128 = pow (vol_var___CFLOAT16, vol_var__Float128);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F16
static void
test_pow_64 (void)
{
  extern typeof (pow (vol_var___CFLOAT16, vol_var___CFLOAT128)) var___CFLOAT128 __attribute__ ((unused));
  vol_var___CFLOAT128 = pow (vol_var___CFLOAT16, vol_var___CFLOAT128);
}
#endif
#if defined HUGE_VAL_F16
static void
test_pow_65 (void)
{
  extern typeof (pow (vol_var___CFLOAT16, vol_var_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var___CFLOAT16, vol_var_char);
}
#endif
#if defined HUGE_VAL_F16
static void
test_pow_66 (void)
{
  extern typeof (pow (vol_var___CFLOAT16, vol_var__Complex_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var___CFLOAT16, vol_var__Complex_char);
}
#endif
#if defined HUGE_VAL_F16
static void
test_pow_67 (void)
{
  extern typeof (pow (vol_var___CFLOAT16, vol_var_signed_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var___CFLOAT16, vol_var_signed_char);
}
#endif
#if defined HUGE_VAL_F16
static void
test_pow_68 (void)
{
  extern typeof (pow (vol_var___CFLOAT16, vol_var__Complex_signed_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var___CFLOAT16, vol_var__Complex_signed_char);
}
#endif
#if defined HUGE_VAL_F16
static void
test_pow_69 (void)
{
  extern typeof (pow (vol_var___CFLOAT16, vol_var_unsigned_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var___CFLOAT16, vol_var_unsigned_char);
}
#endif
#if defined HUGE_VAL_F16
static void
test_pow_70 (void)
{
  extern typeof (pow (vol_var___CFLOAT16, vol_var__Complex_unsigned_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var___CFLOAT16, vol_var__Complex_unsigned_char);
}
#endif
#if defined HUGE_VAL_F16
static void
test_pow_71 (void)
{
  extern typeof (pow (vol_var___CFLOAT16, vol_var_short_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var___CFLOAT16, vol_var_short_int);
}
#endif
#if defined HUGE_VAL_F16
static void
test_pow_72 (void)
{
  extern typeof (pow (vol_var___CFLOAT16, vol_var__Complex_short_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var___CFLOAT16, vol_var__Complex_short_int);
}
#endif
#if defined HUGE_VAL_F16
static void
test_pow_73 (void)
{
  extern typeof (pow (vol_var___CFLOAT16, vol_var_unsigned_short_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var___CFLOAT16, vol_var_unsigned_short_int);
}
#endif
#if defined HUGE_VAL_F16
static void
test_pow_74 (void)
{
  extern typeof (pow (vol_var___CFLOAT16, vol_var__Complex_unsigned_short_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var___CFLOAT16, vol_var__Complex_unsigned_short_int);
}
#endif
#if defined HUGE_VAL_F16
static void
test_pow_75 (void)
{
  extern typeof (pow (vol_var___CFLOAT16, vol_var_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var___CFLOAT16, vol_var_int);
}
#endif
#if defined HUGE_VAL_F16
static void
test_pow_76 (void)
{
  extern typeof (pow (vol_var___CFLOAT16, vol_var__Complex_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var___CFLOAT16, vol_var__Complex_int);
}
#endif
#if defined HUGE_VAL_F16
static void
test_pow_77 (void)
{
  extern typeof (pow (vol_var___CFLOAT16, vol_var_unsigned_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var___CFLOAT16, vol_var_unsigned_int);
}
#endif
#if defined HUGE_VAL_F16
static void
test_pow_78 (void)
{
  extern typeof (pow (vol_var___CFLOAT16, vol_var__Complex_unsigned_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var___CFLOAT16, vol_var__Complex_unsigned_int);
}
#endif
#if defined HUGE_VAL_F16
static void
test_pow_79 (void)
{
  extern typeof (pow (vol_var___CFLOAT16, vol_var_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var___CFLOAT16, vol_var_long_int);
}
#endif
#if defined HUGE_VAL_F16
static void
test_pow_80 (void)
{
  extern typeof (pow (vol_var___CFLOAT16, vol_var__Complex_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var___CFLOAT16, vol_var__Complex_long_int);
}
#endif
#if defined HUGE_VAL_F16
static void
test_pow_81 (void)
{
  extern typeof (pow (vol_var___CFLOAT16, vol_var_unsigned_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var___CFLOAT16, vol_var_unsigned_long_int);
}
#endif
#if defined HUGE_VAL_F16
static void
test_pow_82 (void)
{
  extern typeof (pow (vol_var___CFLOAT16, vol_var__Complex_unsigned_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var___CFLOAT16, vol_var__Complex_unsigned_long_int);
}
#endif
#if defined HUGE_VAL_F16
static void
test_pow_83 (void)
{
  extern typeof (pow (vol_var___CFLOAT16, vol_var_long_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var___CFLOAT16, vol_var_long_long_int);
}
#endif
#if defined HUGE_VAL_F16
static void
test_pow_84 (void)
{
  extern typeof (pow (vol_var___CFLOAT16, vol_var__Complex_long_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var___CFLOAT16, vol_var__Complex_long_long_int);
}
#endif
#if defined HUGE_VAL_F16
static void
test_pow_85 (void)
{
  extern typeof (pow (vol_var___CFLOAT16, vol_var_unsigned_long_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var___CFLOAT16, vol_var_unsigned_long_long_int);
}
#endif
#if defined HUGE_VAL_F16
static void
test_pow_86 (void)
{
  extern typeof (pow (vol_var___CFLOAT16, vol_var__Complex_unsigned_long_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var___CFLOAT16, vol_var__Complex_unsigned_long_long_int);
}
#endif
#if defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_pow_87 (void)
{
  extern typeof (pow (vol_var___CFLOAT16, vol_var___int128)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var___CFLOAT16, vol_var___int128);
}
#endif
#if defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_pow_88 (void)
{
  extern typeof (pow (vol_var___CFLOAT16, vol_var__Complex___int128)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var___CFLOAT16, vol_var__Complex___int128);
}
#endif
#if defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_pow_89 (void)
{
  extern typeof (pow (vol_var___CFLOAT16, vol_var_unsigned___int128)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var___CFLOAT16, vol_var_unsigned___int128);
}
#endif
#if defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_pow_90 (void)
{
  extern typeof (pow (vol_var___CFLOAT16, vol_var__Complex_unsigned___int128)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var___CFLOAT16, vol_var__Complex_unsigned___int128);
}
#endif
#if defined HUGE_VAL_F16
static void
test_pow_91 (void)
{
  extern typeof (pow (vol_var___CFLOAT16, vol_var_enum_e)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var___CFLOAT16, vol_var_enum_e);
}
#endif
#if defined HUGE_VAL_F16
static void
test_pow_92 (void)
{
  extern typeof (pow (vol_var___CFLOAT16, vol_var__Bool)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var___CFLOAT16, vol_var__Bool);
}
#endif
#if defined HUGE_VAL_F16
static void
test_pow_93 (void)
{
  extern typeof (pow (vol_var___CFLOAT16, vol_var_bit_field)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var___CFLOAT16, vol_var_bit_field);
}
#endif
#if defined HUGE_VAL_F16
static void
test_pow_94 (void)
{
  extern typeof (pow (vol_var_float, vol_var__Float16)) var_float __attribute__ ((unused));
  vol_var_float = pow (vol_var_float, vol_var__Float16);
}
#endif
#if defined HUGE_VAL_F16
static void
test_pow_95 (void)
{
  extern typeof (pow (vol_var_float, vol_var___CFLOAT16)) var__Complex_float __attribute__ ((unused));
  vol_var__Complex_float = pow (vol_var_float, vol_var___CFLOAT16);
}
#endif
static void
test_pow_96 (void)
{
  extern typeof (pow (vol_var_float, vol_var_float)) var_float __attribute__ ((unused));
  vol_var_float = pow (vol_var_float, vol_var_float);
}
static void
test_pow_97 (void)
{
  extern typeof (pow (vol_var_float, vol_var__Complex_float)) var__Complex_float __attribute__ ((unused));
  vol_var__Complex_float = pow (vol_var_float, vol_var__Complex_float);
}
#if defined HUGE_VAL_F32
static void
test_pow_98 (void)
{
  extern typeof (pow (vol_var_float, vol_var__Float32)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = pow (vol_var_float, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32
static void
test_pow_99 (void)
{
  extern typeof (pow (vol_var_float, vol_var___CFLOAT32)) var___CFLOAT32 __attribute__ ((unused));
  vol_var___CFLOAT32 = pow (vol_var_float, vol_var___CFLOAT32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_pow_100 (void)
{
  extern typeof (pow (vol_var_float, vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = pow (vol_var_float, vol_var__Float32x);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_pow_101 (void)
{
  extern typeof (pow (vol_var_float, vol_var___CFLOAT32X)) var___CFLOAT32X __attribute__ ((unused));
  vol_var___CFLOAT32X = pow (vol_var_float, vol_var___CFLOAT32X);
}
#endif
static void
test_pow_102 (void)
{
  extern typeof (pow (vol_var_float, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_float, vol_var_double);
}
static void
test_pow_103 (void)
{
  extern typeof (pow (vol_var_float, vol_var__Complex_double)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_float, vol_var__Complex_double);
}
static void
test_pow_104 (void)
{
  extern typeof (pow (vol_var_float, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = pow (vol_var_float, vol_var_long_double);
}
static void
test_pow_105 (void)
{
  extern typeof (pow (vol_var_float, vol_var__Complex_long_double)) var__Complex_long_double __attribute__ ((unused));
  vol_var__Complex_long_double = pow (vol_var_float, vol_var__Complex_long_double);
}
#if defined HUGE_VAL_F64
static void
test_pow_106 (void)
{
  extern typeof (pow (vol_var_float, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = pow (vol_var_float, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64
static void
test_pow_107 (void)
{
  extern typeof (pow (vol_var_float, vol_var___CFLOAT64)) var___CFLOAT64 __attribute__ ((unused));
  vol_var___CFLOAT64 = pow (vol_var_float, vol_var___CFLOAT64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_pow_108 (void)
{
  extern typeof (pow (vol_var_float, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = pow (vol_var_float, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_pow_109 (void)
{
  extern typeof (pow (vol_var_float, vol_var___CFLOAT64X)) var___CFLOAT64X __attribute__ ((unused));
  vol_var___CFLOAT64X = pow (vol_var_float, vol_var___CFLOAT64X);
}
#endif
#if defined HUGE_VAL_F128
static void
test_pow_110 (void)
{
  extern typeof (pow (vol_var_float, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = pow (vol_var_float, vol_var__Float128);
}
#endif
#if defined HUGE_VAL_F128
static void
test_pow_111 (void)
{
  extern typeof (pow (vol_var_float, vol_var___CFLOAT128)) var___CFLOAT128 __attribute__ ((unused));
  vol_var___CFLOAT128 = pow (vol_var_float, vol_var___CFLOAT128);
}
#endif
static void
test_pow_112 (void)
{
  extern typeof (pow (vol_var_float, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_float, vol_var_char);
}
static void
test_pow_113 (void)
{
  extern typeof (pow (vol_var_float, vol_var__Complex_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_float, vol_var__Complex_char);
}
static void
test_pow_114 (void)
{
  extern typeof (pow (vol_var_float, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_float, vol_var_signed_char);
}
static void
test_pow_115 (void)
{
  extern typeof (pow (vol_var_float, vol_var__Complex_signed_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_float, vol_var__Complex_signed_char);
}
static void
test_pow_116 (void)
{
  extern typeof (pow (vol_var_float, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_float, vol_var_unsigned_char);
}
static void
test_pow_117 (void)
{
  extern typeof (pow (vol_var_float, vol_var__Complex_unsigned_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_float, vol_var__Complex_unsigned_char);
}
static void
test_pow_118 (void)
{
  extern typeof (pow (vol_var_float, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_float, vol_var_short_int);
}
static void
test_pow_119 (void)
{
  extern typeof (pow (vol_var_float, vol_var__Complex_short_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_float, vol_var__Complex_short_int);
}
static void
test_pow_120 (void)
{
  extern typeof (pow (vol_var_float, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_float, vol_var_unsigned_short_int);
}
static void
test_pow_121 (void)
{
  extern typeof (pow (vol_var_float, vol_var__Complex_unsigned_short_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_float, vol_var__Complex_unsigned_short_int);
}
static void
test_pow_122 (void)
{
  extern typeof (pow (vol_var_float, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_float, vol_var_int);
}
static void
test_pow_123 (void)
{
  extern typeof (pow (vol_var_float, vol_var__Complex_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_float, vol_var__Complex_int);
}
static void
test_pow_124 (void)
{
  extern typeof (pow (vol_var_float, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_float, vol_var_unsigned_int);
}
static void
test_pow_125 (void)
{
  extern typeof (pow (vol_var_float, vol_var__Complex_unsigned_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_float, vol_var__Complex_unsigned_int);
}
static void
test_pow_126 (void)
{
  extern typeof (pow (vol_var_float, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_float, vol_var_long_int);
}
static void
test_pow_127 (void)
{
  extern typeof (pow (vol_var_float, vol_var__Complex_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_float, vol_var__Complex_long_int);
}
static void
test_pow_128 (void)
{
  extern typeof (pow (vol_var_float, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_float, vol_var_unsigned_long_int);
}
static void
test_pow_129 (void)
{
  extern typeof (pow (vol_var_float, vol_var__Complex_unsigned_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_float, vol_var__Complex_unsigned_long_int);
}
static void
test_pow_130 (void)
{
  extern typeof (pow (vol_var_float, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_float, vol_var_long_long_int);
}
static void
test_pow_131 (void)
{
  extern typeof (pow (vol_var_float, vol_var__Complex_long_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_float, vol_var__Complex_long_long_int);
}
static void
test_pow_132 (void)
{
  extern typeof (pow (vol_var_float, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_float, vol_var_unsigned_long_long_int);
}
static void
test_pow_133 (void)
{
  extern typeof (pow (vol_var_float, vol_var__Complex_unsigned_long_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_float, vol_var__Complex_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_pow_134 (void)
{
  extern typeof (pow (vol_var_float, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_float, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_135 (void)
{
  extern typeof (pow (vol_var_float, vol_var__Complex___int128)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_float, vol_var__Complex___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_136 (void)
{
  extern typeof (pow (vol_var_float, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_float, vol_var_unsigned___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_137 (void)
{
  extern typeof (pow (vol_var_float, vol_var__Complex_unsigned___int128)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_float, vol_var__Complex_unsigned___int128);
}
#endif
static void
test_pow_138 (void)
{
  extern typeof (pow (vol_var_float, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_float, vol_var_enum_e);
}
static void
test_pow_139 (void)
{
  extern typeof (pow (vol_var_float, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_float, vol_var__Bool);
}
static void
test_pow_140 (void)
{
  extern typeof (pow (vol_var_float, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_float, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_pow_141 (void)
{
  extern typeof (pow (vol_var__Complex_float, vol_var__Float16)) var__Complex_float __attribute__ ((unused));
  vol_var__Complex_float = pow (vol_var__Complex_float, vol_var__Float16);
}
#endif
#if defined HUGE_VAL_F16
static void
test_pow_142 (void)
{
  extern typeof (pow (vol_var__Complex_float, vol_var___CFLOAT16)) var__Complex_float __attribute__ ((unused));
  vol_var__Complex_float = pow (vol_var__Complex_float, vol_var___CFLOAT16);
}
#endif
static void
test_pow_143 (void)
{
  extern typeof (pow (vol_var__Complex_float, vol_var_float)) var__Complex_float __attribute__ ((unused));
  vol_var__Complex_float = pow (vol_var__Complex_float, vol_var_float);
}
static void
test_pow_144 (void)
{
  extern typeof (pow (vol_var__Complex_float, vol_var__Complex_float)) var__Complex_float __attribute__ ((unused));
  vol_var__Complex_float = pow (vol_var__Complex_float, vol_var__Complex_float);
}
#if defined HUGE_VAL_F32
static void
test_pow_145 (void)
{
  extern typeof (pow (vol_var__Complex_float, vol_var__Float32)) var___CFLOAT32 __attribute__ ((unused));
  vol_var___CFLOAT32 = pow (vol_var__Complex_float, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32
static void
test_pow_146 (void)
{
  extern typeof (pow (vol_var__Complex_float, vol_var___CFLOAT32)) var___CFLOAT32 __attribute__ ((unused));
  vol_var___CFLOAT32 = pow (vol_var__Complex_float, vol_var___CFLOAT32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_pow_147 (void)
{
  extern typeof (pow (vol_var__Complex_float, vol_var__Float32x)) var___CFLOAT32X __attribute__ ((unused));
  vol_var___CFLOAT32X = pow (vol_var__Complex_float, vol_var__Float32x);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_pow_148 (void)
{
  extern typeof (pow (vol_var__Complex_float, vol_var___CFLOAT32X)) var___CFLOAT32X __attribute__ ((unused));
  vol_var___CFLOAT32X = pow (vol_var__Complex_float, vol_var___CFLOAT32X);
}
#endif
static void
test_pow_149 (void)
{
  extern typeof (pow (vol_var__Complex_float, vol_var_double)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_float, vol_var_double);
}
static void
test_pow_150 (void)
{
  extern typeof (pow (vol_var__Complex_float, vol_var__Complex_double)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_float, vol_var__Complex_double);
}
static void
test_pow_151 (void)
{
  extern typeof (pow (vol_var__Complex_float, vol_var_long_double)) var__Complex_long_double __attribute__ ((unused));
  vol_var__Complex_long_double = pow (vol_var__Complex_float, vol_var_long_double);
}
static void
test_pow_152 (void)
{
  extern typeof (pow (vol_var__Complex_float, vol_var__Complex_long_double)) var__Complex_long_double __attribute__ ((unused));
  vol_var__Complex_long_double = pow (vol_var__Complex_float, vol_var__Complex_long_double);
}
#if defined HUGE_VAL_F64
static void
test_pow_153 (void)
{
  extern typeof (pow (vol_var__Complex_float, vol_var__Float64)) var___CFLOAT64 __attribute__ ((unused));
  vol_var___CFLOAT64 = pow (vol_var__Complex_float, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64
static void
test_pow_154 (void)
{
  extern typeof (pow (vol_var__Complex_float, vol_var___CFLOAT64)) var___CFLOAT64 __attribute__ ((unused));
  vol_var___CFLOAT64 = pow (vol_var__Complex_float, vol_var___CFLOAT64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_pow_155 (void)
{
  extern typeof (pow (vol_var__Complex_float, vol_var__Float64x)) var___CFLOAT64X __attribute__ ((unused));
  vol_var___CFLOAT64X = pow (vol_var__Complex_float, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_pow_156 (void)
{
  extern typeof (pow (vol_var__Complex_float, vol_var___CFLOAT64X)) var___CFLOAT64X __attribute__ ((unused));
  vol_var___CFLOAT64X = pow (vol_var__Complex_float, vol_var___CFLOAT64X);
}
#endif
#if defined HUGE_VAL_F128
static void
test_pow_157 (void)
{
  extern typeof (pow (vol_var__Complex_float, vol_var__Float128)) var___CFLOAT128 __attribute__ ((unused));
  vol_var___CFLOAT128 = pow (vol_var__Complex_float, vol_var__Float128);
}
#endif
#if defined HUGE_VAL_F128
static void
test_pow_158 (void)
{
  extern typeof (pow (vol_var__Complex_float, vol_var___CFLOAT128)) var___CFLOAT128 __attribute__ ((unused));
  vol_var___CFLOAT128 = pow (vol_var__Complex_float, vol_var___CFLOAT128);
}
#endif
static void
test_pow_159 (void)
{
  extern typeof (pow (vol_var__Complex_float, vol_var_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_float, vol_var_char);
}
static void
test_pow_160 (void)
{
  extern typeof (pow (vol_var__Complex_float, vol_var__Complex_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_float, vol_var__Complex_char);
}
static void
test_pow_161 (void)
{
  extern typeof (pow (vol_var__Complex_float, vol_var_signed_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_float, vol_var_signed_char);
}
static void
test_pow_162 (void)
{
  extern typeof (pow (vol_var__Complex_float, vol_var__Complex_signed_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_float, vol_var__Complex_signed_char);
}
static void
test_pow_163 (void)
{
  extern typeof (pow (vol_var__Complex_float, vol_var_unsigned_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_float, vol_var_unsigned_char);
}
static void
test_pow_164 (void)
{
  extern typeof (pow (vol_var__Complex_float, vol_var__Complex_unsigned_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_float, vol_var__Complex_unsigned_char);
}
static void
test_pow_165 (void)
{
  extern typeof (pow (vol_var__Complex_float, vol_var_short_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_float, vol_var_short_int);
}
static void
test_pow_166 (void)
{
  extern typeof (pow (vol_var__Complex_float, vol_var__Complex_short_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_float, vol_var__Complex_short_int);
}
static void
test_pow_167 (void)
{
  extern typeof (pow (vol_var__Complex_float, vol_var_unsigned_short_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_float, vol_var_unsigned_short_int);
}
static void
test_pow_168 (void)
{
  extern typeof (pow (vol_var__Complex_float, vol_var__Complex_unsigned_short_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_float, vol_var__Complex_unsigned_short_int);
}
static void
test_pow_169 (void)
{
  extern typeof (pow (vol_var__Complex_float, vol_var_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_float, vol_var_int);
}
static void
test_pow_170 (void)
{
  extern typeof (pow (vol_var__Complex_float, vol_var__Complex_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_float, vol_var__Complex_int);
}
static void
test_pow_171 (void)
{
  extern typeof (pow (vol_var__Complex_float, vol_var_unsigned_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_float, vol_var_unsigned_int);
}
static void
test_pow_172 (void)
{
  extern typeof (pow (vol_var__Complex_float, vol_var__Complex_unsigned_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_float, vol_var__Complex_unsigned_int);
}
static void
test_pow_173 (void)
{
  extern typeof (pow (vol_var__Complex_float, vol_var_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_float, vol_var_long_int);
}
static void
test_pow_174 (void)
{
  extern typeof (pow (vol_var__Complex_float, vol_var__Complex_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_float, vol_var__Complex_long_int);
}
static void
test_pow_175 (void)
{
  extern typeof (pow (vol_var__Complex_float, vol_var_unsigned_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_float, vol_var_unsigned_long_int);
}
static void
test_pow_176 (void)
{
  extern typeof (pow (vol_var__Complex_float, vol_var__Complex_unsigned_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_float, vol_var__Complex_unsigned_long_int);
}
static void
test_pow_177 (void)
{
  extern typeof (pow (vol_var__Complex_float, vol_var_long_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_float, vol_var_long_long_int);
}
static void
test_pow_178 (void)
{
  extern typeof (pow (vol_var__Complex_float, vol_var__Complex_long_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_float, vol_var__Complex_long_long_int);
}
static void
test_pow_179 (void)
{
  extern typeof (pow (vol_var__Complex_float, vol_var_unsigned_long_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_float, vol_var_unsigned_long_long_int);
}
static void
test_pow_180 (void)
{
  extern typeof (pow (vol_var__Complex_float, vol_var__Complex_unsigned_long_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_float, vol_var__Complex_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_pow_181 (void)
{
  extern typeof (pow (vol_var__Complex_float, vol_var___int128)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_float, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_182 (void)
{
  extern typeof (pow (vol_var__Complex_float, vol_var__Complex___int128)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_float, vol_var__Complex___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_183 (void)
{
  extern typeof (pow (vol_var__Complex_float, vol_var_unsigned___int128)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_float, vol_var_unsigned___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_184 (void)
{
  extern typeof (pow (vol_var__Complex_float, vol_var__Complex_unsigned___int128)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_float, vol_var__Complex_unsigned___int128);
}
#endif
static void
test_pow_185 (void)
{
  extern typeof (pow (vol_var__Complex_float, vol_var_enum_e)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_float, vol_var_enum_e);
}
static void
test_pow_186 (void)
{
  extern typeof (pow (vol_var__Complex_float, vol_var__Bool)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_float, vol_var__Bool);
}
static void
test_pow_187 (void)
{
  extern typeof (pow (vol_var__Complex_float, vol_var_bit_field)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_float, vol_var_bit_field);
}
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F32
static void
test_pow_188 (void)
{
  extern typeof (pow (vol_var__Float32, vol_var__Float16)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = pow (vol_var__Float32, vol_var__Float16);
}
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F32
static void
test_pow_189 (void)
{
  extern typeof (pow (vol_var__Float32, vol_var___CFLOAT16)) var___CFLOAT32 __attribute__ ((unused));
  vol_var___CFLOAT32 = pow (vol_var__Float32, vol_var___CFLOAT16);
}
#endif
#if defined HUGE_VAL_F32
static void
test_pow_190 (void)
{
  extern typeof (pow (vol_var__Float32, vol_var_float)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = pow (vol_var__Float32, vol_var_float);
}
#endif
#if defined HUGE_VAL_F32
static void
test_pow_191 (void)
{
  extern typeof (pow (vol_var__Float32, vol_var__Complex_float)) var___CFLOAT32 __attribute__ ((unused));
  vol_var___CFLOAT32 = pow (vol_var__Float32, vol_var__Complex_float);
}
#endif
#if defined HUGE_VAL_F32
static void
test_pow_192 (void)
{
  extern typeof (pow (vol_var__Float32, vol_var__Float32)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = pow (vol_var__Float32, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32
static void
test_pow_193 (void)
{
  extern typeof (pow (vol_var__Float32, vol_var___CFLOAT32)) var___CFLOAT32 __attribute__ ((unused));
  vol_var___CFLOAT32 = pow (vol_var__Float32, vol_var___CFLOAT32);
}
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
static void
test_pow_194 (void)
{
  extern typeof (pow (vol_var__Float32, vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = pow (vol_var__Float32, vol_var__Float32x);
}
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
static void
test_pow_195 (void)
{
  extern typeof (pow (vol_var__Float32, vol_var___CFLOAT32X)) var___CFLOAT32X __attribute__ ((unused));
  vol_var___CFLOAT32X = pow (vol_var__Float32, vol_var___CFLOAT32X);
}
#endif
#if defined HUGE_VAL_F32
static void
test_pow_196 (void)
{
  extern typeof (pow (vol_var__Float32, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var__Float32, vol_var_double);
}
#endif
#if defined HUGE_VAL_F32
static void
test_pow_197 (void)
{
  extern typeof (pow (vol_var__Float32, vol_var__Complex_double)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Float32, vol_var__Complex_double);
}
#endif
#if defined HUGE_VAL_F32
static void
test_pow_198 (void)
{
  extern typeof (pow (vol_var__Float32, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = pow (vol_var__Float32, vol_var_long_double);
}
#endif
#if defined HUGE_VAL_F32
static void
test_pow_199 (void)
{
  extern typeof (pow (vol_var__Float32, vol_var__Complex_long_double)) var__Complex_long_double __attribute__ ((unused));
  vol_var__Complex_long_double = pow (vol_var__Float32, vol_var__Complex_long_double);
}
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F64
static void
test_pow_200 (void)
{
  extern typeof (pow (vol_var__Float32, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = pow (vol_var__Float32, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F64
static void
test_pow_201 (void)
{
  extern typeof (pow (vol_var__Float32, vol_var___CFLOAT64)) var___CFLOAT64 __attribute__ ((unused));
  vol_var___CFLOAT64 = pow (vol_var__Float32, vol_var___CFLOAT64);
}
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
static void
test_pow_202 (void)
{
  extern typeof (pow (vol_var__Float32, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = pow (vol_var__Float32, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
static void
test_pow_203 (void)
{
  extern typeof (pow (vol_var__Float32, vol_var___CFLOAT64X)) var___CFLOAT64X __attribute__ ((unused));
  vol_var___CFLOAT64X = pow (vol_var__Float32, vol_var___CFLOAT64X);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F32
static void
test_pow_204 (void)
{
  extern typeof (pow (vol_var__Float32, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = pow (vol_var__Float32, vol_var__Float128);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F32
static void
test_pow_205 (void)
{
  extern typeof (pow (vol_var__Float32, vol_var___CFLOAT128)) var___CFLOAT128 __attribute__ ((unused));
  vol_var___CFLOAT128 = pow (vol_var__Float32, vol_var___CFLOAT128);
}
#endif
#if defined HUGE_VAL_F32
static void
test_pow_206 (void)
{
  extern typeof (pow (vol_var__Float32, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var__Float32, vol_var_char);
}
#endif
#if defined HUGE_VAL_F32
static void
test_pow_207 (void)
{
  extern typeof (pow (vol_var__Float32, vol_var__Complex_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Float32, vol_var__Complex_char);
}
#endif
#if defined HUGE_VAL_F32
static void
test_pow_208 (void)
{
  extern typeof (pow (vol_var__Float32, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var__Float32, vol_var_signed_char);
}
#endif
#if defined HUGE_VAL_F32
static void
test_pow_209 (void)
{
  extern typeof (pow (vol_var__Float32, vol_var__Complex_signed_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Float32, vol_var__Complex_signed_char);
}
#endif
#if defined HUGE_VAL_F32
static void
test_pow_210 (void)
{
  extern typeof (pow (vol_var__Float32, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var__Float32, vol_var_unsigned_char);
}
#endif
#if defined HUGE_VAL_F32
static void
test_pow_211 (void)
{
  extern typeof (pow (vol_var__Float32, vol_var__Complex_unsigned_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Float32, vol_var__Complex_unsigned_char);
}
#endif
#if defined HUGE_VAL_F32
static void
test_pow_212 (void)
{
  extern typeof (pow (vol_var__Float32, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var__Float32, vol_var_short_int);
}
#endif
#if defined HUGE_VAL_F32
static void
test_pow_213 (void)
{
  extern typeof (pow (vol_var__Float32, vol_var__Complex_short_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Float32, vol_var__Complex_short_int);
}
#endif
#if defined HUGE_VAL_F32
static void
test_pow_214 (void)
{
  extern typeof (pow (vol_var__Float32, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var__Float32, vol_var_unsigned_short_int);
}
#endif
#if defined HUGE_VAL_F32
static void
test_pow_215 (void)
{
  extern typeof (pow (vol_var__Float32, vol_var__Complex_unsigned_short_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Float32, vol_var__Complex_unsigned_short_int);
}
#endif
#if defined HUGE_VAL_F32
static void
test_pow_216 (void)
{
  extern typeof (pow (vol_var__Float32, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var__Float32, vol_var_int);
}
#endif
#if defined HUGE_VAL_F32
static void
test_pow_217 (void)
{
  extern typeof (pow (vol_var__Float32, vol_var__Complex_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Float32, vol_var__Complex_int);
}
#endif
#if defined HUGE_VAL_F32
static void
test_pow_218 (void)
{
  extern typeof (pow (vol_var__Float32, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var__Float32, vol_var_unsigned_int);
}
#endif
#if defined HUGE_VAL_F32
static void
test_pow_219 (void)
{
  extern typeof (pow (vol_var__Float32, vol_var__Complex_unsigned_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Float32, vol_var__Complex_unsigned_int);
}
#endif
#if defined HUGE_VAL_F32
static void
test_pow_220 (void)
{
  extern typeof (pow (vol_var__Float32, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var__Float32, vol_var_long_int);
}
#endif
#if defined HUGE_VAL_F32
static void
test_pow_221 (void)
{
  extern typeof (pow (vol_var__Float32, vol_var__Complex_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Float32, vol_var__Complex_long_int);
}
#endif
#if defined HUGE_VAL_F32
static void
test_pow_222 (void)
{
  extern typeof (pow (vol_var__Float32, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var__Float32, vol_var_unsigned_long_int);
}
#endif
#if defined HUGE_VAL_F32
static void
test_pow_223 (void)
{
  extern typeof (pow (vol_var__Float32, vol_var__Complex_unsigned_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Float32, vol_var__Complex_unsigned_long_int);
}
#endif
#if defined HUGE_VAL_F32
static void
test_pow_224 (void)
{
  extern typeof (pow (vol_var__Float32, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var__Float32, vol_var_long_long_int);
}
#endif
#if defined HUGE_VAL_F32
static void
test_pow_225 (void)
{
  extern typeof (pow (vol_var__Float32, vol_var__Complex_long_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Float32, vol_var__Complex_long_long_int);
}
#endif
#if defined HUGE_VAL_F32
static void
test_pow_226 (void)
{
  extern typeof (pow (vol_var__Float32, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var__Float32, vol_var_unsigned_long_long_int);
}
#endif
#if defined HUGE_VAL_F32
static void
test_pow_227 (void)
{
  extern typeof (pow (vol_var__Float32, vol_var__Complex_unsigned_long_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Float32, vol_var__Complex_unsigned_long_long_int);
}
#endif
#if defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_pow_228 (void)
{
  extern typeof (pow (vol_var__Float32, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var__Float32, vol_var___int128);
}
#endif
#if defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_pow_229 (void)
{
  extern typeof (pow (vol_var__Float32, vol_var__Complex___int128)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Float32, vol_var__Complex___int128);
}
#endif
#if defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_pow_230 (void)
{
  extern typeof (pow (vol_var__Float32, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var__Float32, vol_var_unsigned___int128);
}
#endif
#if defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_pow_231 (void)
{
  extern typeof (pow (vol_var__Float32, vol_var__Complex_unsigned___int128)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Float32, vol_var__Complex_unsigned___int128);
}
#endif
#if defined HUGE_VAL_F32
static void
test_pow_232 (void)
{
  extern typeof (pow (vol_var__Float32, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var__Float32, vol_var_enum_e);
}
#endif
#if defined HUGE_VAL_F32
static void
test_pow_233 (void)
{
  extern typeof (pow (vol_var__Float32, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var__Float32, vol_var__Bool);
}
#endif
#if defined HUGE_VAL_F32
static void
test_pow_234 (void)
{
  extern typeof (pow (vol_var__Float32, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var__Float32, vol_var_bit_field);
}
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F32
static void
test_pow_235 (void)
{
  extern typeof (pow (vol_var___CFLOAT32, vol_var__Float16)) var___CFLOAT32 __attribute__ ((unused));
  vol_var___CFLOAT32 = pow (vol_var___CFLOAT32, vol_var__Float16);
}
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F32
static void
test_pow_236 (void)
{
  extern typeof (pow (vol_var___CFLOAT32, vol_var___CFLOAT16)) var___CFLOAT32 __attribute__ ((unused));
  vol_var___CFLOAT32 = pow (vol_var___CFLOAT32, vol_var___CFLOAT16);
}
#endif
#if defined HUGE_VAL_F32
static void
test_pow_237 (void)
{
  extern typeof (pow (vol_var___CFLOAT32, vol_var_float)) var___CFLOAT32 __attribute__ ((unused));
  vol_var___CFLOAT32 = pow (vol_var___CFLOAT32, vol_var_float);
}
#endif
#if defined HUGE_VAL_F32
static void
test_pow_238 (void)
{
  extern typeof (pow (vol_var___CFLOAT32, vol_var__Complex_float)) var___CFLOAT32 __attribute__ ((unused));
  vol_var___CFLOAT32 = pow (vol_var___CFLOAT32, vol_var__Complex_float);
}
#endif
#if defined HUGE_VAL_F32
static void
test_pow_239 (void)
{
  extern typeof (pow (vol_var___CFLOAT32, vol_var__Float32)) var___CFLOAT32 __attribute__ ((unused));
  vol_var___CFLOAT32 = pow (vol_var___CFLOAT32, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32
static void
test_pow_240 (void)
{
  extern typeof (pow (vol_var___CFLOAT32, vol_var___CFLOAT32)) var___CFLOAT32 __attribute__ ((unused));
  vol_var___CFLOAT32 = pow (vol_var___CFLOAT32, vol_var___CFLOAT32);
}
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
static void
test_pow_241 (void)
{
  extern typeof (pow (vol_var___CFLOAT32, vol_var__Float32x)) var___CFLOAT32X __attribute__ ((unused));
  vol_var___CFLOAT32X = pow (vol_var___CFLOAT32, vol_var__Float32x);
}
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
static void
test_pow_242 (void)
{
  extern typeof (pow (vol_var___CFLOAT32, vol_var___CFLOAT32X)) var___CFLOAT32X __attribute__ ((unused));
  vol_var___CFLOAT32X = pow (vol_var___CFLOAT32, vol_var___CFLOAT32X);
}
#endif
#if defined HUGE_VAL_F32
static void
test_pow_243 (void)
{
  extern typeof (pow (vol_var___CFLOAT32, vol_var_double)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var___CFLOAT32, vol_var_double);
}
#endif
#if defined HUGE_VAL_F32
static void
test_pow_244 (void)
{
  extern typeof (pow (vol_var___CFLOAT32, vol_var__Complex_double)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var___CFLOAT32, vol_var__Complex_double);
}
#endif
#if defined HUGE_VAL_F32
static void
test_pow_245 (void)
{
  extern typeof (pow (vol_var___CFLOAT32, vol_var_long_double)) var__Complex_long_double __attribute__ ((unused));
  vol_var__Complex_long_double = pow (vol_var___CFLOAT32, vol_var_long_double);
}
#endif
#if defined HUGE_VAL_F32
static void
test_pow_246 (void)
{
  extern typeof (pow (vol_var___CFLOAT32, vol_var__Complex_long_double)) var__Complex_long_double __attribute__ ((unused));
  vol_var__Complex_long_double = pow (vol_var___CFLOAT32, vol_var__Complex_long_double);
}
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F64
static void
test_pow_247 (void)
{
  extern typeof (pow (vol_var___CFLOAT32, vol_var__Float64)) var___CFLOAT64 __attribute__ ((unused));
  vol_var___CFLOAT64 = pow (vol_var___CFLOAT32, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F64
static void
test_pow_248 (void)
{
  extern typeof (pow (vol_var___CFLOAT32, vol_var___CFLOAT64)) var___CFLOAT64 __attribute__ ((unused));
  vol_var___CFLOAT64 = pow (vol_var___CFLOAT32, vol_var___CFLOAT64);
}
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
static void
test_pow_249 (void)
{
  extern typeof (pow (vol_var___CFLOAT32, vol_var__Float64x)) var___CFLOAT64X __attribute__ ((unused));
  vol_var___CFLOAT64X = pow (vol_var___CFLOAT32, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
static void
test_pow_250 (void)
{
  extern typeof (pow (vol_var___CFLOAT32, vol_var___CFLOAT64X)) var___CFLOAT64X __attribute__ ((unused));
  vol_var___CFLOAT64X = pow (vol_var___CFLOAT32, vol_var___CFLOAT64X);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F32
static void
test_pow_251 (void)
{
  extern typeof (pow (vol_var___CFLOAT32, vol_var__Float128)) var___CFLOAT128 __attribute__ ((unused));
  vol_var___CFLOAT128 = pow (vol_var___CFLOAT32, vol_var__Float128);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F32
static void
test_pow_252 (void)
{
  extern typeof (pow (vol_var___CFLOAT32, vol_var___CFLOAT128)) var___CFLOAT128 __attribute__ ((unused));
  vol_var___CFLOAT128 = pow (vol_var___CFLOAT32, vol_var___CFLOAT128);
}
#endif
#if defined HUGE_VAL_F32
static void
test_pow_253 (void)
{
  extern typeof (pow (vol_var___CFLOAT32, vol_var_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var___CFLOAT32, vol_var_char);
}
#endif
#if defined HUGE_VAL_F32
static void
test_pow_254 (void)
{
  extern typeof (pow (vol_var___CFLOAT32, vol_var__Complex_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var___CFLOAT32, vol_var__Complex_char);
}
#endif
#if defined HUGE_VAL_F32
static void
test_pow_255 (void)
{
  extern typeof (pow (vol_var___CFLOAT32, vol_var_signed_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var___CFLOAT32, vol_var_signed_char);
}
#endif
#if defined HUGE_VAL_F32
static void
test_pow_256 (void)
{
  extern typeof (pow (vol_var___CFLOAT32, vol_var__Complex_signed_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var___CFLOAT32, vol_var__Complex_signed_char);
}
#endif
#if defined HUGE_VAL_F32
static void
test_pow_257 (void)
{
  extern typeof (pow (vol_var___CFLOAT32, vol_var_unsigned_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var___CFLOAT32, vol_var_unsigned_char);
}
#endif
#if defined HUGE_VAL_F32
static void
test_pow_258 (void)
{
  extern typeof (pow (vol_var___CFLOAT32, vol_var__Complex_unsigned_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var___CFLOAT32, vol_var__Complex_unsigned_char);
}
#endif
#if defined HUGE_VAL_F32
static void
test_pow_259 (void)
{
  extern typeof (pow (vol_var___CFLOAT32, vol_var_short_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var___CFLOAT32, vol_var_short_int);
}
#endif
#if defined HUGE_VAL_F32
static void
test_pow_260 (void)
{
  extern typeof (pow (vol_var___CFLOAT32, vol_var__Complex_short_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var___CFLOAT32, vol_var__Complex_short_int);
}
#endif
#if defined HUGE_VAL_F32
static void
test_pow_261 (void)
{
  extern typeof (pow (vol_var___CFLOAT32, vol_var_unsigned_short_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var___CFLOAT32, vol_var_unsigned_short_int);
}
#endif
#if defined HUGE_VAL_F32
static void
test_pow_262 (void)
{
  extern typeof (pow (vol_var___CFLOAT32, vol_var__Complex_unsigned_short_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var___CFLOAT32, vol_var__Complex_unsigned_short_int);
}
#endif
#if defined HUGE_VAL_F32
static void
test_pow_263 (void)
{
  extern typeof (pow (vol_var___CFLOAT32, vol_var_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var___CFLOAT32, vol_var_int);
}
#endif
#if defined HUGE_VAL_F32
static void
test_pow_264 (void)
{
  extern typeof (pow (vol_var___CFLOAT32, vol_var__Complex_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var___CFLOAT32, vol_var__Complex_int);
}
#endif
#if defined HUGE_VAL_F32
static void
test_pow_265 (void)
{
  extern typeof (pow (vol_var___CFLOAT32, vol_var_unsigned_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var___CFLOAT32, vol_var_unsigned_int);
}
#endif
#if defined HUGE_VAL_F32
static void
test_pow_266 (void)
{
  extern typeof (pow (vol_var___CFLOAT32, vol_var__Complex_unsigned_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var___CFLOAT32, vol_var__Complex_unsigned_int);
}
#endif
#if defined HUGE_VAL_F32
static void
test_pow_267 (void)
{
  extern typeof (pow (vol_var___CFLOAT32, vol_var_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var___CFLOAT32, vol_var_long_int);
}
#endif
#if defined HUGE_VAL_F32
static void
test_pow_268 (void)
{
  extern typeof (pow (vol_var___CFLOAT32, vol_var__Complex_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var___CFLOAT32, vol_var__Complex_long_int);
}
#endif
#if defined HUGE_VAL_F32
static void
test_pow_269 (void)
{
  extern typeof (pow (vol_var___CFLOAT32, vol_var_unsigned_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var___CFLOAT32, vol_var_unsigned_long_int);
}
#endif
#if defined HUGE_VAL_F32
static void
test_pow_270 (void)
{
  extern typeof (pow (vol_var___CFLOAT32, vol_var__Complex_unsigned_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var___CFLOAT32, vol_var__Complex_unsigned_long_int);
}
#endif
#if defined HUGE_VAL_F32
static void
test_pow_271 (void)
{
  extern typeof (pow (vol_var___CFLOAT32, vol_var_long_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var___CFLOAT32, vol_var_long_long_int);
}
#endif
#if defined HUGE_VAL_F32
static void
test_pow_272 (void)
{
  extern typeof (pow (vol_var___CFLOAT32, vol_var__Complex_long_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var___CFLOAT32, vol_var__Complex_long_long_int);
}
#endif
#if defined HUGE_VAL_F32
static void
test_pow_273 (void)
{
  extern typeof (pow (vol_var___CFLOAT32, vol_var_unsigned_long_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var___CFLOAT32, vol_var_unsigned_long_long_int);
}
#endif
#if defined HUGE_VAL_F32
static void
test_pow_274 (void)
{
  extern typeof (pow (vol_var___CFLOAT32, vol_var__Complex_unsigned_long_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var___CFLOAT32, vol_var__Complex_unsigned_long_long_int);
}
#endif
#if defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_pow_275 (void)
{
  extern typeof (pow (vol_var___CFLOAT32, vol_var___int128)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var___CFLOAT32, vol_var___int128);
}
#endif
#if defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_pow_276 (void)
{
  extern typeof (pow (vol_var___CFLOAT32, vol_var__Complex___int128)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var___CFLOAT32, vol_var__Complex___int128);
}
#endif
#if defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_pow_277 (void)
{
  extern typeof (pow (vol_var___CFLOAT32, vol_var_unsigned___int128)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var___CFLOAT32, vol_var_unsigned___int128);
}
#endif
#if defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_pow_278 (void)
{
  extern typeof (pow (vol_var___CFLOAT32, vol_var__Complex_unsigned___int128)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var___CFLOAT32, vol_var__Complex_unsigned___int128);
}
#endif
#if defined HUGE_VAL_F32
static void
test_pow_279 (void)
{
  extern typeof (pow (vol_var___CFLOAT32, vol_var_enum_e)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var___CFLOAT32, vol_var_enum_e);
}
#endif
#if defined HUGE_VAL_F32
static void
test_pow_280 (void)
{
  extern typeof (pow (vol_var___CFLOAT32, vol_var__Bool)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var___CFLOAT32, vol_var__Bool);
}
#endif
#if defined HUGE_VAL_F32
static void
test_pow_281 (void)
{
  extern typeof (pow (vol_var___CFLOAT32, vol_var_bit_field)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var___CFLOAT32, vol_var_bit_field);
}
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
static void
test_pow_282 (void)
{
  extern typeof (pow (vol_var__Float32x, vol_var__Float16)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = pow (vol_var__Float32x, vol_var__Float16);
}
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
static void
test_pow_283 (void)
{
  extern typeof (pow (vol_var__Float32x, vol_var___CFLOAT16)) var___CFLOAT32X __attribute__ ((unused));
  vol_var___CFLOAT32X = pow (vol_var__Float32x, vol_var___CFLOAT16);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_pow_284 (void)
{
  extern typeof (pow (vol_var__Float32x, vol_var_float)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = pow (vol_var__Float32x, vol_var_float);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_pow_285 (void)
{
  extern typeof (pow (vol_var__Float32x, vol_var__Complex_float)) var___CFLOAT32X __attribute__ ((unused));
  vol_var___CFLOAT32X = pow (vol_var__Float32x, vol_var__Complex_float);
}
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
static void
test_pow_286 (void)
{
  extern typeof (pow (vol_var__Float32x, vol_var__Float32)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = pow (vol_var__Float32x, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
static void
test_pow_287 (void)
{
  extern typeof (pow (vol_var__Float32x, vol_var___CFLOAT32)) var___CFLOAT32X __attribute__ ((unused));
  vol_var___CFLOAT32X = pow (vol_var__Float32x, vol_var___CFLOAT32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_pow_288 (void)
{
  extern typeof (pow (vol_var__Float32x, vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = pow (vol_var__Float32x, vol_var__Float32x);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_pow_289 (void)
{
  extern typeof (pow (vol_var__Float32x, vol_var___CFLOAT32X)) var___CFLOAT32X __attribute__ ((unused));
  vol_var___CFLOAT32X = pow (vol_var__Float32x, vol_var___CFLOAT32X);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_pow_290 (void)
{
  extern typeof (pow (vol_var__Float32x, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var__Float32x, vol_var_double);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_pow_291 (void)
{
  extern typeof (pow (vol_var__Float32x, vol_var__Complex_double)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Float32x, vol_var__Complex_double);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_pow_292 (void)
{
  extern typeof (pow (vol_var__Float32x, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = pow (vol_var__Float32x, vol_var_long_double);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_pow_293 (void)
{
  extern typeof (pow (vol_var__Float32x, vol_var__Complex_long_double)) var__Complex_long_double __attribute__ ((unused));
  vol_var__Complex_long_double = pow (vol_var__Float32x, vol_var__Complex_long_double);
}
#endif
#if defined HUGE_VAL_F32X && defined HUGE_VAL_F64
static void
test_pow_294 (void)
{
  extern typeof (pow (vol_var__Float32x, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = pow (vol_var__Float32x, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F32X && defined HUGE_VAL_F64
static void
test_pow_295 (void)
{
  extern typeof (pow (vol_var__Float32x, vol_var___CFLOAT64)) var___CFLOAT64 __attribute__ ((unused));
  vol_var___CFLOAT64 = pow (vol_var__Float32x, vol_var___CFLOAT64);
}
#endif
#if defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
static void
test_pow_296 (void)
{
  extern typeof (pow (vol_var__Float32x, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = pow (vol_var__Float32x, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
static void
test_pow_297 (void)
{
  extern typeof (pow (vol_var__Float32x, vol_var___CFLOAT64X)) var___CFLOAT64X __attribute__ ((unused));
  vol_var___CFLOAT64X = pow (vol_var__Float32x, vol_var___CFLOAT64X);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
static void
test_pow_298 (void)
{
  extern typeof (pow (vol_var__Float32x, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = pow (vol_var__Float32x, vol_var__Float128);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
static void
test_pow_299 (void)
{
  extern typeof (pow (vol_var__Float32x, vol_var___CFLOAT128)) var___CFLOAT128 __attribute__ ((unused));
  vol_var___CFLOAT128 = pow (vol_var__Float32x, vol_var___CFLOAT128);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_pow_300 (void)
{
  extern typeof (pow (vol_var__Float32x, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var__Float32x, vol_var_char);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_pow_301 (void)
{
  extern typeof (pow (vol_var__Float32x, vol_var__Complex_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Float32x, vol_var__Complex_char);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_pow_302 (void)
{
  extern typeof (pow (vol_var__Float32x, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var__Float32x, vol_var_signed_char);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_pow_303 (void)
{
  extern typeof (pow (vol_var__Float32x, vol_var__Complex_signed_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Float32x, vol_var__Complex_signed_char);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_pow_304 (void)
{
  extern typeof (pow (vol_var__Float32x, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var__Float32x, vol_var_unsigned_char);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_pow_305 (void)
{
  extern typeof (pow (vol_var__Float32x, vol_var__Complex_unsigned_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Float32x, vol_var__Complex_unsigned_char);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_pow_306 (void)
{
  extern typeof (pow (vol_var__Float32x, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var__Float32x, vol_var_short_int);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_pow_307 (void)
{
  extern typeof (pow (vol_var__Float32x, vol_var__Complex_short_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Float32x, vol_var__Complex_short_int);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_pow_308 (void)
{
  extern typeof (pow (vol_var__Float32x, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var__Float32x, vol_var_unsigned_short_int);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_pow_309 (void)
{
  extern typeof (pow (vol_var__Float32x, vol_var__Complex_unsigned_short_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Float32x, vol_var__Complex_unsigned_short_int);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_pow_310 (void)
{
  extern typeof (pow (vol_var__Float32x, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var__Float32x, vol_var_int);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_pow_311 (void)
{
  extern typeof (pow (vol_var__Float32x, vol_var__Complex_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Float32x, vol_var__Complex_int);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_pow_312 (void)
{
  extern typeof (pow (vol_var__Float32x, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var__Float32x, vol_var_unsigned_int);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_pow_313 (void)
{
  extern typeof (pow (vol_var__Float32x, vol_var__Complex_unsigned_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Float32x, vol_var__Complex_unsigned_int);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_pow_314 (void)
{
  extern typeof (pow (vol_var__Float32x, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var__Float32x, vol_var_long_int);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_pow_315 (void)
{
  extern typeof (pow (vol_var__Float32x, vol_var__Complex_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Float32x, vol_var__Complex_long_int);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_pow_316 (void)
{
  extern typeof (pow (vol_var__Float32x, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var__Float32x, vol_var_unsigned_long_int);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_pow_317 (void)
{
  extern typeof (pow (vol_var__Float32x, vol_var__Complex_unsigned_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Float32x, vol_var__Complex_unsigned_long_int);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_pow_318 (void)
{
  extern typeof (pow (vol_var__Float32x, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var__Float32x, vol_var_long_long_int);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_pow_319 (void)
{
  extern typeof (pow (vol_var__Float32x, vol_var__Complex_long_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Float32x, vol_var__Complex_long_long_int);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_pow_320 (void)
{
  extern typeof (pow (vol_var__Float32x, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var__Float32x, vol_var_unsigned_long_long_int);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_pow_321 (void)
{
  extern typeof (pow (vol_var__Float32x, vol_var__Complex_unsigned_long_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Float32x, vol_var__Complex_unsigned_long_long_int);
}
#endif
#if defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_pow_322 (void)
{
  extern typeof (pow (vol_var__Float32x, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var__Float32x, vol_var___int128);
}
#endif
#if defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_pow_323 (void)
{
  extern typeof (pow (vol_var__Float32x, vol_var__Complex___int128)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Float32x, vol_var__Complex___int128);
}
#endif
#if defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_pow_324 (void)
{
  extern typeof (pow (vol_var__Float32x, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var__Float32x, vol_var_unsigned___int128);
}
#endif
#if defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_pow_325 (void)
{
  extern typeof (pow (vol_var__Float32x, vol_var__Complex_unsigned___int128)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Float32x, vol_var__Complex_unsigned___int128);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_pow_326 (void)
{
  extern typeof (pow (vol_var__Float32x, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var__Float32x, vol_var_enum_e);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_pow_327 (void)
{
  extern typeof (pow (vol_var__Float32x, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var__Float32x, vol_var__Bool);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_pow_328 (void)
{
  extern typeof (pow (vol_var__Float32x, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var__Float32x, vol_var_bit_field);
}
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
static void
test_pow_329 (void)
{
  extern typeof (pow (vol_var___CFLOAT32X, vol_var__Float16)) var___CFLOAT32X __attribute__ ((unused));
  vol_var___CFLOAT32X = pow (vol_var___CFLOAT32X, vol_var__Float16);
}
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
static void
test_pow_330 (void)
{
  extern typeof (pow (vol_var___CFLOAT32X, vol_var___CFLOAT16)) var___CFLOAT32X __attribute__ ((unused));
  vol_var___CFLOAT32X = pow (vol_var___CFLOAT32X, vol_var___CFLOAT16);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_pow_331 (void)
{
  extern typeof (pow (vol_var___CFLOAT32X, vol_var_float)) var___CFLOAT32X __attribute__ ((unused));
  vol_var___CFLOAT32X = pow (vol_var___CFLOAT32X, vol_var_float);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_pow_332 (void)
{
  extern typeof (pow (vol_var___CFLOAT32X, vol_var__Complex_float)) var___CFLOAT32X __attribute__ ((unused));
  vol_var___CFLOAT32X = pow (vol_var___CFLOAT32X, vol_var__Complex_float);
}
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
static void
test_pow_333 (void)
{
  extern typeof (pow (vol_var___CFLOAT32X, vol_var__Float32)) var___CFLOAT32X __attribute__ ((unused));
  vol_var___CFLOAT32X = pow (vol_var___CFLOAT32X, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
static void
test_pow_334 (void)
{
  extern typeof (pow (vol_var___CFLOAT32X, vol_var___CFLOAT32)) var___CFLOAT32X __attribute__ ((unused));
  vol_var___CFLOAT32X = pow (vol_var___CFLOAT32X, vol_var___CFLOAT32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_pow_335 (void)
{
  extern typeof (pow (vol_var___CFLOAT32X, vol_var__Float32x)) var___CFLOAT32X __attribute__ ((unused));
  vol_var___CFLOAT32X = pow (vol_var___CFLOAT32X, vol_var__Float32x);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_pow_336 (void)
{
  extern typeof (pow (vol_var___CFLOAT32X, vol_var___CFLOAT32X)) var___CFLOAT32X __attribute__ ((unused));
  vol_var___CFLOAT32X = pow (vol_var___CFLOAT32X, vol_var___CFLOAT32X);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_pow_337 (void)
{
  extern typeof (pow (vol_var___CFLOAT32X, vol_var_double)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var___CFLOAT32X, vol_var_double);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_pow_338 (void)
{
  extern typeof (pow (vol_var___CFLOAT32X, vol_var__Complex_double)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var___CFLOAT32X, vol_var__Complex_double);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_pow_339 (void)
{
  extern typeof (pow (vol_var___CFLOAT32X, vol_var_long_double)) var__Complex_long_double __attribute__ ((unused));
  vol_var__Complex_long_double = pow (vol_var___CFLOAT32X, vol_var_long_double);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_pow_340 (void)
{
  extern typeof (pow (vol_var___CFLOAT32X, vol_var__Complex_long_double)) var__Complex_long_double __attribute__ ((unused));
  vol_var__Complex_long_double = pow (vol_var___CFLOAT32X, vol_var__Complex_long_double);
}
#endif
#if defined HUGE_VAL_F32X && defined HUGE_VAL_F64
static void
test_pow_341 (void)
{
  extern typeof (pow (vol_var___CFLOAT32X, vol_var__Float64)) var___CFLOAT64 __attribute__ ((unused));
  vol_var___CFLOAT64 = pow (vol_var___CFLOAT32X, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F32X && defined HUGE_VAL_F64
static void
test_pow_342 (void)
{
  extern typeof (pow (vol_var___CFLOAT32X, vol_var___CFLOAT64)) var___CFLOAT64 __attribute__ ((unused));
  vol_var___CFLOAT64 = pow (vol_var___CFLOAT32X, vol_var___CFLOAT64);
}
#endif
#if defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
static void
test_pow_343 (void)
{
  extern typeof (pow (vol_var___CFLOAT32X, vol_var__Float64x)) var___CFLOAT64X __attribute__ ((unused));
  vol_var___CFLOAT64X = pow (vol_var___CFLOAT32X, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
static void
test_pow_344 (void)
{
  extern typeof (pow (vol_var___CFLOAT32X, vol_var___CFLOAT64X)) var___CFLOAT64X __attribute__ ((unused));
  vol_var___CFLOAT64X = pow (vol_var___CFLOAT32X, vol_var___CFLOAT64X);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
static void
test_pow_345 (void)
{
  extern typeof (pow (vol_var___CFLOAT32X, vol_var__Float128)) var___CFLOAT128 __attribute__ ((unused));
  vol_var___CFLOAT128 = pow (vol_var___CFLOAT32X, vol_var__Float128);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
static void
test_pow_346 (void)
{
  extern typeof (pow (vol_var___CFLOAT32X, vol_var___CFLOAT128)) var___CFLOAT128 __attribute__ ((unused));
  vol_var___CFLOAT128 = pow (vol_var___CFLOAT32X, vol_var___CFLOAT128);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_pow_347 (void)
{
  extern typeof (pow (vol_var___CFLOAT32X, vol_var_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var___CFLOAT32X, vol_var_char);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_pow_348 (void)
{
  extern typeof (pow (vol_var___CFLOAT32X, vol_var__Complex_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var___CFLOAT32X, vol_var__Complex_char);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_pow_349 (void)
{
  extern typeof (pow (vol_var___CFLOAT32X, vol_var_signed_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var___CFLOAT32X, vol_var_signed_char);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_pow_350 (void)
{
  extern typeof (pow (vol_var___CFLOAT32X, vol_var__Complex_signed_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var___CFLOAT32X, vol_var__Complex_signed_char);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_pow_351 (void)
{
  extern typeof (pow (vol_var___CFLOAT32X, vol_var_unsigned_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var___CFLOAT32X, vol_var_unsigned_char);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_pow_352 (void)
{
  extern typeof (pow (vol_var___CFLOAT32X, vol_var__Complex_unsigned_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var___CFLOAT32X, vol_var__Complex_unsigned_char);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_pow_353 (void)
{
  extern typeof (pow (vol_var___CFLOAT32X, vol_var_short_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var___CFLOAT32X, vol_var_short_int);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_pow_354 (void)
{
  extern typeof (pow (vol_var___CFLOAT32X, vol_var__Complex_short_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var___CFLOAT32X, vol_var__Complex_short_int);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_pow_355 (void)
{
  extern typeof (pow (vol_var___CFLOAT32X, vol_var_unsigned_short_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var___CFLOAT32X, vol_var_unsigned_short_int);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_pow_356 (void)
{
  extern typeof (pow (vol_var___CFLOAT32X, vol_var__Complex_unsigned_short_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var___CFLOAT32X, vol_var__Complex_unsigned_short_int);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_pow_357 (void)
{
  extern typeof (pow (vol_var___CFLOAT32X, vol_var_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var___CFLOAT32X, vol_var_int);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_pow_358 (void)
{
  extern typeof (pow (vol_var___CFLOAT32X, vol_var__Complex_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var___CFLOAT32X, vol_var__Complex_int);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_pow_359 (void)
{
  extern typeof (pow (vol_var___CFLOAT32X, vol_var_unsigned_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var___CFLOAT32X, vol_var_unsigned_int);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_pow_360 (void)
{
  extern typeof (pow (vol_var___CFLOAT32X, vol_var__Complex_unsigned_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var___CFLOAT32X, vol_var__Complex_unsigned_int);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_pow_361 (void)
{
  extern typeof (pow (vol_var___CFLOAT32X, vol_var_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var___CFLOAT32X, vol_var_long_int);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_pow_362 (void)
{
  extern typeof (pow (vol_var___CFLOAT32X, vol_var__Complex_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var___CFLOAT32X, vol_var__Complex_long_int);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_pow_363 (void)
{
  extern typeof (pow (vol_var___CFLOAT32X, vol_var_unsigned_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var___CFLOAT32X, vol_var_unsigned_long_int);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_pow_364 (void)
{
  extern typeof (pow (vol_var___CFLOAT32X, vol_var__Complex_unsigned_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var___CFLOAT32X, vol_var__Complex_unsigned_long_int);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_pow_365 (void)
{
  extern typeof (pow (vol_var___CFLOAT32X, vol_var_long_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var___CFLOAT32X, vol_var_long_long_int);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_pow_366 (void)
{
  extern typeof (pow (vol_var___CFLOAT32X, vol_var__Complex_long_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var___CFLOAT32X, vol_var__Complex_long_long_int);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_pow_367 (void)
{
  extern typeof (pow (vol_var___CFLOAT32X, vol_var_unsigned_long_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var___CFLOAT32X, vol_var_unsigned_long_long_int);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_pow_368 (void)
{
  extern typeof (pow (vol_var___CFLOAT32X, vol_var__Complex_unsigned_long_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var___CFLOAT32X, vol_var__Complex_unsigned_long_long_int);
}
#endif
#if defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_pow_369 (void)
{
  extern typeof (pow (vol_var___CFLOAT32X, vol_var___int128)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var___CFLOAT32X, vol_var___int128);
}
#endif
#if defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_pow_370 (void)
{
  extern typeof (pow (vol_var___CFLOAT32X, vol_var__Complex___int128)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var___CFLOAT32X, vol_var__Complex___int128);
}
#endif
#if defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_pow_371 (void)
{
  extern typeof (pow (vol_var___CFLOAT32X, vol_var_unsigned___int128)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var___CFLOAT32X, vol_var_unsigned___int128);
}
#endif
#if defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_pow_372 (void)
{
  extern typeof (pow (vol_var___CFLOAT32X, vol_var__Complex_unsigned___int128)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var___CFLOAT32X, vol_var__Complex_unsigned___int128);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_pow_373 (void)
{
  extern typeof (pow (vol_var___CFLOAT32X, vol_var_enum_e)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var___CFLOAT32X, vol_var_enum_e);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_pow_374 (void)
{
  extern typeof (pow (vol_var___CFLOAT32X, vol_var__Bool)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var___CFLOAT32X, vol_var__Bool);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_pow_375 (void)
{
  extern typeof (pow (vol_var___CFLOAT32X, vol_var_bit_field)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var___CFLOAT32X, vol_var_bit_field);
}
#endif
#if defined HUGE_VAL_F16
static void
test_pow_376 (void)
{
  extern typeof (pow (vol_var_double, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_double, vol_var__Float16);
}
#endif
#if defined HUGE_VAL_F16
static void
test_pow_377 (void)
{
  extern typeof (pow (vol_var_double, vol_var___CFLOAT16)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_double, vol_var___CFLOAT16);
}
#endif
static void
test_pow_378 (void)
{
  extern typeof (pow (vol_var_double, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_double, vol_var_float);
}
static void
test_pow_379 (void)
{
  extern typeof (pow (vol_var_double, vol_var__Complex_float)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_double, vol_var__Complex_float);
}
#if defined HUGE_VAL_F32
static void
test_pow_380 (void)
{
  extern typeof (pow (vol_var_double, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_double, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32
static void
test_pow_381 (void)
{
  extern typeof (pow (vol_var_double, vol_var___CFLOAT32)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_double, vol_var___CFLOAT32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_pow_382 (void)
{
  extern typeof (pow (vol_var_double, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_double, vol_var__Float32x);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_pow_383 (void)
{
  extern typeof (pow (vol_var_double, vol_var___CFLOAT32X)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_double, vol_var___CFLOAT32X);
}
#endif
static void
test_pow_384 (void)
{
  extern typeof (pow (vol_var_double, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_double, vol_var_double);
}
static void
test_pow_385 (void)
{
  extern typeof (pow (vol_var_double, vol_var__Complex_double)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_double, vol_var__Complex_double);
}
static void
test_pow_386 (void)
{
  extern typeof (pow (vol_var_double, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = pow (vol_var_double, vol_var_long_double);
}
static void
test_pow_387 (void)
{
  extern typeof (pow (vol_var_double, vol_var__Complex_long_double)) var__Complex_long_double __attribute__ ((unused));
  vol_var__Complex_long_double = pow (vol_var_double, vol_var__Complex_long_double);
}
#if defined HUGE_VAL_F64
static void
test_pow_388 (void)
{
  extern typeof (pow (vol_var_double, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = pow (vol_var_double, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64
static void
test_pow_389 (void)
{
  extern typeof (pow (vol_var_double, vol_var___CFLOAT64)) var___CFLOAT64 __attribute__ ((unused));
  vol_var___CFLOAT64 = pow (vol_var_double, vol_var___CFLOAT64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_pow_390 (void)
{
  extern typeof (pow (vol_var_double, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = pow (vol_var_double, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_pow_391 (void)
{
  extern typeof (pow (vol_var_double, vol_var___CFLOAT64X)) var___CFLOAT64X __attribute__ ((unused));
  vol_var___CFLOAT64X = pow (vol_var_double, vol_var___CFLOAT64X);
}
#endif
#if defined HUGE_VAL_F128
static void
test_pow_392 (void)
{
  extern typeof (pow (vol_var_double, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = pow (vol_var_double, vol_var__Float128);
}
#endif
#if defined HUGE_VAL_F128
static void
test_pow_393 (void)
{
  extern typeof (pow (vol_var_double, vol_var___CFLOAT128)) var___CFLOAT128 __attribute__ ((unused));
  vol_var___CFLOAT128 = pow (vol_var_double, vol_var___CFLOAT128);
}
#endif
static void
test_pow_394 (void)
{
  extern typeof (pow (vol_var_double, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_double, vol_var_char);
}
static void
test_pow_395 (void)
{
  extern typeof (pow (vol_var_double, vol_var__Complex_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_double, vol_var__Complex_char);
}
static void
test_pow_396 (void)
{
  extern typeof (pow (vol_var_double, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_double, vol_var_signed_char);
}
static void
test_pow_397 (void)
{
  extern typeof (pow (vol_var_double, vol_var__Complex_signed_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_double, vol_var__Complex_signed_char);
}
static void
test_pow_398 (void)
{
  extern typeof (pow (vol_var_double, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_double, vol_var_unsigned_char);
}
static void
test_pow_399 (void)
{
  extern typeof (pow (vol_var_double, vol_var__Complex_unsigned_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_double, vol_var__Complex_unsigned_char);
}
static void
test_pow_400 (void)
{
  extern typeof (pow (vol_var_double, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_double, vol_var_short_int);
}
static void
test_pow_401 (void)
{
  extern typeof (pow (vol_var_double, vol_var__Complex_short_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_double, vol_var__Complex_short_int);
}
static void
test_pow_402 (void)
{
  extern typeof (pow (vol_var_double, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_double, vol_var_unsigned_short_int);
}
static void
test_pow_403 (void)
{
  extern typeof (pow (vol_var_double, vol_var__Complex_unsigned_short_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_double, vol_var__Complex_unsigned_short_int);
}
static void
test_pow_404 (void)
{
  extern typeof (pow (vol_var_double, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_double, vol_var_int);
}
static void
test_pow_405 (void)
{
  extern typeof (pow (vol_var_double, vol_var__Complex_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_double, vol_var__Complex_int);
}
static void
test_pow_406 (void)
{
  extern typeof (pow (vol_var_double, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_double, vol_var_unsigned_int);
}
static void
test_pow_407 (void)
{
  extern typeof (pow (vol_var_double, vol_var__Complex_unsigned_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_double, vol_var__Complex_unsigned_int);
}
static void
test_pow_408 (void)
{
  extern typeof (pow (vol_var_double, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_double, vol_var_long_int);
}
static void
test_pow_409 (void)
{
  extern typeof (pow (vol_var_double, vol_var__Complex_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_double, vol_var__Complex_long_int);
}
static void
test_pow_410 (void)
{
  extern typeof (pow (vol_var_double, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_double, vol_var_unsigned_long_int);
}
static void
test_pow_411 (void)
{
  extern typeof (pow (vol_var_double, vol_var__Complex_unsigned_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_double, vol_var__Complex_unsigned_long_int);
}
static void
test_pow_412 (void)
{
  extern typeof (pow (vol_var_double, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_double, vol_var_long_long_int);
}
static void
test_pow_413 (void)
{
  extern typeof (pow (vol_var_double, vol_var__Complex_long_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_double, vol_var__Complex_long_long_int);
}
static void
test_pow_414 (void)
{
  extern typeof (pow (vol_var_double, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_double, vol_var_unsigned_long_long_int);
}
static void
test_pow_415 (void)
{
  extern typeof (pow (vol_var_double, vol_var__Complex_unsigned_long_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_double, vol_var__Complex_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_pow_416 (void)
{
  extern typeof (pow (vol_var_double, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_double, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_417 (void)
{
  extern typeof (pow (vol_var_double, vol_var__Complex___int128)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_double, vol_var__Complex___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_418 (void)
{
  extern typeof (pow (vol_var_double, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_double, vol_var_unsigned___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_419 (void)
{
  extern typeof (pow (vol_var_double, vol_var__Complex_unsigned___int128)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_double, vol_var__Complex_unsigned___int128);
}
#endif
static void
test_pow_420 (void)
{
  extern typeof (pow (vol_var_double, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_double, vol_var_enum_e);
}
static void
test_pow_421 (void)
{
  extern typeof (pow (vol_var_double, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_double, vol_var__Bool);
}
static void
test_pow_422 (void)
{
  extern typeof (pow (vol_var_double, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_double, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_pow_423 (void)
{
  extern typeof (pow (vol_var__Complex_double, vol_var__Float16)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_double, vol_var__Float16);
}
#endif
#if defined HUGE_VAL_F16
static void
test_pow_424 (void)
{
  extern typeof (pow (vol_var__Complex_double, vol_var___CFLOAT16)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_double, vol_var___CFLOAT16);
}
#endif
static void
test_pow_425 (void)
{
  extern typeof (pow (vol_var__Complex_double, vol_var_float)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_double, vol_var_float);
}
static void
test_pow_426 (void)
{
  extern typeof (pow (vol_var__Complex_double, vol_var__Complex_float)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_double, vol_var__Complex_float);
}
#if defined HUGE_VAL_F32
static void
test_pow_427 (void)
{
  extern typeof (pow (vol_var__Complex_double, vol_var__Float32)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_double, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32
static void
test_pow_428 (void)
{
  extern typeof (pow (vol_var__Complex_double, vol_var___CFLOAT32)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_double, vol_var___CFLOAT32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_pow_429 (void)
{
  extern typeof (pow (vol_var__Complex_double, vol_var__Float32x)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_double, vol_var__Float32x);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_pow_430 (void)
{
  extern typeof (pow (vol_var__Complex_double, vol_var___CFLOAT32X)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_double, vol_var___CFLOAT32X);
}
#endif
static void
test_pow_431 (void)
{
  extern typeof (pow (vol_var__Complex_double, vol_var_double)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_double, vol_var_double);
}
static void
test_pow_432 (void)
{
  extern typeof (pow (vol_var__Complex_double, vol_var__Complex_double)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_double, vol_var__Complex_double);
}
static void
test_pow_433 (void)
{
  extern typeof (pow (vol_var__Complex_double, vol_var_long_double)) var__Complex_long_double __attribute__ ((unused));
  vol_var__Complex_long_double = pow (vol_var__Complex_double, vol_var_long_double);
}
static void
test_pow_434 (void)
{
  extern typeof (pow (vol_var__Complex_double, vol_var__Complex_long_double)) var__Complex_long_double __attribute__ ((unused));
  vol_var__Complex_long_double = pow (vol_var__Complex_double, vol_var__Complex_long_double);
}
#if defined HUGE_VAL_F64
static void
test_pow_435 (void)
{
  extern typeof (pow (vol_var__Complex_double, vol_var__Float64)) var___CFLOAT64 __attribute__ ((unused));
  vol_var___CFLOAT64 = pow (vol_var__Complex_double, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64
static void
test_pow_436 (void)
{
  extern typeof (pow (vol_var__Complex_double, vol_var___CFLOAT64)) var___CFLOAT64 __attribute__ ((unused));
  vol_var___CFLOAT64 = pow (vol_var__Complex_double, vol_var___CFLOAT64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_pow_437 (void)
{
  extern typeof (pow (vol_var__Complex_double, vol_var__Float64x)) var___CFLOAT64X __attribute__ ((unused));
  vol_var___CFLOAT64X = pow (vol_var__Complex_double, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_pow_438 (void)
{
  extern typeof (pow (vol_var__Complex_double, vol_var___CFLOAT64X)) var___CFLOAT64X __attribute__ ((unused));
  vol_var___CFLOAT64X = pow (vol_var__Complex_double, vol_var___CFLOAT64X);
}
#endif
#if defined HUGE_VAL_F128
static void
test_pow_439 (void)
{
  extern typeof (pow (vol_var__Complex_double, vol_var__Float128)) var___CFLOAT128 __attribute__ ((unused));
  vol_var___CFLOAT128 = pow (vol_var__Complex_double, vol_var__Float128);
}
#endif
#if defined HUGE_VAL_F128
static void
test_pow_440 (void)
{
  extern typeof (pow (vol_var__Complex_double, vol_var___CFLOAT128)) var___CFLOAT128 __attribute__ ((unused));
  vol_var___CFLOAT128 = pow (vol_var__Complex_double, vol_var___CFLOAT128);
}
#endif
static void
test_pow_441 (void)
{
  extern typeof (pow (vol_var__Complex_double, vol_var_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_double, vol_var_char);
}
static void
test_pow_442 (void)
{
  extern typeof (pow (vol_var__Complex_double, vol_var__Complex_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_double, vol_var__Complex_char);
}
static void
test_pow_443 (void)
{
  extern typeof (pow (vol_var__Complex_double, vol_var_signed_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_double, vol_var_signed_char);
}
static void
test_pow_444 (void)
{
  extern typeof (pow (vol_var__Complex_double, vol_var__Complex_signed_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_double, vol_var__Complex_signed_char);
}
static void
test_pow_445 (void)
{
  extern typeof (pow (vol_var__Complex_double, vol_var_unsigned_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_double, vol_var_unsigned_char);
}
static void
test_pow_446 (void)
{
  extern typeof (pow (vol_var__Complex_double, vol_var__Complex_unsigned_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_double, vol_var__Complex_unsigned_char);
}
static void
test_pow_447 (void)
{
  extern typeof (pow (vol_var__Complex_double, vol_var_short_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_double, vol_var_short_int);
}
static void
test_pow_448 (void)
{
  extern typeof (pow (vol_var__Complex_double, vol_var__Complex_short_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_double, vol_var__Complex_short_int);
}
static void
test_pow_449 (void)
{
  extern typeof (pow (vol_var__Complex_double, vol_var_unsigned_short_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_double, vol_var_unsigned_short_int);
}
static void
test_pow_450 (void)
{
  extern typeof (pow (vol_var__Complex_double, vol_var__Complex_unsigned_short_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_double, vol_var__Complex_unsigned_short_int);
}
static void
test_pow_451 (void)
{
  extern typeof (pow (vol_var__Complex_double, vol_var_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_double, vol_var_int);
}
static void
test_pow_452 (void)
{
  extern typeof (pow (vol_var__Complex_double, vol_var__Complex_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_double, vol_var__Complex_int);
}
static void
test_pow_453 (void)
{
  extern typeof (pow (vol_var__Complex_double, vol_var_unsigned_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_double, vol_var_unsigned_int);
}
static void
test_pow_454 (void)
{
  extern typeof (pow (vol_var__Complex_double, vol_var__Complex_unsigned_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_double, vol_var__Complex_unsigned_int);
}
static void
test_pow_455 (void)
{
  extern typeof (pow (vol_var__Complex_double, vol_var_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_double, vol_var_long_int);
}
static void
test_pow_456 (void)
{
  extern typeof (pow (vol_var__Complex_double, vol_var__Complex_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_double, vol_var__Complex_long_int);
}
static void
test_pow_457 (void)
{
  extern typeof (pow (vol_var__Complex_double, vol_var_unsigned_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_double, vol_var_unsigned_long_int);
}
static void
test_pow_458 (void)
{
  extern typeof (pow (vol_var__Complex_double, vol_var__Complex_unsigned_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_double, vol_var__Complex_unsigned_long_int);
}
static void
test_pow_459 (void)
{
  extern typeof (pow (vol_var__Complex_double, vol_var_long_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_double, vol_var_long_long_int);
}
static void
test_pow_460 (void)
{
  extern typeof (pow (vol_var__Complex_double, vol_var__Complex_long_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_double, vol_var__Complex_long_long_int);
}
static void
test_pow_461 (void)
{
  extern typeof (pow (vol_var__Complex_double, vol_var_unsigned_long_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_double, vol_var_unsigned_long_long_int);
}
static void
test_pow_462 (void)
{
  extern typeof (pow (vol_var__Complex_double, vol_var__Complex_unsigned_long_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_double, vol_var__Complex_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_pow_463 (void)
{
  extern typeof (pow (vol_var__Complex_double, vol_var___int128)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_double, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_464 (void)
{
  extern typeof (pow (vol_var__Complex_double, vol_var__Complex___int128)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_double, vol_var__Complex___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_465 (void)
{
  extern typeof (pow (vol_var__Complex_double, vol_var_unsigned___int128)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_double, vol_var_unsigned___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_466 (void)
{
  extern typeof (pow (vol_var__Complex_double, vol_var__Complex_unsigned___int128)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_double, vol_var__Complex_unsigned___int128);
}
#endif
static void
test_pow_467 (void)
{
  extern typeof (pow (vol_var__Complex_double, vol_var_enum_e)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_double, vol_var_enum_e);
}
static void
test_pow_468 (void)
{
  extern typeof (pow (vol_var__Complex_double, vol_var__Bool)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_double, vol_var__Bool);
}
static void
test_pow_469 (void)
{
  extern typeof (pow (vol_var__Complex_double, vol_var_bit_field)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_double, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_pow_470 (void)
{
  extern typeof (pow (vol_var_long_double, vol_var__Float16)) var_long_double __attribute__ ((unused));
  vol_var_long_double = pow (vol_var_long_double, vol_var__Float16);
}
#endif
#if defined HUGE_VAL_F16
static void
test_pow_471 (void)
{
  extern typeof (pow (vol_var_long_double, vol_var___CFLOAT16)) var__Complex_long_double __attribute__ ((unused));
  vol_var__Complex_long_double = pow (vol_var_long_double, vol_var___CFLOAT16);
}
#endif
static void
test_pow_472 (void)
{
  extern typeof (pow (vol_var_long_double, vol_var_float)) var_long_double __attribute__ ((unused));
  vol_var_long_double = pow (vol_var_long_double, vol_var_float);
}
static void
test_pow_473 (void)
{
  extern typeof (pow (vol_var_long_double, vol_var__Complex_float)) var__Complex_long_double __attribute__ ((unused));
  vol_var__Complex_long_double = pow (vol_var_long_double, vol_var__Complex_float);
}
#if defined HUGE_VAL_F32
static void
test_pow_474 (void)
{
  extern typeof (pow (vol_var_long_double, vol_var__Float32)) var_long_double __attribute__ ((unused));
  vol_var_long_double = pow (vol_var_long_double, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32
static void
test_pow_475 (void)
{
  extern typeof (pow (vol_var_long_double, vol_var___CFLOAT32)) var__Complex_long_double __attribute__ ((unused));
  vol_var__Complex_long_double = pow (vol_var_long_double, vol_var___CFLOAT32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_pow_476 (void)
{
  extern typeof (pow (vol_var_long_double, vol_var__Float32x)) var_long_double __attribute__ ((unused));
  vol_var_long_double = pow (vol_var_long_double, vol_var__Float32x);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_pow_477 (void)
{
  extern typeof (pow (vol_var_long_double, vol_var___CFLOAT32X)) var__Complex_long_double __attribute__ ((unused));
  vol_var__Complex_long_double = pow (vol_var_long_double, vol_var___CFLOAT32X);
}
#endif
static void
test_pow_478 (void)
{
  extern typeof (pow (vol_var_long_double, vol_var_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = pow (vol_var_long_double, vol_var_double);
}
static void
test_pow_479 (void)
{
  extern typeof (pow (vol_var_long_double, vol_var__Complex_double)) var__Complex_long_double __attribute__ ((unused));
  vol_var__Complex_long_double = pow (vol_var_long_double, vol_var__Complex_double);
}
static void
test_pow_480 (void)
{
  extern typeof (pow (vol_var_long_double, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = pow (vol_var_long_double, vol_var_long_double);
}
static void
test_pow_481 (void)
{
  extern typeof (pow (vol_var_long_double, vol_var__Complex_long_double)) var__Complex_long_double __attribute__ ((unused));
  vol_var__Complex_long_double = pow (vol_var_long_double, vol_var__Complex_long_double);
}
#if defined HUGE_VAL_F64
static void
test_pow_482 (void)
{
  extern typeof (pow (vol_var_long_double, vol_var__Float64)) var_long_double_Float64 __attribute__ ((unused));
  vol_var_long_double_Float64 = pow (vol_var_long_double, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64
static void
test_pow_483 (void)
{
  extern typeof (pow (vol_var_long_double, vol_var___CFLOAT64)) var_complex_long_double_Float64 __attribute__ ((unused));
  vol_var_complex_long_double_Float64 = pow (vol_var_long_double, vol_var___CFLOAT64);
}
#endif
#if (LDBL_MANT_DIG != 106) && defined HUGE_VAL_F64X
static void
test_pow_484 (void)
{
  extern typeof (pow (vol_var_long_double, vol_var__Float64x)) var_long_double_Float64x __attribute__ ((unused));
  vol_var_long_double_Float64x = pow (vol_var_long_double, vol_var__Float64x);
}
#endif
#if (LDBL_MANT_DIG != 106) && defined HUGE_VAL_F64X
static void
test_pow_485 (void)
{
  extern typeof (pow (vol_var_long_double, vol_var___CFLOAT64X)) var_complex_long_double_Float64x __attribute__ ((unused));
  vol_var_complex_long_double_Float64x = pow (vol_var_long_double, vol_var___CFLOAT64X);
}
#endif
#if (LDBL_MANT_DIG != 106) && defined HUGE_VAL_F128
static void
test_pow_486 (void)
{
  extern typeof (pow (vol_var_long_double, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = pow (vol_var_long_double, vol_var__Float128);
}
#endif
#if (LDBL_MANT_DIG != 106) && defined HUGE_VAL_F128
static void
test_pow_487 (void)
{
  extern typeof (pow (vol_var_long_double, vol_var___CFLOAT128)) var___CFLOAT128 __attribute__ ((unused));
  vol_var___CFLOAT128 = pow (vol_var_long_double, vol_var___CFLOAT128);
}
#endif
static void
test_pow_488 (void)
{
  extern typeof (pow (vol_var_long_double, vol_var_char)) var_long_double __attribute__ ((unused));
  vol_var_long_double = pow (vol_var_long_double, vol_var_char);
}
static void
test_pow_489 (void)
{
  extern typeof (pow (vol_var_long_double, vol_var__Complex_char)) var__Complex_long_double __attribute__ ((unused));
  vol_var__Complex_long_double = pow (vol_var_long_double, vol_var__Complex_char);
}
static void
test_pow_490 (void)
{
  extern typeof (pow (vol_var_long_double, vol_var_signed_char)) var_long_double __attribute__ ((unused));
  vol_var_long_double = pow (vol_var_long_double, vol_var_signed_char);
}
static void
test_pow_491 (void)
{
  extern typeof (pow (vol_var_long_double, vol_var__Complex_signed_char)) var__Complex_long_double __attribute__ ((unused));
  vol_var__Complex_long_double = pow (vol_var_long_double, vol_var__Complex_signed_char);
}
static void
test_pow_492 (void)
{
  extern typeof (pow (vol_var_long_double, vol_var_unsigned_char)) var_long_double __attribute__ ((unused));
  vol_var_long_double = pow (vol_var_long_double, vol_var_unsigned_char);
}
static void
test_pow_493 (void)
{
  extern typeof (pow (vol_var_long_double, vol_var__Complex_unsigned_char)) var__Complex_long_double __attribute__ ((unused));
  vol_var__Complex_long_double = pow (vol_var_long_double, vol_var__Complex_unsigned_char);
}
static void
test_pow_494 (void)
{
  extern typeof (pow (vol_var_long_double, vol_var_short_int)) var_long_double __attribute__ ((unused));
  vol_var_long_double = pow (vol_var_long_double, vol_var_short_int);
}
static void
test_pow_495 (void)
{
  extern typeof (pow (vol_var_long_double, vol_var__Complex_short_int)) var__Complex_long_double __attribute__ ((unused));
  vol_var__Complex_long_double = pow (vol_var_long_double, vol_var__Complex_short_int);
}
static void
test_pow_496 (void)
{
  extern typeof (pow (vol_var_long_double, vol_var_unsigned_short_int)) var_long_double __attribute__ ((unused));
  vol_var_long_double = pow (vol_var_long_double, vol_var_unsigned_short_int);
}
static void
test_pow_497 (void)
{
  extern typeof (pow (vol_var_long_double, vol_var__Complex_unsigned_short_int)) var__Complex_long_double __attribute__ ((unused));
  vol_var__Complex_long_double = pow (vol_var_long_double, vol_var__Complex_unsigned_short_int);
}
static void
test_pow_498 (void)
{
  extern typeof (pow (vol_var_long_double, vol_var_int)) var_long_double __attribute__ ((unused));
  vol_var_long_double = pow (vol_var_long_double, vol_var_int);
}
static void
test_pow_499 (void)
{
  extern typeof (pow (vol_var_long_double, vol_var__Complex_int)) var__Complex_long_double __attribute__ ((unused));
  vol_var__Complex_long_double = pow (vol_var_long_double, vol_var__Complex_int);
}
static void
test_pow_500 (void)
{
  extern typeof (pow (vol_var_long_double, vol_var_unsigned_int)) var_long_double __attribute__ ((unused));
  vol_var_long_double = pow (vol_var_long_double, vol_var_unsigned_int);
}
static void
test_pow_501 (void)
{
  extern typeof (pow (vol_var_long_double, vol_var__Complex_unsigned_int)) var__Complex_long_double __attribute__ ((unused));
  vol_var__Complex_long_double = pow (vol_var_long_double, vol_var__Complex_unsigned_int);
}
static void
test_pow_502 (void)
{
  extern typeof (pow (vol_var_long_double, vol_var_long_int)) var_long_double __attribute__ ((unused));
  vol_var_long_double = pow (vol_var_long_double, vol_var_long_int);
}
static void
test_pow_503 (void)
{
  extern typeof (pow (vol_var_long_double, vol_var__Complex_long_int)) var__Complex_long_double __attribute__ ((unused));
  vol_var__Complex_long_double = pow (vol_var_long_double, vol_var__Complex_long_int);
}
static void
test_pow_504 (void)
{
  extern typeof (pow (vol_var_long_double, vol_var_unsigned_long_int)) var_long_double __attribute__ ((unused));
  vol_var_long_double = pow (vol_var_long_double, vol_var_unsigned_long_int);
}
static void
test_pow_505 (void)
{
  extern typeof (pow (vol_var_long_double, vol_var__Complex_unsigned_long_int)) var__Complex_long_double __attribute__ ((unused));
  vol_var__Complex_long_double = pow (vol_var_long_double, vol_var__Complex_unsigned_long_int);
}
static void
test_pow_506 (void)
{
  extern typeof (pow (vol_var_long_double, vol_var_long_long_int)) var_long_double __attribute__ ((unused));
  vol_var_long_double = pow (vol_var_long_double, vol_var_long_long_int);
}
static void
test_pow_507 (void)
{
  extern typeof (pow (vol_var_long_double, vol_var__Complex_long_long_int)) var__Complex_long_double __attribute__ ((unused));
  vol_var__Complex_long_double = pow (vol_var_long_double, vol_var__Complex_long_long_int);
}
static void
test_pow_508 (void)
{
  extern typeof (pow (vol_var_long_double, vol_var_unsigned_long_long_int)) var_long_double __attribute__ ((unused));
  vol_var_long_double = pow (vol_var_long_double, vol_var_unsigned_long_long_int);
}
static void
test_pow_509 (void)
{
  extern typeof (pow (vol_var_long_double, vol_var__Complex_unsigned_long_long_int)) var__Complex_long_double __attribute__ ((unused));
  vol_var__Complex_long_double = pow (vol_var_long_double, vol_var__Complex_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_pow_510 (void)
{
  extern typeof (pow (vol_var_long_double, vol_var___int128)) var_long_double __attribute__ ((unused));
  vol_var_long_double = pow (vol_var_long_double, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_511 (void)
{
  extern typeof (pow (vol_var_long_double, vol_var__Complex___int128)) var__Complex_long_double __attribute__ ((unused));
  vol_var__Complex_long_double = pow (vol_var_long_double, vol_var__Complex___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_512 (void)
{
  extern typeof (pow (vol_var_long_double, vol_var_unsigned___int128)) var_long_double __attribute__ ((unused));
  vol_var_long_double = pow (vol_var_long_double, vol_var_unsigned___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_513 (void)
{
  extern typeof (pow (vol_var_long_double, vol_var__Complex_unsigned___int128)) var__Complex_long_double __attribute__ ((unused));
  vol_var__Complex_long_double = pow (vol_var_long_double, vol_var__Complex_unsigned___int128);
}
#endif
static void
test_pow_514 (void)
{
  extern typeof (pow (vol_var_long_double, vol_var_enum_e)) var_long_double __attribute__ ((unused));
  vol_var_long_double = pow (vol_var_long_double, vol_var_enum_e);
}
static void
test_pow_515 (void)
{
  extern typeof (pow (vol_var_long_double, vol_var__Bool)) var_long_double __attribute__ ((unused));
  vol_var_long_double = pow (vol_var_long_double, vol_var__Bool);
}
static void
test_pow_516 (void)
{
  extern typeof (pow (vol_var_long_double, vol_var_bit_field)) var_long_double __attribute__ ((unused));
  vol_var_long_double = pow (vol_var_long_double, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_pow_517 (void)
{
  extern typeof (pow (vol_var__Complex_long_double, vol_var__Float16)) var__Complex_long_double __attribute__ ((unused));
  vol_var__Complex_long_double = pow (vol_var__Complex_long_double, vol_var__Float16);
}
#endif
#if defined HUGE_VAL_F16
static void
test_pow_518 (void)
{
  extern typeof (pow (vol_var__Complex_long_double, vol_var___CFLOAT16)) var__Complex_long_double __attribute__ ((unused));
  vol_var__Complex_long_double = pow (vol_var__Complex_long_double, vol_var___CFLOAT16);
}
#endif
static void
test_pow_519 (void)
{
  extern typeof (pow (vol_var__Complex_long_double, vol_var_float)) var__Complex_long_double __attribute__ ((unused));
  vol_var__Complex_long_double = pow (vol_var__Complex_long_double, vol_var_float);
}
static void
test_pow_520 (void)
{
  extern typeof (pow (vol_var__Complex_long_double, vol_var__Complex_float)) var__Complex_long_double __attribute__ ((unused));
  vol_var__Complex_long_double = pow (vol_var__Complex_long_double, vol_var__Complex_float);
}
#if defined HUGE_VAL_F32
static void
test_pow_521 (void)
{
  extern typeof (pow (vol_var__Complex_long_double, vol_var__Float32)) var__Complex_long_double __attribute__ ((unused));
  vol_var__Complex_long_double = pow (vol_var__Complex_long_double, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32
static void
test_pow_522 (void)
{
  extern typeof (pow (vol_var__Complex_long_double, vol_var___CFLOAT32)) var__Complex_long_double __attribute__ ((unused));
  vol_var__Complex_long_double = pow (vol_var__Complex_long_double, vol_var___CFLOAT32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_pow_523 (void)
{
  extern typeof (pow (vol_var__Complex_long_double, vol_var__Float32x)) var__Complex_long_double __attribute__ ((unused));
  vol_var__Complex_long_double = pow (vol_var__Complex_long_double, vol_var__Float32x);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_pow_524 (void)
{
  extern typeof (pow (vol_var__Complex_long_double, vol_var___CFLOAT32X)) var__Complex_long_double __attribute__ ((unused));
  vol_var__Complex_long_double = pow (vol_var__Complex_long_double, vol_var___CFLOAT32X);
}
#endif
static void
test_pow_525 (void)
{
  extern typeof (pow (vol_var__Complex_long_double, vol_var_double)) var__Complex_long_double __attribute__ ((unused));
  vol_var__Complex_long_double = pow (vol_var__Complex_long_double, vol_var_double);
}
static void
test_pow_526 (void)
{
  extern typeof (pow (vol_var__Complex_long_double, vol_var__Complex_double)) var__Complex_long_double __attribute__ ((unused));
  vol_var__Complex_long_double = pow (vol_var__Complex_long_double, vol_var__Complex_double);
}
static void
test_pow_527 (void)
{
  extern typeof (pow (vol_var__Complex_long_double, vol_var_long_double)) var__Complex_long_double __attribute__ ((unused));
  vol_var__Complex_long_double = pow (vol_var__Complex_long_double, vol_var_long_double);
}
static void
test_pow_528 (void)
{
  extern typeof (pow (vol_var__Complex_long_double, vol_var__Complex_long_double)) var__Complex_long_double __attribute__ ((unused));
  vol_var__Complex_long_double = pow (vol_var__Complex_long_double, vol_var__Complex_long_double);
}
#if defined HUGE_VAL_F64
static void
test_pow_529 (void)
{
  extern typeof (pow (vol_var__Complex_long_double, vol_var__Float64)) var_complex_long_double_Float64 __attribute__ ((unused));
  vol_var_complex_long_double_Float64 = pow (vol_var__Complex_long_double, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64
static void
test_pow_530 (void)
{
  extern typeof (pow (vol_var__Complex_long_double, vol_var___CFLOAT64)) var_complex_long_double_Float64 __attribute__ ((unused));
  vol_var_complex_long_double_Float64 = pow (vol_var__Complex_long_double, vol_var___CFLOAT64);
}
#endif
#if (LDBL_MANT_DIG != 106) && defined HUGE_VAL_F64X
static void
test_pow_531 (void)
{
  extern typeof (pow (vol_var__Complex_long_double, vol_var__Float64x)) var_complex_long_double_Float64x __attribute__ ((unused));
  vol_var_complex_long_double_Float64x = pow (vol_var__Complex_long_double, vol_var__Float64x);
}
#endif
#if (LDBL_MANT_DIG != 106) && defined HUGE_VAL_F64X
static void
test_pow_532 (void)
{
  extern typeof (pow (vol_var__Complex_long_double, vol_var___CFLOAT64X)) var_complex_long_double_Float64x __attribute__ ((unused));
  vol_var_complex_long_double_Float64x = pow (vol_var__Complex_long_double, vol_var___CFLOAT64X);
}
#endif
#if (LDBL_MANT_DIG != 106) && defined HUGE_VAL_F128
static void
test_pow_533 (void)
{
  extern typeof (pow (vol_var__Complex_long_double, vol_var__Float128)) var___CFLOAT128 __attribute__ ((unused));
  vol_var___CFLOAT128 = pow (vol_var__Complex_long_double, vol_var__Float128);
}
#endif
#if (LDBL_MANT_DIG != 106) && defined HUGE_VAL_F128
static void
test_pow_534 (void)
{
  extern typeof (pow (vol_var__Complex_long_double, vol_var___CFLOAT128)) var___CFLOAT128 __attribute__ ((unused));
  vol_var___CFLOAT128 = pow (vol_var__Complex_long_double, vol_var___CFLOAT128);
}
#endif
static void
test_pow_535 (void)
{
  extern typeof (pow (vol_var__Complex_long_double, vol_var_char)) var__Complex_long_double __attribute__ ((unused));
  vol_var__Complex_long_double = pow (vol_var__Complex_long_double, vol_var_char);
}
static void
test_pow_536 (void)
{
  extern typeof (pow (vol_var__Complex_long_double, vol_var__Complex_char)) var__Complex_long_double __attribute__ ((unused));
  vol_var__Complex_long_double = pow (vol_var__Complex_long_double, vol_var__Complex_char);
}
static void
test_pow_537 (void)
{
  extern typeof (pow (vol_var__Complex_long_double, vol_var_signed_char)) var__Complex_long_double __attribute__ ((unused));
  vol_var__Complex_long_double = pow (vol_var__Complex_long_double, vol_var_signed_char);
}
static void
test_pow_538 (void)
{
  extern typeof (pow (vol_var__Complex_long_double, vol_var__Complex_signed_char)) var__Complex_long_double __attribute__ ((unused));
  vol_var__Complex_long_double = pow (vol_var__Complex_long_double, vol_var__Complex_signed_char);
}
static void
test_pow_539 (void)
{
  extern typeof (pow (vol_var__Complex_long_double, vol_var_unsigned_char)) var__Complex_long_double __attribute__ ((unused));
  vol_var__Complex_long_double = pow (vol_var__Complex_long_double, vol_var_unsigned_char);
}
static void
test_pow_540 (void)
{
  extern typeof (pow (vol_var__Complex_long_double, vol_var__Complex_unsigned_char)) var__Complex_long_double __attribute__ ((unused));
  vol_var__Complex_long_double = pow (vol_var__Complex_long_double, vol_var__Complex_unsigned_char);
}
static void
test_pow_541 (void)
{
  extern typeof (pow (vol_var__Complex_long_double, vol_var_short_int)) var__Complex_long_double __attribute__ ((unused));
  vol_var__Complex_long_double = pow (vol_var__Complex_long_double, vol_var_short_int);
}
static void
test_pow_542 (void)
{
  extern typeof (pow (vol_var__Complex_long_double, vol_var__Complex_short_int)) var__Complex_long_double __attribute__ ((unused));
  vol_var__Complex_long_double = pow (vol_var__Complex_long_double, vol_var__Complex_short_int);
}
static void
test_pow_543 (void)
{
  extern typeof (pow (vol_var__Complex_long_double, vol_var_unsigned_short_int)) var__Complex_long_double __attribute__ ((unused));
  vol_var__Complex_long_double = pow (vol_var__Complex_long_double, vol_var_unsigned_short_int);
}
static void
test_pow_544 (void)
{
  extern typeof (pow (vol_var__Complex_long_double, vol_var__Complex_unsigned_short_int)) var__Complex_long_double __attribute__ ((unused));
  vol_var__Complex_long_double = pow (vol_var__Complex_long_double, vol_var__Complex_unsigned_short_int);
}
static void
test_pow_545 (void)
{
  extern typeof (pow (vol_var__Complex_long_double, vol_var_int)) var__Complex_long_double __attribute__ ((unused));
  vol_var__Complex_long_double = pow (vol_var__Complex_long_double, vol_var_int);
}
static void
test_pow_546 (void)
{
  extern typeof (pow (vol_var__Complex_long_double, vol_var__Complex_int)) var__Complex_long_double __attribute__ ((unused));
  vol_var__Complex_long_double = pow (vol_var__Complex_long_double, vol_var__Complex_int);
}
static void
test_pow_547 (void)
{
  extern typeof (pow (vol_var__Complex_long_double, vol_var_unsigned_int)) var__Complex_long_double __attribute__ ((unused));
  vol_var__Complex_long_double = pow (vol_var__Complex_long_double, vol_var_unsigned_int);
}
static void
test_pow_548 (void)
{
  extern typeof (pow (vol_var__Complex_long_double, vol_var__Complex_unsigned_int)) var__Complex_long_double __attribute__ ((unused));
  vol_var__Complex_long_double = pow (vol_var__Complex_long_double, vol_var__Complex_unsigned_int);
}
static void
test_pow_549 (void)
{
  extern typeof (pow (vol_var__Complex_long_double, vol_var_long_int)) var__Complex_long_double __attribute__ ((unused));
  vol_var__Complex_long_double = pow (vol_var__Complex_long_double, vol_var_long_int);
}
static void
test_pow_550 (void)
{
  extern typeof (pow (vol_var__Complex_long_double, vol_var__Complex_long_int)) var__Complex_long_double __attribute__ ((unused));
  vol_var__Complex_long_double = pow (vol_var__Complex_long_double, vol_var__Complex_long_int);
}
static void
test_pow_551 (void)
{
  extern typeof (pow (vol_var__Complex_long_double, vol_var_unsigned_long_int)) var__Complex_long_double __attribute__ ((unused));
  vol_var__Complex_long_double = pow (vol_var__Complex_long_double, vol_var_unsigned_long_int);
}
static void
test_pow_552 (void)
{
  extern typeof (pow (vol_var__Complex_long_double, vol_var__Complex_unsigned_long_int)) var__Complex_long_double __attribute__ ((unused));
  vol_var__Complex_long_double = pow (vol_var__Complex_long_double, vol_var__Complex_unsigned_long_int);
}
static void
test_pow_553 (void)
{
  extern typeof (pow (vol_var__Complex_long_double, vol_var_long_long_int)) var__Complex_long_double __attribute__ ((unused));
  vol_var__Complex_long_double = pow (vol_var__Complex_long_double, vol_var_long_long_int);
}
static void
test_pow_554 (void)
{
  extern typeof (pow (vol_var__Complex_long_double, vol_var__Complex_long_long_int)) var__Complex_long_double __attribute__ ((unused));
  vol_var__Complex_long_double = pow (vol_var__Complex_long_double, vol_var__Complex_long_long_int);
}
static void
test_pow_555 (void)
{
  extern typeof (pow (vol_var__Complex_long_double, vol_var_unsigned_long_long_int)) var__Complex_long_double __attribute__ ((unused));
  vol_var__Complex_long_double = pow (vol_var__Complex_long_double, vol_var_unsigned_long_long_int);
}
static void
test_pow_556 (void)
{
  extern typeof (pow (vol_var__Complex_long_double, vol_var__Complex_unsigned_long_long_int)) var__Complex_long_double __attribute__ ((unused));
  vol_var__Complex_long_double = pow (vol_var__Complex_long_double, vol_var__Complex_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_pow_557 (void)
{
  extern typeof (pow (vol_var__Complex_long_double, vol_var___int128)) var__Complex_long_double __attribute__ ((unused));
  vol_var__Complex_long_double = pow (vol_var__Complex_long_double, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_558 (void)
{
  extern typeof (pow (vol_var__Complex_long_double, vol_var__Complex___int128)) var__Complex_long_double __attribute__ ((unused));
  vol_var__Complex_long_double = pow (vol_var__Complex_long_double, vol_var__Complex___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_559 (void)
{
  extern typeof (pow (vol_var__Complex_long_double, vol_var_unsigned___int128)) var__Complex_long_double __attribute__ ((unused));
  vol_var__Complex_long_double = pow (vol_var__Complex_long_double, vol_var_unsigned___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_560 (void)
{
  extern typeof (pow (vol_var__Complex_long_double, vol_var__Complex_unsigned___int128)) var__Complex_long_double __attribute__ ((unused));
  vol_var__Complex_long_double = pow (vol_var__Complex_long_double, vol_var__Complex_unsigned___int128);
}
#endif
static void
test_pow_561 (void)
{
  extern typeof (pow (vol_var__Complex_long_double, vol_var_enum_e)) var__Complex_long_double __attribute__ ((unused));
  vol_var__Complex_long_double = pow (vol_var__Complex_long_double, vol_var_enum_e);
}
static void
test_pow_562 (void)
{
  extern typeof (pow (vol_var__Complex_long_double, vol_var__Bool)) var__Complex_long_double __attribute__ ((unused));
  vol_var__Complex_long_double = pow (vol_var__Complex_long_double, vol_var__Bool);
}
static void
test_pow_563 (void)
{
  extern typeof (pow (vol_var__Complex_long_double, vol_var_bit_field)) var__Complex_long_double __attribute__ ((unused));
  vol_var__Complex_long_double = pow (vol_var__Complex_long_double, vol_var_bit_field);
}
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F64
static void
test_pow_564 (void)
{
  extern typeof (pow (vol_var__Float64, vol_var__Float16)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = pow (vol_var__Float64, vol_var__Float16);
}
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F64
static void
test_pow_565 (void)
{
  extern typeof (pow (vol_var__Float64, vol_var___CFLOAT16)) var___CFLOAT64 __attribute__ ((unused));
  vol_var___CFLOAT64 = pow (vol_var__Float64, vol_var___CFLOAT16);
}
#endif
#if defined HUGE_VAL_F64
static void
test_pow_566 (void)
{
  extern typeof (pow (vol_var__Float64, vol_var_float)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = pow (vol_var__Float64, vol_var_float);
}
#endif
#if defined HUGE_VAL_F64
static void
test_pow_567 (void)
{
  extern typeof (pow (vol_var__Float64, vol_var__Complex_float)) var___CFLOAT64 __attribute__ ((unused));
  vol_var___CFLOAT64 = pow (vol_var__Float64, vol_var__Complex_float);
}
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F64
static void
test_pow_568 (void)
{
  extern typeof (pow (vol_var__Float64, vol_var__Float32)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = pow (vol_var__Float64, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F64
static void
test_pow_569 (void)
{
  extern typeof (pow (vol_var__Float64, vol_var___CFLOAT32)) var___CFLOAT64 __attribute__ ((unused));
  vol_var___CFLOAT64 = pow (vol_var__Float64, vol_var___CFLOAT32);
}
#endif
#if defined HUGE_VAL_F32X && defined HUGE_VAL_F64
static void
test_pow_570 (void)
{
  extern typeof (pow (vol_var__Float64, vol_var__Float32x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = pow (vol_var__Float64, vol_var__Float32x);
}
#endif
#if defined HUGE_VAL_F32X && defined HUGE_VAL_F64
static void
test_pow_571 (void)
{
  extern typeof (pow (vol_var__Float64, vol_var___CFLOAT32X)) var___CFLOAT64 __attribute__ ((unused));
  vol_var___CFLOAT64 = pow (vol_var__Float64, vol_var___CFLOAT32X);
}
#endif
#if defined HUGE_VAL_F64
static void
test_pow_572 (void)
{
  extern typeof (pow (vol_var__Float64, vol_var_double)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = pow (vol_var__Float64, vol_var_double);
}
#endif
#if defined HUGE_VAL_F64
static void
test_pow_573 (void)
{
  extern typeof (pow (vol_var__Float64, vol_var__Complex_double)) var___CFLOAT64 __attribute__ ((unused));
  vol_var___CFLOAT64 = pow (vol_var__Float64, vol_var__Complex_double);
}
#endif
#if defined HUGE_VAL_F64
static void
test_pow_574 (void)
{
  extern typeof (pow (vol_var__Float64, vol_var_long_double)) var_long_double_Float64 __attribute__ ((unused));
  vol_var_long_double_Float64 = pow (vol_var__Float64, vol_var_long_double);
}
#endif
#if defined HUGE_VAL_F64
static void
test_pow_575 (void)
{
  extern typeof (pow (vol_var__Float64, vol_var__Complex_long_double)) var_complex_long_double_Float64 __attribute__ ((unused));
  vol_var_complex_long_double_Float64 = pow (vol_var__Float64, vol_var__Complex_long_double);
}
#endif
#if defined HUGE_VAL_F64
static void
test_pow_576 (void)
{
  extern typeof (pow (vol_var__Float64, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = pow (vol_var__Float64, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64
static void
test_pow_577 (void)
{
  extern typeof (pow (vol_var__Float64, vol_var___CFLOAT64)) var___CFLOAT64 __attribute__ ((unused));
  vol_var___CFLOAT64 = pow (vol_var__Float64, vol_var___CFLOAT64);
}
#endif
#if defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
static void
test_pow_578 (void)
{
  extern typeof (pow (vol_var__Float64, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = pow (vol_var__Float64, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
static void
test_pow_579 (void)
{
  extern typeof (pow (vol_var__Float64, vol_var___CFLOAT64X)) var___CFLOAT64X __attribute__ ((unused));
  vol_var___CFLOAT64X = pow (vol_var__Float64, vol_var___CFLOAT64X);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F64
static void
test_pow_580 (void)
{
  extern typeof (pow (vol_var__Float64, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = pow (vol_var__Float64, vol_var__Float128);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F64
static void
test_pow_581 (void)
{
  extern typeof (pow (vol_var__Float64, vol_var___CFLOAT128)) var___CFLOAT128 __attribute__ ((unused));
  vol_var___CFLOAT128 = pow (vol_var__Float64, vol_var___CFLOAT128);
}
#endif
#if defined HUGE_VAL_F64
static void
test_pow_582 (void)
{
  extern typeof (pow (vol_var__Float64, vol_var_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = pow (vol_var__Float64, vol_var_char);
}
#endif
#if defined HUGE_VAL_F64
static void
test_pow_583 (void)
{
  extern typeof (pow (vol_var__Float64, vol_var__Complex_char)) var___CFLOAT64 __attribute__ ((unused));
  vol_var___CFLOAT64 = pow (vol_var__Float64, vol_var__Complex_char);
}
#endif
#if defined HUGE_VAL_F64
static void
test_pow_584 (void)
{
  extern typeof (pow (vol_var__Float64, vol_var_signed_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = pow (vol_var__Float64, vol_var_signed_char);
}
#endif
#if defined HUGE_VAL_F64
static void
test_pow_585 (void)
{
  extern typeof (pow (vol_var__Float64, vol_var__Complex_signed_char)) var___CFLOAT64 __attribute__ ((unused));
  vol_var___CFLOAT64 = pow (vol_var__Float64, vol_var__Complex_signed_char);
}
#endif
#if defined HUGE_VAL_F64
static void
test_pow_586 (void)
{
  extern typeof (pow (vol_var__Float64, vol_var_unsigned_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = pow (vol_var__Float64, vol_var_unsigned_char);
}
#endif
#if defined HUGE_VAL_F64
static void
test_pow_587 (void)
{
  extern typeof (pow (vol_var__Float64, vol_var__Complex_unsigned_char)) var___CFLOAT64 __attribute__ ((unused));
  vol_var___CFLOAT64 = pow (vol_var__Float64, vol_var__Complex_unsigned_char);
}
#endif
#if defined HUGE_VAL_F64
static void
test_pow_588 (void)
{
  extern typeof (pow (vol_var__Float64, vol_var_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = pow (vol_var__Float64, vol_var_short_int);
}
#endif
#if defined HUGE_VAL_F64
static void
test_pow_589 (void)
{
  extern typeof (pow (vol_var__Float64, vol_var__Complex_short_int)) var___CFLOAT64 __attribute__ ((unused));
  vol_var___CFLOAT64 = pow (vol_var__Float64, vol_var__Complex_short_int);
}
#endif
#if defined HUGE_VAL_F64
static void
test_pow_590 (void)
{
  extern typeof (pow (vol_var__Float64, vol_var_unsigned_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = pow (vol_var__Float64, vol_var_unsigned_short_int);
}
#endif
#if defined HUGE_VAL_F64
static void
test_pow_591 (void)
{
  extern typeof (pow (vol_var__Float64, vol_var__Complex_unsigned_short_int)) var___CFLOAT64 __attribute__ ((unused));
  vol_var___CFLOAT64 = pow (vol_var__Float64, vol_var__Complex_unsigned_short_int);
}
#endif
#if defined HUGE_VAL_F64
static void
test_pow_592 (void)
{
  extern typeof (pow (vol_var__Float64, vol_var_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = pow (vol_var__Float64, vol_var_int);
}
#endif
#if defined HUGE_VAL_F64
static void
test_pow_593 (void)
{
  extern typeof (pow (vol_var__Float64, vol_var__Complex_int)) var___CFLOAT64 __attribute__ ((unused));
  vol_var___CFLOAT64 = pow (vol_var__Float64, vol_var__Complex_int);
}
#endif
#if defined HUGE_VAL_F64
static void
test_pow_594 (void)
{
  extern typeof (pow (vol_var__Float64, vol_var_unsigned_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = pow (vol_var__Float64, vol_var_unsigned_int);
}
#endif
#if defined HUGE_VAL_F64
static void
test_pow_595 (void)
{
  extern typeof (pow (vol_var__Float64, vol_var__Complex_unsigned_int)) var___CFLOAT64 __attribute__ ((unused));
  vol_var___CFLOAT64 = pow (vol_var__Float64, vol_var__Complex_unsigned_int);
}
#endif
#if defined HUGE_VAL_F64
static void
test_pow_596 (void)
{
  extern typeof (pow (vol_var__Float64, vol_var_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = pow (vol_var__Float64, vol_var_long_int);
}
#endif
#if defined HUGE_VAL_F64
static void
test_pow_597 (void)
{
  extern typeof (pow (vol_var__Float64, vol_var__Complex_long_int)) var___CFLOAT64 __attribute__ ((unused));
  vol_var___CFLOAT64 = pow (vol_var__Float64, vol_var__Complex_long_int);
}
#endif
#if defined HUGE_VAL_F64
static void
test_pow_598 (void)
{
  extern typeof (pow (vol_var__Float64, vol_var_unsigned_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = pow (vol_var__Float64, vol_var_unsigned_long_int);
}
#endif
#if defined HUGE_VAL_F64
static void
test_pow_599 (void)
{
  extern typeof (pow (vol_var__Float64, vol_var__Complex_unsigned_long_int)) var___CFLOAT64 __attribute__ ((unused));
  vol_var___CFLOAT64 = pow (vol_var__Float64, vol_var__Complex_unsigned_long_int);
}
#endif
#if defined HUGE_VAL_F64
static void
test_pow_600 (void)
{
  extern typeof (pow (vol_var__Float64, vol_var_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = pow (vol_var__Float64, vol_var_long_long_int);
}
#endif
#if defined HUGE_VAL_F64
static void
test_pow_601 (void)
{
  extern typeof (pow (vol_var__Float64, vol_var__Complex_long_long_int)) var___CFLOAT64 __attribute__ ((unused));
  vol_var___CFLOAT64 = pow (vol_var__Float64, vol_var__Complex_long_long_int);
}
#endif
#if defined HUGE_VAL_F64
static void
test_pow_602 (void)
{
  extern typeof (pow (vol_var__Float64, vol_var_unsigned_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = pow (vol_var__Float64, vol_var_unsigned_long_long_int);
}
#endif
#if defined HUGE_VAL_F64
static void
test_pow_603 (void)
{
  extern typeof (pow (vol_var__Float64, vol_var__Complex_unsigned_long_long_int)) var___CFLOAT64 __attribute__ ((unused));
  vol_var___CFLOAT64 = pow (vol_var__Float64, vol_var__Complex_unsigned_long_long_int);
}
#endif
#if defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_pow_604 (void)
{
  extern typeof (pow (vol_var__Float64, vol_var___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = pow (vol_var__Float64, vol_var___int128);
}
#endif
#if defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_pow_605 (void)
{
  extern typeof (pow (vol_var__Float64, vol_var__Complex___int128)) var___CFLOAT64 __attribute__ ((unused));
  vol_var___CFLOAT64 = pow (vol_var__Float64, vol_var__Complex___int128);
}
#endif
#if defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_pow_606 (void)
{
  extern typeof (pow (vol_var__Float64, vol_var_unsigned___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = pow (vol_var__Float64, vol_var_unsigned___int128);
}
#endif
#if defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_pow_607 (void)
{
  extern typeof (pow (vol_var__Float64, vol_var__Complex_unsigned___int128)) var___CFLOAT64 __attribute__ ((unused));
  vol_var___CFLOAT64 = pow (vol_var__Float64, vol_var__Complex_unsigned___int128);
}
#endif
#if defined HUGE_VAL_F64
static void
test_pow_608 (void)
{
  extern typeof (pow (vol_var__Float64, vol_var_enum_e)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = pow (vol_var__Float64, vol_var_enum_e);
}
#endif
#if defined HUGE_VAL_F64
static void
test_pow_609 (void)
{
  extern typeof (pow (vol_var__Float64, vol_var__Bool)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = pow (vol_var__Float64, vol_var__Bool);
}
#endif
#if defined HUGE_VAL_F64
static void
test_pow_610 (void)
{
  extern typeof (pow (vol_var__Float64, vol_var_bit_field)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = pow (vol_var__Float64, vol_var_bit_field);
}
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F64
static void
test_pow_611 (void)
{
  extern typeof (pow (vol_var___CFLOAT64, vol_var__Float16)) var___CFLOAT64 __attribute__ ((unused));
  vol_var___CFLOAT64 = pow (vol_var___CFLOAT64, vol_var__Float16);
}
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F64
static void
test_pow_612 (void)
{
  extern typeof (pow (vol_var___CFLOAT64, vol_var___CFLOAT16)) var___CFLOAT64 __attribute__ ((unused));
  vol_var___CFLOAT64 = pow (vol_var___CFLOAT64, vol_var___CFLOAT16);
}
#endif
#if defined HUGE_VAL_F64
static void
test_pow_613 (void)
{
  extern typeof (pow (vol_var___CFLOAT64, vol_var_float)) var___CFLOAT64 __attribute__ ((unused));
  vol_var___CFLOAT64 = pow (vol_var___CFLOAT64, vol_var_float);
}
#endif
#if defined HUGE_VAL_F64
static void
test_pow_614 (void)
{
  extern typeof (pow (vol_var___CFLOAT64, vol_var__Complex_float)) var___CFLOAT64 __attribute__ ((unused));
  vol_var___CFLOAT64 = pow (vol_var___CFLOAT64, vol_var__Complex_float);
}
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F64
static void
test_pow_615 (void)
{
  extern typeof (pow (vol_var___CFLOAT64, vol_var__Float32)) var___CFLOAT64 __attribute__ ((unused));
  vol_var___CFLOAT64 = pow (vol_var___CFLOAT64, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F64
static void
test_pow_616 (void)
{
  extern typeof (pow (vol_var___CFLOAT64, vol_var___CFLOAT32)) var___CFLOAT64 __attribute__ ((unused));
  vol_var___CFLOAT64 = pow (vol_var___CFLOAT64, vol_var___CFLOAT32);
}
#endif
#if defined HUGE_VAL_F32X && defined HUGE_VAL_F64
static void
test_pow_617 (void)
{
  extern typeof (pow (vol_var___CFLOAT64, vol_var__Float32x)) var___CFLOAT64 __attribute__ ((unused));
  vol_var___CFLOAT64 = pow (vol_var___CFLOAT64, vol_var__Float32x);
}
#endif
#if defined HUGE_VAL_F32X && defined HUGE_VAL_F64
static void
test_pow_618 (void)
{
  extern typeof (pow (vol_var___CFLOAT64, vol_var___CFLOAT32X)) var___CFLOAT64 __attribute__ ((unused));
  vol_var___CFLOAT64 = pow (vol_var___CFLOAT64, vol_var___CFLOAT32X);
}
#endif
#if defined HUGE_VAL_F64
static void
test_pow_619 (void)
{
  extern typeof (pow (vol_var___CFLOAT64, vol_var_double)) var___CFLOAT64 __attribute__ ((unused));
  vol_var___CFLOAT64 = pow (vol_var___CFLOAT64, vol_var_double);
}
#endif
#if defined HUGE_VAL_F64
static void
test_pow_620 (void)
{
  extern typeof (pow (vol_var___CFLOAT64, vol_var__Complex_double)) var___CFLOAT64 __attribute__ ((unused));
  vol_var___CFLOAT64 = pow (vol_var___CFLOAT64, vol_var__Complex_double);
}
#endif
#if defined HUGE_VAL_F64
static void
test_pow_621 (void)
{
  extern typeof (pow (vol_var___CFLOAT64, vol_var_long_double)) var_complex_long_double_Float64 __attribute__ ((unused));
  vol_var_complex_long_double_Float64 = pow (vol_var___CFLOAT64, vol_var_long_double);
}
#endif
#if defined HUGE_VAL_F64
static void
test_pow_622 (void)
{
  extern typeof (pow (vol_var___CFLOAT64, vol_var__Complex_long_double)) var_complex_long_double_Float64 __attribute__ ((unused));
  vol_var_complex_long_double_Float64 = pow (vol_var___CFLOAT64, vol_var__Complex_long_double);
}
#endif
#if defined HUGE_VAL_F64
static void
test_pow_623 (void)
{
  extern typeof (pow (vol_var___CFLOAT64, vol_var__Float64)) var___CFLOAT64 __attribute__ ((unused));
  vol_var___CFLOAT64 = pow (vol_var___CFLOAT64, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64
static void
test_pow_624 (void)
{
  extern typeof (pow (vol_var___CFLOAT64, vol_var___CFLOAT64)) var___CFLOAT64 __attribute__ ((unused));
  vol_var___CFLOAT64 = pow (vol_var___CFLOAT64, vol_var___CFLOAT64);
}
#endif
#if defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
static void
test_pow_625 (void)
{
  extern typeof (pow (vol_var___CFLOAT64, vol_var__Float64x)) var___CFLOAT64X __attribute__ ((unused));
  vol_var___CFLOAT64X = pow (vol_var___CFLOAT64, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
static void
test_pow_626 (void)
{
  extern typeof (pow (vol_var___CFLOAT64, vol_var___CFLOAT64X)) var___CFLOAT64X __attribute__ ((unused));
  vol_var___CFLOAT64X = pow (vol_var___CFLOAT64, vol_var___CFLOAT64X);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F64
static void
test_pow_627 (void)
{
  extern typeof (pow (vol_var___CFLOAT64, vol_var__Float128)) var___CFLOAT128 __attribute__ ((unused));
  vol_var___CFLOAT128 = pow (vol_var___CFLOAT64, vol_var__Float128);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F64
static void
test_pow_628 (void)
{
  extern typeof (pow (vol_var___CFLOAT64, vol_var___CFLOAT128)) var___CFLOAT128 __attribute__ ((unused));
  vol_var___CFLOAT128 = pow (vol_var___CFLOAT64, vol_var___CFLOAT128);
}
#endif
#if defined HUGE_VAL_F64
static void
test_pow_629 (void)
{
  extern typeof (pow (vol_var___CFLOAT64, vol_var_char)) var___CFLOAT64 __attribute__ ((unused));
  vol_var___CFLOAT64 = pow (vol_var___CFLOAT64, vol_var_char);
}
#endif
#if defined HUGE_VAL_F64
static void
test_pow_630 (void)
{
  extern typeof (pow (vol_var___CFLOAT64, vol_var__Complex_char)) var___CFLOAT64 __attribute__ ((unused));
  vol_var___CFLOAT64 = pow (vol_var___CFLOAT64, vol_var__Complex_char);
}
#endif
#if defined HUGE_VAL_F64
static void
test_pow_631 (void)
{
  extern typeof (pow (vol_var___CFLOAT64, vol_var_signed_char)) var___CFLOAT64 __attribute__ ((unused));
  vol_var___CFLOAT64 = pow (vol_var___CFLOAT64, vol_var_signed_char);
}
#endif
#if defined HUGE_VAL_F64
static void
test_pow_632 (void)
{
  extern typeof (pow (vol_var___CFLOAT64, vol_var__Complex_signed_char)) var___CFLOAT64 __attribute__ ((unused));
  vol_var___CFLOAT64 = pow (vol_var___CFLOAT64, vol_var__Complex_signed_char);
}
#endif
#if defined HUGE_VAL_F64
static void
test_pow_633 (void)
{
  extern typeof (pow (vol_var___CFLOAT64, vol_var_unsigned_char)) var___CFLOAT64 __attribute__ ((unused));
  vol_var___CFLOAT64 = pow (vol_var___CFLOAT64, vol_var_unsigned_char);
}
#endif
#if defined HUGE_VAL_F64
static void
test_pow_634 (void)
{
  extern typeof (pow (vol_var___CFLOAT64, vol_var__Complex_unsigned_char)) var___CFLOAT64 __attribute__ ((unused));
  vol_var___CFLOAT64 = pow (vol_var___CFLOAT64, vol_var__Complex_unsigned_char);
}
#endif
#if defined HUGE_VAL_F64
static void
test_pow_635 (void)
{
  extern typeof (pow (vol_var___CFLOAT64, vol_var_short_int)) var___CFLOAT64 __attribute__ ((unused));
  vol_var___CFLOAT64 = pow (vol_var___CFLOAT64, vol_var_short_int);
}
#endif
#if defined HUGE_VAL_F64
static void
test_pow_636 (void)
{
  extern typeof (pow (vol_var___CFLOAT64, vol_var__Complex_short_int)) var___CFLOAT64 __attribute__ ((unused));
  vol_var___CFLOAT64 = pow (vol_var___CFLOAT64, vol_var__Complex_short_int);
}
#endif
#if defined HUGE_VAL_F64
static void
test_pow_637 (void)
{
  extern typeof (pow (vol_var___CFLOAT64, vol_var_unsigned_short_int)) var___CFLOAT64 __attribute__ ((unused));
  vol_var___CFLOAT64 = pow (vol_var___CFLOAT64, vol_var_unsigned_short_int);
}
#endif
#if defined HUGE_VAL_F64
static void
test_pow_638 (void)
{
  extern typeof (pow (vol_var___CFLOAT64, vol_var__Complex_unsigned_short_int)) var___CFLOAT64 __attribute__ ((unused));
  vol_var___CFLOAT64 = pow (vol_var___CFLOAT64, vol_var__Complex_unsigned_short_int);
}
#endif
#if defined HUGE_VAL_F64
static void
test_pow_639 (void)
{
  extern typeof (pow (vol_var___CFLOAT64, vol_var_int)) var___CFLOAT64 __attribute__ ((unused));
  vol_var___CFLOAT64 = pow (vol_var___CFLOAT64, vol_var_int);
}
#endif
#if defined HUGE_VAL_F64
static void
test_pow_640 (void)
{
  extern typeof (pow (vol_var___CFLOAT64, vol_var__Complex_int)) var___CFLOAT64 __attribute__ ((unused));
  vol_var___CFLOAT64 = pow (vol_var___CFLOAT64, vol_var__Complex_int);
}
#endif
#if defined HUGE_VAL_F64
static void
test_pow_641 (void)
{
  extern typeof (pow (vol_var___CFLOAT64, vol_var_unsigned_int)) var___CFLOAT64 __attribute__ ((unused));
  vol_var___CFLOAT64 = pow (vol_var___CFLOAT64, vol_var_unsigned_int);
}
#endif
#if defined HUGE_VAL_F64
static void
test_pow_642 (void)
{
  extern typeof (pow (vol_var___CFLOAT64, vol_var__Complex_unsigned_int)) var___CFLOAT64 __attribute__ ((unused));
  vol_var___CFLOAT64 = pow (vol_var___CFLOAT64, vol_var__Complex_unsigned_int);
}
#endif
#if defined HUGE_VAL_F64
static void
test_pow_643 (void)
{
  extern typeof (pow (vol_var___CFLOAT64, vol_var_long_int)) var___CFLOAT64 __attribute__ ((unused));
  vol_var___CFLOAT64 = pow (vol_var___CFLOAT64, vol_var_long_int);
}
#endif
#if defined HUGE_VAL_F64
static void
test_pow_644 (void)
{
  extern typeof (pow (vol_var___CFLOAT64, vol_var__Complex_long_int)) var___CFLOAT64 __attribute__ ((unused));
  vol_var___CFLOAT64 = pow (vol_var___CFLOAT64, vol_var__Complex_long_int);
}
#endif
#if defined HUGE_VAL_F64
static void
test_pow_645 (void)
{
  extern typeof (pow (vol_var___CFLOAT64, vol_var_unsigned_long_int)) var___CFLOAT64 __attribute__ ((unused));
  vol_var___CFLOAT64 = pow (vol_var___CFLOAT64, vol_var_unsigned_long_int);
}
#endif
#if defined HUGE_VAL_F64
static void
test_pow_646 (void)
{
  extern typeof (pow (vol_var___CFLOAT64, vol_var__Complex_unsigned_long_int)) var___CFLOAT64 __attribute__ ((unused));
  vol_var___CFLOAT64 = pow (vol_var___CFLOAT64, vol_var__Complex_unsigned_long_int);
}
#endif
#if defined HUGE_VAL_F64
static void
test_pow_647 (void)
{
  extern typeof (pow (vol_var___CFLOAT64, vol_var_long_long_int)) var___CFLOAT64 __attribute__ ((unused));
  vol_var___CFLOAT64 = pow (vol_var___CFLOAT64, vol_var_long_long_int);
}
#endif
#if defined HUGE_VAL_F64
static void
test_pow_648 (void)
{
  extern typeof (pow (vol_var___CFLOAT64, vol_var__Complex_long_long_int)) var___CFLOAT64 __attribute__ ((unused));
  vol_var___CFLOAT64 = pow (vol_var___CFLOAT64, vol_var__Complex_long_long_int);
}
#endif
#if defined HUGE_VAL_F64
static void
test_pow_649 (void)
{
  extern typeof (pow (vol_var___CFLOAT64, vol_var_unsigned_long_long_int)) var___CFLOAT64 __attribute__ ((unused));
  vol_var___CFLOAT64 = pow (vol_var___CFLOAT64, vol_var_unsigned_long_long_int);
}
#endif
#if defined HUGE_VAL_F64
static void
test_pow_650 (void)
{
  extern typeof (pow (vol_var___CFLOAT64, vol_var__Complex_unsigned_long_long_int)) var___CFLOAT64 __attribute__ ((unused));
  vol_var___CFLOAT64 = pow (vol_var___CFLOAT64, vol_var__Complex_unsigned_long_long_int);
}
#endif
#if defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_pow_651 (void)
{
  extern typeof (pow (vol_var___CFLOAT64, vol_var___int128)) var___CFLOAT64 __attribute__ ((unused));
  vol_var___CFLOAT64 = pow (vol_var___CFLOAT64, vol_var___int128);
}
#endif
#if defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_pow_652 (void)
{
  extern typeof (pow (vol_var___CFLOAT64, vol_var__Complex___int128)) var___CFLOAT64 __attribute__ ((unused));
  vol_var___CFLOAT64 = pow (vol_var___CFLOAT64, vol_var__Complex___int128);
}
#endif
#if defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_pow_653 (void)
{
  extern typeof (pow (vol_var___CFLOAT64, vol_var_unsigned___int128)) var___CFLOAT64 __attribute__ ((unused));
  vol_var___CFLOAT64 = pow (vol_var___CFLOAT64, vol_var_unsigned___int128);
}
#endif
#if defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_pow_654 (void)
{
  extern typeof (pow (vol_var___CFLOAT64, vol_var__Complex_unsigned___int128)) var___CFLOAT64 __attribute__ ((unused));
  vol_var___CFLOAT64 = pow (vol_var___CFLOAT64, vol_var__Complex_unsigned___int128);
}
#endif
#if defined HUGE_VAL_F64
static void
test_pow_655 (void)
{
  extern typeof (pow (vol_var___CFLOAT64, vol_var_enum_e)) var___CFLOAT64 __attribute__ ((unused));
  vol_var___CFLOAT64 = pow (vol_var___CFLOAT64, vol_var_enum_e);
}
#endif
#if defined HUGE_VAL_F64
static void
test_pow_656 (void)
{
  extern typeof (pow (vol_var___CFLOAT64, vol_var__Bool)) var___CFLOAT64 __attribute__ ((unused));
  vol_var___CFLOAT64 = pow (vol_var___CFLOAT64, vol_var__Bool);
}
#endif
#if defined HUGE_VAL_F64
static void
test_pow_657 (void)
{
  extern typeof (pow (vol_var___CFLOAT64, vol_var_bit_field)) var___CFLOAT64 __attribute__ ((unused));
  vol_var___CFLOAT64 = pow (vol_var___CFLOAT64, vol_var_bit_field);
}
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
static void
test_pow_658 (void)
{
  extern typeof (pow (vol_var__Float64x, vol_var__Float16)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = pow (vol_var__Float64x, vol_var__Float16);
}
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
static void
test_pow_659 (void)
{
  extern typeof (pow (vol_var__Float64x, vol_var___CFLOAT16)) var___CFLOAT64X __attribute__ ((unused));
  vol_var___CFLOAT64X = pow (vol_var__Float64x, vol_var___CFLOAT16);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_pow_660 (void)
{
  extern typeof (pow (vol_var__Float64x, vol_var_float)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = pow (vol_var__Float64x, vol_var_float);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_pow_661 (void)
{
  extern typeof (pow (vol_var__Float64x, vol_var__Complex_float)) var___CFLOAT64X __attribute__ ((unused));
  vol_var___CFLOAT64X = pow (vol_var__Float64x, vol_var__Complex_float);
}
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
static void
test_pow_662 (void)
{
  extern typeof (pow (vol_var__Float64x, vol_var__Float32)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = pow (vol_var__Float64x, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
static void
test_pow_663 (void)
{
  extern typeof (pow (vol_var__Float64x, vol_var___CFLOAT32)) var___CFLOAT64X __attribute__ ((unused));
  vol_var___CFLOAT64X = pow (vol_var__Float64x, vol_var___CFLOAT32);
}
#endif
#if defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
static void
test_pow_664 (void)
{
  extern typeof (pow (vol_var__Float64x, vol_var__Float32x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = pow (vol_var__Float64x, vol_var__Float32x);
}
#endif
#if defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
static void
test_pow_665 (void)
{
  extern typeof (pow (vol_var__Float64x, vol_var___CFLOAT32X)) var___CFLOAT64X __attribute__ ((unused));
  vol_var___CFLOAT64X = pow (vol_var__Float64x, vol_var___CFLOAT32X);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_pow_666 (void)
{
  extern typeof (pow (vol_var__Float64x, vol_var_double)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = pow (vol_var__Float64x, vol_var_double);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_pow_667 (void)
{
  extern typeof (pow (vol_var__Float64x, vol_var__Complex_double)) var___CFLOAT64X __attribute__ ((unused));
  vol_var___CFLOAT64X = pow (vol_var__Float64x, vol_var__Complex_double);
}
#endif
#if (LDBL_MANT_DIG != 106) && defined HUGE_VAL_F64X
static void
test_pow_668 (void)
{
  extern typeof (pow (vol_var__Float64x, vol_var_long_double)) var_long_double_Float64x __attribute__ ((unused));
  vol_var_long_double_Float64x = pow (vol_var__Float64x, vol_var_long_double);
}
#endif
#if (LDBL_MANT_DIG != 106) && defined HUGE_VAL_F64X
static void
test_pow_669 (void)
{
  extern typeof (pow (vol_var__Float64x, vol_var__Complex_long_double)) var_complex_long_double_Float64x __attribute__ ((unused));
  vol_var_complex_long_double_Float64x = pow (vol_var__Float64x, vol_var__Complex_long_double);
}
#endif
#if defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
static void
test_pow_670 (void)
{
  extern typeof (pow (vol_var__Float64x, vol_var__Float64)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = pow (vol_var__Float64x, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
static void
test_pow_671 (void)
{
  extern typeof (pow (vol_var__Float64x, vol_var___CFLOAT64)) var___CFLOAT64X __attribute__ ((unused));
  vol_var___CFLOAT64X = pow (vol_var__Float64x, vol_var___CFLOAT64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_pow_672 (void)
{
  extern typeof (pow (vol_var__Float64x, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = pow (vol_var__Float64x, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_pow_673 (void)
{
  extern typeof (pow (vol_var__Float64x, vol_var___CFLOAT64X)) var___CFLOAT64X __attribute__ ((unused));
  vol_var___CFLOAT64X = pow (vol_var__Float64x, vol_var___CFLOAT64X);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
static void
test_pow_674 (void)
{
  extern typeof (pow (vol_var__Float64x, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = pow (vol_var__Float64x, vol_var__Float128);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
static void
test_pow_675 (void)
{
  extern typeof (pow (vol_var__Float64x, vol_var___CFLOAT128)) var___CFLOAT128 __attribute__ ((unused));
  vol_var___CFLOAT128 = pow (vol_var__Float64x, vol_var___CFLOAT128);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_pow_676 (void)
{
  extern typeof (pow (vol_var__Float64x, vol_var_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = pow (vol_var__Float64x, vol_var_char);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_pow_677 (void)
{
  extern typeof (pow (vol_var__Float64x, vol_var__Complex_char)) var___CFLOAT64X __attribute__ ((unused));
  vol_var___CFLOAT64X = pow (vol_var__Float64x, vol_var__Complex_char);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_pow_678 (void)
{
  extern typeof (pow (vol_var__Float64x, vol_var_signed_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = pow (vol_var__Float64x, vol_var_signed_char);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_pow_679 (void)
{
  extern typeof (pow (vol_var__Float64x, vol_var__Complex_signed_char)) var___CFLOAT64X __attribute__ ((unused));
  vol_var___CFLOAT64X = pow (vol_var__Float64x, vol_var__Complex_signed_char);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_pow_680 (void)
{
  extern typeof (pow (vol_var__Float64x, vol_var_unsigned_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = pow (vol_var__Float64x, vol_var_unsigned_char);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_pow_681 (void)
{
  extern typeof (pow (vol_var__Float64x, vol_var__Complex_unsigned_char)) var___CFLOAT64X __attribute__ ((unused));
  vol_var___CFLOAT64X = pow (vol_var__Float64x, vol_var__Complex_unsigned_char);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_pow_682 (void)
{
  extern typeof (pow (vol_var__Float64x, vol_var_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = pow (vol_var__Float64x, vol_var_short_int);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_pow_683 (void)
{
  extern typeof (pow (vol_var__Float64x, vol_var__Complex_short_int)) var___CFLOAT64X __attribute__ ((unused));
  vol_var___CFLOAT64X = pow (vol_var__Float64x, vol_var__Complex_short_int);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_pow_684 (void)
{
  extern typeof (pow (vol_var__Float64x, vol_var_unsigned_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = pow (vol_var__Float64x, vol_var_unsigned_short_int);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_pow_685 (void)
{
  extern typeof (pow (vol_var__Float64x, vol_var__Complex_unsigned_short_int)) var___CFLOAT64X __attribute__ ((unused));
  vol_var___CFLOAT64X = pow (vol_var__Float64x, vol_var__Complex_unsigned_short_int);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_pow_686 (void)
{
  extern typeof (pow (vol_var__Float64x, vol_var_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = pow (vol_var__Float64x, vol_var_int);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_pow_687 (void)
{
  extern typeof (pow (vol_var__Float64x, vol_var__Complex_int)) var___CFLOAT64X __attribute__ ((unused));
  vol_var___CFLOAT64X = pow (vol_var__Float64x, vol_var__Complex_int);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_pow_688 (void)
{
  extern typeof (pow (vol_var__Float64x, vol_var_unsigned_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = pow (vol_var__Float64x, vol_var_unsigned_int);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_pow_689 (void)
{
  extern typeof (pow (vol_var__Float64x, vol_var__Complex_unsigned_int)) var___CFLOAT64X __attribute__ ((unused));
  vol_var___CFLOAT64X = pow (vol_var__Float64x, vol_var__Complex_unsigned_int);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_pow_690 (void)
{
  extern typeof (pow (vol_var__Float64x, vol_var_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = pow (vol_var__Float64x, vol_var_long_int);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_pow_691 (void)
{
  extern typeof (pow (vol_var__Float64x, vol_var__Complex_long_int)) var___CFLOAT64X __attribute__ ((unused));
  vol_var___CFLOAT64X = pow (vol_var__Float64x, vol_var__Complex_long_int);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_pow_692 (void)
{
  extern typeof (pow (vol_var__Float64x, vol_var_unsigned_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = pow (vol_var__Float64x, vol_var_unsigned_long_int);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_pow_693 (void)
{
  extern typeof (pow (vol_var__Float64x, vol_var__Complex_unsigned_long_int)) var___CFLOAT64X __attribute__ ((unused));
  vol_var___CFLOAT64X = pow (vol_var__Float64x, vol_var__Complex_unsigned_long_int);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_pow_694 (void)
{
  extern typeof (pow (vol_var__Float64x, vol_var_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = pow (vol_var__Float64x, vol_var_long_long_int);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_pow_695 (void)
{
  extern typeof (pow (vol_var__Float64x, vol_var__Complex_long_long_int)) var___CFLOAT64X __attribute__ ((unused));
  vol_var___CFLOAT64X = pow (vol_var__Float64x, vol_var__Complex_long_long_int);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_pow_696 (void)
{
  extern typeof (pow (vol_var__Float64x, vol_var_unsigned_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = pow (vol_var__Float64x, vol_var_unsigned_long_long_int);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_pow_697 (void)
{
  extern typeof (pow (vol_var__Float64x, vol_var__Complex_unsigned_long_long_int)) var___CFLOAT64X __attribute__ ((unused));
  vol_var___CFLOAT64X = pow (vol_var__Float64x, vol_var__Complex_unsigned_long_long_int);
}
#endif
#if defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_pow_698 (void)
{
  extern typeof (pow (vol_var__Float64x, vol_var___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = pow (vol_var__Float64x, vol_var___int128);
}
#endif
#if defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_pow_699 (void)
{
  extern typeof (pow (vol_var__Float64x, vol_var__Complex___int128)) var___CFLOAT64X __attribute__ ((unused));
  vol_var___CFLOAT64X = pow (vol_var__Float64x, vol_var__Complex___int128);
}
#endif
#if defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_pow_700 (void)
{
  extern typeof (pow (vol_var__Float64x, vol_var_unsigned___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = pow (vol_var__Float64x, vol_var_unsigned___int128);
}
#endif
#if defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_pow_701 (void)
{
  extern typeof (pow (vol_var__Float64x, vol_var__Complex_unsigned___int128)) var___CFLOAT64X __attribute__ ((unused));
  vol_var___CFLOAT64X = pow (vol_var__Float64x, vol_var__Complex_unsigned___int128);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_pow_702 (void)
{
  extern typeof (pow (vol_var__Float64x, vol_var_enum_e)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = pow (vol_var__Float64x, vol_var_enum_e);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_pow_703 (void)
{
  extern typeof (pow (vol_var__Float64x, vol_var__Bool)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = pow (vol_var__Float64x, vol_var__Bool);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_pow_704 (void)
{
  extern typeof (pow (vol_var__Float64x, vol_var_bit_field)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = pow (vol_var__Float64x, vol_var_bit_field);
}
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
static void
test_pow_705 (void)
{
  extern typeof (pow (vol_var___CFLOAT64X, vol_var__Float16)) var___CFLOAT64X __attribute__ ((unused));
  vol_var___CFLOAT64X = pow (vol_var___CFLOAT64X, vol_var__Float16);
}
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
static void
test_pow_706 (void)
{
  extern typeof (pow (vol_var___CFLOAT64X, vol_var___CFLOAT16)) var___CFLOAT64X __attribute__ ((unused));
  vol_var___CFLOAT64X = pow (vol_var___CFLOAT64X, vol_var___CFLOAT16);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_pow_707 (void)
{
  extern typeof (pow (vol_var___CFLOAT64X, vol_var_float)) var___CFLOAT64X __attribute__ ((unused));
  vol_var___CFLOAT64X = pow (vol_var___CFLOAT64X, vol_var_float);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_pow_708 (void)
{
  extern typeof (pow (vol_var___CFLOAT64X, vol_var__Complex_float)) var___CFLOAT64X __attribute__ ((unused));
  vol_var___CFLOAT64X = pow (vol_var___CFLOAT64X, vol_var__Complex_float);
}
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
static void
test_pow_709 (void)
{
  extern typeof (pow (vol_var___CFLOAT64X, vol_var__Float32)) var___CFLOAT64X __attribute__ ((unused));
  vol_var___CFLOAT64X = pow (vol_var___CFLOAT64X, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
static void
test_pow_710 (void)
{
  extern typeof (pow (vol_var___CFLOAT64X, vol_var___CFLOAT32)) var___CFLOAT64X __attribute__ ((unused));
  vol_var___CFLOAT64X = pow (vol_var___CFLOAT64X, vol_var___CFLOAT32);
}
#endif
#if defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
static void
test_pow_711 (void)
{
  extern typeof (pow (vol_var___CFLOAT64X, vol_var__Float32x)) var___CFLOAT64X __attribute__ ((unused));
  vol_var___CFLOAT64X = pow (vol_var___CFLOAT64X, vol_var__Float32x);
}
#endif
#if defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
static void
test_pow_712 (void)
{
  extern typeof (pow (vol_var___CFLOAT64X, vol_var___CFLOAT32X)) var___CFLOAT64X __attribute__ ((unused));
  vol_var___CFLOAT64X = pow (vol_var___CFLOAT64X, vol_var___CFLOAT32X);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_pow_713 (void)
{
  extern typeof (pow (vol_var___CFLOAT64X, vol_var_double)) var___CFLOAT64X __attribute__ ((unused));
  vol_var___CFLOAT64X = pow (vol_var___CFLOAT64X, vol_var_double);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_pow_714 (void)
{
  extern typeof (pow (vol_var___CFLOAT64X, vol_var__Complex_double)) var___CFLOAT64X __attribute__ ((unused));
  vol_var___CFLOAT64X = pow (vol_var___CFLOAT64X, vol_var__Complex_double);
}
#endif
#if (LDBL_MANT_DIG != 106) && defined HUGE_VAL_F64X
static void
test_pow_715 (void)
{
  extern typeof (pow (vol_var___CFLOAT64X, vol_var_long_double)) var_complex_long_double_Float64x __attribute__ ((unused));
  vol_var_complex_long_double_Float64x = pow (vol_var___CFLOAT64X, vol_var_long_double);
}
#endif
#if (LDBL_MANT_DIG != 106) && defined HUGE_VAL_F64X
static void
test_pow_716 (void)
{
  extern typeof (pow (vol_var___CFLOAT64X, vol_var__Complex_long_double)) var_complex_long_double_Float64x __attribute__ ((unused));
  vol_var_complex_long_double_Float64x = pow (vol_var___CFLOAT64X, vol_var__Complex_long_double);
}
#endif
#if defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
static void
test_pow_717 (void)
{
  extern typeof (pow (vol_var___CFLOAT64X, vol_var__Float64)) var___CFLOAT64X __attribute__ ((unused));
  vol_var___CFLOAT64X = pow (vol_var___CFLOAT64X, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
static void
test_pow_718 (void)
{
  extern typeof (pow (vol_var___CFLOAT64X, vol_var___CFLOAT64)) var___CFLOAT64X __attribute__ ((unused));
  vol_var___CFLOAT64X = pow (vol_var___CFLOAT64X, vol_var___CFLOAT64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_pow_719 (void)
{
  extern typeof (pow (vol_var___CFLOAT64X, vol_var__Float64x)) var___CFLOAT64X __attribute__ ((unused));
  vol_var___CFLOAT64X = pow (vol_var___CFLOAT64X, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_pow_720 (void)
{
  extern typeof (pow (vol_var___CFLOAT64X, vol_var___CFLOAT64X)) var___CFLOAT64X __attribute__ ((unused));
  vol_var___CFLOAT64X = pow (vol_var___CFLOAT64X, vol_var___CFLOAT64X);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
static void
test_pow_721 (void)
{
  extern typeof (pow (vol_var___CFLOAT64X, vol_var__Float128)) var___CFLOAT128 __attribute__ ((unused));
  vol_var___CFLOAT128 = pow (vol_var___CFLOAT64X, vol_var__Float128);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
static void
test_pow_722 (void)
{
  extern typeof (pow (vol_var___CFLOAT64X, vol_var___CFLOAT128)) var___CFLOAT128 __attribute__ ((unused));
  vol_var___CFLOAT128 = pow (vol_var___CFLOAT64X, vol_var___CFLOAT128);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_pow_723 (void)
{
  extern typeof (pow (vol_var___CFLOAT64X, vol_var_char)) var___CFLOAT64X __attribute__ ((unused));
  vol_var___CFLOAT64X = pow (vol_var___CFLOAT64X, vol_var_char);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_pow_724 (void)
{
  extern typeof (pow (vol_var___CFLOAT64X, vol_var__Complex_char)) var___CFLOAT64X __attribute__ ((unused));
  vol_var___CFLOAT64X = pow (vol_var___CFLOAT64X, vol_var__Complex_char);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_pow_725 (void)
{
  extern typeof (pow (vol_var___CFLOAT64X, vol_var_signed_char)) var___CFLOAT64X __attribute__ ((unused));
  vol_var___CFLOAT64X = pow (vol_var___CFLOAT64X, vol_var_signed_char);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_pow_726 (void)
{
  extern typeof (pow (vol_var___CFLOAT64X, vol_var__Complex_signed_char)) var___CFLOAT64X __attribute__ ((unused));
  vol_var___CFLOAT64X = pow (vol_var___CFLOAT64X, vol_var__Complex_signed_char);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_pow_727 (void)
{
  extern typeof (pow (vol_var___CFLOAT64X, vol_var_unsigned_char)) var___CFLOAT64X __attribute__ ((unused));
  vol_var___CFLOAT64X = pow (vol_var___CFLOAT64X, vol_var_unsigned_char);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_pow_728 (void)
{
  extern typeof (pow (vol_var___CFLOAT64X, vol_var__Complex_unsigned_char)) var___CFLOAT64X __attribute__ ((unused));
  vol_var___CFLOAT64X = pow (vol_var___CFLOAT64X, vol_var__Complex_unsigned_char);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_pow_729 (void)
{
  extern typeof (pow (vol_var___CFLOAT64X, vol_var_short_int)) var___CFLOAT64X __attribute__ ((unused));
  vol_var___CFLOAT64X = pow (vol_var___CFLOAT64X, vol_var_short_int);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_pow_730 (void)
{
  extern typeof (pow (vol_var___CFLOAT64X, vol_var__Complex_short_int)) var___CFLOAT64X __attribute__ ((unused));
  vol_var___CFLOAT64X = pow (vol_var___CFLOAT64X, vol_var__Complex_short_int);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_pow_731 (void)
{
  extern typeof (pow (vol_var___CFLOAT64X, vol_var_unsigned_short_int)) var___CFLOAT64X __attribute__ ((unused));
  vol_var___CFLOAT64X = pow (vol_var___CFLOAT64X, vol_var_unsigned_short_int);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_pow_732 (void)
{
  extern typeof (pow (vol_var___CFLOAT64X, vol_var__Complex_unsigned_short_int)) var___CFLOAT64X __attribute__ ((unused));
  vol_var___CFLOAT64X = pow (vol_var___CFLOAT64X, vol_var__Complex_unsigned_short_int);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_pow_733 (void)
{
  extern typeof (pow (vol_var___CFLOAT64X, vol_var_int)) var___CFLOAT64X __attribute__ ((unused));
  vol_var___CFLOAT64X = pow (vol_var___CFLOAT64X, vol_var_int);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_pow_734 (void)
{
  extern typeof (pow (vol_var___CFLOAT64X, vol_var__Complex_int)) var___CFLOAT64X __attribute__ ((unused));
  vol_var___CFLOAT64X = pow (vol_var___CFLOAT64X, vol_var__Complex_int);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_pow_735 (void)
{
  extern typeof (pow (vol_var___CFLOAT64X, vol_var_unsigned_int)) var___CFLOAT64X __attribute__ ((unused));
  vol_var___CFLOAT64X = pow (vol_var___CFLOAT64X, vol_var_unsigned_int);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_pow_736 (void)
{
  extern typeof (pow (vol_var___CFLOAT64X, vol_var__Complex_unsigned_int)) var___CFLOAT64X __attribute__ ((unused));
  vol_var___CFLOAT64X = pow (vol_var___CFLOAT64X, vol_var__Complex_unsigned_int);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_pow_737 (void)
{
  extern typeof (pow (vol_var___CFLOAT64X, vol_var_long_int)) var___CFLOAT64X __attribute__ ((unused));
  vol_var___CFLOAT64X = pow (vol_var___CFLOAT64X, vol_var_long_int);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_pow_738 (void)
{
  extern typeof (pow (vol_var___CFLOAT64X, vol_var__Complex_long_int)) var___CFLOAT64X __attribute__ ((unused));
  vol_var___CFLOAT64X = pow (vol_var___CFLOAT64X, vol_var__Complex_long_int);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_pow_739 (void)
{
  extern typeof (pow (vol_var___CFLOAT64X, vol_var_unsigned_long_int)) var___CFLOAT64X __attribute__ ((unused));
  vol_var___CFLOAT64X = pow (vol_var___CFLOAT64X, vol_var_unsigned_long_int);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_pow_740 (void)
{
  extern typeof (pow (vol_var___CFLOAT64X, vol_var__Complex_unsigned_long_int)) var___CFLOAT64X __attribute__ ((unused));
  vol_var___CFLOAT64X = pow (vol_var___CFLOAT64X, vol_var__Complex_unsigned_long_int);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_pow_741 (void)
{
  extern typeof (pow (vol_var___CFLOAT64X, vol_var_long_long_int)) var___CFLOAT64X __attribute__ ((unused));
  vol_var___CFLOAT64X = pow (vol_var___CFLOAT64X, vol_var_long_long_int);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_pow_742 (void)
{
  extern typeof (pow (vol_var___CFLOAT64X, vol_var__Complex_long_long_int)) var___CFLOAT64X __attribute__ ((unused));
  vol_var___CFLOAT64X = pow (vol_var___CFLOAT64X, vol_var__Complex_long_long_int);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_pow_743 (void)
{
  extern typeof (pow (vol_var___CFLOAT64X, vol_var_unsigned_long_long_int)) var___CFLOAT64X __attribute__ ((unused));
  vol_var___CFLOAT64X = pow (vol_var___CFLOAT64X, vol_var_unsigned_long_long_int);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_pow_744 (void)
{
  extern typeof (pow (vol_var___CFLOAT64X, vol_var__Complex_unsigned_long_long_int)) var___CFLOAT64X __attribute__ ((unused));
  vol_var___CFLOAT64X = pow (vol_var___CFLOAT64X, vol_var__Complex_unsigned_long_long_int);
}
#endif
#if defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_pow_745 (void)
{
  extern typeof (pow (vol_var___CFLOAT64X, vol_var___int128)) var___CFLOAT64X __attribute__ ((unused));
  vol_var___CFLOAT64X = pow (vol_var___CFLOAT64X, vol_var___int128);
}
#endif
#if defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_pow_746 (void)
{
  extern typeof (pow (vol_var___CFLOAT64X, vol_var__Complex___int128)) var___CFLOAT64X __attribute__ ((unused));
  vol_var___CFLOAT64X = pow (vol_var___CFLOAT64X, vol_var__Complex___int128);
}
#endif
#if defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_pow_747 (void)
{
  extern typeof (pow (vol_var___CFLOAT64X, vol_var_unsigned___int128)) var___CFLOAT64X __attribute__ ((unused));
  vol_var___CFLOAT64X = pow (vol_var___CFLOAT64X, vol_var_unsigned___int128);
}
#endif
#if defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_pow_748 (void)
{
  extern typeof (pow (vol_var___CFLOAT64X, vol_var__Complex_unsigned___int128)) var___CFLOAT64X __attribute__ ((unused));
  vol_var___CFLOAT64X = pow (vol_var___CFLOAT64X, vol_var__Complex_unsigned___int128);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_pow_749 (void)
{
  extern typeof (pow (vol_var___CFLOAT64X, vol_var_enum_e)) var___CFLOAT64X __attribute__ ((unused));
  vol_var___CFLOAT64X = pow (vol_var___CFLOAT64X, vol_var_enum_e);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_pow_750 (void)
{
  extern typeof (pow (vol_var___CFLOAT64X, vol_var__Bool)) var___CFLOAT64X __attribute__ ((unused));
  vol_var___CFLOAT64X = pow (vol_var___CFLOAT64X, vol_var__Bool);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_pow_751 (void)
{
  extern typeof (pow (vol_var___CFLOAT64X, vol_var_bit_field)) var___CFLOAT64X __attribute__ ((unused));
  vol_var___CFLOAT64X = pow (vol_var___CFLOAT64X, vol_var_bit_field);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F16
static void
test_pow_752 (void)
{
  extern typeof (pow (vol_var__Float128, vol_var__Float16)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = pow (vol_var__Float128, vol_var__Float16);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F16
static void
test_pow_753 (void)
{
  extern typeof (pow (vol_var__Float128, vol_var___CFLOAT16)) var___CFLOAT128 __attribute__ ((unused));
  vol_var___CFLOAT128 = pow (vol_var__Float128, vol_var___CFLOAT16);
}
#endif
#if defined HUGE_VAL_F128
static void
test_pow_754 (void)
{
  extern typeof (pow (vol_var__Float128, vol_var_float)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = pow (vol_var__Float128, vol_var_float);
}
#endif
#if defined HUGE_VAL_F128
static void
test_pow_755 (void)
{
  extern typeof (pow (vol_var__Float128, vol_var__Complex_float)) var___CFLOAT128 __attribute__ ((unused));
  vol_var___CFLOAT128 = pow (vol_var__Float128, vol_var__Complex_float);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F32
static void
test_pow_756 (void)
{
  extern typeof (pow (vol_var__Float128, vol_var__Float32)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = pow (vol_var__Float128, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F32
static void
test_pow_757 (void)
{
  extern typeof (pow (vol_var__Float128, vol_var___CFLOAT32)) var___CFLOAT128 __attribute__ ((unused));
  vol_var___CFLOAT128 = pow (vol_var__Float128, vol_var___CFLOAT32);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
static void
test_pow_758 (void)
{
  extern typeof (pow (vol_var__Float128, vol_var__Float32x)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = pow (vol_var__Float128, vol_var__Float32x);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
static void
test_pow_759 (void)
{
  extern typeof (pow (vol_var__Float128, vol_var___CFLOAT32X)) var___CFLOAT128 __attribute__ ((unused));
  vol_var___CFLOAT128 = pow (vol_var__Float128, vol_var___CFLOAT32X);
}
#endif
#if defined HUGE_VAL_F128
static void
test_pow_760 (void)
{
  extern typeof (pow (vol_var__Float128, vol_var_double)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = pow (vol_var__Float128, vol_var_double);
}
#endif
#if defined HUGE_VAL_F128
static void
test_pow_761 (void)
{
  extern typeof (pow (vol_var__Float128, vol_var__Complex_double)) var___CFLOAT128 __attribute__ ((unused));
  vol_var___CFLOAT128 = pow (vol_var__Float128, vol_var__Complex_double);
}
#endif
#if (LDBL_MANT_DIG != 106) && defined HUGE_VAL_F128
static void
test_pow_762 (void)
{
  extern typeof (pow (vol_var__Float128, vol_var_long_double)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = pow (vol_var__Float128, vol_var_long_double);
}
#endif
#if (LDBL_MANT_DIG != 106) && defined HUGE_VAL_F128
static void
test_pow_763 (void)
{
  extern typeof (pow (vol_var__Float128, vol_var__Complex_long_double)) var___CFLOAT128 __attribute__ ((unused));
  vol_var___CFLOAT128 = pow (vol_var__Float128, vol_var__Complex_long_double);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F64
static void
test_pow_764 (void)
{
  extern typeof (pow (vol_var__Float128, vol_var__Float64)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = pow (vol_var__Float128, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F64
static void
test_pow_765 (void)
{
  extern typeof (pow (vol_var__Float128, vol_var___CFLOAT64)) var___CFLOAT128 __attribute__ ((unused));
  vol_var___CFLOAT128 = pow (vol_var__Float128, vol_var___CFLOAT64);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
static void
test_pow_766 (void)
{
  extern typeof (pow (vol_var__Float128, vol_var__Float64x)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = pow (vol_var__Float128, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
static void
test_pow_767 (void)
{
  extern typeof (pow (vol_var__Float128, vol_var___CFLOAT64X)) var___CFLOAT128 __attribute__ ((unused));
  vol_var___CFLOAT128 = pow (vol_var__Float128, vol_var___CFLOAT64X);
}
#endif
#if defined HUGE_VAL_F128
static void
test_pow_768 (void)
{
  extern typeof (pow (vol_var__Float128, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = pow (vol_var__Float128, vol_var__Float128);
}
#endif
#if defined HUGE_VAL_F128
static void
test_pow_769 (void)
{
  extern typeof (pow (vol_var__Float128, vol_var___CFLOAT128)) var___CFLOAT128 __attribute__ ((unused));
  vol_var___CFLOAT128 = pow (vol_var__Float128, vol_var___CFLOAT128);
}
#endif
#if defined HUGE_VAL_F128
static void
test_pow_770 (void)
{
  extern typeof (pow (vol_var__Float128, vol_var_char)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = pow (vol_var__Float128, vol_var_char);
}
#endif
#if defined HUGE_VAL_F128
static void
test_pow_771 (void)
{
  extern typeof (pow (vol_var__Float128, vol_var__Complex_char)) var___CFLOAT128 __attribute__ ((unused));
  vol_var___CFLOAT128 = pow (vol_var__Float128, vol_var__Complex_char);
}
#endif
#if defined HUGE_VAL_F128
static void
test_pow_772 (void)
{
  extern typeof (pow (vol_var__Float128, vol_var_signed_char)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = pow (vol_var__Float128, vol_var_signed_char);
}
#endif
#if defined HUGE_VAL_F128
static void
test_pow_773 (void)
{
  extern typeof (pow (vol_var__Float128, vol_var__Complex_signed_char)) var___CFLOAT128 __attribute__ ((unused));
  vol_var___CFLOAT128 = pow (vol_var__Float128, vol_var__Complex_signed_char);
}
#endif
#if defined HUGE_VAL_F128
static void
test_pow_774 (void)
{
  extern typeof (pow (vol_var__Float128, vol_var_unsigned_char)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = pow (vol_var__Float128, vol_var_unsigned_char);
}
#endif
#if defined HUGE_VAL_F128
static void
test_pow_775 (void)
{
  extern typeof (pow (vol_var__Float128, vol_var__Complex_unsigned_char)) var___CFLOAT128 __attribute__ ((unused));
  vol_var___CFLOAT128 = pow (vol_var__Float128, vol_var__Complex_unsigned_char);
}
#endif
#if defined HUGE_VAL_F128
static void
test_pow_776 (void)
{
  extern typeof (pow (vol_var__Float128, vol_var_short_int)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = pow (vol_var__Float128, vol_var_short_int);
}
#endif
#if defined HUGE_VAL_F128
static void
test_pow_777 (void)
{
  extern typeof (pow (vol_var__Float128, vol_var__Complex_short_int)) var___CFLOAT128 __attribute__ ((unused));
  vol_var___CFLOAT128 = pow (vol_var__Float128, vol_var__Complex_short_int);
}
#endif
#if defined HUGE_VAL_F128
static void
test_pow_778 (void)
{
  extern typeof (pow (vol_var__Float128, vol_var_unsigned_short_int)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = pow (vol_var__Float128, vol_var_unsigned_short_int);
}
#endif
#if defined HUGE_VAL_F128
static void
test_pow_779 (void)
{
  extern typeof (pow (vol_var__Float128, vol_var__Complex_unsigned_short_int)) var___CFLOAT128 __attribute__ ((unused));
  vol_var___CFLOAT128 = pow (vol_var__Float128, vol_var__Complex_unsigned_short_int);
}
#endif
#if defined HUGE_VAL_F128
static void
test_pow_780 (void)
{
  extern typeof (pow (vol_var__Float128, vol_var_int)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = pow (vol_var__Float128, vol_var_int);
}
#endif
#if defined HUGE_VAL_F128
static void
test_pow_781 (void)
{
  extern typeof (pow (vol_var__Float128, vol_var__Complex_int)) var___CFLOAT128 __attribute__ ((unused));
  vol_var___CFLOAT128 = pow (vol_var__Float128, vol_var__Complex_int);
}
#endif
#if defined HUGE_VAL_F128
static void
test_pow_782 (void)
{
  extern typeof (pow (vol_var__Float128, vol_var_unsigned_int)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = pow (vol_var__Float128, vol_var_unsigned_int);
}
#endif
#if defined HUGE_VAL_F128
static void
test_pow_783 (void)
{
  extern typeof (pow (vol_var__Float128, vol_var__Complex_unsigned_int)) var___CFLOAT128 __attribute__ ((unused));
  vol_var___CFLOAT128 = pow (vol_var__Float128, vol_var__Complex_unsigned_int);
}
#endif
#if defined HUGE_VAL_F128
static void
test_pow_784 (void)
{
  extern typeof (pow (vol_var__Float128, vol_var_long_int)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = pow (vol_var__Float128, vol_var_long_int);
}
#endif
#if defined HUGE_VAL_F128
static void
test_pow_785 (void)
{
  extern typeof (pow (vol_var__Float128, vol_var__Complex_long_int)) var___CFLOAT128 __attribute__ ((unused));
  vol_var___CFLOAT128 = pow (vol_var__Float128, vol_var__Complex_long_int);
}
#endif
#if defined HUGE_VAL_F128
static void
test_pow_786 (void)
{
  extern typeof (pow (vol_var__Float128, vol_var_unsigned_long_int)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = pow (vol_var__Float128, vol_var_unsigned_long_int);
}
#endif
#if defined HUGE_VAL_F128
static void
test_pow_787 (void)
{
  extern typeof (pow (vol_var__Float128, vol_var__Complex_unsigned_long_int)) var___CFLOAT128 __attribute__ ((unused));
  vol_var___CFLOAT128 = pow (vol_var__Float128, vol_var__Complex_unsigned_long_int);
}
#endif
#if defined HUGE_VAL_F128
static void
test_pow_788 (void)
{
  extern typeof (pow (vol_var__Float128, vol_var_long_long_int)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = pow (vol_var__Float128, vol_var_long_long_int);
}
#endif
#if defined HUGE_VAL_F128
static void
test_pow_789 (void)
{
  extern typeof (pow (vol_var__Float128, vol_var__Complex_long_long_int)) var___CFLOAT128 __attribute__ ((unused));
  vol_var___CFLOAT128 = pow (vol_var__Float128, vol_var__Complex_long_long_int);
}
#endif
#if defined HUGE_VAL_F128
static void
test_pow_790 (void)
{
  extern typeof (pow (vol_var__Float128, vol_var_unsigned_long_long_int)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = pow (vol_var__Float128, vol_var_unsigned_long_long_int);
}
#endif
#if defined HUGE_VAL_F128
static void
test_pow_791 (void)
{
  extern typeof (pow (vol_var__Float128, vol_var__Complex_unsigned_long_long_int)) var___CFLOAT128 __attribute__ ((unused));
  vol_var___CFLOAT128 = pow (vol_var__Float128, vol_var__Complex_unsigned_long_long_int);
}
#endif
#if defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_pow_792 (void)
{
  extern typeof (pow (vol_var__Float128, vol_var___int128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = pow (vol_var__Float128, vol_var___int128);
}
#endif
#if defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_pow_793 (void)
{
  extern typeof (pow (vol_var__Float128, vol_var__Complex___int128)) var___CFLOAT128 __attribute__ ((unused));
  vol_var___CFLOAT128 = pow (vol_var__Float128, vol_var__Complex___int128);
}
#endif
#if defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_pow_794 (void)
{
  extern typeof (pow (vol_var__Float128, vol_var_unsigned___int128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = pow (vol_var__Float128, vol_var_unsigned___int128);
}
#endif
#if defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_pow_795 (void)
{
  extern typeof (pow (vol_var__Float128, vol_var__Complex_unsigned___int128)) var___CFLOAT128 __attribute__ ((unused));
  vol_var___CFLOAT128 = pow (vol_var__Float128, vol_var__Complex_unsigned___int128);
}
#endif
#if defined HUGE_VAL_F128
static void
test_pow_796 (void)
{
  extern typeof (pow (vol_var__Float128, vol_var_enum_e)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = pow (vol_var__Float128, vol_var_enum_e);
}
#endif
#if defined HUGE_VAL_F128
static void
test_pow_797 (void)
{
  extern typeof (pow (vol_var__Float128, vol_var__Bool)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = pow (vol_var__Float128, vol_var__Bool);
}
#endif
#if defined HUGE_VAL_F128
static void
test_pow_798 (void)
{
  extern typeof (pow (vol_var__Float128, vol_var_bit_field)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = pow (vol_var__Float128, vol_var_bit_field);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F16
static void
test_pow_799 (void)
{
  extern typeof (pow (vol_var___CFLOAT128, vol_var__Float16)) var___CFLOAT128 __attribute__ ((unused));
  vol_var___CFLOAT128 = pow (vol_var___CFLOAT128, vol_var__Float16);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F16
static void
test_pow_800 (void)
{
  extern typeof (pow (vol_var___CFLOAT128, vol_var___CFLOAT16)) var___CFLOAT128 __attribute__ ((unused));
  vol_var___CFLOAT128 = pow (vol_var___CFLOAT128, vol_var___CFLOAT16);
}
#endif
#if defined HUGE_VAL_F128
static void
test_pow_801 (void)
{
  extern typeof (pow (vol_var___CFLOAT128, vol_var_float)) var___CFLOAT128 __attribute__ ((unused));
  vol_var___CFLOAT128 = pow (vol_var___CFLOAT128, vol_var_float);
}
#endif
#if defined HUGE_VAL_F128
static void
test_pow_802 (void)
{
  extern typeof (pow (vol_var___CFLOAT128, vol_var__Complex_float)) var___CFLOAT128 __attribute__ ((unused));
  vol_var___CFLOAT128 = pow (vol_var___CFLOAT128, vol_var__Complex_float);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F32
static void
test_pow_803 (void)
{
  extern typeof (pow (vol_var___CFLOAT128, vol_var__Float32)) var___CFLOAT128 __attribute__ ((unused));
  vol_var___CFLOAT128 = pow (vol_var___CFLOAT128, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F32
static void
test_pow_804 (void)
{
  extern typeof (pow (vol_var___CFLOAT128, vol_var___CFLOAT32)) var___CFLOAT128 __attribute__ ((unused));
  vol_var___CFLOAT128 = pow (vol_var___CFLOAT128, vol_var___CFLOAT32);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
static void
test_pow_805 (void)
{
  extern typeof (pow (vol_var___CFLOAT128, vol_var__Float32x)) var___CFLOAT128 __attribute__ ((unused));
  vol_var___CFLOAT128 = pow (vol_var___CFLOAT128, vol_var__Float32x);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
static void
test_pow_806 (void)
{
  extern typeof (pow (vol_var___CFLOAT128, vol_var___CFLOAT32X)) var___CFLOAT128 __attribute__ ((unused));
  vol_var___CFLOAT128 = pow (vol_var___CFLOAT128, vol_var___CFLOAT32X);
}
#endif
#if defined HUGE_VAL_F128
static void
test_pow_807 (void)
{
  extern typeof (pow (vol_var___CFLOAT128, vol_var_double)) var___CFLOAT128 __attribute__ ((unused));
  vol_var___CFLOAT128 = pow (vol_var___CFLOAT128, vol_var_double);
}
#endif
#if defined HUGE_VAL_F128
static void
test_pow_808 (void)
{
  extern typeof (pow (vol_var___CFLOAT128, vol_var__Complex_double)) var___CFLOAT128 __attribute__ ((unused));
  vol_var___CFLOAT128 = pow (vol_var___CFLOAT128, vol_var__Complex_double);
}
#endif
#if (LDBL_MANT_DIG != 106) && defined HUGE_VAL_F128
static void
test_pow_809 (void)
{
  extern typeof (pow (vol_var___CFLOAT128, vol_var_long_double)) var___CFLOAT128 __attribute__ ((unused));
  vol_var___CFLOAT128 = pow (vol_var___CFLOAT128, vol_var_long_double);
}
#endif
#if (LDBL_MANT_DIG != 106) && defined HUGE_VAL_F128
static void
test_pow_810 (void)
{
  extern typeof (pow (vol_var___CFLOAT128, vol_var__Complex_long_double)) var___CFLOAT128 __attribute__ ((unused));
  vol_var___CFLOAT128 = pow (vol_var___CFLOAT128, vol_var__Complex_long_double);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F64
static void
test_pow_811 (void)
{
  extern typeof (pow (vol_var___CFLOAT128, vol_var__Float64)) var___CFLOAT128 __attribute__ ((unused));
  vol_var___CFLOAT128 = pow (vol_var___CFLOAT128, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F64
static void
test_pow_812 (void)
{
  extern typeof (pow (vol_var___CFLOAT128, vol_var___CFLOAT64)) var___CFLOAT128 __attribute__ ((unused));
  vol_var___CFLOAT128 = pow (vol_var___CFLOAT128, vol_var___CFLOAT64);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
static void
test_pow_813 (void)
{
  extern typeof (pow (vol_var___CFLOAT128, vol_var__Float64x)) var___CFLOAT128 __attribute__ ((unused));
  vol_var___CFLOAT128 = pow (vol_var___CFLOAT128, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
static void
test_pow_814 (void)
{
  extern typeof (pow (vol_var___CFLOAT128, vol_var___CFLOAT64X)) var___CFLOAT128 __attribute__ ((unused));
  vol_var___CFLOAT128 = pow (vol_var___CFLOAT128, vol_var___CFLOAT64X);
}
#endif
#if defined HUGE_VAL_F128
static void
test_pow_815 (void)
{
  extern typeof (pow (vol_var___CFLOAT128, vol_var__Float128)) var___CFLOAT128 __attribute__ ((unused));
  vol_var___CFLOAT128 = pow (vol_var___CFLOAT128, vol_var__Float128);
}
#endif
#if defined HUGE_VAL_F128
static void
test_pow_816 (void)
{
  extern typeof (pow (vol_var___CFLOAT128, vol_var___CFLOAT128)) var___CFLOAT128 __attribute__ ((unused));
  vol_var___CFLOAT128 = pow (vol_var___CFLOAT128, vol_var___CFLOAT128);
}
#endif
#if defined HUGE_VAL_F128
static void
test_pow_817 (void)
{
  extern typeof (pow (vol_var___CFLOAT128, vol_var_char)) var___CFLOAT128 __attribute__ ((unused));
  vol_var___CFLOAT128 = pow (vol_var___CFLOAT128, vol_var_char);
}
#endif
#if defined HUGE_VAL_F128
static void
test_pow_818 (void)
{
  extern typeof (pow (vol_var___CFLOAT128, vol_var__Complex_char)) var___CFLOAT128 __attribute__ ((unused));
  vol_var___CFLOAT128 = pow (vol_var___CFLOAT128, vol_var__Complex_char);
}
#endif
#if defined HUGE_VAL_F128
static void
test_pow_819 (void)
{
  extern typeof (pow (vol_var___CFLOAT128, vol_var_signed_char)) var___CFLOAT128 __attribute__ ((unused));
  vol_var___CFLOAT128 = pow (vol_var___CFLOAT128, vol_var_signed_char);
}
#endif
#if defined HUGE_VAL_F128
static void
test_pow_820 (void)
{
  extern typeof (pow (vol_var___CFLOAT128, vol_var__Complex_signed_char)) var___CFLOAT128 __attribute__ ((unused));
  vol_var___CFLOAT128 = pow (vol_var___CFLOAT128, vol_var__Complex_signed_char);
}
#endif
#if defined HUGE_VAL_F128
static void
test_pow_821 (void)
{
  extern typeof (pow (vol_var___CFLOAT128, vol_var_unsigned_char)) var___CFLOAT128 __attribute__ ((unused));
  vol_var___CFLOAT128 = pow (vol_var___CFLOAT128, vol_var_unsigned_char);
}
#endif
#if defined HUGE_VAL_F128
static void
test_pow_822 (void)
{
  extern typeof (pow (vol_var___CFLOAT128, vol_var__Complex_unsigned_char)) var___CFLOAT128 __attribute__ ((unused));
  vol_var___CFLOAT128 = pow (vol_var___CFLOAT128, vol_var__Complex_unsigned_char);
}
#endif
#if defined HUGE_VAL_F128
static void
test_pow_823 (void)
{
  extern typeof (pow (vol_var___CFLOAT128, vol_var_short_int)) var___CFLOAT128 __attribute__ ((unused));
  vol_var___CFLOAT128 = pow (vol_var___CFLOAT128, vol_var_short_int);
}
#endif
#if defined HUGE_VAL_F128
static void
test_pow_824 (void)
{
  extern typeof (pow (vol_var___CFLOAT128, vol_var__Complex_short_int)) var___CFLOAT128 __attribute__ ((unused));
  vol_var___CFLOAT128 = pow (vol_var___CFLOAT128, vol_var__Complex_short_int);
}
#endif
#if defined HUGE_VAL_F128
static void
test_pow_825 (void)
{
  extern typeof (pow (vol_var___CFLOAT128, vol_var_unsigned_short_int)) var___CFLOAT128 __attribute__ ((unused));
  vol_var___CFLOAT128 = pow (vol_var___CFLOAT128, vol_var_unsigned_short_int);
}
#endif
#if defined HUGE_VAL_F128
static void
test_pow_826 (void)
{
  extern typeof (pow (vol_var___CFLOAT128, vol_var__Complex_unsigned_short_int)) var___CFLOAT128 __attribute__ ((unused));
  vol_var___CFLOAT128 = pow (vol_var___CFLOAT128, vol_var__Complex_unsigned_short_int);
}
#endif
#if defined HUGE_VAL_F128
static void
test_pow_827 (void)
{
  extern typeof (pow (vol_var___CFLOAT128, vol_var_int)) var___CFLOAT128 __attribute__ ((unused));
  vol_var___CFLOAT128 = pow (vol_var___CFLOAT128, vol_var_int);
}
#endif
#if defined HUGE_VAL_F128
static void
test_pow_828 (void)
{
  extern typeof (pow (vol_var___CFLOAT128, vol_var__Complex_int)) var___CFLOAT128 __attribute__ ((unused));
  vol_var___CFLOAT128 = pow (vol_var___CFLOAT128, vol_var__Complex_int);
}
#endif
#if defined HUGE_VAL_F128
static void
test_pow_829 (void)
{
  extern typeof (pow (vol_var___CFLOAT128, vol_var_unsigned_int)) var___CFLOAT128 __attribute__ ((unused));
  vol_var___CFLOAT128 = pow (vol_var___CFLOAT128, vol_var_unsigned_int);
}
#endif
#if defined HUGE_VAL_F128
static void
test_pow_830 (void)
{
  extern typeof (pow (vol_var___CFLOAT128, vol_var__Complex_unsigned_int)) var___CFLOAT128 __attribute__ ((unused));
  vol_var___CFLOAT128 = pow (vol_var___CFLOAT128, vol_var__Complex_unsigned_int);
}
#endif
#if defined HUGE_VAL_F128
static void
test_pow_831 (void)
{
  extern typeof (pow (vol_var___CFLOAT128, vol_var_long_int)) var___CFLOAT128 __attribute__ ((unused));
  vol_var___CFLOAT128 = pow (vol_var___CFLOAT128, vol_var_long_int);
}
#endif
#if defined HUGE_VAL_F128
static void
test_pow_832 (void)
{
  extern typeof (pow (vol_var___CFLOAT128, vol_var__Complex_long_int)) var___CFLOAT128 __attribute__ ((unused));
  vol_var___CFLOAT128 = pow (vol_var___CFLOAT128, vol_var__Complex_long_int);
}
#endif
#if defined HUGE_VAL_F128
static void
test_pow_833 (void)
{
  extern typeof (pow (vol_var___CFLOAT128, vol_var_unsigned_long_int)) var___CFLOAT128 __attribute__ ((unused));
  vol_var___CFLOAT128 = pow (vol_var___CFLOAT128, vol_var_unsigned_long_int);
}
#endif
#if defined HUGE_VAL_F128
static void
test_pow_834 (void)
{
  extern typeof (pow (vol_var___CFLOAT128, vol_var__Complex_unsigned_long_int)) var___CFLOAT128 __attribute__ ((unused));
  vol_var___CFLOAT128 = pow (vol_var___CFLOAT128, vol_var__Complex_unsigned_long_int);
}
#endif
#if defined HUGE_VAL_F128
static void
test_pow_835 (void)
{
  extern typeof (pow (vol_var___CFLOAT128, vol_var_long_long_int)) var___CFLOAT128 __attribute__ ((unused));
  vol_var___CFLOAT128 = pow (vol_var___CFLOAT128, vol_var_long_long_int);
}
#endif
#if defined HUGE_VAL_F128
static void
test_pow_836 (void)
{
  extern typeof (pow (vol_var___CFLOAT128, vol_var__Complex_long_long_int)) var___CFLOAT128 __attribute__ ((unused));
  vol_var___CFLOAT128 = pow (vol_var___CFLOAT128, vol_var__Complex_long_long_int);
}
#endif
#if defined HUGE_VAL_F128
static void
test_pow_837 (void)
{
  extern typeof (pow (vol_var___CFLOAT128, vol_var_unsigned_long_long_int)) var___CFLOAT128 __attribute__ ((unused));
  vol_var___CFLOAT128 = pow (vol_var___CFLOAT128, vol_var_unsigned_long_long_int);
}
#endif
#if defined HUGE_VAL_F128
static void
test_pow_838 (void)
{
  extern typeof (pow (vol_var___CFLOAT128, vol_var__Complex_unsigned_long_long_int)) var___CFLOAT128 __attribute__ ((unused));
  vol_var___CFLOAT128 = pow (vol_var___CFLOAT128, vol_var__Complex_unsigned_long_long_int);
}
#endif
#if defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_pow_839 (void)
{
  extern typeof (pow (vol_var___CFLOAT128, vol_var___int128)) var___CFLOAT128 __attribute__ ((unused));
  vol_var___CFLOAT128 = pow (vol_var___CFLOAT128, vol_var___int128);
}
#endif
#if defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_pow_840 (void)
{
  extern typeof (pow (vol_var___CFLOAT128, vol_var__Complex___int128)) var___CFLOAT128 __attribute__ ((unused));
  vol_var___CFLOAT128 = pow (vol_var___CFLOAT128, vol_var__Complex___int128);
}
#endif
#if defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_pow_841 (void)
{
  extern typeof (pow (vol_var___CFLOAT128, vol_var_unsigned___int128)) var___CFLOAT128 __attribute__ ((unused));
  vol_var___CFLOAT128 = pow (vol_var___CFLOAT128, vol_var_unsigned___int128);
}
#endif
#if defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_pow_842 (void)
{
  extern typeof (pow (vol_var___CFLOAT128, vol_var__Complex_unsigned___int128)) var___CFLOAT128 __attribute__ ((unused));
  vol_var___CFLOAT128 = pow (vol_var___CFLOAT128, vol_var__Complex_unsigned___int128);
}
#endif
#if defined HUGE_VAL_F128
static void
test_pow_843 (void)
{
  extern typeof (pow (vol_var___CFLOAT128, vol_var_enum_e)) var___CFLOAT128 __attribute__ ((unused));
  vol_var___CFLOAT128 = pow (vol_var___CFLOAT128, vol_var_enum_e);
}
#endif
#if defined HUGE_VAL_F128
static void
test_pow_844 (void)
{
  extern typeof (pow (vol_var___CFLOAT128, vol_var__Bool)) var___CFLOAT128 __attribute__ ((unused));
  vol_var___CFLOAT128 = pow (vol_var___CFLOAT128, vol_var__Bool);
}
#endif
#if defined HUGE_VAL_F128
static void
test_pow_845 (void)
{
  extern typeof (pow (vol_var___CFLOAT128, vol_var_bit_field)) var___CFLOAT128 __attribute__ ((unused));
  vol_var___CFLOAT128 = pow (vol_var___CFLOAT128, vol_var_bit_field);
}
#endif
#if defined HUGE_VAL_F16
static void
test_pow_846 (void)
{
  extern typeof (pow (vol_var_char, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_char, vol_var__Float16);
}
#endif
#if defined HUGE_VAL_F16
static void
test_pow_847 (void)
{
  extern typeof (pow (vol_var_char, vol_var___CFLOAT16)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_char, vol_var___CFLOAT16);
}
#endif
static void
test_pow_848 (void)
{
  extern typeof (pow (vol_var_char, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_char, vol_var_float);
}
static void
test_pow_849 (void)
{
  extern typeof (pow (vol_var_char, vol_var__Complex_float)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_char, vol_var__Complex_float);
}
#if defined HUGE_VAL_F32
static void
test_pow_850 (void)
{
  extern typeof (pow (vol_var_char, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_char, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32
static void
test_pow_851 (void)
{
  extern typeof (pow (vol_var_char, vol_var___CFLOAT32)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_char, vol_var___CFLOAT32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_pow_852 (void)
{
  extern typeof (pow (vol_var_char, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_char, vol_var__Float32x);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_pow_853 (void)
{
  extern typeof (pow (vol_var_char, vol_var___CFLOAT32X)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_char, vol_var___CFLOAT32X);
}
#endif
static void
test_pow_854 (void)
{
  extern typeof (pow (vol_var_char, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_char, vol_var_double);
}
static void
test_pow_855 (void)
{
  extern typeof (pow (vol_var_char, vol_var__Complex_double)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_char, vol_var__Complex_double);
}
static void
test_pow_856 (void)
{
  extern typeof (pow (vol_var_char, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = pow (vol_var_char, vol_var_long_double);
}
static void
test_pow_857 (void)
{
  extern typeof (pow (vol_var_char, vol_var__Complex_long_double)) var__Complex_long_double __attribute__ ((unused));
  vol_var__Complex_long_double = pow (vol_var_char, vol_var__Complex_long_double);
}
#if defined HUGE_VAL_F64
static void
test_pow_858 (void)
{
  extern typeof (pow (vol_var_char, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = pow (vol_var_char, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64
static void
test_pow_859 (void)
{
  extern typeof (pow (vol_var_char, vol_var___CFLOAT64)) var___CFLOAT64 __attribute__ ((unused));
  vol_var___CFLOAT64 = pow (vol_var_char, vol_var___CFLOAT64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_pow_860 (void)
{
  extern typeof (pow (vol_var_char, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = pow (vol_var_char, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_pow_861 (void)
{
  extern typeof (pow (vol_var_char, vol_var___CFLOAT64X)) var___CFLOAT64X __attribute__ ((unused));
  vol_var___CFLOAT64X = pow (vol_var_char, vol_var___CFLOAT64X);
}
#endif
#if defined HUGE_VAL_F128
static void
test_pow_862 (void)
{
  extern typeof (pow (vol_var_char, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = pow (vol_var_char, vol_var__Float128);
}
#endif
#if defined HUGE_VAL_F128
static void
test_pow_863 (void)
{
  extern typeof (pow (vol_var_char, vol_var___CFLOAT128)) var___CFLOAT128 __attribute__ ((unused));
  vol_var___CFLOAT128 = pow (vol_var_char, vol_var___CFLOAT128);
}
#endif
static void
test_pow_864 (void)
{
  extern typeof (pow (vol_var_char, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_char, vol_var_char);
}
static void
test_pow_865 (void)
{
  extern typeof (pow (vol_var_char, vol_var__Complex_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_char, vol_var__Complex_char);
}
static void
test_pow_866 (void)
{
  extern typeof (pow (vol_var_char, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_char, vol_var_signed_char);
}
static void
test_pow_867 (void)
{
  extern typeof (pow (vol_var_char, vol_var__Complex_signed_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_char, vol_var__Complex_signed_char);
}
static void
test_pow_868 (void)
{
  extern typeof (pow (vol_var_char, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_char, vol_var_unsigned_char);
}
static void
test_pow_869 (void)
{
  extern typeof (pow (vol_var_char, vol_var__Complex_unsigned_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_char, vol_var__Complex_unsigned_char);
}
static void
test_pow_870 (void)
{
  extern typeof (pow (vol_var_char, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_char, vol_var_short_int);
}
static void
test_pow_871 (void)
{
  extern typeof (pow (vol_var_char, vol_var__Complex_short_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_char, vol_var__Complex_short_int);
}
static void
test_pow_872 (void)
{
  extern typeof (pow (vol_var_char, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_char, vol_var_unsigned_short_int);
}
static void
test_pow_873 (void)
{
  extern typeof (pow (vol_var_char, vol_var__Complex_unsigned_short_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_char, vol_var__Complex_unsigned_short_int);
}
static void
test_pow_874 (void)
{
  extern typeof (pow (vol_var_char, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_char, vol_var_int);
}
static void
test_pow_875 (void)
{
  extern typeof (pow (vol_var_char, vol_var__Complex_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_char, vol_var__Complex_int);
}
static void
test_pow_876 (void)
{
  extern typeof (pow (vol_var_char, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_char, vol_var_unsigned_int);
}
static void
test_pow_877 (void)
{
  extern typeof (pow (vol_var_char, vol_var__Complex_unsigned_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_char, vol_var__Complex_unsigned_int);
}
static void
test_pow_878 (void)
{
  extern typeof (pow (vol_var_char, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_char, vol_var_long_int);
}
static void
test_pow_879 (void)
{
  extern typeof (pow (vol_var_char, vol_var__Complex_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_char, vol_var__Complex_long_int);
}
static void
test_pow_880 (void)
{
  extern typeof (pow (vol_var_char, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_char, vol_var_unsigned_long_int);
}
static void
test_pow_881 (void)
{
  extern typeof (pow (vol_var_char, vol_var__Complex_unsigned_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_char, vol_var__Complex_unsigned_long_int);
}
static void
test_pow_882 (void)
{
  extern typeof (pow (vol_var_char, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_char, vol_var_long_long_int);
}
static void
test_pow_883 (void)
{
  extern typeof (pow (vol_var_char, vol_var__Complex_long_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_char, vol_var__Complex_long_long_int);
}
static void
test_pow_884 (void)
{
  extern typeof (pow (vol_var_char, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_char, vol_var_unsigned_long_long_int);
}
static void
test_pow_885 (void)
{
  extern typeof (pow (vol_var_char, vol_var__Complex_unsigned_long_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_char, vol_var__Complex_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_pow_886 (void)
{
  extern typeof (pow (vol_var_char, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_char, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_887 (void)
{
  extern typeof (pow (vol_var_char, vol_var__Complex___int128)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_char, vol_var__Complex___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_888 (void)
{
  extern typeof (pow (vol_var_char, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_char, vol_var_unsigned___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_889 (void)
{
  extern typeof (pow (vol_var_char, vol_var__Complex_unsigned___int128)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_char, vol_var__Complex_unsigned___int128);
}
#endif
static void
test_pow_890 (void)
{
  extern typeof (pow (vol_var_char, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_char, vol_var_enum_e);
}
static void
test_pow_891 (void)
{
  extern typeof (pow (vol_var_char, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_char, vol_var__Bool);
}
static void
test_pow_892 (void)
{
  extern typeof (pow (vol_var_char, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_char, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_pow_893 (void)
{
  extern typeof (pow (vol_var__Complex_char, vol_var__Float16)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_char, vol_var__Float16);
}
#endif
#if defined HUGE_VAL_F16
static void
test_pow_894 (void)
{
  extern typeof (pow (vol_var__Complex_char, vol_var___CFLOAT16)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_char, vol_var___CFLOAT16);
}
#endif
static void
test_pow_895 (void)
{
  extern typeof (pow (vol_var__Complex_char, vol_var_float)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_char, vol_var_float);
}
static void
test_pow_896 (void)
{
  extern typeof (pow (vol_var__Complex_char, vol_var__Complex_float)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_char, vol_var__Complex_float);
}
#if defined HUGE_VAL_F32
static void
test_pow_897 (void)
{
  extern typeof (pow (vol_var__Complex_char, vol_var__Float32)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_char, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32
static void
test_pow_898 (void)
{
  extern typeof (pow (vol_var__Complex_char, vol_var___CFLOAT32)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_char, vol_var___CFLOAT32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_pow_899 (void)
{
  extern typeof (pow (vol_var__Complex_char, vol_var__Float32x)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_char, vol_var__Float32x);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_pow_900 (void)
{
  extern typeof (pow (vol_var__Complex_char, vol_var___CFLOAT32X)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_char, vol_var___CFLOAT32X);
}
#endif
static void
test_pow_901 (void)
{
  extern typeof (pow (vol_var__Complex_char, vol_var_double)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_char, vol_var_double);
}
static void
test_pow_902 (void)
{
  extern typeof (pow (vol_var__Complex_char, vol_var__Complex_double)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_char, vol_var__Complex_double);
}
static void
test_pow_903 (void)
{
  extern typeof (pow (vol_var__Complex_char, vol_var_long_double)) var__Complex_long_double __attribute__ ((unused));
  vol_var__Complex_long_double = pow (vol_var__Complex_char, vol_var_long_double);
}
static void
test_pow_904 (void)
{
  extern typeof (pow (vol_var__Complex_char, vol_var__Complex_long_double)) var__Complex_long_double __attribute__ ((unused));
  vol_var__Complex_long_double = pow (vol_var__Complex_char, vol_var__Complex_long_double);
}
#if defined HUGE_VAL_F64
static void
test_pow_905 (void)
{
  extern typeof (pow (vol_var__Complex_char, vol_var__Float64)) var___CFLOAT64 __attribute__ ((unused));
  vol_var___CFLOAT64 = pow (vol_var__Complex_char, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64
static void
test_pow_906 (void)
{
  extern typeof (pow (vol_var__Complex_char, vol_var___CFLOAT64)) var___CFLOAT64 __attribute__ ((unused));
  vol_var___CFLOAT64 = pow (vol_var__Complex_char, vol_var___CFLOAT64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_pow_907 (void)
{
  extern typeof (pow (vol_var__Complex_char, vol_var__Float64x)) var___CFLOAT64X __attribute__ ((unused));
  vol_var___CFLOAT64X = pow (vol_var__Complex_char, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_pow_908 (void)
{
  extern typeof (pow (vol_var__Complex_char, vol_var___CFLOAT64X)) var___CFLOAT64X __attribute__ ((unused));
  vol_var___CFLOAT64X = pow (vol_var__Complex_char, vol_var___CFLOAT64X);
}
#endif
#if defined HUGE_VAL_F128
static void
test_pow_909 (void)
{
  extern typeof (pow (vol_var__Complex_char, vol_var__Float128)) var___CFLOAT128 __attribute__ ((unused));
  vol_var___CFLOAT128 = pow (vol_var__Complex_char, vol_var__Float128);
}
#endif
#if defined HUGE_VAL_F128
static void
test_pow_910 (void)
{
  extern typeof (pow (vol_var__Complex_char, vol_var___CFLOAT128)) var___CFLOAT128 __attribute__ ((unused));
  vol_var___CFLOAT128 = pow (vol_var__Complex_char, vol_var___CFLOAT128);
}
#endif
static void
test_pow_911 (void)
{
  extern typeof (pow (vol_var__Complex_char, vol_var_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_char, vol_var_char);
}
static void
test_pow_912 (void)
{
  extern typeof (pow (vol_var__Complex_char, vol_var__Complex_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_char, vol_var__Complex_char);
}
static void
test_pow_913 (void)
{
  extern typeof (pow (vol_var__Complex_char, vol_var_signed_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_char, vol_var_signed_char);
}
static void
test_pow_914 (void)
{
  extern typeof (pow (vol_var__Complex_char, vol_var__Complex_signed_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_char, vol_var__Complex_signed_char);
}
static void
test_pow_915 (void)
{
  extern typeof (pow (vol_var__Complex_char, vol_var_unsigned_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_char, vol_var_unsigned_char);
}
static void
test_pow_916 (void)
{
  extern typeof (pow (vol_var__Complex_char, vol_var__Complex_unsigned_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_char, vol_var__Complex_unsigned_char);
}
static void
test_pow_917 (void)
{
  extern typeof (pow (vol_var__Complex_char, vol_var_short_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_char, vol_var_short_int);
}
static void
test_pow_918 (void)
{
  extern typeof (pow (vol_var__Complex_char, vol_var__Complex_short_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_char, vol_var__Complex_short_int);
}
static void
test_pow_919 (void)
{
  extern typeof (pow (vol_var__Complex_char, vol_var_unsigned_short_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_char, vol_var_unsigned_short_int);
}
static void
test_pow_920 (void)
{
  extern typeof (pow (vol_var__Complex_char, vol_var__Complex_unsigned_short_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_char, vol_var__Complex_unsigned_short_int);
}
static void
test_pow_921 (void)
{
  extern typeof (pow (vol_var__Complex_char, vol_var_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_char, vol_var_int);
}
static void
test_pow_922 (void)
{
  extern typeof (pow (vol_var__Complex_char, vol_var__Complex_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_char, vol_var__Complex_int);
}
static void
test_pow_923 (void)
{
  extern typeof (pow (vol_var__Complex_char, vol_var_unsigned_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_char, vol_var_unsigned_int);
}
static void
test_pow_924 (void)
{
  extern typeof (pow (vol_var__Complex_char, vol_var__Complex_unsigned_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_char, vol_var__Complex_unsigned_int);
}
static void
test_pow_925 (void)
{
  extern typeof (pow (vol_var__Complex_char, vol_var_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_char, vol_var_long_int);
}
static void
test_pow_926 (void)
{
  extern typeof (pow (vol_var__Complex_char, vol_var__Complex_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_char, vol_var__Complex_long_int);
}
static void
test_pow_927 (void)
{
  extern typeof (pow (vol_var__Complex_char, vol_var_unsigned_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_char, vol_var_unsigned_long_int);
}
static void
test_pow_928 (void)
{
  extern typeof (pow (vol_var__Complex_char, vol_var__Complex_unsigned_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_char, vol_var__Complex_unsigned_long_int);
}
static void
test_pow_929 (void)
{
  extern typeof (pow (vol_var__Complex_char, vol_var_long_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_char, vol_var_long_long_int);
}
static void
test_pow_930 (void)
{
  extern typeof (pow (vol_var__Complex_char, vol_var__Complex_long_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_char, vol_var__Complex_long_long_int);
}
static void
test_pow_931 (void)
{
  extern typeof (pow (vol_var__Complex_char, vol_var_unsigned_long_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_char, vol_var_unsigned_long_long_int);
}
static void
test_pow_932 (void)
{
  extern typeof (pow (vol_var__Complex_char, vol_var__Complex_unsigned_long_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_char, vol_var__Complex_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_pow_933 (void)
{
  extern typeof (pow (vol_var__Complex_char, vol_var___int128)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_char, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_934 (void)
{
  extern typeof (pow (vol_var__Complex_char, vol_var__Complex___int128)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_char, vol_var__Complex___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_935 (void)
{
  extern typeof (pow (vol_var__Complex_char, vol_var_unsigned___int128)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_char, vol_var_unsigned___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_936 (void)
{
  extern typeof (pow (vol_var__Complex_char, vol_var__Complex_unsigned___int128)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_char, vol_var__Complex_unsigned___int128);
}
#endif
static void
test_pow_937 (void)
{
  extern typeof (pow (vol_var__Complex_char, vol_var_enum_e)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_char, vol_var_enum_e);
}
static void
test_pow_938 (void)
{
  extern typeof (pow (vol_var__Complex_char, vol_var__Bool)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_char, vol_var__Bool);
}
static void
test_pow_939 (void)
{
  extern typeof (pow (vol_var__Complex_char, vol_var_bit_field)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_char, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_pow_940 (void)
{
  extern typeof (pow (vol_var_signed_char, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_signed_char, vol_var__Float16);
}
#endif
#if defined HUGE_VAL_F16
static void
test_pow_941 (void)
{
  extern typeof (pow (vol_var_signed_char, vol_var___CFLOAT16)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_signed_char, vol_var___CFLOAT16);
}
#endif
static void
test_pow_942 (void)
{
  extern typeof (pow (vol_var_signed_char, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_signed_char, vol_var_float);
}
static void
test_pow_943 (void)
{
  extern typeof (pow (vol_var_signed_char, vol_var__Complex_float)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_signed_char, vol_var__Complex_float);
}
#if defined HUGE_VAL_F32
static void
test_pow_944 (void)
{
  extern typeof (pow (vol_var_signed_char, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_signed_char, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32
static void
test_pow_945 (void)
{
  extern typeof (pow (vol_var_signed_char, vol_var___CFLOAT32)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_signed_char, vol_var___CFLOAT32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_pow_946 (void)
{
  extern typeof (pow (vol_var_signed_char, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_signed_char, vol_var__Float32x);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_pow_947 (void)
{
  extern typeof (pow (vol_var_signed_char, vol_var___CFLOAT32X)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_signed_char, vol_var___CFLOAT32X);
}
#endif
static void
test_pow_948 (void)
{
  extern typeof (pow (vol_var_signed_char, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_signed_char, vol_var_double);
}
static void
test_pow_949 (void)
{
  extern typeof (pow (vol_var_signed_char, vol_var__Complex_double)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_signed_char, vol_var__Complex_double);
}
static void
test_pow_950 (void)
{
  extern typeof (pow (vol_var_signed_char, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = pow (vol_var_signed_char, vol_var_long_double);
}
static void
test_pow_951 (void)
{
  extern typeof (pow (vol_var_signed_char, vol_var__Complex_long_double)) var__Complex_long_double __attribute__ ((unused));
  vol_var__Complex_long_double = pow (vol_var_signed_char, vol_var__Complex_long_double);
}
#if defined HUGE_VAL_F64
static void
test_pow_952 (void)
{
  extern typeof (pow (vol_var_signed_char, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = pow (vol_var_signed_char, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64
static void
test_pow_953 (void)
{
  extern typeof (pow (vol_var_signed_char, vol_var___CFLOAT64)) var___CFLOAT64 __attribute__ ((unused));
  vol_var___CFLOAT64 = pow (vol_var_signed_char, vol_var___CFLOAT64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_pow_954 (void)
{
  extern typeof (pow (vol_var_signed_char, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = pow (vol_var_signed_char, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_pow_955 (void)
{
  extern typeof (pow (vol_var_signed_char, vol_var___CFLOAT64X)) var___CFLOAT64X __attribute__ ((unused));
  vol_var___CFLOAT64X = pow (vol_var_signed_char, vol_var___CFLOAT64X);
}
#endif
#if defined HUGE_VAL_F128
static void
test_pow_956 (void)
{
  extern typeof (pow (vol_var_signed_char, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = pow (vol_var_signed_char, vol_var__Float128);
}
#endif
#if defined HUGE_VAL_F128
static void
test_pow_957 (void)
{
  extern typeof (pow (vol_var_signed_char, vol_var___CFLOAT128)) var___CFLOAT128 __attribute__ ((unused));
  vol_var___CFLOAT128 = pow (vol_var_signed_char, vol_var___CFLOAT128);
}
#endif
static void
test_pow_958 (void)
{
  extern typeof (pow (vol_var_signed_char, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_signed_char, vol_var_char);
}
static void
test_pow_959 (void)
{
  extern typeof (pow (vol_var_signed_char, vol_var__Complex_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_signed_char, vol_var__Complex_char);
}
static void
test_pow_960 (void)
{
  extern typeof (pow (vol_var_signed_char, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_signed_char, vol_var_signed_char);
}
static void
test_pow_961 (void)
{
  extern typeof (pow (vol_var_signed_char, vol_var__Complex_signed_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_signed_char, vol_var__Complex_signed_char);
}
static void
test_pow_962 (void)
{
  extern typeof (pow (vol_var_signed_char, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_signed_char, vol_var_unsigned_char);
}
static void
test_pow_963 (void)
{
  extern typeof (pow (vol_var_signed_char, vol_var__Complex_unsigned_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_signed_char, vol_var__Complex_unsigned_char);
}
static void
test_pow_964 (void)
{
  extern typeof (pow (vol_var_signed_char, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_signed_char, vol_var_short_int);
}
static void
test_pow_965 (void)
{
  extern typeof (pow (vol_var_signed_char, vol_var__Complex_short_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_signed_char, vol_var__Complex_short_int);
}
static void
test_pow_966 (void)
{
  extern typeof (pow (vol_var_signed_char, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_signed_char, vol_var_unsigned_short_int);
}
static void
test_pow_967 (void)
{
  extern typeof (pow (vol_var_signed_char, vol_var__Complex_unsigned_short_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_signed_char, vol_var__Complex_unsigned_short_int);
}
static void
test_pow_968 (void)
{
  extern typeof (pow (vol_var_signed_char, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_signed_char, vol_var_int);
}
static void
test_pow_969 (void)
{
  extern typeof (pow (vol_var_signed_char, vol_var__Complex_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_signed_char, vol_var__Complex_int);
}
static void
test_pow_970 (void)
{
  extern typeof (pow (vol_var_signed_char, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_signed_char, vol_var_unsigned_int);
}
static void
test_pow_971 (void)
{
  extern typeof (pow (vol_var_signed_char, vol_var__Complex_unsigned_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_signed_char, vol_var__Complex_unsigned_int);
}
static void
test_pow_972 (void)
{
  extern typeof (pow (vol_var_signed_char, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_signed_char, vol_var_long_int);
}
static void
test_pow_973 (void)
{
  extern typeof (pow (vol_var_signed_char, vol_var__Complex_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_signed_char, vol_var__Complex_long_int);
}
static void
test_pow_974 (void)
{
  extern typeof (pow (vol_var_signed_char, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_signed_char, vol_var_unsigned_long_int);
}
static void
test_pow_975 (void)
{
  extern typeof (pow (vol_var_signed_char, vol_var__Complex_unsigned_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_signed_char, vol_var__Complex_unsigned_long_int);
}
static void
test_pow_976 (void)
{
  extern typeof (pow (vol_var_signed_char, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_signed_char, vol_var_long_long_int);
}
static void
test_pow_977 (void)
{
  extern typeof (pow (vol_var_signed_char, vol_var__Complex_long_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_signed_char, vol_var__Complex_long_long_int);
}
static void
test_pow_978 (void)
{
  extern typeof (pow (vol_var_signed_char, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_signed_char, vol_var_unsigned_long_long_int);
}
static void
test_pow_979 (void)
{
  extern typeof (pow (vol_var_signed_char, vol_var__Complex_unsigned_long_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_signed_char, vol_var__Complex_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_pow_980 (void)
{
  extern typeof (pow (vol_var_signed_char, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_signed_char, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_981 (void)
{
  extern typeof (pow (vol_var_signed_char, vol_var__Complex___int128)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_signed_char, vol_var__Complex___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_982 (void)
{
  extern typeof (pow (vol_var_signed_char, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_signed_char, vol_var_unsigned___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_983 (void)
{
  extern typeof (pow (vol_var_signed_char, vol_var__Complex_unsigned___int128)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_signed_char, vol_var__Complex_unsigned___int128);
}
#endif
static void
test_pow_984 (void)
{
  extern typeof (pow (vol_var_signed_char, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_signed_char, vol_var_enum_e);
}
static void
test_pow_985 (void)
{
  extern typeof (pow (vol_var_signed_char, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_signed_char, vol_var__Bool);
}
static void
test_pow_986 (void)
{
  extern typeof (pow (vol_var_signed_char, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_signed_char, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_pow_987 (void)
{
  extern typeof (pow (vol_var__Complex_signed_char, vol_var__Float16)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_signed_char, vol_var__Float16);
}
#endif
#if defined HUGE_VAL_F16
static void
test_pow_988 (void)
{
  extern typeof (pow (vol_var__Complex_signed_char, vol_var___CFLOAT16)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_signed_char, vol_var___CFLOAT16);
}
#endif
static void
test_pow_989 (void)
{
  extern typeof (pow (vol_var__Complex_signed_char, vol_var_float)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_signed_char, vol_var_float);
}
static void
test_pow_990 (void)
{
  extern typeof (pow (vol_var__Complex_signed_char, vol_var__Complex_float)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_signed_char, vol_var__Complex_float);
}
#if defined HUGE_VAL_F32
static void
test_pow_991 (void)
{
  extern typeof (pow (vol_var__Complex_signed_char, vol_var__Float32)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_signed_char, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32
static void
test_pow_992 (void)
{
  extern typeof (pow (vol_var__Complex_signed_char, vol_var___CFLOAT32)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_signed_char, vol_var___CFLOAT32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_pow_993 (void)
{
  extern typeof (pow (vol_var__Complex_signed_char, vol_var__Float32x)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_signed_char, vol_var__Float32x);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_pow_994 (void)
{
  extern typeof (pow (vol_var__Complex_signed_char, vol_var___CFLOAT32X)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_signed_char, vol_var___CFLOAT32X);
}
#endif
static void
test_pow_995 (void)
{
  extern typeof (pow (vol_var__Complex_signed_char, vol_var_double)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_signed_char, vol_var_double);
}
static void
test_pow_996 (void)
{
  extern typeof (pow (vol_var__Complex_signed_char, vol_var__Complex_double)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_signed_char, vol_var__Complex_double);
}
static void
test_pow_997 (void)
{
  extern typeof (pow (vol_var__Complex_signed_char, vol_var_long_double)) var__Complex_long_double __attribute__ ((unused));
  vol_var__Complex_long_double = pow (vol_var__Complex_signed_char, vol_var_long_double);
}
static void
test_pow_998 (void)
{
  extern typeof (pow (vol_var__Complex_signed_char, vol_var__Complex_long_double)) var__Complex_long_double __attribute__ ((unused));
  vol_var__Complex_long_double = pow (vol_var__Complex_signed_char, vol_var__Complex_long_double);
}
#if defined HUGE_VAL_F64
static void
test_pow_999 (void)
{
  extern typeof (pow (vol_var__Complex_signed_char, vol_var__Float64)) var___CFLOAT64 __attribute__ ((unused));
  vol_var___CFLOAT64 = pow (vol_var__Complex_signed_char, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64
static void
test_pow_1000 (void)
{
  extern typeof (pow (vol_var__Complex_signed_char, vol_var___CFLOAT64)) var___CFLOAT64 __attribute__ ((unused));
  vol_var___CFLOAT64 = pow (vol_var__Complex_signed_char, vol_var___CFLOAT64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_pow_1001 (void)
{
  extern typeof (pow (vol_var__Complex_signed_char, vol_var__Float64x)) var___CFLOAT64X __attribute__ ((unused));
  vol_var___CFLOAT64X = pow (vol_var__Complex_signed_char, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_pow_1002 (void)
{
  extern typeof (pow (vol_var__Complex_signed_char, vol_var___CFLOAT64X)) var___CFLOAT64X __attribute__ ((unused));
  vol_var___CFLOAT64X = pow (vol_var__Complex_signed_char, vol_var___CFLOAT64X);
}
#endif
#if defined HUGE_VAL_F128
static void
test_pow_1003 (void)
{
  extern typeof (pow (vol_var__Complex_signed_char, vol_var__Float128)) var___CFLOAT128 __attribute__ ((unused));
  vol_var___CFLOAT128 = pow (vol_var__Complex_signed_char, vol_var__Float128);
}
#endif
#if defined HUGE_VAL_F128
static void
test_pow_1004 (void)
{
  extern typeof (pow (vol_var__Complex_signed_char, vol_var___CFLOAT128)) var___CFLOAT128 __attribute__ ((unused));
  vol_var___CFLOAT128 = pow (vol_var__Complex_signed_char, vol_var___CFLOAT128);
}
#endif
static void
test_pow_1005 (void)
{
  extern typeof (pow (vol_var__Complex_signed_char, vol_var_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_signed_char, vol_var_char);
}
static void
test_pow_1006 (void)
{
  extern typeof (pow (vol_var__Complex_signed_char, vol_var__Complex_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_signed_char, vol_var__Complex_char);
}
static void
test_pow_1007 (void)
{
  extern typeof (pow (vol_var__Complex_signed_char, vol_var_signed_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_signed_char, vol_var_signed_char);
}
static void
test_pow_1008 (void)
{
  extern typeof (pow (vol_var__Complex_signed_char, vol_var__Complex_signed_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_signed_char, vol_var__Complex_signed_char);
}
static void
test_pow_1009 (void)
{
  extern typeof (pow (vol_var__Complex_signed_char, vol_var_unsigned_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_signed_char, vol_var_unsigned_char);
}
static void
test_pow_1010 (void)
{
  extern typeof (pow (vol_var__Complex_signed_char, vol_var__Complex_unsigned_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_signed_char, vol_var__Complex_unsigned_char);
}
static void
test_pow_1011 (void)
{
  extern typeof (pow (vol_var__Complex_signed_char, vol_var_short_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_signed_char, vol_var_short_int);
}
static void
test_pow_1012 (void)
{
  extern typeof (pow (vol_var__Complex_signed_char, vol_var__Complex_short_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_signed_char, vol_var__Complex_short_int);
}
static void
test_pow_1013 (void)
{
  extern typeof (pow (vol_var__Complex_signed_char, vol_var_unsigned_short_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_signed_char, vol_var_unsigned_short_int);
}
static void
test_pow_1014 (void)
{
  extern typeof (pow (vol_var__Complex_signed_char, vol_var__Complex_unsigned_short_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_signed_char, vol_var__Complex_unsigned_short_int);
}
static void
test_pow_1015 (void)
{
  extern typeof (pow (vol_var__Complex_signed_char, vol_var_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_signed_char, vol_var_int);
}
static void
test_pow_1016 (void)
{
  extern typeof (pow (vol_var__Complex_signed_char, vol_var__Complex_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_signed_char, vol_var__Complex_int);
}
static void
test_pow_1017 (void)
{
  extern typeof (pow (vol_var__Complex_signed_char, vol_var_unsigned_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_signed_char, vol_var_unsigned_int);
}
static void
test_pow_1018 (void)
{
  extern typeof (pow (vol_var__Complex_signed_char, vol_var__Complex_unsigned_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_signed_char, vol_var__Complex_unsigned_int);
}
static void
test_pow_1019 (void)
{
  extern typeof (pow (vol_var__Complex_signed_char, vol_var_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_signed_char, vol_var_long_int);
}
static void
test_pow_1020 (void)
{
  extern typeof (pow (vol_var__Complex_signed_char, vol_var__Complex_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_signed_char, vol_var__Complex_long_int);
}
static void
test_pow_1021 (void)
{
  extern typeof (pow (vol_var__Complex_signed_char, vol_var_unsigned_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_signed_char, vol_var_unsigned_long_int);
}
static void
test_pow_1022 (void)
{
  extern typeof (pow (vol_var__Complex_signed_char, vol_var__Complex_unsigned_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_signed_char, vol_var__Complex_unsigned_long_int);
}
static void
test_pow_1023 (void)
{
  extern typeof (pow (vol_var__Complex_signed_char, vol_var_long_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_signed_char, vol_var_long_long_int);
}
static void
test_pow_1024 (void)
{
  extern typeof (pow (vol_var__Complex_signed_char, vol_var__Complex_long_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_signed_char, vol_var__Complex_long_long_int);
}
static void
test_pow_1025 (void)
{
  extern typeof (pow (vol_var__Complex_signed_char, vol_var_unsigned_long_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_signed_char, vol_var_unsigned_long_long_int);
}
static void
test_pow_1026 (void)
{
  extern typeof (pow (vol_var__Complex_signed_char, vol_var__Complex_unsigned_long_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_signed_char, vol_var__Complex_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_pow_1027 (void)
{
  extern typeof (pow (vol_var__Complex_signed_char, vol_var___int128)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_signed_char, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1028 (void)
{
  extern typeof (pow (vol_var__Complex_signed_char, vol_var__Complex___int128)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_signed_char, vol_var__Complex___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1029 (void)
{
  extern typeof (pow (vol_var__Complex_signed_char, vol_var_unsigned___int128)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_signed_char, vol_var_unsigned___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1030 (void)
{
  extern typeof (pow (vol_var__Complex_signed_char, vol_var__Complex_unsigned___int128)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_signed_char, vol_var__Complex_unsigned___int128);
}
#endif
static void
test_pow_1031 (void)
{
  extern typeof (pow (vol_var__Complex_signed_char, vol_var_enum_e)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_signed_char, vol_var_enum_e);
}
static void
test_pow_1032 (void)
{
  extern typeof (pow (vol_var__Complex_signed_char, vol_var__Bool)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_signed_char, vol_var__Bool);
}
static void
test_pow_1033 (void)
{
  extern typeof (pow (vol_var__Complex_signed_char, vol_var_bit_field)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_signed_char, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_pow_1034 (void)
{
  extern typeof (pow (vol_var_unsigned_char, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_unsigned_char, vol_var__Float16);
}
#endif
#if defined HUGE_VAL_F16
static void
test_pow_1035 (void)
{
  extern typeof (pow (vol_var_unsigned_char, vol_var___CFLOAT16)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_unsigned_char, vol_var___CFLOAT16);
}
#endif
static void
test_pow_1036 (void)
{
  extern typeof (pow (vol_var_unsigned_char, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_unsigned_char, vol_var_float);
}
static void
test_pow_1037 (void)
{
  extern typeof (pow (vol_var_unsigned_char, vol_var__Complex_float)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_unsigned_char, vol_var__Complex_float);
}
#if defined HUGE_VAL_F32
static void
test_pow_1038 (void)
{
  extern typeof (pow (vol_var_unsigned_char, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_unsigned_char, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32
static void
test_pow_1039 (void)
{
  extern typeof (pow (vol_var_unsigned_char, vol_var___CFLOAT32)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_unsigned_char, vol_var___CFLOAT32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_pow_1040 (void)
{
  extern typeof (pow (vol_var_unsigned_char, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_unsigned_char, vol_var__Float32x);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_pow_1041 (void)
{
  extern typeof (pow (vol_var_unsigned_char, vol_var___CFLOAT32X)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_unsigned_char, vol_var___CFLOAT32X);
}
#endif
static void
test_pow_1042 (void)
{
  extern typeof (pow (vol_var_unsigned_char, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_unsigned_char, vol_var_double);
}
static void
test_pow_1043 (void)
{
  extern typeof (pow (vol_var_unsigned_char, vol_var__Complex_double)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_unsigned_char, vol_var__Complex_double);
}
static void
test_pow_1044 (void)
{
  extern typeof (pow (vol_var_unsigned_char, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = pow (vol_var_unsigned_char, vol_var_long_double);
}
static void
test_pow_1045 (void)
{
  extern typeof (pow (vol_var_unsigned_char, vol_var__Complex_long_double)) var__Complex_long_double __attribute__ ((unused));
  vol_var__Complex_long_double = pow (vol_var_unsigned_char, vol_var__Complex_long_double);
}
#if defined HUGE_VAL_F64
static void
test_pow_1046 (void)
{
  extern typeof (pow (vol_var_unsigned_char, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = pow (vol_var_unsigned_char, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64
static void
test_pow_1047 (void)
{
  extern typeof (pow (vol_var_unsigned_char, vol_var___CFLOAT64)) var___CFLOAT64 __attribute__ ((unused));
  vol_var___CFLOAT64 = pow (vol_var_unsigned_char, vol_var___CFLOAT64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_pow_1048 (void)
{
  extern typeof (pow (vol_var_unsigned_char, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = pow (vol_var_unsigned_char, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_pow_1049 (void)
{
  extern typeof (pow (vol_var_unsigned_char, vol_var___CFLOAT64X)) var___CFLOAT64X __attribute__ ((unused));
  vol_var___CFLOAT64X = pow (vol_var_unsigned_char, vol_var___CFLOAT64X);
}
#endif
#if defined HUGE_VAL_F128
static void
test_pow_1050 (void)
{
  extern typeof (pow (vol_var_unsigned_char, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = pow (vol_var_unsigned_char, vol_var__Float128);
}
#endif
#if defined HUGE_VAL_F128
static void
test_pow_1051 (void)
{
  extern typeof (pow (vol_var_unsigned_char, vol_var___CFLOAT128)) var___CFLOAT128 __attribute__ ((unused));
  vol_var___CFLOAT128 = pow (vol_var_unsigned_char, vol_var___CFLOAT128);
}
#endif
static void
test_pow_1052 (void)
{
  extern typeof (pow (vol_var_unsigned_char, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_unsigned_char, vol_var_char);
}
static void
test_pow_1053 (void)
{
  extern typeof (pow (vol_var_unsigned_char, vol_var__Complex_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_unsigned_char, vol_var__Complex_char);
}
static void
test_pow_1054 (void)
{
  extern typeof (pow (vol_var_unsigned_char, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_unsigned_char, vol_var_signed_char);
}
static void
test_pow_1055 (void)
{
  extern typeof (pow (vol_var_unsigned_char, vol_var__Complex_signed_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_unsigned_char, vol_var__Complex_signed_char);
}
static void
test_pow_1056 (void)
{
  extern typeof (pow (vol_var_unsigned_char, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_unsigned_char, vol_var_unsigned_char);
}
static void
test_pow_1057 (void)
{
  extern typeof (pow (vol_var_unsigned_char, vol_var__Complex_unsigned_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_unsigned_char, vol_var__Complex_unsigned_char);
}
static void
test_pow_1058 (void)
{
  extern typeof (pow (vol_var_unsigned_char, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_unsigned_char, vol_var_short_int);
}
static void
test_pow_1059 (void)
{
  extern typeof (pow (vol_var_unsigned_char, vol_var__Complex_short_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_unsigned_char, vol_var__Complex_short_int);
}
static void
test_pow_1060 (void)
{
  extern typeof (pow (vol_var_unsigned_char, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_unsigned_char, vol_var_unsigned_short_int);
}
static void
test_pow_1061 (void)
{
  extern typeof (pow (vol_var_unsigned_char, vol_var__Complex_unsigned_short_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_unsigned_char, vol_var__Complex_unsigned_short_int);
}
static void
test_pow_1062 (void)
{
  extern typeof (pow (vol_var_unsigned_char, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_unsigned_char, vol_var_int);
}
static void
test_pow_1063 (void)
{
  extern typeof (pow (vol_var_unsigned_char, vol_var__Complex_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_unsigned_char, vol_var__Complex_int);
}
static void
test_pow_1064 (void)
{
  extern typeof (pow (vol_var_unsigned_char, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_unsigned_char, vol_var_unsigned_int);
}
static void
test_pow_1065 (void)
{
  extern typeof (pow (vol_var_unsigned_char, vol_var__Complex_unsigned_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_unsigned_char, vol_var__Complex_unsigned_int);
}
static void
test_pow_1066 (void)
{
  extern typeof (pow (vol_var_unsigned_char, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_unsigned_char, vol_var_long_int);
}
static void
test_pow_1067 (void)
{
  extern typeof (pow (vol_var_unsigned_char, vol_var__Complex_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_unsigned_char, vol_var__Complex_long_int);
}
static void
test_pow_1068 (void)
{
  extern typeof (pow (vol_var_unsigned_char, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_unsigned_char, vol_var_unsigned_long_int);
}
static void
test_pow_1069 (void)
{
  extern typeof (pow (vol_var_unsigned_char, vol_var__Complex_unsigned_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_unsigned_char, vol_var__Complex_unsigned_long_int);
}
static void
test_pow_1070 (void)
{
  extern typeof (pow (vol_var_unsigned_char, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_unsigned_char, vol_var_long_long_int);
}
static void
test_pow_1071 (void)
{
  extern typeof (pow (vol_var_unsigned_char, vol_var__Complex_long_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_unsigned_char, vol_var__Complex_long_long_int);
}
static void
test_pow_1072 (void)
{
  extern typeof (pow (vol_var_unsigned_char, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_unsigned_char, vol_var_unsigned_long_long_int);
}
static void
test_pow_1073 (void)
{
  extern typeof (pow (vol_var_unsigned_char, vol_var__Complex_unsigned_long_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_unsigned_char, vol_var__Complex_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_pow_1074 (void)
{
  extern typeof (pow (vol_var_unsigned_char, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_unsigned_char, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1075 (void)
{
  extern typeof (pow (vol_var_unsigned_char, vol_var__Complex___int128)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_unsigned_char, vol_var__Complex___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1076 (void)
{
  extern typeof (pow (vol_var_unsigned_char, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_unsigned_char, vol_var_unsigned___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1077 (void)
{
  extern typeof (pow (vol_var_unsigned_char, vol_var__Complex_unsigned___int128)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_unsigned_char, vol_var__Complex_unsigned___int128);
}
#endif
static void
test_pow_1078 (void)
{
  extern typeof (pow (vol_var_unsigned_char, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_unsigned_char, vol_var_enum_e);
}
static void
test_pow_1079 (void)
{
  extern typeof (pow (vol_var_unsigned_char, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_unsigned_char, vol_var__Bool);
}
static void
test_pow_1080 (void)
{
  extern typeof (pow (vol_var_unsigned_char, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_unsigned_char, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_pow_1081 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_char, vol_var__Float16)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_char, vol_var__Float16);
}
#endif
#if defined HUGE_VAL_F16
static void
test_pow_1082 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_char, vol_var___CFLOAT16)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_char, vol_var___CFLOAT16);
}
#endif
static void
test_pow_1083 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_char, vol_var_float)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_char, vol_var_float);
}
static void
test_pow_1084 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_char, vol_var__Complex_float)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_char, vol_var__Complex_float);
}
#if defined HUGE_VAL_F32
static void
test_pow_1085 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_char, vol_var__Float32)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_char, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32
static void
test_pow_1086 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_char, vol_var___CFLOAT32)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_char, vol_var___CFLOAT32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_pow_1087 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_char, vol_var__Float32x)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_char, vol_var__Float32x);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_pow_1088 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_char, vol_var___CFLOAT32X)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_char, vol_var___CFLOAT32X);
}
#endif
static void
test_pow_1089 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_char, vol_var_double)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_char, vol_var_double);
}
static void
test_pow_1090 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_char, vol_var__Complex_double)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_char, vol_var__Complex_double);
}
static void
test_pow_1091 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_char, vol_var_long_double)) var__Complex_long_double __attribute__ ((unused));
  vol_var__Complex_long_double = pow (vol_var__Complex_unsigned_char, vol_var_long_double);
}
static void
test_pow_1092 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_char, vol_var__Complex_long_double)) var__Complex_long_double __attribute__ ((unused));
  vol_var__Complex_long_double = pow (vol_var__Complex_unsigned_char, vol_var__Complex_long_double);
}
#if defined HUGE_VAL_F64
static void
test_pow_1093 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_char, vol_var__Float64)) var___CFLOAT64 __attribute__ ((unused));
  vol_var___CFLOAT64 = pow (vol_var__Complex_unsigned_char, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64
static void
test_pow_1094 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_char, vol_var___CFLOAT64)) var___CFLOAT64 __attribute__ ((unused));
  vol_var___CFLOAT64 = pow (vol_var__Complex_unsigned_char, vol_var___CFLOAT64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_pow_1095 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_char, vol_var__Float64x)) var___CFLOAT64X __attribute__ ((unused));
  vol_var___CFLOAT64X = pow (vol_var__Complex_unsigned_char, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_pow_1096 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_char, vol_var___CFLOAT64X)) var___CFLOAT64X __attribute__ ((unused));
  vol_var___CFLOAT64X = pow (vol_var__Complex_unsigned_char, vol_var___CFLOAT64X);
}
#endif
#if defined HUGE_VAL_F128
static void
test_pow_1097 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_char, vol_var__Float128)) var___CFLOAT128 __attribute__ ((unused));
  vol_var___CFLOAT128 = pow (vol_var__Complex_unsigned_char, vol_var__Float128);
}
#endif
#if defined HUGE_VAL_F128
static void
test_pow_1098 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_char, vol_var___CFLOAT128)) var___CFLOAT128 __attribute__ ((unused));
  vol_var___CFLOAT128 = pow (vol_var__Complex_unsigned_char, vol_var___CFLOAT128);
}
#endif
static void
test_pow_1099 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_char, vol_var_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_char, vol_var_char);
}
static void
test_pow_1100 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_char, vol_var__Complex_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_char, vol_var__Complex_char);
}
static void
test_pow_1101 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_char, vol_var_signed_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_char, vol_var_signed_char);
}
static void
test_pow_1102 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_char, vol_var__Complex_signed_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_char, vol_var__Complex_signed_char);
}
static void
test_pow_1103 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_char, vol_var_unsigned_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_char, vol_var_unsigned_char);
}
static void
test_pow_1104 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_char, vol_var__Complex_unsigned_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_char, vol_var__Complex_unsigned_char);
}
static void
test_pow_1105 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_char, vol_var_short_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_char, vol_var_short_int);
}
static void
test_pow_1106 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_char, vol_var__Complex_short_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_char, vol_var__Complex_short_int);
}
static void
test_pow_1107 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_char, vol_var_unsigned_short_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_char, vol_var_unsigned_short_int);
}
static void
test_pow_1108 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_char, vol_var__Complex_unsigned_short_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_char, vol_var__Complex_unsigned_short_int);
}
static void
test_pow_1109 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_char, vol_var_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_char, vol_var_int);
}
static void
test_pow_1110 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_char, vol_var__Complex_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_char, vol_var__Complex_int);
}
static void
test_pow_1111 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_char, vol_var_unsigned_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_char, vol_var_unsigned_int);
}
static void
test_pow_1112 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_char, vol_var__Complex_unsigned_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_char, vol_var__Complex_unsigned_int);
}
static void
test_pow_1113 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_char, vol_var_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_char, vol_var_long_int);
}
static void
test_pow_1114 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_char, vol_var__Complex_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_char, vol_var__Complex_long_int);
}
static void
test_pow_1115 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_char, vol_var_unsigned_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_char, vol_var_unsigned_long_int);
}
static void
test_pow_1116 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_char, vol_var__Complex_unsigned_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_char, vol_var__Complex_unsigned_long_int);
}
static void
test_pow_1117 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_char, vol_var_long_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_char, vol_var_long_long_int);
}
static void
test_pow_1118 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_char, vol_var__Complex_long_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_char, vol_var__Complex_long_long_int);
}
static void
test_pow_1119 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_char, vol_var_unsigned_long_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_char, vol_var_unsigned_long_long_int);
}
static void
test_pow_1120 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_char, vol_var__Complex_unsigned_long_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_char, vol_var__Complex_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_pow_1121 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_char, vol_var___int128)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_char, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1122 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_char, vol_var__Complex___int128)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_char, vol_var__Complex___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1123 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_char, vol_var_unsigned___int128)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_char, vol_var_unsigned___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1124 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_char, vol_var__Complex_unsigned___int128)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_char, vol_var__Complex_unsigned___int128);
}
#endif
static void
test_pow_1125 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_char, vol_var_enum_e)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_char, vol_var_enum_e);
}
static void
test_pow_1126 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_char, vol_var__Bool)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_char, vol_var__Bool);
}
static void
test_pow_1127 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_char, vol_var_bit_field)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_char, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_pow_1128 (void)
{
  extern typeof (pow (vol_var_short_int, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_short_int, vol_var__Float16);
}
#endif
#if defined HUGE_VAL_F16
static void
test_pow_1129 (void)
{
  extern typeof (pow (vol_var_short_int, vol_var___CFLOAT16)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_short_int, vol_var___CFLOAT16);
}
#endif
static void
test_pow_1130 (void)
{
  extern typeof (pow (vol_var_short_int, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_short_int, vol_var_float);
}
static void
test_pow_1131 (void)
{
  extern typeof (pow (vol_var_short_int, vol_var__Complex_float)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_short_int, vol_var__Complex_float);
}
#if defined HUGE_VAL_F32
static void
test_pow_1132 (void)
{
  extern typeof (pow (vol_var_short_int, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_short_int, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32
static void
test_pow_1133 (void)
{
  extern typeof (pow (vol_var_short_int, vol_var___CFLOAT32)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_short_int, vol_var___CFLOAT32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_pow_1134 (void)
{
  extern typeof (pow (vol_var_short_int, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_short_int, vol_var__Float32x);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_pow_1135 (void)
{
  extern typeof (pow (vol_var_short_int, vol_var___CFLOAT32X)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_short_int, vol_var___CFLOAT32X);
}
#endif
static void
test_pow_1136 (void)
{
  extern typeof (pow (vol_var_short_int, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_short_int, vol_var_double);
}
static void
test_pow_1137 (void)
{
  extern typeof (pow (vol_var_short_int, vol_var__Complex_double)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_short_int, vol_var__Complex_double);
}
static void
test_pow_1138 (void)
{
  extern typeof (pow (vol_var_short_int, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = pow (vol_var_short_int, vol_var_long_double);
}
static void
test_pow_1139 (void)
{
  extern typeof (pow (vol_var_short_int, vol_var__Complex_long_double)) var__Complex_long_double __attribute__ ((unused));
  vol_var__Complex_long_double = pow (vol_var_short_int, vol_var__Complex_long_double);
}
#if defined HUGE_VAL_F64
static void
test_pow_1140 (void)
{
  extern typeof (pow (vol_var_short_int, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = pow (vol_var_short_int, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64
static void
test_pow_1141 (void)
{
  extern typeof (pow (vol_var_short_int, vol_var___CFLOAT64)) var___CFLOAT64 __attribute__ ((unused));
  vol_var___CFLOAT64 = pow (vol_var_short_int, vol_var___CFLOAT64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_pow_1142 (void)
{
  extern typeof (pow (vol_var_short_int, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = pow (vol_var_short_int, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_pow_1143 (void)
{
  extern typeof (pow (vol_var_short_int, vol_var___CFLOAT64X)) var___CFLOAT64X __attribute__ ((unused));
  vol_var___CFLOAT64X = pow (vol_var_short_int, vol_var___CFLOAT64X);
}
#endif
#if defined HUGE_VAL_F128
static void
test_pow_1144 (void)
{
  extern typeof (pow (vol_var_short_int, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = pow (vol_var_short_int, vol_var__Float128);
}
#endif
#if defined HUGE_VAL_F128
static void
test_pow_1145 (void)
{
  extern typeof (pow (vol_var_short_int, vol_var___CFLOAT128)) var___CFLOAT128 __attribute__ ((unused));
  vol_var___CFLOAT128 = pow (vol_var_short_int, vol_var___CFLOAT128);
}
#endif
static void
test_pow_1146 (void)
{
  extern typeof (pow (vol_var_short_int, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_short_int, vol_var_char);
}
static void
test_pow_1147 (void)
{
  extern typeof (pow (vol_var_short_int, vol_var__Complex_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_short_int, vol_var__Complex_char);
}
static void
test_pow_1148 (void)
{
  extern typeof (pow (vol_var_short_int, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_short_int, vol_var_signed_char);
}
static void
test_pow_1149 (void)
{
  extern typeof (pow (vol_var_short_int, vol_var__Complex_signed_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_short_int, vol_var__Complex_signed_char);
}
static void
test_pow_1150 (void)
{
  extern typeof (pow (vol_var_short_int, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_short_int, vol_var_unsigned_char);
}
static void
test_pow_1151 (void)
{
  extern typeof (pow (vol_var_short_int, vol_var__Complex_unsigned_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_short_int, vol_var__Complex_unsigned_char);
}
static void
test_pow_1152 (void)
{
  extern typeof (pow (vol_var_short_int, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_short_int, vol_var_short_int);
}
static void
test_pow_1153 (void)
{
  extern typeof (pow (vol_var_short_int, vol_var__Complex_short_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_short_int, vol_var__Complex_short_int);
}
static void
test_pow_1154 (void)
{
  extern typeof (pow (vol_var_short_int, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_short_int, vol_var_unsigned_short_int);
}
static void
test_pow_1155 (void)
{
  extern typeof (pow (vol_var_short_int, vol_var__Complex_unsigned_short_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_short_int, vol_var__Complex_unsigned_short_int);
}
static void
test_pow_1156 (void)
{
  extern typeof (pow (vol_var_short_int, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_short_int, vol_var_int);
}
static void
test_pow_1157 (void)
{
  extern typeof (pow (vol_var_short_int, vol_var__Complex_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_short_int, vol_var__Complex_int);
}
static void
test_pow_1158 (void)
{
  extern typeof (pow (vol_var_short_int, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_short_int, vol_var_unsigned_int);
}
static void
test_pow_1159 (void)
{
  extern typeof (pow (vol_var_short_int, vol_var__Complex_unsigned_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_short_int, vol_var__Complex_unsigned_int);
}
static void
test_pow_1160 (void)
{
  extern typeof (pow (vol_var_short_int, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_short_int, vol_var_long_int);
}
static void
test_pow_1161 (void)
{
  extern typeof (pow (vol_var_short_int, vol_var__Complex_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_short_int, vol_var__Complex_long_int);
}
static void
test_pow_1162 (void)
{
  extern typeof (pow (vol_var_short_int, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_short_int, vol_var_unsigned_long_int);
}
static void
test_pow_1163 (void)
{
  extern typeof (pow (vol_var_short_int, vol_var__Complex_unsigned_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_short_int, vol_var__Complex_unsigned_long_int);
}
static void
test_pow_1164 (void)
{
  extern typeof (pow (vol_var_short_int, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_short_int, vol_var_long_long_int);
}
static void
test_pow_1165 (void)
{
  extern typeof (pow (vol_var_short_int, vol_var__Complex_long_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_short_int, vol_var__Complex_long_long_int);
}
static void
test_pow_1166 (void)
{
  extern typeof (pow (vol_var_short_int, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_short_int, vol_var_unsigned_long_long_int);
}
static void
test_pow_1167 (void)
{
  extern typeof (pow (vol_var_short_int, vol_var__Complex_unsigned_long_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_short_int, vol_var__Complex_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_pow_1168 (void)
{
  extern typeof (pow (vol_var_short_int, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_short_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1169 (void)
{
  extern typeof (pow (vol_var_short_int, vol_var__Complex___int128)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_short_int, vol_var__Complex___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1170 (void)
{
  extern typeof (pow (vol_var_short_int, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_short_int, vol_var_unsigned___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1171 (void)
{
  extern typeof (pow (vol_var_short_int, vol_var__Complex_unsigned___int128)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_short_int, vol_var__Complex_unsigned___int128);
}
#endif
static void
test_pow_1172 (void)
{
  extern typeof (pow (vol_var_short_int, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_short_int, vol_var_enum_e);
}
static void
test_pow_1173 (void)
{
  extern typeof (pow (vol_var_short_int, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_short_int, vol_var__Bool);
}
static void
test_pow_1174 (void)
{
  extern typeof (pow (vol_var_short_int, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_short_int, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_pow_1175 (void)
{
  extern typeof (pow (vol_var__Complex_short_int, vol_var__Float16)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_short_int, vol_var__Float16);
}
#endif
#if defined HUGE_VAL_F16
static void
test_pow_1176 (void)
{
  extern typeof (pow (vol_var__Complex_short_int, vol_var___CFLOAT16)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_short_int, vol_var___CFLOAT16);
}
#endif
static void
test_pow_1177 (void)
{
  extern typeof (pow (vol_var__Complex_short_int, vol_var_float)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_short_int, vol_var_float);
}
static void
test_pow_1178 (void)
{
  extern typeof (pow (vol_var__Complex_short_int, vol_var__Complex_float)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_short_int, vol_var__Complex_float);
}
#if defined HUGE_VAL_F32
static void
test_pow_1179 (void)
{
  extern typeof (pow (vol_var__Complex_short_int, vol_var__Float32)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_short_int, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32
static void
test_pow_1180 (void)
{
  extern typeof (pow (vol_var__Complex_short_int, vol_var___CFLOAT32)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_short_int, vol_var___CFLOAT32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_pow_1181 (void)
{
  extern typeof (pow (vol_var__Complex_short_int, vol_var__Float32x)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_short_int, vol_var__Float32x);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_pow_1182 (void)
{
  extern typeof (pow (vol_var__Complex_short_int, vol_var___CFLOAT32X)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_short_int, vol_var___CFLOAT32X);
}
#endif
static void
test_pow_1183 (void)
{
  extern typeof (pow (vol_var__Complex_short_int, vol_var_double)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_short_int, vol_var_double);
}
static void
test_pow_1184 (void)
{
  extern typeof (pow (vol_var__Complex_short_int, vol_var__Complex_double)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_short_int, vol_var__Complex_double);
}
static void
test_pow_1185 (void)
{
  extern typeof (pow (vol_var__Complex_short_int, vol_var_long_double)) var__Complex_long_double __attribute__ ((unused));
  vol_var__Complex_long_double = pow (vol_var__Complex_short_int, vol_var_long_double);
}
static void
test_pow_1186 (void)
{
  extern typeof (pow (vol_var__Complex_short_int, vol_var__Complex_long_double)) var__Complex_long_double __attribute__ ((unused));
  vol_var__Complex_long_double = pow (vol_var__Complex_short_int, vol_var__Complex_long_double);
}
#if defined HUGE_VAL_F64
static void
test_pow_1187 (void)
{
  extern typeof (pow (vol_var__Complex_short_int, vol_var__Float64)) var___CFLOAT64 __attribute__ ((unused));
  vol_var___CFLOAT64 = pow (vol_var__Complex_short_int, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64
static void
test_pow_1188 (void)
{
  extern typeof (pow (vol_var__Complex_short_int, vol_var___CFLOAT64)) var___CFLOAT64 __attribute__ ((unused));
  vol_var___CFLOAT64 = pow (vol_var__Complex_short_int, vol_var___CFLOAT64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_pow_1189 (void)
{
  extern typeof (pow (vol_var__Complex_short_int, vol_var__Float64x)) var___CFLOAT64X __attribute__ ((unused));
  vol_var___CFLOAT64X = pow (vol_var__Complex_short_int, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_pow_1190 (void)
{
  extern typeof (pow (vol_var__Complex_short_int, vol_var___CFLOAT64X)) var___CFLOAT64X __attribute__ ((unused));
  vol_var___CFLOAT64X = pow (vol_var__Complex_short_int, vol_var___CFLOAT64X);
}
#endif
#if defined HUGE_VAL_F128
static void
test_pow_1191 (void)
{
  extern typeof (pow (vol_var__Complex_short_int, vol_var__Float128)) var___CFLOAT128 __attribute__ ((unused));
  vol_var___CFLOAT128 = pow (vol_var__Complex_short_int, vol_var__Float128);
}
#endif
#if defined HUGE_VAL_F128
static void
test_pow_1192 (void)
{
  extern typeof (pow (vol_var__Complex_short_int, vol_var___CFLOAT128)) var___CFLOAT128 __attribute__ ((unused));
  vol_var___CFLOAT128 = pow (vol_var__Complex_short_int, vol_var___CFLOAT128);
}
#endif
static void
test_pow_1193 (void)
{
  extern typeof (pow (vol_var__Complex_short_int, vol_var_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_short_int, vol_var_char);
}
static void
test_pow_1194 (void)
{
  extern typeof (pow (vol_var__Complex_short_int, vol_var__Complex_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_short_int, vol_var__Complex_char);
}
static void
test_pow_1195 (void)
{
  extern typeof (pow (vol_var__Complex_short_int, vol_var_signed_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_short_int, vol_var_signed_char);
}
static void
test_pow_1196 (void)
{
  extern typeof (pow (vol_var__Complex_short_int, vol_var__Complex_signed_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_short_int, vol_var__Complex_signed_char);
}
static void
test_pow_1197 (void)
{
  extern typeof (pow (vol_var__Complex_short_int, vol_var_unsigned_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_short_int, vol_var_unsigned_char);
}
static void
test_pow_1198 (void)
{
  extern typeof (pow (vol_var__Complex_short_int, vol_var__Complex_unsigned_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_short_int, vol_var__Complex_unsigned_char);
}
static void
test_pow_1199 (void)
{
  extern typeof (pow (vol_var__Complex_short_int, vol_var_short_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_short_int, vol_var_short_int);
}
static void
test_pow_1200 (void)
{
  extern typeof (pow (vol_var__Complex_short_int, vol_var__Complex_short_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_short_int, vol_var__Complex_short_int);
}
static void
test_pow_1201 (void)
{
  extern typeof (pow (vol_var__Complex_short_int, vol_var_unsigned_short_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_short_int, vol_var_unsigned_short_int);
}
static void
test_pow_1202 (void)
{
  extern typeof (pow (vol_var__Complex_short_int, vol_var__Complex_unsigned_short_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_short_int, vol_var__Complex_unsigned_short_int);
}
static void
test_pow_1203 (void)
{
  extern typeof (pow (vol_var__Complex_short_int, vol_var_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_short_int, vol_var_int);
}
static void
test_pow_1204 (void)
{
  extern typeof (pow (vol_var__Complex_short_int, vol_var__Complex_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_short_int, vol_var__Complex_int);
}
static void
test_pow_1205 (void)
{
  extern typeof (pow (vol_var__Complex_short_int, vol_var_unsigned_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_short_int, vol_var_unsigned_int);
}
static void
test_pow_1206 (void)
{
  extern typeof (pow (vol_var__Complex_short_int, vol_var__Complex_unsigned_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_short_int, vol_var__Complex_unsigned_int);
}
static void
test_pow_1207 (void)
{
  extern typeof (pow (vol_var__Complex_short_int, vol_var_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_short_int, vol_var_long_int);
}
static void
test_pow_1208 (void)
{
  extern typeof (pow (vol_var__Complex_short_int, vol_var__Complex_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_short_int, vol_var__Complex_long_int);
}
static void
test_pow_1209 (void)
{
  extern typeof (pow (vol_var__Complex_short_int, vol_var_unsigned_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_short_int, vol_var_unsigned_long_int);
}
static void
test_pow_1210 (void)
{
  extern typeof (pow (vol_var__Complex_short_int, vol_var__Complex_unsigned_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_short_int, vol_var__Complex_unsigned_long_int);
}
static void
test_pow_1211 (void)
{
  extern typeof (pow (vol_var__Complex_short_int, vol_var_long_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_short_int, vol_var_long_long_int);
}
static void
test_pow_1212 (void)
{
  extern typeof (pow (vol_var__Complex_short_int, vol_var__Complex_long_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_short_int, vol_var__Complex_long_long_int);
}
static void
test_pow_1213 (void)
{
  extern typeof (pow (vol_var__Complex_short_int, vol_var_unsigned_long_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_short_int, vol_var_unsigned_long_long_int);
}
static void
test_pow_1214 (void)
{
  extern typeof (pow (vol_var__Complex_short_int, vol_var__Complex_unsigned_long_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_short_int, vol_var__Complex_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_pow_1215 (void)
{
  extern typeof (pow (vol_var__Complex_short_int, vol_var___int128)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_short_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1216 (void)
{
  extern typeof (pow (vol_var__Complex_short_int, vol_var__Complex___int128)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_short_int, vol_var__Complex___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1217 (void)
{
  extern typeof (pow (vol_var__Complex_short_int, vol_var_unsigned___int128)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_short_int, vol_var_unsigned___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1218 (void)
{
  extern typeof (pow (vol_var__Complex_short_int, vol_var__Complex_unsigned___int128)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_short_int, vol_var__Complex_unsigned___int128);
}
#endif
static void
test_pow_1219 (void)
{
  extern typeof (pow (vol_var__Complex_short_int, vol_var_enum_e)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_short_int, vol_var_enum_e);
}
static void
test_pow_1220 (void)
{
  extern typeof (pow (vol_var__Complex_short_int, vol_var__Bool)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_short_int, vol_var__Bool);
}
static void
test_pow_1221 (void)
{
  extern typeof (pow (vol_var__Complex_short_int, vol_var_bit_field)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_short_int, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_pow_1222 (void)
{
  extern typeof (pow (vol_var_unsigned_short_int, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_unsigned_short_int, vol_var__Float16);
}
#endif
#if defined HUGE_VAL_F16
static void
test_pow_1223 (void)
{
  extern typeof (pow (vol_var_unsigned_short_int, vol_var___CFLOAT16)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_unsigned_short_int, vol_var___CFLOAT16);
}
#endif
static void
test_pow_1224 (void)
{
  extern typeof (pow (vol_var_unsigned_short_int, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_unsigned_short_int, vol_var_float);
}
static void
test_pow_1225 (void)
{
  extern typeof (pow (vol_var_unsigned_short_int, vol_var__Complex_float)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_unsigned_short_int, vol_var__Complex_float);
}
#if defined HUGE_VAL_F32
static void
test_pow_1226 (void)
{
  extern typeof (pow (vol_var_unsigned_short_int, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_unsigned_short_int, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32
static void
test_pow_1227 (void)
{
  extern typeof (pow (vol_var_unsigned_short_int, vol_var___CFLOAT32)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_unsigned_short_int, vol_var___CFLOAT32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_pow_1228 (void)
{
  extern typeof (pow (vol_var_unsigned_short_int, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_unsigned_short_int, vol_var__Float32x);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_pow_1229 (void)
{
  extern typeof (pow (vol_var_unsigned_short_int, vol_var___CFLOAT32X)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_unsigned_short_int, vol_var___CFLOAT32X);
}
#endif
static void
test_pow_1230 (void)
{
  extern typeof (pow (vol_var_unsigned_short_int, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_unsigned_short_int, vol_var_double);
}
static void
test_pow_1231 (void)
{
  extern typeof (pow (vol_var_unsigned_short_int, vol_var__Complex_double)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_unsigned_short_int, vol_var__Complex_double);
}
static void
test_pow_1232 (void)
{
  extern typeof (pow (vol_var_unsigned_short_int, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = pow (vol_var_unsigned_short_int, vol_var_long_double);
}
static void
test_pow_1233 (void)
{
  extern typeof (pow (vol_var_unsigned_short_int, vol_var__Complex_long_double)) var__Complex_long_double __attribute__ ((unused));
  vol_var__Complex_long_double = pow (vol_var_unsigned_short_int, vol_var__Complex_long_double);
}
#if defined HUGE_VAL_F64
static void
test_pow_1234 (void)
{
  extern typeof (pow (vol_var_unsigned_short_int, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = pow (vol_var_unsigned_short_int, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64
static void
test_pow_1235 (void)
{
  extern typeof (pow (vol_var_unsigned_short_int, vol_var___CFLOAT64)) var___CFLOAT64 __attribute__ ((unused));
  vol_var___CFLOAT64 = pow (vol_var_unsigned_short_int, vol_var___CFLOAT64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_pow_1236 (void)
{
  extern typeof (pow (vol_var_unsigned_short_int, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = pow (vol_var_unsigned_short_int, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_pow_1237 (void)
{
  extern typeof (pow (vol_var_unsigned_short_int, vol_var___CFLOAT64X)) var___CFLOAT64X __attribute__ ((unused));
  vol_var___CFLOAT64X = pow (vol_var_unsigned_short_int, vol_var___CFLOAT64X);
}
#endif
#if defined HUGE_VAL_F128
static void
test_pow_1238 (void)
{
  extern typeof (pow (vol_var_unsigned_short_int, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = pow (vol_var_unsigned_short_int, vol_var__Float128);
}
#endif
#if defined HUGE_VAL_F128
static void
test_pow_1239 (void)
{
  extern typeof (pow (vol_var_unsigned_short_int, vol_var___CFLOAT128)) var___CFLOAT128 __attribute__ ((unused));
  vol_var___CFLOAT128 = pow (vol_var_unsigned_short_int, vol_var___CFLOAT128);
}
#endif
static void
test_pow_1240 (void)
{
  extern typeof (pow (vol_var_unsigned_short_int, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_unsigned_short_int, vol_var_char);
}
static void
test_pow_1241 (void)
{
  extern typeof (pow (vol_var_unsigned_short_int, vol_var__Complex_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_unsigned_short_int, vol_var__Complex_char);
}
static void
test_pow_1242 (void)
{
  extern typeof (pow (vol_var_unsigned_short_int, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_unsigned_short_int, vol_var_signed_char);
}
static void
test_pow_1243 (void)
{
  extern typeof (pow (vol_var_unsigned_short_int, vol_var__Complex_signed_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_unsigned_short_int, vol_var__Complex_signed_char);
}
static void
test_pow_1244 (void)
{
  extern typeof (pow (vol_var_unsigned_short_int, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_unsigned_short_int, vol_var_unsigned_char);
}
static void
test_pow_1245 (void)
{
  extern typeof (pow (vol_var_unsigned_short_int, vol_var__Complex_unsigned_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_unsigned_short_int, vol_var__Complex_unsigned_char);
}
static void
test_pow_1246 (void)
{
  extern typeof (pow (vol_var_unsigned_short_int, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_unsigned_short_int, vol_var_short_int);
}
static void
test_pow_1247 (void)
{
  extern typeof (pow (vol_var_unsigned_short_int, vol_var__Complex_short_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_unsigned_short_int, vol_var__Complex_short_int);
}
static void
test_pow_1248 (void)
{
  extern typeof (pow (vol_var_unsigned_short_int, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_unsigned_short_int, vol_var_unsigned_short_int);
}
static void
test_pow_1249 (void)
{
  extern typeof (pow (vol_var_unsigned_short_int, vol_var__Complex_unsigned_short_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_unsigned_short_int, vol_var__Complex_unsigned_short_int);
}
static void
test_pow_1250 (void)
{
  extern typeof (pow (vol_var_unsigned_short_int, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_unsigned_short_int, vol_var_int);
}
static void
test_pow_1251 (void)
{
  extern typeof (pow (vol_var_unsigned_short_int, vol_var__Complex_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_unsigned_short_int, vol_var__Complex_int);
}
static void
test_pow_1252 (void)
{
  extern typeof (pow (vol_var_unsigned_short_int, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_unsigned_short_int, vol_var_unsigned_int);
}
static void
test_pow_1253 (void)
{
  extern typeof (pow (vol_var_unsigned_short_int, vol_var__Complex_unsigned_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_unsigned_short_int, vol_var__Complex_unsigned_int);
}
static void
test_pow_1254 (void)
{
  extern typeof (pow (vol_var_unsigned_short_int, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_unsigned_short_int, vol_var_long_int);
}
static void
test_pow_1255 (void)
{
  extern typeof (pow (vol_var_unsigned_short_int, vol_var__Complex_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_unsigned_short_int, vol_var__Complex_long_int);
}
static void
test_pow_1256 (void)
{
  extern typeof (pow (vol_var_unsigned_short_int, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_unsigned_short_int, vol_var_unsigned_long_int);
}
static void
test_pow_1257 (void)
{
  extern typeof (pow (vol_var_unsigned_short_int, vol_var__Complex_unsigned_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_unsigned_short_int, vol_var__Complex_unsigned_long_int);
}
static void
test_pow_1258 (void)
{
  extern typeof (pow (vol_var_unsigned_short_int, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_unsigned_short_int, vol_var_long_long_int);
}
static void
test_pow_1259 (void)
{
  extern typeof (pow (vol_var_unsigned_short_int, vol_var__Complex_long_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_unsigned_short_int, vol_var__Complex_long_long_int);
}
static void
test_pow_1260 (void)
{
  extern typeof (pow (vol_var_unsigned_short_int, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_unsigned_short_int, vol_var_unsigned_long_long_int);
}
static void
test_pow_1261 (void)
{
  extern typeof (pow (vol_var_unsigned_short_int, vol_var__Complex_unsigned_long_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_unsigned_short_int, vol_var__Complex_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_pow_1262 (void)
{
  extern typeof (pow (vol_var_unsigned_short_int, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_unsigned_short_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1263 (void)
{
  extern typeof (pow (vol_var_unsigned_short_int, vol_var__Complex___int128)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_unsigned_short_int, vol_var__Complex___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1264 (void)
{
  extern typeof (pow (vol_var_unsigned_short_int, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_unsigned_short_int, vol_var_unsigned___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1265 (void)
{
  extern typeof (pow (vol_var_unsigned_short_int, vol_var__Complex_unsigned___int128)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_unsigned_short_int, vol_var__Complex_unsigned___int128);
}
#endif
static void
test_pow_1266 (void)
{
  extern typeof (pow (vol_var_unsigned_short_int, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_unsigned_short_int, vol_var_enum_e);
}
static void
test_pow_1267 (void)
{
  extern typeof (pow (vol_var_unsigned_short_int, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_unsigned_short_int, vol_var__Bool);
}
static void
test_pow_1268 (void)
{
  extern typeof (pow (vol_var_unsigned_short_int, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_unsigned_short_int, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_pow_1269 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_short_int, vol_var__Float16)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_short_int, vol_var__Float16);
}
#endif
#if defined HUGE_VAL_F16
static void
test_pow_1270 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_short_int, vol_var___CFLOAT16)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_short_int, vol_var___CFLOAT16);
}
#endif
static void
test_pow_1271 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_short_int, vol_var_float)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_short_int, vol_var_float);
}
static void
test_pow_1272 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_short_int, vol_var__Complex_float)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_short_int, vol_var__Complex_float);
}
#if defined HUGE_VAL_F32
static void
test_pow_1273 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_short_int, vol_var__Float32)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_short_int, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32
static void
test_pow_1274 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_short_int, vol_var___CFLOAT32)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_short_int, vol_var___CFLOAT32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_pow_1275 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_short_int, vol_var__Float32x)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_short_int, vol_var__Float32x);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_pow_1276 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_short_int, vol_var___CFLOAT32X)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_short_int, vol_var___CFLOAT32X);
}
#endif
static void
test_pow_1277 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_short_int, vol_var_double)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_short_int, vol_var_double);
}
static void
test_pow_1278 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_short_int, vol_var__Complex_double)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_short_int, vol_var__Complex_double);
}
static void
test_pow_1279 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_short_int, vol_var_long_double)) var__Complex_long_double __attribute__ ((unused));
  vol_var__Complex_long_double = pow (vol_var__Complex_unsigned_short_int, vol_var_long_double);
}
static void
test_pow_1280 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_short_int, vol_var__Complex_long_double)) var__Complex_long_double __attribute__ ((unused));
  vol_var__Complex_long_double = pow (vol_var__Complex_unsigned_short_int, vol_var__Complex_long_double);
}
#if defined HUGE_VAL_F64
static void
test_pow_1281 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_short_int, vol_var__Float64)) var___CFLOAT64 __attribute__ ((unused));
  vol_var___CFLOAT64 = pow (vol_var__Complex_unsigned_short_int, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64
static void
test_pow_1282 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_short_int, vol_var___CFLOAT64)) var___CFLOAT64 __attribute__ ((unused));
  vol_var___CFLOAT64 = pow (vol_var__Complex_unsigned_short_int, vol_var___CFLOAT64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_pow_1283 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_short_int, vol_var__Float64x)) var___CFLOAT64X __attribute__ ((unused));
  vol_var___CFLOAT64X = pow (vol_var__Complex_unsigned_short_int, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_pow_1284 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_short_int, vol_var___CFLOAT64X)) var___CFLOAT64X __attribute__ ((unused));
  vol_var___CFLOAT64X = pow (vol_var__Complex_unsigned_short_int, vol_var___CFLOAT64X);
}
#endif
#if defined HUGE_VAL_F128
static void
test_pow_1285 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_short_int, vol_var__Float128)) var___CFLOAT128 __attribute__ ((unused));
  vol_var___CFLOAT128 = pow (vol_var__Complex_unsigned_short_int, vol_var__Float128);
}
#endif
#if defined HUGE_VAL_F128
static void
test_pow_1286 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_short_int, vol_var___CFLOAT128)) var___CFLOAT128 __attribute__ ((unused));
  vol_var___CFLOAT128 = pow (vol_var__Complex_unsigned_short_int, vol_var___CFLOAT128);
}
#endif
static void
test_pow_1287 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_short_int, vol_var_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_short_int, vol_var_char);
}
static void
test_pow_1288 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_short_int, vol_var__Complex_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_short_int, vol_var__Complex_char);
}
static void
test_pow_1289 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_short_int, vol_var_signed_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_short_int, vol_var_signed_char);
}
static void
test_pow_1290 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_short_int, vol_var__Complex_signed_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_short_int, vol_var__Complex_signed_char);
}
static void
test_pow_1291 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_short_int, vol_var_unsigned_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_short_int, vol_var_unsigned_char);
}
static void
test_pow_1292 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_short_int, vol_var__Complex_unsigned_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_short_int, vol_var__Complex_unsigned_char);
}
static void
test_pow_1293 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_short_int, vol_var_short_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_short_int, vol_var_short_int);
}
static void
test_pow_1294 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_short_int, vol_var__Complex_short_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_short_int, vol_var__Complex_short_int);
}
static void
test_pow_1295 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_short_int, vol_var_unsigned_short_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_short_int, vol_var_unsigned_short_int);
}
static void
test_pow_1296 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_short_int, vol_var__Complex_unsigned_short_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_short_int, vol_var__Complex_unsigned_short_int);
}
static void
test_pow_1297 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_short_int, vol_var_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_short_int, vol_var_int);
}
static void
test_pow_1298 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_short_int, vol_var__Complex_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_short_int, vol_var__Complex_int);
}
static void
test_pow_1299 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_short_int, vol_var_unsigned_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_short_int, vol_var_unsigned_int);
}
static void
test_pow_1300 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_short_int, vol_var__Complex_unsigned_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_short_int, vol_var__Complex_unsigned_int);
}
static void
test_pow_1301 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_short_int, vol_var_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_short_int, vol_var_long_int);
}
static void
test_pow_1302 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_short_int, vol_var__Complex_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_short_int, vol_var__Complex_long_int);
}
static void
test_pow_1303 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_short_int, vol_var_unsigned_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_short_int, vol_var_unsigned_long_int);
}
static void
test_pow_1304 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_short_int, vol_var__Complex_unsigned_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_short_int, vol_var__Complex_unsigned_long_int);
}
static void
test_pow_1305 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_short_int, vol_var_long_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_short_int, vol_var_long_long_int);
}
static void
test_pow_1306 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_short_int, vol_var__Complex_long_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_short_int, vol_var__Complex_long_long_int);
}
static void
test_pow_1307 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_short_int, vol_var_unsigned_long_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_short_int, vol_var_unsigned_long_long_int);
}
static void
test_pow_1308 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_short_int, vol_var__Complex_unsigned_long_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_short_int, vol_var__Complex_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_pow_1309 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_short_int, vol_var___int128)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_short_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1310 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_short_int, vol_var__Complex___int128)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_short_int, vol_var__Complex___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1311 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_short_int, vol_var_unsigned___int128)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_short_int, vol_var_unsigned___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1312 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_short_int, vol_var__Complex_unsigned___int128)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_short_int, vol_var__Complex_unsigned___int128);
}
#endif
static void
test_pow_1313 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_short_int, vol_var_enum_e)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_short_int, vol_var_enum_e);
}
static void
test_pow_1314 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_short_int, vol_var__Bool)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_short_int, vol_var__Bool);
}
static void
test_pow_1315 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_short_int, vol_var_bit_field)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_short_int, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_pow_1316 (void)
{
  extern typeof (pow (vol_var_int, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_int, vol_var__Float16);
}
#endif
#if defined HUGE_VAL_F16
static void
test_pow_1317 (void)
{
  extern typeof (pow (vol_var_int, vol_var___CFLOAT16)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_int, vol_var___CFLOAT16);
}
#endif
static void
test_pow_1318 (void)
{
  extern typeof (pow (vol_var_int, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_int, vol_var_float);
}
static void
test_pow_1319 (void)
{
  extern typeof (pow (vol_var_int, vol_var__Complex_float)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_int, vol_var__Complex_float);
}
#if defined HUGE_VAL_F32
static void
test_pow_1320 (void)
{
  extern typeof (pow (vol_var_int, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_int, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32
static void
test_pow_1321 (void)
{
  extern typeof (pow (vol_var_int, vol_var___CFLOAT32)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_int, vol_var___CFLOAT32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_pow_1322 (void)
{
  extern typeof (pow (vol_var_int, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_int, vol_var__Float32x);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_pow_1323 (void)
{
  extern typeof (pow (vol_var_int, vol_var___CFLOAT32X)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_int, vol_var___CFLOAT32X);
}
#endif
static void
test_pow_1324 (void)
{
  extern typeof (pow (vol_var_int, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_int, vol_var_double);
}
static void
test_pow_1325 (void)
{
  extern typeof (pow (vol_var_int, vol_var__Complex_double)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_int, vol_var__Complex_double);
}
static void
test_pow_1326 (void)
{
  extern typeof (pow (vol_var_int, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = pow (vol_var_int, vol_var_long_double);
}
static void
test_pow_1327 (void)
{
  extern typeof (pow (vol_var_int, vol_var__Complex_long_double)) var__Complex_long_double __attribute__ ((unused));
  vol_var__Complex_long_double = pow (vol_var_int, vol_var__Complex_long_double);
}
#if defined HUGE_VAL_F64
static void
test_pow_1328 (void)
{
  extern typeof (pow (vol_var_int, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = pow (vol_var_int, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64
static void
test_pow_1329 (void)
{
  extern typeof (pow (vol_var_int, vol_var___CFLOAT64)) var___CFLOAT64 __attribute__ ((unused));
  vol_var___CFLOAT64 = pow (vol_var_int, vol_var___CFLOAT64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_pow_1330 (void)
{
  extern typeof (pow (vol_var_int, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = pow (vol_var_int, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_pow_1331 (void)
{
  extern typeof (pow (vol_var_int, vol_var___CFLOAT64X)) var___CFLOAT64X __attribute__ ((unused));
  vol_var___CFLOAT64X = pow (vol_var_int, vol_var___CFLOAT64X);
}
#endif
#if defined HUGE_VAL_F128
static void
test_pow_1332 (void)
{
  extern typeof (pow (vol_var_int, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = pow (vol_var_int, vol_var__Float128);
}
#endif
#if defined HUGE_VAL_F128
static void
test_pow_1333 (void)
{
  extern typeof (pow (vol_var_int, vol_var___CFLOAT128)) var___CFLOAT128 __attribute__ ((unused));
  vol_var___CFLOAT128 = pow (vol_var_int, vol_var___CFLOAT128);
}
#endif
static void
test_pow_1334 (void)
{
  extern typeof (pow (vol_var_int, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_int, vol_var_char);
}
static void
test_pow_1335 (void)
{
  extern typeof (pow (vol_var_int, vol_var__Complex_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_int, vol_var__Complex_char);
}
static void
test_pow_1336 (void)
{
  extern typeof (pow (vol_var_int, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_int, vol_var_signed_char);
}
static void
test_pow_1337 (void)
{
  extern typeof (pow (vol_var_int, vol_var__Complex_signed_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_int, vol_var__Complex_signed_char);
}
static void
test_pow_1338 (void)
{
  extern typeof (pow (vol_var_int, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_int, vol_var_unsigned_char);
}
static void
test_pow_1339 (void)
{
  extern typeof (pow (vol_var_int, vol_var__Complex_unsigned_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_int, vol_var__Complex_unsigned_char);
}
static void
test_pow_1340 (void)
{
  extern typeof (pow (vol_var_int, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_int, vol_var_short_int);
}
static void
test_pow_1341 (void)
{
  extern typeof (pow (vol_var_int, vol_var__Complex_short_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_int, vol_var__Complex_short_int);
}
static void
test_pow_1342 (void)
{
  extern typeof (pow (vol_var_int, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_int, vol_var_unsigned_short_int);
}
static void
test_pow_1343 (void)
{
  extern typeof (pow (vol_var_int, vol_var__Complex_unsigned_short_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_int, vol_var__Complex_unsigned_short_int);
}
static void
test_pow_1344 (void)
{
  extern typeof (pow (vol_var_int, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_int, vol_var_int);
}
static void
test_pow_1345 (void)
{
  extern typeof (pow (vol_var_int, vol_var__Complex_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_int, vol_var__Complex_int);
}
static void
test_pow_1346 (void)
{
  extern typeof (pow (vol_var_int, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_int, vol_var_unsigned_int);
}
static void
test_pow_1347 (void)
{
  extern typeof (pow (vol_var_int, vol_var__Complex_unsigned_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_int, vol_var__Complex_unsigned_int);
}
static void
test_pow_1348 (void)
{
  extern typeof (pow (vol_var_int, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_int, vol_var_long_int);
}
static void
test_pow_1349 (void)
{
  extern typeof (pow (vol_var_int, vol_var__Complex_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_int, vol_var__Complex_long_int);
}
static void
test_pow_1350 (void)
{
  extern typeof (pow (vol_var_int, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_int, vol_var_unsigned_long_int);
}
static void
test_pow_1351 (void)
{
  extern typeof (pow (vol_var_int, vol_var__Complex_unsigned_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_int, vol_var__Complex_unsigned_long_int);
}
static void
test_pow_1352 (void)
{
  extern typeof (pow (vol_var_int, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_int, vol_var_long_long_int);
}
static void
test_pow_1353 (void)
{
  extern typeof (pow (vol_var_int, vol_var__Complex_long_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_int, vol_var__Complex_long_long_int);
}
static void
test_pow_1354 (void)
{
  extern typeof (pow (vol_var_int, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_int, vol_var_unsigned_long_long_int);
}
static void
test_pow_1355 (void)
{
  extern typeof (pow (vol_var_int, vol_var__Complex_unsigned_long_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_int, vol_var__Complex_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_pow_1356 (void)
{
  extern typeof (pow (vol_var_int, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1357 (void)
{
  extern typeof (pow (vol_var_int, vol_var__Complex___int128)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_int, vol_var__Complex___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1358 (void)
{
  extern typeof (pow (vol_var_int, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_int, vol_var_unsigned___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1359 (void)
{
  extern typeof (pow (vol_var_int, vol_var__Complex_unsigned___int128)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_int, vol_var__Complex_unsigned___int128);
}
#endif
static void
test_pow_1360 (void)
{
  extern typeof (pow (vol_var_int, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_int, vol_var_enum_e);
}
static void
test_pow_1361 (void)
{
  extern typeof (pow (vol_var_int, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_int, vol_var__Bool);
}
static void
test_pow_1362 (void)
{
  extern typeof (pow (vol_var_int, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_int, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_pow_1363 (void)
{
  extern typeof (pow (vol_var__Complex_int, vol_var__Float16)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_int, vol_var__Float16);
}
#endif
#if defined HUGE_VAL_F16
static void
test_pow_1364 (void)
{
  extern typeof (pow (vol_var__Complex_int, vol_var___CFLOAT16)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_int, vol_var___CFLOAT16);
}
#endif
static void
test_pow_1365 (void)
{
  extern typeof (pow (vol_var__Complex_int, vol_var_float)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_int, vol_var_float);
}
static void
test_pow_1366 (void)
{
  extern typeof (pow (vol_var__Complex_int, vol_var__Complex_float)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_int, vol_var__Complex_float);
}
#if defined HUGE_VAL_F32
static void
test_pow_1367 (void)
{
  extern typeof (pow (vol_var__Complex_int, vol_var__Float32)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_int, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32
static void
test_pow_1368 (void)
{
  extern typeof (pow (vol_var__Complex_int, vol_var___CFLOAT32)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_int, vol_var___CFLOAT32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_pow_1369 (void)
{
  extern typeof (pow (vol_var__Complex_int, vol_var__Float32x)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_int, vol_var__Float32x);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_pow_1370 (void)
{
  extern typeof (pow (vol_var__Complex_int, vol_var___CFLOAT32X)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_int, vol_var___CFLOAT32X);
}
#endif
static void
test_pow_1371 (void)
{
  extern typeof (pow (vol_var__Complex_int, vol_var_double)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_int, vol_var_double);
}
static void
test_pow_1372 (void)
{
  extern typeof (pow (vol_var__Complex_int, vol_var__Complex_double)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_int, vol_var__Complex_double);
}
static void
test_pow_1373 (void)
{
  extern typeof (pow (vol_var__Complex_int, vol_var_long_double)) var__Complex_long_double __attribute__ ((unused));
  vol_var__Complex_long_double = pow (vol_var__Complex_int, vol_var_long_double);
}
static void
test_pow_1374 (void)
{
  extern typeof (pow (vol_var__Complex_int, vol_var__Complex_long_double)) var__Complex_long_double __attribute__ ((unused));
  vol_var__Complex_long_double = pow (vol_var__Complex_int, vol_var__Complex_long_double);
}
#if defined HUGE_VAL_F64
static void
test_pow_1375 (void)
{
  extern typeof (pow (vol_var__Complex_int, vol_var__Float64)) var___CFLOAT64 __attribute__ ((unused));
  vol_var___CFLOAT64 = pow (vol_var__Complex_int, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64
static void
test_pow_1376 (void)
{
  extern typeof (pow (vol_var__Complex_int, vol_var___CFLOAT64)) var___CFLOAT64 __attribute__ ((unused));
  vol_var___CFLOAT64 = pow (vol_var__Complex_int, vol_var___CFLOAT64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_pow_1377 (void)
{
  extern typeof (pow (vol_var__Complex_int, vol_var__Float64x)) var___CFLOAT64X __attribute__ ((unused));
  vol_var___CFLOAT64X = pow (vol_var__Complex_int, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_pow_1378 (void)
{
  extern typeof (pow (vol_var__Complex_int, vol_var___CFLOAT64X)) var___CFLOAT64X __attribute__ ((unused));
  vol_var___CFLOAT64X = pow (vol_var__Complex_int, vol_var___CFLOAT64X);
}
#endif
#if defined HUGE_VAL_F128
static void
test_pow_1379 (void)
{
  extern typeof (pow (vol_var__Complex_int, vol_var__Float128)) var___CFLOAT128 __attribute__ ((unused));
  vol_var___CFLOAT128 = pow (vol_var__Complex_int, vol_var__Float128);
}
#endif
#if defined HUGE_VAL_F128
static void
test_pow_1380 (void)
{
  extern typeof (pow (vol_var__Complex_int, vol_var___CFLOAT128)) var___CFLOAT128 __attribute__ ((unused));
  vol_var___CFLOAT128 = pow (vol_var__Complex_int, vol_var___CFLOAT128);
}
#endif
static void
test_pow_1381 (void)
{
  extern typeof (pow (vol_var__Complex_int, vol_var_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_int, vol_var_char);
}
static void
test_pow_1382 (void)
{
  extern typeof (pow (vol_var__Complex_int, vol_var__Complex_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_int, vol_var__Complex_char);
}
static void
test_pow_1383 (void)
{
  extern typeof (pow (vol_var__Complex_int, vol_var_signed_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_int, vol_var_signed_char);
}
static void
test_pow_1384 (void)
{
  extern typeof (pow (vol_var__Complex_int, vol_var__Complex_signed_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_int, vol_var__Complex_signed_char);
}
static void
test_pow_1385 (void)
{
  extern typeof (pow (vol_var__Complex_int, vol_var_unsigned_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_int, vol_var_unsigned_char);
}
static void
test_pow_1386 (void)
{
  extern typeof (pow (vol_var__Complex_int, vol_var__Complex_unsigned_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_int, vol_var__Complex_unsigned_char);
}
static void
test_pow_1387 (void)
{
  extern typeof (pow (vol_var__Complex_int, vol_var_short_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_int, vol_var_short_int);
}
static void
test_pow_1388 (void)
{
  extern typeof (pow (vol_var__Complex_int, vol_var__Complex_short_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_int, vol_var__Complex_short_int);
}
static void
test_pow_1389 (void)
{
  extern typeof (pow (vol_var__Complex_int, vol_var_unsigned_short_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_int, vol_var_unsigned_short_int);
}
static void
test_pow_1390 (void)
{
  extern typeof (pow (vol_var__Complex_int, vol_var__Complex_unsigned_short_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_int, vol_var__Complex_unsigned_short_int);
}
static void
test_pow_1391 (void)
{
  extern typeof (pow (vol_var__Complex_int, vol_var_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_int, vol_var_int);
}
static void
test_pow_1392 (void)
{
  extern typeof (pow (vol_var__Complex_int, vol_var__Complex_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_int, vol_var__Complex_int);
}
static void
test_pow_1393 (void)
{
  extern typeof (pow (vol_var__Complex_int, vol_var_unsigned_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_int, vol_var_unsigned_int);
}
static void
test_pow_1394 (void)
{
  extern typeof (pow (vol_var__Complex_int, vol_var__Complex_unsigned_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_int, vol_var__Complex_unsigned_int);
}
static void
test_pow_1395 (void)
{
  extern typeof (pow (vol_var__Complex_int, vol_var_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_int, vol_var_long_int);
}
static void
test_pow_1396 (void)
{
  extern typeof (pow (vol_var__Complex_int, vol_var__Complex_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_int, vol_var__Complex_long_int);
}
static void
test_pow_1397 (void)
{
  extern typeof (pow (vol_var__Complex_int, vol_var_unsigned_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_int, vol_var_unsigned_long_int);
}
static void
test_pow_1398 (void)
{
  extern typeof (pow (vol_var__Complex_int, vol_var__Complex_unsigned_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_int, vol_var__Complex_unsigned_long_int);
}
static void
test_pow_1399 (void)
{
  extern typeof (pow (vol_var__Complex_int, vol_var_long_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_int, vol_var_long_long_int);
}
static void
test_pow_1400 (void)
{
  extern typeof (pow (vol_var__Complex_int, vol_var__Complex_long_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_int, vol_var__Complex_long_long_int);
}
static void
test_pow_1401 (void)
{
  extern typeof (pow (vol_var__Complex_int, vol_var_unsigned_long_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_int, vol_var_unsigned_long_long_int);
}
static void
test_pow_1402 (void)
{
  extern typeof (pow (vol_var__Complex_int, vol_var__Complex_unsigned_long_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_int, vol_var__Complex_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_pow_1403 (void)
{
  extern typeof (pow (vol_var__Complex_int, vol_var___int128)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1404 (void)
{
  extern typeof (pow (vol_var__Complex_int, vol_var__Complex___int128)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_int, vol_var__Complex___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1405 (void)
{
  extern typeof (pow (vol_var__Complex_int, vol_var_unsigned___int128)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_int, vol_var_unsigned___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1406 (void)
{
  extern typeof (pow (vol_var__Complex_int, vol_var__Complex_unsigned___int128)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_int, vol_var__Complex_unsigned___int128);
}
#endif
static void
test_pow_1407 (void)
{
  extern typeof (pow (vol_var__Complex_int, vol_var_enum_e)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_int, vol_var_enum_e);
}
static void
test_pow_1408 (void)
{
  extern typeof (pow (vol_var__Complex_int, vol_var__Bool)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_int, vol_var__Bool);
}
static void
test_pow_1409 (void)
{
  extern typeof (pow (vol_var__Complex_int, vol_var_bit_field)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_int, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_pow_1410 (void)
{
  extern typeof (pow (vol_var_unsigned_int, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_unsigned_int, vol_var__Float16);
}
#endif
#if defined HUGE_VAL_F16
static void
test_pow_1411 (void)
{
  extern typeof (pow (vol_var_unsigned_int, vol_var___CFLOAT16)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_unsigned_int, vol_var___CFLOAT16);
}
#endif
static void
test_pow_1412 (void)
{
  extern typeof (pow (vol_var_unsigned_int, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_unsigned_int, vol_var_float);
}
static void
test_pow_1413 (void)
{
  extern typeof (pow (vol_var_unsigned_int, vol_var__Complex_float)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_unsigned_int, vol_var__Complex_float);
}
#if defined HUGE_VAL_F32
static void
test_pow_1414 (void)
{
  extern typeof (pow (vol_var_unsigned_int, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_unsigned_int, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32
static void
test_pow_1415 (void)
{
  extern typeof (pow (vol_var_unsigned_int, vol_var___CFLOAT32)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_unsigned_int, vol_var___CFLOAT32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_pow_1416 (void)
{
  extern typeof (pow (vol_var_unsigned_int, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_unsigned_int, vol_var__Float32x);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_pow_1417 (void)
{
  extern typeof (pow (vol_var_unsigned_int, vol_var___CFLOAT32X)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_unsigned_int, vol_var___CFLOAT32X);
}
#endif
static void
test_pow_1418 (void)
{
  extern typeof (pow (vol_var_unsigned_int, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_unsigned_int, vol_var_double);
}
static void
test_pow_1419 (void)
{
  extern typeof (pow (vol_var_unsigned_int, vol_var__Complex_double)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_unsigned_int, vol_var__Complex_double);
}
static void
test_pow_1420 (void)
{
  extern typeof (pow (vol_var_unsigned_int, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = pow (vol_var_unsigned_int, vol_var_long_double);
}
static void
test_pow_1421 (void)
{
  extern typeof (pow (vol_var_unsigned_int, vol_var__Complex_long_double)) var__Complex_long_double __attribute__ ((unused));
  vol_var__Complex_long_double = pow (vol_var_unsigned_int, vol_var__Complex_long_double);
}
#if defined HUGE_VAL_F64
static void
test_pow_1422 (void)
{
  extern typeof (pow (vol_var_unsigned_int, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = pow (vol_var_unsigned_int, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64
static void
test_pow_1423 (void)
{
  extern typeof (pow (vol_var_unsigned_int, vol_var___CFLOAT64)) var___CFLOAT64 __attribute__ ((unused));
  vol_var___CFLOAT64 = pow (vol_var_unsigned_int, vol_var___CFLOAT64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_pow_1424 (void)
{
  extern typeof (pow (vol_var_unsigned_int, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = pow (vol_var_unsigned_int, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_pow_1425 (void)
{
  extern typeof (pow (vol_var_unsigned_int, vol_var___CFLOAT64X)) var___CFLOAT64X __attribute__ ((unused));
  vol_var___CFLOAT64X = pow (vol_var_unsigned_int, vol_var___CFLOAT64X);
}
#endif
#if defined HUGE_VAL_F128
static void
test_pow_1426 (void)
{
  extern typeof (pow (vol_var_unsigned_int, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = pow (vol_var_unsigned_int, vol_var__Float128);
}
#endif
#if defined HUGE_VAL_F128
static void
test_pow_1427 (void)
{
  extern typeof (pow (vol_var_unsigned_int, vol_var___CFLOAT128)) var___CFLOAT128 __attribute__ ((unused));
  vol_var___CFLOAT128 = pow (vol_var_unsigned_int, vol_var___CFLOAT128);
}
#endif
static void
test_pow_1428 (void)
{
  extern typeof (pow (vol_var_unsigned_int, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_unsigned_int, vol_var_char);
}
static void
test_pow_1429 (void)
{
  extern typeof (pow (vol_var_unsigned_int, vol_var__Complex_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_unsigned_int, vol_var__Complex_char);
}
static void
test_pow_1430 (void)
{
  extern typeof (pow (vol_var_unsigned_int, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_unsigned_int, vol_var_signed_char);
}
static void
test_pow_1431 (void)
{
  extern typeof (pow (vol_var_unsigned_int, vol_var__Complex_signed_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_unsigned_int, vol_var__Complex_signed_char);
}
static void
test_pow_1432 (void)
{
  extern typeof (pow (vol_var_unsigned_int, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_unsigned_int, vol_var_unsigned_char);
}
static void
test_pow_1433 (void)
{
  extern typeof (pow (vol_var_unsigned_int, vol_var__Complex_unsigned_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_unsigned_int, vol_var__Complex_unsigned_char);
}
static void
test_pow_1434 (void)
{
  extern typeof (pow (vol_var_unsigned_int, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_unsigned_int, vol_var_short_int);
}
static void
test_pow_1435 (void)
{
  extern typeof (pow (vol_var_unsigned_int, vol_var__Complex_short_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_unsigned_int, vol_var__Complex_short_int);
}
static void
test_pow_1436 (void)
{
  extern typeof (pow (vol_var_unsigned_int, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_unsigned_int, vol_var_unsigned_short_int);
}
static void
test_pow_1437 (void)
{
  extern typeof (pow (vol_var_unsigned_int, vol_var__Complex_unsigned_short_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_unsigned_int, vol_var__Complex_unsigned_short_int);
}
static void
test_pow_1438 (void)
{
  extern typeof (pow (vol_var_unsigned_int, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_unsigned_int, vol_var_int);
}
static void
test_pow_1439 (void)
{
  extern typeof (pow (vol_var_unsigned_int, vol_var__Complex_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_unsigned_int, vol_var__Complex_int);
}
static void
test_pow_1440 (void)
{
  extern typeof (pow (vol_var_unsigned_int, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_unsigned_int, vol_var_unsigned_int);
}
static void
test_pow_1441 (void)
{
  extern typeof (pow (vol_var_unsigned_int, vol_var__Complex_unsigned_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_unsigned_int, vol_var__Complex_unsigned_int);
}
static void
test_pow_1442 (void)
{
  extern typeof (pow (vol_var_unsigned_int, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_unsigned_int, vol_var_long_int);
}
static void
test_pow_1443 (void)
{
  extern typeof (pow (vol_var_unsigned_int, vol_var__Complex_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_unsigned_int, vol_var__Complex_long_int);
}
static void
test_pow_1444 (void)
{
  extern typeof (pow (vol_var_unsigned_int, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_unsigned_int, vol_var_unsigned_long_int);
}
static void
test_pow_1445 (void)
{
  extern typeof (pow (vol_var_unsigned_int, vol_var__Complex_unsigned_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_unsigned_int, vol_var__Complex_unsigned_long_int);
}
static void
test_pow_1446 (void)
{
  extern typeof (pow (vol_var_unsigned_int, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_unsigned_int, vol_var_long_long_int);
}
static void
test_pow_1447 (void)
{
  extern typeof (pow (vol_var_unsigned_int, vol_var__Complex_long_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_unsigned_int, vol_var__Complex_long_long_int);
}
static void
test_pow_1448 (void)
{
  extern typeof (pow (vol_var_unsigned_int, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_unsigned_int, vol_var_unsigned_long_long_int);
}
static void
test_pow_1449 (void)
{
  extern typeof (pow (vol_var_unsigned_int, vol_var__Complex_unsigned_long_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_unsigned_int, vol_var__Complex_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_pow_1450 (void)
{
  extern typeof (pow (vol_var_unsigned_int, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_unsigned_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1451 (void)
{
  extern typeof (pow (vol_var_unsigned_int, vol_var__Complex___int128)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_unsigned_int, vol_var__Complex___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1452 (void)
{
  extern typeof (pow (vol_var_unsigned_int, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_unsigned_int, vol_var_unsigned___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1453 (void)
{
  extern typeof (pow (vol_var_unsigned_int, vol_var__Complex_unsigned___int128)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_unsigned_int, vol_var__Complex_unsigned___int128);
}
#endif
static void
test_pow_1454 (void)
{
  extern typeof (pow (vol_var_unsigned_int, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_unsigned_int, vol_var_enum_e);
}
static void
test_pow_1455 (void)
{
  extern typeof (pow (vol_var_unsigned_int, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_unsigned_int, vol_var__Bool);
}
static void
test_pow_1456 (void)
{
  extern typeof (pow (vol_var_unsigned_int, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_unsigned_int, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_pow_1457 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_int, vol_var__Float16)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_int, vol_var__Float16);
}
#endif
#if defined HUGE_VAL_F16
static void
test_pow_1458 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_int, vol_var___CFLOAT16)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_int, vol_var___CFLOAT16);
}
#endif
static void
test_pow_1459 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_int, vol_var_float)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_int, vol_var_float);
}
static void
test_pow_1460 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_int, vol_var__Complex_float)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_int, vol_var__Complex_float);
}
#if defined HUGE_VAL_F32
static void
test_pow_1461 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_int, vol_var__Float32)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_int, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32
static void
test_pow_1462 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_int, vol_var___CFLOAT32)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_int, vol_var___CFLOAT32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_pow_1463 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_int, vol_var__Float32x)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_int, vol_var__Float32x);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_pow_1464 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_int, vol_var___CFLOAT32X)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_int, vol_var___CFLOAT32X);
}
#endif
static void
test_pow_1465 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_int, vol_var_double)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_int, vol_var_double);
}
static void
test_pow_1466 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_int, vol_var__Complex_double)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_int, vol_var__Complex_double);
}
static void
test_pow_1467 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_int, vol_var_long_double)) var__Complex_long_double __attribute__ ((unused));
  vol_var__Complex_long_double = pow (vol_var__Complex_unsigned_int, vol_var_long_double);
}
static void
test_pow_1468 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_int, vol_var__Complex_long_double)) var__Complex_long_double __attribute__ ((unused));
  vol_var__Complex_long_double = pow (vol_var__Complex_unsigned_int, vol_var__Complex_long_double);
}
#if defined HUGE_VAL_F64
static void
test_pow_1469 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_int, vol_var__Float64)) var___CFLOAT64 __attribute__ ((unused));
  vol_var___CFLOAT64 = pow (vol_var__Complex_unsigned_int, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64
static void
test_pow_1470 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_int, vol_var___CFLOAT64)) var___CFLOAT64 __attribute__ ((unused));
  vol_var___CFLOAT64 = pow (vol_var__Complex_unsigned_int, vol_var___CFLOAT64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_pow_1471 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_int, vol_var__Float64x)) var___CFLOAT64X __attribute__ ((unused));
  vol_var___CFLOAT64X = pow (vol_var__Complex_unsigned_int, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_pow_1472 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_int, vol_var___CFLOAT64X)) var___CFLOAT64X __attribute__ ((unused));
  vol_var___CFLOAT64X = pow (vol_var__Complex_unsigned_int, vol_var___CFLOAT64X);
}
#endif
#if defined HUGE_VAL_F128
static void
test_pow_1473 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_int, vol_var__Float128)) var___CFLOAT128 __attribute__ ((unused));
  vol_var___CFLOAT128 = pow (vol_var__Complex_unsigned_int, vol_var__Float128);
}
#endif
#if defined HUGE_VAL_F128
static void
test_pow_1474 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_int, vol_var___CFLOAT128)) var___CFLOAT128 __attribute__ ((unused));
  vol_var___CFLOAT128 = pow (vol_var__Complex_unsigned_int, vol_var___CFLOAT128);
}
#endif
static void
test_pow_1475 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_int, vol_var_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_int, vol_var_char);
}
static void
test_pow_1476 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_int, vol_var__Complex_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_int, vol_var__Complex_char);
}
static void
test_pow_1477 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_int, vol_var_signed_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_int, vol_var_signed_char);
}
static void
test_pow_1478 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_int, vol_var__Complex_signed_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_int, vol_var__Complex_signed_char);
}
static void
test_pow_1479 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_int, vol_var_unsigned_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_int, vol_var_unsigned_char);
}
static void
test_pow_1480 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_int, vol_var__Complex_unsigned_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_int, vol_var__Complex_unsigned_char);
}
static void
test_pow_1481 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_int, vol_var_short_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_int, vol_var_short_int);
}
static void
test_pow_1482 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_int, vol_var__Complex_short_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_int, vol_var__Complex_short_int);
}
static void
test_pow_1483 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_int, vol_var_unsigned_short_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_int, vol_var_unsigned_short_int);
}
static void
test_pow_1484 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_int, vol_var__Complex_unsigned_short_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_int, vol_var__Complex_unsigned_short_int);
}
static void
test_pow_1485 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_int, vol_var_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_int, vol_var_int);
}
static void
test_pow_1486 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_int, vol_var__Complex_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_int, vol_var__Complex_int);
}
static void
test_pow_1487 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_int, vol_var_unsigned_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_int, vol_var_unsigned_int);
}
static void
test_pow_1488 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_int, vol_var__Complex_unsigned_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_int, vol_var__Complex_unsigned_int);
}
static void
test_pow_1489 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_int, vol_var_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_int, vol_var_long_int);
}
static void
test_pow_1490 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_int, vol_var__Complex_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_int, vol_var__Complex_long_int);
}
static void
test_pow_1491 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_int, vol_var_unsigned_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_int, vol_var_unsigned_long_int);
}
static void
test_pow_1492 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_int, vol_var__Complex_unsigned_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_int, vol_var__Complex_unsigned_long_int);
}
static void
test_pow_1493 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_int, vol_var_long_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_int, vol_var_long_long_int);
}
static void
test_pow_1494 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_int, vol_var__Complex_long_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_int, vol_var__Complex_long_long_int);
}
static void
test_pow_1495 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_int, vol_var_unsigned_long_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_int, vol_var_unsigned_long_long_int);
}
static void
test_pow_1496 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_int, vol_var__Complex_unsigned_long_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_int, vol_var__Complex_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_pow_1497 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_int, vol_var___int128)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1498 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_int, vol_var__Complex___int128)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_int, vol_var__Complex___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1499 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_int, vol_var_unsigned___int128)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_int, vol_var_unsigned___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1500 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_int, vol_var__Complex_unsigned___int128)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_int, vol_var__Complex_unsigned___int128);
}
#endif
static void
test_pow_1501 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_int, vol_var_enum_e)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_int, vol_var_enum_e);
}
static void
test_pow_1502 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_int, vol_var__Bool)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_int, vol_var__Bool);
}
static void
test_pow_1503 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_int, vol_var_bit_field)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_int, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_pow_1504 (void)
{
  extern typeof (pow (vol_var_long_int, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_long_int, vol_var__Float16);
}
#endif
#if defined HUGE_VAL_F16
static void
test_pow_1505 (void)
{
  extern typeof (pow (vol_var_long_int, vol_var___CFLOAT16)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_long_int, vol_var___CFLOAT16);
}
#endif
static void
test_pow_1506 (void)
{
  extern typeof (pow (vol_var_long_int, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_long_int, vol_var_float);
}
static void
test_pow_1507 (void)
{
  extern typeof (pow (vol_var_long_int, vol_var__Complex_float)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_long_int, vol_var__Complex_float);
}
#if defined HUGE_VAL_F32
static void
test_pow_1508 (void)
{
  extern typeof (pow (vol_var_long_int, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_long_int, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32
static void
test_pow_1509 (void)
{
  extern typeof (pow (vol_var_long_int, vol_var___CFLOAT32)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_long_int, vol_var___CFLOAT32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_pow_1510 (void)
{
  extern typeof (pow (vol_var_long_int, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_long_int, vol_var__Float32x);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_pow_1511 (void)
{
  extern typeof (pow (vol_var_long_int, vol_var___CFLOAT32X)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_long_int, vol_var___CFLOAT32X);
}
#endif
static void
test_pow_1512 (void)
{
  extern typeof (pow (vol_var_long_int, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_long_int, vol_var_double);
}
static void
test_pow_1513 (void)
{
  extern typeof (pow (vol_var_long_int, vol_var__Complex_double)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_long_int, vol_var__Complex_double);
}
static void
test_pow_1514 (void)
{
  extern typeof (pow (vol_var_long_int, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = pow (vol_var_long_int, vol_var_long_double);
}
static void
test_pow_1515 (void)
{
  extern typeof (pow (vol_var_long_int, vol_var__Complex_long_double)) var__Complex_long_double __attribute__ ((unused));
  vol_var__Complex_long_double = pow (vol_var_long_int, vol_var__Complex_long_double);
}
#if defined HUGE_VAL_F64
static void
test_pow_1516 (void)
{
  extern typeof (pow (vol_var_long_int, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = pow (vol_var_long_int, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64
static void
test_pow_1517 (void)
{
  extern typeof (pow (vol_var_long_int, vol_var___CFLOAT64)) var___CFLOAT64 __attribute__ ((unused));
  vol_var___CFLOAT64 = pow (vol_var_long_int, vol_var___CFLOAT64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_pow_1518 (void)
{
  extern typeof (pow (vol_var_long_int, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = pow (vol_var_long_int, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_pow_1519 (void)
{
  extern typeof (pow (vol_var_long_int, vol_var___CFLOAT64X)) var___CFLOAT64X __attribute__ ((unused));
  vol_var___CFLOAT64X = pow (vol_var_long_int, vol_var___CFLOAT64X);
}
#endif
#if defined HUGE_VAL_F128
static void
test_pow_1520 (void)
{
  extern typeof (pow (vol_var_long_int, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = pow (vol_var_long_int, vol_var__Float128);
}
#endif
#if defined HUGE_VAL_F128
static void
test_pow_1521 (void)
{
  extern typeof (pow (vol_var_long_int, vol_var___CFLOAT128)) var___CFLOAT128 __attribute__ ((unused));
  vol_var___CFLOAT128 = pow (vol_var_long_int, vol_var___CFLOAT128);
}
#endif
static void
test_pow_1522 (void)
{
  extern typeof (pow (vol_var_long_int, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_long_int, vol_var_char);
}
static void
test_pow_1523 (void)
{
  extern typeof (pow (vol_var_long_int, vol_var__Complex_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_long_int, vol_var__Complex_char);
}
static void
test_pow_1524 (void)
{
  extern typeof (pow (vol_var_long_int, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_long_int, vol_var_signed_char);
}
static void
test_pow_1525 (void)
{
  extern typeof (pow (vol_var_long_int, vol_var__Complex_signed_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_long_int, vol_var__Complex_signed_char);
}
static void
test_pow_1526 (void)
{
  extern typeof (pow (vol_var_long_int, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_long_int, vol_var_unsigned_char);
}
static void
test_pow_1527 (void)
{
  extern typeof (pow (vol_var_long_int, vol_var__Complex_unsigned_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_long_int, vol_var__Complex_unsigned_char);
}
static void
test_pow_1528 (void)
{
  extern typeof (pow (vol_var_long_int, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_long_int, vol_var_short_int);
}
static void
test_pow_1529 (void)
{
  extern typeof (pow (vol_var_long_int, vol_var__Complex_short_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_long_int, vol_var__Complex_short_int);
}
static void
test_pow_1530 (void)
{
  extern typeof (pow (vol_var_long_int, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_long_int, vol_var_unsigned_short_int);
}
static void
test_pow_1531 (void)
{
  extern typeof (pow (vol_var_long_int, vol_var__Complex_unsigned_short_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_long_int, vol_var__Complex_unsigned_short_int);
}
static void
test_pow_1532 (void)
{
  extern typeof (pow (vol_var_long_int, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_long_int, vol_var_int);
}
static void
test_pow_1533 (void)
{
  extern typeof (pow (vol_var_long_int, vol_var__Complex_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_long_int, vol_var__Complex_int);
}
static void
test_pow_1534 (void)
{
  extern typeof (pow (vol_var_long_int, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_long_int, vol_var_unsigned_int);
}
static void
test_pow_1535 (void)
{
  extern typeof (pow (vol_var_long_int, vol_var__Complex_unsigned_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_long_int, vol_var__Complex_unsigned_int);
}
static void
test_pow_1536 (void)
{
  extern typeof (pow (vol_var_long_int, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_long_int, vol_var_long_int);
}
static void
test_pow_1537 (void)
{
  extern typeof (pow (vol_var_long_int, vol_var__Complex_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_long_int, vol_var__Complex_long_int);
}
static void
test_pow_1538 (void)
{
  extern typeof (pow (vol_var_long_int, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_long_int, vol_var_unsigned_long_int);
}
static void
test_pow_1539 (void)
{
  extern typeof (pow (vol_var_long_int, vol_var__Complex_unsigned_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_long_int, vol_var__Complex_unsigned_long_int);
}
static void
test_pow_1540 (void)
{
  extern typeof (pow (vol_var_long_int, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_long_int, vol_var_long_long_int);
}
static void
test_pow_1541 (void)
{
  extern typeof (pow (vol_var_long_int, vol_var__Complex_long_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_long_int, vol_var__Complex_long_long_int);
}
static void
test_pow_1542 (void)
{
  extern typeof (pow (vol_var_long_int, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_long_int, vol_var_unsigned_long_long_int);
}
static void
test_pow_1543 (void)
{
  extern typeof (pow (vol_var_long_int, vol_var__Complex_unsigned_long_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_long_int, vol_var__Complex_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_pow_1544 (void)
{
  extern typeof (pow (vol_var_long_int, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_long_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1545 (void)
{
  extern typeof (pow (vol_var_long_int, vol_var__Complex___int128)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_long_int, vol_var__Complex___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1546 (void)
{
  extern typeof (pow (vol_var_long_int, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_long_int, vol_var_unsigned___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1547 (void)
{
  extern typeof (pow (vol_var_long_int, vol_var__Complex_unsigned___int128)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_long_int, vol_var__Complex_unsigned___int128);
}
#endif
static void
test_pow_1548 (void)
{
  extern typeof (pow (vol_var_long_int, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_long_int, vol_var_enum_e);
}
static void
test_pow_1549 (void)
{
  extern typeof (pow (vol_var_long_int, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_long_int, vol_var__Bool);
}
static void
test_pow_1550 (void)
{
  extern typeof (pow (vol_var_long_int, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_long_int, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_pow_1551 (void)
{
  extern typeof (pow (vol_var__Complex_long_int, vol_var__Float16)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_long_int, vol_var__Float16);
}
#endif
#if defined HUGE_VAL_F16
static void
test_pow_1552 (void)
{
  extern typeof (pow (vol_var__Complex_long_int, vol_var___CFLOAT16)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_long_int, vol_var___CFLOAT16);
}
#endif
static void
test_pow_1553 (void)
{
  extern typeof (pow (vol_var__Complex_long_int, vol_var_float)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_long_int, vol_var_float);
}
static void
test_pow_1554 (void)
{
  extern typeof (pow (vol_var__Complex_long_int, vol_var__Complex_float)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_long_int, vol_var__Complex_float);
}
#if defined HUGE_VAL_F32
static void
test_pow_1555 (void)
{
  extern typeof (pow (vol_var__Complex_long_int, vol_var__Float32)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_long_int, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32
static void
test_pow_1556 (void)
{
  extern typeof (pow (vol_var__Complex_long_int, vol_var___CFLOAT32)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_long_int, vol_var___CFLOAT32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_pow_1557 (void)
{
  extern typeof (pow (vol_var__Complex_long_int, vol_var__Float32x)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_long_int, vol_var__Float32x);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_pow_1558 (void)
{
  extern typeof (pow (vol_var__Complex_long_int, vol_var___CFLOAT32X)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_long_int, vol_var___CFLOAT32X);
}
#endif
static void
test_pow_1559 (void)
{
  extern typeof (pow (vol_var__Complex_long_int, vol_var_double)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_long_int, vol_var_double);
}
static void
test_pow_1560 (void)
{
  extern typeof (pow (vol_var__Complex_long_int, vol_var__Complex_double)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_long_int, vol_var__Complex_double);
}
static void
test_pow_1561 (void)
{
  extern typeof (pow (vol_var__Complex_long_int, vol_var_long_double)) var__Complex_long_double __attribute__ ((unused));
  vol_var__Complex_long_double = pow (vol_var__Complex_long_int, vol_var_long_double);
}
static void
test_pow_1562 (void)
{
  extern typeof (pow (vol_var__Complex_long_int, vol_var__Complex_long_double)) var__Complex_long_double __attribute__ ((unused));
  vol_var__Complex_long_double = pow (vol_var__Complex_long_int, vol_var__Complex_long_double);
}
#if defined HUGE_VAL_F64
static void
test_pow_1563 (void)
{
  extern typeof (pow (vol_var__Complex_long_int, vol_var__Float64)) var___CFLOAT64 __attribute__ ((unused));
  vol_var___CFLOAT64 = pow (vol_var__Complex_long_int, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64
static void
test_pow_1564 (void)
{
  extern typeof (pow (vol_var__Complex_long_int, vol_var___CFLOAT64)) var___CFLOAT64 __attribute__ ((unused));
  vol_var___CFLOAT64 = pow (vol_var__Complex_long_int, vol_var___CFLOAT64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_pow_1565 (void)
{
  extern typeof (pow (vol_var__Complex_long_int, vol_var__Float64x)) var___CFLOAT64X __attribute__ ((unused));
  vol_var___CFLOAT64X = pow (vol_var__Complex_long_int, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_pow_1566 (void)
{
  extern typeof (pow (vol_var__Complex_long_int, vol_var___CFLOAT64X)) var___CFLOAT64X __attribute__ ((unused));
  vol_var___CFLOAT64X = pow (vol_var__Complex_long_int, vol_var___CFLOAT64X);
}
#endif
#if defined HUGE_VAL_F128
static void
test_pow_1567 (void)
{
  extern typeof (pow (vol_var__Complex_long_int, vol_var__Float128)) var___CFLOAT128 __attribute__ ((unused));
  vol_var___CFLOAT128 = pow (vol_var__Complex_long_int, vol_var__Float128);
}
#endif
#if defined HUGE_VAL_F128
static void
test_pow_1568 (void)
{
  extern typeof (pow (vol_var__Complex_long_int, vol_var___CFLOAT128)) var___CFLOAT128 __attribute__ ((unused));
  vol_var___CFLOAT128 = pow (vol_var__Complex_long_int, vol_var___CFLOAT128);
}
#endif
static void
test_pow_1569 (void)
{
  extern typeof (pow (vol_var__Complex_long_int, vol_var_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_long_int, vol_var_char);
}
static void
test_pow_1570 (void)
{
  extern typeof (pow (vol_var__Complex_long_int, vol_var__Complex_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_long_int, vol_var__Complex_char);
}
static void
test_pow_1571 (void)
{
  extern typeof (pow (vol_var__Complex_long_int, vol_var_signed_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_long_int, vol_var_signed_char);
}
static void
test_pow_1572 (void)
{
  extern typeof (pow (vol_var__Complex_long_int, vol_var__Complex_signed_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_long_int, vol_var__Complex_signed_char);
}
static void
test_pow_1573 (void)
{
  extern typeof (pow (vol_var__Complex_long_int, vol_var_unsigned_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_long_int, vol_var_unsigned_char);
}
static void
test_pow_1574 (void)
{
  extern typeof (pow (vol_var__Complex_long_int, vol_var__Complex_unsigned_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_long_int, vol_var__Complex_unsigned_char);
}
static void
test_pow_1575 (void)
{
  extern typeof (pow (vol_var__Complex_long_int, vol_var_short_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_long_int, vol_var_short_int);
}
static void
test_pow_1576 (void)
{
  extern typeof (pow (vol_var__Complex_long_int, vol_var__Complex_short_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_long_int, vol_var__Complex_short_int);
}
static void
test_pow_1577 (void)
{
  extern typeof (pow (vol_var__Complex_long_int, vol_var_unsigned_short_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_long_int, vol_var_unsigned_short_int);
}
static void
test_pow_1578 (void)
{
  extern typeof (pow (vol_var__Complex_long_int, vol_var__Complex_unsigned_short_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_long_int, vol_var__Complex_unsigned_short_int);
}
static void
test_pow_1579 (void)
{
  extern typeof (pow (vol_var__Complex_long_int, vol_var_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_long_int, vol_var_int);
}
static void
test_pow_1580 (void)
{
  extern typeof (pow (vol_var__Complex_long_int, vol_var__Complex_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_long_int, vol_var__Complex_int);
}
static void
test_pow_1581 (void)
{
  extern typeof (pow (vol_var__Complex_long_int, vol_var_unsigned_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_long_int, vol_var_unsigned_int);
}
static void
test_pow_1582 (void)
{
  extern typeof (pow (vol_var__Complex_long_int, vol_var__Complex_unsigned_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_long_int, vol_var__Complex_unsigned_int);
}
static void
test_pow_1583 (void)
{
  extern typeof (pow (vol_var__Complex_long_int, vol_var_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_long_int, vol_var_long_int);
}
static void
test_pow_1584 (void)
{
  extern typeof (pow (vol_var__Complex_long_int, vol_var__Complex_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_long_int, vol_var__Complex_long_int);
}
static void
test_pow_1585 (void)
{
  extern typeof (pow (vol_var__Complex_long_int, vol_var_unsigned_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_long_int, vol_var_unsigned_long_int);
}
static void
test_pow_1586 (void)
{
  extern typeof (pow (vol_var__Complex_long_int, vol_var__Complex_unsigned_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_long_int, vol_var__Complex_unsigned_long_int);
}
static void
test_pow_1587 (void)
{
  extern typeof (pow (vol_var__Complex_long_int, vol_var_long_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_long_int, vol_var_long_long_int);
}
static void
test_pow_1588 (void)
{
  extern typeof (pow (vol_var__Complex_long_int, vol_var__Complex_long_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_long_int, vol_var__Complex_long_long_int);
}
static void
test_pow_1589 (void)
{
  extern typeof (pow (vol_var__Complex_long_int, vol_var_unsigned_long_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_long_int, vol_var_unsigned_long_long_int);
}
static void
test_pow_1590 (void)
{
  extern typeof (pow (vol_var__Complex_long_int, vol_var__Complex_unsigned_long_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_long_int, vol_var__Complex_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_pow_1591 (void)
{
  extern typeof (pow (vol_var__Complex_long_int, vol_var___int128)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_long_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1592 (void)
{
  extern typeof (pow (vol_var__Complex_long_int, vol_var__Complex___int128)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_long_int, vol_var__Complex___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1593 (void)
{
  extern typeof (pow (vol_var__Complex_long_int, vol_var_unsigned___int128)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_long_int, vol_var_unsigned___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1594 (void)
{
  extern typeof (pow (vol_var__Complex_long_int, vol_var__Complex_unsigned___int128)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_long_int, vol_var__Complex_unsigned___int128);
}
#endif
static void
test_pow_1595 (void)
{
  extern typeof (pow (vol_var__Complex_long_int, vol_var_enum_e)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_long_int, vol_var_enum_e);
}
static void
test_pow_1596 (void)
{
  extern typeof (pow (vol_var__Complex_long_int, vol_var__Bool)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_long_int, vol_var__Bool);
}
static void
test_pow_1597 (void)
{
  extern typeof (pow (vol_var__Complex_long_int, vol_var_bit_field)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_long_int, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_pow_1598 (void)
{
  extern typeof (pow (vol_var_unsigned_long_int, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_unsigned_long_int, vol_var__Float16);
}
#endif
#if defined HUGE_VAL_F16
static void
test_pow_1599 (void)
{
  extern typeof (pow (vol_var_unsigned_long_int, vol_var___CFLOAT16)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_unsigned_long_int, vol_var___CFLOAT16);
}
#endif
static void
test_pow_1600 (void)
{
  extern typeof (pow (vol_var_unsigned_long_int, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_unsigned_long_int, vol_var_float);
}
static void
test_pow_1601 (void)
{
  extern typeof (pow (vol_var_unsigned_long_int, vol_var__Complex_float)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_unsigned_long_int, vol_var__Complex_float);
}
#if defined HUGE_VAL_F32
static void
test_pow_1602 (void)
{
  extern typeof (pow (vol_var_unsigned_long_int, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_unsigned_long_int, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32
static void
test_pow_1603 (void)
{
  extern typeof (pow (vol_var_unsigned_long_int, vol_var___CFLOAT32)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_unsigned_long_int, vol_var___CFLOAT32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_pow_1604 (void)
{
  extern typeof (pow (vol_var_unsigned_long_int, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_unsigned_long_int, vol_var__Float32x);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_pow_1605 (void)
{
  extern typeof (pow (vol_var_unsigned_long_int, vol_var___CFLOAT32X)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_unsigned_long_int, vol_var___CFLOAT32X);
}
#endif
static void
test_pow_1606 (void)
{
  extern typeof (pow (vol_var_unsigned_long_int, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_unsigned_long_int, vol_var_double);
}
static void
test_pow_1607 (void)
{
  extern typeof (pow (vol_var_unsigned_long_int, vol_var__Complex_double)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_unsigned_long_int, vol_var__Complex_double);
}
static void
test_pow_1608 (void)
{
  extern typeof (pow (vol_var_unsigned_long_int, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = pow (vol_var_unsigned_long_int, vol_var_long_double);
}
static void
test_pow_1609 (void)
{
  extern typeof (pow (vol_var_unsigned_long_int, vol_var__Complex_long_double)) var__Complex_long_double __attribute__ ((unused));
  vol_var__Complex_long_double = pow (vol_var_unsigned_long_int, vol_var__Complex_long_double);
}
#if defined HUGE_VAL_F64
static void
test_pow_1610 (void)
{
  extern typeof (pow (vol_var_unsigned_long_int, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = pow (vol_var_unsigned_long_int, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64
static void
test_pow_1611 (void)
{
  extern typeof (pow (vol_var_unsigned_long_int, vol_var___CFLOAT64)) var___CFLOAT64 __attribute__ ((unused));
  vol_var___CFLOAT64 = pow (vol_var_unsigned_long_int, vol_var___CFLOAT64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_pow_1612 (void)
{
  extern typeof (pow (vol_var_unsigned_long_int, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = pow (vol_var_unsigned_long_int, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_pow_1613 (void)
{
  extern typeof (pow (vol_var_unsigned_long_int, vol_var___CFLOAT64X)) var___CFLOAT64X __attribute__ ((unused));
  vol_var___CFLOAT64X = pow (vol_var_unsigned_long_int, vol_var___CFLOAT64X);
}
#endif
#if defined HUGE_VAL_F128
static void
test_pow_1614 (void)
{
  extern typeof (pow (vol_var_unsigned_long_int, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = pow (vol_var_unsigned_long_int, vol_var__Float128);
}
#endif
#if defined HUGE_VAL_F128
static void
test_pow_1615 (void)
{
  extern typeof (pow (vol_var_unsigned_long_int, vol_var___CFLOAT128)) var___CFLOAT128 __attribute__ ((unused));
  vol_var___CFLOAT128 = pow (vol_var_unsigned_long_int, vol_var___CFLOAT128);
}
#endif
static void
test_pow_1616 (void)
{
  extern typeof (pow (vol_var_unsigned_long_int, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_unsigned_long_int, vol_var_char);
}
static void
test_pow_1617 (void)
{
  extern typeof (pow (vol_var_unsigned_long_int, vol_var__Complex_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_unsigned_long_int, vol_var__Complex_char);
}
static void
test_pow_1618 (void)
{
  extern typeof (pow (vol_var_unsigned_long_int, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_unsigned_long_int, vol_var_signed_char);
}
static void
test_pow_1619 (void)
{
  extern typeof (pow (vol_var_unsigned_long_int, vol_var__Complex_signed_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_unsigned_long_int, vol_var__Complex_signed_char);
}
static void
test_pow_1620 (void)
{
  extern typeof (pow (vol_var_unsigned_long_int, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_unsigned_long_int, vol_var_unsigned_char);
}
static void
test_pow_1621 (void)
{
  extern typeof (pow (vol_var_unsigned_long_int, vol_var__Complex_unsigned_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_unsigned_long_int, vol_var__Complex_unsigned_char);
}
static void
test_pow_1622 (void)
{
  extern typeof (pow (vol_var_unsigned_long_int, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_unsigned_long_int, vol_var_short_int);
}
static void
test_pow_1623 (void)
{
  extern typeof (pow (vol_var_unsigned_long_int, vol_var__Complex_short_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_unsigned_long_int, vol_var__Complex_short_int);
}
static void
test_pow_1624 (void)
{
  extern typeof (pow (vol_var_unsigned_long_int, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_unsigned_long_int, vol_var_unsigned_short_int);
}
static void
test_pow_1625 (void)
{
  extern typeof (pow (vol_var_unsigned_long_int, vol_var__Complex_unsigned_short_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_unsigned_long_int, vol_var__Complex_unsigned_short_int);
}
static void
test_pow_1626 (void)
{
  extern typeof (pow (vol_var_unsigned_long_int, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_unsigned_long_int, vol_var_int);
}
static void
test_pow_1627 (void)
{
  extern typeof (pow (vol_var_unsigned_long_int, vol_var__Complex_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_unsigned_long_int, vol_var__Complex_int);
}
static void
test_pow_1628 (void)
{
  extern typeof (pow (vol_var_unsigned_long_int, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_unsigned_long_int, vol_var_unsigned_int);
}
static void
test_pow_1629 (void)
{
  extern typeof (pow (vol_var_unsigned_long_int, vol_var__Complex_unsigned_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_unsigned_long_int, vol_var__Complex_unsigned_int);
}
static void
test_pow_1630 (void)
{
  extern typeof (pow (vol_var_unsigned_long_int, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_unsigned_long_int, vol_var_long_int);
}
static void
test_pow_1631 (void)
{
  extern typeof (pow (vol_var_unsigned_long_int, vol_var__Complex_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_unsigned_long_int, vol_var__Complex_long_int);
}
static void
test_pow_1632 (void)
{
  extern typeof (pow (vol_var_unsigned_long_int, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_unsigned_long_int, vol_var_unsigned_long_int);
}
static void
test_pow_1633 (void)
{
  extern typeof (pow (vol_var_unsigned_long_int, vol_var__Complex_unsigned_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_unsigned_long_int, vol_var__Complex_unsigned_long_int);
}
static void
test_pow_1634 (void)
{
  extern typeof (pow (vol_var_unsigned_long_int, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_unsigned_long_int, vol_var_long_long_int);
}
static void
test_pow_1635 (void)
{
  extern typeof (pow (vol_var_unsigned_long_int, vol_var__Complex_long_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_unsigned_long_int, vol_var__Complex_long_long_int);
}
static void
test_pow_1636 (void)
{
  extern typeof (pow (vol_var_unsigned_long_int, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_unsigned_long_int, vol_var_unsigned_long_long_int);
}
static void
test_pow_1637 (void)
{
  extern typeof (pow (vol_var_unsigned_long_int, vol_var__Complex_unsigned_long_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_unsigned_long_int, vol_var__Complex_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_pow_1638 (void)
{
  extern typeof (pow (vol_var_unsigned_long_int, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_unsigned_long_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1639 (void)
{
  extern typeof (pow (vol_var_unsigned_long_int, vol_var__Complex___int128)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_unsigned_long_int, vol_var__Complex___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1640 (void)
{
  extern typeof (pow (vol_var_unsigned_long_int, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_unsigned_long_int, vol_var_unsigned___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1641 (void)
{
  extern typeof (pow (vol_var_unsigned_long_int, vol_var__Complex_unsigned___int128)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_unsigned_long_int, vol_var__Complex_unsigned___int128);
}
#endif
static void
test_pow_1642 (void)
{
  extern typeof (pow (vol_var_unsigned_long_int, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_unsigned_long_int, vol_var_enum_e);
}
static void
test_pow_1643 (void)
{
  extern typeof (pow (vol_var_unsigned_long_int, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_unsigned_long_int, vol_var__Bool);
}
static void
test_pow_1644 (void)
{
  extern typeof (pow (vol_var_unsigned_long_int, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_unsigned_long_int, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_pow_1645 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_long_int, vol_var__Float16)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_long_int, vol_var__Float16);
}
#endif
#if defined HUGE_VAL_F16
static void
test_pow_1646 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_long_int, vol_var___CFLOAT16)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_long_int, vol_var___CFLOAT16);
}
#endif
static void
test_pow_1647 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_long_int, vol_var_float)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_long_int, vol_var_float);
}
static void
test_pow_1648 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_long_int, vol_var__Complex_float)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_long_int, vol_var__Complex_float);
}
#if defined HUGE_VAL_F32
static void
test_pow_1649 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_long_int, vol_var__Float32)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_long_int, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32
static void
test_pow_1650 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_long_int, vol_var___CFLOAT32)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_long_int, vol_var___CFLOAT32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_pow_1651 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_long_int, vol_var__Float32x)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_long_int, vol_var__Float32x);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_pow_1652 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_long_int, vol_var___CFLOAT32X)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_long_int, vol_var___CFLOAT32X);
}
#endif
static void
test_pow_1653 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_long_int, vol_var_double)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_long_int, vol_var_double);
}
static void
test_pow_1654 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_long_int, vol_var__Complex_double)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_long_int, vol_var__Complex_double);
}
static void
test_pow_1655 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_long_int, vol_var_long_double)) var__Complex_long_double __attribute__ ((unused));
  vol_var__Complex_long_double = pow (vol_var__Complex_unsigned_long_int, vol_var_long_double);
}
static void
test_pow_1656 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_long_int, vol_var__Complex_long_double)) var__Complex_long_double __attribute__ ((unused));
  vol_var__Complex_long_double = pow (vol_var__Complex_unsigned_long_int, vol_var__Complex_long_double);
}
#if defined HUGE_VAL_F64
static void
test_pow_1657 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_long_int, vol_var__Float64)) var___CFLOAT64 __attribute__ ((unused));
  vol_var___CFLOAT64 = pow (vol_var__Complex_unsigned_long_int, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64
static void
test_pow_1658 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_long_int, vol_var___CFLOAT64)) var___CFLOAT64 __attribute__ ((unused));
  vol_var___CFLOAT64 = pow (vol_var__Complex_unsigned_long_int, vol_var___CFLOAT64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_pow_1659 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_long_int, vol_var__Float64x)) var___CFLOAT64X __attribute__ ((unused));
  vol_var___CFLOAT64X = pow (vol_var__Complex_unsigned_long_int, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_pow_1660 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_long_int, vol_var___CFLOAT64X)) var___CFLOAT64X __attribute__ ((unused));
  vol_var___CFLOAT64X = pow (vol_var__Complex_unsigned_long_int, vol_var___CFLOAT64X);
}
#endif
#if defined HUGE_VAL_F128
static void
test_pow_1661 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_long_int, vol_var__Float128)) var___CFLOAT128 __attribute__ ((unused));
  vol_var___CFLOAT128 = pow (vol_var__Complex_unsigned_long_int, vol_var__Float128);
}
#endif
#if defined HUGE_VAL_F128
static void
test_pow_1662 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_long_int, vol_var___CFLOAT128)) var___CFLOAT128 __attribute__ ((unused));
  vol_var___CFLOAT128 = pow (vol_var__Complex_unsigned_long_int, vol_var___CFLOAT128);
}
#endif
static void
test_pow_1663 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_long_int, vol_var_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_long_int, vol_var_char);
}
static void
test_pow_1664 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_long_int, vol_var__Complex_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_long_int, vol_var__Complex_char);
}
static void
test_pow_1665 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_long_int, vol_var_signed_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_long_int, vol_var_signed_char);
}
static void
test_pow_1666 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_long_int, vol_var__Complex_signed_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_long_int, vol_var__Complex_signed_char);
}
static void
test_pow_1667 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_long_int, vol_var_unsigned_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_long_int, vol_var_unsigned_char);
}
static void
test_pow_1668 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_long_int, vol_var__Complex_unsigned_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_long_int, vol_var__Complex_unsigned_char);
}
static void
test_pow_1669 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_long_int, vol_var_short_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_long_int, vol_var_short_int);
}
static void
test_pow_1670 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_long_int, vol_var__Complex_short_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_long_int, vol_var__Complex_short_int);
}
static void
test_pow_1671 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_long_int, vol_var_unsigned_short_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_long_int, vol_var_unsigned_short_int);
}
static void
test_pow_1672 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_long_int, vol_var__Complex_unsigned_short_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_long_int, vol_var__Complex_unsigned_short_int);
}
static void
test_pow_1673 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_long_int, vol_var_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_long_int, vol_var_int);
}
static void
test_pow_1674 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_long_int, vol_var__Complex_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_long_int, vol_var__Complex_int);
}
static void
test_pow_1675 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_long_int, vol_var_unsigned_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_long_int, vol_var_unsigned_int);
}
static void
test_pow_1676 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_long_int, vol_var__Complex_unsigned_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_long_int, vol_var__Complex_unsigned_int);
}
static void
test_pow_1677 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_long_int, vol_var_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_long_int, vol_var_long_int);
}
static void
test_pow_1678 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_long_int, vol_var__Complex_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_long_int, vol_var__Complex_long_int);
}
static void
test_pow_1679 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_long_int, vol_var_unsigned_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_long_int, vol_var_unsigned_long_int);
}
static void
test_pow_1680 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_long_int, vol_var__Complex_unsigned_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_long_int, vol_var__Complex_unsigned_long_int);
}
static void
test_pow_1681 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_long_int, vol_var_long_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_long_int, vol_var_long_long_int);
}
static void
test_pow_1682 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_long_int, vol_var__Complex_long_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_long_int, vol_var__Complex_long_long_int);
}
static void
test_pow_1683 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_long_int, vol_var_unsigned_long_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_long_int, vol_var_unsigned_long_long_int);
}
static void
test_pow_1684 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_long_int, vol_var__Complex_unsigned_long_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_long_int, vol_var__Complex_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_pow_1685 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_long_int, vol_var___int128)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_long_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1686 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_long_int, vol_var__Complex___int128)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_long_int, vol_var__Complex___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1687 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_long_int, vol_var_unsigned___int128)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_long_int, vol_var_unsigned___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1688 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_long_int, vol_var__Complex_unsigned___int128)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_long_int, vol_var__Complex_unsigned___int128);
}
#endif
static void
test_pow_1689 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_long_int, vol_var_enum_e)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_long_int, vol_var_enum_e);
}
static void
test_pow_1690 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_long_int, vol_var__Bool)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_long_int, vol_var__Bool);
}
static void
test_pow_1691 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_long_int, vol_var_bit_field)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_long_int, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_pow_1692 (void)
{
  extern typeof (pow (vol_var_long_long_int, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_long_long_int, vol_var__Float16);
}
#endif
#if defined HUGE_VAL_F16
static void
test_pow_1693 (void)
{
  extern typeof (pow (vol_var_long_long_int, vol_var___CFLOAT16)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_long_long_int, vol_var___CFLOAT16);
}
#endif
static void
test_pow_1694 (void)
{
  extern typeof (pow (vol_var_long_long_int, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_long_long_int, vol_var_float);
}
static void
test_pow_1695 (void)
{
  extern typeof (pow (vol_var_long_long_int, vol_var__Complex_float)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_long_long_int, vol_var__Complex_float);
}
#if defined HUGE_VAL_F32
static void
test_pow_1696 (void)
{
  extern typeof (pow (vol_var_long_long_int, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_long_long_int, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32
static void
test_pow_1697 (void)
{
  extern typeof (pow (vol_var_long_long_int, vol_var___CFLOAT32)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_long_long_int, vol_var___CFLOAT32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_pow_1698 (void)
{
  extern typeof (pow (vol_var_long_long_int, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_long_long_int, vol_var__Float32x);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_pow_1699 (void)
{
  extern typeof (pow (vol_var_long_long_int, vol_var___CFLOAT32X)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_long_long_int, vol_var___CFLOAT32X);
}
#endif
static void
test_pow_1700 (void)
{
  extern typeof (pow (vol_var_long_long_int, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_long_long_int, vol_var_double);
}
static void
test_pow_1701 (void)
{
  extern typeof (pow (vol_var_long_long_int, vol_var__Complex_double)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_long_long_int, vol_var__Complex_double);
}
static void
test_pow_1702 (void)
{
  extern typeof (pow (vol_var_long_long_int, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = pow (vol_var_long_long_int, vol_var_long_double);
}
static void
test_pow_1703 (void)
{
  extern typeof (pow (vol_var_long_long_int, vol_var__Complex_long_double)) var__Complex_long_double __attribute__ ((unused));
  vol_var__Complex_long_double = pow (vol_var_long_long_int, vol_var__Complex_long_double);
}
#if defined HUGE_VAL_F64
static void
test_pow_1704 (void)
{
  extern typeof (pow (vol_var_long_long_int, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = pow (vol_var_long_long_int, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64
static void
test_pow_1705 (void)
{
  extern typeof (pow (vol_var_long_long_int, vol_var___CFLOAT64)) var___CFLOAT64 __attribute__ ((unused));
  vol_var___CFLOAT64 = pow (vol_var_long_long_int, vol_var___CFLOAT64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_pow_1706 (void)
{
  extern typeof (pow (vol_var_long_long_int, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = pow (vol_var_long_long_int, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_pow_1707 (void)
{
  extern typeof (pow (vol_var_long_long_int, vol_var___CFLOAT64X)) var___CFLOAT64X __attribute__ ((unused));
  vol_var___CFLOAT64X = pow (vol_var_long_long_int, vol_var___CFLOAT64X);
}
#endif
#if defined HUGE_VAL_F128
static void
test_pow_1708 (void)
{
  extern typeof (pow (vol_var_long_long_int, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = pow (vol_var_long_long_int, vol_var__Float128);
}
#endif
#if defined HUGE_VAL_F128
static void
test_pow_1709 (void)
{
  extern typeof (pow (vol_var_long_long_int, vol_var___CFLOAT128)) var___CFLOAT128 __attribute__ ((unused));
  vol_var___CFLOAT128 = pow (vol_var_long_long_int, vol_var___CFLOAT128);
}
#endif
static void
test_pow_1710 (void)
{
  extern typeof (pow (vol_var_long_long_int, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_long_long_int, vol_var_char);
}
static void
test_pow_1711 (void)
{
  extern typeof (pow (vol_var_long_long_int, vol_var__Complex_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_long_long_int, vol_var__Complex_char);
}
static void
test_pow_1712 (void)
{
  extern typeof (pow (vol_var_long_long_int, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_long_long_int, vol_var_signed_char);
}
static void
test_pow_1713 (void)
{
  extern typeof (pow (vol_var_long_long_int, vol_var__Complex_signed_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_long_long_int, vol_var__Complex_signed_char);
}
static void
test_pow_1714 (void)
{
  extern typeof (pow (vol_var_long_long_int, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_long_long_int, vol_var_unsigned_char);
}
static void
test_pow_1715 (void)
{
  extern typeof (pow (vol_var_long_long_int, vol_var__Complex_unsigned_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_long_long_int, vol_var__Complex_unsigned_char);
}
static void
test_pow_1716 (void)
{
  extern typeof (pow (vol_var_long_long_int, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_long_long_int, vol_var_short_int);
}
static void
test_pow_1717 (void)
{
  extern typeof (pow (vol_var_long_long_int, vol_var__Complex_short_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_long_long_int, vol_var__Complex_short_int);
}
static void
test_pow_1718 (void)
{
  extern typeof (pow (vol_var_long_long_int, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_long_long_int, vol_var_unsigned_short_int);
}
static void
test_pow_1719 (void)
{
  extern typeof (pow (vol_var_long_long_int, vol_var__Complex_unsigned_short_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_long_long_int, vol_var__Complex_unsigned_short_int);
}
static void
test_pow_1720 (void)
{
  extern typeof (pow (vol_var_long_long_int, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_long_long_int, vol_var_int);
}
static void
test_pow_1721 (void)
{
  extern typeof (pow (vol_var_long_long_int, vol_var__Complex_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_long_long_int, vol_var__Complex_int);
}
static void
test_pow_1722 (void)
{
  extern typeof (pow (vol_var_long_long_int, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_long_long_int, vol_var_unsigned_int);
}
static void
test_pow_1723 (void)
{
  extern typeof (pow (vol_var_long_long_int, vol_var__Complex_unsigned_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_long_long_int, vol_var__Complex_unsigned_int);
}
static void
test_pow_1724 (void)
{
  extern typeof (pow (vol_var_long_long_int, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_long_long_int, vol_var_long_int);
}
static void
test_pow_1725 (void)
{
  extern typeof (pow (vol_var_long_long_int, vol_var__Complex_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_long_long_int, vol_var__Complex_long_int);
}
static void
test_pow_1726 (void)
{
  extern typeof (pow (vol_var_long_long_int, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_long_long_int, vol_var_unsigned_long_int);
}
static void
test_pow_1727 (void)
{
  extern typeof (pow (vol_var_long_long_int, vol_var__Complex_unsigned_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_long_long_int, vol_var__Complex_unsigned_long_int);
}
static void
test_pow_1728 (void)
{
  extern typeof (pow (vol_var_long_long_int, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_long_long_int, vol_var_long_long_int);
}
static void
test_pow_1729 (void)
{
  extern typeof (pow (vol_var_long_long_int, vol_var__Complex_long_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_long_long_int, vol_var__Complex_long_long_int);
}
static void
test_pow_1730 (void)
{
  extern typeof (pow (vol_var_long_long_int, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_long_long_int, vol_var_unsigned_long_long_int);
}
static void
test_pow_1731 (void)
{
  extern typeof (pow (vol_var_long_long_int, vol_var__Complex_unsigned_long_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_long_long_int, vol_var__Complex_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_pow_1732 (void)
{
  extern typeof (pow (vol_var_long_long_int, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_long_long_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1733 (void)
{
  extern typeof (pow (vol_var_long_long_int, vol_var__Complex___int128)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_long_long_int, vol_var__Complex___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1734 (void)
{
  extern typeof (pow (vol_var_long_long_int, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_long_long_int, vol_var_unsigned___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1735 (void)
{
  extern typeof (pow (vol_var_long_long_int, vol_var__Complex_unsigned___int128)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_long_long_int, vol_var__Complex_unsigned___int128);
}
#endif
static void
test_pow_1736 (void)
{
  extern typeof (pow (vol_var_long_long_int, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_long_long_int, vol_var_enum_e);
}
static void
test_pow_1737 (void)
{
  extern typeof (pow (vol_var_long_long_int, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_long_long_int, vol_var__Bool);
}
static void
test_pow_1738 (void)
{
  extern typeof (pow (vol_var_long_long_int, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_long_long_int, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_pow_1739 (void)
{
  extern typeof (pow (vol_var__Complex_long_long_int, vol_var__Float16)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_long_long_int, vol_var__Float16);
}
#endif
#if defined HUGE_VAL_F16
static void
test_pow_1740 (void)
{
  extern typeof (pow (vol_var__Complex_long_long_int, vol_var___CFLOAT16)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_long_long_int, vol_var___CFLOAT16);
}
#endif
static void
test_pow_1741 (void)
{
  extern typeof (pow (vol_var__Complex_long_long_int, vol_var_float)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_long_long_int, vol_var_float);
}
static void
test_pow_1742 (void)
{
  extern typeof (pow (vol_var__Complex_long_long_int, vol_var__Complex_float)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_long_long_int, vol_var__Complex_float);
}
#if defined HUGE_VAL_F32
static void
test_pow_1743 (void)
{
  extern typeof (pow (vol_var__Complex_long_long_int, vol_var__Float32)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_long_long_int, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32
static void
test_pow_1744 (void)
{
  extern typeof (pow (vol_var__Complex_long_long_int, vol_var___CFLOAT32)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_long_long_int, vol_var___CFLOAT32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_pow_1745 (void)
{
  extern typeof (pow (vol_var__Complex_long_long_int, vol_var__Float32x)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_long_long_int, vol_var__Float32x);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_pow_1746 (void)
{
  extern typeof (pow (vol_var__Complex_long_long_int, vol_var___CFLOAT32X)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_long_long_int, vol_var___CFLOAT32X);
}
#endif
static void
test_pow_1747 (void)
{
  extern typeof (pow (vol_var__Complex_long_long_int, vol_var_double)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_long_long_int, vol_var_double);
}
static void
test_pow_1748 (void)
{
  extern typeof (pow (vol_var__Complex_long_long_int, vol_var__Complex_double)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_long_long_int, vol_var__Complex_double);
}
static void
test_pow_1749 (void)
{
  extern typeof (pow (vol_var__Complex_long_long_int, vol_var_long_double)) var__Complex_long_double __attribute__ ((unused));
  vol_var__Complex_long_double = pow (vol_var__Complex_long_long_int, vol_var_long_double);
}
static void
test_pow_1750 (void)
{
  extern typeof (pow (vol_var__Complex_long_long_int, vol_var__Complex_long_double)) var__Complex_long_double __attribute__ ((unused));
  vol_var__Complex_long_double = pow (vol_var__Complex_long_long_int, vol_var__Complex_long_double);
}
#if defined HUGE_VAL_F64
static void
test_pow_1751 (void)
{
  extern typeof (pow (vol_var__Complex_long_long_int, vol_var__Float64)) var___CFLOAT64 __attribute__ ((unused));
  vol_var___CFLOAT64 = pow (vol_var__Complex_long_long_int, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64
static void
test_pow_1752 (void)
{
  extern typeof (pow (vol_var__Complex_long_long_int, vol_var___CFLOAT64)) var___CFLOAT64 __attribute__ ((unused));
  vol_var___CFLOAT64 = pow (vol_var__Complex_long_long_int, vol_var___CFLOAT64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_pow_1753 (void)
{
  extern typeof (pow (vol_var__Complex_long_long_int, vol_var__Float64x)) var___CFLOAT64X __attribute__ ((unused));
  vol_var___CFLOAT64X = pow (vol_var__Complex_long_long_int, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_pow_1754 (void)
{
  extern typeof (pow (vol_var__Complex_long_long_int, vol_var___CFLOAT64X)) var___CFLOAT64X __attribute__ ((unused));
  vol_var___CFLOAT64X = pow (vol_var__Complex_long_long_int, vol_var___CFLOAT64X);
}
#endif
#if defined HUGE_VAL_F128
static void
test_pow_1755 (void)
{
  extern typeof (pow (vol_var__Complex_long_long_int, vol_var__Float128)) var___CFLOAT128 __attribute__ ((unused));
  vol_var___CFLOAT128 = pow (vol_var__Complex_long_long_int, vol_var__Float128);
}
#endif
#if defined HUGE_VAL_F128
static void
test_pow_1756 (void)
{
  extern typeof (pow (vol_var__Complex_long_long_int, vol_var___CFLOAT128)) var___CFLOAT128 __attribute__ ((unused));
  vol_var___CFLOAT128 = pow (vol_var__Complex_long_long_int, vol_var___CFLOAT128);
}
#endif
static void
test_pow_1757 (void)
{
  extern typeof (pow (vol_var__Complex_long_long_int, vol_var_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_long_long_int, vol_var_char);
}
static void
test_pow_1758 (void)
{
  extern typeof (pow (vol_var__Complex_long_long_int, vol_var__Complex_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_long_long_int, vol_var__Complex_char);
}
static void
test_pow_1759 (void)
{
  extern typeof (pow (vol_var__Complex_long_long_int, vol_var_signed_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_long_long_int, vol_var_signed_char);
}
static void
test_pow_1760 (void)
{
  extern typeof (pow (vol_var__Complex_long_long_int, vol_var__Complex_signed_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_long_long_int, vol_var__Complex_signed_char);
}
static void
test_pow_1761 (void)
{
  extern typeof (pow (vol_var__Complex_long_long_int, vol_var_unsigned_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_long_long_int, vol_var_unsigned_char);
}
static void
test_pow_1762 (void)
{
  extern typeof (pow (vol_var__Complex_long_long_int, vol_var__Complex_unsigned_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_long_long_int, vol_var__Complex_unsigned_char);
}
static void
test_pow_1763 (void)
{
  extern typeof (pow (vol_var__Complex_long_long_int, vol_var_short_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_long_long_int, vol_var_short_int);
}
static void
test_pow_1764 (void)
{
  extern typeof (pow (vol_var__Complex_long_long_int, vol_var__Complex_short_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_long_long_int, vol_var__Complex_short_int);
}
static void
test_pow_1765 (void)
{
  extern typeof (pow (vol_var__Complex_long_long_int, vol_var_unsigned_short_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_long_long_int, vol_var_unsigned_short_int);
}
static void
test_pow_1766 (void)
{
  extern typeof (pow (vol_var__Complex_long_long_int, vol_var__Complex_unsigned_short_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_long_long_int, vol_var__Complex_unsigned_short_int);
}
static void
test_pow_1767 (void)
{
  extern typeof (pow (vol_var__Complex_long_long_int, vol_var_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_long_long_int, vol_var_int);
}
static void
test_pow_1768 (void)
{
  extern typeof (pow (vol_var__Complex_long_long_int, vol_var__Complex_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_long_long_int, vol_var__Complex_int);
}
static void
test_pow_1769 (void)
{
  extern typeof (pow (vol_var__Complex_long_long_int, vol_var_unsigned_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_long_long_int, vol_var_unsigned_int);
}
static void
test_pow_1770 (void)
{
  extern typeof (pow (vol_var__Complex_long_long_int, vol_var__Complex_unsigned_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_long_long_int, vol_var__Complex_unsigned_int);
}
static void
test_pow_1771 (void)
{
  extern typeof (pow (vol_var__Complex_long_long_int, vol_var_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_long_long_int, vol_var_long_int);
}
static void
test_pow_1772 (void)
{
  extern typeof (pow (vol_var__Complex_long_long_int, vol_var__Complex_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_long_long_int, vol_var__Complex_long_int);
}
static void
test_pow_1773 (void)
{
  extern typeof (pow (vol_var__Complex_long_long_int, vol_var_unsigned_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_long_long_int, vol_var_unsigned_long_int);
}
static void
test_pow_1774 (void)
{
  extern typeof (pow (vol_var__Complex_long_long_int, vol_var__Complex_unsigned_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_long_long_int, vol_var__Complex_unsigned_long_int);
}
static void
test_pow_1775 (void)
{
  extern typeof (pow (vol_var__Complex_long_long_int, vol_var_long_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_long_long_int, vol_var_long_long_int);
}
static void
test_pow_1776 (void)
{
  extern typeof (pow (vol_var__Complex_long_long_int, vol_var__Complex_long_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_long_long_int, vol_var__Complex_long_long_int);
}
static void
test_pow_1777 (void)
{
  extern typeof (pow (vol_var__Complex_long_long_int, vol_var_unsigned_long_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_long_long_int, vol_var_unsigned_long_long_int);
}
static void
test_pow_1778 (void)
{
  extern typeof (pow (vol_var__Complex_long_long_int, vol_var__Complex_unsigned_long_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_long_long_int, vol_var__Complex_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_pow_1779 (void)
{
  extern typeof (pow (vol_var__Complex_long_long_int, vol_var___int128)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_long_long_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1780 (void)
{
  extern typeof (pow (vol_var__Complex_long_long_int, vol_var__Complex___int128)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_long_long_int, vol_var__Complex___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1781 (void)
{
  extern typeof (pow (vol_var__Complex_long_long_int, vol_var_unsigned___int128)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_long_long_int, vol_var_unsigned___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1782 (void)
{
  extern typeof (pow (vol_var__Complex_long_long_int, vol_var__Complex_unsigned___int128)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_long_long_int, vol_var__Complex_unsigned___int128);
}
#endif
static void
test_pow_1783 (void)
{
  extern typeof (pow (vol_var__Complex_long_long_int, vol_var_enum_e)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_long_long_int, vol_var_enum_e);
}
static void
test_pow_1784 (void)
{
  extern typeof (pow (vol_var__Complex_long_long_int, vol_var__Bool)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_long_long_int, vol_var__Bool);
}
static void
test_pow_1785 (void)
{
  extern typeof (pow (vol_var__Complex_long_long_int, vol_var_bit_field)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_long_long_int, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_pow_1786 (void)
{
  extern typeof (pow (vol_var_unsigned_long_long_int, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_unsigned_long_long_int, vol_var__Float16);
}
#endif
#if defined HUGE_VAL_F16
static void
test_pow_1787 (void)
{
  extern typeof (pow (vol_var_unsigned_long_long_int, vol_var___CFLOAT16)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_unsigned_long_long_int, vol_var___CFLOAT16);
}
#endif
static void
test_pow_1788 (void)
{
  extern typeof (pow (vol_var_unsigned_long_long_int, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_unsigned_long_long_int, vol_var_float);
}
static void
test_pow_1789 (void)
{
  extern typeof (pow (vol_var_unsigned_long_long_int, vol_var__Complex_float)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_unsigned_long_long_int, vol_var__Complex_float);
}
#if defined HUGE_VAL_F32
static void
test_pow_1790 (void)
{
  extern typeof (pow (vol_var_unsigned_long_long_int, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_unsigned_long_long_int, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32
static void
test_pow_1791 (void)
{
  extern typeof (pow (vol_var_unsigned_long_long_int, vol_var___CFLOAT32)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_unsigned_long_long_int, vol_var___CFLOAT32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_pow_1792 (void)
{
  extern typeof (pow (vol_var_unsigned_long_long_int, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_unsigned_long_long_int, vol_var__Float32x);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_pow_1793 (void)
{
  extern typeof (pow (vol_var_unsigned_long_long_int, vol_var___CFLOAT32X)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_unsigned_long_long_int, vol_var___CFLOAT32X);
}
#endif
static void
test_pow_1794 (void)
{
  extern typeof (pow (vol_var_unsigned_long_long_int, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_unsigned_long_long_int, vol_var_double);
}
static void
test_pow_1795 (void)
{
  extern typeof (pow (vol_var_unsigned_long_long_int, vol_var__Complex_double)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_unsigned_long_long_int, vol_var__Complex_double);
}
static void
test_pow_1796 (void)
{
  extern typeof (pow (vol_var_unsigned_long_long_int, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = pow (vol_var_unsigned_long_long_int, vol_var_long_double);
}
static void
test_pow_1797 (void)
{
  extern typeof (pow (vol_var_unsigned_long_long_int, vol_var__Complex_long_double)) var__Complex_long_double __attribute__ ((unused));
  vol_var__Complex_long_double = pow (vol_var_unsigned_long_long_int, vol_var__Complex_long_double);
}
#if defined HUGE_VAL_F64
static void
test_pow_1798 (void)
{
  extern typeof (pow (vol_var_unsigned_long_long_int, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = pow (vol_var_unsigned_long_long_int, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64
static void
test_pow_1799 (void)
{
  extern typeof (pow (vol_var_unsigned_long_long_int, vol_var___CFLOAT64)) var___CFLOAT64 __attribute__ ((unused));
  vol_var___CFLOAT64 = pow (vol_var_unsigned_long_long_int, vol_var___CFLOAT64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_pow_1800 (void)
{
  extern typeof (pow (vol_var_unsigned_long_long_int, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = pow (vol_var_unsigned_long_long_int, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_pow_1801 (void)
{
  extern typeof (pow (vol_var_unsigned_long_long_int, vol_var___CFLOAT64X)) var___CFLOAT64X __attribute__ ((unused));
  vol_var___CFLOAT64X = pow (vol_var_unsigned_long_long_int, vol_var___CFLOAT64X);
}
#endif
#if defined HUGE_VAL_F128
static void
test_pow_1802 (void)
{
  extern typeof (pow (vol_var_unsigned_long_long_int, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = pow (vol_var_unsigned_long_long_int, vol_var__Float128);
}
#endif
#if defined HUGE_VAL_F128
static void
test_pow_1803 (void)
{
  extern typeof (pow (vol_var_unsigned_long_long_int, vol_var___CFLOAT128)) var___CFLOAT128 __attribute__ ((unused));
  vol_var___CFLOAT128 = pow (vol_var_unsigned_long_long_int, vol_var___CFLOAT128);
}
#endif
static void
test_pow_1804 (void)
{
  extern typeof (pow (vol_var_unsigned_long_long_int, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_unsigned_long_long_int, vol_var_char);
}
static void
test_pow_1805 (void)
{
  extern typeof (pow (vol_var_unsigned_long_long_int, vol_var__Complex_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_unsigned_long_long_int, vol_var__Complex_char);
}
static void
test_pow_1806 (void)
{
  extern typeof (pow (vol_var_unsigned_long_long_int, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_unsigned_long_long_int, vol_var_signed_char);
}
static void
test_pow_1807 (void)
{
  extern typeof (pow (vol_var_unsigned_long_long_int, vol_var__Complex_signed_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_unsigned_long_long_int, vol_var__Complex_signed_char);
}
static void
test_pow_1808 (void)
{
  extern typeof (pow (vol_var_unsigned_long_long_int, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_unsigned_long_long_int, vol_var_unsigned_char);
}
static void
test_pow_1809 (void)
{
  extern typeof (pow (vol_var_unsigned_long_long_int, vol_var__Complex_unsigned_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_unsigned_long_long_int, vol_var__Complex_unsigned_char);
}
static void
test_pow_1810 (void)
{
  extern typeof (pow (vol_var_unsigned_long_long_int, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_unsigned_long_long_int, vol_var_short_int);
}
static void
test_pow_1811 (void)
{
  extern typeof (pow (vol_var_unsigned_long_long_int, vol_var__Complex_short_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_unsigned_long_long_int, vol_var__Complex_short_int);
}
static void
test_pow_1812 (void)
{
  extern typeof (pow (vol_var_unsigned_long_long_int, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_unsigned_long_long_int, vol_var_unsigned_short_int);
}
static void
test_pow_1813 (void)
{
  extern typeof (pow (vol_var_unsigned_long_long_int, vol_var__Complex_unsigned_short_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_unsigned_long_long_int, vol_var__Complex_unsigned_short_int);
}
static void
test_pow_1814 (void)
{
  extern typeof (pow (vol_var_unsigned_long_long_int, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_unsigned_long_long_int, vol_var_int);
}
static void
test_pow_1815 (void)
{
  extern typeof (pow (vol_var_unsigned_long_long_int, vol_var__Complex_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_unsigned_long_long_int, vol_var__Complex_int);
}
static void
test_pow_1816 (void)
{
  extern typeof (pow (vol_var_unsigned_long_long_int, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_unsigned_long_long_int, vol_var_unsigned_int);
}
static void
test_pow_1817 (void)
{
  extern typeof (pow (vol_var_unsigned_long_long_int, vol_var__Complex_unsigned_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_unsigned_long_long_int, vol_var__Complex_unsigned_int);
}
static void
test_pow_1818 (void)
{
  extern typeof (pow (vol_var_unsigned_long_long_int, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_unsigned_long_long_int, vol_var_long_int);
}
static void
test_pow_1819 (void)
{
  extern typeof (pow (vol_var_unsigned_long_long_int, vol_var__Complex_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_unsigned_long_long_int, vol_var__Complex_long_int);
}
static void
test_pow_1820 (void)
{
  extern typeof (pow (vol_var_unsigned_long_long_int, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_unsigned_long_long_int, vol_var_unsigned_long_int);
}
static void
test_pow_1821 (void)
{
  extern typeof (pow (vol_var_unsigned_long_long_int, vol_var__Complex_unsigned_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_unsigned_long_long_int, vol_var__Complex_unsigned_long_int);
}
static void
test_pow_1822 (void)
{
  extern typeof (pow (vol_var_unsigned_long_long_int, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_unsigned_long_long_int, vol_var_long_long_int);
}
static void
test_pow_1823 (void)
{
  extern typeof (pow (vol_var_unsigned_long_long_int, vol_var__Complex_long_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_unsigned_long_long_int, vol_var__Complex_long_long_int);
}
static void
test_pow_1824 (void)
{
  extern typeof (pow (vol_var_unsigned_long_long_int, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_unsigned_long_long_int, vol_var_unsigned_long_long_int);
}
static void
test_pow_1825 (void)
{
  extern typeof (pow (vol_var_unsigned_long_long_int, vol_var__Complex_unsigned_long_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_unsigned_long_long_int, vol_var__Complex_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_pow_1826 (void)
{
  extern typeof (pow (vol_var_unsigned_long_long_int, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_unsigned_long_long_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1827 (void)
{
  extern typeof (pow (vol_var_unsigned_long_long_int, vol_var__Complex___int128)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_unsigned_long_long_int, vol_var__Complex___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1828 (void)
{
  extern typeof (pow (vol_var_unsigned_long_long_int, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_unsigned_long_long_int, vol_var_unsigned___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1829 (void)
{
  extern typeof (pow (vol_var_unsigned_long_long_int, vol_var__Complex_unsigned___int128)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_unsigned_long_long_int, vol_var__Complex_unsigned___int128);
}
#endif
static void
test_pow_1830 (void)
{
  extern typeof (pow (vol_var_unsigned_long_long_int, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_unsigned_long_long_int, vol_var_enum_e);
}
static void
test_pow_1831 (void)
{
  extern typeof (pow (vol_var_unsigned_long_long_int, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_unsigned_long_long_int, vol_var__Bool);
}
static void
test_pow_1832 (void)
{
  extern typeof (pow (vol_var_unsigned_long_long_int, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_unsigned_long_long_int, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_pow_1833 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_long_long_int, vol_var__Float16)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_long_long_int, vol_var__Float16);
}
#endif
#if defined HUGE_VAL_F16
static void
test_pow_1834 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_long_long_int, vol_var___CFLOAT16)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_long_long_int, vol_var___CFLOAT16);
}
#endif
static void
test_pow_1835 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_long_long_int, vol_var_float)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_long_long_int, vol_var_float);
}
static void
test_pow_1836 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_long_long_int, vol_var__Complex_float)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_long_long_int, vol_var__Complex_float);
}
#if defined HUGE_VAL_F32
static void
test_pow_1837 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_long_long_int, vol_var__Float32)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_long_long_int, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32
static void
test_pow_1838 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_long_long_int, vol_var___CFLOAT32)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_long_long_int, vol_var___CFLOAT32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_pow_1839 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_long_long_int, vol_var__Float32x)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_long_long_int, vol_var__Float32x);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_pow_1840 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_long_long_int, vol_var___CFLOAT32X)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_long_long_int, vol_var___CFLOAT32X);
}
#endif
static void
test_pow_1841 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_long_long_int, vol_var_double)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_long_long_int, vol_var_double);
}
static void
test_pow_1842 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_long_long_int, vol_var__Complex_double)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_long_long_int, vol_var__Complex_double);
}
static void
test_pow_1843 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_long_long_int, vol_var_long_double)) var__Complex_long_double __attribute__ ((unused));
  vol_var__Complex_long_double = pow (vol_var__Complex_unsigned_long_long_int, vol_var_long_double);
}
static void
test_pow_1844 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_long_long_int, vol_var__Complex_long_double)) var__Complex_long_double __attribute__ ((unused));
  vol_var__Complex_long_double = pow (vol_var__Complex_unsigned_long_long_int, vol_var__Complex_long_double);
}
#if defined HUGE_VAL_F64
static void
test_pow_1845 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_long_long_int, vol_var__Float64)) var___CFLOAT64 __attribute__ ((unused));
  vol_var___CFLOAT64 = pow (vol_var__Complex_unsigned_long_long_int, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64
static void
test_pow_1846 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_long_long_int, vol_var___CFLOAT64)) var___CFLOAT64 __attribute__ ((unused));
  vol_var___CFLOAT64 = pow (vol_var__Complex_unsigned_long_long_int, vol_var___CFLOAT64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_pow_1847 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_long_long_int, vol_var__Float64x)) var___CFLOAT64X __attribute__ ((unused));
  vol_var___CFLOAT64X = pow (vol_var__Complex_unsigned_long_long_int, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_pow_1848 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_long_long_int, vol_var___CFLOAT64X)) var___CFLOAT64X __attribute__ ((unused));
  vol_var___CFLOAT64X = pow (vol_var__Complex_unsigned_long_long_int, vol_var___CFLOAT64X);
}
#endif
#if defined HUGE_VAL_F128
static void
test_pow_1849 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_long_long_int, vol_var__Float128)) var___CFLOAT128 __attribute__ ((unused));
  vol_var___CFLOAT128 = pow (vol_var__Complex_unsigned_long_long_int, vol_var__Float128);
}
#endif
#if defined HUGE_VAL_F128
static void
test_pow_1850 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_long_long_int, vol_var___CFLOAT128)) var___CFLOAT128 __attribute__ ((unused));
  vol_var___CFLOAT128 = pow (vol_var__Complex_unsigned_long_long_int, vol_var___CFLOAT128);
}
#endif
static void
test_pow_1851 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_long_long_int, vol_var_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_long_long_int, vol_var_char);
}
static void
test_pow_1852 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_long_long_int, vol_var__Complex_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_long_long_int, vol_var__Complex_char);
}
static void
test_pow_1853 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_long_long_int, vol_var_signed_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_long_long_int, vol_var_signed_char);
}
static void
test_pow_1854 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_long_long_int, vol_var__Complex_signed_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_long_long_int, vol_var__Complex_signed_char);
}
static void
test_pow_1855 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_long_long_int, vol_var_unsigned_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_long_long_int, vol_var_unsigned_char);
}
static void
test_pow_1856 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_long_long_int, vol_var__Complex_unsigned_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_long_long_int, vol_var__Complex_unsigned_char);
}
static void
test_pow_1857 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_long_long_int, vol_var_short_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_long_long_int, vol_var_short_int);
}
static void
test_pow_1858 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_long_long_int, vol_var__Complex_short_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_long_long_int, vol_var__Complex_short_int);
}
static void
test_pow_1859 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_long_long_int, vol_var_unsigned_short_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_long_long_int, vol_var_unsigned_short_int);
}
static void
test_pow_1860 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_long_long_int, vol_var__Complex_unsigned_short_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_long_long_int, vol_var__Complex_unsigned_short_int);
}
static void
test_pow_1861 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_long_long_int, vol_var_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_long_long_int, vol_var_int);
}
static void
test_pow_1862 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_long_long_int, vol_var__Complex_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_long_long_int, vol_var__Complex_int);
}
static void
test_pow_1863 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_long_long_int, vol_var_unsigned_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_long_long_int, vol_var_unsigned_int);
}
static void
test_pow_1864 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_long_long_int, vol_var__Complex_unsigned_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_long_long_int, vol_var__Complex_unsigned_int);
}
static void
test_pow_1865 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_long_long_int, vol_var_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_long_long_int, vol_var_long_int);
}
static void
test_pow_1866 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_long_long_int, vol_var__Complex_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_long_long_int, vol_var__Complex_long_int);
}
static void
test_pow_1867 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_long_long_int, vol_var_unsigned_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_long_long_int, vol_var_unsigned_long_int);
}
static void
test_pow_1868 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_long_long_int, vol_var__Complex_unsigned_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_long_long_int, vol_var__Complex_unsigned_long_int);
}
static void
test_pow_1869 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_long_long_int, vol_var_long_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_long_long_int, vol_var_long_long_int);
}
static void
test_pow_1870 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_long_long_int, vol_var__Complex_long_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_long_long_int, vol_var__Complex_long_long_int);
}
static void
test_pow_1871 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_long_long_int, vol_var_unsigned_long_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_long_long_int, vol_var_unsigned_long_long_int);
}
static void
test_pow_1872 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_long_long_int, vol_var__Complex_unsigned_long_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_long_long_int, vol_var__Complex_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_pow_1873 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_long_long_int, vol_var___int128)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_long_long_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1874 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_long_long_int, vol_var__Complex___int128)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_long_long_int, vol_var__Complex___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1875 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_long_long_int, vol_var_unsigned___int128)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_long_long_int, vol_var_unsigned___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1876 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_long_long_int, vol_var__Complex_unsigned___int128)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_long_long_int, vol_var__Complex_unsigned___int128);
}
#endif
static void
test_pow_1877 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_long_long_int, vol_var_enum_e)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_long_long_int, vol_var_enum_e);
}
static void
test_pow_1878 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_long_long_int, vol_var__Bool)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_long_long_int, vol_var__Bool);
}
static void
test_pow_1879 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned_long_long_int, vol_var_bit_field)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned_long_long_int, vol_var_bit_field);
}
#if defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_pow_1880 (void)
{
  extern typeof (pow (vol_var___int128, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var___int128, vol_var__Float16);
}
#endif
#if defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_pow_1881 (void)
{
  extern typeof (pow (vol_var___int128, vol_var___CFLOAT16)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var___int128, vol_var___CFLOAT16);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1882 (void)
{
  extern typeof (pow (vol_var___int128, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var___int128, vol_var_float);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1883 (void)
{
  extern typeof (pow (vol_var___int128, vol_var__Complex_float)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var___int128, vol_var__Complex_float);
}
#endif
#if defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_pow_1884 (void)
{
  extern typeof (pow (vol_var___int128, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var___int128, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_pow_1885 (void)
{
  extern typeof (pow (vol_var___int128, vol_var___CFLOAT32)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var___int128, vol_var___CFLOAT32);
}
#endif
#if defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_pow_1886 (void)
{
  extern typeof (pow (vol_var___int128, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var___int128, vol_var__Float32x);
}
#endif
#if defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_pow_1887 (void)
{
  extern typeof (pow (vol_var___int128, vol_var___CFLOAT32X)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var___int128, vol_var___CFLOAT32X);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1888 (void)
{
  extern typeof (pow (vol_var___int128, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var___int128, vol_var_double);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1889 (void)
{
  extern typeof (pow (vol_var___int128, vol_var__Complex_double)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var___int128, vol_var__Complex_double);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1890 (void)
{
  extern typeof (pow (vol_var___int128, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = pow (vol_var___int128, vol_var_long_double);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1891 (void)
{
  extern typeof (pow (vol_var___int128, vol_var__Complex_long_double)) var__Complex_long_double __attribute__ ((unused));
  vol_var__Complex_long_double = pow (vol_var___int128, vol_var__Complex_long_double);
}
#endif
#if defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_pow_1892 (void)
{
  extern typeof (pow (vol_var___int128, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = pow (vol_var___int128, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_pow_1893 (void)
{
  extern typeof (pow (vol_var___int128, vol_var___CFLOAT64)) var___CFLOAT64 __attribute__ ((unused));
  vol_var___CFLOAT64 = pow (vol_var___int128, vol_var___CFLOAT64);
}
#endif
#if defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_pow_1894 (void)
{
  extern typeof (pow (vol_var___int128, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = pow (vol_var___int128, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_pow_1895 (void)
{
  extern typeof (pow (vol_var___int128, vol_var___CFLOAT64X)) var___CFLOAT64X __attribute__ ((unused));
  vol_var___CFLOAT64X = pow (vol_var___int128, vol_var___CFLOAT64X);
}
#endif
#if defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_pow_1896 (void)
{
  extern typeof (pow (vol_var___int128, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = pow (vol_var___int128, vol_var__Float128);
}
#endif
#if defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_pow_1897 (void)
{
  extern typeof (pow (vol_var___int128, vol_var___CFLOAT128)) var___CFLOAT128 __attribute__ ((unused));
  vol_var___CFLOAT128 = pow (vol_var___int128, vol_var___CFLOAT128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1898 (void)
{
  extern typeof (pow (vol_var___int128, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var___int128, vol_var_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1899 (void)
{
  extern typeof (pow (vol_var___int128, vol_var__Complex_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var___int128, vol_var__Complex_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1900 (void)
{
  extern typeof (pow (vol_var___int128, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var___int128, vol_var_signed_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1901 (void)
{
  extern typeof (pow (vol_var___int128, vol_var__Complex_signed_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var___int128, vol_var__Complex_signed_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1902 (void)
{
  extern typeof (pow (vol_var___int128, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var___int128, vol_var_unsigned_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1903 (void)
{
  extern typeof (pow (vol_var___int128, vol_var__Complex_unsigned_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var___int128, vol_var__Complex_unsigned_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1904 (void)
{
  extern typeof (pow (vol_var___int128, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var___int128, vol_var_short_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1905 (void)
{
  extern typeof (pow (vol_var___int128, vol_var__Complex_short_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var___int128, vol_var__Complex_short_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1906 (void)
{
  extern typeof (pow (vol_var___int128, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var___int128, vol_var_unsigned_short_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1907 (void)
{
  extern typeof (pow (vol_var___int128, vol_var__Complex_unsigned_short_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var___int128, vol_var__Complex_unsigned_short_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1908 (void)
{
  extern typeof (pow (vol_var___int128, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var___int128, vol_var_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1909 (void)
{
  extern typeof (pow (vol_var___int128, vol_var__Complex_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var___int128, vol_var__Complex_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1910 (void)
{
  extern typeof (pow (vol_var___int128, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var___int128, vol_var_unsigned_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1911 (void)
{
  extern typeof (pow (vol_var___int128, vol_var__Complex_unsigned_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var___int128, vol_var__Complex_unsigned_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1912 (void)
{
  extern typeof (pow (vol_var___int128, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var___int128, vol_var_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1913 (void)
{
  extern typeof (pow (vol_var___int128, vol_var__Complex_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var___int128, vol_var__Complex_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1914 (void)
{
  extern typeof (pow (vol_var___int128, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var___int128, vol_var_unsigned_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1915 (void)
{
  extern typeof (pow (vol_var___int128, vol_var__Complex_unsigned_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var___int128, vol_var__Complex_unsigned_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1916 (void)
{
  extern typeof (pow (vol_var___int128, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var___int128, vol_var_long_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1917 (void)
{
  extern typeof (pow (vol_var___int128, vol_var__Complex_long_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var___int128, vol_var__Complex_long_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1918 (void)
{
  extern typeof (pow (vol_var___int128, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var___int128, vol_var_unsigned_long_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1919 (void)
{
  extern typeof (pow (vol_var___int128, vol_var__Complex_unsigned_long_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var___int128, vol_var__Complex_unsigned_long_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1920 (void)
{
  extern typeof (pow (vol_var___int128, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var___int128, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1921 (void)
{
  extern typeof (pow (vol_var___int128, vol_var__Complex___int128)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var___int128, vol_var__Complex___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1922 (void)
{
  extern typeof (pow (vol_var___int128, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var___int128, vol_var_unsigned___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1923 (void)
{
  extern typeof (pow (vol_var___int128, vol_var__Complex_unsigned___int128)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var___int128, vol_var__Complex_unsigned___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1924 (void)
{
  extern typeof (pow (vol_var___int128, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var___int128, vol_var_enum_e);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1925 (void)
{
  extern typeof (pow (vol_var___int128, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var___int128, vol_var__Bool);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1926 (void)
{
  extern typeof (pow (vol_var___int128, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var___int128, vol_var_bit_field);
}
#endif
#if defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_pow_1927 (void)
{
  extern typeof (pow (vol_var__Complex___int128, vol_var__Float16)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex___int128, vol_var__Float16);
}
#endif
#if defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_pow_1928 (void)
{
  extern typeof (pow (vol_var__Complex___int128, vol_var___CFLOAT16)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex___int128, vol_var___CFLOAT16);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1929 (void)
{
  extern typeof (pow (vol_var__Complex___int128, vol_var_float)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex___int128, vol_var_float);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1930 (void)
{
  extern typeof (pow (vol_var__Complex___int128, vol_var__Complex_float)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex___int128, vol_var__Complex_float);
}
#endif
#if defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_pow_1931 (void)
{
  extern typeof (pow (vol_var__Complex___int128, vol_var__Float32)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex___int128, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_pow_1932 (void)
{
  extern typeof (pow (vol_var__Complex___int128, vol_var___CFLOAT32)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex___int128, vol_var___CFLOAT32);
}
#endif
#if defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_pow_1933 (void)
{
  extern typeof (pow (vol_var__Complex___int128, vol_var__Float32x)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex___int128, vol_var__Float32x);
}
#endif
#if defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_pow_1934 (void)
{
  extern typeof (pow (vol_var__Complex___int128, vol_var___CFLOAT32X)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex___int128, vol_var___CFLOAT32X);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1935 (void)
{
  extern typeof (pow (vol_var__Complex___int128, vol_var_double)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex___int128, vol_var_double);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1936 (void)
{
  extern typeof (pow (vol_var__Complex___int128, vol_var__Complex_double)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex___int128, vol_var__Complex_double);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1937 (void)
{
  extern typeof (pow (vol_var__Complex___int128, vol_var_long_double)) var__Complex_long_double __attribute__ ((unused));
  vol_var__Complex_long_double = pow (vol_var__Complex___int128, vol_var_long_double);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1938 (void)
{
  extern typeof (pow (vol_var__Complex___int128, vol_var__Complex_long_double)) var__Complex_long_double __attribute__ ((unused));
  vol_var__Complex_long_double = pow (vol_var__Complex___int128, vol_var__Complex_long_double);
}
#endif
#if defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_pow_1939 (void)
{
  extern typeof (pow (vol_var__Complex___int128, vol_var__Float64)) var___CFLOAT64 __attribute__ ((unused));
  vol_var___CFLOAT64 = pow (vol_var__Complex___int128, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_pow_1940 (void)
{
  extern typeof (pow (vol_var__Complex___int128, vol_var___CFLOAT64)) var___CFLOAT64 __attribute__ ((unused));
  vol_var___CFLOAT64 = pow (vol_var__Complex___int128, vol_var___CFLOAT64);
}
#endif
#if defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_pow_1941 (void)
{
  extern typeof (pow (vol_var__Complex___int128, vol_var__Float64x)) var___CFLOAT64X __attribute__ ((unused));
  vol_var___CFLOAT64X = pow (vol_var__Complex___int128, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_pow_1942 (void)
{
  extern typeof (pow (vol_var__Complex___int128, vol_var___CFLOAT64X)) var___CFLOAT64X __attribute__ ((unused));
  vol_var___CFLOAT64X = pow (vol_var__Complex___int128, vol_var___CFLOAT64X);
}
#endif
#if defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_pow_1943 (void)
{
  extern typeof (pow (vol_var__Complex___int128, vol_var__Float128)) var___CFLOAT128 __attribute__ ((unused));
  vol_var___CFLOAT128 = pow (vol_var__Complex___int128, vol_var__Float128);
}
#endif
#if defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_pow_1944 (void)
{
  extern typeof (pow (vol_var__Complex___int128, vol_var___CFLOAT128)) var___CFLOAT128 __attribute__ ((unused));
  vol_var___CFLOAT128 = pow (vol_var__Complex___int128, vol_var___CFLOAT128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1945 (void)
{
  extern typeof (pow (vol_var__Complex___int128, vol_var_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex___int128, vol_var_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1946 (void)
{
  extern typeof (pow (vol_var__Complex___int128, vol_var__Complex_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex___int128, vol_var__Complex_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1947 (void)
{
  extern typeof (pow (vol_var__Complex___int128, vol_var_signed_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex___int128, vol_var_signed_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1948 (void)
{
  extern typeof (pow (vol_var__Complex___int128, vol_var__Complex_signed_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex___int128, vol_var__Complex_signed_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1949 (void)
{
  extern typeof (pow (vol_var__Complex___int128, vol_var_unsigned_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex___int128, vol_var_unsigned_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1950 (void)
{
  extern typeof (pow (vol_var__Complex___int128, vol_var__Complex_unsigned_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex___int128, vol_var__Complex_unsigned_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1951 (void)
{
  extern typeof (pow (vol_var__Complex___int128, vol_var_short_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex___int128, vol_var_short_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1952 (void)
{
  extern typeof (pow (vol_var__Complex___int128, vol_var__Complex_short_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex___int128, vol_var__Complex_short_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1953 (void)
{
  extern typeof (pow (vol_var__Complex___int128, vol_var_unsigned_short_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex___int128, vol_var_unsigned_short_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1954 (void)
{
  extern typeof (pow (vol_var__Complex___int128, vol_var__Complex_unsigned_short_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex___int128, vol_var__Complex_unsigned_short_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1955 (void)
{
  extern typeof (pow (vol_var__Complex___int128, vol_var_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex___int128, vol_var_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1956 (void)
{
  extern typeof (pow (vol_var__Complex___int128, vol_var__Complex_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex___int128, vol_var__Complex_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1957 (void)
{
  extern typeof (pow (vol_var__Complex___int128, vol_var_unsigned_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex___int128, vol_var_unsigned_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1958 (void)
{
  extern typeof (pow (vol_var__Complex___int128, vol_var__Complex_unsigned_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex___int128, vol_var__Complex_unsigned_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1959 (void)
{
  extern typeof (pow (vol_var__Complex___int128, vol_var_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex___int128, vol_var_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1960 (void)
{
  extern typeof (pow (vol_var__Complex___int128, vol_var__Complex_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex___int128, vol_var__Complex_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1961 (void)
{
  extern typeof (pow (vol_var__Complex___int128, vol_var_unsigned_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex___int128, vol_var_unsigned_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1962 (void)
{
  extern typeof (pow (vol_var__Complex___int128, vol_var__Complex_unsigned_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex___int128, vol_var__Complex_unsigned_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1963 (void)
{
  extern typeof (pow (vol_var__Complex___int128, vol_var_long_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex___int128, vol_var_long_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1964 (void)
{
  extern typeof (pow (vol_var__Complex___int128, vol_var__Complex_long_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex___int128, vol_var__Complex_long_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1965 (void)
{
  extern typeof (pow (vol_var__Complex___int128, vol_var_unsigned_long_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex___int128, vol_var_unsigned_long_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1966 (void)
{
  extern typeof (pow (vol_var__Complex___int128, vol_var__Complex_unsigned_long_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex___int128, vol_var__Complex_unsigned_long_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1967 (void)
{
  extern typeof (pow (vol_var__Complex___int128, vol_var___int128)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex___int128, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1968 (void)
{
  extern typeof (pow (vol_var__Complex___int128, vol_var__Complex___int128)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex___int128, vol_var__Complex___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1969 (void)
{
  extern typeof (pow (vol_var__Complex___int128, vol_var_unsigned___int128)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex___int128, vol_var_unsigned___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1970 (void)
{
  extern typeof (pow (vol_var__Complex___int128, vol_var__Complex_unsigned___int128)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex___int128, vol_var__Complex_unsigned___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1971 (void)
{
  extern typeof (pow (vol_var__Complex___int128, vol_var_enum_e)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex___int128, vol_var_enum_e);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1972 (void)
{
  extern typeof (pow (vol_var__Complex___int128, vol_var__Bool)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex___int128, vol_var__Bool);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1973 (void)
{
  extern typeof (pow (vol_var__Complex___int128, vol_var_bit_field)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex___int128, vol_var_bit_field);
}
#endif
#if defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_pow_1974 (void)
{
  extern typeof (pow (vol_var_unsigned___int128, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_unsigned___int128, vol_var__Float16);
}
#endif
#if defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_pow_1975 (void)
{
  extern typeof (pow (vol_var_unsigned___int128, vol_var___CFLOAT16)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_unsigned___int128, vol_var___CFLOAT16);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1976 (void)
{
  extern typeof (pow (vol_var_unsigned___int128, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_unsigned___int128, vol_var_float);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1977 (void)
{
  extern typeof (pow (vol_var_unsigned___int128, vol_var__Complex_float)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_unsigned___int128, vol_var__Complex_float);
}
#endif
#if defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_pow_1978 (void)
{
  extern typeof (pow (vol_var_unsigned___int128, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_unsigned___int128, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_pow_1979 (void)
{
  extern typeof (pow (vol_var_unsigned___int128, vol_var___CFLOAT32)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_unsigned___int128, vol_var___CFLOAT32);
}
#endif
#if defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_pow_1980 (void)
{
  extern typeof (pow (vol_var_unsigned___int128, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_unsigned___int128, vol_var__Float32x);
}
#endif
#if defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_pow_1981 (void)
{
  extern typeof (pow (vol_var_unsigned___int128, vol_var___CFLOAT32X)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_unsigned___int128, vol_var___CFLOAT32X);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1982 (void)
{
  extern typeof (pow (vol_var_unsigned___int128, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_unsigned___int128, vol_var_double);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1983 (void)
{
  extern typeof (pow (vol_var_unsigned___int128, vol_var__Complex_double)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_unsigned___int128, vol_var__Complex_double);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1984 (void)
{
  extern typeof (pow (vol_var_unsigned___int128, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = pow (vol_var_unsigned___int128, vol_var_long_double);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1985 (void)
{
  extern typeof (pow (vol_var_unsigned___int128, vol_var__Complex_long_double)) var__Complex_long_double __attribute__ ((unused));
  vol_var__Complex_long_double = pow (vol_var_unsigned___int128, vol_var__Complex_long_double);
}
#endif
#if defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_pow_1986 (void)
{
  extern typeof (pow (vol_var_unsigned___int128, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = pow (vol_var_unsigned___int128, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_pow_1987 (void)
{
  extern typeof (pow (vol_var_unsigned___int128, vol_var___CFLOAT64)) var___CFLOAT64 __attribute__ ((unused));
  vol_var___CFLOAT64 = pow (vol_var_unsigned___int128, vol_var___CFLOAT64);
}
#endif
#if defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_pow_1988 (void)
{
  extern typeof (pow (vol_var_unsigned___int128, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = pow (vol_var_unsigned___int128, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_pow_1989 (void)
{
  extern typeof (pow (vol_var_unsigned___int128, vol_var___CFLOAT64X)) var___CFLOAT64X __attribute__ ((unused));
  vol_var___CFLOAT64X = pow (vol_var_unsigned___int128, vol_var___CFLOAT64X);
}
#endif
#if defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_pow_1990 (void)
{
  extern typeof (pow (vol_var_unsigned___int128, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = pow (vol_var_unsigned___int128, vol_var__Float128);
}
#endif
#if defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_pow_1991 (void)
{
  extern typeof (pow (vol_var_unsigned___int128, vol_var___CFLOAT128)) var___CFLOAT128 __attribute__ ((unused));
  vol_var___CFLOAT128 = pow (vol_var_unsigned___int128, vol_var___CFLOAT128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1992 (void)
{
  extern typeof (pow (vol_var_unsigned___int128, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_unsigned___int128, vol_var_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1993 (void)
{
  extern typeof (pow (vol_var_unsigned___int128, vol_var__Complex_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_unsigned___int128, vol_var__Complex_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1994 (void)
{
  extern typeof (pow (vol_var_unsigned___int128, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_unsigned___int128, vol_var_signed_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1995 (void)
{
  extern typeof (pow (vol_var_unsigned___int128, vol_var__Complex_signed_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_unsigned___int128, vol_var__Complex_signed_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1996 (void)
{
  extern typeof (pow (vol_var_unsigned___int128, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_unsigned___int128, vol_var_unsigned_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1997 (void)
{
  extern typeof (pow (vol_var_unsigned___int128, vol_var__Complex_unsigned_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_unsigned___int128, vol_var__Complex_unsigned_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1998 (void)
{
  extern typeof (pow (vol_var_unsigned___int128, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_unsigned___int128, vol_var_short_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_1999 (void)
{
  extern typeof (pow (vol_var_unsigned___int128, vol_var__Complex_short_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_unsigned___int128, vol_var__Complex_short_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_2000 (void)
{
  extern typeof (pow (vol_var_unsigned___int128, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_unsigned___int128, vol_var_unsigned_short_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_2001 (void)
{
  extern typeof (pow (vol_var_unsigned___int128, vol_var__Complex_unsigned_short_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_unsigned___int128, vol_var__Complex_unsigned_short_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_2002 (void)
{
  extern typeof (pow (vol_var_unsigned___int128, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_unsigned___int128, vol_var_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_2003 (void)
{
  extern typeof (pow (vol_var_unsigned___int128, vol_var__Complex_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_unsigned___int128, vol_var__Complex_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_2004 (void)
{
  extern typeof (pow (vol_var_unsigned___int128, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_unsigned___int128, vol_var_unsigned_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_2005 (void)
{
  extern typeof (pow (vol_var_unsigned___int128, vol_var__Complex_unsigned_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_unsigned___int128, vol_var__Complex_unsigned_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_2006 (void)
{
  extern typeof (pow (vol_var_unsigned___int128, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_unsigned___int128, vol_var_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_2007 (void)
{
  extern typeof (pow (vol_var_unsigned___int128, vol_var__Complex_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_unsigned___int128, vol_var__Complex_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_2008 (void)
{
  extern typeof (pow (vol_var_unsigned___int128, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_unsigned___int128, vol_var_unsigned_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_2009 (void)
{
  extern typeof (pow (vol_var_unsigned___int128, vol_var__Complex_unsigned_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_unsigned___int128, vol_var__Complex_unsigned_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_2010 (void)
{
  extern typeof (pow (vol_var_unsigned___int128, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_unsigned___int128, vol_var_long_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_2011 (void)
{
  extern typeof (pow (vol_var_unsigned___int128, vol_var__Complex_long_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_unsigned___int128, vol_var__Complex_long_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_2012 (void)
{
  extern typeof (pow (vol_var_unsigned___int128, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_unsigned___int128, vol_var_unsigned_long_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_2013 (void)
{
  extern typeof (pow (vol_var_unsigned___int128, vol_var__Complex_unsigned_long_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_unsigned___int128, vol_var__Complex_unsigned_long_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_2014 (void)
{
  extern typeof (pow (vol_var_unsigned___int128, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_unsigned___int128, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_2015 (void)
{
  extern typeof (pow (vol_var_unsigned___int128, vol_var__Complex___int128)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_unsigned___int128, vol_var__Complex___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_2016 (void)
{
  extern typeof (pow (vol_var_unsigned___int128, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_unsigned___int128, vol_var_unsigned___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_2017 (void)
{
  extern typeof (pow (vol_var_unsigned___int128, vol_var__Complex_unsigned___int128)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_unsigned___int128, vol_var__Complex_unsigned___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_2018 (void)
{
  extern typeof (pow (vol_var_unsigned___int128, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_unsigned___int128, vol_var_enum_e);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_2019 (void)
{
  extern typeof (pow (vol_var_unsigned___int128, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_unsigned___int128, vol_var__Bool);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_2020 (void)
{
  extern typeof (pow (vol_var_unsigned___int128, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_unsigned___int128, vol_var_bit_field);
}
#endif
#if defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_pow_2021 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned___int128, vol_var__Float16)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned___int128, vol_var__Float16);
}
#endif
#if defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_pow_2022 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned___int128, vol_var___CFLOAT16)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned___int128, vol_var___CFLOAT16);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_2023 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned___int128, vol_var_float)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned___int128, vol_var_float);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_2024 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned___int128, vol_var__Complex_float)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned___int128, vol_var__Complex_float);
}
#endif
#if defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_pow_2025 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned___int128, vol_var__Float32)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned___int128, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_pow_2026 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned___int128, vol_var___CFLOAT32)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned___int128, vol_var___CFLOAT32);
}
#endif
#if defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_pow_2027 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned___int128, vol_var__Float32x)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned___int128, vol_var__Float32x);
}
#endif
#if defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_pow_2028 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned___int128, vol_var___CFLOAT32X)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned___int128, vol_var___CFLOAT32X);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_2029 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned___int128, vol_var_double)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned___int128, vol_var_double);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_2030 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned___int128, vol_var__Complex_double)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned___int128, vol_var__Complex_double);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_2031 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned___int128, vol_var_long_double)) var__Complex_long_double __attribute__ ((unused));
  vol_var__Complex_long_double = pow (vol_var__Complex_unsigned___int128, vol_var_long_double);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_2032 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned___int128, vol_var__Complex_long_double)) var__Complex_long_double __attribute__ ((unused));
  vol_var__Complex_long_double = pow (vol_var__Complex_unsigned___int128, vol_var__Complex_long_double);
}
#endif
#if defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_pow_2033 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned___int128, vol_var__Float64)) var___CFLOAT64 __attribute__ ((unused));
  vol_var___CFLOAT64 = pow (vol_var__Complex_unsigned___int128, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_pow_2034 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned___int128, vol_var___CFLOAT64)) var___CFLOAT64 __attribute__ ((unused));
  vol_var___CFLOAT64 = pow (vol_var__Complex_unsigned___int128, vol_var___CFLOAT64);
}
#endif
#if defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_pow_2035 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned___int128, vol_var__Float64x)) var___CFLOAT64X __attribute__ ((unused));
  vol_var___CFLOAT64X = pow (vol_var__Complex_unsigned___int128, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_pow_2036 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned___int128, vol_var___CFLOAT64X)) var___CFLOAT64X __attribute__ ((unused));
  vol_var___CFLOAT64X = pow (vol_var__Complex_unsigned___int128, vol_var___CFLOAT64X);
}
#endif
#if defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_pow_2037 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned___int128, vol_var__Float128)) var___CFLOAT128 __attribute__ ((unused));
  vol_var___CFLOAT128 = pow (vol_var__Complex_unsigned___int128, vol_var__Float128);
}
#endif
#if defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_pow_2038 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned___int128, vol_var___CFLOAT128)) var___CFLOAT128 __attribute__ ((unused));
  vol_var___CFLOAT128 = pow (vol_var__Complex_unsigned___int128, vol_var___CFLOAT128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_2039 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned___int128, vol_var_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned___int128, vol_var_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_2040 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned___int128, vol_var__Complex_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned___int128, vol_var__Complex_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_2041 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned___int128, vol_var_signed_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned___int128, vol_var_signed_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_2042 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned___int128, vol_var__Complex_signed_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned___int128, vol_var__Complex_signed_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_2043 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned___int128, vol_var_unsigned_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned___int128, vol_var_unsigned_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_2044 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned___int128, vol_var__Complex_unsigned_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned___int128, vol_var__Complex_unsigned_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_2045 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned___int128, vol_var_short_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned___int128, vol_var_short_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_2046 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned___int128, vol_var__Complex_short_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned___int128, vol_var__Complex_short_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_2047 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned___int128, vol_var_unsigned_short_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned___int128, vol_var_unsigned_short_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_2048 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned___int128, vol_var__Complex_unsigned_short_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned___int128, vol_var__Complex_unsigned_short_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_2049 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned___int128, vol_var_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned___int128, vol_var_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_2050 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned___int128, vol_var__Complex_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned___int128, vol_var__Complex_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_2051 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned___int128, vol_var_unsigned_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned___int128, vol_var_unsigned_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_2052 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned___int128, vol_var__Complex_unsigned_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned___int128, vol_var__Complex_unsigned_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_2053 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned___int128, vol_var_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned___int128, vol_var_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_2054 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned___int128, vol_var__Complex_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned___int128, vol_var__Complex_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_2055 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned___int128, vol_var_unsigned_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned___int128, vol_var_unsigned_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_2056 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned___int128, vol_var__Complex_unsigned_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned___int128, vol_var__Complex_unsigned_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_2057 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned___int128, vol_var_long_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned___int128, vol_var_long_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_2058 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned___int128, vol_var__Complex_long_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned___int128, vol_var__Complex_long_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_2059 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned___int128, vol_var_unsigned_long_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned___int128, vol_var_unsigned_long_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_2060 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned___int128, vol_var__Complex_unsigned_long_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned___int128, vol_var__Complex_unsigned_long_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_2061 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned___int128, vol_var___int128)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned___int128, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_2062 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned___int128, vol_var__Complex___int128)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned___int128, vol_var__Complex___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_2063 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned___int128, vol_var_unsigned___int128)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned___int128, vol_var_unsigned___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_2064 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned___int128, vol_var__Complex_unsigned___int128)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned___int128, vol_var__Complex_unsigned___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_2065 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned___int128, vol_var_enum_e)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned___int128, vol_var_enum_e);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_2066 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned___int128, vol_var__Bool)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned___int128, vol_var__Bool);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_2067 (void)
{
  extern typeof (pow (vol_var__Complex_unsigned___int128, vol_var_bit_field)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Complex_unsigned___int128, vol_var_bit_field);
}
#endif
#if defined HUGE_VAL_F16
static void
test_pow_2068 (void)
{
  extern typeof (pow (vol_var_enum_e, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_enum_e, vol_var__Float16);
}
#endif
#if defined HUGE_VAL_F16
static void
test_pow_2069 (void)
{
  extern typeof (pow (vol_var_enum_e, vol_var___CFLOAT16)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_enum_e, vol_var___CFLOAT16);
}
#endif
static void
test_pow_2070 (void)
{
  extern typeof (pow (vol_var_enum_e, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_enum_e, vol_var_float);
}
static void
test_pow_2071 (void)
{
  extern typeof (pow (vol_var_enum_e, vol_var__Complex_float)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_enum_e, vol_var__Complex_float);
}
#if defined HUGE_VAL_F32
static void
test_pow_2072 (void)
{
  extern typeof (pow (vol_var_enum_e, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_enum_e, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32
static void
test_pow_2073 (void)
{
  extern typeof (pow (vol_var_enum_e, vol_var___CFLOAT32)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_enum_e, vol_var___CFLOAT32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_pow_2074 (void)
{
  extern typeof (pow (vol_var_enum_e, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_enum_e, vol_var__Float32x);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_pow_2075 (void)
{
  extern typeof (pow (vol_var_enum_e, vol_var___CFLOAT32X)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_enum_e, vol_var___CFLOAT32X);
}
#endif
static void
test_pow_2076 (void)
{
  extern typeof (pow (vol_var_enum_e, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_enum_e, vol_var_double);
}
static void
test_pow_2077 (void)
{
  extern typeof (pow (vol_var_enum_e, vol_var__Complex_double)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_enum_e, vol_var__Complex_double);
}
static void
test_pow_2078 (void)
{
  extern typeof (pow (vol_var_enum_e, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = pow (vol_var_enum_e, vol_var_long_double);
}
static void
test_pow_2079 (void)
{
  extern typeof (pow (vol_var_enum_e, vol_var__Complex_long_double)) var__Complex_long_double __attribute__ ((unused));
  vol_var__Complex_long_double = pow (vol_var_enum_e, vol_var__Complex_long_double);
}
#if defined HUGE_VAL_F64
static void
test_pow_2080 (void)
{
  extern typeof (pow (vol_var_enum_e, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = pow (vol_var_enum_e, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64
static void
test_pow_2081 (void)
{
  extern typeof (pow (vol_var_enum_e, vol_var___CFLOAT64)) var___CFLOAT64 __attribute__ ((unused));
  vol_var___CFLOAT64 = pow (vol_var_enum_e, vol_var___CFLOAT64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_pow_2082 (void)
{
  extern typeof (pow (vol_var_enum_e, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = pow (vol_var_enum_e, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_pow_2083 (void)
{
  extern typeof (pow (vol_var_enum_e, vol_var___CFLOAT64X)) var___CFLOAT64X __attribute__ ((unused));
  vol_var___CFLOAT64X = pow (vol_var_enum_e, vol_var___CFLOAT64X);
}
#endif
#if defined HUGE_VAL_F128
static void
test_pow_2084 (void)
{
  extern typeof (pow (vol_var_enum_e, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = pow (vol_var_enum_e, vol_var__Float128);
}
#endif
#if defined HUGE_VAL_F128
static void
test_pow_2085 (void)
{
  extern typeof (pow (vol_var_enum_e, vol_var___CFLOAT128)) var___CFLOAT128 __attribute__ ((unused));
  vol_var___CFLOAT128 = pow (vol_var_enum_e, vol_var___CFLOAT128);
}
#endif
static void
test_pow_2086 (void)
{
  extern typeof (pow (vol_var_enum_e, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_enum_e, vol_var_char);
}
static void
test_pow_2087 (void)
{
  extern typeof (pow (vol_var_enum_e, vol_var__Complex_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_enum_e, vol_var__Complex_char);
}
static void
test_pow_2088 (void)
{
  extern typeof (pow (vol_var_enum_e, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_enum_e, vol_var_signed_char);
}
static void
test_pow_2089 (void)
{
  extern typeof (pow (vol_var_enum_e, vol_var__Complex_signed_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_enum_e, vol_var__Complex_signed_char);
}
static void
test_pow_2090 (void)
{
  extern typeof (pow (vol_var_enum_e, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_enum_e, vol_var_unsigned_char);
}
static void
test_pow_2091 (void)
{
  extern typeof (pow (vol_var_enum_e, vol_var__Complex_unsigned_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_enum_e, vol_var__Complex_unsigned_char);
}
static void
test_pow_2092 (void)
{
  extern typeof (pow (vol_var_enum_e, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_enum_e, vol_var_short_int);
}
static void
test_pow_2093 (void)
{
  extern typeof (pow (vol_var_enum_e, vol_var__Complex_short_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_enum_e, vol_var__Complex_short_int);
}
static void
test_pow_2094 (void)
{
  extern typeof (pow (vol_var_enum_e, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_enum_e, vol_var_unsigned_short_int);
}
static void
test_pow_2095 (void)
{
  extern typeof (pow (vol_var_enum_e, vol_var__Complex_unsigned_short_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_enum_e, vol_var__Complex_unsigned_short_int);
}
static void
test_pow_2096 (void)
{
  extern typeof (pow (vol_var_enum_e, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_enum_e, vol_var_int);
}
static void
test_pow_2097 (void)
{
  extern typeof (pow (vol_var_enum_e, vol_var__Complex_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_enum_e, vol_var__Complex_int);
}
static void
test_pow_2098 (void)
{
  extern typeof (pow (vol_var_enum_e, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_enum_e, vol_var_unsigned_int);
}
static void
test_pow_2099 (void)
{
  extern typeof (pow (vol_var_enum_e, vol_var__Complex_unsigned_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_enum_e, vol_var__Complex_unsigned_int);
}
static void
test_pow_2100 (void)
{
  extern typeof (pow (vol_var_enum_e, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_enum_e, vol_var_long_int);
}
static void
test_pow_2101 (void)
{
  extern typeof (pow (vol_var_enum_e, vol_var__Complex_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_enum_e, vol_var__Complex_long_int);
}
static void
test_pow_2102 (void)
{
  extern typeof (pow (vol_var_enum_e, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_enum_e, vol_var_unsigned_long_int);
}
static void
test_pow_2103 (void)
{
  extern typeof (pow (vol_var_enum_e, vol_var__Complex_unsigned_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_enum_e, vol_var__Complex_unsigned_long_int);
}
static void
test_pow_2104 (void)
{
  extern typeof (pow (vol_var_enum_e, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_enum_e, vol_var_long_long_int);
}
static void
test_pow_2105 (void)
{
  extern typeof (pow (vol_var_enum_e, vol_var__Complex_long_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_enum_e, vol_var__Complex_long_long_int);
}
static void
test_pow_2106 (void)
{
  extern typeof (pow (vol_var_enum_e, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_enum_e, vol_var_unsigned_long_long_int);
}
static void
test_pow_2107 (void)
{
  extern typeof (pow (vol_var_enum_e, vol_var__Complex_unsigned_long_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_enum_e, vol_var__Complex_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_pow_2108 (void)
{
  extern typeof (pow (vol_var_enum_e, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_enum_e, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_2109 (void)
{
  extern typeof (pow (vol_var_enum_e, vol_var__Complex___int128)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_enum_e, vol_var__Complex___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_2110 (void)
{
  extern typeof (pow (vol_var_enum_e, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_enum_e, vol_var_unsigned___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_2111 (void)
{
  extern typeof (pow (vol_var_enum_e, vol_var__Complex_unsigned___int128)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_enum_e, vol_var__Complex_unsigned___int128);
}
#endif
static void
test_pow_2112 (void)
{
  extern typeof (pow (vol_var_enum_e, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_enum_e, vol_var_enum_e);
}
static void
test_pow_2113 (void)
{
  extern typeof (pow (vol_var_enum_e, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_enum_e, vol_var__Bool);
}
static void
test_pow_2114 (void)
{
  extern typeof (pow (vol_var_enum_e, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_enum_e, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_pow_2115 (void)
{
  extern typeof (pow (vol_var__Bool, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var__Bool, vol_var__Float16);
}
#endif
#if defined HUGE_VAL_F16
static void
test_pow_2116 (void)
{
  extern typeof (pow (vol_var__Bool, vol_var___CFLOAT16)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Bool, vol_var___CFLOAT16);
}
#endif
static void
test_pow_2117 (void)
{
  extern typeof (pow (vol_var__Bool, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var__Bool, vol_var_float);
}
static void
test_pow_2118 (void)
{
  extern typeof (pow (vol_var__Bool, vol_var__Complex_float)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Bool, vol_var__Complex_float);
}
#if defined HUGE_VAL_F32
static void
test_pow_2119 (void)
{
  extern typeof (pow (vol_var__Bool, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var__Bool, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32
static void
test_pow_2120 (void)
{
  extern typeof (pow (vol_var__Bool, vol_var___CFLOAT32)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Bool, vol_var___CFLOAT32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_pow_2121 (void)
{
  extern typeof (pow (vol_var__Bool, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var__Bool, vol_var__Float32x);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_pow_2122 (void)
{
  extern typeof (pow (vol_var__Bool, vol_var___CFLOAT32X)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Bool, vol_var___CFLOAT32X);
}
#endif
static void
test_pow_2123 (void)
{
  extern typeof (pow (vol_var__Bool, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var__Bool, vol_var_double);
}
static void
test_pow_2124 (void)
{
  extern typeof (pow (vol_var__Bool, vol_var__Complex_double)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Bool, vol_var__Complex_double);
}
static void
test_pow_2125 (void)
{
  extern typeof (pow (vol_var__Bool, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = pow (vol_var__Bool, vol_var_long_double);
}
static void
test_pow_2126 (void)
{
  extern typeof (pow (vol_var__Bool, vol_var__Complex_long_double)) var__Complex_long_double __attribute__ ((unused));
  vol_var__Complex_long_double = pow (vol_var__Bool, vol_var__Complex_long_double);
}
#if defined HUGE_VAL_F64
static void
test_pow_2127 (void)
{
  extern typeof (pow (vol_var__Bool, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = pow (vol_var__Bool, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64
static void
test_pow_2128 (void)
{
  extern typeof (pow (vol_var__Bool, vol_var___CFLOAT64)) var___CFLOAT64 __attribute__ ((unused));
  vol_var___CFLOAT64 = pow (vol_var__Bool, vol_var___CFLOAT64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_pow_2129 (void)
{
  extern typeof (pow (vol_var__Bool, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = pow (vol_var__Bool, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_pow_2130 (void)
{
  extern typeof (pow (vol_var__Bool, vol_var___CFLOAT64X)) var___CFLOAT64X __attribute__ ((unused));
  vol_var___CFLOAT64X = pow (vol_var__Bool, vol_var___CFLOAT64X);
}
#endif
#if defined HUGE_VAL_F128
static void
test_pow_2131 (void)
{
  extern typeof (pow (vol_var__Bool, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = pow (vol_var__Bool, vol_var__Float128);
}
#endif
#if defined HUGE_VAL_F128
static void
test_pow_2132 (void)
{
  extern typeof (pow (vol_var__Bool, vol_var___CFLOAT128)) var___CFLOAT128 __attribute__ ((unused));
  vol_var___CFLOAT128 = pow (vol_var__Bool, vol_var___CFLOAT128);
}
#endif
static void
test_pow_2133 (void)
{
  extern typeof (pow (vol_var__Bool, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var__Bool, vol_var_char);
}
static void
test_pow_2134 (void)
{
  extern typeof (pow (vol_var__Bool, vol_var__Complex_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Bool, vol_var__Complex_char);
}
static void
test_pow_2135 (void)
{
  extern typeof (pow (vol_var__Bool, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var__Bool, vol_var_signed_char);
}
static void
test_pow_2136 (void)
{
  extern typeof (pow (vol_var__Bool, vol_var__Complex_signed_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Bool, vol_var__Complex_signed_char);
}
static void
test_pow_2137 (void)
{
  extern typeof (pow (vol_var__Bool, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var__Bool, vol_var_unsigned_char);
}
static void
test_pow_2138 (void)
{
  extern typeof (pow (vol_var__Bool, vol_var__Complex_unsigned_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Bool, vol_var__Complex_unsigned_char);
}
static void
test_pow_2139 (void)
{
  extern typeof (pow (vol_var__Bool, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var__Bool, vol_var_short_int);
}
static void
test_pow_2140 (void)
{
  extern typeof (pow (vol_var__Bool, vol_var__Complex_short_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Bool, vol_var__Complex_short_int);
}
static void
test_pow_2141 (void)
{
  extern typeof (pow (vol_var__Bool, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var__Bool, vol_var_unsigned_short_int);
}
static void
test_pow_2142 (void)
{
  extern typeof (pow (vol_var__Bool, vol_var__Complex_unsigned_short_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Bool, vol_var__Complex_unsigned_short_int);
}
static void
test_pow_2143 (void)
{
  extern typeof (pow (vol_var__Bool, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var__Bool, vol_var_int);
}
static void
test_pow_2144 (void)
{
  extern typeof (pow (vol_var__Bool, vol_var__Complex_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Bool, vol_var__Complex_int);
}
static void
test_pow_2145 (void)
{
  extern typeof (pow (vol_var__Bool, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var__Bool, vol_var_unsigned_int);
}
static void
test_pow_2146 (void)
{
  extern typeof (pow (vol_var__Bool, vol_var__Complex_unsigned_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Bool, vol_var__Complex_unsigned_int);
}
static void
test_pow_2147 (void)
{
  extern typeof (pow (vol_var__Bool, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var__Bool, vol_var_long_int);
}
static void
test_pow_2148 (void)
{
  extern typeof (pow (vol_var__Bool, vol_var__Complex_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Bool, vol_var__Complex_long_int);
}
static void
test_pow_2149 (void)
{
  extern typeof (pow (vol_var__Bool, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var__Bool, vol_var_unsigned_long_int);
}
static void
test_pow_2150 (void)
{
  extern typeof (pow (vol_var__Bool, vol_var__Complex_unsigned_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Bool, vol_var__Complex_unsigned_long_int);
}
static void
test_pow_2151 (void)
{
  extern typeof (pow (vol_var__Bool, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var__Bool, vol_var_long_long_int);
}
static void
test_pow_2152 (void)
{
  extern typeof (pow (vol_var__Bool, vol_var__Complex_long_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Bool, vol_var__Complex_long_long_int);
}
static void
test_pow_2153 (void)
{
  extern typeof (pow (vol_var__Bool, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var__Bool, vol_var_unsigned_long_long_int);
}
static void
test_pow_2154 (void)
{
  extern typeof (pow (vol_var__Bool, vol_var__Complex_unsigned_long_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Bool, vol_var__Complex_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_pow_2155 (void)
{
  extern typeof (pow (vol_var__Bool, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var__Bool, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_2156 (void)
{
  extern typeof (pow (vol_var__Bool, vol_var__Complex___int128)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Bool, vol_var__Complex___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_2157 (void)
{
  extern typeof (pow (vol_var__Bool, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var__Bool, vol_var_unsigned___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_2158 (void)
{
  extern typeof (pow (vol_var__Bool, vol_var__Complex_unsigned___int128)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var__Bool, vol_var__Complex_unsigned___int128);
}
#endif
static void
test_pow_2159 (void)
{
  extern typeof (pow (vol_var__Bool, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var__Bool, vol_var_enum_e);
}
static void
test_pow_2160 (void)
{
  extern typeof (pow (vol_var__Bool, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var__Bool, vol_var__Bool);
}
static void
test_pow_2161 (void)
{
  extern typeof (pow (vol_var__Bool, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var__Bool, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_pow_2162 (void)
{
  extern typeof (pow (vol_var_bit_field, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_bit_field, vol_var__Float16);
}
#endif
#if defined HUGE_VAL_F16
static void
test_pow_2163 (void)
{
  extern typeof (pow (vol_var_bit_field, vol_var___CFLOAT16)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_bit_field, vol_var___CFLOAT16);
}
#endif
static void
test_pow_2164 (void)
{
  extern typeof (pow (vol_var_bit_field, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_bit_field, vol_var_float);
}
static void
test_pow_2165 (void)
{
  extern typeof (pow (vol_var_bit_field, vol_var__Complex_float)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_bit_field, vol_var__Complex_float);
}
#if defined HUGE_VAL_F32
static void
test_pow_2166 (void)
{
  extern typeof (pow (vol_var_bit_field, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_bit_field, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32
static void
test_pow_2167 (void)
{
  extern typeof (pow (vol_var_bit_field, vol_var___CFLOAT32)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_bit_field, vol_var___CFLOAT32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_pow_2168 (void)
{
  extern typeof (pow (vol_var_bit_field, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_bit_field, vol_var__Float32x);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_pow_2169 (void)
{
  extern typeof (pow (vol_var_bit_field, vol_var___CFLOAT32X)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_bit_field, vol_var___CFLOAT32X);
}
#endif
static void
test_pow_2170 (void)
{
  extern typeof (pow (vol_var_bit_field, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_bit_field, vol_var_double);
}
static void
test_pow_2171 (void)
{
  extern typeof (pow (vol_var_bit_field, vol_var__Complex_double)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_bit_field, vol_var__Complex_double);
}
static void
test_pow_2172 (void)
{
  extern typeof (pow (vol_var_bit_field, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = pow (vol_var_bit_field, vol_var_long_double);
}
static void
test_pow_2173 (void)
{
  extern typeof (pow (vol_var_bit_field, vol_var__Complex_long_double)) var__Complex_long_double __attribute__ ((unused));
  vol_var__Complex_long_double = pow (vol_var_bit_field, vol_var__Complex_long_double);
}
#if defined HUGE_VAL_F64
static void
test_pow_2174 (void)
{
  extern typeof (pow (vol_var_bit_field, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = pow (vol_var_bit_field, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64
static void
test_pow_2175 (void)
{
  extern typeof (pow (vol_var_bit_field, vol_var___CFLOAT64)) var___CFLOAT64 __attribute__ ((unused));
  vol_var___CFLOAT64 = pow (vol_var_bit_field, vol_var___CFLOAT64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_pow_2176 (void)
{
  extern typeof (pow (vol_var_bit_field, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = pow (vol_var_bit_field, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_pow_2177 (void)
{
  extern typeof (pow (vol_var_bit_field, vol_var___CFLOAT64X)) var___CFLOAT64X __attribute__ ((unused));
  vol_var___CFLOAT64X = pow (vol_var_bit_field, vol_var___CFLOAT64X);
}
#endif
#if defined HUGE_VAL_F128
static void
test_pow_2178 (void)
{
  extern typeof (pow (vol_var_bit_field, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = pow (vol_var_bit_field, vol_var__Float128);
}
#endif
#if defined HUGE_VAL_F128
static void
test_pow_2179 (void)
{
  extern typeof (pow (vol_var_bit_field, vol_var___CFLOAT128)) var___CFLOAT128 __attribute__ ((unused));
  vol_var___CFLOAT128 = pow (vol_var_bit_field, vol_var___CFLOAT128);
}
#endif
static void
test_pow_2180 (void)
{
  extern typeof (pow (vol_var_bit_field, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_bit_field, vol_var_char);
}
static void
test_pow_2181 (void)
{
  extern typeof (pow (vol_var_bit_field, vol_var__Complex_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_bit_field, vol_var__Complex_char);
}
static void
test_pow_2182 (void)
{
  extern typeof (pow (vol_var_bit_field, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_bit_field, vol_var_signed_char);
}
static void
test_pow_2183 (void)
{
  extern typeof (pow (vol_var_bit_field, vol_var__Complex_signed_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_bit_field, vol_var__Complex_signed_char);
}
static void
test_pow_2184 (void)
{
  extern typeof (pow (vol_var_bit_field, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_bit_field, vol_var_unsigned_char);
}
static void
test_pow_2185 (void)
{
  extern typeof (pow (vol_var_bit_field, vol_var__Complex_unsigned_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_bit_field, vol_var__Complex_unsigned_char);
}
static void
test_pow_2186 (void)
{
  extern typeof (pow (vol_var_bit_field, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_bit_field, vol_var_short_int);
}
static void
test_pow_2187 (void)
{
  extern typeof (pow (vol_var_bit_field, vol_var__Complex_short_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_bit_field, vol_var__Complex_short_int);
}
static void
test_pow_2188 (void)
{
  extern typeof (pow (vol_var_bit_field, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_bit_field, vol_var_unsigned_short_int);
}
static void
test_pow_2189 (void)
{
  extern typeof (pow (vol_var_bit_field, vol_var__Complex_unsigned_short_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_bit_field, vol_var__Complex_unsigned_short_int);
}
static void
test_pow_2190 (void)
{
  extern typeof (pow (vol_var_bit_field, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_bit_field, vol_var_int);
}
static void
test_pow_2191 (void)
{
  extern typeof (pow (vol_var_bit_field, vol_var__Complex_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_bit_field, vol_var__Complex_int);
}
static void
test_pow_2192 (void)
{
  extern typeof (pow (vol_var_bit_field, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_bit_field, vol_var_unsigned_int);
}
static void
test_pow_2193 (void)
{
  extern typeof (pow (vol_var_bit_field, vol_var__Complex_unsigned_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_bit_field, vol_var__Complex_unsigned_int);
}
static void
test_pow_2194 (void)
{
  extern typeof (pow (vol_var_bit_field, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_bit_field, vol_var_long_int);
}
static void
test_pow_2195 (void)
{
  extern typeof (pow (vol_var_bit_field, vol_var__Complex_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_bit_field, vol_var__Complex_long_int);
}
static void
test_pow_2196 (void)
{
  extern typeof (pow (vol_var_bit_field, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_bit_field, vol_var_unsigned_long_int);
}
static void
test_pow_2197 (void)
{
  extern typeof (pow (vol_var_bit_field, vol_var__Complex_unsigned_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_bit_field, vol_var__Complex_unsigned_long_int);
}
static void
test_pow_2198 (void)
{
  extern typeof (pow (vol_var_bit_field, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_bit_field, vol_var_long_long_int);
}
static void
test_pow_2199 (void)
{
  extern typeof (pow (vol_var_bit_field, vol_var__Complex_long_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_bit_field, vol_var__Complex_long_long_int);
}
static void
test_pow_2200 (void)
{
  extern typeof (pow (vol_var_bit_field, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_bit_field, vol_var_unsigned_long_long_int);
}
static void
test_pow_2201 (void)
{
  extern typeof (pow (vol_var_bit_field, vol_var__Complex_unsigned_long_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_bit_field, vol_var__Complex_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_pow_2202 (void)
{
  extern typeof (pow (vol_var_bit_field, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_bit_field, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_2203 (void)
{
  extern typeof (pow (vol_var_bit_field, vol_var__Complex___int128)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_bit_field, vol_var__Complex___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_2204 (void)
{
  extern typeof (pow (vol_var_bit_field, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_bit_field, vol_var_unsigned___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_pow_2205 (void)
{
  extern typeof (pow (vol_var_bit_field, vol_var__Complex_unsigned___int128)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = pow (vol_var_bit_field, vol_var__Complex_unsigned___int128);
}
#endif
static void
test_pow_2206 (void)
{
  extern typeof (pow (vol_var_bit_field, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_bit_field, vol_var_enum_e);
}
static void
test_pow_2207 (void)
{
  extern typeof (pow (vol_var_bit_field, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_bit_field, vol_var__Bool);
}
static void
test_pow_2208 (void)
{
  extern typeof (pow (vol_var_bit_field, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = pow (vol_var_bit_field, vol_var_bit_field);
}
static const struct test tests[] =
  {
#if defined HUGE_VAL_F16
    { test_pow_0, "pow", "pow (_Float16, _Float16)", FLT16_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_pow_1, "cpow", "pow (_Float16, __CFLOAT16)", FLT16_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_pow_2, "pow", "pow (_Float16, float)", FLT_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_pow_3, "cpow", "pow (_Float16, _Complex float)", FLT_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F32
    { test_pow_4, "pow", "pow (_Float16, _Float32)", FLT32_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F32
    { test_pow_5, "cpow", "pow (_Float16, __CFLOAT32)", FLT32_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
    { test_pow_6, "pow", "pow (_Float16, _Float32x)", FLT32X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
    { test_pow_7, "cpow", "pow (_Float16, __CFLOAT32X)", FLT32X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_pow_8, "pow", "pow (_Float16, double)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_pow_9, "cpow", "pow (_Float16, _Complex double)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_pow_10, "pow", "pow (_Float16, long double)", LDBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_pow_11, "cpow", "pow (_Float16, _Complex long double)", LDBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F64
    { test_pow_12, "pow", "pow (_Float16, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F64
    { test_pow_13, "cpow", "pow (_Float16, __CFLOAT64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
    { test_pow_14, "pow", "pow (_Float16, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
    { test_pow_15, "cpow", "pow (_Float16, __CFLOAT64X)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F16
    { test_pow_16, "pow", "pow (_Float16, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F16
    { test_pow_17, "cpow", "pow (_Float16, __CFLOAT128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_pow_18, "pow", "pow (_Float16, char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_pow_19, "cpow", "pow (_Float16, _Complex char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_pow_20, "pow", "pow (_Float16, signed char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_pow_21, "cpow", "pow (_Float16, _Complex signed char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_pow_22, "pow", "pow (_Float16, unsigned char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_pow_23, "cpow", "pow (_Float16, _Complex unsigned char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_pow_24, "pow", "pow (_Float16, short int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_pow_25, "cpow", "pow (_Float16, _Complex short int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_pow_26, "pow", "pow (_Float16, unsigned short int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_pow_27, "cpow", "pow (_Float16, _Complex unsigned short int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_pow_28, "pow", "pow (_Float16, int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_pow_29, "cpow", "pow (_Float16, _Complex int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_pow_30, "pow", "pow (_Float16, unsigned int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_pow_31, "cpow", "pow (_Float16, _Complex unsigned int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_pow_32, "pow", "pow (_Float16, long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_pow_33, "cpow", "pow (_Float16, _Complex long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_pow_34, "pow", "pow (_Float16, unsigned long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_pow_35, "cpow", "pow (_Float16, _Complex unsigned long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_pow_36, "pow", "pow (_Float16, long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_pow_37, "cpow", "pow (_Float16, _Complex long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_pow_38, "pow", "pow (_Float16, unsigned long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_pow_39, "cpow", "pow (_Float16, _Complex unsigned long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_pow_40, "pow", "pow (_Float16, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_pow_41, "cpow", "pow (_Float16, _Complex __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_pow_42, "pow", "pow (_Float16, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_pow_43, "cpow", "pow (_Float16, _Complex unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_pow_44, "pow", "pow (_Float16, enum e)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_pow_45, "pow", "pow (_Float16, _Bool)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_pow_46, "pow", "pow (_Float16, bit_field)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_pow_47, "cpow", "pow (__CFLOAT16, _Float16)", FLT16_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_pow_48, "cpow", "pow (__CFLOAT16, __CFLOAT16)", FLT16_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_pow_49, "cpow", "pow (__CFLOAT16, float)", FLT_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_pow_50, "cpow", "pow (__CFLOAT16, _Complex float)", FLT_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F32
    { test_pow_51, "cpow", "pow (__CFLOAT16, _Float32)", FLT32_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F32
    { test_pow_52, "cpow", "pow (__CFLOAT16, __CFLOAT32)", FLT32_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
    { test_pow_53, "cpow", "pow (__CFLOAT16, _Float32x)", FLT32X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
    { test_pow_54, "cpow", "pow (__CFLOAT16, __CFLOAT32X)", FLT32X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_pow_55, "cpow", "pow (__CFLOAT16, double)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_pow_56, "cpow", "pow (__CFLOAT16, _Complex double)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_pow_57, "cpow", "pow (__CFLOAT16, long double)", LDBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_pow_58, "cpow", "pow (__CFLOAT16, _Complex long double)", LDBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F64
    { test_pow_59, "cpow", "pow (__CFLOAT16, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F64
    { test_pow_60, "cpow", "pow (__CFLOAT16, __CFLOAT64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
    { test_pow_61, "cpow", "pow (__CFLOAT16, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
    { test_pow_62, "cpow", "pow (__CFLOAT16, __CFLOAT64X)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F16
    { test_pow_63, "cpow", "pow (__CFLOAT16, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F16
    { test_pow_64, "cpow", "pow (__CFLOAT16, __CFLOAT128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_pow_65, "cpow", "pow (__CFLOAT16, char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_pow_66, "cpow", "pow (__CFLOAT16, _Complex char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_pow_67, "cpow", "pow (__CFLOAT16, signed char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_pow_68, "cpow", "pow (__CFLOAT16, _Complex signed char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_pow_69, "cpow", "pow (__CFLOAT16, unsigned char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_pow_70, "cpow", "pow (__CFLOAT16, _Complex unsigned char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_pow_71, "cpow", "pow (__CFLOAT16, short int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_pow_72, "cpow", "pow (__CFLOAT16, _Complex short int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_pow_73, "cpow", "pow (__CFLOAT16, unsigned short int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_pow_74, "cpow", "pow (__CFLOAT16, _Complex unsigned short int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_pow_75, "cpow", "pow (__CFLOAT16, int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_pow_76, "cpow", "pow (__CFLOAT16, _Complex int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_pow_77, "cpow", "pow (__CFLOAT16, unsigned int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_pow_78, "cpow", "pow (__CFLOAT16, _Complex unsigned int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_pow_79, "cpow", "pow (__CFLOAT16, long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_pow_80, "cpow", "pow (__CFLOAT16, _Complex long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_pow_81, "cpow", "pow (__CFLOAT16, unsigned long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_pow_82, "cpow", "pow (__CFLOAT16, _Complex unsigned long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_pow_83, "cpow", "pow (__CFLOAT16, long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_pow_84, "cpow", "pow (__CFLOAT16, _Complex long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_pow_85, "cpow", "pow (__CFLOAT16, unsigned long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_pow_86, "cpow", "pow (__CFLOAT16, _Complex unsigned long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_pow_87, "cpow", "pow (__CFLOAT16, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_pow_88, "cpow", "pow (__CFLOAT16, _Complex __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_pow_89, "cpow", "pow (__CFLOAT16, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_pow_90, "cpow", "pow (__CFLOAT16, _Complex unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_pow_91, "cpow", "pow (__CFLOAT16, enum e)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_pow_92, "cpow", "pow (__CFLOAT16, _Bool)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_pow_93, "cpow", "pow (__CFLOAT16, bit_field)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_pow_94, "pow", "pow (float, _Float16)", FLT_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_pow_95, "cpow", "pow (float, __CFLOAT16)", FLT_MANT_DIG, 0 },
#endif
    { test_pow_96, "pow", "pow (float, float)", FLT_MANT_DIG, 0 },
    { test_pow_97, "cpow", "pow (float, _Complex float)", FLT_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_pow_98, "pow", "pow (float, _Float32)", FLT32_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_pow_99, "cpow", "pow (float, __CFLOAT32)", FLT32_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_pow_100, "pow", "pow (float, _Float32x)", FLT32X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_pow_101, "cpow", "pow (float, __CFLOAT32X)", FLT32X_MANT_DIG, 0 },
#endif
    { test_pow_102, "pow", "pow (float, double)", DBL_MANT_DIG, 0 },
    { test_pow_103, "cpow", "pow (float, _Complex double)", DBL_MANT_DIG, 0 },
    { test_pow_104, "pow", "pow (float, long double)", LDBL_MANT_DIG, 0 },
    { test_pow_105, "cpow", "pow (float, _Complex long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_pow_106, "pow", "pow (float, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_pow_107, "cpow", "pow (float, __CFLOAT64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_pow_108, "pow", "pow (float, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_pow_109, "cpow", "pow (float, __CFLOAT64X)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_pow_110, "pow", "pow (float, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_pow_111, "cpow", "pow (float, __CFLOAT128)", FLT128_MANT_DIG, 0 },
#endif
    { test_pow_112, "pow", "pow (float, char)", DBL_MANT_DIG, 0 },
    { test_pow_113, "cpow", "pow (float, _Complex char)", DBL_MANT_DIG, 0 },
    { test_pow_114, "pow", "pow (float, signed char)", DBL_MANT_DIG, 0 },
    { test_pow_115, "cpow", "pow (float, _Complex signed char)", DBL_MANT_DIG, 0 },
    { test_pow_116, "pow", "pow (float, unsigned char)", DBL_MANT_DIG, 0 },
    { test_pow_117, "cpow", "pow (float, _Complex unsigned char)", DBL_MANT_DIG, 0 },
    { test_pow_118, "pow", "pow (float, short int)", DBL_MANT_DIG, 0 },
    { test_pow_119, "cpow", "pow (float, _Complex short int)", DBL_MANT_DIG, 0 },
    { test_pow_120, "pow", "pow (float, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_pow_121, "cpow", "pow (float, _Complex unsigned short int)", DBL_MANT_DIG, 0 },
    { test_pow_122, "pow", "pow (float, int)", DBL_MANT_DIG, 0 },
    { test_pow_123, "cpow", "pow (float, _Complex int)", DBL_MANT_DIG, 0 },
    { test_pow_124, "pow", "pow (float, unsigned int)", DBL_MANT_DIG, 0 },
    { test_pow_125, "cpow", "pow (float, _Complex unsigned int)", DBL_MANT_DIG, 0 },
    { test_pow_126, "pow", "pow (float, long int)", DBL_MANT_DIG, 0 },
    { test_pow_127, "cpow", "pow (float, _Complex long int)", DBL_MANT_DIG, 0 },
    { test_pow_128, "pow", "pow (float, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_pow_129, "cpow", "pow (float, _Complex unsigned long int)", DBL_MANT_DIG, 0 },
    { test_pow_130, "pow", "pow (float, long long int)", DBL_MANT_DIG, 0 },
    { test_pow_131, "cpow", "pow (float, _Complex long long int)", DBL_MANT_DIG, 0 },
    { test_pow_132, "pow", "pow (float, unsigned long long int)", DBL_MANT_DIG, 0 },
    { test_pow_133, "cpow", "pow (float, _Complex unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_pow_134, "pow", "pow (float, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_135, "cpow", "pow (float, _Complex __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_136, "pow", "pow (float, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_137, "cpow", "pow (float, _Complex unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_pow_138, "pow", "pow (float, enum e)", DBL_MANT_DIG, 0 },
    { test_pow_139, "pow", "pow (float, _Bool)", DBL_MANT_DIG, 0 },
    { test_pow_140, "pow", "pow (float, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_pow_141, "cpow", "pow (_Complex float, _Float16)", FLT_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_pow_142, "cpow", "pow (_Complex float, __CFLOAT16)", FLT_MANT_DIG, 0 },
#endif
    { test_pow_143, "cpow", "pow (_Complex float, float)", FLT_MANT_DIG, 0 },
    { test_pow_144, "cpow", "pow (_Complex float, _Complex float)", FLT_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_pow_145, "cpow", "pow (_Complex float, _Float32)", FLT32_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_pow_146, "cpow", "pow (_Complex float, __CFLOAT32)", FLT32_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_pow_147, "cpow", "pow (_Complex float, _Float32x)", FLT32X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_pow_148, "cpow", "pow (_Complex float, __CFLOAT32X)", FLT32X_MANT_DIG, 0 },
#endif
    { test_pow_149, "cpow", "pow (_Complex float, double)", DBL_MANT_DIG, 0 },
    { test_pow_150, "cpow", "pow (_Complex float, _Complex double)", DBL_MANT_DIG, 0 },
    { test_pow_151, "cpow", "pow (_Complex float, long double)", LDBL_MANT_DIG, 0 },
    { test_pow_152, "cpow", "pow (_Complex float, _Complex long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_pow_153, "cpow", "pow (_Complex float, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_pow_154, "cpow", "pow (_Complex float, __CFLOAT64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_pow_155, "cpow", "pow (_Complex float, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_pow_156, "cpow", "pow (_Complex float, __CFLOAT64X)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_pow_157, "cpow", "pow (_Complex float, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_pow_158, "cpow", "pow (_Complex float, __CFLOAT128)", FLT128_MANT_DIG, 0 },
#endif
    { test_pow_159, "cpow", "pow (_Complex float, char)", DBL_MANT_DIG, 0 },
    { test_pow_160, "cpow", "pow (_Complex float, _Complex char)", DBL_MANT_DIG, 0 },
    { test_pow_161, "cpow", "pow (_Complex float, signed char)", DBL_MANT_DIG, 0 },
    { test_pow_162, "cpow", "pow (_Complex float, _Complex signed char)", DBL_MANT_DIG, 0 },
    { test_pow_163, "cpow", "pow (_Complex float, unsigned char)", DBL_MANT_DIG, 0 },
    { test_pow_164, "cpow", "pow (_Complex float, _Complex unsigned char)", DBL_MANT_DIG, 0 },
    { test_pow_165, "cpow", "pow (_Complex float, short int)", DBL_MANT_DIG, 0 },
    { test_pow_166, "cpow", "pow (_Complex float, _Complex short int)", DBL_MANT_DIG, 0 },
    { test_pow_167, "cpow", "pow (_Complex float, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_pow_168, "cpow", "pow (_Complex float, _Complex unsigned short int)", DBL_MANT_DIG, 0 },
    { test_pow_169, "cpow", "pow (_Complex float, int)", DBL_MANT_DIG, 0 },
    { test_pow_170, "cpow", "pow (_Complex float, _Complex int)", DBL_MANT_DIG, 0 },
    { test_pow_171, "cpow", "pow (_Complex float, unsigned int)", DBL_MANT_DIG, 0 },
    { test_pow_172, "cpow", "pow (_Complex float, _Complex unsigned int)", DBL_MANT_DIG, 0 },
    { test_pow_173, "cpow", "pow (_Complex float, long int)", DBL_MANT_DIG, 0 },
    { test_pow_174, "cpow", "pow (_Complex float, _Complex long int)", DBL_MANT_DIG, 0 },
    { test_pow_175, "cpow", "pow (_Complex float, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_pow_176, "cpow", "pow (_Complex float, _Complex unsigned long int)", DBL_MANT_DIG, 0 },
    { test_pow_177, "cpow", "pow (_Complex float, long long int)", DBL_MANT_DIG, 0 },
    { test_pow_178, "cpow", "pow (_Complex float, _Complex long long int)", DBL_MANT_DIG, 0 },
    { test_pow_179, "cpow", "pow (_Complex float, unsigned long long int)", DBL_MANT_DIG, 0 },
    { test_pow_180, "cpow", "pow (_Complex float, _Complex unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_pow_181, "cpow", "pow (_Complex float, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_182, "cpow", "pow (_Complex float, _Complex __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_183, "cpow", "pow (_Complex float, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_184, "cpow", "pow (_Complex float, _Complex unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_pow_185, "cpow", "pow (_Complex float, enum e)", DBL_MANT_DIG, 0 },
    { test_pow_186, "cpow", "pow (_Complex float, _Bool)", DBL_MANT_DIG, 0 },
    { test_pow_187, "cpow", "pow (_Complex float, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F32
    { test_pow_188, "pow", "pow (_Float32, _Float16)", FLT32_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F32
    { test_pow_189, "cpow", "pow (_Float32, __CFLOAT16)", FLT32_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_pow_190, "pow", "pow (_Float32, float)", FLT32_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_pow_191, "cpow", "pow (_Float32, _Complex float)", FLT32_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_pow_192, "pow", "pow (_Float32, _Float32)", FLT32_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_pow_193, "cpow", "pow (_Float32, __CFLOAT32)", FLT32_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
    { test_pow_194, "pow", "pow (_Float32, _Float32x)", FLT32X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
    { test_pow_195, "cpow", "pow (_Float32, __CFLOAT32X)", FLT32X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_pow_196, "pow", "pow (_Float32, double)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_pow_197, "cpow", "pow (_Float32, _Complex double)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_pow_198, "pow", "pow (_Float32, long double)", LDBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_pow_199, "cpow", "pow (_Float32, _Complex long double)", LDBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F64
    { test_pow_200, "pow", "pow (_Float32, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F64
    { test_pow_201, "cpow", "pow (_Float32, __CFLOAT64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
    { test_pow_202, "pow", "pow (_Float32, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
    { test_pow_203, "cpow", "pow (_Float32, __CFLOAT64X)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F32
    { test_pow_204, "pow", "pow (_Float32, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F32
    { test_pow_205, "cpow", "pow (_Float32, __CFLOAT128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_pow_206, "pow", "pow (_Float32, char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_pow_207, "cpow", "pow (_Float32, _Complex char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_pow_208, "pow", "pow (_Float32, signed char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_pow_209, "cpow", "pow (_Float32, _Complex signed char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_pow_210, "pow", "pow (_Float32, unsigned char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_pow_211, "cpow", "pow (_Float32, _Complex unsigned char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_pow_212, "pow", "pow (_Float32, short int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_pow_213, "cpow", "pow (_Float32, _Complex short int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_pow_214, "pow", "pow (_Float32, unsigned short int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_pow_215, "cpow", "pow (_Float32, _Complex unsigned short int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_pow_216, "pow", "pow (_Float32, int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_pow_217, "cpow", "pow (_Float32, _Complex int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_pow_218, "pow", "pow (_Float32, unsigned int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_pow_219, "cpow", "pow (_Float32, _Complex unsigned int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_pow_220, "pow", "pow (_Float32, long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_pow_221, "cpow", "pow (_Float32, _Complex long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_pow_222, "pow", "pow (_Float32, unsigned long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_pow_223, "cpow", "pow (_Float32, _Complex unsigned long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_pow_224, "pow", "pow (_Float32, long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_pow_225, "cpow", "pow (_Float32, _Complex long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_pow_226, "pow", "pow (_Float32, unsigned long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_pow_227, "cpow", "pow (_Float32, _Complex unsigned long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_pow_228, "pow", "pow (_Float32, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_pow_229, "cpow", "pow (_Float32, _Complex __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_pow_230, "pow", "pow (_Float32, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_pow_231, "cpow", "pow (_Float32, _Complex unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_pow_232, "pow", "pow (_Float32, enum e)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_pow_233, "pow", "pow (_Float32, _Bool)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_pow_234, "pow", "pow (_Float32, bit_field)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F32
    { test_pow_235, "cpow", "pow (__CFLOAT32, _Float16)", FLT32_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F32
    { test_pow_236, "cpow", "pow (__CFLOAT32, __CFLOAT16)", FLT32_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_pow_237, "cpow", "pow (__CFLOAT32, float)", FLT32_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_pow_238, "cpow", "pow (__CFLOAT32, _Complex float)", FLT32_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_pow_239, "cpow", "pow (__CFLOAT32, _Float32)", FLT32_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_pow_240, "cpow", "pow (__CFLOAT32, __CFLOAT32)", FLT32_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
    { test_pow_241, "cpow", "pow (__CFLOAT32, _Float32x)", FLT32X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
    { test_pow_242, "cpow", "pow (__CFLOAT32, __CFLOAT32X)", FLT32X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_pow_243, "cpow", "pow (__CFLOAT32, double)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_pow_244, "cpow", "pow (__CFLOAT32, _Complex double)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_pow_245, "cpow", "pow (__CFLOAT32, long double)", LDBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_pow_246, "cpow", "pow (__CFLOAT32, _Complex long double)", LDBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F64
    { test_pow_247, "cpow", "pow (__CFLOAT32, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F64
    { test_pow_248, "cpow", "pow (__CFLOAT32, __CFLOAT64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
    { test_pow_249, "cpow", "pow (__CFLOAT32, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
    { test_pow_250, "cpow", "pow (__CFLOAT32, __CFLOAT64X)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F32
    { test_pow_251, "cpow", "pow (__CFLOAT32, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F32
    { test_pow_252, "cpow", "pow (__CFLOAT32, __CFLOAT128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_pow_253, "cpow", "pow (__CFLOAT32, char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_pow_254, "cpow", "pow (__CFLOAT32, _Complex char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_pow_255, "cpow", "pow (__CFLOAT32, signed char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_pow_256, "cpow", "pow (__CFLOAT32, _Complex signed char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_pow_257, "cpow", "pow (__CFLOAT32, unsigned char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_pow_258, "cpow", "pow (__CFLOAT32, _Complex unsigned char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_pow_259, "cpow", "pow (__CFLOAT32, short int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_pow_260, "cpow", "pow (__CFLOAT32, _Complex short int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_pow_261, "cpow", "pow (__CFLOAT32, unsigned short int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_pow_262, "cpow", "pow (__CFLOAT32, _Complex unsigned short int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_pow_263, "cpow", "pow (__CFLOAT32, int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_pow_264, "cpow", "pow (__CFLOAT32, _Complex int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_pow_265, "cpow", "pow (__CFLOAT32, unsigned int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_pow_266, "cpow", "pow (__CFLOAT32, _Complex unsigned int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_pow_267, "cpow", "pow (__CFLOAT32, long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_pow_268, "cpow", "pow (__CFLOAT32, _Complex long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_pow_269, "cpow", "pow (__CFLOAT32, unsigned long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_pow_270, "cpow", "pow (__CFLOAT32, _Complex unsigned long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_pow_271, "cpow", "pow (__CFLOAT32, long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_pow_272, "cpow", "pow (__CFLOAT32, _Complex long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_pow_273, "cpow", "pow (__CFLOAT32, unsigned long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_pow_274, "cpow", "pow (__CFLOAT32, _Complex unsigned long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_pow_275, "cpow", "pow (__CFLOAT32, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_pow_276, "cpow", "pow (__CFLOAT32, _Complex __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_pow_277, "cpow", "pow (__CFLOAT32, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_pow_278, "cpow", "pow (__CFLOAT32, _Complex unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_pow_279, "cpow", "pow (__CFLOAT32, enum e)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_pow_280, "cpow", "pow (__CFLOAT32, _Bool)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_pow_281, "cpow", "pow (__CFLOAT32, bit_field)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
    { test_pow_282, "pow", "pow (_Float32x, _Float16)", FLT32X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
    { test_pow_283, "cpow", "pow (_Float32x, __CFLOAT16)", FLT32X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_pow_284, "pow", "pow (_Float32x, float)", FLT32X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_pow_285, "cpow", "pow (_Float32x, _Complex float)", FLT32X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
    { test_pow_286, "pow", "pow (_Float32x, _Float32)", FLT32X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
    { test_pow_287, "cpow", "pow (_Float32x, __CFLOAT32)", FLT32X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_pow_288, "pow", "pow (_Float32x, _Float32x)", FLT32X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_pow_289, "cpow", "pow (_Float32x, __CFLOAT32X)", FLT32X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_pow_290, "pow", "pow (_Float32x, double)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_pow_291, "cpow", "pow (_Float32x, _Complex double)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_pow_292, "pow", "pow (_Float32x, long double)", LDBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_pow_293, "cpow", "pow (_Float32x, _Complex long double)", LDBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X && defined HUGE_VAL_F64
    { test_pow_294, "pow", "pow (_Float32x, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X && defined HUGE_VAL_F64
    { test_pow_295, "cpow", "pow (_Float32x, __CFLOAT64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
    { test_pow_296, "pow", "pow (_Float32x, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
    { test_pow_297, "cpow", "pow (_Float32x, __CFLOAT64X)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
    { test_pow_298, "pow", "pow (_Float32x, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
    { test_pow_299, "cpow", "pow (_Float32x, __CFLOAT128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_pow_300, "pow", "pow (_Float32x, char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_pow_301, "cpow", "pow (_Float32x, _Complex char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_pow_302, "pow", "pow (_Float32x, signed char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_pow_303, "cpow", "pow (_Float32x, _Complex signed char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_pow_304, "pow", "pow (_Float32x, unsigned char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_pow_305, "cpow", "pow (_Float32x, _Complex unsigned char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_pow_306, "pow", "pow (_Float32x, short int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_pow_307, "cpow", "pow (_Float32x, _Complex short int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_pow_308, "pow", "pow (_Float32x, unsigned short int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_pow_309, "cpow", "pow (_Float32x, _Complex unsigned short int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_pow_310, "pow", "pow (_Float32x, int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_pow_311, "cpow", "pow (_Float32x, _Complex int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_pow_312, "pow", "pow (_Float32x, unsigned int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_pow_313, "cpow", "pow (_Float32x, _Complex unsigned int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_pow_314, "pow", "pow (_Float32x, long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_pow_315, "cpow", "pow (_Float32x, _Complex long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_pow_316, "pow", "pow (_Float32x, unsigned long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_pow_317, "cpow", "pow (_Float32x, _Complex unsigned long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_pow_318, "pow", "pow (_Float32x, long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_pow_319, "cpow", "pow (_Float32x, _Complex long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_pow_320, "pow", "pow (_Float32x, unsigned long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_pow_321, "cpow", "pow (_Float32x, _Complex unsigned long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_pow_322, "pow", "pow (_Float32x, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_pow_323, "cpow", "pow (_Float32x, _Complex __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_pow_324, "pow", "pow (_Float32x, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_pow_325, "cpow", "pow (_Float32x, _Complex unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_pow_326, "pow", "pow (_Float32x, enum e)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_pow_327, "pow", "pow (_Float32x, _Bool)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_pow_328, "pow", "pow (_Float32x, bit_field)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
    { test_pow_329, "cpow", "pow (__CFLOAT32X, _Float16)", FLT32X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
    { test_pow_330, "cpow", "pow (__CFLOAT32X, __CFLOAT16)", FLT32X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_pow_331, "cpow", "pow (__CFLOAT32X, float)", FLT32X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_pow_332, "cpow", "pow (__CFLOAT32X, _Complex float)", FLT32X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
    { test_pow_333, "cpow", "pow (__CFLOAT32X, _Float32)", FLT32X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
    { test_pow_334, "cpow", "pow (__CFLOAT32X, __CFLOAT32)", FLT32X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_pow_335, "cpow", "pow (__CFLOAT32X, _Float32x)", FLT32X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_pow_336, "cpow", "pow (__CFLOAT32X, __CFLOAT32X)", FLT32X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_pow_337, "cpow", "pow (__CFLOAT32X, double)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_pow_338, "cpow", "pow (__CFLOAT32X, _Complex double)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_pow_339, "cpow", "pow (__CFLOAT32X, long double)", LDBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_pow_340, "cpow", "pow (__CFLOAT32X, _Complex long double)", LDBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X && defined HUGE_VAL_F64
    { test_pow_341, "cpow", "pow (__CFLOAT32X, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X && defined HUGE_VAL_F64
    { test_pow_342, "cpow", "pow (__CFLOAT32X, __CFLOAT64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
    { test_pow_343, "cpow", "pow (__CFLOAT32X, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
    { test_pow_344, "cpow", "pow (__CFLOAT32X, __CFLOAT64X)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
    { test_pow_345, "cpow", "pow (__CFLOAT32X, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
    { test_pow_346, "cpow", "pow (__CFLOAT32X, __CFLOAT128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_pow_347, "cpow", "pow (__CFLOAT32X, char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_pow_348, "cpow", "pow (__CFLOAT32X, _Complex char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_pow_349, "cpow", "pow (__CFLOAT32X, signed char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_pow_350, "cpow", "pow (__CFLOAT32X, _Complex signed char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_pow_351, "cpow", "pow (__CFLOAT32X, unsigned char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_pow_352, "cpow", "pow (__CFLOAT32X, _Complex unsigned char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_pow_353, "cpow", "pow (__CFLOAT32X, short int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_pow_354, "cpow", "pow (__CFLOAT32X, _Complex short int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_pow_355, "cpow", "pow (__CFLOAT32X, unsigned short int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_pow_356, "cpow", "pow (__CFLOAT32X, _Complex unsigned short int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_pow_357, "cpow", "pow (__CFLOAT32X, int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_pow_358, "cpow", "pow (__CFLOAT32X, _Complex int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_pow_359, "cpow", "pow (__CFLOAT32X, unsigned int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_pow_360, "cpow", "pow (__CFLOAT32X, _Complex unsigned int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_pow_361, "cpow", "pow (__CFLOAT32X, long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_pow_362, "cpow", "pow (__CFLOAT32X, _Complex long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_pow_363, "cpow", "pow (__CFLOAT32X, unsigned long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_pow_364, "cpow", "pow (__CFLOAT32X, _Complex unsigned long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_pow_365, "cpow", "pow (__CFLOAT32X, long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_pow_366, "cpow", "pow (__CFLOAT32X, _Complex long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_pow_367, "cpow", "pow (__CFLOAT32X, unsigned long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_pow_368, "cpow", "pow (__CFLOAT32X, _Complex unsigned long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_pow_369, "cpow", "pow (__CFLOAT32X, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_pow_370, "cpow", "pow (__CFLOAT32X, _Complex __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_pow_371, "cpow", "pow (__CFLOAT32X, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_pow_372, "cpow", "pow (__CFLOAT32X, _Complex unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_pow_373, "cpow", "pow (__CFLOAT32X, enum e)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_pow_374, "cpow", "pow (__CFLOAT32X, _Bool)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_pow_375, "cpow", "pow (__CFLOAT32X, bit_field)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_pow_376, "pow", "pow (double, _Float16)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_pow_377, "cpow", "pow (double, __CFLOAT16)", DBL_MANT_DIG, 0 },
#endif
    { test_pow_378, "pow", "pow (double, float)", DBL_MANT_DIG, 0 },
    { test_pow_379, "cpow", "pow (double, _Complex float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_pow_380, "pow", "pow (double, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_pow_381, "cpow", "pow (double, __CFLOAT32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_pow_382, "pow", "pow (double, _Float32x)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_pow_383, "cpow", "pow (double, __CFLOAT32X)", DBL_MANT_DIG, 0 },
#endif
    { test_pow_384, "pow", "pow (double, double)", DBL_MANT_DIG, 0 },
    { test_pow_385, "cpow", "pow (double, _Complex double)", DBL_MANT_DIG, 0 },
    { test_pow_386, "pow", "pow (double, long double)", LDBL_MANT_DIG, 0 },
    { test_pow_387, "cpow", "pow (double, _Complex long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_pow_388, "pow", "pow (double, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_pow_389, "cpow", "pow (double, __CFLOAT64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_pow_390, "pow", "pow (double, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_pow_391, "cpow", "pow (double, __CFLOAT64X)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_pow_392, "pow", "pow (double, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_pow_393, "cpow", "pow (double, __CFLOAT128)", FLT128_MANT_DIG, 0 },
#endif
    { test_pow_394, "pow", "pow (double, char)", DBL_MANT_DIG, 0 },
    { test_pow_395, "cpow", "pow (double, _Complex char)", DBL_MANT_DIG, 0 },
    { test_pow_396, "pow", "pow (double, signed char)", DBL_MANT_DIG, 0 },
    { test_pow_397, "cpow", "pow (double, _Complex signed char)", DBL_MANT_DIG, 0 },
    { test_pow_398, "pow", "pow (double, unsigned char)", DBL_MANT_DIG, 0 },
    { test_pow_399, "cpow", "pow (double, _Complex unsigned char)", DBL_MANT_DIG, 0 },
    { test_pow_400, "pow", "pow (double, short int)", DBL_MANT_DIG, 0 },
    { test_pow_401, "cpow", "pow (double, _Complex short int)", DBL_MANT_DIG, 0 },
    { test_pow_402, "pow", "pow (double, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_pow_403, "cpow", "pow (double, _Complex unsigned short int)", DBL_MANT_DIG, 0 },
    { test_pow_404, "pow", "pow (double, int)", DBL_MANT_DIG, 0 },
    { test_pow_405, "cpow", "pow (double, _Complex int)", DBL_MANT_DIG, 0 },
    { test_pow_406, "pow", "pow (double, unsigned int)", DBL_MANT_DIG, 0 },
    { test_pow_407, "cpow", "pow (double, _Complex unsigned int)", DBL_MANT_DIG, 0 },
    { test_pow_408, "pow", "pow (double, long int)", DBL_MANT_DIG, 0 },
    { test_pow_409, "cpow", "pow (double, _Complex long int)", DBL_MANT_DIG, 0 },
    { test_pow_410, "pow", "pow (double, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_pow_411, "cpow", "pow (double, _Complex unsigned long int)", DBL_MANT_DIG, 0 },
    { test_pow_412, "pow", "pow (double, long long int)", DBL_MANT_DIG, 0 },
    { test_pow_413, "cpow", "pow (double, _Complex long long int)", DBL_MANT_DIG, 0 },
    { test_pow_414, "pow", "pow (double, unsigned long long int)", DBL_MANT_DIG, 0 },
    { test_pow_415, "cpow", "pow (double, _Complex unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_pow_416, "pow", "pow (double, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_417, "cpow", "pow (double, _Complex __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_418, "pow", "pow (double, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_419, "cpow", "pow (double, _Complex unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_pow_420, "pow", "pow (double, enum e)", DBL_MANT_DIG, 0 },
    { test_pow_421, "pow", "pow (double, _Bool)", DBL_MANT_DIG, 0 },
    { test_pow_422, "pow", "pow (double, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_pow_423, "cpow", "pow (_Complex double, _Float16)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_pow_424, "cpow", "pow (_Complex double, __CFLOAT16)", DBL_MANT_DIG, 0 },
#endif
    { test_pow_425, "cpow", "pow (_Complex double, float)", DBL_MANT_DIG, 0 },
    { test_pow_426, "cpow", "pow (_Complex double, _Complex float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_pow_427, "cpow", "pow (_Complex double, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_pow_428, "cpow", "pow (_Complex double, __CFLOAT32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_pow_429, "cpow", "pow (_Complex double, _Float32x)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_pow_430, "cpow", "pow (_Complex double, __CFLOAT32X)", DBL_MANT_DIG, 0 },
#endif
    { test_pow_431, "cpow", "pow (_Complex double, double)", DBL_MANT_DIG, 0 },
    { test_pow_432, "cpow", "pow (_Complex double, _Complex double)", DBL_MANT_DIG, 0 },
    { test_pow_433, "cpow", "pow (_Complex double, long double)", LDBL_MANT_DIG, 0 },
    { test_pow_434, "cpow", "pow (_Complex double, _Complex long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_pow_435, "cpow", "pow (_Complex double, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_pow_436, "cpow", "pow (_Complex double, __CFLOAT64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_pow_437, "cpow", "pow (_Complex double, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_pow_438, "cpow", "pow (_Complex double, __CFLOAT64X)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_pow_439, "cpow", "pow (_Complex double, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_pow_440, "cpow", "pow (_Complex double, __CFLOAT128)", FLT128_MANT_DIG, 0 },
#endif
    { test_pow_441, "cpow", "pow (_Complex double, char)", DBL_MANT_DIG, 0 },
    { test_pow_442, "cpow", "pow (_Complex double, _Complex char)", DBL_MANT_DIG, 0 },
    { test_pow_443, "cpow", "pow (_Complex double, signed char)", DBL_MANT_DIG, 0 },
    { test_pow_444, "cpow", "pow (_Complex double, _Complex signed char)", DBL_MANT_DIG, 0 },
    { test_pow_445, "cpow", "pow (_Complex double, unsigned char)", DBL_MANT_DIG, 0 },
    { test_pow_446, "cpow", "pow (_Complex double, _Complex unsigned char)", DBL_MANT_DIG, 0 },
    { test_pow_447, "cpow", "pow (_Complex double, short int)", DBL_MANT_DIG, 0 },
    { test_pow_448, "cpow", "pow (_Complex double, _Complex short int)", DBL_MANT_DIG, 0 },
    { test_pow_449, "cpow", "pow (_Complex double, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_pow_450, "cpow", "pow (_Complex double, _Complex unsigned short int)", DBL_MANT_DIG, 0 },
    { test_pow_451, "cpow", "pow (_Complex double, int)", DBL_MANT_DIG, 0 },
    { test_pow_452, "cpow", "pow (_Complex double, _Complex int)", DBL_MANT_DIG, 0 },
    { test_pow_453, "cpow", "pow (_Complex double, unsigned int)", DBL_MANT_DIG, 0 },
    { test_pow_454, "cpow", "pow (_Complex double, _Complex unsigned int)", DBL_MANT_DIG, 0 },
    { test_pow_455, "cpow", "pow (_Complex double, long int)", DBL_MANT_DIG, 0 },
    { test_pow_456, "cpow", "pow (_Complex double, _Complex long int)", DBL_MANT_DIG, 0 },
    { test_pow_457, "cpow", "pow (_Complex double, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_pow_458, "cpow", "pow (_Complex double, _Complex unsigned long int)", DBL_MANT_DIG, 0 },
    { test_pow_459, "cpow", "pow (_Complex double, long long int)", DBL_MANT_DIG, 0 },
    { test_pow_460, "cpow", "pow (_Complex double, _Complex long long int)", DBL_MANT_DIG, 0 },
    { test_pow_461, "cpow", "pow (_Complex double, unsigned long long int)", DBL_MANT_DIG, 0 },
    { test_pow_462, "cpow", "pow (_Complex double, _Complex unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_pow_463, "cpow", "pow (_Complex double, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_464, "cpow", "pow (_Complex double, _Complex __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_465, "cpow", "pow (_Complex double, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_466, "cpow", "pow (_Complex double, _Complex unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_pow_467, "cpow", "pow (_Complex double, enum e)", DBL_MANT_DIG, 0 },
    { test_pow_468, "cpow", "pow (_Complex double, _Bool)", DBL_MANT_DIG, 0 },
    { test_pow_469, "cpow", "pow (_Complex double, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_pow_470, "pow", "pow (long double, _Float16)", LDBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_pow_471, "cpow", "pow (long double, __CFLOAT16)", LDBL_MANT_DIG, 0 },
#endif
    { test_pow_472, "pow", "pow (long double, float)", LDBL_MANT_DIG, 0 },
    { test_pow_473, "cpow", "pow (long double, _Complex float)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_pow_474, "pow", "pow (long double, _Float32)", LDBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_pow_475, "cpow", "pow (long double, __CFLOAT32)", LDBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_pow_476, "pow", "pow (long double, _Float32x)", LDBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_pow_477, "cpow", "pow (long double, __CFLOAT32X)", LDBL_MANT_DIG, 0 },
#endif
    { test_pow_478, "pow", "pow (long double, double)", LDBL_MANT_DIG, 0 },
    { test_pow_479, "cpow", "pow (long double, _Complex double)", LDBL_MANT_DIG, 0 },
    { test_pow_480, "pow", "pow (long double, long double)", LDBL_MANT_DIG, 0 },
    { test_pow_481, "cpow", "pow (long double, _Complex long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_pow_482, "pow", "pow (long double, _Float64)", LDBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_pow_483, "cpow", "pow (long double, __CFLOAT64)", LDBL_MANT_DIG, 0 },
#endif
#if (LDBL_MANT_DIG != 106) && defined HUGE_VAL_F64X
    { test_pow_484, "pow", "pow (long double, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (LDBL_MANT_DIG != 106) && defined HUGE_VAL_F64X
    { test_pow_485, "cpow", "pow (long double, __CFLOAT64X)", FLT64X_MANT_DIG, 0 },
#endif
#if (LDBL_MANT_DIG != 106) && defined HUGE_VAL_F128
    { test_pow_486, "pow", "pow (long double, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (LDBL_MANT_DIG != 106) && defined HUGE_VAL_F128
    { test_pow_487, "cpow", "pow (long double, __CFLOAT128)", FLT128_MANT_DIG, 0 },
#endif
    { test_pow_488, "pow", "pow (long double, char)", LDBL_MANT_DIG, 0 },
    { test_pow_489, "cpow", "pow (long double, _Complex char)", LDBL_MANT_DIG, 0 },
    { test_pow_490, "pow", "pow (long double, signed char)", LDBL_MANT_DIG, 0 },
    { test_pow_491, "cpow", "pow (long double, _Complex signed char)", LDBL_MANT_DIG, 0 },
    { test_pow_492, "pow", "pow (long double, unsigned char)", LDBL_MANT_DIG, 0 },
    { test_pow_493, "cpow", "pow (long double, _Complex unsigned char)", LDBL_MANT_DIG, 0 },
    { test_pow_494, "pow", "pow (long double, short int)", LDBL_MANT_DIG, 0 },
    { test_pow_495, "cpow", "pow (long double, _Complex short int)", LDBL_MANT_DIG, 0 },
    { test_pow_496, "pow", "pow (long double, unsigned short int)", LDBL_MANT_DIG, 0 },
    { test_pow_497, "cpow", "pow (long double, _Complex unsigned short int)", LDBL_MANT_DIG, 0 },
    { test_pow_498, "pow", "pow (long double, int)", LDBL_MANT_DIG, 0 },
    { test_pow_499, "cpow", "pow (long double, _Complex int)", LDBL_MANT_DIG, 0 },
    { test_pow_500, "pow", "pow (long double, unsigned int)", LDBL_MANT_DIG, 0 },
    { test_pow_501, "cpow", "pow (long double, _Complex unsigned int)", LDBL_MANT_DIG, 0 },
    { test_pow_502, "pow", "pow (long double, long int)", LDBL_MANT_DIG, 0 },
    { test_pow_503, "cpow", "pow (long double, _Complex long int)", LDBL_MANT_DIG, 0 },
    { test_pow_504, "pow", "pow (long double, unsigned long int)", LDBL_MANT_DIG, 0 },
    { test_pow_505, "cpow", "pow (long double, _Complex unsigned long int)", LDBL_MANT_DIG, 0 },
    { test_pow_506, "pow", "pow (long double, long long int)", LDBL_MANT_DIG, 0 },
    { test_pow_507, "cpow", "pow (long double, _Complex long long int)", LDBL_MANT_DIG, 0 },
    { test_pow_508, "pow", "pow (long double, unsigned long long int)", LDBL_MANT_DIG, 0 },
    { test_pow_509, "cpow", "pow (long double, _Complex unsigned long long int)", LDBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_pow_510, "pow", "pow (long double, __int128)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_511, "cpow", "pow (long double, _Complex __int128)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_512, "pow", "pow (long double, unsigned __int128)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_513, "cpow", "pow (long double, _Complex unsigned __int128)", LDBL_MANT_DIG, 0 },
#endif
    { test_pow_514, "pow", "pow (long double, enum e)", LDBL_MANT_DIG, 0 },
    { test_pow_515, "pow", "pow (long double, _Bool)", LDBL_MANT_DIG, 0 },
    { test_pow_516, "pow", "pow (long double, bit_field)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_pow_517, "cpow", "pow (_Complex long double, _Float16)", LDBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_pow_518, "cpow", "pow (_Complex long double, __CFLOAT16)", LDBL_MANT_DIG, 0 },
#endif
    { test_pow_519, "cpow", "pow (_Complex long double, float)", LDBL_MANT_DIG, 0 },
    { test_pow_520, "cpow", "pow (_Complex long double, _Complex float)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_pow_521, "cpow", "pow (_Complex long double, _Float32)", LDBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_pow_522, "cpow", "pow (_Complex long double, __CFLOAT32)", LDBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_pow_523, "cpow", "pow (_Complex long double, _Float32x)", LDBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_pow_524, "cpow", "pow (_Complex long double, __CFLOAT32X)", LDBL_MANT_DIG, 0 },
#endif
    { test_pow_525, "cpow", "pow (_Complex long double, double)", LDBL_MANT_DIG, 0 },
    { test_pow_526, "cpow", "pow (_Complex long double, _Complex double)", LDBL_MANT_DIG, 0 },
    { test_pow_527, "cpow", "pow (_Complex long double, long double)", LDBL_MANT_DIG, 0 },
    { test_pow_528, "cpow", "pow (_Complex long double, _Complex long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_pow_529, "cpow", "pow (_Complex long double, _Float64)", LDBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_pow_530, "cpow", "pow (_Complex long double, __CFLOAT64)", LDBL_MANT_DIG, 0 },
#endif
#if (LDBL_MANT_DIG != 106) && defined HUGE_VAL_F64X
    { test_pow_531, "cpow", "pow (_Complex long double, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (LDBL_MANT_DIG != 106) && defined HUGE_VAL_F64X
    { test_pow_532, "cpow", "pow (_Complex long double, __CFLOAT64X)", FLT64X_MANT_DIG, 0 },
#endif
#if (LDBL_MANT_DIG != 106) && defined HUGE_VAL_F128
    { test_pow_533, "cpow", "pow (_Complex long double, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (LDBL_MANT_DIG != 106) && defined HUGE_VAL_F128
    { test_pow_534, "cpow", "pow (_Complex long double, __CFLOAT128)", FLT128_MANT_DIG, 0 },
#endif
    { test_pow_535, "cpow", "pow (_Complex long double, char)", LDBL_MANT_DIG, 0 },
    { test_pow_536, "cpow", "pow (_Complex long double, _Complex char)", LDBL_MANT_DIG, 0 },
    { test_pow_537, "cpow", "pow (_Complex long double, signed char)", LDBL_MANT_DIG, 0 },
    { test_pow_538, "cpow", "pow (_Complex long double, _Complex signed char)", LDBL_MANT_DIG, 0 },
    { test_pow_539, "cpow", "pow (_Complex long double, unsigned char)", LDBL_MANT_DIG, 0 },
    { test_pow_540, "cpow", "pow (_Complex long double, _Complex unsigned char)", LDBL_MANT_DIG, 0 },
    { test_pow_541, "cpow", "pow (_Complex long double, short int)", LDBL_MANT_DIG, 0 },
    { test_pow_542, "cpow", "pow (_Complex long double, _Complex short int)", LDBL_MANT_DIG, 0 },
    { test_pow_543, "cpow", "pow (_Complex long double, unsigned short int)", LDBL_MANT_DIG, 0 },
    { test_pow_544, "cpow", "pow (_Complex long double, _Complex unsigned short int)", LDBL_MANT_DIG, 0 },
    { test_pow_545, "cpow", "pow (_Complex long double, int)", LDBL_MANT_DIG, 0 },
    { test_pow_546, "cpow", "pow (_Complex long double, _Complex int)", LDBL_MANT_DIG, 0 },
    { test_pow_547, "cpow", "pow (_Complex long double, unsigned int)", LDBL_MANT_DIG, 0 },
    { test_pow_548, "cpow", "pow (_Complex long double, _Complex unsigned int)", LDBL_MANT_DIG, 0 },
    { test_pow_549, "cpow", "pow (_Complex long double, long int)", LDBL_MANT_DIG, 0 },
    { test_pow_550, "cpow", "pow (_Complex long double, _Complex long int)", LDBL_MANT_DIG, 0 },
    { test_pow_551, "cpow", "pow (_Complex long double, unsigned long int)", LDBL_MANT_DIG, 0 },
    { test_pow_552, "cpow", "pow (_Complex long double, _Complex unsigned long int)", LDBL_MANT_DIG, 0 },
    { test_pow_553, "cpow", "pow (_Complex long double, long long int)", LDBL_MANT_DIG, 0 },
    { test_pow_554, "cpow", "pow (_Complex long double, _Complex long long int)", LDBL_MANT_DIG, 0 },
    { test_pow_555, "cpow", "pow (_Complex long double, unsigned long long int)", LDBL_MANT_DIG, 0 },
    { test_pow_556, "cpow", "pow (_Complex long double, _Complex unsigned long long int)", LDBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_pow_557, "cpow", "pow (_Complex long double, __int128)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_558, "cpow", "pow (_Complex long double, _Complex __int128)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_559, "cpow", "pow (_Complex long double, unsigned __int128)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_560, "cpow", "pow (_Complex long double, _Complex unsigned __int128)", LDBL_MANT_DIG, 0 },
#endif
    { test_pow_561, "cpow", "pow (_Complex long double, enum e)", LDBL_MANT_DIG, 0 },
    { test_pow_562, "cpow", "pow (_Complex long double, _Bool)", LDBL_MANT_DIG, 0 },
    { test_pow_563, "cpow", "pow (_Complex long double, bit_field)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F64
    { test_pow_564, "pow", "pow (_Float64, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F64
    { test_pow_565, "cpow", "pow (_Float64, __CFLOAT16)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_pow_566, "pow", "pow (_Float64, float)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_pow_567, "cpow", "pow (_Float64, _Complex float)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F64
    { test_pow_568, "pow", "pow (_Float64, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F64
    { test_pow_569, "cpow", "pow (_Float64, __CFLOAT32)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X && defined HUGE_VAL_F64
    { test_pow_570, "pow", "pow (_Float64, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X && defined HUGE_VAL_F64
    { test_pow_571, "cpow", "pow (_Float64, __CFLOAT32X)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_pow_572, "pow", "pow (_Float64, double)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_pow_573, "cpow", "pow (_Float64, _Complex double)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_pow_574, "pow", "pow (_Float64, long double)", LDBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_pow_575, "cpow", "pow (_Float64, _Complex long double)", LDBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_pow_576, "pow", "pow (_Float64, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_pow_577, "cpow", "pow (_Float64, __CFLOAT64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
    { test_pow_578, "pow", "pow (_Float64, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
    { test_pow_579, "cpow", "pow (_Float64, __CFLOAT64X)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F64
    { test_pow_580, "pow", "pow (_Float64, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F64
    { test_pow_581, "cpow", "pow (_Float64, __CFLOAT128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_pow_582, "pow", "pow (_Float64, char)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_pow_583, "cpow", "pow (_Float64, _Complex char)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_pow_584, "pow", "pow (_Float64, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_pow_585, "cpow", "pow (_Float64, _Complex signed char)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_pow_586, "pow", "pow (_Float64, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_pow_587, "cpow", "pow (_Float64, _Complex unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_pow_588, "pow", "pow (_Float64, short int)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_pow_589, "cpow", "pow (_Float64, _Complex short int)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_pow_590, "pow", "pow (_Float64, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_pow_591, "cpow", "pow (_Float64, _Complex unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_pow_592, "pow", "pow (_Float64, int)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_pow_593, "cpow", "pow (_Float64, _Complex int)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_pow_594, "pow", "pow (_Float64, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_pow_595, "cpow", "pow (_Float64, _Complex unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_pow_596, "pow", "pow (_Float64, long int)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_pow_597, "cpow", "pow (_Float64, _Complex long int)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_pow_598, "pow", "pow (_Float64, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_pow_599, "cpow", "pow (_Float64, _Complex unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_pow_600, "pow", "pow (_Float64, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_pow_601, "cpow", "pow (_Float64, _Complex long long int)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_pow_602, "pow", "pow (_Float64, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_pow_603, "cpow", "pow (_Float64, _Complex unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_pow_604, "pow", "pow (_Float64, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_pow_605, "cpow", "pow (_Float64, _Complex __int128)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_pow_606, "pow", "pow (_Float64, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_pow_607, "cpow", "pow (_Float64, _Complex unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_pow_608, "pow", "pow (_Float64, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_pow_609, "pow", "pow (_Float64, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_pow_610, "pow", "pow (_Float64, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F64
    { test_pow_611, "cpow", "pow (__CFLOAT64, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F64
    { test_pow_612, "cpow", "pow (__CFLOAT64, __CFLOAT16)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_pow_613, "cpow", "pow (__CFLOAT64, float)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_pow_614, "cpow", "pow (__CFLOAT64, _Complex float)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F64
    { test_pow_615, "cpow", "pow (__CFLOAT64, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F64
    { test_pow_616, "cpow", "pow (__CFLOAT64, __CFLOAT32)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X && defined HUGE_VAL_F64
    { test_pow_617, "cpow", "pow (__CFLOAT64, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X && defined HUGE_VAL_F64
    { test_pow_618, "cpow", "pow (__CFLOAT64, __CFLOAT32X)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_pow_619, "cpow", "pow (__CFLOAT64, double)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_pow_620, "cpow", "pow (__CFLOAT64, _Complex double)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_pow_621, "cpow", "pow (__CFLOAT64, long double)", LDBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_pow_622, "cpow", "pow (__CFLOAT64, _Complex long double)", LDBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_pow_623, "cpow", "pow (__CFLOAT64, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_pow_624, "cpow", "pow (__CFLOAT64, __CFLOAT64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
    { test_pow_625, "cpow", "pow (__CFLOAT64, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
    { test_pow_626, "cpow", "pow (__CFLOAT64, __CFLOAT64X)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F64
    { test_pow_627, "cpow", "pow (__CFLOAT64, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F64
    { test_pow_628, "cpow", "pow (__CFLOAT64, __CFLOAT128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_pow_629, "cpow", "pow (__CFLOAT64, char)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_pow_630, "cpow", "pow (__CFLOAT64, _Complex char)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_pow_631, "cpow", "pow (__CFLOAT64, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_pow_632, "cpow", "pow (__CFLOAT64, _Complex signed char)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_pow_633, "cpow", "pow (__CFLOAT64, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_pow_634, "cpow", "pow (__CFLOAT64, _Complex unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_pow_635, "cpow", "pow (__CFLOAT64, short int)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_pow_636, "cpow", "pow (__CFLOAT64, _Complex short int)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_pow_637, "cpow", "pow (__CFLOAT64, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_pow_638, "cpow", "pow (__CFLOAT64, _Complex unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_pow_639, "cpow", "pow (__CFLOAT64, int)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_pow_640, "cpow", "pow (__CFLOAT64, _Complex int)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_pow_641, "cpow", "pow (__CFLOAT64, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_pow_642, "cpow", "pow (__CFLOAT64, _Complex unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_pow_643, "cpow", "pow (__CFLOAT64, long int)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_pow_644, "cpow", "pow (__CFLOAT64, _Complex long int)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_pow_645, "cpow", "pow (__CFLOAT64, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_pow_646, "cpow", "pow (__CFLOAT64, _Complex unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_pow_647, "cpow", "pow (__CFLOAT64, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_pow_648, "cpow", "pow (__CFLOAT64, _Complex long long int)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_pow_649, "cpow", "pow (__CFLOAT64, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_pow_650, "cpow", "pow (__CFLOAT64, _Complex unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_pow_651, "cpow", "pow (__CFLOAT64, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_pow_652, "cpow", "pow (__CFLOAT64, _Complex __int128)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_pow_653, "cpow", "pow (__CFLOAT64, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_pow_654, "cpow", "pow (__CFLOAT64, _Complex unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_pow_655, "cpow", "pow (__CFLOAT64, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_pow_656, "cpow", "pow (__CFLOAT64, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_pow_657, "cpow", "pow (__CFLOAT64, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
    { test_pow_658, "pow", "pow (_Float64x, _Float16)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
    { test_pow_659, "cpow", "pow (_Float64x, __CFLOAT16)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_pow_660, "pow", "pow (_Float64x, float)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_pow_661, "cpow", "pow (_Float64x, _Complex float)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
    { test_pow_662, "pow", "pow (_Float64x, _Float32)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
    { test_pow_663, "cpow", "pow (_Float64x, __CFLOAT32)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
    { test_pow_664, "pow", "pow (_Float64x, _Float32x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
    { test_pow_665, "cpow", "pow (_Float64x, __CFLOAT32X)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_pow_666, "pow", "pow (_Float64x, double)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_pow_667, "cpow", "pow (_Float64x, _Complex double)", FLT64X_MANT_DIG, 0 },
#endif
#if (LDBL_MANT_DIG != 106) && defined HUGE_VAL_F64X
    { test_pow_668, "pow", "pow (_Float64x, long double)", FLT64X_MANT_DIG, 0 },
#endif
#if (LDBL_MANT_DIG != 106) && defined HUGE_VAL_F64X
    { test_pow_669, "cpow", "pow (_Float64x, _Complex long double)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
    { test_pow_670, "pow", "pow (_Float64x, _Float64)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
    { test_pow_671, "cpow", "pow (_Float64x, __CFLOAT64)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_pow_672, "pow", "pow (_Float64x, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_pow_673, "cpow", "pow (_Float64x, __CFLOAT64X)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
    { test_pow_674, "pow", "pow (_Float64x, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
    { test_pow_675, "cpow", "pow (_Float64x, __CFLOAT128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_pow_676, "pow", "pow (_Float64x, char)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_pow_677, "cpow", "pow (_Float64x, _Complex char)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_pow_678, "pow", "pow (_Float64x, signed char)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_pow_679, "cpow", "pow (_Float64x, _Complex signed char)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_pow_680, "pow", "pow (_Float64x, unsigned char)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_pow_681, "cpow", "pow (_Float64x, _Complex unsigned char)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_pow_682, "pow", "pow (_Float64x, short int)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_pow_683, "cpow", "pow (_Float64x, _Complex short int)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_pow_684, "pow", "pow (_Float64x, unsigned short int)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_pow_685, "cpow", "pow (_Float64x, _Complex unsigned short int)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_pow_686, "pow", "pow (_Float64x, int)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_pow_687, "cpow", "pow (_Float64x, _Complex int)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_pow_688, "pow", "pow (_Float64x, unsigned int)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_pow_689, "cpow", "pow (_Float64x, _Complex unsigned int)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_pow_690, "pow", "pow (_Float64x, long int)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_pow_691, "cpow", "pow (_Float64x, _Complex long int)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_pow_692, "pow", "pow (_Float64x, unsigned long int)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_pow_693, "cpow", "pow (_Float64x, _Complex unsigned long int)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_pow_694, "pow", "pow (_Float64x, long long int)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_pow_695, "cpow", "pow (_Float64x, _Complex long long int)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_pow_696, "pow", "pow (_Float64x, unsigned long long int)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_pow_697, "cpow", "pow (_Float64x, _Complex unsigned long long int)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_pow_698, "pow", "pow (_Float64x, __int128)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_pow_699, "cpow", "pow (_Float64x, _Complex __int128)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_pow_700, "pow", "pow (_Float64x, unsigned __int128)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_pow_701, "cpow", "pow (_Float64x, _Complex unsigned __int128)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_pow_702, "pow", "pow (_Float64x, enum e)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_pow_703, "pow", "pow (_Float64x, _Bool)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_pow_704, "pow", "pow (_Float64x, bit_field)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
    { test_pow_705, "cpow", "pow (__CFLOAT64X, _Float16)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
    { test_pow_706, "cpow", "pow (__CFLOAT64X, __CFLOAT16)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_pow_707, "cpow", "pow (__CFLOAT64X, float)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_pow_708, "cpow", "pow (__CFLOAT64X, _Complex float)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
    { test_pow_709, "cpow", "pow (__CFLOAT64X, _Float32)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
    { test_pow_710, "cpow", "pow (__CFLOAT64X, __CFLOAT32)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
    { test_pow_711, "cpow", "pow (__CFLOAT64X, _Float32x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
    { test_pow_712, "cpow", "pow (__CFLOAT64X, __CFLOAT32X)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_pow_713, "cpow", "pow (__CFLOAT64X, double)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_pow_714, "cpow", "pow (__CFLOAT64X, _Complex double)", FLT64X_MANT_DIG, 0 },
#endif
#if (LDBL_MANT_DIG != 106) && defined HUGE_VAL_F64X
    { test_pow_715, "cpow", "pow (__CFLOAT64X, long double)", FLT64X_MANT_DIG, 0 },
#endif
#if (LDBL_MANT_DIG != 106) && defined HUGE_VAL_F64X
    { test_pow_716, "cpow", "pow (__CFLOAT64X, _Complex long double)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
    { test_pow_717, "cpow", "pow (__CFLOAT64X, _Float64)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
    { test_pow_718, "cpow", "pow (__CFLOAT64X, __CFLOAT64)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_pow_719, "cpow", "pow (__CFLOAT64X, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_pow_720, "cpow", "pow (__CFLOAT64X, __CFLOAT64X)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
    { test_pow_721, "cpow", "pow (__CFLOAT64X, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
    { test_pow_722, "cpow", "pow (__CFLOAT64X, __CFLOAT128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_pow_723, "cpow", "pow (__CFLOAT64X, char)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_pow_724, "cpow", "pow (__CFLOAT64X, _Complex char)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_pow_725, "cpow", "pow (__CFLOAT64X, signed char)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_pow_726, "cpow", "pow (__CFLOAT64X, _Complex signed char)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_pow_727, "cpow", "pow (__CFLOAT64X, unsigned char)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_pow_728, "cpow", "pow (__CFLOAT64X, _Complex unsigned char)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_pow_729, "cpow", "pow (__CFLOAT64X, short int)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_pow_730, "cpow", "pow (__CFLOAT64X, _Complex short int)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_pow_731, "cpow", "pow (__CFLOAT64X, unsigned short int)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_pow_732, "cpow", "pow (__CFLOAT64X, _Complex unsigned short int)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_pow_733, "cpow", "pow (__CFLOAT64X, int)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_pow_734, "cpow", "pow (__CFLOAT64X, _Complex int)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_pow_735, "cpow", "pow (__CFLOAT64X, unsigned int)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_pow_736, "cpow", "pow (__CFLOAT64X, _Complex unsigned int)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_pow_737, "cpow", "pow (__CFLOAT64X, long int)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_pow_738, "cpow", "pow (__CFLOAT64X, _Complex long int)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_pow_739, "cpow", "pow (__CFLOAT64X, unsigned long int)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_pow_740, "cpow", "pow (__CFLOAT64X, _Complex unsigned long int)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_pow_741, "cpow", "pow (__CFLOAT64X, long long int)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_pow_742, "cpow", "pow (__CFLOAT64X, _Complex long long int)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_pow_743, "cpow", "pow (__CFLOAT64X, unsigned long long int)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_pow_744, "cpow", "pow (__CFLOAT64X, _Complex unsigned long long int)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_pow_745, "cpow", "pow (__CFLOAT64X, __int128)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_pow_746, "cpow", "pow (__CFLOAT64X, _Complex __int128)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_pow_747, "cpow", "pow (__CFLOAT64X, unsigned __int128)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_pow_748, "cpow", "pow (__CFLOAT64X, _Complex unsigned __int128)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_pow_749, "cpow", "pow (__CFLOAT64X, enum e)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_pow_750, "cpow", "pow (__CFLOAT64X, _Bool)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_pow_751, "cpow", "pow (__CFLOAT64X, bit_field)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F16
    { test_pow_752, "pow", "pow (_Float128, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F16
    { test_pow_753, "cpow", "pow (_Float128, __CFLOAT16)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_pow_754, "pow", "pow (_Float128, float)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_pow_755, "cpow", "pow (_Float128, _Complex float)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F32
    { test_pow_756, "pow", "pow (_Float128, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F32
    { test_pow_757, "cpow", "pow (_Float128, __CFLOAT32)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
    { test_pow_758, "pow", "pow (_Float128, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
    { test_pow_759, "cpow", "pow (_Float128, __CFLOAT32X)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_pow_760, "pow", "pow (_Float128, double)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_pow_761, "cpow", "pow (_Float128, _Complex double)", FLT128_MANT_DIG, 0 },
#endif
#if (LDBL_MANT_DIG != 106) && defined HUGE_VAL_F128
    { test_pow_762, "pow", "pow (_Float128, long double)", FLT128_MANT_DIG, 0 },
#endif
#if (LDBL_MANT_DIG != 106) && defined HUGE_VAL_F128
    { test_pow_763, "cpow", "pow (_Float128, _Complex long double)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F64
    { test_pow_764, "pow", "pow (_Float128, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F64
    { test_pow_765, "cpow", "pow (_Float128, __CFLOAT64)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
    { test_pow_766, "pow", "pow (_Float128, _Float64x)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
    { test_pow_767, "cpow", "pow (_Float128, __CFLOAT64X)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_pow_768, "pow", "pow (_Float128, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_pow_769, "cpow", "pow (_Float128, __CFLOAT128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_pow_770, "pow", "pow (_Float128, char)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_pow_771, "cpow", "pow (_Float128, _Complex char)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_pow_772, "pow", "pow (_Float128, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_pow_773, "cpow", "pow (_Float128, _Complex signed char)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_pow_774, "pow", "pow (_Float128, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_pow_775, "cpow", "pow (_Float128, _Complex unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_pow_776, "pow", "pow (_Float128, short int)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_pow_777, "cpow", "pow (_Float128, _Complex short int)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_pow_778, "pow", "pow (_Float128, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_pow_779, "cpow", "pow (_Float128, _Complex unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_pow_780, "pow", "pow (_Float128, int)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_pow_781, "cpow", "pow (_Float128, _Complex int)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_pow_782, "pow", "pow (_Float128, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_pow_783, "cpow", "pow (_Float128, _Complex unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_pow_784, "pow", "pow (_Float128, long int)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_pow_785, "cpow", "pow (_Float128, _Complex long int)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_pow_786, "pow", "pow (_Float128, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_pow_787, "cpow", "pow (_Float128, _Complex unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_pow_788, "pow", "pow (_Float128, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_pow_789, "cpow", "pow (_Float128, _Complex long long int)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_pow_790, "pow", "pow (_Float128, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_pow_791, "cpow", "pow (_Float128, _Complex unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_pow_792, "pow", "pow (_Float128, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_pow_793, "cpow", "pow (_Float128, _Complex __int128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_pow_794, "pow", "pow (_Float128, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_pow_795, "cpow", "pow (_Float128, _Complex unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_pow_796, "pow", "pow (_Float128, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_pow_797, "pow", "pow (_Float128, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_pow_798, "pow", "pow (_Float128, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F16
    { test_pow_799, "cpow", "pow (__CFLOAT128, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F16
    { test_pow_800, "cpow", "pow (__CFLOAT128, __CFLOAT16)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_pow_801, "cpow", "pow (__CFLOAT128, float)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_pow_802, "cpow", "pow (__CFLOAT128, _Complex float)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F32
    { test_pow_803, "cpow", "pow (__CFLOAT128, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F32
    { test_pow_804, "cpow", "pow (__CFLOAT128, __CFLOAT32)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
    { test_pow_805, "cpow", "pow (__CFLOAT128, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
    { test_pow_806, "cpow", "pow (__CFLOAT128, __CFLOAT32X)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_pow_807, "cpow", "pow (__CFLOAT128, double)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_pow_808, "cpow", "pow (__CFLOAT128, _Complex double)", FLT128_MANT_DIG, 0 },
#endif
#if (LDBL_MANT_DIG != 106) && defined HUGE_VAL_F128
    { test_pow_809, "cpow", "pow (__CFLOAT128, long double)", FLT128_MANT_DIG, 0 },
#endif
#if (LDBL_MANT_DIG != 106) && defined HUGE_VAL_F128
    { test_pow_810, "cpow", "pow (__CFLOAT128, _Complex long double)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F64
    { test_pow_811, "cpow", "pow (__CFLOAT128, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F64
    { test_pow_812, "cpow", "pow (__CFLOAT128, __CFLOAT64)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
    { test_pow_813, "cpow", "pow (__CFLOAT128, _Float64x)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
    { test_pow_814, "cpow", "pow (__CFLOAT128, __CFLOAT64X)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_pow_815, "cpow", "pow (__CFLOAT128, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_pow_816, "cpow", "pow (__CFLOAT128, __CFLOAT128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_pow_817, "cpow", "pow (__CFLOAT128, char)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_pow_818, "cpow", "pow (__CFLOAT128, _Complex char)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_pow_819, "cpow", "pow (__CFLOAT128, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_pow_820, "cpow", "pow (__CFLOAT128, _Complex signed char)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_pow_821, "cpow", "pow (__CFLOAT128, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_pow_822, "cpow", "pow (__CFLOAT128, _Complex unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_pow_823, "cpow", "pow (__CFLOAT128, short int)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_pow_824, "cpow", "pow (__CFLOAT128, _Complex short int)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_pow_825, "cpow", "pow (__CFLOAT128, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_pow_826, "cpow", "pow (__CFLOAT128, _Complex unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_pow_827, "cpow", "pow (__CFLOAT128, int)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_pow_828, "cpow", "pow (__CFLOAT128, _Complex int)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_pow_829, "cpow", "pow (__CFLOAT128, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_pow_830, "cpow", "pow (__CFLOAT128, _Complex unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_pow_831, "cpow", "pow (__CFLOAT128, long int)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_pow_832, "cpow", "pow (__CFLOAT128, _Complex long int)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_pow_833, "cpow", "pow (__CFLOAT128, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_pow_834, "cpow", "pow (__CFLOAT128, _Complex unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_pow_835, "cpow", "pow (__CFLOAT128, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_pow_836, "cpow", "pow (__CFLOAT128, _Complex long long int)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_pow_837, "cpow", "pow (__CFLOAT128, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_pow_838, "cpow", "pow (__CFLOAT128, _Complex unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_pow_839, "cpow", "pow (__CFLOAT128, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_pow_840, "cpow", "pow (__CFLOAT128, _Complex __int128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_pow_841, "cpow", "pow (__CFLOAT128, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_pow_842, "cpow", "pow (__CFLOAT128, _Complex unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_pow_843, "cpow", "pow (__CFLOAT128, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_pow_844, "cpow", "pow (__CFLOAT128, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_pow_845, "cpow", "pow (__CFLOAT128, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_pow_846, "pow", "pow (char, _Float16)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_pow_847, "cpow", "pow (char, __CFLOAT16)", DBL_MANT_DIG, 0 },
#endif
    { test_pow_848, "pow", "pow (char, float)", DBL_MANT_DIG, 0 },
    { test_pow_849, "cpow", "pow (char, _Complex float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_pow_850, "pow", "pow (char, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_pow_851, "cpow", "pow (char, __CFLOAT32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_pow_852, "pow", "pow (char, _Float32x)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_pow_853, "cpow", "pow (char, __CFLOAT32X)", DBL_MANT_DIG, 0 },
#endif
    { test_pow_854, "pow", "pow (char, double)", DBL_MANT_DIG, 0 },
    { test_pow_855, "cpow", "pow (char, _Complex double)", DBL_MANT_DIG, 0 },
    { test_pow_856, "pow", "pow (char, long double)", LDBL_MANT_DIG, 0 },
    { test_pow_857, "cpow", "pow (char, _Complex long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_pow_858, "pow", "pow (char, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_pow_859, "cpow", "pow (char, __CFLOAT64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_pow_860, "pow", "pow (char, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_pow_861, "cpow", "pow (char, __CFLOAT64X)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_pow_862, "pow", "pow (char, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_pow_863, "cpow", "pow (char, __CFLOAT128)", FLT128_MANT_DIG, 0 },
#endif
    { test_pow_864, "pow", "pow (char, char)", DBL_MANT_DIG, 0 },
    { test_pow_865, "cpow", "pow (char, _Complex char)", DBL_MANT_DIG, 0 },
    { test_pow_866, "pow", "pow (char, signed char)", DBL_MANT_DIG, 0 },
    { test_pow_867, "cpow", "pow (char, _Complex signed char)", DBL_MANT_DIG, 0 },
    { test_pow_868, "pow", "pow (char, unsigned char)", DBL_MANT_DIG, 0 },
    { test_pow_869, "cpow", "pow (char, _Complex unsigned char)", DBL_MANT_DIG, 0 },
    { test_pow_870, "pow", "pow (char, short int)", DBL_MANT_DIG, 0 },
    { test_pow_871, "cpow", "pow (char, _Complex short int)", DBL_MANT_DIG, 0 },
    { test_pow_872, "pow", "pow (char, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_pow_873, "cpow", "pow (char, _Complex unsigned short int)", DBL_MANT_DIG, 0 },
    { test_pow_874, "pow", "pow (char, int)", DBL_MANT_DIG, 0 },
    { test_pow_875, "cpow", "pow (char, _Complex int)", DBL_MANT_DIG, 0 },
    { test_pow_876, "pow", "pow (char, unsigned int)", DBL_MANT_DIG, 0 },
    { test_pow_877, "cpow", "pow (char, _Complex unsigned int)", DBL_MANT_DIG, 0 },
    { test_pow_878, "pow", "pow (char, long int)", DBL_MANT_DIG, 0 },
    { test_pow_879, "cpow", "pow (char, _Complex long int)", DBL_MANT_DIG, 0 },
    { test_pow_880, "pow", "pow (char, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_pow_881, "cpow", "pow (char, _Complex unsigned long int)", DBL_MANT_DIG, 0 },
    { test_pow_882, "pow", "pow (char, long long int)", DBL_MANT_DIG, 0 },
    { test_pow_883, "cpow", "pow (char, _Complex long long int)", DBL_MANT_DIG, 0 },
    { test_pow_884, "pow", "pow (char, unsigned long long int)", DBL_MANT_DIG, 0 },
    { test_pow_885, "cpow", "pow (char, _Complex unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_pow_886, "pow", "pow (char, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_887, "cpow", "pow (char, _Complex __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_888, "pow", "pow (char, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_889, "cpow", "pow (char, _Complex unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_pow_890, "pow", "pow (char, enum e)", DBL_MANT_DIG, 0 },
    { test_pow_891, "pow", "pow (char, _Bool)", DBL_MANT_DIG, 0 },
    { test_pow_892, "pow", "pow (char, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_pow_893, "cpow", "pow (_Complex char, _Float16)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_pow_894, "cpow", "pow (_Complex char, __CFLOAT16)", DBL_MANT_DIG, 0 },
#endif
    { test_pow_895, "cpow", "pow (_Complex char, float)", DBL_MANT_DIG, 0 },
    { test_pow_896, "cpow", "pow (_Complex char, _Complex float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_pow_897, "cpow", "pow (_Complex char, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_pow_898, "cpow", "pow (_Complex char, __CFLOAT32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_pow_899, "cpow", "pow (_Complex char, _Float32x)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_pow_900, "cpow", "pow (_Complex char, __CFLOAT32X)", DBL_MANT_DIG, 0 },
#endif
    { test_pow_901, "cpow", "pow (_Complex char, double)", DBL_MANT_DIG, 0 },
    { test_pow_902, "cpow", "pow (_Complex char, _Complex double)", DBL_MANT_DIG, 0 },
    { test_pow_903, "cpow", "pow (_Complex char, long double)", LDBL_MANT_DIG, 0 },
    { test_pow_904, "cpow", "pow (_Complex char, _Complex long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_pow_905, "cpow", "pow (_Complex char, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_pow_906, "cpow", "pow (_Complex char, __CFLOAT64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_pow_907, "cpow", "pow (_Complex char, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_pow_908, "cpow", "pow (_Complex char, __CFLOAT64X)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_pow_909, "cpow", "pow (_Complex char, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_pow_910, "cpow", "pow (_Complex char, __CFLOAT128)", FLT128_MANT_DIG, 0 },
#endif
    { test_pow_911, "cpow", "pow (_Complex char, char)", DBL_MANT_DIG, 0 },
    { test_pow_912, "cpow", "pow (_Complex char, _Complex char)", DBL_MANT_DIG, 0 },
    { test_pow_913, "cpow", "pow (_Complex char, signed char)", DBL_MANT_DIG, 0 },
    { test_pow_914, "cpow", "pow (_Complex char, _Complex signed char)", DBL_MANT_DIG, 0 },
    { test_pow_915, "cpow", "pow (_Complex char, unsigned char)", DBL_MANT_DIG, 0 },
    { test_pow_916, "cpow", "pow (_Complex char, _Complex unsigned char)", DBL_MANT_DIG, 0 },
    { test_pow_917, "cpow", "pow (_Complex char, short int)", DBL_MANT_DIG, 0 },
    { test_pow_918, "cpow", "pow (_Complex char, _Complex short int)", DBL_MANT_DIG, 0 },
    { test_pow_919, "cpow", "pow (_Complex char, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_pow_920, "cpow", "pow (_Complex char, _Complex unsigned short int)", DBL_MANT_DIG, 0 },
    { test_pow_921, "cpow", "pow (_Complex char, int)", DBL_MANT_DIG, 0 },
    { test_pow_922, "cpow", "pow (_Complex char, _Complex int)", DBL_MANT_DIG, 0 },
    { test_pow_923, "cpow", "pow (_Complex char, unsigned int)", DBL_MANT_DIG, 0 },
    { test_pow_924, "cpow", "pow (_Complex char, _Complex unsigned int)", DBL_MANT_DIG, 0 },
    { test_pow_925, "cpow", "pow (_Complex char, long int)", DBL_MANT_DIG, 0 },
    { test_pow_926, "cpow", "pow (_Complex char, _Complex long int)", DBL_MANT_DIG, 0 },
    { test_pow_927, "cpow", "pow (_Complex char, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_pow_928, "cpow", "pow (_Complex char, _Complex unsigned long int)", DBL_MANT_DIG, 0 },
    { test_pow_929, "cpow", "pow (_Complex char, long long int)", DBL_MANT_DIG, 0 },
    { test_pow_930, "cpow", "pow (_Complex char, _Complex long long int)", DBL_MANT_DIG, 0 },
    { test_pow_931, "cpow", "pow (_Complex char, unsigned long long int)", DBL_MANT_DIG, 0 },
    { test_pow_932, "cpow", "pow (_Complex char, _Complex unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_pow_933, "cpow", "pow (_Complex char, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_934, "cpow", "pow (_Complex char, _Complex __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_935, "cpow", "pow (_Complex char, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_936, "cpow", "pow (_Complex char, _Complex unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_pow_937, "cpow", "pow (_Complex char, enum e)", DBL_MANT_DIG, 0 },
    { test_pow_938, "cpow", "pow (_Complex char, _Bool)", DBL_MANT_DIG, 0 },
    { test_pow_939, "cpow", "pow (_Complex char, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_pow_940, "pow", "pow (signed char, _Float16)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_pow_941, "cpow", "pow (signed char, __CFLOAT16)", DBL_MANT_DIG, 0 },
#endif
    { test_pow_942, "pow", "pow (signed char, float)", DBL_MANT_DIG, 0 },
    { test_pow_943, "cpow", "pow (signed char, _Complex float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_pow_944, "pow", "pow (signed char, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_pow_945, "cpow", "pow (signed char, __CFLOAT32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_pow_946, "pow", "pow (signed char, _Float32x)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_pow_947, "cpow", "pow (signed char, __CFLOAT32X)", DBL_MANT_DIG, 0 },
#endif
    { test_pow_948, "pow", "pow (signed char, double)", DBL_MANT_DIG, 0 },
    { test_pow_949, "cpow", "pow (signed char, _Complex double)", DBL_MANT_DIG, 0 },
    { test_pow_950, "pow", "pow (signed char, long double)", LDBL_MANT_DIG, 0 },
    { test_pow_951, "cpow", "pow (signed char, _Complex long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_pow_952, "pow", "pow (signed char, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_pow_953, "cpow", "pow (signed char, __CFLOAT64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_pow_954, "pow", "pow (signed char, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_pow_955, "cpow", "pow (signed char, __CFLOAT64X)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_pow_956, "pow", "pow (signed char, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_pow_957, "cpow", "pow (signed char, __CFLOAT128)", FLT128_MANT_DIG, 0 },
#endif
    { test_pow_958, "pow", "pow (signed char, char)", DBL_MANT_DIG, 0 },
    { test_pow_959, "cpow", "pow (signed char, _Complex char)", DBL_MANT_DIG, 0 },
    { test_pow_960, "pow", "pow (signed char, signed char)", DBL_MANT_DIG, 0 },
    { test_pow_961, "cpow", "pow (signed char, _Complex signed char)", DBL_MANT_DIG, 0 },
    { test_pow_962, "pow", "pow (signed char, unsigned char)", DBL_MANT_DIG, 0 },
    { test_pow_963, "cpow", "pow (signed char, _Complex unsigned char)", DBL_MANT_DIG, 0 },
    { test_pow_964, "pow", "pow (signed char, short int)", DBL_MANT_DIG, 0 },
    { test_pow_965, "cpow", "pow (signed char, _Complex short int)", DBL_MANT_DIG, 0 },
    { test_pow_966, "pow", "pow (signed char, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_pow_967, "cpow", "pow (signed char, _Complex unsigned short int)", DBL_MANT_DIG, 0 },
    { test_pow_968, "pow", "pow (signed char, int)", DBL_MANT_DIG, 0 },
    { test_pow_969, "cpow", "pow (signed char, _Complex int)", DBL_MANT_DIG, 0 },
    { test_pow_970, "pow", "pow (signed char, unsigned int)", DBL_MANT_DIG, 0 },
    { test_pow_971, "cpow", "pow (signed char, _Complex unsigned int)", DBL_MANT_DIG, 0 },
    { test_pow_972, "pow", "pow (signed char, long int)", DBL_MANT_DIG, 0 },
    { test_pow_973, "cpow", "pow (signed char, _Complex long int)", DBL_MANT_DIG, 0 },
    { test_pow_974, "pow", "pow (signed char, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_pow_975, "cpow", "pow (signed char, _Complex unsigned long int)", DBL_MANT_DIG, 0 },
    { test_pow_976, "pow", "pow (signed char, long long int)", DBL_MANT_DIG, 0 },
    { test_pow_977, "cpow", "pow (signed char, _Complex long long int)", DBL_MANT_DIG, 0 },
    { test_pow_978, "pow", "pow (signed char, unsigned long long int)", DBL_MANT_DIG, 0 },
    { test_pow_979, "cpow", "pow (signed char, _Complex unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_pow_980, "pow", "pow (signed char, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_981, "cpow", "pow (signed char, _Complex __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_982, "pow", "pow (signed char, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_983, "cpow", "pow (signed char, _Complex unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_pow_984, "pow", "pow (signed char, enum e)", DBL_MANT_DIG, 0 },
    { test_pow_985, "pow", "pow (signed char, _Bool)", DBL_MANT_DIG, 0 },
    { test_pow_986, "pow", "pow (signed char, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_pow_987, "cpow", "pow (_Complex signed char, _Float16)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_pow_988, "cpow", "pow (_Complex signed char, __CFLOAT16)", DBL_MANT_DIG, 0 },
#endif
    { test_pow_989, "cpow", "pow (_Complex signed char, float)", DBL_MANT_DIG, 0 },
    { test_pow_990, "cpow", "pow (_Complex signed char, _Complex float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_pow_991, "cpow", "pow (_Complex signed char, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_pow_992, "cpow", "pow (_Complex signed char, __CFLOAT32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_pow_993, "cpow", "pow (_Complex signed char, _Float32x)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_pow_994, "cpow", "pow (_Complex signed char, __CFLOAT32X)", DBL_MANT_DIG, 0 },
#endif
    { test_pow_995, "cpow", "pow (_Complex signed char, double)", DBL_MANT_DIG, 0 },
    { test_pow_996, "cpow", "pow (_Complex signed char, _Complex double)", DBL_MANT_DIG, 0 },
    { test_pow_997, "cpow", "pow (_Complex signed char, long double)", LDBL_MANT_DIG, 0 },
    { test_pow_998, "cpow", "pow (_Complex signed char, _Complex long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_pow_999, "cpow", "pow (_Complex signed char, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_pow_1000, "cpow", "pow (_Complex signed char, __CFLOAT64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_pow_1001, "cpow", "pow (_Complex signed char, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_pow_1002, "cpow", "pow (_Complex signed char, __CFLOAT64X)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_pow_1003, "cpow", "pow (_Complex signed char, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_pow_1004, "cpow", "pow (_Complex signed char, __CFLOAT128)", FLT128_MANT_DIG, 0 },
#endif
    { test_pow_1005, "cpow", "pow (_Complex signed char, char)", DBL_MANT_DIG, 0 },
    { test_pow_1006, "cpow", "pow (_Complex signed char, _Complex char)", DBL_MANT_DIG, 0 },
    { test_pow_1007, "cpow", "pow (_Complex signed char, signed char)", DBL_MANT_DIG, 0 },
    { test_pow_1008, "cpow", "pow (_Complex signed char, _Complex signed char)", DBL_MANT_DIG, 0 },
    { test_pow_1009, "cpow", "pow (_Complex signed char, unsigned char)", DBL_MANT_DIG, 0 },
    { test_pow_1010, "cpow", "pow (_Complex signed char, _Complex unsigned char)", DBL_MANT_DIG, 0 },
    { test_pow_1011, "cpow", "pow (_Complex signed char, short int)", DBL_MANT_DIG, 0 },
    { test_pow_1012, "cpow", "pow (_Complex signed char, _Complex short int)", DBL_MANT_DIG, 0 },
    { test_pow_1013, "cpow", "pow (_Complex signed char, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_pow_1014, "cpow", "pow (_Complex signed char, _Complex unsigned short int)", DBL_MANT_DIG, 0 },
    { test_pow_1015, "cpow", "pow (_Complex signed char, int)", DBL_MANT_DIG, 0 },
    { test_pow_1016, "cpow", "pow (_Complex signed char, _Complex int)", DBL_MANT_DIG, 0 },
    { test_pow_1017, "cpow", "pow (_Complex signed char, unsigned int)", DBL_MANT_DIG, 0 },
    { test_pow_1018, "cpow", "pow (_Complex signed char, _Complex unsigned int)", DBL_MANT_DIG, 0 },
    { test_pow_1019, "cpow", "pow (_Complex signed char, long int)", DBL_MANT_DIG, 0 },
    { test_pow_1020, "cpow", "pow (_Complex signed char, _Complex long int)", DBL_MANT_DIG, 0 },
    { test_pow_1021, "cpow", "pow (_Complex signed char, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_pow_1022, "cpow", "pow (_Complex signed char, _Complex unsigned long int)", DBL_MANT_DIG, 0 },
    { test_pow_1023, "cpow", "pow (_Complex signed char, long long int)", DBL_MANT_DIG, 0 },
    { test_pow_1024, "cpow", "pow (_Complex signed char, _Complex long long int)", DBL_MANT_DIG, 0 },
    { test_pow_1025, "cpow", "pow (_Complex signed char, unsigned long long int)", DBL_MANT_DIG, 0 },
    { test_pow_1026, "cpow", "pow (_Complex signed char, _Complex unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_pow_1027, "cpow", "pow (_Complex signed char, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1028, "cpow", "pow (_Complex signed char, _Complex __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1029, "cpow", "pow (_Complex signed char, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1030, "cpow", "pow (_Complex signed char, _Complex unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_pow_1031, "cpow", "pow (_Complex signed char, enum e)", DBL_MANT_DIG, 0 },
    { test_pow_1032, "cpow", "pow (_Complex signed char, _Bool)", DBL_MANT_DIG, 0 },
    { test_pow_1033, "cpow", "pow (_Complex signed char, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_pow_1034, "pow", "pow (unsigned char, _Float16)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_pow_1035, "cpow", "pow (unsigned char, __CFLOAT16)", DBL_MANT_DIG, 0 },
#endif
    { test_pow_1036, "pow", "pow (unsigned char, float)", DBL_MANT_DIG, 0 },
    { test_pow_1037, "cpow", "pow (unsigned char, _Complex float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_pow_1038, "pow", "pow (unsigned char, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_pow_1039, "cpow", "pow (unsigned char, __CFLOAT32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_pow_1040, "pow", "pow (unsigned char, _Float32x)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_pow_1041, "cpow", "pow (unsigned char, __CFLOAT32X)", DBL_MANT_DIG, 0 },
#endif
    { test_pow_1042, "pow", "pow (unsigned char, double)", DBL_MANT_DIG, 0 },
    { test_pow_1043, "cpow", "pow (unsigned char, _Complex double)", DBL_MANT_DIG, 0 },
    { test_pow_1044, "pow", "pow (unsigned char, long double)", LDBL_MANT_DIG, 0 },
    { test_pow_1045, "cpow", "pow (unsigned char, _Complex long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_pow_1046, "pow", "pow (unsigned char, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_pow_1047, "cpow", "pow (unsigned char, __CFLOAT64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_pow_1048, "pow", "pow (unsigned char, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_pow_1049, "cpow", "pow (unsigned char, __CFLOAT64X)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_pow_1050, "pow", "pow (unsigned char, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_pow_1051, "cpow", "pow (unsigned char, __CFLOAT128)", FLT128_MANT_DIG, 0 },
#endif
    { test_pow_1052, "pow", "pow (unsigned char, char)", DBL_MANT_DIG, 0 },
    { test_pow_1053, "cpow", "pow (unsigned char, _Complex char)", DBL_MANT_DIG, 0 },
    { test_pow_1054, "pow", "pow (unsigned char, signed char)", DBL_MANT_DIG, 0 },
    { test_pow_1055, "cpow", "pow (unsigned char, _Complex signed char)", DBL_MANT_DIG, 0 },
    { test_pow_1056, "pow", "pow (unsigned char, unsigned char)", DBL_MANT_DIG, 0 },
    { test_pow_1057, "cpow", "pow (unsigned char, _Complex unsigned char)", DBL_MANT_DIG, 0 },
    { test_pow_1058, "pow", "pow (unsigned char, short int)", DBL_MANT_DIG, 0 },
    { test_pow_1059, "cpow", "pow (unsigned char, _Complex short int)", DBL_MANT_DIG, 0 },
    { test_pow_1060, "pow", "pow (unsigned char, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_pow_1061, "cpow", "pow (unsigned char, _Complex unsigned short int)", DBL_MANT_DIG, 0 },
    { test_pow_1062, "pow", "pow (unsigned char, int)", DBL_MANT_DIG, 0 },
    { test_pow_1063, "cpow", "pow (unsigned char, _Complex int)", DBL_MANT_DIG, 0 },
    { test_pow_1064, "pow", "pow (unsigned char, unsigned int)", DBL_MANT_DIG, 0 },
    { test_pow_1065, "cpow", "pow (unsigned char, _Complex unsigned int)", DBL_MANT_DIG, 0 },
    { test_pow_1066, "pow", "pow (unsigned char, long int)", DBL_MANT_DIG, 0 },
    { test_pow_1067, "cpow", "pow (unsigned char, _Complex long int)", DBL_MANT_DIG, 0 },
    { test_pow_1068, "pow", "pow (unsigned char, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_pow_1069, "cpow", "pow (unsigned char, _Complex unsigned long int)", DBL_MANT_DIG, 0 },
    { test_pow_1070, "pow", "pow (unsigned char, long long int)", DBL_MANT_DIG, 0 },
    { test_pow_1071, "cpow", "pow (unsigned char, _Complex long long int)", DBL_MANT_DIG, 0 },
    { test_pow_1072, "pow", "pow (unsigned char, unsigned long long int)", DBL_MANT_DIG, 0 },
    { test_pow_1073, "cpow", "pow (unsigned char, _Complex unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_pow_1074, "pow", "pow (unsigned char, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1075, "cpow", "pow (unsigned char, _Complex __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1076, "pow", "pow (unsigned char, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1077, "cpow", "pow (unsigned char, _Complex unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_pow_1078, "pow", "pow (unsigned char, enum e)", DBL_MANT_DIG, 0 },
    { test_pow_1079, "pow", "pow (unsigned char, _Bool)", DBL_MANT_DIG, 0 },
    { test_pow_1080, "pow", "pow (unsigned char, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_pow_1081, "cpow", "pow (_Complex unsigned char, _Float16)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_pow_1082, "cpow", "pow (_Complex unsigned char, __CFLOAT16)", DBL_MANT_DIG, 0 },
#endif
    { test_pow_1083, "cpow", "pow (_Complex unsigned char, float)", DBL_MANT_DIG, 0 },
    { test_pow_1084, "cpow", "pow (_Complex unsigned char, _Complex float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_pow_1085, "cpow", "pow (_Complex unsigned char, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_pow_1086, "cpow", "pow (_Complex unsigned char, __CFLOAT32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_pow_1087, "cpow", "pow (_Complex unsigned char, _Float32x)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_pow_1088, "cpow", "pow (_Complex unsigned char, __CFLOAT32X)", DBL_MANT_DIG, 0 },
#endif
    { test_pow_1089, "cpow", "pow (_Complex unsigned char, double)", DBL_MANT_DIG, 0 },
    { test_pow_1090, "cpow", "pow (_Complex unsigned char, _Complex double)", DBL_MANT_DIG, 0 },
    { test_pow_1091, "cpow", "pow (_Complex unsigned char, long double)", LDBL_MANT_DIG, 0 },
    { test_pow_1092, "cpow", "pow (_Complex unsigned char, _Complex long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_pow_1093, "cpow", "pow (_Complex unsigned char, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_pow_1094, "cpow", "pow (_Complex unsigned char, __CFLOAT64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_pow_1095, "cpow", "pow (_Complex unsigned char, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_pow_1096, "cpow", "pow (_Complex unsigned char, __CFLOAT64X)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_pow_1097, "cpow", "pow (_Complex unsigned char, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_pow_1098, "cpow", "pow (_Complex unsigned char, __CFLOAT128)", FLT128_MANT_DIG, 0 },
#endif
    { test_pow_1099, "cpow", "pow (_Complex unsigned char, char)", DBL_MANT_DIG, 0 },
    { test_pow_1100, "cpow", "pow (_Complex unsigned char, _Complex char)", DBL_MANT_DIG, 0 },
    { test_pow_1101, "cpow", "pow (_Complex unsigned char, signed char)", DBL_MANT_DIG, 0 },
    { test_pow_1102, "cpow", "pow (_Complex unsigned char, _Complex signed char)", DBL_MANT_DIG, 0 },
    { test_pow_1103, "cpow", "pow (_Complex unsigned char, unsigned char)", DBL_MANT_DIG, 0 },
    { test_pow_1104, "cpow", "pow (_Complex unsigned char, _Complex unsigned char)", DBL_MANT_DIG, 0 },
    { test_pow_1105, "cpow", "pow (_Complex unsigned char, short int)", DBL_MANT_DIG, 0 },
    { test_pow_1106, "cpow", "pow (_Complex unsigned char, _Complex short int)", DBL_MANT_DIG, 0 },
    { test_pow_1107, "cpow", "pow (_Complex unsigned char, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_pow_1108, "cpow", "pow (_Complex unsigned char, _Complex unsigned short int)", DBL_MANT_DIG, 0 },
    { test_pow_1109, "cpow", "pow (_Complex unsigned char, int)", DBL_MANT_DIG, 0 },
    { test_pow_1110, "cpow", "pow (_Complex unsigned char, _Complex int)", DBL_MANT_DIG, 0 },
    { test_pow_1111, "cpow", "pow (_Complex unsigned char, unsigned int)", DBL_MANT_DIG, 0 },
    { test_pow_1112, "cpow", "pow (_Complex unsigned char, _Complex unsigned int)", DBL_MANT_DIG, 0 },
    { test_pow_1113, "cpow", "pow (_Complex unsigned char, long int)", DBL_MANT_DIG, 0 },
    { test_pow_1114, "cpow", "pow (_Complex unsigned char, _Complex long int)", DBL_MANT_DIG, 0 },
    { test_pow_1115, "cpow", "pow (_Complex unsigned char, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_pow_1116, "cpow", "pow (_Complex unsigned char, _Complex unsigned long int)", DBL_MANT_DIG, 0 },
    { test_pow_1117, "cpow", "pow (_Complex unsigned char, long long int)", DBL_MANT_DIG, 0 },
    { test_pow_1118, "cpow", "pow (_Complex unsigned char, _Complex long long int)", DBL_MANT_DIG, 0 },
    { test_pow_1119, "cpow", "pow (_Complex unsigned char, unsigned long long int)", DBL_MANT_DIG, 0 },
    { test_pow_1120, "cpow", "pow (_Complex unsigned char, _Complex unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_pow_1121, "cpow", "pow (_Complex unsigned char, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1122, "cpow", "pow (_Complex unsigned char, _Complex __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1123, "cpow", "pow (_Complex unsigned char, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1124, "cpow", "pow (_Complex unsigned char, _Complex unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_pow_1125, "cpow", "pow (_Complex unsigned char, enum e)", DBL_MANT_DIG, 0 },
    { test_pow_1126, "cpow", "pow (_Complex unsigned char, _Bool)", DBL_MANT_DIG, 0 },
    { test_pow_1127, "cpow", "pow (_Complex unsigned char, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_pow_1128, "pow", "pow (short int, _Float16)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_pow_1129, "cpow", "pow (short int, __CFLOAT16)", DBL_MANT_DIG, 0 },
#endif
    { test_pow_1130, "pow", "pow (short int, float)", DBL_MANT_DIG, 0 },
    { test_pow_1131, "cpow", "pow (short int, _Complex float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_pow_1132, "pow", "pow (short int, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_pow_1133, "cpow", "pow (short int, __CFLOAT32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_pow_1134, "pow", "pow (short int, _Float32x)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_pow_1135, "cpow", "pow (short int, __CFLOAT32X)", DBL_MANT_DIG, 0 },
#endif
    { test_pow_1136, "pow", "pow (short int, double)", DBL_MANT_DIG, 0 },
    { test_pow_1137, "cpow", "pow (short int, _Complex double)", DBL_MANT_DIG, 0 },
    { test_pow_1138, "pow", "pow (short int, long double)", LDBL_MANT_DIG, 0 },
    { test_pow_1139, "cpow", "pow (short int, _Complex long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_pow_1140, "pow", "pow (short int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_pow_1141, "cpow", "pow (short int, __CFLOAT64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_pow_1142, "pow", "pow (short int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_pow_1143, "cpow", "pow (short int, __CFLOAT64X)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_pow_1144, "pow", "pow (short int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_pow_1145, "cpow", "pow (short int, __CFLOAT128)", FLT128_MANT_DIG, 0 },
#endif
    { test_pow_1146, "pow", "pow (short int, char)", DBL_MANT_DIG, 0 },
    { test_pow_1147, "cpow", "pow (short int, _Complex char)", DBL_MANT_DIG, 0 },
    { test_pow_1148, "pow", "pow (short int, signed char)", DBL_MANT_DIG, 0 },
    { test_pow_1149, "cpow", "pow (short int, _Complex signed char)", DBL_MANT_DIG, 0 },
    { test_pow_1150, "pow", "pow (short int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_pow_1151, "cpow", "pow (short int, _Complex unsigned char)", DBL_MANT_DIG, 0 },
    { test_pow_1152, "pow", "pow (short int, short int)", DBL_MANT_DIG, 0 },
    { test_pow_1153, "cpow", "pow (short int, _Complex short int)", DBL_MANT_DIG, 0 },
    { test_pow_1154, "pow", "pow (short int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_pow_1155, "cpow", "pow (short int, _Complex unsigned short int)", DBL_MANT_DIG, 0 },
    { test_pow_1156, "pow", "pow (short int, int)", DBL_MANT_DIG, 0 },
    { test_pow_1157, "cpow", "pow (short int, _Complex int)", DBL_MANT_DIG, 0 },
    { test_pow_1158, "pow", "pow (short int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_pow_1159, "cpow", "pow (short int, _Complex unsigned int)", DBL_MANT_DIG, 0 },
    { test_pow_1160, "pow", "pow (short int, long int)", DBL_MANT_DIG, 0 },
    { test_pow_1161, "cpow", "pow (short int, _Complex long int)", DBL_MANT_DIG, 0 },
    { test_pow_1162, "pow", "pow (short int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_pow_1163, "cpow", "pow (short int, _Complex unsigned long int)", DBL_MANT_DIG, 0 },
    { test_pow_1164, "pow", "pow (short int, long long int)", DBL_MANT_DIG, 0 },
    { test_pow_1165, "cpow", "pow (short int, _Complex long long int)", DBL_MANT_DIG, 0 },
    { test_pow_1166, "pow", "pow (short int, unsigned long long int)", DBL_MANT_DIG, 0 },
    { test_pow_1167, "cpow", "pow (short int, _Complex unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_pow_1168, "pow", "pow (short int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1169, "cpow", "pow (short int, _Complex __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1170, "pow", "pow (short int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1171, "cpow", "pow (short int, _Complex unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_pow_1172, "pow", "pow (short int, enum e)", DBL_MANT_DIG, 0 },
    { test_pow_1173, "pow", "pow (short int, _Bool)", DBL_MANT_DIG, 0 },
    { test_pow_1174, "pow", "pow (short int, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_pow_1175, "cpow", "pow (_Complex short int, _Float16)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_pow_1176, "cpow", "pow (_Complex short int, __CFLOAT16)", DBL_MANT_DIG, 0 },
#endif
    { test_pow_1177, "cpow", "pow (_Complex short int, float)", DBL_MANT_DIG, 0 },
    { test_pow_1178, "cpow", "pow (_Complex short int, _Complex float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_pow_1179, "cpow", "pow (_Complex short int, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_pow_1180, "cpow", "pow (_Complex short int, __CFLOAT32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_pow_1181, "cpow", "pow (_Complex short int, _Float32x)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_pow_1182, "cpow", "pow (_Complex short int, __CFLOAT32X)", DBL_MANT_DIG, 0 },
#endif
    { test_pow_1183, "cpow", "pow (_Complex short int, double)", DBL_MANT_DIG, 0 },
    { test_pow_1184, "cpow", "pow (_Complex short int, _Complex double)", DBL_MANT_DIG, 0 },
    { test_pow_1185, "cpow", "pow (_Complex short int, long double)", LDBL_MANT_DIG, 0 },
    { test_pow_1186, "cpow", "pow (_Complex short int, _Complex long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_pow_1187, "cpow", "pow (_Complex short int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_pow_1188, "cpow", "pow (_Complex short int, __CFLOAT64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_pow_1189, "cpow", "pow (_Complex short int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_pow_1190, "cpow", "pow (_Complex short int, __CFLOAT64X)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_pow_1191, "cpow", "pow (_Complex short int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_pow_1192, "cpow", "pow (_Complex short int, __CFLOAT128)", FLT128_MANT_DIG, 0 },
#endif
    { test_pow_1193, "cpow", "pow (_Complex short int, char)", DBL_MANT_DIG, 0 },
    { test_pow_1194, "cpow", "pow (_Complex short int, _Complex char)", DBL_MANT_DIG, 0 },
    { test_pow_1195, "cpow", "pow (_Complex short int, signed char)", DBL_MANT_DIG, 0 },
    { test_pow_1196, "cpow", "pow (_Complex short int, _Complex signed char)", DBL_MANT_DIG, 0 },
    { test_pow_1197, "cpow", "pow (_Complex short int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_pow_1198, "cpow", "pow (_Complex short int, _Complex unsigned char)", DBL_MANT_DIG, 0 },
    { test_pow_1199, "cpow", "pow (_Complex short int, short int)", DBL_MANT_DIG, 0 },
    { test_pow_1200, "cpow", "pow (_Complex short int, _Complex short int)", DBL_MANT_DIG, 0 },
    { test_pow_1201, "cpow", "pow (_Complex short int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_pow_1202, "cpow", "pow (_Complex short int, _Complex unsigned short int)", DBL_MANT_DIG, 0 },
    { test_pow_1203, "cpow", "pow (_Complex short int, int)", DBL_MANT_DIG, 0 },
    { test_pow_1204, "cpow", "pow (_Complex short int, _Complex int)", DBL_MANT_DIG, 0 },
    { test_pow_1205, "cpow", "pow (_Complex short int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_pow_1206, "cpow", "pow (_Complex short int, _Complex unsigned int)", DBL_MANT_DIG, 0 },
    { test_pow_1207, "cpow", "pow (_Complex short int, long int)", DBL_MANT_DIG, 0 },
    { test_pow_1208, "cpow", "pow (_Complex short int, _Complex long int)", DBL_MANT_DIG, 0 },
    { test_pow_1209, "cpow", "pow (_Complex short int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_pow_1210, "cpow", "pow (_Complex short int, _Complex unsigned long int)", DBL_MANT_DIG, 0 },
    { test_pow_1211, "cpow", "pow (_Complex short int, long long int)", DBL_MANT_DIG, 0 },
    { test_pow_1212, "cpow", "pow (_Complex short int, _Complex long long int)", DBL_MANT_DIG, 0 },
    { test_pow_1213, "cpow", "pow (_Complex short int, unsigned long long int)", DBL_MANT_DIG, 0 },
    { test_pow_1214, "cpow", "pow (_Complex short int, _Complex unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_pow_1215, "cpow", "pow (_Complex short int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1216, "cpow", "pow (_Complex short int, _Complex __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1217, "cpow", "pow (_Complex short int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1218, "cpow", "pow (_Complex short int, _Complex unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_pow_1219, "cpow", "pow (_Complex short int, enum e)", DBL_MANT_DIG, 0 },
    { test_pow_1220, "cpow", "pow (_Complex short int, _Bool)", DBL_MANT_DIG, 0 },
    { test_pow_1221, "cpow", "pow (_Complex short int, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_pow_1222, "pow", "pow (unsigned short int, _Float16)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_pow_1223, "cpow", "pow (unsigned short int, __CFLOAT16)", DBL_MANT_DIG, 0 },
#endif
    { test_pow_1224, "pow", "pow (unsigned short int, float)", DBL_MANT_DIG, 0 },
    { test_pow_1225, "cpow", "pow (unsigned short int, _Complex float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_pow_1226, "pow", "pow (unsigned short int, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_pow_1227, "cpow", "pow (unsigned short int, __CFLOAT32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_pow_1228, "pow", "pow (unsigned short int, _Float32x)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_pow_1229, "cpow", "pow (unsigned short int, __CFLOAT32X)", DBL_MANT_DIG, 0 },
#endif
    { test_pow_1230, "pow", "pow (unsigned short int, double)", DBL_MANT_DIG, 0 },
    { test_pow_1231, "cpow", "pow (unsigned short int, _Complex double)", DBL_MANT_DIG, 0 },
    { test_pow_1232, "pow", "pow (unsigned short int, long double)", LDBL_MANT_DIG, 0 },
    { test_pow_1233, "cpow", "pow (unsigned short int, _Complex long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_pow_1234, "pow", "pow (unsigned short int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_pow_1235, "cpow", "pow (unsigned short int, __CFLOAT64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_pow_1236, "pow", "pow (unsigned short int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_pow_1237, "cpow", "pow (unsigned short int, __CFLOAT64X)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_pow_1238, "pow", "pow (unsigned short int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_pow_1239, "cpow", "pow (unsigned short int, __CFLOAT128)", FLT128_MANT_DIG, 0 },
#endif
    { test_pow_1240, "pow", "pow (unsigned short int, char)", DBL_MANT_DIG, 0 },
    { test_pow_1241, "cpow", "pow (unsigned short int, _Complex char)", DBL_MANT_DIG, 0 },
    { test_pow_1242, "pow", "pow (unsigned short int, signed char)", DBL_MANT_DIG, 0 },
    { test_pow_1243, "cpow", "pow (unsigned short int, _Complex signed char)", DBL_MANT_DIG, 0 },
    { test_pow_1244, "pow", "pow (unsigned short int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_pow_1245, "cpow", "pow (unsigned short int, _Complex unsigned char)", DBL_MANT_DIG, 0 },
    { test_pow_1246, "pow", "pow (unsigned short int, short int)", DBL_MANT_DIG, 0 },
    { test_pow_1247, "cpow", "pow (unsigned short int, _Complex short int)", DBL_MANT_DIG, 0 },
    { test_pow_1248, "pow", "pow (unsigned short int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_pow_1249, "cpow", "pow (unsigned short int, _Complex unsigned short int)", DBL_MANT_DIG, 0 },
    { test_pow_1250, "pow", "pow (unsigned short int, int)", DBL_MANT_DIG, 0 },
    { test_pow_1251, "cpow", "pow (unsigned short int, _Complex int)", DBL_MANT_DIG, 0 },
    { test_pow_1252, "pow", "pow (unsigned short int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_pow_1253, "cpow", "pow (unsigned short int, _Complex unsigned int)", DBL_MANT_DIG, 0 },
    { test_pow_1254, "pow", "pow (unsigned short int, long int)", DBL_MANT_DIG, 0 },
    { test_pow_1255, "cpow", "pow (unsigned short int, _Complex long int)", DBL_MANT_DIG, 0 },
    { test_pow_1256, "pow", "pow (unsigned short int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_pow_1257, "cpow", "pow (unsigned short int, _Complex unsigned long int)", DBL_MANT_DIG, 0 },
    { test_pow_1258, "pow", "pow (unsigned short int, long long int)", DBL_MANT_DIG, 0 },
    { test_pow_1259, "cpow", "pow (unsigned short int, _Complex long long int)", DBL_MANT_DIG, 0 },
    { test_pow_1260, "pow", "pow (unsigned short int, unsigned long long int)", DBL_MANT_DIG, 0 },
    { test_pow_1261, "cpow", "pow (unsigned short int, _Complex unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_pow_1262, "pow", "pow (unsigned short int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1263, "cpow", "pow (unsigned short int, _Complex __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1264, "pow", "pow (unsigned short int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1265, "cpow", "pow (unsigned short int, _Complex unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_pow_1266, "pow", "pow (unsigned short int, enum e)", DBL_MANT_DIG, 0 },
    { test_pow_1267, "pow", "pow (unsigned short int, _Bool)", DBL_MANT_DIG, 0 },
    { test_pow_1268, "pow", "pow (unsigned short int, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_pow_1269, "cpow", "pow (_Complex unsigned short int, _Float16)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_pow_1270, "cpow", "pow (_Complex unsigned short int, __CFLOAT16)", DBL_MANT_DIG, 0 },
#endif
    { test_pow_1271, "cpow", "pow (_Complex unsigned short int, float)", DBL_MANT_DIG, 0 },
    { test_pow_1272, "cpow", "pow (_Complex unsigned short int, _Complex float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_pow_1273, "cpow", "pow (_Complex unsigned short int, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_pow_1274, "cpow", "pow (_Complex unsigned short int, __CFLOAT32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_pow_1275, "cpow", "pow (_Complex unsigned short int, _Float32x)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_pow_1276, "cpow", "pow (_Complex unsigned short int, __CFLOAT32X)", DBL_MANT_DIG, 0 },
#endif
    { test_pow_1277, "cpow", "pow (_Complex unsigned short int, double)", DBL_MANT_DIG, 0 },
    { test_pow_1278, "cpow", "pow (_Complex unsigned short int, _Complex double)", DBL_MANT_DIG, 0 },
    { test_pow_1279, "cpow", "pow (_Complex unsigned short int, long double)", LDBL_MANT_DIG, 0 },
    { test_pow_1280, "cpow", "pow (_Complex unsigned short int, _Complex long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_pow_1281, "cpow", "pow (_Complex unsigned short int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_pow_1282, "cpow", "pow (_Complex unsigned short int, __CFLOAT64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_pow_1283, "cpow", "pow (_Complex unsigned short int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_pow_1284, "cpow", "pow (_Complex unsigned short int, __CFLOAT64X)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_pow_1285, "cpow", "pow (_Complex unsigned short int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_pow_1286, "cpow", "pow (_Complex unsigned short int, __CFLOAT128)", FLT128_MANT_DIG, 0 },
#endif
    { test_pow_1287, "cpow", "pow (_Complex unsigned short int, char)", DBL_MANT_DIG, 0 },
    { test_pow_1288, "cpow", "pow (_Complex unsigned short int, _Complex char)", DBL_MANT_DIG, 0 },
    { test_pow_1289, "cpow", "pow (_Complex unsigned short int, signed char)", DBL_MANT_DIG, 0 },
    { test_pow_1290, "cpow", "pow (_Complex unsigned short int, _Complex signed char)", DBL_MANT_DIG, 0 },
    { test_pow_1291, "cpow", "pow (_Complex unsigned short int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_pow_1292, "cpow", "pow (_Complex unsigned short int, _Complex unsigned char)", DBL_MANT_DIG, 0 },
    { test_pow_1293, "cpow", "pow (_Complex unsigned short int, short int)", DBL_MANT_DIG, 0 },
    { test_pow_1294, "cpow", "pow (_Complex unsigned short int, _Complex short int)", DBL_MANT_DIG, 0 },
    { test_pow_1295, "cpow", "pow (_Complex unsigned short int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_pow_1296, "cpow", "pow (_Complex unsigned short int, _Complex unsigned short int)", DBL_MANT_DIG, 0 },
    { test_pow_1297, "cpow", "pow (_Complex unsigned short int, int)", DBL_MANT_DIG, 0 },
    { test_pow_1298, "cpow", "pow (_Complex unsigned short int, _Complex int)", DBL_MANT_DIG, 0 },
    { test_pow_1299, "cpow", "pow (_Complex unsigned short int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_pow_1300, "cpow", "pow (_Complex unsigned short int, _Complex unsigned int)", DBL_MANT_DIG, 0 },
    { test_pow_1301, "cpow", "pow (_Complex unsigned short int, long int)", DBL_MANT_DIG, 0 },
    { test_pow_1302, "cpow", "pow (_Complex unsigned short int, _Complex long int)", DBL_MANT_DIG, 0 },
    { test_pow_1303, "cpow", "pow (_Complex unsigned short int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_pow_1304, "cpow", "pow (_Complex unsigned short int, _Complex unsigned long int)", DBL_MANT_DIG, 0 },
    { test_pow_1305, "cpow", "pow (_Complex unsigned short int, long long int)", DBL_MANT_DIG, 0 },
    { test_pow_1306, "cpow", "pow (_Complex unsigned short int, _Complex long long int)", DBL_MANT_DIG, 0 },
    { test_pow_1307, "cpow", "pow (_Complex unsigned short int, unsigned long long int)", DBL_MANT_DIG, 0 },
    { test_pow_1308, "cpow", "pow (_Complex unsigned short int, _Complex unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_pow_1309, "cpow", "pow (_Complex unsigned short int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1310, "cpow", "pow (_Complex unsigned short int, _Complex __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1311, "cpow", "pow (_Complex unsigned short int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1312, "cpow", "pow (_Complex unsigned short int, _Complex unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_pow_1313, "cpow", "pow (_Complex unsigned short int, enum e)", DBL_MANT_DIG, 0 },
    { test_pow_1314, "cpow", "pow (_Complex unsigned short int, _Bool)", DBL_MANT_DIG, 0 },
    { test_pow_1315, "cpow", "pow (_Complex unsigned short int, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_pow_1316, "pow", "pow (int, _Float16)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_pow_1317, "cpow", "pow (int, __CFLOAT16)", DBL_MANT_DIG, 0 },
#endif
    { test_pow_1318, "pow", "pow (int, float)", DBL_MANT_DIG, 0 },
    { test_pow_1319, "cpow", "pow (int, _Complex float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_pow_1320, "pow", "pow (int, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_pow_1321, "cpow", "pow (int, __CFLOAT32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_pow_1322, "pow", "pow (int, _Float32x)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_pow_1323, "cpow", "pow (int, __CFLOAT32X)", DBL_MANT_DIG, 0 },
#endif
    { test_pow_1324, "pow", "pow (int, double)", DBL_MANT_DIG, 0 },
    { test_pow_1325, "cpow", "pow (int, _Complex double)", DBL_MANT_DIG, 0 },
    { test_pow_1326, "pow", "pow (int, long double)", LDBL_MANT_DIG, 0 },
    { test_pow_1327, "cpow", "pow (int, _Complex long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_pow_1328, "pow", "pow (int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_pow_1329, "cpow", "pow (int, __CFLOAT64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_pow_1330, "pow", "pow (int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_pow_1331, "cpow", "pow (int, __CFLOAT64X)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_pow_1332, "pow", "pow (int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_pow_1333, "cpow", "pow (int, __CFLOAT128)", FLT128_MANT_DIG, 0 },
#endif
    { test_pow_1334, "pow", "pow (int, char)", DBL_MANT_DIG, 0 },
    { test_pow_1335, "cpow", "pow (int, _Complex char)", DBL_MANT_DIG, 0 },
    { test_pow_1336, "pow", "pow (int, signed char)", DBL_MANT_DIG, 0 },
    { test_pow_1337, "cpow", "pow (int, _Complex signed char)", DBL_MANT_DIG, 0 },
    { test_pow_1338, "pow", "pow (int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_pow_1339, "cpow", "pow (int, _Complex unsigned char)", DBL_MANT_DIG, 0 },
    { test_pow_1340, "pow", "pow (int, short int)", DBL_MANT_DIG, 0 },
    { test_pow_1341, "cpow", "pow (int, _Complex short int)", DBL_MANT_DIG, 0 },
    { test_pow_1342, "pow", "pow (int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_pow_1343, "cpow", "pow (int, _Complex unsigned short int)", DBL_MANT_DIG, 0 },
    { test_pow_1344, "pow", "pow (int, int)", DBL_MANT_DIG, 0 },
    { test_pow_1345, "cpow", "pow (int, _Complex int)", DBL_MANT_DIG, 0 },
    { test_pow_1346, "pow", "pow (int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_pow_1347, "cpow", "pow (int, _Complex unsigned int)", DBL_MANT_DIG, 0 },
    { test_pow_1348, "pow", "pow (int, long int)", DBL_MANT_DIG, 0 },
    { test_pow_1349, "cpow", "pow (int, _Complex long int)", DBL_MANT_DIG, 0 },
    { test_pow_1350, "pow", "pow (int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_pow_1351, "cpow", "pow (int, _Complex unsigned long int)", DBL_MANT_DIG, 0 },
    { test_pow_1352, "pow", "pow (int, long long int)", DBL_MANT_DIG, 0 },
    { test_pow_1353, "cpow", "pow (int, _Complex long long int)", DBL_MANT_DIG, 0 },
    { test_pow_1354, "pow", "pow (int, unsigned long long int)", DBL_MANT_DIG, 0 },
    { test_pow_1355, "cpow", "pow (int, _Complex unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_pow_1356, "pow", "pow (int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1357, "cpow", "pow (int, _Complex __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1358, "pow", "pow (int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1359, "cpow", "pow (int, _Complex unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_pow_1360, "pow", "pow (int, enum e)", DBL_MANT_DIG, 0 },
    { test_pow_1361, "pow", "pow (int, _Bool)", DBL_MANT_DIG, 0 },
    { test_pow_1362, "pow", "pow (int, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_pow_1363, "cpow", "pow (_Complex int, _Float16)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_pow_1364, "cpow", "pow (_Complex int, __CFLOAT16)", DBL_MANT_DIG, 0 },
#endif
    { test_pow_1365, "cpow", "pow (_Complex int, float)", DBL_MANT_DIG, 0 },
    { test_pow_1366, "cpow", "pow (_Complex int, _Complex float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_pow_1367, "cpow", "pow (_Complex int, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_pow_1368, "cpow", "pow (_Complex int, __CFLOAT32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_pow_1369, "cpow", "pow (_Complex int, _Float32x)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_pow_1370, "cpow", "pow (_Complex int, __CFLOAT32X)", DBL_MANT_DIG, 0 },
#endif
    { test_pow_1371, "cpow", "pow (_Complex int, double)", DBL_MANT_DIG, 0 },
    { test_pow_1372, "cpow", "pow (_Complex int, _Complex double)", DBL_MANT_DIG, 0 },
    { test_pow_1373, "cpow", "pow (_Complex int, long double)", LDBL_MANT_DIG, 0 },
    { test_pow_1374, "cpow", "pow (_Complex int, _Complex long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_pow_1375, "cpow", "pow (_Complex int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_pow_1376, "cpow", "pow (_Complex int, __CFLOAT64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_pow_1377, "cpow", "pow (_Complex int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_pow_1378, "cpow", "pow (_Complex int, __CFLOAT64X)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_pow_1379, "cpow", "pow (_Complex int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_pow_1380, "cpow", "pow (_Complex int, __CFLOAT128)", FLT128_MANT_DIG, 0 },
#endif
    { test_pow_1381, "cpow", "pow (_Complex int, char)", DBL_MANT_DIG, 0 },
    { test_pow_1382, "cpow", "pow (_Complex int, _Complex char)", DBL_MANT_DIG, 0 },
    { test_pow_1383, "cpow", "pow (_Complex int, signed char)", DBL_MANT_DIG, 0 },
    { test_pow_1384, "cpow", "pow (_Complex int, _Complex signed char)", DBL_MANT_DIG, 0 },
    { test_pow_1385, "cpow", "pow (_Complex int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_pow_1386, "cpow", "pow (_Complex int, _Complex unsigned char)", DBL_MANT_DIG, 0 },
    { test_pow_1387, "cpow", "pow (_Complex int, short int)", DBL_MANT_DIG, 0 },
    { test_pow_1388, "cpow", "pow (_Complex int, _Complex short int)", DBL_MANT_DIG, 0 },
    { test_pow_1389, "cpow", "pow (_Complex int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_pow_1390, "cpow", "pow (_Complex int, _Complex unsigned short int)", DBL_MANT_DIG, 0 },
    { test_pow_1391, "cpow", "pow (_Complex int, int)", DBL_MANT_DIG, 0 },
    { test_pow_1392, "cpow", "pow (_Complex int, _Complex int)", DBL_MANT_DIG, 0 },
    { test_pow_1393, "cpow", "pow (_Complex int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_pow_1394, "cpow", "pow (_Complex int, _Complex unsigned int)", DBL_MANT_DIG, 0 },
    { test_pow_1395, "cpow", "pow (_Complex int, long int)", DBL_MANT_DIG, 0 },
    { test_pow_1396, "cpow", "pow (_Complex int, _Complex long int)", DBL_MANT_DIG, 0 },
    { test_pow_1397, "cpow", "pow (_Complex int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_pow_1398, "cpow", "pow (_Complex int, _Complex unsigned long int)", DBL_MANT_DIG, 0 },
    { test_pow_1399, "cpow", "pow (_Complex int, long long int)", DBL_MANT_DIG, 0 },
    { test_pow_1400, "cpow", "pow (_Complex int, _Complex long long int)", DBL_MANT_DIG, 0 },
    { test_pow_1401, "cpow", "pow (_Complex int, unsigned long long int)", DBL_MANT_DIG, 0 },
    { test_pow_1402, "cpow", "pow (_Complex int, _Complex unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_pow_1403, "cpow", "pow (_Complex int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1404, "cpow", "pow (_Complex int, _Complex __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1405, "cpow", "pow (_Complex int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1406, "cpow", "pow (_Complex int, _Complex unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_pow_1407, "cpow", "pow (_Complex int, enum e)", DBL_MANT_DIG, 0 },
    { test_pow_1408, "cpow", "pow (_Complex int, _Bool)", DBL_MANT_DIG, 0 },
    { test_pow_1409, "cpow", "pow (_Complex int, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_pow_1410, "pow", "pow (unsigned int, _Float16)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_pow_1411, "cpow", "pow (unsigned int, __CFLOAT16)", DBL_MANT_DIG, 0 },
#endif
    { test_pow_1412, "pow", "pow (unsigned int, float)", DBL_MANT_DIG, 0 },
    { test_pow_1413, "cpow", "pow (unsigned int, _Complex float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_pow_1414, "pow", "pow (unsigned int, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_pow_1415, "cpow", "pow (unsigned int, __CFLOAT32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_pow_1416, "pow", "pow (unsigned int, _Float32x)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_pow_1417, "cpow", "pow (unsigned int, __CFLOAT32X)", DBL_MANT_DIG, 0 },
#endif
    { test_pow_1418, "pow", "pow (unsigned int, double)", DBL_MANT_DIG, 0 },
    { test_pow_1419, "cpow", "pow (unsigned int, _Complex double)", DBL_MANT_DIG, 0 },
    { test_pow_1420, "pow", "pow (unsigned int, long double)", LDBL_MANT_DIG, 0 },
    { test_pow_1421, "cpow", "pow (unsigned int, _Complex long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_pow_1422, "pow", "pow (unsigned int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_pow_1423, "cpow", "pow (unsigned int, __CFLOAT64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_pow_1424, "pow", "pow (unsigned int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_pow_1425, "cpow", "pow (unsigned int, __CFLOAT64X)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_pow_1426, "pow", "pow (unsigned int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_pow_1427, "cpow", "pow (unsigned int, __CFLOAT128)", FLT128_MANT_DIG, 0 },
#endif
    { test_pow_1428, "pow", "pow (unsigned int, char)", DBL_MANT_DIG, 0 },
    { test_pow_1429, "cpow", "pow (unsigned int, _Complex char)", DBL_MANT_DIG, 0 },
    { test_pow_1430, "pow", "pow (unsigned int, signed char)", DBL_MANT_DIG, 0 },
    { test_pow_1431, "cpow", "pow (unsigned int, _Complex signed char)", DBL_MANT_DIG, 0 },
    { test_pow_1432, "pow", "pow (unsigned int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_pow_1433, "cpow", "pow (unsigned int, _Complex unsigned char)", DBL_MANT_DIG, 0 },
    { test_pow_1434, "pow", "pow (unsigned int, short int)", DBL_MANT_DIG, 0 },
    { test_pow_1435, "cpow", "pow (unsigned int, _Complex short int)", DBL_MANT_DIG, 0 },
    { test_pow_1436, "pow", "pow (unsigned int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_pow_1437, "cpow", "pow (unsigned int, _Complex unsigned short int)", DBL_MANT_DIG, 0 },
    { test_pow_1438, "pow", "pow (unsigned int, int)", DBL_MANT_DIG, 0 },
    { test_pow_1439, "cpow", "pow (unsigned int, _Complex int)", DBL_MANT_DIG, 0 },
    { test_pow_1440, "pow", "pow (unsigned int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_pow_1441, "cpow", "pow (unsigned int, _Complex unsigned int)", DBL_MANT_DIG, 0 },
    { test_pow_1442, "pow", "pow (unsigned int, long int)", DBL_MANT_DIG, 0 },
    { test_pow_1443, "cpow", "pow (unsigned int, _Complex long int)", DBL_MANT_DIG, 0 },
    { test_pow_1444, "pow", "pow (unsigned int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_pow_1445, "cpow", "pow (unsigned int, _Complex unsigned long int)", DBL_MANT_DIG, 0 },
    { test_pow_1446, "pow", "pow (unsigned int, long long int)", DBL_MANT_DIG, 0 },
    { test_pow_1447, "cpow", "pow (unsigned int, _Complex long long int)", DBL_MANT_DIG, 0 },
    { test_pow_1448, "pow", "pow (unsigned int, unsigned long long int)", DBL_MANT_DIG, 0 },
    { test_pow_1449, "cpow", "pow (unsigned int, _Complex unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_pow_1450, "pow", "pow (unsigned int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1451, "cpow", "pow (unsigned int, _Complex __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1452, "pow", "pow (unsigned int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1453, "cpow", "pow (unsigned int, _Complex unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_pow_1454, "pow", "pow (unsigned int, enum e)", DBL_MANT_DIG, 0 },
    { test_pow_1455, "pow", "pow (unsigned int, _Bool)", DBL_MANT_DIG, 0 },
    { test_pow_1456, "pow", "pow (unsigned int, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_pow_1457, "cpow", "pow (_Complex unsigned int, _Float16)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_pow_1458, "cpow", "pow (_Complex unsigned int, __CFLOAT16)", DBL_MANT_DIG, 0 },
#endif
    { test_pow_1459, "cpow", "pow (_Complex unsigned int, float)", DBL_MANT_DIG, 0 },
    { test_pow_1460, "cpow", "pow (_Complex unsigned int, _Complex float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_pow_1461, "cpow", "pow (_Complex unsigned int, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_pow_1462, "cpow", "pow (_Complex unsigned int, __CFLOAT32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_pow_1463, "cpow", "pow (_Complex unsigned int, _Float32x)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_pow_1464, "cpow", "pow (_Complex unsigned int, __CFLOAT32X)", DBL_MANT_DIG, 0 },
#endif
    { test_pow_1465, "cpow", "pow (_Complex unsigned int, double)", DBL_MANT_DIG, 0 },
    { test_pow_1466, "cpow", "pow (_Complex unsigned int, _Complex double)", DBL_MANT_DIG, 0 },
    { test_pow_1467, "cpow", "pow (_Complex unsigned int, long double)", LDBL_MANT_DIG, 0 },
    { test_pow_1468, "cpow", "pow (_Complex unsigned int, _Complex long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_pow_1469, "cpow", "pow (_Complex unsigned int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_pow_1470, "cpow", "pow (_Complex unsigned int, __CFLOAT64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_pow_1471, "cpow", "pow (_Complex unsigned int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_pow_1472, "cpow", "pow (_Complex unsigned int, __CFLOAT64X)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_pow_1473, "cpow", "pow (_Complex unsigned int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_pow_1474, "cpow", "pow (_Complex unsigned int, __CFLOAT128)", FLT128_MANT_DIG, 0 },
#endif
    { test_pow_1475, "cpow", "pow (_Complex unsigned int, char)", DBL_MANT_DIG, 0 },
    { test_pow_1476, "cpow", "pow (_Complex unsigned int, _Complex char)", DBL_MANT_DIG, 0 },
    { test_pow_1477, "cpow", "pow (_Complex unsigned int, signed char)", DBL_MANT_DIG, 0 },
    { test_pow_1478, "cpow", "pow (_Complex unsigned int, _Complex signed char)", DBL_MANT_DIG, 0 },
    { test_pow_1479, "cpow", "pow (_Complex unsigned int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_pow_1480, "cpow", "pow (_Complex unsigned int, _Complex unsigned char)", DBL_MANT_DIG, 0 },
    { test_pow_1481, "cpow", "pow (_Complex unsigned int, short int)", DBL_MANT_DIG, 0 },
    { test_pow_1482, "cpow", "pow (_Complex unsigned int, _Complex short int)", DBL_MANT_DIG, 0 },
    { test_pow_1483, "cpow", "pow (_Complex unsigned int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_pow_1484, "cpow", "pow (_Complex unsigned int, _Complex unsigned short int)", DBL_MANT_DIG, 0 },
    { test_pow_1485, "cpow", "pow (_Complex unsigned int, int)", DBL_MANT_DIG, 0 },
    { test_pow_1486, "cpow", "pow (_Complex unsigned int, _Complex int)", DBL_MANT_DIG, 0 },
    { test_pow_1487, "cpow", "pow (_Complex unsigned int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_pow_1488, "cpow", "pow (_Complex unsigned int, _Complex unsigned int)", DBL_MANT_DIG, 0 },
    { test_pow_1489, "cpow", "pow (_Complex unsigned int, long int)", DBL_MANT_DIG, 0 },
    { test_pow_1490, "cpow", "pow (_Complex unsigned int, _Complex long int)", DBL_MANT_DIG, 0 },
    { test_pow_1491, "cpow", "pow (_Complex unsigned int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_pow_1492, "cpow", "pow (_Complex unsigned int, _Complex unsigned long int)", DBL_MANT_DIG, 0 },
    { test_pow_1493, "cpow", "pow (_Complex unsigned int, long long int)", DBL_MANT_DIG, 0 },
    { test_pow_1494, "cpow", "pow (_Complex unsigned int, _Complex long long int)", DBL_MANT_DIG, 0 },
    { test_pow_1495, "cpow", "pow (_Complex unsigned int, unsigned long long int)", DBL_MANT_DIG, 0 },
    { test_pow_1496, "cpow", "pow (_Complex unsigned int, _Complex unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_pow_1497, "cpow", "pow (_Complex unsigned int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1498, "cpow", "pow (_Complex unsigned int, _Complex __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1499, "cpow", "pow (_Complex unsigned int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1500, "cpow", "pow (_Complex unsigned int, _Complex unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_pow_1501, "cpow", "pow (_Complex unsigned int, enum e)", DBL_MANT_DIG, 0 },
    { test_pow_1502, "cpow", "pow (_Complex unsigned int, _Bool)", DBL_MANT_DIG, 0 },
    { test_pow_1503, "cpow", "pow (_Complex unsigned int, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_pow_1504, "pow", "pow (long int, _Float16)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_pow_1505, "cpow", "pow (long int, __CFLOAT16)", DBL_MANT_DIG, 0 },
#endif
    { test_pow_1506, "pow", "pow (long int, float)", DBL_MANT_DIG, 0 },
    { test_pow_1507, "cpow", "pow (long int, _Complex float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_pow_1508, "pow", "pow (long int, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_pow_1509, "cpow", "pow (long int, __CFLOAT32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_pow_1510, "pow", "pow (long int, _Float32x)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_pow_1511, "cpow", "pow (long int, __CFLOAT32X)", DBL_MANT_DIG, 0 },
#endif
    { test_pow_1512, "pow", "pow (long int, double)", DBL_MANT_DIG, 0 },
    { test_pow_1513, "cpow", "pow (long int, _Complex double)", DBL_MANT_DIG, 0 },
    { test_pow_1514, "pow", "pow (long int, long double)", LDBL_MANT_DIG, 0 },
    { test_pow_1515, "cpow", "pow (long int, _Complex long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_pow_1516, "pow", "pow (long int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_pow_1517, "cpow", "pow (long int, __CFLOAT64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_pow_1518, "pow", "pow (long int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_pow_1519, "cpow", "pow (long int, __CFLOAT64X)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_pow_1520, "pow", "pow (long int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_pow_1521, "cpow", "pow (long int, __CFLOAT128)", FLT128_MANT_DIG, 0 },
#endif
    { test_pow_1522, "pow", "pow (long int, char)", DBL_MANT_DIG, 0 },
    { test_pow_1523, "cpow", "pow (long int, _Complex char)", DBL_MANT_DIG, 0 },
    { test_pow_1524, "pow", "pow (long int, signed char)", DBL_MANT_DIG, 0 },
    { test_pow_1525, "cpow", "pow (long int, _Complex signed char)", DBL_MANT_DIG, 0 },
    { test_pow_1526, "pow", "pow (long int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_pow_1527, "cpow", "pow (long int, _Complex unsigned char)", DBL_MANT_DIG, 0 },
    { test_pow_1528, "pow", "pow (long int, short int)", DBL_MANT_DIG, 0 },
    { test_pow_1529, "cpow", "pow (long int, _Complex short int)", DBL_MANT_DIG, 0 },
    { test_pow_1530, "pow", "pow (long int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_pow_1531, "cpow", "pow (long int, _Complex unsigned short int)", DBL_MANT_DIG, 0 },
    { test_pow_1532, "pow", "pow (long int, int)", DBL_MANT_DIG, 0 },
    { test_pow_1533, "cpow", "pow (long int, _Complex int)", DBL_MANT_DIG, 0 },
    { test_pow_1534, "pow", "pow (long int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_pow_1535, "cpow", "pow (long int, _Complex unsigned int)", DBL_MANT_DIG, 0 },
    { test_pow_1536, "pow", "pow (long int, long int)", DBL_MANT_DIG, 0 },
    { test_pow_1537, "cpow", "pow (long int, _Complex long int)", DBL_MANT_DIG, 0 },
    { test_pow_1538, "pow", "pow (long int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_pow_1539, "cpow", "pow (long int, _Complex unsigned long int)", DBL_MANT_DIG, 0 },
    { test_pow_1540, "pow", "pow (long int, long long int)", DBL_MANT_DIG, 0 },
    { test_pow_1541, "cpow", "pow (long int, _Complex long long int)", DBL_MANT_DIG, 0 },
    { test_pow_1542, "pow", "pow (long int, unsigned long long int)", DBL_MANT_DIG, 0 },
    { test_pow_1543, "cpow", "pow (long int, _Complex unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_pow_1544, "pow", "pow (long int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1545, "cpow", "pow (long int, _Complex __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1546, "pow", "pow (long int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1547, "cpow", "pow (long int, _Complex unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_pow_1548, "pow", "pow (long int, enum e)", DBL_MANT_DIG, 0 },
    { test_pow_1549, "pow", "pow (long int, _Bool)", DBL_MANT_DIG, 0 },
    { test_pow_1550, "pow", "pow (long int, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_pow_1551, "cpow", "pow (_Complex long int, _Float16)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_pow_1552, "cpow", "pow (_Complex long int, __CFLOAT16)", DBL_MANT_DIG, 0 },
#endif
    { test_pow_1553, "cpow", "pow (_Complex long int, float)", DBL_MANT_DIG, 0 },
    { test_pow_1554, "cpow", "pow (_Complex long int, _Complex float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_pow_1555, "cpow", "pow (_Complex long int, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_pow_1556, "cpow", "pow (_Complex long int, __CFLOAT32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_pow_1557, "cpow", "pow (_Complex long int, _Float32x)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_pow_1558, "cpow", "pow (_Complex long int, __CFLOAT32X)", DBL_MANT_DIG, 0 },
#endif
    { test_pow_1559, "cpow", "pow (_Complex long int, double)", DBL_MANT_DIG, 0 },
    { test_pow_1560, "cpow", "pow (_Complex long int, _Complex double)", DBL_MANT_DIG, 0 },
    { test_pow_1561, "cpow", "pow (_Complex long int, long double)", LDBL_MANT_DIG, 0 },
    { test_pow_1562, "cpow", "pow (_Complex long int, _Complex long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_pow_1563, "cpow", "pow (_Complex long int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_pow_1564, "cpow", "pow (_Complex long int, __CFLOAT64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_pow_1565, "cpow", "pow (_Complex long int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_pow_1566, "cpow", "pow (_Complex long int, __CFLOAT64X)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_pow_1567, "cpow", "pow (_Complex long int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_pow_1568, "cpow", "pow (_Complex long int, __CFLOAT128)", FLT128_MANT_DIG, 0 },
#endif
    { test_pow_1569, "cpow", "pow (_Complex long int, char)", DBL_MANT_DIG, 0 },
    { test_pow_1570, "cpow", "pow (_Complex long int, _Complex char)", DBL_MANT_DIG, 0 },
    { test_pow_1571, "cpow", "pow (_Complex long int, signed char)", DBL_MANT_DIG, 0 },
    { test_pow_1572, "cpow", "pow (_Complex long int, _Complex signed char)", DBL_MANT_DIG, 0 },
    { test_pow_1573, "cpow", "pow (_Complex long int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_pow_1574, "cpow", "pow (_Complex long int, _Complex unsigned char)", DBL_MANT_DIG, 0 },
    { test_pow_1575, "cpow", "pow (_Complex long int, short int)", DBL_MANT_DIG, 0 },
    { test_pow_1576, "cpow", "pow (_Complex long int, _Complex short int)", DBL_MANT_DIG, 0 },
    { test_pow_1577, "cpow", "pow (_Complex long int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_pow_1578, "cpow", "pow (_Complex long int, _Complex unsigned short int)", DBL_MANT_DIG, 0 },
    { test_pow_1579, "cpow", "pow (_Complex long int, int)", DBL_MANT_DIG, 0 },
    { test_pow_1580, "cpow", "pow (_Complex long int, _Complex int)", DBL_MANT_DIG, 0 },
    { test_pow_1581, "cpow", "pow (_Complex long int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_pow_1582, "cpow", "pow (_Complex long int, _Complex unsigned int)", DBL_MANT_DIG, 0 },
    { test_pow_1583, "cpow", "pow (_Complex long int, long int)", DBL_MANT_DIG, 0 },
    { test_pow_1584, "cpow", "pow (_Complex long int, _Complex long int)", DBL_MANT_DIG, 0 },
    { test_pow_1585, "cpow", "pow (_Complex long int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_pow_1586, "cpow", "pow (_Complex long int, _Complex unsigned long int)", DBL_MANT_DIG, 0 },
    { test_pow_1587, "cpow", "pow (_Complex long int, long long int)", DBL_MANT_DIG, 0 },
    { test_pow_1588, "cpow", "pow (_Complex long int, _Complex long long int)", DBL_MANT_DIG, 0 },
    { test_pow_1589, "cpow", "pow (_Complex long int, unsigned long long int)", DBL_MANT_DIG, 0 },
    { test_pow_1590, "cpow", "pow (_Complex long int, _Complex unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_pow_1591, "cpow", "pow (_Complex long int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1592, "cpow", "pow (_Complex long int, _Complex __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1593, "cpow", "pow (_Complex long int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1594, "cpow", "pow (_Complex long int, _Complex unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_pow_1595, "cpow", "pow (_Complex long int, enum e)", DBL_MANT_DIG, 0 },
    { test_pow_1596, "cpow", "pow (_Complex long int, _Bool)", DBL_MANT_DIG, 0 },
    { test_pow_1597, "cpow", "pow (_Complex long int, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_pow_1598, "pow", "pow (unsigned long int, _Float16)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_pow_1599, "cpow", "pow (unsigned long int, __CFLOAT16)", DBL_MANT_DIG, 0 },
#endif
    { test_pow_1600, "pow", "pow (unsigned long int, float)", DBL_MANT_DIG, 0 },
    { test_pow_1601, "cpow", "pow (unsigned long int, _Complex float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_pow_1602, "pow", "pow (unsigned long int, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_pow_1603, "cpow", "pow (unsigned long int, __CFLOAT32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_pow_1604, "pow", "pow (unsigned long int, _Float32x)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_pow_1605, "cpow", "pow (unsigned long int, __CFLOAT32X)", DBL_MANT_DIG, 0 },
#endif
    { test_pow_1606, "pow", "pow (unsigned long int, double)", DBL_MANT_DIG, 0 },
    { test_pow_1607, "cpow", "pow (unsigned long int, _Complex double)", DBL_MANT_DIG, 0 },
    { test_pow_1608, "pow", "pow (unsigned long int, long double)", LDBL_MANT_DIG, 0 },
    { test_pow_1609, "cpow", "pow (unsigned long int, _Complex long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_pow_1610, "pow", "pow (unsigned long int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_pow_1611, "cpow", "pow (unsigned long int, __CFLOAT64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_pow_1612, "pow", "pow (unsigned long int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_pow_1613, "cpow", "pow (unsigned long int, __CFLOAT64X)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_pow_1614, "pow", "pow (unsigned long int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_pow_1615, "cpow", "pow (unsigned long int, __CFLOAT128)", FLT128_MANT_DIG, 0 },
#endif
    { test_pow_1616, "pow", "pow (unsigned long int, char)", DBL_MANT_DIG, 0 },
    { test_pow_1617, "cpow", "pow (unsigned long int, _Complex char)", DBL_MANT_DIG, 0 },
    { test_pow_1618, "pow", "pow (unsigned long int, signed char)", DBL_MANT_DIG, 0 },
    { test_pow_1619, "cpow", "pow (unsigned long int, _Complex signed char)", DBL_MANT_DIG, 0 },
    { test_pow_1620, "pow", "pow (unsigned long int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_pow_1621, "cpow", "pow (unsigned long int, _Complex unsigned char)", DBL_MANT_DIG, 0 },
    { test_pow_1622, "pow", "pow (unsigned long int, short int)", DBL_MANT_DIG, 0 },
    { test_pow_1623, "cpow", "pow (unsigned long int, _Complex short int)", DBL_MANT_DIG, 0 },
    { test_pow_1624, "pow", "pow (unsigned long int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_pow_1625, "cpow", "pow (unsigned long int, _Complex unsigned short int)", DBL_MANT_DIG, 0 },
    { test_pow_1626, "pow", "pow (unsigned long int, int)", DBL_MANT_DIG, 0 },
    { test_pow_1627, "cpow", "pow (unsigned long int, _Complex int)", DBL_MANT_DIG, 0 },
    { test_pow_1628, "pow", "pow (unsigned long int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_pow_1629, "cpow", "pow (unsigned long int, _Complex unsigned int)", DBL_MANT_DIG, 0 },
    { test_pow_1630, "pow", "pow (unsigned long int, long int)", DBL_MANT_DIG, 0 },
    { test_pow_1631, "cpow", "pow (unsigned long int, _Complex long int)", DBL_MANT_DIG, 0 },
    { test_pow_1632, "pow", "pow (unsigned long int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_pow_1633, "cpow", "pow (unsigned long int, _Complex unsigned long int)", DBL_MANT_DIG, 0 },
    { test_pow_1634, "pow", "pow (unsigned long int, long long int)", DBL_MANT_DIG, 0 },
    { test_pow_1635, "cpow", "pow (unsigned long int, _Complex long long int)", DBL_MANT_DIG, 0 },
    { test_pow_1636, "pow", "pow (unsigned long int, unsigned long long int)", DBL_MANT_DIG, 0 },
    { test_pow_1637, "cpow", "pow (unsigned long int, _Complex unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_pow_1638, "pow", "pow (unsigned long int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1639, "cpow", "pow (unsigned long int, _Complex __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1640, "pow", "pow (unsigned long int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1641, "cpow", "pow (unsigned long int, _Complex unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_pow_1642, "pow", "pow (unsigned long int, enum e)", DBL_MANT_DIG, 0 },
    { test_pow_1643, "pow", "pow (unsigned long int, _Bool)", DBL_MANT_DIG, 0 },
    { test_pow_1644, "pow", "pow (unsigned long int, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_pow_1645, "cpow", "pow (_Complex unsigned long int, _Float16)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_pow_1646, "cpow", "pow (_Complex unsigned long int, __CFLOAT16)", DBL_MANT_DIG, 0 },
#endif
    { test_pow_1647, "cpow", "pow (_Complex unsigned long int, float)", DBL_MANT_DIG, 0 },
    { test_pow_1648, "cpow", "pow (_Complex unsigned long int, _Complex float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_pow_1649, "cpow", "pow (_Complex unsigned long int, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_pow_1650, "cpow", "pow (_Complex unsigned long int, __CFLOAT32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_pow_1651, "cpow", "pow (_Complex unsigned long int, _Float32x)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_pow_1652, "cpow", "pow (_Complex unsigned long int, __CFLOAT32X)", DBL_MANT_DIG, 0 },
#endif
    { test_pow_1653, "cpow", "pow (_Complex unsigned long int, double)", DBL_MANT_DIG, 0 },
    { test_pow_1654, "cpow", "pow (_Complex unsigned long int, _Complex double)", DBL_MANT_DIG, 0 },
    { test_pow_1655, "cpow", "pow (_Complex unsigned long int, long double)", LDBL_MANT_DIG, 0 },
    { test_pow_1656, "cpow", "pow (_Complex unsigned long int, _Complex long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_pow_1657, "cpow", "pow (_Complex unsigned long int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_pow_1658, "cpow", "pow (_Complex unsigned long int, __CFLOAT64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_pow_1659, "cpow", "pow (_Complex unsigned long int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_pow_1660, "cpow", "pow (_Complex unsigned long int, __CFLOAT64X)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_pow_1661, "cpow", "pow (_Complex unsigned long int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_pow_1662, "cpow", "pow (_Complex unsigned long int, __CFLOAT128)", FLT128_MANT_DIG, 0 },
#endif
    { test_pow_1663, "cpow", "pow (_Complex unsigned long int, char)", DBL_MANT_DIG, 0 },
    { test_pow_1664, "cpow", "pow (_Complex unsigned long int, _Complex char)", DBL_MANT_DIG, 0 },
    { test_pow_1665, "cpow", "pow (_Complex unsigned long int, signed char)", DBL_MANT_DIG, 0 },
    { test_pow_1666, "cpow", "pow (_Complex unsigned long int, _Complex signed char)", DBL_MANT_DIG, 0 },
    { test_pow_1667, "cpow", "pow (_Complex unsigned long int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_pow_1668, "cpow", "pow (_Complex unsigned long int, _Complex unsigned char)", DBL_MANT_DIG, 0 },
    { test_pow_1669, "cpow", "pow (_Complex unsigned long int, short int)", DBL_MANT_DIG, 0 },
    { test_pow_1670, "cpow", "pow (_Complex unsigned long int, _Complex short int)", DBL_MANT_DIG, 0 },
    { test_pow_1671, "cpow", "pow (_Complex unsigned long int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_pow_1672, "cpow", "pow (_Complex unsigned long int, _Complex unsigned short int)", DBL_MANT_DIG, 0 },
    { test_pow_1673, "cpow", "pow (_Complex unsigned long int, int)", DBL_MANT_DIG, 0 },
    { test_pow_1674, "cpow", "pow (_Complex unsigned long int, _Complex int)", DBL_MANT_DIG, 0 },
    { test_pow_1675, "cpow", "pow (_Complex unsigned long int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_pow_1676, "cpow", "pow (_Complex unsigned long int, _Complex unsigned int)", DBL_MANT_DIG, 0 },
    { test_pow_1677, "cpow", "pow (_Complex unsigned long int, long int)", DBL_MANT_DIG, 0 },
    { test_pow_1678, "cpow", "pow (_Complex unsigned long int, _Complex long int)", DBL_MANT_DIG, 0 },
    { test_pow_1679, "cpow", "pow (_Complex unsigned long int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_pow_1680, "cpow", "pow (_Complex unsigned long int, _Complex unsigned long int)", DBL_MANT_DIG, 0 },
    { test_pow_1681, "cpow", "pow (_Complex unsigned long int, long long int)", DBL_MANT_DIG, 0 },
    { test_pow_1682, "cpow", "pow (_Complex unsigned long int, _Complex long long int)", DBL_MANT_DIG, 0 },
    { test_pow_1683, "cpow", "pow (_Complex unsigned long int, unsigned long long int)", DBL_MANT_DIG, 0 },
    { test_pow_1684, "cpow", "pow (_Complex unsigned long int, _Complex unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_pow_1685, "cpow", "pow (_Complex unsigned long int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1686, "cpow", "pow (_Complex unsigned long int, _Complex __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1687, "cpow", "pow (_Complex unsigned long int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1688, "cpow", "pow (_Complex unsigned long int, _Complex unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_pow_1689, "cpow", "pow (_Complex unsigned long int, enum e)", DBL_MANT_DIG, 0 },
    { test_pow_1690, "cpow", "pow (_Complex unsigned long int, _Bool)", DBL_MANT_DIG, 0 },
    { test_pow_1691, "cpow", "pow (_Complex unsigned long int, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_pow_1692, "pow", "pow (long long int, _Float16)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_pow_1693, "cpow", "pow (long long int, __CFLOAT16)", DBL_MANT_DIG, 0 },
#endif
    { test_pow_1694, "pow", "pow (long long int, float)", DBL_MANT_DIG, 0 },
    { test_pow_1695, "cpow", "pow (long long int, _Complex float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_pow_1696, "pow", "pow (long long int, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_pow_1697, "cpow", "pow (long long int, __CFLOAT32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_pow_1698, "pow", "pow (long long int, _Float32x)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_pow_1699, "cpow", "pow (long long int, __CFLOAT32X)", DBL_MANT_DIG, 0 },
#endif
    { test_pow_1700, "pow", "pow (long long int, double)", DBL_MANT_DIG, 0 },
    { test_pow_1701, "cpow", "pow (long long int, _Complex double)", DBL_MANT_DIG, 0 },
    { test_pow_1702, "pow", "pow (long long int, long double)", LDBL_MANT_DIG, 0 },
    { test_pow_1703, "cpow", "pow (long long int, _Complex long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_pow_1704, "pow", "pow (long long int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_pow_1705, "cpow", "pow (long long int, __CFLOAT64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_pow_1706, "pow", "pow (long long int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_pow_1707, "cpow", "pow (long long int, __CFLOAT64X)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_pow_1708, "pow", "pow (long long int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_pow_1709, "cpow", "pow (long long int, __CFLOAT128)", FLT128_MANT_DIG, 0 },
#endif
    { test_pow_1710, "pow", "pow (long long int, char)", DBL_MANT_DIG, 0 },
    { test_pow_1711, "cpow", "pow (long long int, _Complex char)", DBL_MANT_DIG, 0 },
    { test_pow_1712, "pow", "pow (long long int, signed char)", DBL_MANT_DIG, 0 },
    { test_pow_1713, "cpow", "pow (long long int, _Complex signed char)", DBL_MANT_DIG, 0 },
    { test_pow_1714, "pow", "pow (long long int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_pow_1715, "cpow", "pow (long long int, _Complex unsigned char)", DBL_MANT_DIG, 0 },
    { test_pow_1716, "pow", "pow (long long int, short int)", DBL_MANT_DIG, 0 },
    { test_pow_1717, "cpow", "pow (long long int, _Complex short int)", DBL_MANT_DIG, 0 },
    { test_pow_1718, "pow", "pow (long long int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_pow_1719, "cpow", "pow (long long int, _Complex unsigned short int)", DBL_MANT_DIG, 0 },
    { test_pow_1720, "pow", "pow (long long int, int)", DBL_MANT_DIG, 0 },
    { test_pow_1721, "cpow", "pow (long long int, _Complex int)", DBL_MANT_DIG, 0 },
    { test_pow_1722, "pow", "pow (long long int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_pow_1723, "cpow", "pow (long long int, _Complex unsigned int)", DBL_MANT_DIG, 0 },
    { test_pow_1724, "pow", "pow (long long int, long int)", DBL_MANT_DIG, 0 },
    { test_pow_1725, "cpow", "pow (long long int, _Complex long int)", DBL_MANT_DIG, 0 },
    { test_pow_1726, "pow", "pow (long long int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_pow_1727, "cpow", "pow (long long int, _Complex unsigned long int)", DBL_MANT_DIG, 0 },
    { test_pow_1728, "pow", "pow (long long int, long long int)", DBL_MANT_DIG, 0 },
    { test_pow_1729, "cpow", "pow (long long int, _Complex long long int)", DBL_MANT_DIG, 0 },
    { test_pow_1730, "pow", "pow (long long int, unsigned long long int)", DBL_MANT_DIG, 0 },
    { test_pow_1731, "cpow", "pow (long long int, _Complex unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_pow_1732, "pow", "pow (long long int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1733, "cpow", "pow (long long int, _Complex __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1734, "pow", "pow (long long int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1735, "cpow", "pow (long long int, _Complex unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_pow_1736, "pow", "pow (long long int, enum e)", DBL_MANT_DIG, 0 },
    { test_pow_1737, "pow", "pow (long long int, _Bool)", DBL_MANT_DIG, 0 },
    { test_pow_1738, "pow", "pow (long long int, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_pow_1739, "cpow", "pow (_Complex long long int, _Float16)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_pow_1740, "cpow", "pow (_Complex long long int, __CFLOAT16)", DBL_MANT_DIG, 0 },
#endif
    { test_pow_1741, "cpow", "pow (_Complex long long int, float)", DBL_MANT_DIG, 0 },
    { test_pow_1742, "cpow", "pow (_Complex long long int, _Complex float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_pow_1743, "cpow", "pow (_Complex long long int, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_pow_1744, "cpow", "pow (_Complex long long int, __CFLOAT32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_pow_1745, "cpow", "pow (_Complex long long int, _Float32x)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_pow_1746, "cpow", "pow (_Complex long long int, __CFLOAT32X)", DBL_MANT_DIG, 0 },
#endif
    { test_pow_1747, "cpow", "pow (_Complex long long int, double)", DBL_MANT_DIG, 0 },
    { test_pow_1748, "cpow", "pow (_Complex long long int, _Complex double)", DBL_MANT_DIG, 0 },
    { test_pow_1749, "cpow", "pow (_Complex long long int, long double)", LDBL_MANT_DIG, 0 },
    { test_pow_1750, "cpow", "pow (_Complex long long int, _Complex long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_pow_1751, "cpow", "pow (_Complex long long int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_pow_1752, "cpow", "pow (_Complex long long int, __CFLOAT64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_pow_1753, "cpow", "pow (_Complex long long int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_pow_1754, "cpow", "pow (_Complex long long int, __CFLOAT64X)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_pow_1755, "cpow", "pow (_Complex long long int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_pow_1756, "cpow", "pow (_Complex long long int, __CFLOAT128)", FLT128_MANT_DIG, 0 },
#endif
    { test_pow_1757, "cpow", "pow (_Complex long long int, char)", DBL_MANT_DIG, 0 },
    { test_pow_1758, "cpow", "pow (_Complex long long int, _Complex char)", DBL_MANT_DIG, 0 },
    { test_pow_1759, "cpow", "pow (_Complex long long int, signed char)", DBL_MANT_DIG, 0 },
    { test_pow_1760, "cpow", "pow (_Complex long long int, _Complex signed char)", DBL_MANT_DIG, 0 },
    { test_pow_1761, "cpow", "pow (_Complex long long int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_pow_1762, "cpow", "pow (_Complex long long int, _Complex unsigned char)", DBL_MANT_DIG, 0 },
    { test_pow_1763, "cpow", "pow (_Complex long long int, short int)", DBL_MANT_DIG, 0 },
    { test_pow_1764, "cpow", "pow (_Complex long long int, _Complex short int)", DBL_MANT_DIG, 0 },
    { test_pow_1765, "cpow", "pow (_Complex long long int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_pow_1766, "cpow", "pow (_Complex long long int, _Complex unsigned short int)", DBL_MANT_DIG, 0 },
    { test_pow_1767, "cpow", "pow (_Complex long long int, int)", DBL_MANT_DIG, 0 },
    { test_pow_1768, "cpow", "pow (_Complex long long int, _Complex int)", DBL_MANT_DIG, 0 },
    { test_pow_1769, "cpow", "pow (_Complex long long int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_pow_1770, "cpow", "pow (_Complex long long int, _Complex unsigned int)", DBL_MANT_DIG, 0 },
    { test_pow_1771, "cpow", "pow (_Complex long long int, long int)", DBL_MANT_DIG, 0 },
    { test_pow_1772, "cpow", "pow (_Complex long long int, _Complex long int)", DBL_MANT_DIG, 0 },
    { test_pow_1773, "cpow", "pow (_Complex long long int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_pow_1774, "cpow", "pow (_Complex long long int, _Complex unsigned long int)", DBL_MANT_DIG, 0 },
    { test_pow_1775, "cpow", "pow (_Complex long long int, long long int)", DBL_MANT_DIG, 0 },
    { test_pow_1776, "cpow", "pow (_Complex long long int, _Complex long long int)", DBL_MANT_DIG, 0 },
    { test_pow_1777, "cpow", "pow (_Complex long long int, unsigned long long int)", DBL_MANT_DIG, 0 },
    { test_pow_1778, "cpow", "pow (_Complex long long int, _Complex unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_pow_1779, "cpow", "pow (_Complex long long int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1780, "cpow", "pow (_Complex long long int, _Complex __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1781, "cpow", "pow (_Complex long long int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1782, "cpow", "pow (_Complex long long int, _Complex unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_pow_1783, "cpow", "pow (_Complex long long int, enum e)", DBL_MANT_DIG, 0 },
    { test_pow_1784, "cpow", "pow (_Complex long long int, _Bool)", DBL_MANT_DIG, 0 },
    { test_pow_1785, "cpow", "pow (_Complex long long int, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_pow_1786, "pow", "pow (unsigned long long int, _Float16)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_pow_1787, "cpow", "pow (unsigned long long int, __CFLOAT16)", DBL_MANT_DIG, 0 },
#endif
    { test_pow_1788, "pow", "pow (unsigned long long int, float)", DBL_MANT_DIG, 0 },
    { test_pow_1789, "cpow", "pow (unsigned long long int, _Complex float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_pow_1790, "pow", "pow (unsigned long long int, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_pow_1791, "cpow", "pow (unsigned long long int, __CFLOAT32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_pow_1792, "pow", "pow (unsigned long long int, _Float32x)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_pow_1793, "cpow", "pow (unsigned long long int, __CFLOAT32X)", DBL_MANT_DIG, 0 },
#endif
    { test_pow_1794, "pow", "pow (unsigned long long int, double)", DBL_MANT_DIG, 0 },
    { test_pow_1795, "cpow", "pow (unsigned long long int, _Complex double)", DBL_MANT_DIG, 0 },
    { test_pow_1796, "pow", "pow (unsigned long long int, long double)", LDBL_MANT_DIG, 0 },
    { test_pow_1797, "cpow", "pow (unsigned long long int, _Complex long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_pow_1798, "pow", "pow (unsigned long long int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_pow_1799, "cpow", "pow (unsigned long long int, __CFLOAT64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_pow_1800, "pow", "pow (unsigned long long int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_pow_1801, "cpow", "pow (unsigned long long int, __CFLOAT64X)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_pow_1802, "pow", "pow (unsigned long long int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_pow_1803, "cpow", "pow (unsigned long long int, __CFLOAT128)", FLT128_MANT_DIG, 0 },
#endif
    { test_pow_1804, "pow", "pow (unsigned long long int, char)", DBL_MANT_DIG, 0 },
    { test_pow_1805, "cpow", "pow (unsigned long long int, _Complex char)", DBL_MANT_DIG, 0 },
    { test_pow_1806, "pow", "pow (unsigned long long int, signed char)", DBL_MANT_DIG, 0 },
    { test_pow_1807, "cpow", "pow (unsigned long long int, _Complex signed char)", DBL_MANT_DIG, 0 },
    { test_pow_1808, "pow", "pow (unsigned long long int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_pow_1809, "cpow", "pow (unsigned long long int, _Complex unsigned char)", DBL_MANT_DIG, 0 },
    { test_pow_1810, "pow", "pow (unsigned long long int, short int)", DBL_MANT_DIG, 0 },
    { test_pow_1811, "cpow", "pow (unsigned long long int, _Complex short int)", DBL_MANT_DIG, 0 },
    { test_pow_1812, "pow", "pow (unsigned long long int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_pow_1813, "cpow", "pow (unsigned long long int, _Complex unsigned short int)", DBL_MANT_DIG, 0 },
    { test_pow_1814, "pow", "pow (unsigned long long int, int)", DBL_MANT_DIG, 0 },
    { test_pow_1815, "cpow", "pow (unsigned long long int, _Complex int)", DBL_MANT_DIG, 0 },
    { test_pow_1816, "pow", "pow (unsigned long long int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_pow_1817, "cpow", "pow (unsigned long long int, _Complex unsigned int)", DBL_MANT_DIG, 0 },
    { test_pow_1818, "pow", "pow (unsigned long long int, long int)", DBL_MANT_DIG, 0 },
    { test_pow_1819, "cpow", "pow (unsigned long long int, _Complex long int)", DBL_MANT_DIG, 0 },
    { test_pow_1820, "pow", "pow (unsigned long long int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_pow_1821, "cpow", "pow (unsigned long long int, _Complex unsigned long int)", DBL_MANT_DIG, 0 },
    { test_pow_1822, "pow", "pow (unsigned long long int, long long int)", DBL_MANT_DIG, 0 },
    { test_pow_1823, "cpow", "pow (unsigned long long int, _Complex long long int)", DBL_MANT_DIG, 0 },
    { test_pow_1824, "pow", "pow (unsigned long long int, unsigned long long int)", DBL_MANT_DIG, 0 },
    { test_pow_1825, "cpow", "pow (unsigned long long int, _Complex unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_pow_1826, "pow", "pow (unsigned long long int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1827, "cpow", "pow (unsigned long long int, _Complex __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1828, "pow", "pow (unsigned long long int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1829, "cpow", "pow (unsigned long long int, _Complex unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_pow_1830, "pow", "pow (unsigned long long int, enum e)", DBL_MANT_DIG, 0 },
    { test_pow_1831, "pow", "pow (unsigned long long int, _Bool)", DBL_MANT_DIG, 0 },
    { test_pow_1832, "pow", "pow (unsigned long long int, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_pow_1833, "cpow", "pow (_Complex unsigned long long int, _Float16)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_pow_1834, "cpow", "pow (_Complex unsigned long long int, __CFLOAT16)", DBL_MANT_DIG, 0 },
#endif
    { test_pow_1835, "cpow", "pow (_Complex unsigned long long int, float)", DBL_MANT_DIG, 0 },
    { test_pow_1836, "cpow", "pow (_Complex unsigned long long int, _Complex float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_pow_1837, "cpow", "pow (_Complex unsigned long long int, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_pow_1838, "cpow", "pow (_Complex unsigned long long int, __CFLOAT32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_pow_1839, "cpow", "pow (_Complex unsigned long long int, _Float32x)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_pow_1840, "cpow", "pow (_Complex unsigned long long int, __CFLOAT32X)", DBL_MANT_DIG, 0 },
#endif
    { test_pow_1841, "cpow", "pow (_Complex unsigned long long int, double)", DBL_MANT_DIG, 0 },
    { test_pow_1842, "cpow", "pow (_Complex unsigned long long int, _Complex double)", DBL_MANT_DIG, 0 },
    { test_pow_1843, "cpow", "pow (_Complex unsigned long long int, long double)", LDBL_MANT_DIG, 0 },
    { test_pow_1844, "cpow", "pow (_Complex unsigned long long int, _Complex long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_pow_1845, "cpow", "pow (_Complex unsigned long long int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_pow_1846, "cpow", "pow (_Complex unsigned long long int, __CFLOAT64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_pow_1847, "cpow", "pow (_Complex unsigned long long int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_pow_1848, "cpow", "pow (_Complex unsigned long long int, __CFLOAT64X)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_pow_1849, "cpow", "pow (_Complex unsigned long long int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_pow_1850, "cpow", "pow (_Complex unsigned long long int, __CFLOAT128)", FLT128_MANT_DIG, 0 },
#endif
    { test_pow_1851, "cpow", "pow (_Complex unsigned long long int, char)", DBL_MANT_DIG, 0 },
    { test_pow_1852, "cpow", "pow (_Complex unsigned long long int, _Complex char)", DBL_MANT_DIG, 0 },
    { test_pow_1853, "cpow", "pow (_Complex unsigned long long int, signed char)", DBL_MANT_DIG, 0 },
    { test_pow_1854, "cpow", "pow (_Complex unsigned long long int, _Complex signed char)", DBL_MANT_DIG, 0 },
    { test_pow_1855, "cpow", "pow (_Complex unsigned long long int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_pow_1856, "cpow", "pow (_Complex unsigned long long int, _Complex unsigned char)", DBL_MANT_DIG, 0 },
    { test_pow_1857, "cpow", "pow (_Complex unsigned long long int, short int)", DBL_MANT_DIG, 0 },
    { test_pow_1858, "cpow", "pow (_Complex unsigned long long int, _Complex short int)", DBL_MANT_DIG, 0 },
    { test_pow_1859, "cpow", "pow (_Complex unsigned long long int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_pow_1860, "cpow", "pow (_Complex unsigned long long int, _Complex unsigned short int)", DBL_MANT_DIG, 0 },
    { test_pow_1861, "cpow", "pow (_Complex unsigned long long int, int)", DBL_MANT_DIG, 0 },
    { test_pow_1862, "cpow", "pow (_Complex unsigned long long int, _Complex int)", DBL_MANT_DIG, 0 },
    { test_pow_1863, "cpow", "pow (_Complex unsigned long long int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_pow_1864, "cpow", "pow (_Complex unsigned long long int, _Complex unsigned int)", DBL_MANT_DIG, 0 },
    { test_pow_1865, "cpow", "pow (_Complex unsigned long long int, long int)", DBL_MANT_DIG, 0 },
    { test_pow_1866, "cpow", "pow (_Complex unsigned long long int, _Complex long int)", DBL_MANT_DIG, 0 },
    { test_pow_1867, "cpow", "pow (_Complex unsigned long long int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_pow_1868, "cpow", "pow (_Complex unsigned long long int, _Complex unsigned long int)", DBL_MANT_DIG, 0 },
    { test_pow_1869, "cpow", "pow (_Complex unsigned long long int, long long int)", DBL_MANT_DIG, 0 },
    { test_pow_1870, "cpow", "pow (_Complex unsigned long long int, _Complex long long int)", DBL_MANT_DIG, 0 },
    { test_pow_1871, "cpow", "pow (_Complex unsigned long long int, unsigned long long int)", DBL_MANT_DIG, 0 },
    { test_pow_1872, "cpow", "pow (_Complex unsigned long long int, _Complex unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_pow_1873, "cpow", "pow (_Complex unsigned long long int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1874, "cpow", "pow (_Complex unsigned long long int, _Complex __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1875, "cpow", "pow (_Complex unsigned long long int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1876, "cpow", "pow (_Complex unsigned long long int, _Complex unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_pow_1877, "cpow", "pow (_Complex unsigned long long int, enum e)", DBL_MANT_DIG, 0 },
    { test_pow_1878, "cpow", "pow (_Complex unsigned long long int, _Bool)", DBL_MANT_DIG, 0 },
    { test_pow_1879, "cpow", "pow (_Complex unsigned long long int, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_pow_1880, "pow", "pow (__int128, _Float16)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_pow_1881, "cpow", "pow (__int128, __CFLOAT16)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1882, "pow", "pow (__int128, float)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1883, "cpow", "pow (__int128, _Complex float)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_pow_1884, "pow", "pow (__int128, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_pow_1885, "cpow", "pow (__int128, __CFLOAT32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_pow_1886, "pow", "pow (__int128, _Float32x)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_pow_1887, "cpow", "pow (__int128, __CFLOAT32X)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1888, "pow", "pow (__int128, double)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1889, "cpow", "pow (__int128, _Complex double)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1890, "pow", "pow (__int128, long double)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1891, "cpow", "pow (__int128, _Complex long double)", LDBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_pow_1892, "pow", "pow (__int128, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_pow_1893, "cpow", "pow (__int128, __CFLOAT64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_pow_1894, "pow", "pow (__int128, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_pow_1895, "cpow", "pow (__int128, __CFLOAT64X)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_pow_1896, "pow", "pow (__int128, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_pow_1897, "cpow", "pow (__int128, __CFLOAT128)", FLT128_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1898, "pow", "pow (__int128, char)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1899, "cpow", "pow (__int128, _Complex char)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1900, "pow", "pow (__int128, signed char)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1901, "cpow", "pow (__int128, _Complex signed char)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1902, "pow", "pow (__int128, unsigned char)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1903, "cpow", "pow (__int128, _Complex unsigned char)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1904, "pow", "pow (__int128, short int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1905, "cpow", "pow (__int128, _Complex short int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1906, "pow", "pow (__int128, unsigned short int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1907, "cpow", "pow (__int128, _Complex unsigned short int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1908, "pow", "pow (__int128, int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1909, "cpow", "pow (__int128, _Complex int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1910, "pow", "pow (__int128, unsigned int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1911, "cpow", "pow (__int128, _Complex unsigned int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1912, "pow", "pow (__int128, long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1913, "cpow", "pow (__int128, _Complex long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1914, "pow", "pow (__int128, unsigned long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1915, "cpow", "pow (__int128, _Complex unsigned long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1916, "pow", "pow (__int128, long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1917, "cpow", "pow (__int128, _Complex long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1918, "pow", "pow (__int128, unsigned long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1919, "cpow", "pow (__int128, _Complex unsigned long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1920, "pow", "pow (__int128, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1921, "cpow", "pow (__int128, _Complex __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1922, "pow", "pow (__int128, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1923, "cpow", "pow (__int128, _Complex unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1924, "pow", "pow (__int128, enum e)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1925, "pow", "pow (__int128, _Bool)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1926, "pow", "pow (__int128, bit_field)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_pow_1927, "cpow", "pow (_Complex __int128, _Float16)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_pow_1928, "cpow", "pow (_Complex __int128, __CFLOAT16)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1929, "cpow", "pow (_Complex __int128, float)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1930, "cpow", "pow (_Complex __int128, _Complex float)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_pow_1931, "cpow", "pow (_Complex __int128, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_pow_1932, "cpow", "pow (_Complex __int128, __CFLOAT32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_pow_1933, "cpow", "pow (_Complex __int128, _Float32x)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_pow_1934, "cpow", "pow (_Complex __int128, __CFLOAT32X)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1935, "cpow", "pow (_Complex __int128, double)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1936, "cpow", "pow (_Complex __int128, _Complex double)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1937, "cpow", "pow (_Complex __int128, long double)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1938, "cpow", "pow (_Complex __int128, _Complex long double)", LDBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_pow_1939, "cpow", "pow (_Complex __int128, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_pow_1940, "cpow", "pow (_Complex __int128, __CFLOAT64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_pow_1941, "cpow", "pow (_Complex __int128, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_pow_1942, "cpow", "pow (_Complex __int128, __CFLOAT64X)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_pow_1943, "cpow", "pow (_Complex __int128, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_pow_1944, "cpow", "pow (_Complex __int128, __CFLOAT128)", FLT128_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1945, "cpow", "pow (_Complex __int128, char)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1946, "cpow", "pow (_Complex __int128, _Complex char)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1947, "cpow", "pow (_Complex __int128, signed char)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1948, "cpow", "pow (_Complex __int128, _Complex signed char)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1949, "cpow", "pow (_Complex __int128, unsigned char)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1950, "cpow", "pow (_Complex __int128, _Complex unsigned char)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1951, "cpow", "pow (_Complex __int128, short int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1952, "cpow", "pow (_Complex __int128, _Complex short int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1953, "cpow", "pow (_Complex __int128, unsigned short int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1954, "cpow", "pow (_Complex __int128, _Complex unsigned short int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1955, "cpow", "pow (_Complex __int128, int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1956, "cpow", "pow (_Complex __int128, _Complex int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1957, "cpow", "pow (_Complex __int128, unsigned int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1958, "cpow", "pow (_Complex __int128, _Complex unsigned int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1959, "cpow", "pow (_Complex __int128, long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1960, "cpow", "pow (_Complex __int128, _Complex long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1961, "cpow", "pow (_Complex __int128, unsigned long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1962, "cpow", "pow (_Complex __int128, _Complex unsigned long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1963, "cpow", "pow (_Complex __int128, long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1964, "cpow", "pow (_Complex __int128, _Complex long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1965, "cpow", "pow (_Complex __int128, unsigned long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1966, "cpow", "pow (_Complex __int128, _Complex unsigned long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1967, "cpow", "pow (_Complex __int128, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1968, "cpow", "pow (_Complex __int128, _Complex __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1969, "cpow", "pow (_Complex __int128, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1970, "cpow", "pow (_Complex __int128, _Complex unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1971, "cpow", "pow (_Complex __int128, enum e)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1972, "cpow", "pow (_Complex __int128, _Bool)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1973, "cpow", "pow (_Complex __int128, bit_field)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_pow_1974, "pow", "pow (unsigned __int128, _Float16)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_pow_1975, "cpow", "pow (unsigned __int128, __CFLOAT16)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1976, "pow", "pow (unsigned __int128, float)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1977, "cpow", "pow (unsigned __int128, _Complex float)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_pow_1978, "pow", "pow (unsigned __int128, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_pow_1979, "cpow", "pow (unsigned __int128, __CFLOAT32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_pow_1980, "pow", "pow (unsigned __int128, _Float32x)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_pow_1981, "cpow", "pow (unsigned __int128, __CFLOAT32X)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1982, "pow", "pow (unsigned __int128, double)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1983, "cpow", "pow (unsigned __int128, _Complex double)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1984, "pow", "pow (unsigned __int128, long double)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1985, "cpow", "pow (unsigned __int128, _Complex long double)", LDBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_pow_1986, "pow", "pow (unsigned __int128, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_pow_1987, "cpow", "pow (unsigned __int128, __CFLOAT64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_pow_1988, "pow", "pow (unsigned __int128, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_pow_1989, "cpow", "pow (unsigned __int128, __CFLOAT64X)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_pow_1990, "pow", "pow (unsigned __int128, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_pow_1991, "cpow", "pow (unsigned __int128, __CFLOAT128)", FLT128_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1992, "pow", "pow (unsigned __int128, char)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1993, "cpow", "pow (unsigned __int128, _Complex char)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1994, "pow", "pow (unsigned __int128, signed char)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1995, "cpow", "pow (unsigned __int128, _Complex signed char)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1996, "pow", "pow (unsigned __int128, unsigned char)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1997, "cpow", "pow (unsigned __int128, _Complex unsigned char)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1998, "pow", "pow (unsigned __int128, short int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_1999, "cpow", "pow (unsigned __int128, _Complex short int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_2000, "pow", "pow (unsigned __int128, unsigned short int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_2001, "cpow", "pow (unsigned __int128, _Complex unsigned short int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_2002, "pow", "pow (unsigned __int128, int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_2003, "cpow", "pow (unsigned __int128, _Complex int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_2004, "pow", "pow (unsigned __int128, unsigned int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_2005, "cpow", "pow (unsigned __int128, _Complex unsigned int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_2006, "pow", "pow (unsigned __int128, long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_2007, "cpow", "pow (unsigned __int128, _Complex long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_2008, "pow", "pow (unsigned __int128, unsigned long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_2009, "cpow", "pow (unsigned __int128, _Complex unsigned long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_2010, "pow", "pow (unsigned __int128, long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_2011, "cpow", "pow (unsigned __int128, _Complex long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_2012, "pow", "pow (unsigned __int128, unsigned long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_2013, "cpow", "pow (unsigned __int128, _Complex unsigned long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_2014, "pow", "pow (unsigned __int128, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_2015, "cpow", "pow (unsigned __int128, _Complex __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_2016, "pow", "pow (unsigned __int128, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_2017, "cpow", "pow (unsigned __int128, _Complex unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_2018, "pow", "pow (unsigned __int128, enum e)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_2019, "pow", "pow (unsigned __int128, _Bool)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_2020, "pow", "pow (unsigned __int128, bit_field)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_pow_2021, "cpow", "pow (_Complex unsigned __int128, _Float16)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_pow_2022, "cpow", "pow (_Complex unsigned __int128, __CFLOAT16)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_2023, "cpow", "pow (_Complex unsigned __int128, float)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_2024, "cpow", "pow (_Complex unsigned __int128, _Complex float)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_pow_2025, "cpow", "pow (_Complex unsigned __int128, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_pow_2026, "cpow", "pow (_Complex unsigned __int128, __CFLOAT32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_pow_2027, "cpow", "pow (_Complex unsigned __int128, _Float32x)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_pow_2028, "cpow", "pow (_Complex unsigned __int128, __CFLOAT32X)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_2029, "cpow", "pow (_Complex unsigned __int128, double)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_2030, "cpow", "pow (_Complex unsigned __int128, _Complex double)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_2031, "cpow", "pow (_Complex unsigned __int128, long double)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_2032, "cpow", "pow (_Complex unsigned __int128, _Complex long double)", LDBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_pow_2033, "cpow", "pow (_Complex unsigned __int128, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_pow_2034, "cpow", "pow (_Complex unsigned __int128, __CFLOAT64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_pow_2035, "cpow", "pow (_Complex unsigned __int128, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_pow_2036, "cpow", "pow (_Complex unsigned __int128, __CFLOAT64X)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_pow_2037, "cpow", "pow (_Complex unsigned __int128, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_pow_2038, "cpow", "pow (_Complex unsigned __int128, __CFLOAT128)", FLT128_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_2039, "cpow", "pow (_Complex unsigned __int128, char)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_2040, "cpow", "pow (_Complex unsigned __int128, _Complex char)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_2041, "cpow", "pow (_Complex unsigned __int128, signed char)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_2042, "cpow", "pow (_Complex unsigned __int128, _Complex signed char)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_2043, "cpow", "pow (_Complex unsigned __int128, unsigned char)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_2044, "cpow", "pow (_Complex unsigned __int128, _Complex unsigned char)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_2045, "cpow", "pow (_Complex unsigned __int128, short int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_2046, "cpow", "pow (_Complex unsigned __int128, _Complex short int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_2047, "cpow", "pow (_Complex unsigned __int128, unsigned short int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_2048, "cpow", "pow (_Complex unsigned __int128, _Complex unsigned short int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_2049, "cpow", "pow (_Complex unsigned __int128, int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_2050, "cpow", "pow (_Complex unsigned __int128, _Complex int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_2051, "cpow", "pow (_Complex unsigned __int128, unsigned int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_2052, "cpow", "pow (_Complex unsigned __int128, _Complex unsigned int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_2053, "cpow", "pow (_Complex unsigned __int128, long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_2054, "cpow", "pow (_Complex unsigned __int128, _Complex long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_2055, "cpow", "pow (_Complex unsigned __int128, unsigned long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_2056, "cpow", "pow (_Complex unsigned __int128, _Complex unsigned long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_2057, "cpow", "pow (_Complex unsigned __int128, long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_2058, "cpow", "pow (_Complex unsigned __int128, _Complex long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_2059, "cpow", "pow (_Complex unsigned __int128, unsigned long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_2060, "cpow", "pow (_Complex unsigned __int128, _Complex unsigned long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_2061, "cpow", "pow (_Complex unsigned __int128, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_2062, "cpow", "pow (_Complex unsigned __int128, _Complex __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_2063, "cpow", "pow (_Complex unsigned __int128, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_2064, "cpow", "pow (_Complex unsigned __int128, _Complex unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_2065, "cpow", "pow (_Complex unsigned __int128, enum e)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_2066, "cpow", "pow (_Complex unsigned __int128, _Bool)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_2067, "cpow", "pow (_Complex unsigned __int128, bit_field)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_pow_2068, "pow", "pow (enum e, _Float16)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_pow_2069, "cpow", "pow (enum e, __CFLOAT16)", DBL_MANT_DIG, 0 },
#endif
    { test_pow_2070, "pow", "pow (enum e, float)", DBL_MANT_DIG, 0 },
    { test_pow_2071, "cpow", "pow (enum e, _Complex float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_pow_2072, "pow", "pow (enum e, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_pow_2073, "cpow", "pow (enum e, __CFLOAT32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_pow_2074, "pow", "pow (enum e, _Float32x)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_pow_2075, "cpow", "pow (enum e, __CFLOAT32X)", DBL_MANT_DIG, 0 },
#endif
    { test_pow_2076, "pow", "pow (enum e, double)", DBL_MANT_DIG, 0 },
    { test_pow_2077, "cpow", "pow (enum e, _Complex double)", DBL_MANT_DIG, 0 },
    { test_pow_2078, "pow", "pow (enum e, long double)", LDBL_MANT_DIG, 0 },
    { test_pow_2079, "cpow", "pow (enum e, _Complex long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_pow_2080, "pow", "pow (enum e, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_pow_2081, "cpow", "pow (enum e, __CFLOAT64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_pow_2082, "pow", "pow (enum e, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_pow_2083, "cpow", "pow (enum e, __CFLOAT64X)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_pow_2084, "pow", "pow (enum e, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_pow_2085, "cpow", "pow (enum e, __CFLOAT128)", FLT128_MANT_DIG, 0 },
#endif
    { test_pow_2086, "pow", "pow (enum e, char)", DBL_MANT_DIG, 0 },
    { test_pow_2087, "cpow", "pow (enum e, _Complex char)", DBL_MANT_DIG, 0 },
    { test_pow_2088, "pow", "pow (enum e, signed char)", DBL_MANT_DIG, 0 },
    { test_pow_2089, "cpow", "pow (enum e, _Complex signed char)", DBL_MANT_DIG, 0 },
    { test_pow_2090, "pow", "pow (enum e, unsigned char)", DBL_MANT_DIG, 0 },
    { test_pow_2091, "cpow", "pow (enum e, _Complex unsigned char)", DBL_MANT_DIG, 0 },
    { test_pow_2092, "pow", "pow (enum e, short int)", DBL_MANT_DIG, 0 },
    { test_pow_2093, "cpow", "pow (enum e, _Complex short int)", DBL_MANT_DIG, 0 },
    { test_pow_2094, "pow", "pow (enum e, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_pow_2095, "cpow", "pow (enum e, _Complex unsigned short int)", DBL_MANT_DIG, 0 },
    { test_pow_2096, "pow", "pow (enum e, int)", DBL_MANT_DIG, 0 },
    { test_pow_2097, "cpow", "pow (enum e, _Complex int)", DBL_MANT_DIG, 0 },
    { test_pow_2098, "pow", "pow (enum e, unsigned int)", DBL_MANT_DIG, 0 },
    { test_pow_2099, "cpow", "pow (enum e, _Complex unsigned int)", DBL_MANT_DIG, 0 },
    { test_pow_2100, "pow", "pow (enum e, long int)", DBL_MANT_DIG, 0 },
    { test_pow_2101, "cpow", "pow (enum e, _Complex long int)", DBL_MANT_DIG, 0 },
    { test_pow_2102, "pow", "pow (enum e, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_pow_2103, "cpow", "pow (enum e, _Complex unsigned long int)", DBL_MANT_DIG, 0 },
    { test_pow_2104, "pow", "pow (enum e, long long int)", DBL_MANT_DIG, 0 },
    { test_pow_2105, "cpow", "pow (enum e, _Complex long long int)", DBL_MANT_DIG, 0 },
    { test_pow_2106, "pow", "pow (enum e, unsigned long long int)", DBL_MANT_DIG, 0 },
    { test_pow_2107, "cpow", "pow (enum e, _Complex unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_pow_2108, "pow", "pow (enum e, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_2109, "cpow", "pow (enum e, _Complex __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_2110, "pow", "pow (enum e, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_2111, "cpow", "pow (enum e, _Complex unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_pow_2112, "pow", "pow (enum e, enum e)", DBL_MANT_DIG, 0 },
    { test_pow_2113, "pow", "pow (enum e, _Bool)", DBL_MANT_DIG, 0 },
    { test_pow_2114, "pow", "pow (enum e, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_pow_2115, "pow", "pow (_Bool, _Float16)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_pow_2116, "cpow", "pow (_Bool, __CFLOAT16)", DBL_MANT_DIG, 0 },
#endif
    { test_pow_2117, "pow", "pow (_Bool, float)", DBL_MANT_DIG, 0 },
    { test_pow_2118, "cpow", "pow (_Bool, _Complex float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_pow_2119, "pow", "pow (_Bool, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_pow_2120, "cpow", "pow (_Bool, __CFLOAT32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_pow_2121, "pow", "pow (_Bool, _Float32x)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_pow_2122, "cpow", "pow (_Bool, __CFLOAT32X)", DBL_MANT_DIG, 0 },
#endif
    { test_pow_2123, "pow", "pow (_Bool, double)", DBL_MANT_DIG, 0 },
    { test_pow_2124, "cpow", "pow (_Bool, _Complex double)", DBL_MANT_DIG, 0 },
    { test_pow_2125, "pow", "pow (_Bool, long double)", LDBL_MANT_DIG, 0 },
    { test_pow_2126, "cpow", "pow (_Bool, _Complex long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_pow_2127, "pow", "pow (_Bool, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_pow_2128, "cpow", "pow (_Bool, __CFLOAT64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_pow_2129, "pow", "pow (_Bool, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_pow_2130, "cpow", "pow (_Bool, __CFLOAT64X)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_pow_2131, "pow", "pow (_Bool, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_pow_2132, "cpow", "pow (_Bool, __CFLOAT128)", FLT128_MANT_DIG, 0 },
#endif
    { test_pow_2133, "pow", "pow (_Bool, char)", DBL_MANT_DIG, 0 },
    { test_pow_2134, "cpow", "pow (_Bool, _Complex char)", DBL_MANT_DIG, 0 },
    { test_pow_2135, "pow", "pow (_Bool, signed char)", DBL_MANT_DIG, 0 },
    { test_pow_2136, "cpow", "pow (_Bool, _Complex signed char)", DBL_MANT_DIG, 0 },
    { test_pow_2137, "pow", "pow (_Bool, unsigned char)", DBL_MANT_DIG, 0 },
    { test_pow_2138, "cpow", "pow (_Bool, _Complex unsigned char)", DBL_MANT_DIG, 0 },
    { test_pow_2139, "pow", "pow (_Bool, short int)", DBL_MANT_DIG, 0 },
    { test_pow_2140, "cpow", "pow (_Bool, _Complex short int)", DBL_MANT_DIG, 0 },
    { test_pow_2141, "pow", "pow (_Bool, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_pow_2142, "cpow", "pow (_Bool, _Complex unsigned short int)", DBL_MANT_DIG, 0 },
    { test_pow_2143, "pow", "pow (_Bool, int)", DBL_MANT_DIG, 0 },
    { test_pow_2144, "cpow", "pow (_Bool, _Complex int)", DBL_MANT_DIG, 0 },
    { test_pow_2145, "pow", "pow (_Bool, unsigned int)", DBL_MANT_DIG, 0 },
    { test_pow_2146, "cpow", "pow (_Bool, _Complex unsigned int)", DBL_MANT_DIG, 0 },
    { test_pow_2147, "pow", "pow (_Bool, long int)", DBL_MANT_DIG, 0 },
    { test_pow_2148, "cpow", "pow (_Bool, _Complex long int)", DBL_MANT_DIG, 0 },
    { test_pow_2149, "pow", "pow (_Bool, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_pow_2150, "cpow", "pow (_Bool, _Complex unsigned long int)", DBL_MANT_DIG, 0 },
    { test_pow_2151, "pow", "pow (_Bool, long long int)", DBL_MANT_DIG, 0 },
    { test_pow_2152, "cpow", "pow (_Bool, _Complex long long int)", DBL_MANT_DIG, 0 },
    { test_pow_2153, "pow", "pow (_Bool, unsigned long long int)", DBL_MANT_DIG, 0 },
    { test_pow_2154, "cpow", "pow (_Bool, _Complex unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_pow_2155, "pow", "pow (_Bool, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_2156, "cpow", "pow (_Bool, _Complex __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_2157, "pow", "pow (_Bool, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_2158, "cpow", "pow (_Bool, _Complex unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_pow_2159, "pow", "pow (_Bool, enum e)", DBL_MANT_DIG, 0 },
    { test_pow_2160, "pow", "pow (_Bool, _Bool)", DBL_MANT_DIG, 0 },
    { test_pow_2161, "pow", "pow (_Bool, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_pow_2162, "pow", "pow (bit_field, _Float16)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_pow_2163, "cpow", "pow (bit_field, __CFLOAT16)", DBL_MANT_DIG, 0 },
#endif
    { test_pow_2164, "pow", "pow (bit_field, float)", DBL_MANT_DIG, 0 },
    { test_pow_2165, "cpow", "pow (bit_field, _Complex float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_pow_2166, "pow", "pow (bit_field, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_pow_2167, "cpow", "pow (bit_field, __CFLOAT32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_pow_2168, "pow", "pow (bit_field, _Float32x)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_pow_2169, "cpow", "pow (bit_field, __CFLOAT32X)", DBL_MANT_DIG, 0 },
#endif
    { test_pow_2170, "pow", "pow (bit_field, double)", DBL_MANT_DIG, 0 },
    { test_pow_2171, "cpow", "pow (bit_field, _Complex double)", DBL_MANT_DIG, 0 },
    { test_pow_2172, "pow", "pow (bit_field, long double)", LDBL_MANT_DIG, 0 },
    { test_pow_2173, "cpow", "pow (bit_field, _Complex long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_pow_2174, "pow", "pow (bit_field, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_pow_2175, "cpow", "pow (bit_field, __CFLOAT64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_pow_2176, "pow", "pow (bit_field, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_pow_2177, "cpow", "pow (bit_field, __CFLOAT64X)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_pow_2178, "pow", "pow (bit_field, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_pow_2179, "cpow", "pow (bit_field, __CFLOAT128)", FLT128_MANT_DIG, 0 },
#endif
    { test_pow_2180, "pow", "pow (bit_field, char)", DBL_MANT_DIG, 0 },
    { test_pow_2181, "cpow", "pow (bit_field, _Complex char)", DBL_MANT_DIG, 0 },
    { test_pow_2182, "pow", "pow (bit_field, signed char)", DBL_MANT_DIG, 0 },
    { test_pow_2183, "cpow", "pow (bit_field, _Complex signed char)", DBL_MANT_DIG, 0 },
    { test_pow_2184, "pow", "pow (bit_field, unsigned char)", DBL_MANT_DIG, 0 },
    { test_pow_2185, "cpow", "pow (bit_field, _Complex unsigned char)", DBL_MANT_DIG, 0 },
    { test_pow_2186, "pow", "pow (bit_field, short int)", DBL_MANT_DIG, 0 },
    { test_pow_2187, "cpow", "pow (bit_field, _Complex short int)", DBL_MANT_DIG, 0 },
    { test_pow_2188, "pow", "pow (bit_field, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_pow_2189, "cpow", "pow (bit_field, _Complex unsigned short int)", DBL_MANT_DIG, 0 },
    { test_pow_2190, "pow", "pow (bit_field, int)", DBL_MANT_DIG, 0 },
    { test_pow_2191, "cpow", "pow (bit_field, _Complex int)", DBL_MANT_DIG, 0 },
    { test_pow_2192, "pow", "pow (bit_field, unsigned int)", DBL_MANT_DIG, 0 },
    { test_pow_2193, "cpow", "pow (bit_field, _Complex unsigned int)", DBL_MANT_DIG, 0 },
    { test_pow_2194, "pow", "pow (bit_field, long int)", DBL_MANT_DIG, 0 },
    { test_pow_2195, "cpow", "pow (bit_field, _Complex long int)", DBL_MANT_DIG, 0 },
    { test_pow_2196, "pow", "pow (bit_field, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_pow_2197, "cpow", "pow (bit_field, _Complex unsigned long int)", DBL_MANT_DIG, 0 },
    { test_pow_2198, "pow", "pow (bit_field, long long int)", DBL_MANT_DIG, 0 },
    { test_pow_2199, "cpow", "pow (bit_field, _Complex long long int)", DBL_MANT_DIG, 0 },
    { test_pow_2200, "pow", "pow (bit_field, unsigned long long int)", DBL_MANT_DIG, 0 },
    { test_pow_2201, "cpow", "pow (bit_field, _Complex unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_pow_2202, "pow", "pow (bit_field, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_2203, "cpow", "pow (bit_field, _Complex __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_2204, "pow", "pow (bit_field, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_pow_2205, "cpow", "pow (bit_field, _Complex unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_pow_2206, "pow", "pow (bit_field, enum e)", DBL_MANT_DIG, 0 },
    { test_pow_2207, "pow", "pow (bit_field, _Bool)", DBL_MANT_DIG, 0 },
    { test_pow_2208, "pow", "pow (bit_field, bit_field)", DBL_MANT_DIG, 0 },
  };
static int
do_test (void)
{
  for (size_t i = 0;
       i < sizeof (tests) / sizeof (tests[0]);
       i++)
    {
      called_mant_dig = 0;
      called_func_name = "";
      tests[i].func ();
      if (called_mant_dig == tests[i].mant_dig
          && strcmp (called_func_name,
                     tests[i].func_name) == 0)
        num_pass++;
#if !__GNUC_PREREQ (8, 0)
      else if (tests[i].narrow_mant_dig > 0
               && (called_mant_dig
                   >= tests[i].narrow_mant_dig)
               && strcmp (called_func_name,
                          tests[i].func_name) == 0)
        {
          num_pass++;
          printf ("Test %zu (%s):\n"
                  "  Expected: %s precision %d\n"
                  "  Actual: %s precision %d\n"
                  "  (OK with old GCC)\n\n",
                  i, tests[i].test_name,
                  tests[i].func_name,
                  tests[i].mant_dig,
                  called_func_name, called_mant_dig);
        }
#endif
      else
        {
          num_fail++;
          printf ("Test %zu (%s):\n"
                  "  Expected: %s precision %d\n"
                  "  Actual: %s precision %d\n\n",
                  i, tests[i].test_name,
                  tests[i].func_name,
                  tests[i].mant_dig,
                  called_func_name, called_mant_dig);
        }
    }
  printf ("%d pass, %d fail\n", num_pass, num_fail);
  return num_fail != 0;
}

#include <support/test-driver.c>
