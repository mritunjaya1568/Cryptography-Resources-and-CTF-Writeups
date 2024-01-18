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
(logf16) (_Float16 arg0 __attribute__ ((unused)))
{
  called_mant_dig = FLT16_MANT_DIG;
  called_func_name = "log";
  return 0;
}
#endif
#if defined HUGE_VAL_F16
__CFLOAT16
(clogf16) (__CFLOAT16 arg0 __attribute__ ((unused)))
{
  called_mant_dig = FLT16_MANT_DIG;
  called_func_name = "clog";
  return 0;
}
#endif
float
(logf) (float arg0 __attribute__ ((unused)))
{
  called_mant_dig = FLT_MANT_DIG;
  called_func_name = "log";
  return 0;
}
_Complex float
(clogf) (_Complex float arg0 __attribute__ ((unused)))
{
  called_mant_dig = FLT_MANT_DIG;
  called_func_name = "clog";
  return 0;
}
#if defined HUGE_VAL_F32
_Float32
(logf32) (_Float32 arg0 __attribute__ ((unused)))
{
  called_mant_dig = FLT32_MANT_DIG;
  called_func_name = "log";
  return 0;
}
#endif
#if defined HUGE_VAL_F32
__CFLOAT32
(clogf32) (__CFLOAT32 arg0 __attribute__ ((unused)))
{
  called_mant_dig = FLT32_MANT_DIG;
  called_func_name = "clog";
  return 0;
}
#endif
#if defined HUGE_VAL_F32X
_Float32x
(logf32x) (_Float32x arg0 __attribute__ ((unused)))
{
  called_mant_dig = FLT32X_MANT_DIG;
  called_func_name = "log";
  return 0;
}
#endif
#if defined HUGE_VAL_F32X
__CFLOAT32X
(clogf32x) (__CFLOAT32X arg0 __attribute__ ((unused)))
{
  called_mant_dig = FLT32X_MANT_DIG;
  called_func_name = "clog";
  return 0;
}
#endif
double
(log) (double arg0 __attribute__ ((unused)))
{
  called_mant_dig = DBL_MANT_DIG;
  called_func_name = "log";
  return 0;
}
_Complex double
(clog) (_Complex double arg0 __attribute__ ((unused)))
{
  called_mant_dig = DBL_MANT_DIG;
  called_func_name = "clog";
  return 0;
}
long double
(logl) (long double arg0 __attribute__ ((unused)))
{
  called_mant_dig = LDBL_MANT_DIG;
  called_func_name = "log";
  return 0;
}
_Complex long double
(clogl) (_Complex long double arg0 __attribute__ ((unused)))
{
  called_mant_dig = LDBL_MANT_DIG;
  called_func_name = "clog";
  return 0;
}
#if defined HUGE_VAL_F64
_Float64
(logf64) (_Float64 arg0 __attribute__ ((unused)))
{
  called_mant_dig = FLT64_MANT_DIG;
  called_func_name = "log";
  return 0;
}
#endif
#if defined HUGE_VAL_F64
__CFLOAT64
(clogf64) (__CFLOAT64 arg0 __attribute__ ((unused)))
{
  called_mant_dig = FLT64_MANT_DIG;
  called_func_name = "clog";
  return 0;
}
#endif
#if defined HUGE_VAL_F64X
_Float64x
(logf64x) (_Float64x arg0 __attribute__ ((unused)))
{
  called_mant_dig = FLT64X_MANT_DIG;
  called_func_name = "log";
  return 0;
}
#endif
#if defined HUGE_VAL_F64X
__CFLOAT64X
(clogf64x) (__CFLOAT64X arg0 __attribute__ ((unused)))
{
  called_mant_dig = FLT64X_MANT_DIG;
  called_func_name = "clog";
  return 0;
}
#endif
#if defined HUGE_VAL_F128
_Float128
(logf128) (_Float128 arg0 __attribute__ ((unused)))
{
  called_mant_dig = FLT128_MANT_DIG;
  called_func_name = "log";
  return 0;
}
#endif
#if defined HUGE_VAL_F128
__CFLOAT128
(clogf128) (__CFLOAT128 arg0 __attribute__ ((unused)))
{
  called_mant_dig = FLT128_MANT_DIG;
  called_func_name = "clog";
  return 0;
}
#endif
#if defined HUGE_VAL_F16
static void
test_log_0 (void)
{
  extern typeof (log (vol_var__Float16)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = log (vol_var__Float16);
}
#endif
#if defined HUGE_VAL_F16
static void
test_log_1 (void)
{
  extern typeof (log (vol_var___CFLOAT16)) var___CFLOAT16 __attribute__ ((unused));
  vol_var___CFLOAT16 = log (vol_var___CFLOAT16);
}
#endif
static void
test_log_2 (void)
{
  extern typeof (log (vol_var_float)) var_float __attribute__ ((unused));
  vol_var_float = log (vol_var_float);
}
static void
test_log_3 (void)
{
  extern typeof (log (vol_var__Complex_float)) var__Complex_float __attribute__ ((unused));
  vol_var__Complex_float = log (vol_var__Complex_float);
}
#if defined HUGE_VAL_F32
static void
test_log_4 (void)
{
  extern typeof (log (vol_var__Float32)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = log (vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32
static void
test_log_5 (void)
{
  extern typeof (log (vol_var___CFLOAT32)) var___CFLOAT32 __attribute__ ((unused));
  vol_var___CFLOAT32 = log (vol_var___CFLOAT32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_log_6 (void)
{
  extern typeof (log (vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = log (vol_var__Float32x);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_log_7 (void)
{
  extern typeof (log (vol_var___CFLOAT32X)) var___CFLOAT32X __attribute__ ((unused));
  vol_var___CFLOAT32X = log (vol_var___CFLOAT32X);
}
#endif
static void
test_log_8 (void)
{
  extern typeof (log (vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = log (vol_var_double);
}
static void
test_log_9 (void)
{
  extern typeof (log (vol_var__Complex_double)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = log (vol_var__Complex_double);
}
static void
test_log_10 (void)
{
  extern typeof (log (vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = log (vol_var_long_double);
}
static void
test_log_11 (void)
{
  extern typeof (log (vol_var__Complex_long_double)) var__Complex_long_double __attribute__ ((unused));
  vol_var__Complex_long_double = log (vol_var__Complex_long_double);
}
#if defined HUGE_VAL_F64
static void
test_log_12 (void)
{
  extern typeof (log (vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = log (vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64
static void
test_log_13 (void)
{
  extern typeof (log (vol_var___CFLOAT64)) var___CFLOAT64 __attribute__ ((unused));
  vol_var___CFLOAT64 = log (vol_var___CFLOAT64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_log_14 (void)
{
  extern typeof (log (vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = log (vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_log_15 (void)
{
  extern typeof (log (vol_var___CFLOAT64X)) var___CFLOAT64X __attribute__ ((unused));
  vol_var___CFLOAT64X = log (vol_var___CFLOAT64X);
}
#endif
#if defined HUGE_VAL_F128
static void
test_log_16 (void)
{
  extern typeof (log (vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = log (vol_var__Float128);
}
#endif
#if defined HUGE_VAL_F128
static void
test_log_17 (void)
{
  extern typeof (log (vol_var___CFLOAT128)) var___CFLOAT128 __attribute__ ((unused));
  vol_var___CFLOAT128 = log (vol_var___CFLOAT128);
}
#endif
static void
test_log_18 (void)
{
  extern typeof (log (vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = log (vol_var_char);
}
static void
test_log_19 (void)
{
  extern typeof (log (vol_var__Complex_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = log (vol_var__Complex_char);
}
static void
test_log_20 (void)
{
  extern typeof (log (vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = log (vol_var_signed_char);
}
static void
test_log_21 (void)
{
  extern typeof (log (vol_var__Complex_signed_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = log (vol_var__Complex_signed_char);
}
static void
test_log_22 (void)
{
  extern typeof (log (vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = log (vol_var_unsigned_char);
}
static void
test_log_23 (void)
{
  extern typeof (log (vol_var__Complex_unsigned_char)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = log (vol_var__Complex_unsigned_char);
}
static void
test_log_24 (void)
{
  extern typeof (log (vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = log (vol_var_short_int);
}
static void
test_log_25 (void)
{
  extern typeof (log (vol_var__Complex_short_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = log (vol_var__Complex_short_int);
}
static void
test_log_26 (void)
{
  extern typeof (log (vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = log (vol_var_unsigned_short_int);
}
static void
test_log_27 (void)
{
  extern typeof (log (vol_var__Complex_unsigned_short_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = log (vol_var__Complex_unsigned_short_int);
}
static void
test_log_28 (void)
{
  extern typeof (log (vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = log (vol_var_int);
}
static void
test_log_29 (void)
{
  extern typeof (log (vol_var__Complex_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = log (vol_var__Complex_int);
}
static void
test_log_30 (void)
{
  extern typeof (log (vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = log (vol_var_unsigned_int);
}
static void
test_log_31 (void)
{
  extern typeof (log (vol_var__Complex_unsigned_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = log (vol_var__Complex_unsigned_int);
}
static void
test_log_32 (void)
{
  extern typeof (log (vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = log (vol_var_long_int);
}
static void
test_log_33 (void)
{
  extern typeof (log (vol_var__Complex_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = log (vol_var__Complex_long_int);
}
static void
test_log_34 (void)
{
  extern typeof (log (vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = log (vol_var_unsigned_long_int);
}
static void
test_log_35 (void)
{
  extern typeof (log (vol_var__Complex_unsigned_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = log (vol_var__Complex_unsigned_long_int);
}
static void
test_log_36 (void)
{
  extern typeof (log (vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = log (vol_var_long_long_int);
}
static void
test_log_37 (void)
{
  extern typeof (log (vol_var__Complex_long_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = log (vol_var__Complex_long_long_int);
}
static void
test_log_38 (void)
{
  extern typeof (log (vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = log (vol_var_unsigned_long_long_int);
}
static void
test_log_39 (void)
{
  extern typeof (log (vol_var__Complex_unsigned_long_long_int)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = log (vol_var__Complex_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_log_40 (void)
{
  extern typeof (log (vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = log (vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_log_41 (void)
{
  extern typeof (log (vol_var__Complex___int128)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = log (vol_var__Complex___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_log_42 (void)
{
  extern typeof (log (vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = log (vol_var_unsigned___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_log_43 (void)
{
  extern typeof (log (vol_var__Complex_unsigned___int128)) var__Complex_double __attribute__ ((unused));
  vol_var__Complex_double = log (vol_var__Complex_unsigned___int128);
}
#endif
static void
test_log_44 (void)
{
  extern typeof (log (vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = log (vol_var_enum_e);
}
static void
test_log_45 (void)
{
  extern typeof (log (vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = log (vol_var__Bool);
}
static void
test_log_46 (void)
{
  extern typeof (log (vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = log (vol_var_bit_field);
}
static const struct test tests[] =
  {
#if defined HUGE_VAL_F16
    { test_log_0, "log", "log (_Float16)", FLT16_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_log_1, "clog", "log (__CFLOAT16)", FLT16_MANT_DIG, 0 },
#endif
    { test_log_2, "log", "log (float)", FLT_MANT_DIG, 0 },
    { test_log_3, "clog", "log (_Complex float)", FLT_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_log_4, "log", "log (_Float32)", FLT32_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_log_5, "clog", "log (__CFLOAT32)", FLT32_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_log_6, "log", "log (_Float32x)", FLT32X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_log_7, "clog", "log (__CFLOAT32X)", FLT32X_MANT_DIG, 0 },
#endif
    { test_log_8, "log", "log (double)", DBL_MANT_DIG, 0 },
    { test_log_9, "clog", "log (_Complex double)", DBL_MANT_DIG, 0 },
    { test_log_10, "log", "log (long double)", LDBL_MANT_DIG, 0 },
    { test_log_11, "clog", "log (_Complex long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_log_12, "log", "log (_Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_log_13, "clog", "log (__CFLOAT64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_log_14, "log", "log (_Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_log_15, "clog", "log (__CFLOAT64X)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_log_16, "log", "log (_Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_log_17, "clog", "log (__CFLOAT128)", FLT128_MANT_DIG, 0 },
#endif
    { test_log_18, "log", "log (char)", DBL_MANT_DIG, 0 },
    { test_log_19, "clog", "log (_Complex char)", DBL_MANT_DIG, 0 },
    { test_log_20, "log", "log (signed char)", DBL_MANT_DIG, 0 },
    { test_log_21, "clog", "log (_Complex signed char)", DBL_MANT_DIG, 0 },
    { test_log_22, "log", "log (unsigned char)", DBL_MANT_DIG, 0 },
    { test_log_23, "clog", "log (_Complex unsigned char)", DBL_MANT_DIG, 0 },
    { test_log_24, "log", "log (short int)", DBL_MANT_DIG, 0 },
    { test_log_25, "clog", "log (_Complex short int)", DBL_MANT_DIG, 0 },
    { test_log_26, "log", "log (unsigned short int)", DBL_MANT_DIG, 0 },
    { test_log_27, "clog", "log (_Complex unsigned short int)", DBL_MANT_DIG, 0 },
    { test_log_28, "log", "log (int)", DBL_MANT_DIG, 0 },
    { test_log_29, "clog", "log (_Complex int)", DBL_MANT_DIG, 0 },
    { test_log_30, "log", "log (unsigned int)", DBL_MANT_DIG, 0 },
    { test_log_31, "clog", "log (_Complex unsigned int)", DBL_MANT_DIG, 0 },
    { test_log_32, "log", "log (long int)", DBL_MANT_DIG, 0 },
    { test_log_33, "clog", "log (_Complex long int)", DBL_MANT_DIG, 0 },
    { test_log_34, "log", "log (unsigned long int)", DBL_MANT_DIG, 0 },
    { test_log_35, "clog", "log (_Complex unsigned long int)", DBL_MANT_DIG, 0 },
    { test_log_36, "log", "log (long long int)", DBL_MANT_DIG, 0 },
    { test_log_37, "clog", "log (_Complex long long int)", DBL_MANT_DIG, 0 },
    { test_log_38, "log", "log (unsigned long long int)", DBL_MANT_DIG, 0 },
    { test_log_39, "clog", "log (_Complex unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_log_40, "log", "log (__int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_log_41, "clog", "log (_Complex __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_log_42, "log", "log (unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_log_43, "clog", "log (_Complex unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_log_44, "log", "log (enum e)", DBL_MANT_DIG, 0 },
    { test_log_45, "log", "log (_Bool)", DBL_MANT_DIG, 0 },
    { test_log_46, "log", "log (bit_field)", DBL_MANT_DIG, 0 },
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