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
(sinhf16) (_Float16 arg0 __attribute__ ((unused)))
{
  called_mant_dig = FLT16_MANT_DIG;
  called_func_name = "sinh";
  return 0;
}
#endif
#if defined HUGE_VAL_F16
__CFLOAT16
(csinhf16) (__CFLOAT16 arg0 __attribute__ ((unused)))
{
  called_mant_dig = FLT16_MANT_DIG;
  called_func_name = "csinh";
  return 0;
}
#endif
float
(sinhf) (float arg0 __attribute__ ((unused)))
{
  called_mant_dig = FLT_MANT_DIG;
  called_func_name = "sinh";
  return 0;
}
_Complex float
(csinhf) (_Complex float arg0 __attribute__ ((unused)))
{
  called_mant_dig = FLT_MANT_DIG;
  called_func_name = "csinh";
  return 0;
}
#if defined HUGE_VAL_F32
_Float32
(sinhf32) (_Float32 arg0 __attribute__ ((unused)))
{
  called_mant_dig = FLT32_MANT_DIG;
  called_func_name = "sinh";
  return 0;
}
#endif
#if defined HUGE_VAL_F32
__CFLOAT32
(csinhf32) (__CFLOAT32 arg0 __attribute__ ((unused)))
{
  called_mant_dig = FLT32_MANT_DIG;
  called_func_name = "csinh";
  return 0;
}
#endif
#if defined HUGE_VAL_F32X
_Float32x
(sinhf32x) (_Float32x arg0 __attribute__ ((unused)))
{
  called_mant_dig = FLT32X_MANT_DIG;
  called_func_name = "sinh";
  return 0;
}
#endif
#if defined HUGE_VAL_F32X
__CFLOAT32X
(csinhf32x) (__CFLOAT32X arg0 __attribute__ ((unused)))
{
  called_mant_dig = FLT32X_MANT_DIG;
  called_func_name = "csinh";
  return 0;
}
#endif
double
(sinh) (double arg0 __attribute__ ((unused)))
{
  called_mant_dig = DBL_MANT_DIG;
  called_func_name = "sinh";
  return 0;
}
_Complex double
(csinh) (_Complex double arg0 __attribute__ ((unused)))
{
  called_mant_dig = DBL_MANT_DIG;
  called_func_name = "csinh";
  return 0;
}
long double
(sinhl) (long double arg0 __attribute__ ((unused)))
{
  called_mant_dig = LDBL_MANT_DIG;
  called_func_name = "sinh";
  return 0;
}
_Complex long double
(csinhl) (_Complex long double arg0 __attribute__ ((unused)))
{
  called_mant_dig = LDBL_MANT_DIG;
  called_func_name = "csinh";
  return 0;
}
#if defined HUGE_VAL_F64
_Float64
(sinhf64) (_Float64 arg0 __attribute__ ((unused)))
{
  called_mant_dig = FLT64_MANT_DIG;
  called_func_name = "sinh";
  return 0;
}
#endif
#if defined HUGE_VAL_F64
__CFLOAT64
(csinhf64) (__CFLOAT64 arg0 __attribute__ ((unused)))
{
  called_mant_dig = FLT64_MANT_DIG;
  called_func_name = "csinh";
  return 0;
}
#endif
#if defined HUGE_VAL_F64X
_Float64x
(sinhf64x) (_Float64x arg0 __attribute__ ((unused)))
{
  called_mant_dig = FLT64X_MANT_DIG;
  called_func_name = "sinh";
  return 0;
}
#endif
#if defined HUGE_VAL_F64X
__CFLOAT64X
(csinhf64x) (__CFLOAT64X arg0 __attribute__ ((unused)))
{
  called_mant_dig = FLT64X_MANT_DIG;
  called_func_name = "csinh";
  return 0;
}
#endif
#if defined HUGE_VAL_F128
_Float128
(sinhf128) (_Float128 arg0 __attribute__ ((unused)))
{
  called_mant_dig = FLT128_MANT_DIG;
  called_func_name = "sinh";
  return 0;
}
#endif
#if defined HUGE_VAL_F128
__CFLOAT128
(csinhf128) (__CFLOAT128 arg0 __attribute__ ((unused)))
{
  called_mant_dig = FLT128_MANT_DIG;
  called_func_name = "csinh";
  return 0;
}
#endif
#if defined HUGE_VAL_F16
static void
test_sinh_0 (void)
{
  extern typeof (sinh (vol_var__Float16)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = sinh (vol_var__Float16);
}
#endif
#if defined HUGE_VAL_F16
static void
test_sinh_1 (void)
{
  extern typeof (sinh (vol_var___CFLOAT16)) var___CFLOAT16 __attribute__ ((unused));
  vol_var___CFLOAT16 = sinh (vol_var___CFLOAT16);
}
#endif
static void
test_sinh_2 (void)
{
  extern typeof (sinh (vol_var_float)) var_float __attribute__ ((unused));
  vol_var_float = sinh (vol_var_float);
}
static void
test_sinh_3 (void)
{
  extern typeof (sinh (vol_var__Complex_float)) var__Complex_float __attribute__ ((unused));
  vol_var__Complex_float = sinh (vol_var__Complex_float);
}
#if defined HUGE_VAL_F32
static void
test_sinh_4 (void)
{
  extern typeof (sinh (vol_var__Float32)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = sinh (vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32
static void
test_sinh_5 (void)
{
  extern typeof (sinh (vol_var___CFLOAT32)) var___CFLOAT32 __attribute__ ((unused));
  vol_var___CFLOAT32 = sinh (vol_var___CFLOAT32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_sinh_6 (void)
{
  extern typeof (sinh (vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = sinh (vol_var__Float32x);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_sinh_7 (void)
{
  extern typeof (sinh (vol_var___CFLOAT32X)) var___CFLOAT32X __attribute__ ((unused));
  vol_var___CFLOAT32X = sinh (vol_var___CFLOAT32X);
}
#endif
static void
test_sinh_8 (void)
{
  extern typeof (sinh (vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = sinh (vol_var_double);
}
static void
test_sinh_9 (void)
{
  extern typeof (sinh (vol_var__Complex_double)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = sinh (vol_var__Complex_double);
}
static void
test_sinh_10 (void)
{
  extern typeof (sinh (vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = sinh (vol_var_long_double);
}
static void
test_sinh_11 (void)
{
  extern typeof (sinh (vol_var__Complex_long_double)) var__Complex_long_double __attribute__ ((unused));
  vol_var__Complex_long_double = sinh (vol_var__Complex_long_double);
}
#if defined HUGE_VAL_F64
static void
test_sinh_12 (void)
{
  extern typeof (sinh (vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = sinh (vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64
static void
test_sinh_13 (void)
{
  extern typeof (sinh (vol_var___CFLOAT64)) var___CFLOAT64 __attribute__ ((unused));
  vol_var___CFLOAT64 = sinh (vol_var___CFLOAT64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_sinh_14 (void)
{
  extern typeof (sinh (vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = sinh (vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_sinh_15 (void)
{
  extern typeof (sinh (vol_var___CFLOAT64X)) var___CFLOAT64X __attribute__ ((unused));
  vol_var___CFLOAT64X = sinh (vol_var___CFLOAT64X);
}
#endif
#if defined HUGE_VAL_F128
static void
test_sinh_16 (void)
{
  extern typeof (sinh (vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = sinh (vol_var__Float128);
}
#endif
#if defined HUGE_VAL_F128
static void
test_sinh_17 (void)
{
  extern typeof (sinh (vol_var___CFLOAT128)) var___CFLOAT128 __attribute__ ((unused));
  vol_var___CFLOAT128 = sinh (vol_var___CFLOAT128);
}
#endif
static void
test_sinh_18 (void)
{
  extern typeof (sinh (vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = sinh (vol_var_char);
}
static void
test_sinh_19 (void)
{
  extern typeof (sinh (vol_var__Complex_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = sinh (vol_var__Complex_char);
}
static void
test_sinh_20 (void)
{
  extern typeof (sinh (vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = sinh (vol_var_signed_char);
}
static void
test_sinh_21 (void)
{
  extern typeof (sinh (vol_var__Complex_signed_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = sinh (vol_var__Complex_signed_char);
}
static void
test_sinh_22 (void)
{
  extern typeof (sinh (vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = sinh (vol_var_unsigned_char);
}
static void
test_sinh_23 (void)
{
  extern typeof (sinh (vol_var__Complex_unsigned_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = sinh (vol_var__Complex_unsigned_char);
}
static void
test_sinh_24 (void)
{
  extern typeof (sinh (vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = sinh (vol_var_short_int);
}
static void
test_sinh_25 (void)
{
  extern typeof (sinh (vol_var__Complex_short_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = sinh (vol_var__Complex_short_int);
}
static void
test_sinh_26 (void)
{
  extern typeof (sinh (vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = sinh (vol_var_unsigned_short_int);
}
static void
test_sinh_27 (void)
{
  extern typeof (sinh (vol_var__Complex_unsigned_short_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = sinh (vol_var__Complex_unsigned_short_int);
}
static void
test_sinh_28 (void)
{
  extern typeof (sinh (vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = sinh (vol_var_int);
}
static void
test_sinh_29 (void)
{
  extern typeof (sinh (vol_var__Complex_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = sinh (vol_var__Complex_int);
}
static void
test_sinh_30 (void)
{
  extern typeof (sinh (vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = sinh (vol_var_unsigned_int);
}
static void
test_sinh_31 (void)
{
  extern typeof (sinh (vol_var__Complex_unsigned_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = sinh (vol_var__Complex_unsigned_int);
}
static void
test_sinh_32 (void)
{
  extern typeof (sinh (vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = sinh (vol_var_long_int);
}
static void
test_sinh_33 (void)
{
  extern typeof (sinh (vol_var__Complex_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = sinh (vol_var__Complex_long_int);
}
static void
test_sinh_34 (void)
{
  extern typeof (sinh (vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = sinh (vol_var_unsigned_long_int);
}
static void
test_sinh_35 (void)
{
  extern typeof (sinh (vol_var__Complex_unsigned_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = sinh (vol_var__Complex_unsigned_long_int);
}
static void
test_sinh_36 (void)
{
  extern typeof (sinh (vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = sinh (vol_var_long_long_int);
}
static void
test_sinh_37 (void)
{
  extern typeof (sinh (vol_var__Complex_long_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = sinh (vol_var__Complex_long_long_int);
}
static void
test_sinh_38 (void)
{
  extern typeof (sinh (vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = sinh (vol_var_unsigned_long_long_int);
}
static void
test_sinh_39 (void)
{
  extern typeof (sinh (vol_var__Complex_unsigned_long_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = sinh (vol_var__Complex_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_sinh_40 (void)
{
  extern typeof (sinh (vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = sinh (vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_sinh_41 (void)
{
  extern typeof (sinh (vol_var__Complex___int128)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = sinh (vol_var__Complex___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_sinh_42 (void)
{
  extern typeof (sinh (vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = sinh (vol_var_unsigned___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_sinh_43 (void)
{
  extern typeof (sinh (vol_var__Complex_unsigned___int128)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = sinh (vol_var__Complex_unsigned___int128);
}
#endif
static void
test_sinh_44 (void)
{
  extern typeof (sinh (vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = sinh (vol_var_enum_e);
}
static void
test_sinh_45 (void)
{
  extern typeof (sinh (vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = sinh (vol_var__Bool);
}
static void
test_sinh_46 (void)
{
  extern typeof (sinh (vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = sinh (vol_var_bit_field);
}
static const struct test tests[] =
  {
#if defined HUGE_VAL_F16
    { test_sinh_0, "sinh", "sinh (_Float16)", FLT16_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_sinh_1, "csinh", "sinh (__CFLOAT16)", FLT16_MANT_DIG, 0 },
#endif
    { test_sinh_2, "sinh", "sinh (float)", FLT_MANT_DIG, 0 },
    { test_sinh_3, "csinh", "sinh (_Complex float)", FLT_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_sinh_4, "sinh", "sinh (_Float32)", FLT32_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_sinh_5, "csinh", "sinh (__CFLOAT32)", FLT32_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_sinh_6, "sinh", "sinh (_Float32x)", FLT32X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_sinh_7, "csinh", "sinh (__CFLOAT32X)", FLT32X_MANT_DIG, 0 },
#endif
    { test_sinh_8, "sinh", "sinh (double)", DBL_MANT_DIG, 0 },
    { test_sinh_9, "csinh", "sinh (_Complex double)", DBL_MANT_DIG, 0 },
    { test_sinh_10, "sinh", "sinh (long double)", LDBL_MANT_DIG, 0 },
    { test_sinh_11, "csinh", "sinh (_Complex long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_sinh_12, "sinh", "sinh (_Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_sinh_13, "csinh", "sinh (__CFLOAT64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_sinh_14, "sinh", "sinh (_Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_sinh_15, "csinh", "sinh (__CFLOAT64X)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_sinh_16, "sinh", "sinh (_Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_sinh_17, "csinh", "sinh (__CFLOAT128)", FLT128_MANT_DIG, 0 },
#endif
    { test_sinh_18, "sinh", "sinh (char)", DBL_MANT_DIG, 0 },
    { test_sinh_19, "csinh", "sinh (_Complex char)", DBL_MANT_DIG, 0 },
    { test_sinh_20, "sinh", "sinh (signed char)", DBL_MANT_DIG, 0 },
    { test_sinh_21, "csinh", "sinh (_Complex signed char)", DBL_MANT_DIG, 0 },
    { test_sinh_22, "sinh", "sinh (unsigned char)", DBL_MANT_DIG, 0 },
    { test_sinh_23, "csinh", "sinh (_Complex unsigned char)", DBL_MANT_DIG, 0 },
    { test_sinh_24, "sinh", "sinh (short int)", DBL_MANT_DIG, 0 },
    { test_sinh_25, "csinh", "sinh (_Complex short int)", DBL_MANT_DIG, 0 },
    { test_sinh_26, "sinh", "sinh (unsigned short int)", DBL_MANT_DIG, 0 },
    { test_sinh_27, "csinh", "sinh (_Complex unsigned short int)", DBL_MANT_DIG, 0 },
    { test_sinh_28, "sinh", "sinh (int)", DBL_MANT_DIG, 0 },
    { test_sinh_29, "csinh", "sinh (_Complex int)", DBL_MANT_DIG, 0 },
    { test_sinh_30, "sinh", "sinh (unsigned int)", DBL_MANT_DIG, 0 },
    { test_sinh_31, "csinh", "sinh (_Complex unsigned int)", DBL_MANT_DIG, 0 },
    { test_sinh_32, "sinh", "sinh (long int)", DBL_MANT_DIG, 0 },
    { test_sinh_33, "csinh", "sinh (_Complex long int)", DBL_MANT_DIG, 0 },
    { test_sinh_34, "sinh", "sinh (unsigned long int)", DBL_MANT_DIG, 0 },
    { test_sinh_35, "csinh", "sinh (_Complex unsigned long int)", DBL_MANT_DIG, 0 },
    { test_sinh_36, "sinh", "sinh (long long int)", DBL_MANT_DIG, 0 },
    { test_sinh_37, "csinh", "sinh (_Complex long long int)", DBL_MANT_DIG, 0 },
    { test_sinh_38, "sinh", "sinh (unsigned long long int)", DBL_MANT_DIG, 0 },
    { test_sinh_39, "csinh", "sinh (_Complex unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_sinh_40, "sinh", "sinh (__int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_sinh_41, "csinh", "sinh (_Complex __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_sinh_42, "sinh", "sinh (unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_sinh_43, "csinh", "sinh (_Complex unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_sinh_44, "sinh", "sinh (enum e)", DBL_MANT_DIG, 0 },
    { test_sinh_45, "sinh", "sinh (_Bool)", DBL_MANT_DIG, 0 },
    { test_sinh_46, "sinh", "sinh (bit_field)", DBL_MANT_DIG, 0 },
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
