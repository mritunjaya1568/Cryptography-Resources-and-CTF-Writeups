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
int * var_int_p __attribute__ ((unused));
int * volatile vol_var_int_p __attribute__ ((unused));
#if defined HUGE_VAL_F16
_Float16
(remquof16) (_Float16 arg0 __attribute__ ((unused)), _Float16 arg1 __attribute__ ((unused)), int * arg2 __attribute__ ((unused)))
{
  called_mant_dig = FLT16_MANT_DIG;
  called_func_name = "remquo";
  return 0;
}
#endif
float
(remquof) (float arg0 __attribute__ ((unused)), float arg1 __attribute__ ((unused)), int * arg2 __attribute__ ((unused)))
{
  called_mant_dig = FLT_MANT_DIG;
  called_func_name = "remquo";
  return 0;
}
#if defined HUGE_VAL_F32
_Float32
(remquof32) (_Float32 arg0 __attribute__ ((unused)), _Float32 arg1 __attribute__ ((unused)), int * arg2 __attribute__ ((unused)))
{
  called_mant_dig = FLT32_MANT_DIG;
  called_func_name = "remquo";
  return 0;
}
#endif
#if defined HUGE_VAL_F32X
_Float32x
(remquof32x) (_Float32x arg0 __attribute__ ((unused)), _Float32x arg1 __attribute__ ((unused)), int * arg2 __attribute__ ((unused)))
{
  called_mant_dig = FLT32X_MANT_DIG;
  called_func_name = "remquo";
  return 0;
}
#endif
double
(remquo) (double arg0 __attribute__ ((unused)), double arg1 __attribute__ ((unused)), int * arg2 __attribute__ ((unused)))
{
  called_mant_dig = DBL_MANT_DIG;
  called_func_name = "remquo";
  return 0;
}
long double
(remquol) (long double arg0 __attribute__ ((unused)), long double arg1 __attribute__ ((unused)), int * arg2 __attribute__ ((unused)))
{
  called_mant_dig = LDBL_MANT_DIG;
  called_func_name = "remquo";
  return 0;
}
#if defined HUGE_VAL_F64
_Float64
(remquof64) (_Float64 arg0 __attribute__ ((unused)), _Float64 arg1 __attribute__ ((unused)), int * arg2 __attribute__ ((unused)))
{
  called_mant_dig = FLT64_MANT_DIG;
  called_func_name = "remquo";
  return 0;
}
#endif
#if defined HUGE_VAL_F64X
_Float64x
(remquof64x) (_Float64x arg0 __attribute__ ((unused)), _Float64x arg1 __attribute__ ((unused)), int * arg2 __attribute__ ((unused)))
{
  called_mant_dig = FLT64X_MANT_DIG;
  called_func_name = "remquo";
  return 0;
}
#endif
#if defined HUGE_VAL_F128
_Float128
(remquof128) (_Float128 arg0 __attribute__ ((unused)), _Float128 arg1 __attribute__ ((unused)), int * arg2 __attribute__ ((unused)))
{
  called_mant_dig = FLT128_MANT_DIG;
  called_func_name = "remquo";
  return 0;
}
#endif
#if defined HUGE_VAL_F16
static void
test_remquo_0 (void)
{
  extern typeof (remquo (vol_var__Float16, vol_var__Float16, vol_var_int_p)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = remquo (vol_var__Float16, vol_var__Float16, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F16
static void
test_remquo_1 (void)
{
  extern typeof (remquo (vol_var__Float16, vol_var_float, vol_var_int_p)) var_float __attribute__ ((unused));
  vol_var_float = remquo (vol_var__Float16, vol_var_float, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F32
static void
test_remquo_2 (void)
{
  extern typeof (remquo (vol_var__Float16, vol_var__Float32, vol_var_int_p)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = remquo (vol_var__Float16, vol_var__Float32, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
static void
test_remquo_3 (void)
{
  extern typeof (remquo (vol_var__Float16, vol_var__Float32x, vol_var_int_p)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = remquo (vol_var__Float16, vol_var__Float32x, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F16
static void
test_remquo_4 (void)
{
  extern typeof (remquo (vol_var__Float16, vol_var_double, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var__Float16, vol_var_double, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F16
static void
test_remquo_5 (void)
{
  extern typeof (remquo (vol_var__Float16, vol_var_long_double, vol_var_int_p)) var_long_double __attribute__ ((unused));
  vol_var_long_double = remquo (vol_var__Float16, vol_var_long_double, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F64
static void
test_remquo_6 (void)
{
  extern typeof (remquo (vol_var__Float16, vol_var__Float64, vol_var_int_p)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = remquo (vol_var__Float16, vol_var__Float64, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
static void
test_remquo_7 (void)
{
  extern typeof (remquo (vol_var__Float16, vol_var__Float64x, vol_var_int_p)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = remquo (vol_var__Float16, vol_var__Float64x, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F16
static void
test_remquo_8 (void)
{
  extern typeof (remquo (vol_var__Float16, vol_var__Float128, vol_var_int_p)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = remquo (vol_var__Float16, vol_var__Float128, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F16
static void
test_remquo_9 (void)
{
  extern typeof (remquo (vol_var__Float16, vol_var_char, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var__Float16, vol_var_char, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F16
static void
test_remquo_10 (void)
{
  extern typeof (remquo (vol_var__Float16, vol_var_signed_char, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var__Float16, vol_var_signed_char, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F16
static void
test_remquo_11 (void)
{
  extern typeof (remquo (vol_var__Float16, vol_var_unsigned_char, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var__Float16, vol_var_unsigned_char, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F16
static void
test_remquo_12 (void)
{
  extern typeof (remquo (vol_var__Float16, vol_var_short_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var__Float16, vol_var_short_int, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F16
static void
test_remquo_13 (void)
{
  extern typeof (remquo (vol_var__Float16, vol_var_unsigned_short_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var__Float16, vol_var_unsigned_short_int, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F16
static void
test_remquo_14 (void)
{
  extern typeof (remquo (vol_var__Float16, vol_var_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var__Float16, vol_var_int, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F16
static void
test_remquo_15 (void)
{
  extern typeof (remquo (vol_var__Float16, vol_var_unsigned_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var__Float16, vol_var_unsigned_int, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F16
static void
test_remquo_16 (void)
{
  extern typeof (remquo (vol_var__Float16, vol_var_long_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var__Float16, vol_var_long_int, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F16
static void
test_remquo_17 (void)
{
  extern typeof (remquo (vol_var__Float16, vol_var_unsigned_long_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var__Float16, vol_var_unsigned_long_int, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F16
static void
test_remquo_18 (void)
{
  extern typeof (remquo (vol_var__Float16, vol_var_long_long_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var__Float16, vol_var_long_long_int, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F16
static void
test_remquo_19 (void)
{
  extern typeof (remquo (vol_var__Float16, vol_var_unsigned_long_long_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var__Float16, vol_var_unsigned_long_long_int, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_remquo_20 (void)
{
  extern typeof (remquo (vol_var__Float16, vol_var___int128, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var__Float16, vol_var___int128, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_remquo_21 (void)
{
  extern typeof (remquo (vol_var__Float16, vol_var_unsigned___int128, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var__Float16, vol_var_unsigned___int128, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F16
static void
test_remquo_22 (void)
{
  extern typeof (remquo (vol_var__Float16, vol_var_enum_e, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var__Float16, vol_var_enum_e, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F16
static void
test_remquo_23 (void)
{
  extern typeof (remquo (vol_var__Float16, vol_var__Bool, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var__Float16, vol_var__Bool, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F16
static void
test_remquo_24 (void)
{
  extern typeof (remquo (vol_var__Float16, vol_var_bit_field, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var__Float16, vol_var_bit_field, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F16
static void
test_remquo_25 (void)
{
  extern typeof (remquo (vol_var_float, vol_var__Float16, vol_var_int_p)) var_float __attribute__ ((unused));
  vol_var_float = remquo (vol_var_float, vol_var__Float16, vol_var_int_p);
}
#endif
static void
test_remquo_26 (void)
{
  extern typeof (remquo (vol_var_float, vol_var_float, vol_var_int_p)) var_float __attribute__ ((unused));
  vol_var_float = remquo (vol_var_float, vol_var_float, vol_var_int_p);
}
#if defined HUGE_VAL_F32
static void
test_remquo_27 (void)
{
  extern typeof (remquo (vol_var_float, vol_var__Float32, vol_var_int_p)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = remquo (vol_var_float, vol_var__Float32, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_remquo_28 (void)
{
  extern typeof (remquo (vol_var_float, vol_var__Float32x, vol_var_int_p)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = remquo (vol_var_float, vol_var__Float32x, vol_var_int_p);
}
#endif
static void
test_remquo_29 (void)
{
  extern typeof (remquo (vol_var_float, vol_var_double, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_float, vol_var_double, vol_var_int_p);
}
static void
test_remquo_30 (void)
{
  extern typeof (remquo (vol_var_float, vol_var_long_double, vol_var_int_p)) var_long_double __attribute__ ((unused));
  vol_var_long_double = remquo (vol_var_float, vol_var_long_double, vol_var_int_p);
}
#if defined HUGE_VAL_F64
static void
test_remquo_31 (void)
{
  extern typeof (remquo (vol_var_float, vol_var__Float64, vol_var_int_p)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = remquo (vol_var_float, vol_var__Float64, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_remquo_32 (void)
{
  extern typeof (remquo (vol_var_float, vol_var__Float64x, vol_var_int_p)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = remquo (vol_var_float, vol_var__Float64x, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F128
static void
test_remquo_33 (void)
{
  extern typeof (remquo (vol_var_float, vol_var__Float128, vol_var_int_p)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = remquo (vol_var_float, vol_var__Float128, vol_var_int_p);
}
#endif
static void
test_remquo_34 (void)
{
  extern typeof (remquo (vol_var_float, vol_var_char, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_float, vol_var_char, vol_var_int_p);
}
static void
test_remquo_35 (void)
{
  extern typeof (remquo (vol_var_float, vol_var_signed_char, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_float, vol_var_signed_char, vol_var_int_p);
}
static void
test_remquo_36 (void)
{
  extern typeof (remquo (vol_var_float, vol_var_unsigned_char, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_float, vol_var_unsigned_char, vol_var_int_p);
}
static void
test_remquo_37 (void)
{
  extern typeof (remquo (vol_var_float, vol_var_short_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_float, vol_var_short_int, vol_var_int_p);
}
static void
test_remquo_38 (void)
{
  extern typeof (remquo (vol_var_float, vol_var_unsigned_short_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_float, vol_var_unsigned_short_int, vol_var_int_p);
}
static void
test_remquo_39 (void)
{
  extern typeof (remquo (vol_var_float, vol_var_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_float, vol_var_int, vol_var_int_p);
}
static void
test_remquo_40 (void)
{
  extern typeof (remquo (vol_var_float, vol_var_unsigned_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_float, vol_var_unsigned_int, vol_var_int_p);
}
static void
test_remquo_41 (void)
{
  extern typeof (remquo (vol_var_float, vol_var_long_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_float, vol_var_long_int, vol_var_int_p);
}
static void
test_remquo_42 (void)
{
  extern typeof (remquo (vol_var_float, vol_var_unsigned_long_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_float, vol_var_unsigned_long_int, vol_var_int_p);
}
static void
test_remquo_43 (void)
{
  extern typeof (remquo (vol_var_float, vol_var_long_long_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_float, vol_var_long_long_int, vol_var_int_p);
}
static void
test_remquo_44 (void)
{
  extern typeof (remquo (vol_var_float, vol_var_unsigned_long_long_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_float, vol_var_unsigned_long_long_int, vol_var_int_p);
}
#if defined __SIZEOF_INT128__
static void
test_remquo_45 (void)
{
  extern typeof (remquo (vol_var_float, vol_var___int128, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_float, vol_var___int128, vol_var_int_p);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_remquo_46 (void)
{
  extern typeof (remquo (vol_var_float, vol_var_unsigned___int128, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_float, vol_var_unsigned___int128, vol_var_int_p);
}
#endif
static void
test_remquo_47 (void)
{
  extern typeof (remquo (vol_var_float, vol_var_enum_e, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_float, vol_var_enum_e, vol_var_int_p);
}
static void
test_remquo_48 (void)
{
  extern typeof (remquo (vol_var_float, vol_var__Bool, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_float, vol_var__Bool, vol_var_int_p);
}
static void
test_remquo_49 (void)
{
  extern typeof (remquo (vol_var_float, vol_var_bit_field, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_float, vol_var_bit_field, vol_var_int_p);
}
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F32
static void
test_remquo_50 (void)
{
  extern typeof (remquo (vol_var__Float32, vol_var__Float16, vol_var_int_p)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = remquo (vol_var__Float32, vol_var__Float16, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F32
static void
test_remquo_51 (void)
{
  extern typeof (remquo (vol_var__Float32, vol_var_float, vol_var_int_p)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = remquo (vol_var__Float32, vol_var_float, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F32
static void
test_remquo_52 (void)
{
  extern typeof (remquo (vol_var__Float32, vol_var__Float32, vol_var_int_p)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = remquo (vol_var__Float32, vol_var__Float32, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
static void
test_remquo_53 (void)
{
  extern typeof (remquo (vol_var__Float32, vol_var__Float32x, vol_var_int_p)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = remquo (vol_var__Float32, vol_var__Float32x, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F32
static void
test_remquo_54 (void)
{
  extern typeof (remquo (vol_var__Float32, vol_var_double, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var__Float32, vol_var_double, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F32
static void
test_remquo_55 (void)
{
  extern typeof (remquo (vol_var__Float32, vol_var_long_double, vol_var_int_p)) var_long_double __attribute__ ((unused));
  vol_var_long_double = remquo (vol_var__Float32, vol_var_long_double, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F64
static void
test_remquo_56 (void)
{
  extern typeof (remquo (vol_var__Float32, vol_var__Float64, vol_var_int_p)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = remquo (vol_var__Float32, vol_var__Float64, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
static void
test_remquo_57 (void)
{
  extern typeof (remquo (vol_var__Float32, vol_var__Float64x, vol_var_int_p)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = remquo (vol_var__Float32, vol_var__Float64x, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F32
static void
test_remquo_58 (void)
{
  extern typeof (remquo (vol_var__Float32, vol_var__Float128, vol_var_int_p)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = remquo (vol_var__Float32, vol_var__Float128, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F32
static void
test_remquo_59 (void)
{
  extern typeof (remquo (vol_var__Float32, vol_var_char, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var__Float32, vol_var_char, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F32
static void
test_remquo_60 (void)
{
  extern typeof (remquo (vol_var__Float32, vol_var_signed_char, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var__Float32, vol_var_signed_char, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F32
static void
test_remquo_61 (void)
{
  extern typeof (remquo (vol_var__Float32, vol_var_unsigned_char, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var__Float32, vol_var_unsigned_char, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F32
static void
test_remquo_62 (void)
{
  extern typeof (remquo (vol_var__Float32, vol_var_short_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var__Float32, vol_var_short_int, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F32
static void
test_remquo_63 (void)
{
  extern typeof (remquo (vol_var__Float32, vol_var_unsigned_short_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var__Float32, vol_var_unsigned_short_int, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F32
static void
test_remquo_64 (void)
{
  extern typeof (remquo (vol_var__Float32, vol_var_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var__Float32, vol_var_int, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F32
static void
test_remquo_65 (void)
{
  extern typeof (remquo (vol_var__Float32, vol_var_unsigned_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var__Float32, vol_var_unsigned_int, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F32
static void
test_remquo_66 (void)
{
  extern typeof (remquo (vol_var__Float32, vol_var_long_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var__Float32, vol_var_long_int, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F32
static void
test_remquo_67 (void)
{
  extern typeof (remquo (vol_var__Float32, vol_var_unsigned_long_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var__Float32, vol_var_unsigned_long_int, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F32
static void
test_remquo_68 (void)
{
  extern typeof (remquo (vol_var__Float32, vol_var_long_long_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var__Float32, vol_var_long_long_int, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F32
static void
test_remquo_69 (void)
{
  extern typeof (remquo (vol_var__Float32, vol_var_unsigned_long_long_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var__Float32, vol_var_unsigned_long_long_int, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_remquo_70 (void)
{
  extern typeof (remquo (vol_var__Float32, vol_var___int128, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var__Float32, vol_var___int128, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_remquo_71 (void)
{
  extern typeof (remquo (vol_var__Float32, vol_var_unsigned___int128, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var__Float32, vol_var_unsigned___int128, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F32
static void
test_remquo_72 (void)
{
  extern typeof (remquo (vol_var__Float32, vol_var_enum_e, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var__Float32, vol_var_enum_e, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F32
static void
test_remquo_73 (void)
{
  extern typeof (remquo (vol_var__Float32, vol_var__Bool, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var__Float32, vol_var__Bool, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F32
static void
test_remquo_74 (void)
{
  extern typeof (remquo (vol_var__Float32, vol_var_bit_field, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var__Float32, vol_var_bit_field, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
static void
test_remquo_75 (void)
{
  extern typeof (remquo (vol_var__Float32x, vol_var__Float16, vol_var_int_p)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = remquo (vol_var__Float32x, vol_var__Float16, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_remquo_76 (void)
{
  extern typeof (remquo (vol_var__Float32x, vol_var_float, vol_var_int_p)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = remquo (vol_var__Float32x, vol_var_float, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
static void
test_remquo_77 (void)
{
  extern typeof (remquo (vol_var__Float32x, vol_var__Float32, vol_var_int_p)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = remquo (vol_var__Float32x, vol_var__Float32, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_remquo_78 (void)
{
  extern typeof (remquo (vol_var__Float32x, vol_var__Float32x, vol_var_int_p)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = remquo (vol_var__Float32x, vol_var__Float32x, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_remquo_79 (void)
{
  extern typeof (remquo (vol_var__Float32x, vol_var_double, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var__Float32x, vol_var_double, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_remquo_80 (void)
{
  extern typeof (remquo (vol_var__Float32x, vol_var_long_double, vol_var_int_p)) var_long_double __attribute__ ((unused));
  vol_var_long_double = remquo (vol_var__Float32x, vol_var_long_double, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F32X && defined HUGE_VAL_F64
static void
test_remquo_81 (void)
{
  extern typeof (remquo (vol_var__Float32x, vol_var__Float64, vol_var_int_p)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = remquo (vol_var__Float32x, vol_var__Float64, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
static void
test_remquo_82 (void)
{
  extern typeof (remquo (vol_var__Float32x, vol_var__Float64x, vol_var_int_p)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = remquo (vol_var__Float32x, vol_var__Float64x, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
static void
test_remquo_83 (void)
{
  extern typeof (remquo (vol_var__Float32x, vol_var__Float128, vol_var_int_p)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = remquo (vol_var__Float32x, vol_var__Float128, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_remquo_84 (void)
{
  extern typeof (remquo (vol_var__Float32x, vol_var_char, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var__Float32x, vol_var_char, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_remquo_85 (void)
{
  extern typeof (remquo (vol_var__Float32x, vol_var_signed_char, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var__Float32x, vol_var_signed_char, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_remquo_86 (void)
{
  extern typeof (remquo (vol_var__Float32x, vol_var_unsigned_char, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var__Float32x, vol_var_unsigned_char, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_remquo_87 (void)
{
  extern typeof (remquo (vol_var__Float32x, vol_var_short_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var__Float32x, vol_var_short_int, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_remquo_88 (void)
{
  extern typeof (remquo (vol_var__Float32x, vol_var_unsigned_short_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var__Float32x, vol_var_unsigned_short_int, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_remquo_89 (void)
{
  extern typeof (remquo (vol_var__Float32x, vol_var_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var__Float32x, vol_var_int, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_remquo_90 (void)
{
  extern typeof (remquo (vol_var__Float32x, vol_var_unsigned_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var__Float32x, vol_var_unsigned_int, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_remquo_91 (void)
{
  extern typeof (remquo (vol_var__Float32x, vol_var_long_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var__Float32x, vol_var_long_int, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_remquo_92 (void)
{
  extern typeof (remquo (vol_var__Float32x, vol_var_unsigned_long_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var__Float32x, vol_var_unsigned_long_int, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_remquo_93 (void)
{
  extern typeof (remquo (vol_var__Float32x, vol_var_long_long_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var__Float32x, vol_var_long_long_int, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_remquo_94 (void)
{
  extern typeof (remquo (vol_var__Float32x, vol_var_unsigned_long_long_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var__Float32x, vol_var_unsigned_long_long_int, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_remquo_95 (void)
{
  extern typeof (remquo (vol_var__Float32x, vol_var___int128, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var__Float32x, vol_var___int128, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_remquo_96 (void)
{
  extern typeof (remquo (vol_var__Float32x, vol_var_unsigned___int128, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var__Float32x, vol_var_unsigned___int128, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_remquo_97 (void)
{
  extern typeof (remquo (vol_var__Float32x, vol_var_enum_e, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var__Float32x, vol_var_enum_e, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_remquo_98 (void)
{
  extern typeof (remquo (vol_var__Float32x, vol_var__Bool, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var__Float32x, vol_var__Bool, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_remquo_99 (void)
{
  extern typeof (remquo (vol_var__Float32x, vol_var_bit_field, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var__Float32x, vol_var_bit_field, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F16
static void
test_remquo_100 (void)
{
  extern typeof (remquo (vol_var_double, vol_var__Float16, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_double, vol_var__Float16, vol_var_int_p);
}
#endif
static void
test_remquo_101 (void)
{
  extern typeof (remquo (vol_var_double, vol_var_float, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_double, vol_var_float, vol_var_int_p);
}
#if defined HUGE_VAL_F32
static void
test_remquo_102 (void)
{
  extern typeof (remquo (vol_var_double, vol_var__Float32, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_double, vol_var__Float32, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_remquo_103 (void)
{
  extern typeof (remquo (vol_var_double, vol_var__Float32x, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_double, vol_var__Float32x, vol_var_int_p);
}
#endif
static void
test_remquo_104 (void)
{
  extern typeof (remquo (vol_var_double, vol_var_double, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_double, vol_var_double, vol_var_int_p);
}
static void
test_remquo_105 (void)
{
  extern typeof (remquo (vol_var_double, vol_var_long_double, vol_var_int_p)) var_long_double __attribute__ ((unused));
  vol_var_long_double = remquo (vol_var_double, vol_var_long_double, vol_var_int_p);
}
#if defined HUGE_VAL_F64
static void
test_remquo_106 (void)
{
  extern typeof (remquo (vol_var_double, vol_var__Float64, vol_var_int_p)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = remquo (vol_var_double, vol_var__Float64, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_remquo_107 (void)
{
  extern typeof (remquo (vol_var_double, vol_var__Float64x, vol_var_int_p)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = remquo (vol_var_double, vol_var__Float64x, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F128
static void
test_remquo_108 (void)
{
  extern typeof (remquo (vol_var_double, vol_var__Float128, vol_var_int_p)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = remquo (vol_var_double, vol_var__Float128, vol_var_int_p);
}
#endif
static void
test_remquo_109 (void)
{
  extern typeof (remquo (vol_var_double, vol_var_char, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_double, vol_var_char, vol_var_int_p);
}
static void
test_remquo_110 (void)
{
  extern typeof (remquo (vol_var_double, vol_var_signed_char, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_double, vol_var_signed_char, vol_var_int_p);
}
static void
test_remquo_111 (void)
{
  extern typeof (remquo (vol_var_double, vol_var_unsigned_char, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_double, vol_var_unsigned_char, vol_var_int_p);
}
static void
test_remquo_112 (void)
{
  extern typeof (remquo (vol_var_double, vol_var_short_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_double, vol_var_short_int, vol_var_int_p);
}
static void
test_remquo_113 (void)
{
  extern typeof (remquo (vol_var_double, vol_var_unsigned_short_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_double, vol_var_unsigned_short_int, vol_var_int_p);
}
static void
test_remquo_114 (void)
{
  extern typeof (remquo (vol_var_double, vol_var_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_double, vol_var_int, vol_var_int_p);
}
static void
test_remquo_115 (void)
{
  extern typeof (remquo (vol_var_double, vol_var_unsigned_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_double, vol_var_unsigned_int, vol_var_int_p);
}
static void
test_remquo_116 (void)
{
  extern typeof (remquo (vol_var_double, vol_var_long_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_double, vol_var_long_int, vol_var_int_p);
}
static void
test_remquo_117 (void)
{
  extern typeof (remquo (vol_var_double, vol_var_unsigned_long_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_double, vol_var_unsigned_long_int, vol_var_int_p);
}
static void
test_remquo_118 (void)
{
  extern typeof (remquo (vol_var_double, vol_var_long_long_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_double, vol_var_long_long_int, vol_var_int_p);
}
static void
test_remquo_119 (void)
{
  extern typeof (remquo (vol_var_double, vol_var_unsigned_long_long_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_double, vol_var_unsigned_long_long_int, vol_var_int_p);
}
#if defined __SIZEOF_INT128__
static void
test_remquo_120 (void)
{
  extern typeof (remquo (vol_var_double, vol_var___int128, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_double, vol_var___int128, vol_var_int_p);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_remquo_121 (void)
{
  extern typeof (remquo (vol_var_double, vol_var_unsigned___int128, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_double, vol_var_unsigned___int128, vol_var_int_p);
}
#endif
static void
test_remquo_122 (void)
{
  extern typeof (remquo (vol_var_double, vol_var_enum_e, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_double, vol_var_enum_e, vol_var_int_p);
}
static void
test_remquo_123 (void)
{
  extern typeof (remquo (vol_var_double, vol_var__Bool, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_double, vol_var__Bool, vol_var_int_p);
}
static void
test_remquo_124 (void)
{
  extern typeof (remquo (vol_var_double, vol_var_bit_field, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_double, vol_var_bit_field, vol_var_int_p);
}
#if defined HUGE_VAL_F16
static void
test_remquo_125 (void)
{
  extern typeof (remquo (vol_var_long_double, vol_var__Float16, vol_var_int_p)) var_long_double __attribute__ ((unused));
  vol_var_long_double = remquo (vol_var_long_double, vol_var__Float16, vol_var_int_p);
}
#endif
static void
test_remquo_126 (void)
{
  extern typeof (remquo (vol_var_long_double, vol_var_float, vol_var_int_p)) var_long_double __attribute__ ((unused));
  vol_var_long_double = remquo (vol_var_long_double, vol_var_float, vol_var_int_p);
}
#if defined HUGE_VAL_F32
static void
test_remquo_127 (void)
{
  extern typeof (remquo (vol_var_long_double, vol_var__Float32, vol_var_int_p)) var_long_double __attribute__ ((unused));
  vol_var_long_double = remquo (vol_var_long_double, vol_var__Float32, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_remquo_128 (void)
{
  extern typeof (remquo (vol_var_long_double, vol_var__Float32x, vol_var_int_p)) var_long_double __attribute__ ((unused));
  vol_var_long_double = remquo (vol_var_long_double, vol_var__Float32x, vol_var_int_p);
}
#endif
static void
test_remquo_129 (void)
{
  extern typeof (remquo (vol_var_long_double, vol_var_double, vol_var_int_p)) var_long_double __attribute__ ((unused));
  vol_var_long_double = remquo (vol_var_long_double, vol_var_double, vol_var_int_p);
}
static void
test_remquo_130 (void)
{
  extern typeof (remquo (vol_var_long_double, vol_var_long_double, vol_var_int_p)) var_long_double __attribute__ ((unused));
  vol_var_long_double = remquo (vol_var_long_double, vol_var_long_double, vol_var_int_p);
}
#if defined HUGE_VAL_F64
static void
test_remquo_131 (void)
{
  extern typeof (remquo (vol_var_long_double, vol_var__Float64, vol_var_int_p)) var_long_double_Float64 __attribute__ ((unused));
  vol_var_long_double_Float64 = remquo (vol_var_long_double, vol_var__Float64, vol_var_int_p);
}
#endif
#if (LDBL_MANT_DIG != 106) && defined HUGE_VAL_F64X
static void
test_remquo_132 (void)
{
  extern typeof (remquo (vol_var_long_double, vol_var__Float64x, vol_var_int_p)) var_long_double_Float64x __attribute__ ((unused));
  vol_var_long_double_Float64x = remquo (vol_var_long_double, vol_var__Float64x, vol_var_int_p);
}
#endif
#if (LDBL_MANT_DIG != 106) && defined HUGE_VAL_F128
static void
test_remquo_133 (void)
{
  extern typeof (remquo (vol_var_long_double, vol_var__Float128, vol_var_int_p)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = remquo (vol_var_long_double, vol_var__Float128, vol_var_int_p);
}
#endif
static void
test_remquo_134 (void)
{
  extern typeof (remquo (vol_var_long_double, vol_var_char, vol_var_int_p)) var_long_double __attribute__ ((unused));
  vol_var_long_double = remquo (vol_var_long_double, vol_var_char, vol_var_int_p);
}
static void
test_remquo_135 (void)
{
  extern typeof (remquo (vol_var_long_double, vol_var_signed_char, vol_var_int_p)) var_long_double __attribute__ ((unused));
  vol_var_long_double = remquo (vol_var_long_double, vol_var_signed_char, vol_var_int_p);
}
static void
test_remquo_136 (void)
{
  extern typeof (remquo (vol_var_long_double, vol_var_unsigned_char, vol_var_int_p)) var_long_double __attribute__ ((unused));
  vol_var_long_double = remquo (vol_var_long_double, vol_var_unsigned_char, vol_var_int_p);
}
static void
test_remquo_137 (void)
{
  extern typeof (remquo (vol_var_long_double, vol_var_short_int, vol_var_int_p)) var_long_double __attribute__ ((unused));
  vol_var_long_double = remquo (vol_var_long_double, vol_var_short_int, vol_var_int_p);
}
static void
test_remquo_138 (void)
{
  extern typeof (remquo (vol_var_long_double, vol_var_unsigned_short_int, vol_var_int_p)) var_long_double __attribute__ ((unused));
  vol_var_long_double = remquo (vol_var_long_double, vol_var_unsigned_short_int, vol_var_int_p);
}
static void
test_remquo_139 (void)
{
  extern typeof (remquo (vol_var_long_double, vol_var_int, vol_var_int_p)) var_long_double __attribute__ ((unused));
  vol_var_long_double = remquo (vol_var_long_double, vol_var_int, vol_var_int_p);
}
static void
test_remquo_140 (void)
{
  extern typeof (remquo (vol_var_long_double, vol_var_unsigned_int, vol_var_int_p)) var_long_double __attribute__ ((unused));
  vol_var_long_double = remquo (vol_var_long_double, vol_var_unsigned_int, vol_var_int_p);
}
static void
test_remquo_141 (void)
{
  extern typeof (remquo (vol_var_long_double, vol_var_long_int, vol_var_int_p)) var_long_double __attribute__ ((unused));
  vol_var_long_double = remquo (vol_var_long_double, vol_var_long_int, vol_var_int_p);
}
static void
test_remquo_142 (void)
{
  extern typeof (remquo (vol_var_long_double, vol_var_unsigned_long_int, vol_var_int_p)) var_long_double __attribute__ ((unused));
  vol_var_long_double = remquo (vol_var_long_double, vol_var_unsigned_long_int, vol_var_int_p);
}
static void
test_remquo_143 (void)
{
  extern typeof (remquo (vol_var_long_double, vol_var_long_long_int, vol_var_int_p)) var_long_double __attribute__ ((unused));
  vol_var_long_double = remquo (vol_var_long_double, vol_var_long_long_int, vol_var_int_p);
}
static void
test_remquo_144 (void)
{
  extern typeof (remquo (vol_var_long_double, vol_var_unsigned_long_long_int, vol_var_int_p)) var_long_double __attribute__ ((unused));
  vol_var_long_double = remquo (vol_var_long_double, vol_var_unsigned_long_long_int, vol_var_int_p);
}
#if defined __SIZEOF_INT128__
static void
test_remquo_145 (void)
{
  extern typeof (remquo (vol_var_long_double, vol_var___int128, vol_var_int_p)) var_long_double __attribute__ ((unused));
  vol_var_long_double = remquo (vol_var_long_double, vol_var___int128, vol_var_int_p);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_remquo_146 (void)
{
  extern typeof (remquo (vol_var_long_double, vol_var_unsigned___int128, vol_var_int_p)) var_long_double __attribute__ ((unused));
  vol_var_long_double = remquo (vol_var_long_double, vol_var_unsigned___int128, vol_var_int_p);
}
#endif
static void
test_remquo_147 (void)
{
  extern typeof (remquo (vol_var_long_double, vol_var_enum_e, vol_var_int_p)) var_long_double __attribute__ ((unused));
  vol_var_long_double = remquo (vol_var_long_double, vol_var_enum_e, vol_var_int_p);
}
static void
test_remquo_148 (void)
{
  extern typeof (remquo (vol_var_long_double, vol_var__Bool, vol_var_int_p)) var_long_double __attribute__ ((unused));
  vol_var_long_double = remquo (vol_var_long_double, vol_var__Bool, vol_var_int_p);
}
static void
test_remquo_149 (void)
{
  extern typeof (remquo (vol_var_long_double, vol_var_bit_field, vol_var_int_p)) var_long_double __attribute__ ((unused));
  vol_var_long_double = remquo (vol_var_long_double, vol_var_bit_field, vol_var_int_p);
}
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F64
static void
test_remquo_150 (void)
{
  extern typeof (remquo (vol_var__Float64, vol_var__Float16, vol_var_int_p)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = remquo (vol_var__Float64, vol_var__Float16, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F64
static void
test_remquo_151 (void)
{
  extern typeof (remquo (vol_var__Float64, vol_var_float, vol_var_int_p)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = remquo (vol_var__Float64, vol_var_float, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F64
static void
test_remquo_152 (void)
{
  extern typeof (remquo (vol_var__Float64, vol_var__Float32, vol_var_int_p)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = remquo (vol_var__Float64, vol_var__Float32, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F32X && defined HUGE_VAL_F64
static void
test_remquo_153 (void)
{
  extern typeof (remquo (vol_var__Float64, vol_var__Float32x, vol_var_int_p)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = remquo (vol_var__Float64, vol_var__Float32x, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F64
static void
test_remquo_154 (void)
{
  extern typeof (remquo (vol_var__Float64, vol_var_double, vol_var_int_p)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = remquo (vol_var__Float64, vol_var_double, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F64
static void
test_remquo_155 (void)
{
  extern typeof (remquo (vol_var__Float64, vol_var_long_double, vol_var_int_p)) var_long_double_Float64 __attribute__ ((unused));
  vol_var_long_double_Float64 = remquo (vol_var__Float64, vol_var_long_double, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F64
static void
test_remquo_156 (void)
{
  extern typeof (remquo (vol_var__Float64, vol_var__Float64, vol_var_int_p)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = remquo (vol_var__Float64, vol_var__Float64, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
static void
test_remquo_157 (void)
{
  extern typeof (remquo (vol_var__Float64, vol_var__Float64x, vol_var_int_p)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = remquo (vol_var__Float64, vol_var__Float64x, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F64
static void
test_remquo_158 (void)
{
  extern typeof (remquo (vol_var__Float64, vol_var__Float128, vol_var_int_p)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = remquo (vol_var__Float64, vol_var__Float128, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F64
static void
test_remquo_159 (void)
{
  extern typeof (remquo (vol_var__Float64, vol_var_char, vol_var_int_p)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = remquo (vol_var__Float64, vol_var_char, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F64
static void
test_remquo_160 (void)
{
  extern typeof (remquo (vol_var__Float64, vol_var_signed_char, vol_var_int_p)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = remquo (vol_var__Float64, vol_var_signed_char, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F64
static void
test_remquo_161 (void)
{
  extern typeof (remquo (vol_var__Float64, vol_var_unsigned_char, vol_var_int_p)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = remquo (vol_var__Float64, vol_var_unsigned_char, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F64
static void
test_remquo_162 (void)
{
  extern typeof (remquo (vol_var__Float64, vol_var_short_int, vol_var_int_p)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = remquo (vol_var__Float64, vol_var_short_int, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F64
static void
test_remquo_163 (void)
{
  extern typeof (remquo (vol_var__Float64, vol_var_unsigned_short_int, vol_var_int_p)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = remquo (vol_var__Float64, vol_var_unsigned_short_int, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F64
static void
test_remquo_164 (void)
{
  extern typeof (remquo (vol_var__Float64, vol_var_int, vol_var_int_p)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = remquo (vol_var__Float64, vol_var_int, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F64
static void
test_remquo_165 (void)
{
  extern typeof (remquo (vol_var__Float64, vol_var_unsigned_int, vol_var_int_p)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = remquo (vol_var__Float64, vol_var_unsigned_int, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F64
static void
test_remquo_166 (void)
{
  extern typeof (remquo (vol_var__Float64, vol_var_long_int, vol_var_int_p)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = remquo (vol_var__Float64, vol_var_long_int, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F64
static void
test_remquo_167 (void)
{
  extern typeof (remquo (vol_var__Float64, vol_var_unsigned_long_int, vol_var_int_p)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = remquo (vol_var__Float64, vol_var_unsigned_long_int, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F64
static void
test_remquo_168 (void)
{
  extern typeof (remquo (vol_var__Float64, vol_var_long_long_int, vol_var_int_p)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = remquo (vol_var__Float64, vol_var_long_long_int, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F64
static void
test_remquo_169 (void)
{
  extern typeof (remquo (vol_var__Float64, vol_var_unsigned_long_long_int, vol_var_int_p)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = remquo (vol_var__Float64, vol_var_unsigned_long_long_int, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_remquo_170 (void)
{
  extern typeof (remquo (vol_var__Float64, vol_var___int128, vol_var_int_p)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = remquo (vol_var__Float64, vol_var___int128, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_remquo_171 (void)
{
  extern typeof (remquo (vol_var__Float64, vol_var_unsigned___int128, vol_var_int_p)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = remquo (vol_var__Float64, vol_var_unsigned___int128, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F64
static void
test_remquo_172 (void)
{
  extern typeof (remquo (vol_var__Float64, vol_var_enum_e, vol_var_int_p)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = remquo (vol_var__Float64, vol_var_enum_e, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F64
static void
test_remquo_173 (void)
{
  extern typeof (remquo (vol_var__Float64, vol_var__Bool, vol_var_int_p)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = remquo (vol_var__Float64, vol_var__Bool, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F64
static void
test_remquo_174 (void)
{
  extern typeof (remquo (vol_var__Float64, vol_var_bit_field, vol_var_int_p)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = remquo (vol_var__Float64, vol_var_bit_field, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
static void
test_remquo_175 (void)
{
  extern typeof (remquo (vol_var__Float64x, vol_var__Float16, vol_var_int_p)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = remquo (vol_var__Float64x, vol_var__Float16, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_remquo_176 (void)
{
  extern typeof (remquo (vol_var__Float64x, vol_var_float, vol_var_int_p)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = remquo (vol_var__Float64x, vol_var_float, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
static void
test_remquo_177 (void)
{
  extern typeof (remquo (vol_var__Float64x, vol_var__Float32, vol_var_int_p)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = remquo (vol_var__Float64x, vol_var__Float32, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
static void
test_remquo_178 (void)
{
  extern typeof (remquo (vol_var__Float64x, vol_var__Float32x, vol_var_int_p)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = remquo (vol_var__Float64x, vol_var__Float32x, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_remquo_179 (void)
{
  extern typeof (remquo (vol_var__Float64x, vol_var_double, vol_var_int_p)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = remquo (vol_var__Float64x, vol_var_double, vol_var_int_p);
}
#endif
#if (LDBL_MANT_DIG != 106) && defined HUGE_VAL_F64X
static void
test_remquo_180 (void)
{
  extern typeof (remquo (vol_var__Float64x, vol_var_long_double, vol_var_int_p)) var_long_double_Float64x __attribute__ ((unused));
  vol_var_long_double_Float64x = remquo (vol_var__Float64x, vol_var_long_double, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
static void
test_remquo_181 (void)
{
  extern typeof (remquo (vol_var__Float64x, vol_var__Float64, vol_var_int_p)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = remquo (vol_var__Float64x, vol_var__Float64, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_remquo_182 (void)
{
  extern typeof (remquo (vol_var__Float64x, vol_var__Float64x, vol_var_int_p)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = remquo (vol_var__Float64x, vol_var__Float64x, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
static void
test_remquo_183 (void)
{
  extern typeof (remquo (vol_var__Float64x, vol_var__Float128, vol_var_int_p)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = remquo (vol_var__Float64x, vol_var__Float128, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_remquo_184 (void)
{
  extern typeof (remquo (vol_var__Float64x, vol_var_char, vol_var_int_p)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = remquo (vol_var__Float64x, vol_var_char, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_remquo_185 (void)
{
  extern typeof (remquo (vol_var__Float64x, vol_var_signed_char, vol_var_int_p)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = remquo (vol_var__Float64x, vol_var_signed_char, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_remquo_186 (void)
{
  extern typeof (remquo (vol_var__Float64x, vol_var_unsigned_char, vol_var_int_p)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = remquo (vol_var__Float64x, vol_var_unsigned_char, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_remquo_187 (void)
{
  extern typeof (remquo (vol_var__Float64x, vol_var_short_int, vol_var_int_p)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = remquo (vol_var__Float64x, vol_var_short_int, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_remquo_188 (void)
{
  extern typeof (remquo (vol_var__Float64x, vol_var_unsigned_short_int, vol_var_int_p)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = remquo (vol_var__Float64x, vol_var_unsigned_short_int, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_remquo_189 (void)
{
  extern typeof (remquo (vol_var__Float64x, vol_var_int, vol_var_int_p)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = remquo (vol_var__Float64x, vol_var_int, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_remquo_190 (void)
{
  extern typeof (remquo (vol_var__Float64x, vol_var_unsigned_int, vol_var_int_p)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = remquo (vol_var__Float64x, vol_var_unsigned_int, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_remquo_191 (void)
{
  extern typeof (remquo (vol_var__Float64x, vol_var_long_int, vol_var_int_p)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = remquo (vol_var__Float64x, vol_var_long_int, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_remquo_192 (void)
{
  extern typeof (remquo (vol_var__Float64x, vol_var_unsigned_long_int, vol_var_int_p)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = remquo (vol_var__Float64x, vol_var_unsigned_long_int, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_remquo_193 (void)
{
  extern typeof (remquo (vol_var__Float64x, vol_var_long_long_int, vol_var_int_p)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = remquo (vol_var__Float64x, vol_var_long_long_int, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_remquo_194 (void)
{
  extern typeof (remquo (vol_var__Float64x, vol_var_unsigned_long_long_int, vol_var_int_p)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = remquo (vol_var__Float64x, vol_var_unsigned_long_long_int, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_remquo_195 (void)
{
  extern typeof (remquo (vol_var__Float64x, vol_var___int128, vol_var_int_p)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = remquo (vol_var__Float64x, vol_var___int128, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_remquo_196 (void)
{
  extern typeof (remquo (vol_var__Float64x, vol_var_unsigned___int128, vol_var_int_p)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = remquo (vol_var__Float64x, vol_var_unsigned___int128, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_remquo_197 (void)
{
  extern typeof (remquo (vol_var__Float64x, vol_var_enum_e, vol_var_int_p)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = remquo (vol_var__Float64x, vol_var_enum_e, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_remquo_198 (void)
{
  extern typeof (remquo (vol_var__Float64x, vol_var__Bool, vol_var_int_p)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = remquo (vol_var__Float64x, vol_var__Bool, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_remquo_199 (void)
{
  extern typeof (remquo (vol_var__Float64x, vol_var_bit_field, vol_var_int_p)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = remquo (vol_var__Float64x, vol_var_bit_field, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F16
static void
test_remquo_200 (void)
{
  extern typeof (remquo (vol_var__Float128, vol_var__Float16, vol_var_int_p)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = remquo (vol_var__Float128, vol_var__Float16, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F128
static void
test_remquo_201 (void)
{
  extern typeof (remquo (vol_var__Float128, vol_var_float, vol_var_int_p)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = remquo (vol_var__Float128, vol_var_float, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F32
static void
test_remquo_202 (void)
{
  extern typeof (remquo (vol_var__Float128, vol_var__Float32, vol_var_int_p)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = remquo (vol_var__Float128, vol_var__Float32, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
static void
test_remquo_203 (void)
{
  extern typeof (remquo (vol_var__Float128, vol_var__Float32x, vol_var_int_p)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = remquo (vol_var__Float128, vol_var__Float32x, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F128
static void
test_remquo_204 (void)
{
  extern typeof (remquo (vol_var__Float128, vol_var_double, vol_var_int_p)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = remquo (vol_var__Float128, vol_var_double, vol_var_int_p);
}
#endif
#if (LDBL_MANT_DIG != 106) && defined HUGE_VAL_F128
static void
test_remquo_205 (void)
{
  extern typeof (remquo (vol_var__Float128, vol_var_long_double, vol_var_int_p)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = remquo (vol_var__Float128, vol_var_long_double, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F64
static void
test_remquo_206 (void)
{
  extern typeof (remquo (vol_var__Float128, vol_var__Float64, vol_var_int_p)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = remquo (vol_var__Float128, vol_var__Float64, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
static void
test_remquo_207 (void)
{
  extern typeof (remquo (vol_var__Float128, vol_var__Float64x, vol_var_int_p)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = remquo (vol_var__Float128, vol_var__Float64x, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F128
static void
test_remquo_208 (void)
{
  extern typeof (remquo (vol_var__Float128, vol_var__Float128, vol_var_int_p)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = remquo (vol_var__Float128, vol_var__Float128, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F128
static void
test_remquo_209 (void)
{
  extern typeof (remquo (vol_var__Float128, vol_var_char, vol_var_int_p)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = remquo (vol_var__Float128, vol_var_char, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F128
static void
test_remquo_210 (void)
{
  extern typeof (remquo (vol_var__Float128, vol_var_signed_char, vol_var_int_p)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = remquo (vol_var__Float128, vol_var_signed_char, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F128
static void
test_remquo_211 (void)
{
  extern typeof (remquo (vol_var__Float128, vol_var_unsigned_char, vol_var_int_p)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = remquo (vol_var__Float128, vol_var_unsigned_char, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F128
static void
test_remquo_212 (void)
{
  extern typeof (remquo (vol_var__Float128, vol_var_short_int, vol_var_int_p)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = remquo (vol_var__Float128, vol_var_short_int, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F128
static void
test_remquo_213 (void)
{
  extern typeof (remquo (vol_var__Float128, vol_var_unsigned_short_int, vol_var_int_p)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = remquo (vol_var__Float128, vol_var_unsigned_short_int, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F128
static void
test_remquo_214 (void)
{
  extern typeof (remquo (vol_var__Float128, vol_var_int, vol_var_int_p)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = remquo (vol_var__Float128, vol_var_int, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F128
static void
test_remquo_215 (void)
{
  extern typeof (remquo (vol_var__Float128, vol_var_unsigned_int, vol_var_int_p)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = remquo (vol_var__Float128, vol_var_unsigned_int, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F128
static void
test_remquo_216 (void)
{
  extern typeof (remquo (vol_var__Float128, vol_var_long_int, vol_var_int_p)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = remquo (vol_var__Float128, vol_var_long_int, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F128
static void
test_remquo_217 (void)
{
  extern typeof (remquo (vol_var__Float128, vol_var_unsigned_long_int, vol_var_int_p)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = remquo (vol_var__Float128, vol_var_unsigned_long_int, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F128
static void
test_remquo_218 (void)
{
  extern typeof (remquo (vol_var__Float128, vol_var_long_long_int, vol_var_int_p)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = remquo (vol_var__Float128, vol_var_long_long_int, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F128
static void
test_remquo_219 (void)
{
  extern typeof (remquo (vol_var__Float128, vol_var_unsigned_long_long_int, vol_var_int_p)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = remquo (vol_var__Float128, vol_var_unsigned_long_long_int, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_remquo_220 (void)
{
  extern typeof (remquo (vol_var__Float128, vol_var___int128, vol_var_int_p)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = remquo (vol_var__Float128, vol_var___int128, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_remquo_221 (void)
{
  extern typeof (remquo (vol_var__Float128, vol_var_unsigned___int128, vol_var_int_p)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = remquo (vol_var__Float128, vol_var_unsigned___int128, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F128
static void
test_remquo_222 (void)
{
  extern typeof (remquo (vol_var__Float128, vol_var_enum_e, vol_var_int_p)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = remquo (vol_var__Float128, vol_var_enum_e, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F128
static void
test_remquo_223 (void)
{
  extern typeof (remquo (vol_var__Float128, vol_var__Bool, vol_var_int_p)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = remquo (vol_var__Float128, vol_var__Bool, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F128
static void
test_remquo_224 (void)
{
  extern typeof (remquo (vol_var__Float128, vol_var_bit_field, vol_var_int_p)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = remquo (vol_var__Float128, vol_var_bit_field, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F16
static void
test_remquo_225 (void)
{
  extern typeof (remquo (vol_var_char, vol_var__Float16, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_char, vol_var__Float16, vol_var_int_p);
}
#endif
static void
test_remquo_226 (void)
{
  extern typeof (remquo (vol_var_char, vol_var_float, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_char, vol_var_float, vol_var_int_p);
}
#if defined HUGE_VAL_F32
static void
test_remquo_227 (void)
{
  extern typeof (remquo (vol_var_char, vol_var__Float32, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_char, vol_var__Float32, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_remquo_228 (void)
{
  extern typeof (remquo (vol_var_char, vol_var__Float32x, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_char, vol_var__Float32x, vol_var_int_p);
}
#endif
static void
test_remquo_229 (void)
{
  extern typeof (remquo (vol_var_char, vol_var_double, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_char, vol_var_double, vol_var_int_p);
}
static void
test_remquo_230 (void)
{
  extern typeof (remquo (vol_var_char, vol_var_long_double, vol_var_int_p)) var_long_double __attribute__ ((unused));
  vol_var_long_double = remquo (vol_var_char, vol_var_long_double, vol_var_int_p);
}
#if defined HUGE_VAL_F64
static void
test_remquo_231 (void)
{
  extern typeof (remquo (vol_var_char, vol_var__Float64, vol_var_int_p)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = remquo (vol_var_char, vol_var__Float64, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_remquo_232 (void)
{
  extern typeof (remquo (vol_var_char, vol_var__Float64x, vol_var_int_p)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = remquo (vol_var_char, vol_var__Float64x, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F128
static void
test_remquo_233 (void)
{
  extern typeof (remquo (vol_var_char, vol_var__Float128, vol_var_int_p)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = remquo (vol_var_char, vol_var__Float128, vol_var_int_p);
}
#endif
static void
test_remquo_234 (void)
{
  extern typeof (remquo (vol_var_char, vol_var_char, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_char, vol_var_char, vol_var_int_p);
}
static void
test_remquo_235 (void)
{
  extern typeof (remquo (vol_var_char, vol_var_signed_char, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_char, vol_var_signed_char, vol_var_int_p);
}
static void
test_remquo_236 (void)
{
  extern typeof (remquo (vol_var_char, vol_var_unsigned_char, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_char, vol_var_unsigned_char, vol_var_int_p);
}
static void
test_remquo_237 (void)
{
  extern typeof (remquo (vol_var_char, vol_var_short_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_char, vol_var_short_int, vol_var_int_p);
}
static void
test_remquo_238 (void)
{
  extern typeof (remquo (vol_var_char, vol_var_unsigned_short_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_char, vol_var_unsigned_short_int, vol_var_int_p);
}
static void
test_remquo_239 (void)
{
  extern typeof (remquo (vol_var_char, vol_var_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_char, vol_var_int, vol_var_int_p);
}
static void
test_remquo_240 (void)
{
  extern typeof (remquo (vol_var_char, vol_var_unsigned_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_char, vol_var_unsigned_int, vol_var_int_p);
}
static void
test_remquo_241 (void)
{
  extern typeof (remquo (vol_var_char, vol_var_long_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_char, vol_var_long_int, vol_var_int_p);
}
static void
test_remquo_242 (void)
{
  extern typeof (remquo (vol_var_char, vol_var_unsigned_long_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_char, vol_var_unsigned_long_int, vol_var_int_p);
}
static void
test_remquo_243 (void)
{
  extern typeof (remquo (vol_var_char, vol_var_long_long_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_char, vol_var_long_long_int, vol_var_int_p);
}
static void
test_remquo_244 (void)
{
  extern typeof (remquo (vol_var_char, vol_var_unsigned_long_long_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_char, vol_var_unsigned_long_long_int, vol_var_int_p);
}
#if defined __SIZEOF_INT128__
static void
test_remquo_245 (void)
{
  extern typeof (remquo (vol_var_char, vol_var___int128, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_char, vol_var___int128, vol_var_int_p);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_remquo_246 (void)
{
  extern typeof (remquo (vol_var_char, vol_var_unsigned___int128, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_char, vol_var_unsigned___int128, vol_var_int_p);
}
#endif
static void
test_remquo_247 (void)
{
  extern typeof (remquo (vol_var_char, vol_var_enum_e, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_char, vol_var_enum_e, vol_var_int_p);
}
static void
test_remquo_248 (void)
{
  extern typeof (remquo (vol_var_char, vol_var__Bool, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_char, vol_var__Bool, vol_var_int_p);
}
static void
test_remquo_249 (void)
{
  extern typeof (remquo (vol_var_char, vol_var_bit_field, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_char, vol_var_bit_field, vol_var_int_p);
}
#if defined HUGE_VAL_F16
static void
test_remquo_250 (void)
{
  extern typeof (remquo (vol_var_signed_char, vol_var__Float16, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_signed_char, vol_var__Float16, vol_var_int_p);
}
#endif
static void
test_remquo_251 (void)
{
  extern typeof (remquo (vol_var_signed_char, vol_var_float, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_signed_char, vol_var_float, vol_var_int_p);
}
#if defined HUGE_VAL_F32
static void
test_remquo_252 (void)
{
  extern typeof (remquo (vol_var_signed_char, vol_var__Float32, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_signed_char, vol_var__Float32, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_remquo_253 (void)
{
  extern typeof (remquo (vol_var_signed_char, vol_var__Float32x, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_signed_char, vol_var__Float32x, vol_var_int_p);
}
#endif
static void
test_remquo_254 (void)
{
  extern typeof (remquo (vol_var_signed_char, vol_var_double, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_signed_char, vol_var_double, vol_var_int_p);
}
static void
test_remquo_255 (void)
{
  extern typeof (remquo (vol_var_signed_char, vol_var_long_double, vol_var_int_p)) var_long_double __attribute__ ((unused));
  vol_var_long_double = remquo (vol_var_signed_char, vol_var_long_double, vol_var_int_p);
}
#if defined HUGE_VAL_F64
static void
test_remquo_256 (void)
{
  extern typeof (remquo (vol_var_signed_char, vol_var__Float64, vol_var_int_p)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = remquo (vol_var_signed_char, vol_var__Float64, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_remquo_257 (void)
{
  extern typeof (remquo (vol_var_signed_char, vol_var__Float64x, vol_var_int_p)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = remquo (vol_var_signed_char, vol_var__Float64x, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F128
static void
test_remquo_258 (void)
{
  extern typeof (remquo (vol_var_signed_char, vol_var__Float128, vol_var_int_p)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = remquo (vol_var_signed_char, vol_var__Float128, vol_var_int_p);
}
#endif
static void
test_remquo_259 (void)
{
  extern typeof (remquo (vol_var_signed_char, vol_var_char, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_signed_char, vol_var_char, vol_var_int_p);
}
static void
test_remquo_260 (void)
{
  extern typeof (remquo (vol_var_signed_char, vol_var_signed_char, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_signed_char, vol_var_signed_char, vol_var_int_p);
}
static void
test_remquo_261 (void)
{
  extern typeof (remquo (vol_var_signed_char, vol_var_unsigned_char, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_signed_char, vol_var_unsigned_char, vol_var_int_p);
}
static void
test_remquo_262 (void)
{
  extern typeof (remquo (vol_var_signed_char, vol_var_short_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_signed_char, vol_var_short_int, vol_var_int_p);
}
static void
test_remquo_263 (void)
{
  extern typeof (remquo (vol_var_signed_char, vol_var_unsigned_short_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_signed_char, vol_var_unsigned_short_int, vol_var_int_p);
}
static void
test_remquo_264 (void)
{
  extern typeof (remquo (vol_var_signed_char, vol_var_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_signed_char, vol_var_int, vol_var_int_p);
}
static void
test_remquo_265 (void)
{
  extern typeof (remquo (vol_var_signed_char, vol_var_unsigned_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_signed_char, vol_var_unsigned_int, vol_var_int_p);
}
static void
test_remquo_266 (void)
{
  extern typeof (remquo (vol_var_signed_char, vol_var_long_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_signed_char, vol_var_long_int, vol_var_int_p);
}
static void
test_remquo_267 (void)
{
  extern typeof (remquo (vol_var_signed_char, vol_var_unsigned_long_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_signed_char, vol_var_unsigned_long_int, vol_var_int_p);
}
static void
test_remquo_268 (void)
{
  extern typeof (remquo (vol_var_signed_char, vol_var_long_long_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_signed_char, vol_var_long_long_int, vol_var_int_p);
}
static void
test_remquo_269 (void)
{
  extern typeof (remquo (vol_var_signed_char, vol_var_unsigned_long_long_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_signed_char, vol_var_unsigned_long_long_int, vol_var_int_p);
}
#if defined __SIZEOF_INT128__
static void
test_remquo_270 (void)
{
  extern typeof (remquo (vol_var_signed_char, vol_var___int128, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_signed_char, vol_var___int128, vol_var_int_p);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_remquo_271 (void)
{
  extern typeof (remquo (vol_var_signed_char, vol_var_unsigned___int128, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_signed_char, vol_var_unsigned___int128, vol_var_int_p);
}
#endif
static void
test_remquo_272 (void)
{
  extern typeof (remquo (vol_var_signed_char, vol_var_enum_e, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_signed_char, vol_var_enum_e, vol_var_int_p);
}
static void
test_remquo_273 (void)
{
  extern typeof (remquo (vol_var_signed_char, vol_var__Bool, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_signed_char, vol_var__Bool, vol_var_int_p);
}
static void
test_remquo_274 (void)
{
  extern typeof (remquo (vol_var_signed_char, vol_var_bit_field, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_signed_char, vol_var_bit_field, vol_var_int_p);
}
#if defined HUGE_VAL_F16
static void
test_remquo_275 (void)
{
  extern typeof (remquo (vol_var_unsigned_char, vol_var__Float16, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_unsigned_char, vol_var__Float16, vol_var_int_p);
}
#endif
static void
test_remquo_276 (void)
{
  extern typeof (remquo (vol_var_unsigned_char, vol_var_float, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_unsigned_char, vol_var_float, vol_var_int_p);
}
#if defined HUGE_VAL_F32
static void
test_remquo_277 (void)
{
  extern typeof (remquo (vol_var_unsigned_char, vol_var__Float32, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_unsigned_char, vol_var__Float32, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_remquo_278 (void)
{
  extern typeof (remquo (vol_var_unsigned_char, vol_var__Float32x, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_unsigned_char, vol_var__Float32x, vol_var_int_p);
}
#endif
static void
test_remquo_279 (void)
{
  extern typeof (remquo (vol_var_unsigned_char, vol_var_double, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_unsigned_char, vol_var_double, vol_var_int_p);
}
static void
test_remquo_280 (void)
{
  extern typeof (remquo (vol_var_unsigned_char, vol_var_long_double, vol_var_int_p)) var_long_double __attribute__ ((unused));
  vol_var_long_double = remquo (vol_var_unsigned_char, vol_var_long_double, vol_var_int_p);
}
#if defined HUGE_VAL_F64
static void
test_remquo_281 (void)
{
  extern typeof (remquo (vol_var_unsigned_char, vol_var__Float64, vol_var_int_p)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = remquo (vol_var_unsigned_char, vol_var__Float64, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_remquo_282 (void)
{
  extern typeof (remquo (vol_var_unsigned_char, vol_var__Float64x, vol_var_int_p)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = remquo (vol_var_unsigned_char, vol_var__Float64x, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F128
static void
test_remquo_283 (void)
{
  extern typeof (remquo (vol_var_unsigned_char, vol_var__Float128, vol_var_int_p)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = remquo (vol_var_unsigned_char, vol_var__Float128, vol_var_int_p);
}
#endif
static void
test_remquo_284 (void)
{
  extern typeof (remquo (vol_var_unsigned_char, vol_var_char, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_unsigned_char, vol_var_char, vol_var_int_p);
}
static void
test_remquo_285 (void)
{
  extern typeof (remquo (vol_var_unsigned_char, vol_var_signed_char, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_unsigned_char, vol_var_signed_char, vol_var_int_p);
}
static void
test_remquo_286 (void)
{
  extern typeof (remquo (vol_var_unsigned_char, vol_var_unsigned_char, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_unsigned_char, vol_var_unsigned_char, vol_var_int_p);
}
static void
test_remquo_287 (void)
{
  extern typeof (remquo (vol_var_unsigned_char, vol_var_short_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_unsigned_char, vol_var_short_int, vol_var_int_p);
}
static void
test_remquo_288 (void)
{
  extern typeof (remquo (vol_var_unsigned_char, vol_var_unsigned_short_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_unsigned_char, vol_var_unsigned_short_int, vol_var_int_p);
}
static void
test_remquo_289 (void)
{
  extern typeof (remquo (vol_var_unsigned_char, vol_var_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_unsigned_char, vol_var_int, vol_var_int_p);
}
static void
test_remquo_290 (void)
{
  extern typeof (remquo (vol_var_unsigned_char, vol_var_unsigned_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_unsigned_char, vol_var_unsigned_int, vol_var_int_p);
}
static void
test_remquo_291 (void)
{
  extern typeof (remquo (vol_var_unsigned_char, vol_var_long_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_unsigned_char, vol_var_long_int, vol_var_int_p);
}
static void
test_remquo_292 (void)
{
  extern typeof (remquo (vol_var_unsigned_char, vol_var_unsigned_long_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_unsigned_char, vol_var_unsigned_long_int, vol_var_int_p);
}
static void
test_remquo_293 (void)
{
  extern typeof (remquo (vol_var_unsigned_char, vol_var_long_long_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_unsigned_char, vol_var_long_long_int, vol_var_int_p);
}
static void
test_remquo_294 (void)
{
  extern typeof (remquo (vol_var_unsigned_char, vol_var_unsigned_long_long_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_unsigned_char, vol_var_unsigned_long_long_int, vol_var_int_p);
}
#if defined __SIZEOF_INT128__
static void
test_remquo_295 (void)
{
  extern typeof (remquo (vol_var_unsigned_char, vol_var___int128, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_unsigned_char, vol_var___int128, vol_var_int_p);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_remquo_296 (void)
{
  extern typeof (remquo (vol_var_unsigned_char, vol_var_unsigned___int128, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_unsigned_char, vol_var_unsigned___int128, vol_var_int_p);
}
#endif
static void
test_remquo_297 (void)
{
  extern typeof (remquo (vol_var_unsigned_char, vol_var_enum_e, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_unsigned_char, vol_var_enum_e, vol_var_int_p);
}
static void
test_remquo_298 (void)
{
  extern typeof (remquo (vol_var_unsigned_char, vol_var__Bool, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_unsigned_char, vol_var__Bool, vol_var_int_p);
}
static void
test_remquo_299 (void)
{
  extern typeof (remquo (vol_var_unsigned_char, vol_var_bit_field, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_unsigned_char, vol_var_bit_field, vol_var_int_p);
}
#if defined HUGE_VAL_F16
static void
test_remquo_300 (void)
{
  extern typeof (remquo (vol_var_short_int, vol_var__Float16, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_short_int, vol_var__Float16, vol_var_int_p);
}
#endif
static void
test_remquo_301 (void)
{
  extern typeof (remquo (vol_var_short_int, vol_var_float, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_short_int, vol_var_float, vol_var_int_p);
}
#if defined HUGE_VAL_F32
static void
test_remquo_302 (void)
{
  extern typeof (remquo (vol_var_short_int, vol_var__Float32, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_short_int, vol_var__Float32, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_remquo_303 (void)
{
  extern typeof (remquo (vol_var_short_int, vol_var__Float32x, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_short_int, vol_var__Float32x, vol_var_int_p);
}
#endif
static void
test_remquo_304 (void)
{
  extern typeof (remquo (vol_var_short_int, vol_var_double, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_short_int, vol_var_double, vol_var_int_p);
}
static void
test_remquo_305 (void)
{
  extern typeof (remquo (vol_var_short_int, vol_var_long_double, vol_var_int_p)) var_long_double __attribute__ ((unused));
  vol_var_long_double = remquo (vol_var_short_int, vol_var_long_double, vol_var_int_p);
}
#if defined HUGE_VAL_F64
static void
test_remquo_306 (void)
{
  extern typeof (remquo (vol_var_short_int, vol_var__Float64, vol_var_int_p)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = remquo (vol_var_short_int, vol_var__Float64, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_remquo_307 (void)
{
  extern typeof (remquo (vol_var_short_int, vol_var__Float64x, vol_var_int_p)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = remquo (vol_var_short_int, vol_var__Float64x, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F128
static void
test_remquo_308 (void)
{
  extern typeof (remquo (vol_var_short_int, vol_var__Float128, vol_var_int_p)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = remquo (vol_var_short_int, vol_var__Float128, vol_var_int_p);
}
#endif
static void
test_remquo_309 (void)
{
  extern typeof (remquo (vol_var_short_int, vol_var_char, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_short_int, vol_var_char, vol_var_int_p);
}
static void
test_remquo_310 (void)
{
  extern typeof (remquo (vol_var_short_int, vol_var_signed_char, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_short_int, vol_var_signed_char, vol_var_int_p);
}
static void
test_remquo_311 (void)
{
  extern typeof (remquo (vol_var_short_int, vol_var_unsigned_char, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_short_int, vol_var_unsigned_char, vol_var_int_p);
}
static void
test_remquo_312 (void)
{
  extern typeof (remquo (vol_var_short_int, vol_var_short_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_short_int, vol_var_short_int, vol_var_int_p);
}
static void
test_remquo_313 (void)
{
  extern typeof (remquo (vol_var_short_int, vol_var_unsigned_short_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_short_int, vol_var_unsigned_short_int, vol_var_int_p);
}
static void
test_remquo_314 (void)
{
  extern typeof (remquo (vol_var_short_int, vol_var_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_short_int, vol_var_int, vol_var_int_p);
}
static void
test_remquo_315 (void)
{
  extern typeof (remquo (vol_var_short_int, vol_var_unsigned_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_short_int, vol_var_unsigned_int, vol_var_int_p);
}
static void
test_remquo_316 (void)
{
  extern typeof (remquo (vol_var_short_int, vol_var_long_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_short_int, vol_var_long_int, vol_var_int_p);
}
static void
test_remquo_317 (void)
{
  extern typeof (remquo (vol_var_short_int, vol_var_unsigned_long_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_short_int, vol_var_unsigned_long_int, vol_var_int_p);
}
static void
test_remquo_318 (void)
{
  extern typeof (remquo (vol_var_short_int, vol_var_long_long_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_short_int, vol_var_long_long_int, vol_var_int_p);
}
static void
test_remquo_319 (void)
{
  extern typeof (remquo (vol_var_short_int, vol_var_unsigned_long_long_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_short_int, vol_var_unsigned_long_long_int, vol_var_int_p);
}
#if defined __SIZEOF_INT128__
static void
test_remquo_320 (void)
{
  extern typeof (remquo (vol_var_short_int, vol_var___int128, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_short_int, vol_var___int128, vol_var_int_p);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_remquo_321 (void)
{
  extern typeof (remquo (vol_var_short_int, vol_var_unsigned___int128, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_short_int, vol_var_unsigned___int128, vol_var_int_p);
}
#endif
static void
test_remquo_322 (void)
{
  extern typeof (remquo (vol_var_short_int, vol_var_enum_e, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_short_int, vol_var_enum_e, vol_var_int_p);
}
static void
test_remquo_323 (void)
{
  extern typeof (remquo (vol_var_short_int, vol_var__Bool, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_short_int, vol_var__Bool, vol_var_int_p);
}
static void
test_remquo_324 (void)
{
  extern typeof (remquo (vol_var_short_int, vol_var_bit_field, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_short_int, vol_var_bit_field, vol_var_int_p);
}
#if defined HUGE_VAL_F16
static void
test_remquo_325 (void)
{
  extern typeof (remquo (vol_var_unsigned_short_int, vol_var__Float16, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_unsigned_short_int, vol_var__Float16, vol_var_int_p);
}
#endif
static void
test_remquo_326 (void)
{
  extern typeof (remquo (vol_var_unsigned_short_int, vol_var_float, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_unsigned_short_int, vol_var_float, vol_var_int_p);
}
#if defined HUGE_VAL_F32
static void
test_remquo_327 (void)
{
  extern typeof (remquo (vol_var_unsigned_short_int, vol_var__Float32, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_unsigned_short_int, vol_var__Float32, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_remquo_328 (void)
{
  extern typeof (remquo (vol_var_unsigned_short_int, vol_var__Float32x, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_unsigned_short_int, vol_var__Float32x, vol_var_int_p);
}
#endif
static void
test_remquo_329 (void)
{
  extern typeof (remquo (vol_var_unsigned_short_int, vol_var_double, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_unsigned_short_int, vol_var_double, vol_var_int_p);
}
static void
test_remquo_330 (void)
{
  extern typeof (remquo (vol_var_unsigned_short_int, vol_var_long_double, vol_var_int_p)) var_long_double __attribute__ ((unused));
  vol_var_long_double = remquo (vol_var_unsigned_short_int, vol_var_long_double, vol_var_int_p);
}
#if defined HUGE_VAL_F64
static void
test_remquo_331 (void)
{
  extern typeof (remquo (vol_var_unsigned_short_int, vol_var__Float64, vol_var_int_p)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = remquo (vol_var_unsigned_short_int, vol_var__Float64, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_remquo_332 (void)
{
  extern typeof (remquo (vol_var_unsigned_short_int, vol_var__Float64x, vol_var_int_p)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = remquo (vol_var_unsigned_short_int, vol_var__Float64x, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F128
static void
test_remquo_333 (void)
{
  extern typeof (remquo (vol_var_unsigned_short_int, vol_var__Float128, vol_var_int_p)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = remquo (vol_var_unsigned_short_int, vol_var__Float128, vol_var_int_p);
}
#endif
static void
test_remquo_334 (void)
{
  extern typeof (remquo (vol_var_unsigned_short_int, vol_var_char, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_unsigned_short_int, vol_var_char, vol_var_int_p);
}
static void
test_remquo_335 (void)
{
  extern typeof (remquo (vol_var_unsigned_short_int, vol_var_signed_char, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_unsigned_short_int, vol_var_signed_char, vol_var_int_p);
}
static void
test_remquo_336 (void)
{
  extern typeof (remquo (vol_var_unsigned_short_int, vol_var_unsigned_char, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_unsigned_short_int, vol_var_unsigned_char, vol_var_int_p);
}
static void
test_remquo_337 (void)
{
  extern typeof (remquo (vol_var_unsigned_short_int, vol_var_short_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_unsigned_short_int, vol_var_short_int, vol_var_int_p);
}
static void
test_remquo_338 (void)
{
  extern typeof (remquo (vol_var_unsigned_short_int, vol_var_unsigned_short_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_unsigned_short_int, vol_var_unsigned_short_int, vol_var_int_p);
}
static void
test_remquo_339 (void)
{
  extern typeof (remquo (vol_var_unsigned_short_int, vol_var_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_unsigned_short_int, vol_var_int, vol_var_int_p);
}
static void
test_remquo_340 (void)
{
  extern typeof (remquo (vol_var_unsigned_short_int, vol_var_unsigned_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_unsigned_short_int, vol_var_unsigned_int, vol_var_int_p);
}
static void
test_remquo_341 (void)
{
  extern typeof (remquo (vol_var_unsigned_short_int, vol_var_long_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_unsigned_short_int, vol_var_long_int, vol_var_int_p);
}
static void
test_remquo_342 (void)
{
  extern typeof (remquo (vol_var_unsigned_short_int, vol_var_unsigned_long_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_unsigned_short_int, vol_var_unsigned_long_int, vol_var_int_p);
}
static void
test_remquo_343 (void)
{
  extern typeof (remquo (vol_var_unsigned_short_int, vol_var_long_long_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_unsigned_short_int, vol_var_long_long_int, vol_var_int_p);
}
static void
test_remquo_344 (void)
{
  extern typeof (remquo (vol_var_unsigned_short_int, vol_var_unsigned_long_long_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_unsigned_short_int, vol_var_unsigned_long_long_int, vol_var_int_p);
}
#if defined __SIZEOF_INT128__
static void
test_remquo_345 (void)
{
  extern typeof (remquo (vol_var_unsigned_short_int, vol_var___int128, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_unsigned_short_int, vol_var___int128, vol_var_int_p);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_remquo_346 (void)
{
  extern typeof (remquo (vol_var_unsigned_short_int, vol_var_unsigned___int128, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_unsigned_short_int, vol_var_unsigned___int128, vol_var_int_p);
}
#endif
static void
test_remquo_347 (void)
{
  extern typeof (remquo (vol_var_unsigned_short_int, vol_var_enum_e, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_unsigned_short_int, vol_var_enum_e, vol_var_int_p);
}
static void
test_remquo_348 (void)
{
  extern typeof (remquo (vol_var_unsigned_short_int, vol_var__Bool, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_unsigned_short_int, vol_var__Bool, vol_var_int_p);
}
static void
test_remquo_349 (void)
{
  extern typeof (remquo (vol_var_unsigned_short_int, vol_var_bit_field, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_unsigned_short_int, vol_var_bit_field, vol_var_int_p);
}
#if defined HUGE_VAL_F16
static void
test_remquo_350 (void)
{
  extern typeof (remquo (vol_var_int, vol_var__Float16, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_int, vol_var__Float16, vol_var_int_p);
}
#endif
static void
test_remquo_351 (void)
{
  extern typeof (remquo (vol_var_int, vol_var_float, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_int, vol_var_float, vol_var_int_p);
}
#if defined HUGE_VAL_F32
static void
test_remquo_352 (void)
{
  extern typeof (remquo (vol_var_int, vol_var__Float32, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_int, vol_var__Float32, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_remquo_353 (void)
{
  extern typeof (remquo (vol_var_int, vol_var__Float32x, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_int, vol_var__Float32x, vol_var_int_p);
}
#endif
static void
test_remquo_354 (void)
{
  extern typeof (remquo (vol_var_int, vol_var_double, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_int, vol_var_double, vol_var_int_p);
}
static void
test_remquo_355 (void)
{
  extern typeof (remquo (vol_var_int, vol_var_long_double, vol_var_int_p)) var_long_double __attribute__ ((unused));
  vol_var_long_double = remquo (vol_var_int, vol_var_long_double, vol_var_int_p);
}
#if defined HUGE_VAL_F64
static void
test_remquo_356 (void)
{
  extern typeof (remquo (vol_var_int, vol_var__Float64, vol_var_int_p)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = remquo (vol_var_int, vol_var__Float64, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_remquo_357 (void)
{
  extern typeof (remquo (vol_var_int, vol_var__Float64x, vol_var_int_p)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = remquo (vol_var_int, vol_var__Float64x, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F128
static void
test_remquo_358 (void)
{
  extern typeof (remquo (vol_var_int, vol_var__Float128, vol_var_int_p)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = remquo (vol_var_int, vol_var__Float128, vol_var_int_p);
}
#endif
static void
test_remquo_359 (void)
{
  extern typeof (remquo (vol_var_int, vol_var_char, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_int, vol_var_char, vol_var_int_p);
}
static void
test_remquo_360 (void)
{
  extern typeof (remquo (vol_var_int, vol_var_signed_char, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_int, vol_var_signed_char, vol_var_int_p);
}
static void
test_remquo_361 (void)
{
  extern typeof (remquo (vol_var_int, vol_var_unsigned_char, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_int, vol_var_unsigned_char, vol_var_int_p);
}
static void
test_remquo_362 (void)
{
  extern typeof (remquo (vol_var_int, vol_var_short_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_int, vol_var_short_int, vol_var_int_p);
}
static void
test_remquo_363 (void)
{
  extern typeof (remquo (vol_var_int, vol_var_unsigned_short_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_int, vol_var_unsigned_short_int, vol_var_int_p);
}
static void
test_remquo_364 (void)
{
  extern typeof (remquo (vol_var_int, vol_var_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_int, vol_var_int, vol_var_int_p);
}
static void
test_remquo_365 (void)
{
  extern typeof (remquo (vol_var_int, vol_var_unsigned_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_int, vol_var_unsigned_int, vol_var_int_p);
}
static void
test_remquo_366 (void)
{
  extern typeof (remquo (vol_var_int, vol_var_long_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_int, vol_var_long_int, vol_var_int_p);
}
static void
test_remquo_367 (void)
{
  extern typeof (remquo (vol_var_int, vol_var_unsigned_long_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_int, vol_var_unsigned_long_int, vol_var_int_p);
}
static void
test_remquo_368 (void)
{
  extern typeof (remquo (vol_var_int, vol_var_long_long_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_int, vol_var_long_long_int, vol_var_int_p);
}
static void
test_remquo_369 (void)
{
  extern typeof (remquo (vol_var_int, vol_var_unsigned_long_long_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_int, vol_var_unsigned_long_long_int, vol_var_int_p);
}
#if defined __SIZEOF_INT128__
static void
test_remquo_370 (void)
{
  extern typeof (remquo (vol_var_int, vol_var___int128, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_int, vol_var___int128, vol_var_int_p);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_remquo_371 (void)
{
  extern typeof (remquo (vol_var_int, vol_var_unsigned___int128, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_int, vol_var_unsigned___int128, vol_var_int_p);
}
#endif
static void
test_remquo_372 (void)
{
  extern typeof (remquo (vol_var_int, vol_var_enum_e, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_int, vol_var_enum_e, vol_var_int_p);
}
static void
test_remquo_373 (void)
{
  extern typeof (remquo (vol_var_int, vol_var__Bool, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_int, vol_var__Bool, vol_var_int_p);
}
static void
test_remquo_374 (void)
{
  extern typeof (remquo (vol_var_int, vol_var_bit_field, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_int, vol_var_bit_field, vol_var_int_p);
}
#if defined HUGE_VAL_F16
static void
test_remquo_375 (void)
{
  extern typeof (remquo (vol_var_unsigned_int, vol_var__Float16, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_unsigned_int, vol_var__Float16, vol_var_int_p);
}
#endif
static void
test_remquo_376 (void)
{
  extern typeof (remquo (vol_var_unsigned_int, vol_var_float, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_unsigned_int, vol_var_float, vol_var_int_p);
}
#if defined HUGE_VAL_F32
static void
test_remquo_377 (void)
{
  extern typeof (remquo (vol_var_unsigned_int, vol_var__Float32, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_unsigned_int, vol_var__Float32, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_remquo_378 (void)
{
  extern typeof (remquo (vol_var_unsigned_int, vol_var__Float32x, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_unsigned_int, vol_var__Float32x, vol_var_int_p);
}
#endif
static void
test_remquo_379 (void)
{
  extern typeof (remquo (vol_var_unsigned_int, vol_var_double, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_unsigned_int, vol_var_double, vol_var_int_p);
}
static void
test_remquo_380 (void)
{
  extern typeof (remquo (vol_var_unsigned_int, vol_var_long_double, vol_var_int_p)) var_long_double __attribute__ ((unused));
  vol_var_long_double = remquo (vol_var_unsigned_int, vol_var_long_double, vol_var_int_p);
}
#if defined HUGE_VAL_F64
static void
test_remquo_381 (void)
{
  extern typeof (remquo (vol_var_unsigned_int, vol_var__Float64, vol_var_int_p)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = remquo (vol_var_unsigned_int, vol_var__Float64, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_remquo_382 (void)
{
  extern typeof (remquo (vol_var_unsigned_int, vol_var__Float64x, vol_var_int_p)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = remquo (vol_var_unsigned_int, vol_var__Float64x, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F128
static void
test_remquo_383 (void)
{
  extern typeof (remquo (vol_var_unsigned_int, vol_var__Float128, vol_var_int_p)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = remquo (vol_var_unsigned_int, vol_var__Float128, vol_var_int_p);
}
#endif
static void
test_remquo_384 (void)
{
  extern typeof (remquo (vol_var_unsigned_int, vol_var_char, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_unsigned_int, vol_var_char, vol_var_int_p);
}
static void
test_remquo_385 (void)
{
  extern typeof (remquo (vol_var_unsigned_int, vol_var_signed_char, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_unsigned_int, vol_var_signed_char, vol_var_int_p);
}
static void
test_remquo_386 (void)
{
  extern typeof (remquo (vol_var_unsigned_int, vol_var_unsigned_char, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_unsigned_int, vol_var_unsigned_char, vol_var_int_p);
}
static void
test_remquo_387 (void)
{
  extern typeof (remquo (vol_var_unsigned_int, vol_var_short_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_unsigned_int, vol_var_short_int, vol_var_int_p);
}
static void
test_remquo_388 (void)
{
  extern typeof (remquo (vol_var_unsigned_int, vol_var_unsigned_short_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_unsigned_int, vol_var_unsigned_short_int, vol_var_int_p);
}
static void
test_remquo_389 (void)
{
  extern typeof (remquo (vol_var_unsigned_int, vol_var_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_unsigned_int, vol_var_int, vol_var_int_p);
}
static void
test_remquo_390 (void)
{
  extern typeof (remquo (vol_var_unsigned_int, vol_var_unsigned_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_unsigned_int, vol_var_unsigned_int, vol_var_int_p);
}
static void
test_remquo_391 (void)
{
  extern typeof (remquo (vol_var_unsigned_int, vol_var_long_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_unsigned_int, vol_var_long_int, vol_var_int_p);
}
static void
test_remquo_392 (void)
{
  extern typeof (remquo (vol_var_unsigned_int, vol_var_unsigned_long_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_unsigned_int, vol_var_unsigned_long_int, vol_var_int_p);
}
static void
test_remquo_393 (void)
{
  extern typeof (remquo (vol_var_unsigned_int, vol_var_long_long_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_unsigned_int, vol_var_long_long_int, vol_var_int_p);
}
static void
test_remquo_394 (void)
{
  extern typeof (remquo (vol_var_unsigned_int, vol_var_unsigned_long_long_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_unsigned_int, vol_var_unsigned_long_long_int, vol_var_int_p);
}
#if defined __SIZEOF_INT128__
static void
test_remquo_395 (void)
{
  extern typeof (remquo (vol_var_unsigned_int, vol_var___int128, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_unsigned_int, vol_var___int128, vol_var_int_p);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_remquo_396 (void)
{
  extern typeof (remquo (vol_var_unsigned_int, vol_var_unsigned___int128, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_unsigned_int, vol_var_unsigned___int128, vol_var_int_p);
}
#endif
static void
test_remquo_397 (void)
{
  extern typeof (remquo (vol_var_unsigned_int, vol_var_enum_e, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_unsigned_int, vol_var_enum_e, vol_var_int_p);
}
static void
test_remquo_398 (void)
{
  extern typeof (remquo (vol_var_unsigned_int, vol_var__Bool, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_unsigned_int, vol_var__Bool, vol_var_int_p);
}
static void
test_remquo_399 (void)
{
  extern typeof (remquo (vol_var_unsigned_int, vol_var_bit_field, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_unsigned_int, vol_var_bit_field, vol_var_int_p);
}
#if defined HUGE_VAL_F16
static void
test_remquo_400 (void)
{
  extern typeof (remquo (vol_var_long_int, vol_var__Float16, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_long_int, vol_var__Float16, vol_var_int_p);
}
#endif
static void
test_remquo_401 (void)
{
  extern typeof (remquo (vol_var_long_int, vol_var_float, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_long_int, vol_var_float, vol_var_int_p);
}
#if defined HUGE_VAL_F32
static void
test_remquo_402 (void)
{
  extern typeof (remquo (vol_var_long_int, vol_var__Float32, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_long_int, vol_var__Float32, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_remquo_403 (void)
{
  extern typeof (remquo (vol_var_long_int, vol_var__Float32x, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_long_int, vol_var__Float32x, vol_var_int_p);
}
#endif
static void
test_remquo_404 (void)
{
  extern typeof (remquo (vol_var_long_int, vol_var_double, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_long_int, vol_var_double, vol_var_int_p);
}
static void
test_remquo_405 (void)
{
  extern typeof (remquo (vol_var_long_int, vol_var_long_double, vol_var_int_p)) var_long_double __attribute__ ((unused));
  vol_var_long_double = remquo (vol_var_long_int, vol_var_long_double, vol_var_int_p);
}
#if defined HUGE_VAL_F64
static void
test_remquo_406 (void)
{
  extern typeof (remquo (vol_var_long_int, vol_var__Float64, vol_var_int_p)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = remquo (vol_var_long_int, vol_var__Float64, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_remquo_407 (void)
{
  extern typeof (remquo (vol_var_long_int, vol_var__Float64x, vol_var_int_p)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = remquo (vol_var_long_int, vol_var__Float64x, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F128
static void
test_remquo_408 (void)
{
  extern typeof (remquo (vol_var_long_int, vol_var__Float128, vol_var_int_p)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = remquo (vol_var_long_int, vol_var__Float128, vol_var_int_p);
}
#endif
static void
test_remquo_409 (void)
{
  extern typeof (remquo (vol_var_long_int, vol_var_char, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_long_int, vol_var_char, vol_var_int_p);
}
static void
test_remquo_410 (void)
{
  extern typeof (remquo (vol_var_long_int, vol_var_signed_char, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_long_int, vol_var_signed_char, vol_var_int_p);
}
static void
test_remquo_411 (void)
{
  extern typeof (remquo (vol_var_long_int, vol_var_unsigned_char, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_long_int, vol_var_unsigned_char, vol_var_int_p);
}
static void
test_remquo_412 (void)
{
  extern typeof (remquo (vol_var_long_int, vol_var_short_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_long_int, vol_var_short_int, vol_var_int_p);
}
static void
test_remquo_413 (void)
{
  extern typeof (remquo (vol_var_long_int, vol_var_unsigned_short_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_long_int, vol_var_unsigned_short_int, vol_var_int_p);
}
static void
test_remquo_414 (void)
{
  extern typeof (remquo (vol_var_long_int, vol_var_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_long_int, vol_var_int, vol_var_int_p);
}
static void
test_remquo_415 (void)
{
  extern typeof (remquo (vol_var_long_int, vol_var_unsigned_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_long_int, vol_var_unsigned_int, vol_var_int_p);
}
static void
test_remquo_416 (void)
{
  extern typeof (remquo (vol_var_long_int, vol_var_long_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_long_int, vol_var_long_int, vol_var_int_p);
}
static void
test_remquo_417 (void)
{
  extern typeof (remquo (vol_var_long_int, vol_var_unsigned_long_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_long_int, vol_var_unsigned_long_int, vol_var_int_p);
}
static void
test_remquo_418 (void)
{
  extern typeof (remquo (vol_var_long_int, vol_var_long_long_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_long_int, vol_var_long_long_int, vol_var_int_p);
}
static void
test_remquo_419 (void)
{
  extern typeof (remquo (vol_var_long_int, vol_var_unsigned_long_long_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_long_int, vol_var_unsigned_long_long_int, vol_var_int_p);
}
#if defined __SIZEOF_INT128__
static void
test_remquo_420 (void)
{
  extern typeof (remquo (vol_var_long_int, vol_var___int128, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_long_int, vol_var___int128, vol_var_int_p);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_remquo_421 (void)
{
  extern typeof (remquo (vol_var_long_int, vol_var_unsigned___int128, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_long_int, vol_var_unsigned___int128, vol_var_int_p);
}
#endif
static void
test_remquo_422 (void)
{
  extern typeof (remquo (vol_var_long_int, vol_var_enum_e, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_long_int, vol_var_enum_e, vol_var_int_p);
}
static void
test_remquo_423 (void)
{
  extern typeof (remquo (vol_var_long_int, vol_var__Bool, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_long_int, vol_var__Bool, vol_var_int_p);
}
static void
test_remquo_424 (void)
{
  extern typeof (remquo (vol_var_long_int, vol_var_bit_field, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_long_int, vol_var_bit_field, vol_var_int_p);
}
#if defined HUGE_VAL_F16
static void
test_remquo_425 (void)
{
  extern typeof (remquo (vol_var_unsigned_long_int, vol_var__Float16, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_unsigned_long_int, vol_var__Float16, vol_var_int_p);
}
#endif
static void
test_remquo_426 (void)
{
  extern typeof (remquo (vol_var_unsigned_long_int, vol_var_float, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_unsigned_long_int, vol_var_float, vol_var_int_p);
}
#if defined HUGE_VAL_F32
static void
test_remquo_427 (void)
{
  extern typeof (remquo (vol_var_unsigned_long_int, vol_var__Float32, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_unsigned_long_int, vol_var__Float32, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_remquo_428 (void)
{
  extern typeof (remquo (vol_var_unsigned_long_int, vol_var__Float32x, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_unsigned_long_int, vol_var__Float32x, vol_var_int_p);
}
#endif
static void
test_remquo_429 (void)
{
  extern typeof (remquo (vol_var_unsigned_long_int, vol_var_double, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_unsigned_long_int, vol_var_double, vol_var_int_p);
}
static void
test_remquo_430 (void)
{
  extern typeof (remquo (vol_var_unsigned_long_int, vol_var_long_double, vol_var_int_p)) var_long_double __attribute__ ((unused));
  vol_var_long_double = remquo (vol_var_unsigned_long_int, vol_var_long_double, vol_var_int_p);
}
#if defined HUGE_VAL_F64
static void
test_remquo_431 (void)
{
  extern typeof (remquo (vol_var_unsigned_long_int, vol_var__Float64, vol_var_int_p)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = remquo (vol_var_unsigned_long_int, vol_var__Float64, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_remquo_432 (void)
{
  extern typeof (remquo (vol_var_unsigned_long_int, vol_var__Float64x, vol_var_int_p)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = remquo (vol_var_unsigned_long_int, vol_var__Float64x, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F128
static void
test_remquo_433 (void)
{
  extern typeof (remquo (vol_var_unsigned_long_int, vol_var__Float128, vol_var_int_p)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = remquo (vol_var_unsigned_long_int, vol_var__Float128, vol_var_int_p);
}
#endif
static void
test_remquo_434 (void)
{
  extern typeof (remquo (vol_var_unsigned_long_int, vol_var_char, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_unsigned_long_int, vol_var_char, vol_var_int_p);
}
static void
test_remquo_435 (void)
{
  extern typeof (remquo (vol_var_unsigned_long_int, vol_var_signed_char, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_unsigned_long_int, vol_var_signed_char, vol_var_int_p);
}
static void
test_remquo_436 (void)
{
  extern typeof (remquo (vol_var_unsigned_long_int, vol_var_unsigned_char, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_unsigned_long_int, vol_var_unsigned_char, vol_var_int_p);
}
static void
test_remquo_437 (void)
{
  extern typeof (remquo (vol_var_unsigned_long_int, vol_var_short_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_unsigned_long_int, vol_var_short_int, vol_var_int_p);
}
static void
test_remquo_438 (void)
{
  extern typeof (remquo (vol_var_unsigned_long_int, vol_var_unsigned_short_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_unsigned_long_int, vol_var_unsigned_short_int, vol_var_int_p);
}
static void
test_remquo_439 (void)
{
  extern typeof (remquo (vol_var_unsigned_long_int, vol_var_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_unsigned_long_int, vol_var_int, vol_var_int_p);
}
static void
test_remquo_440 (void)
{
  extern typeof (remquo (vol_var_unsigned_long_int, vol_var_unsigned_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_unsigned_long_int, vol_var_unsigned_int, vol_var_int_p);
}
static void
test_remquo_441 (void)
{
  extern typeof (remquo (vol_var_unsigned_long_int, vol_var_long_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_unsigned_long_int, vol_var_long_int, vol_var_int_p);
}
static void
test_remquo_442 (void)
{
  extern typeof (remquo (vol_var_unsigned_long_int, vol_var_unsigned_long_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_unsigned_long_int, vol_var_unsigned_long_int, vol_var_int_p);
}
static void
test_remquo_443 (void)
{
  extern typeof (remquo (vol_var_unsigned_long_int, vol_var_long_long_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_unsigned_long_int, vol_var_long_long_int, vol_var_int_p);
}
static void
test_remquo_444 (void)
{
  extern typeof (remquo (vol_var_unsigned_long_int, vol_var_unsigned_long_long_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_unsigned_long_int, vol_var_unsigned_long_long_int, vol_var_int_p);
}
#if defined __SIZEOF_INT128__
static void
test_remquo_445 (void)
{
  extern typeof (remquo (vol_var_unsigned_long_int, vol_var___int128, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_unsigned_long_int, vol_var___int128, vol_var_int_p);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_remquo_446 (void)
{
  extern typeof (remquo (vol_var_unsigned_long_int, vol_var_unsigned___int128, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_unsigned_long_int, vol_var_unsigned___int128, vol_var_int_p);
}
#endif
static void
test_remquo_447 (void)
{
  extern typeof (remquo (vol_var_unsigned_long_int, vol_var_enum_e, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_unsigned_long_int, vol_var_enum_e, vol_var_int_p);
}
static void
test_remquo_448 (void)
{
  extern typeof (remquo (vol_var_unsigned_long_int, vol_var__Bool, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_unsigned_long_int, vol_var__Bool, vol_var_int_p);
}
static void
test_remquo_449 (void)
{
  extern typeof (remquo (vol_var_unsigned_long_int, vol_var_bit_field, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_unsigned_long_int, vol_var_bit_field, vol_var_int_p);
}
#if defined HUGE_VAL_F16
static void
test_remquo_450 (void)
{
  extern typeof (remquo (vol_var_long_long_int, vol_var__Float16, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_long_long_int, vol_var__Float16, vol_var_int_p);
}
#endif
static void
test_remquo_451 (void)
{
  extern typeof (remquo (vol_var_long_long_int, vol_var_float, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_long_long_int, vol_var_float, vol_var_int_p);
}
#if defined HUGE_VAL_F32
static void
test_remquo_452 (void)
{
  extern typeof (remquo (vol_var_long_long_int, vol_var__Float32, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_long_long_int, vol_var__Float32, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_remquo_453 (void)
{
  extern typeof (remquo (vol_var_long_long_int, vol_var__Float32x, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_long_long_int, vol_var__Float32x, vol_var_int_p);
}
#endif
static void
test_remquo_454 (void)
{
  extern typeof (remquo (vol_var_long_long_int, vol_var_double, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_long_long_int, vol_var_double, vol_var_int_p);
}
static void
test_remquo_455 (void)
{
  extern typeof (remquo (vol_var_long_long_int, vol_var_long_double, vol_var_int_p)) var_long_double __attribute__ ((unused));
  vol_var_long_double = remquo (vol_var_long_long_int, vol_var_long_double, vol_var_int_p);
}
#if defined HUGE_VAL_F64
static void
test_remquo_456 (void)
{
  extern typeof (remquo (vol_var_long_long_int, vol_var__Float64, vol_var_int_p)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = remquo (vol_var_long_long_int, vol_var__Float64, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_remquo_457 (void)
{
  extern typeof (remquo (vol_var_long_long_int, vol_var__Float64x, vol_var_int_p)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = remquo (vol_var_long_long_int, vol_var__Float64x, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F128
static void
test_remquo_458 (void)
{
  extern typeof (remquo (vol_var_long_long_int, vol_var__Float128, vol_var_int_p)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = remquo (vol_var_long_long_int, vol_var__Float128, vol_var_int_p);
}
#endif
static void
test_remquo_459 (void)
{
  extern typeof (remquo (vol_var_long_long_int, vol_var_char, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_long_long_int, vol_var_char, vol_var_int_p);
}
static void
test_remquo_460 (void)
{
  extern typeof (remquo (vol_var_long_long_int, vol_var_signed_char, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_long_long_int, vol_var_signed_char, vol_var_int_p);
}
static void
test_remquo_461 (void)
{
  extern typeof (remquo (vol_var_long_long_int, vol_var_unsigned_char, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_long_long_int, vol_var_unsigned_char, vol_var_int_p);
}
static void
test_remquo_462 (void)
{
  extern typeof (remquo (vol_var_long_long_int, vol_var_short_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_long_long_int, vol_var_short_int, vol_var_int_p);
}
static void
test_remquo_463 (void)
{
  extern typeof (remquo (vol_var_long_long_int, vol_var_unsigned_short_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_long_long_int, vol_var_unsigned_short_int, vol_var_int_p);
}
static void
test_remquo_464 (void)
{
  extern typeof (remquo (vol_var_long_long_int, vol_var_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_long_long_int, vol_var_int, vol_var_int_p);
}
static void
test_remquo_465 (void)
{
  extern typeof (remquo (vol_var_long_long_int, vol_var_unsigned_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_long_long_int, vol_var_unsigned_int, vol_var_int_p);
}
static void
test_remquo_466 (void)
{
  extern typeof (remquo (vol_var_long_long_int, vol_var_long_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_long_long_int, vol_var_long_int, vol_var_int_p);
}
static void
test_remquo_467 (void)
{
  extern typeof (remquo (vol_var_long_long_int, vol_var_unsigned_long_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_long_long_int, vol_var_unsigned_long_int, vol_var_int_p);
}
static void
test_remquo_468 (void)
{
  extern typeof (remquo (vol_var_long_long_int, vol_var_long_long_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_long_long_int, vol_var_long_long_int, vol_var_int_p);
}
static void
test_remquo_469 (void)
{
  extern typeof (remquo (vol_var_long_long_int, vol_var_unsigned_long_long_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_long_long_int, vol_var_unsigned_long_long_int, vol_var_int_p);
}
#if defined __SIZEOF_INT128__
static void
test_remquo_470 (void)
{
  extern typeof (remquo (vol_var_long_long_int, vol_var___int128, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_long_long_int, vol_var___int128, vol_var_int_p);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_remquo_471 (void)
{
  extern typeof (remquo (vol_var_long_long_int, vol_var_unsigned___int128, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_long_long_int, vol_var_unsigned___int128, vol_var_int_p);
}
#endif
static void
test_remquo_472 (void)
{
  extern typeof (remquo (vol_var_long_long_int, vol_var_enum_e, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_long_long_int, vol_var_enum_e, vol_var_int_p);
}
static void
test_remquo_473 (void)
{
  extern typeof (remquo (vol_var_long_long_int, vol_var__Bool, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_long_long_int, vol_var__Bool, vol_var_int_p);
}
static void
test_remquo_474 (void)
{
  extern typeof (remquo (vol_var_long_long_int, vol_var_bit_field, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_long_long_int, vol_var_bit_field, vol_var_int_p);
}
#if defined HUGE_VAL_F16
static void
test_remquo_475 (void)
{
  extern typeof (remquo (vol_var_unsigned_long_long_int, vol_var__Float16, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_unsigned_long_long_int, vol_var__Float16, vol_var_int_p);
}
#endif
static void
test_remquo_476 (void)
{
  extern typeof (remquo (vol_var_unsigned_long_long_int, vol_var_float, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_unsigned_long_long_int, vol_var_float, vol_var_int_p);
}
#if defined HUGE_VAL_F32
static void
test_remquo_477 (void)
{
  extern typeof (remquo (vol_var_unsigned_long_long_int, vol_var__Float32, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_unsigned_long_long_int, vol_var__Float32, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_remquo_478 (void)
{
  extern typeof (remquo (vol_var_unsigned_long_long_int, vol_var__Float32x, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_unsigned_long_long_int, vol_var__Float32x, vol_var_int_p);
}
#endif
static void
test_remquo_479 (void)
{
  extern typeof (remquo (vol_var_unsigned_long_long_int, vol_var_double, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_unsigned_long_long_int, vol_var_double, vol_var_int_p);
}
static void
test_remquo_480 (void)
{
  extern typeof (remquo (vol_var_unsigned_long_long_int, vol_var_long_double, vol_var_int_p)) var_long_double __attribute__ ((unused));
  vol_var_long_double = remquo (vol_var_unsigned_long_long_int, vol_var_long_double, vol_var_int_p);
}
#if defined HUGE_VAL_F64
static void
test_remquo_481 (void)
{
  extern typeof (remquo (vol_var_unsigned_long_long_int, vol_var__Float64, vol_var_int_p)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = remquo (vol_var_unsigned_long_long_int, vol_var__Float64, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_remquo_482 (void)
{
  extern typeof (remquo (vol_var_unsigned_long_long_int, vol_var__Float64x, vol_var_int_p)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = remquo (vol_var_unsigned_long_long_int, vol_var__Float64x, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F128
static void
test_remquo_483 (void)
{
  extern typeof (remquo (vol_var_unsigned_long_long_int, vol_var__Float128, vol_var_int_p)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = remquo (vol_var_unsigned_long_long_int, vol_var__Float128, vol_var_int_p);
}
#endif
static void
test_remquo_484 (void)
{
  extern typeof (remquo (vol_var_unsigned_long_long_int, vol_var_char, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_unsigned_long_long_int, vol_var_char, vol_var_int_p);
}
static void
test_remquo_485 (void)
{
  extern typeof (remquo (vol_var_unsigned_long_long_int, vol_var_signed_char, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_unsigned_long_long_int, vol_var_signed_char, vol_var_int_p);
}
static void
test_remquo_486 (void)
{
  extern typeof (remquo (vol_var_unsigned_long_long_int, vol_var_unsigned_char, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_unsigned_long_long_int, vol_var_unsigned_char, vol_var_int_p);
}
static void
test_remquo_487 (void)
{
  extern typeof (remquo (vol_var_unsigned_long_long_int, vol_var_short_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_unsigned_long_long_int, vol_var_short_int, vol_var_int_p);
}
static void
test_remquo_488 (void)
{
  extern typeof (remquo (vol_var_unsigned_long_long_int, vol_var_unsigned_short_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_unsigned_long_long_int, vol_var_unsigned_short_int, vol_var_int_p);
}
static void
test_remquo_489 (void)
{
  extern typeof (remquo (vol_var_unsigned_long_long_int, vol_var_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_unsigned_long_long_int, vol_var_int, vol_var_int_p);
}
static void
test_remquo_490 (void)
{
  extern typeof (remquo (vol_var_unsigned_long_long_int, vol_var_unsigned_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_unsigned_long_long_int, vol_var_unsigned_int, vol_var_int_p);
}
static void
test_remquo_491 (void)
{
  extern typeof (remquo (vol_var_unsigned_long_long_int, vol_var_long_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_unsigned_long_long_int, vol_var_long_int, vol_var_int_p);
}
static void
test_remquo_492 (void)
{
  extern typeof (remquo (vol_var_unsigned_long_long_int, vol_var_unsigned_long_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_unsigned_long_long_int, vol_var_unsigned_long_int, vol_var_int_p);
}
static void
test_remquo_493 (void)
{
  extern typeof (remquo (vol_var_unsigned_long_long_int, vol_var_long_long_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_unsigned_long_long_int, vol_var_long_long_int, vol_var_int_p);
}
static void
test_remquo_494 (void)
{
  extern typeof (remquo (vol_var_unsigned_long_long_int, vol_var_unsigned_long_long_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_unsigned_long_long_int, vol_var_unsigned_long_long_int, vol_var_int_p);
}
#if defined __SIZEOF_INT128__
static void
test_remquo_495 (void)
{
  extern typeof (remquo (vol_var_unsigned_long_long_int, vol_var___int128, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_unsigned_long_long_int, vol_var___int128, vol_var_int_p);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_remquo_496 (void)
{
  extern typeof (remquo (vol_var_unsigned_long_long_int, vol_var_unsigned___int128, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_unsigned_long_long_int, vol_var_unsigned___int128, vol_var_int_p);
}
#endif
static void
test_remquo_497 (void)
{
  extern typeof (remquo (vol_var_unsigned_long_long_int, vol_var_enum_e, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_unsigned_long_long_int, vol_var_enum_e, vol_var_int_p);
}
static void
test_remquo_498 (void)
{
  extern typeof (remquo (vol_var_unsigned_long_long_int, vol_var__Bool, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_unsigned_long_long_int, vol_var__Bool, vol_var_int_p);
}
static void
test_remquo_499 (void)
{
  extern typeof (remquo (vol_var_unsigned_long_long_int, vol_var_bit_field, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_unsigned_long_long_int, vol_var_bit_field, vol_var_int_p);
}
#if defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_remquo_500 (void)
{
  extern typeof (remquo (vol_var___int128, vol_var__Float16, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var___int128, vol_var__Float16, vol_var_int_p);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_remquo_501 (void)
{
  extern typeof (remquo (vol_var___int128, vol_var_float, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var___int128, vol_var_float, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_remquo_502 (void)
{
  extern typeof (remquo (vol_var___int128, vol_var__Float32, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var___int128, vol_var__Float32, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_remquo_503 (void)
{
  extern typeof (remquo (vol_var___int128, vol_var__Float32x, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var___int128, vol_var__Float32x, vol_var_int_p);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_remquo_504 (void)
{
  extern typeof (remquo (vol_var___int128, vol_var_double, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var___int128, vol_var_double, vol_var_int_p);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_remquo_505 (void)
{
  extern typeof (remquo (vol_var___int128, vol_var_long_double, vol_var_int_p)) var_long_double __attribute__ ((unused));
  vol_var_long_double = remquo (vol_var___int128, vol_var_long_double, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_remquo_506 (void)
{
  extern typeof (remquo (vol_var___int128, vol_var__Float64, vol_var_int_p)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = remquo (vol_var___int128, vol_var__Float64, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_remquo_507 (void)
{
  extern typeof (remquo (vol_var___int128, vol_var__Float64x, vol_var_int_p)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = remquo (vol_var___int128, vol_var__Float64x, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_remquo_508 (void)
{
  extern typeof (remquo (vol_var___int128, vol_var__Float128, vol_var_int_p)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = remquo (vol_var___int128, vol_var__Float128, vol_var_int_p);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_remquo_509 (void)
{
  extern typeof (remquo (vol_var___int128, vol_var_char, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var___int128, vol_var_char, vol_var_int_p);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_remquo_510 (void)
{
  extern typeof (remquo (vol_var___int128, vol_var_signed_char, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var___int128, vol_var_signed_char, vol_var_int_p);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_remquo_511 (void)
{
  extern typeof (remquo (vol_var___int128, vol_var_unsigned_char, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var___int128, vol_var_unsigned_char, vol_var_int_p);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_remquo_512 (void)
{
  extern typeof (remquo (vol_var___int128, vol_var_short_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var___int128, vol_var_short_int, vol_var_int_p);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_remquo_513 (void)
{
  extern typeof (remquo (vol_var___int128, vol_var_unsigned_short_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var___int128, vol_var_unsigned_short_int, vol_var_int_p);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_remquo_514 (void)
{
  extern typeof (remquo (vol_var___int128, vol_var_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var___int128, vol_var_int, vol_var_int_p);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_remquo_515 (void)
{
  extern typeof (remquo (vol_var___int128, vol_var_unsigned_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var___int128, vol_var_unsigned_int, vol_var_int_p);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_remquo_516 (void)
{
  extern typeof (remquo (vol_var___int128, vol_var_long_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var___int128, vol_var_long_int, vol_var_int_p);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_remquo_517 (void)
{
  extern typeof (remquo (vol_var___int128, vol_var_unsigned_long_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var___int128, vol_var_unsigned_long_int, vol_var_int_p);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_remquo_518 (void)
{
  extern typeof (remquo (vol_var___int128, vol_var_long_long_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var___int128, vol_var_long_long_int, vol_var_int_p);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_remquo_519 (void)
{
  extern typeof (remquo (vol_var___int128, vol_var_unsigned_long_long_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var___int128, vol_var_unsigned_long_long_int, vol_var_int_p);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_remquo_520 (void)
{
  extern typeof (remquo (vol_var___int128, vol_var___int128, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var___int128, vol_var___int128, vol_var_int_p);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_remquo_521 (void)
{
  extern typeof (remquo (vol_var___int128, vol_var_unsigned___int128, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var___int128, vol_var_unsigned___int128, vol_var_int_p);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_remquo_522 (void)
{
  extern typeof (remquo (vol_var___int128, vol_var_enum_e, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var___int128, vol_var_enum_e, vol_var_int_p);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_remquo_523 (void)
{
  extern typeof (remquo (vol_var___int128, vol_var__Bool, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var___int128, vol_var__Bool, vol_var_int_p);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_remquo_524 (void)
{
  extern typeof (remquo (vol_var___int128, vol_var_bit_field, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var___int128, vol_var_bit_field, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_remquo_525 (void)
{
  extern typeof (remquo (vol_var_unsigned___int128, vol_var__Float16, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_unsigned___int128, vol_var__Float16, vol_var_int_p);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_remquo_526 (void)
{
  extern typeof (remquo (vol_var_unsigned___int128, vol_var_float, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_unsigned___int128, vol_var_float, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_remquo_527 (void)
{
  extern typeof (remquo (vol_var_unsigned___int128, vol_var__Float32, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_unsigned___int128, vol_var__Float32, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_remquo_528 (void)
{
  extern typeof (remquo (vol_var_unsigned___int128, vol_var__Float32x, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_unsigned___int128, vol_var__Float32x, vol_var_int_p);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_remquo_529 (void)
{
  extern typeof (remquo (vol_var_unsigned___int128, vol_var_double, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_unsigned___int128, vol_var_double, vol_var_int_p);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_remquo_530 (void)
{
  extern typeof (remquo (vol_var_unsigned___int128, vol_var_long_double, vol_var_int_p)) var_long_double __attribute__ ((unused));
  vol_var_long_double = remquo (vol_var_unsigned___int128, vol_var_long_double, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_remquo_531 (void)
{
  extern typeof (remquo (vol_var_unsigned___int128, vol_var__Float64, vol_var_int_p)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = remquo (vol_var_unsigned___int128, vol_var__Float64, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_remquo_532 (void)
{
  extern typeof (remquo (vol_var_unsigned___int128, vol_var__Float64x, vol_var_int_p)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = remquo (vol_var_unsigned___int128, vol_var__Float64x, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_remquo_533 (void)
{
  extern typeof (remquo (vol_var_unsigned___int128, vol_var__Float128, vol_var_int_p)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = remquo (vol_var_unsigned___int128, vol_var__Float128, vol_var_int_p);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_remquo_534 (void)
{
  extern typeof (remquo (vol_var_unsigned___int128, vol_var_char, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_unsigned___int128, vol_var_char, vol_var_int_p);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_remquo_535 (void)
{
  extern typeof (remquo (vol_var_unsigned___int128, vol_var_signed_char, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_unsigned___int128, vol_var_signed_char, vol_var_int_p);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_remquo_536 (void)
{
  extern typeof (remquo (vol_var_unsigned___int128, vol_var_unsigned_char, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_unsigned___int128, vol_var_unsigned_char, vol_var_int_p);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_remquo_537 (void)
{
  extern typeof (remquo (vol_var_unsigned___int128, vol_var_short_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_unsigned___int128, vol_var_short_int, vol_var_int_p);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_remquo_538 (void)
{
  extern typeof (remquo (vol_var_unsigned___int128, vol_var_unsigned_short_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_unsigned___int128, vol_var_unsigned_short_int, vol_var_int_p);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_remquo_539 (void)
{
  extern typeof (remquo (vol_var_unsigned___int128, vol_var_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_unsigned___int128, vol_var_int, vol_var_int_p);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_remquo_540 (void)
{
  extern typeof (remquo (vol_var_unsigned___int128, vol_var_unsigned_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_unsigned___int128, vol_var_unsigned_int, vol_var_int_p);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_remquo_541 (void)
{
  extern typeof (remquo (vol_var_unsigned___int128, vol_var_long_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_unsigned___int128, vol_var_long_int, vol_var_int_p);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_remquo_542 (void)
{
  extern typeof (remquo (vol_var_unsigned___int128, vol_var_unsigned_long_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_unsigned___int128, vol_var_unsigned_long_int, vol_var_int_p);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_remquo_543 (void)
{
  extern typeof (remquo (vol_var_unsigned___int128, vol_var_long_long_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_unsigned___int128, vol_var_long_long_int, vol_var_int_p);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_remquo_544 (void)
{
  extern typeof (remquo (vol_var_unsigned___int128, vol_var_unsigned_long_long_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_unsigned___int128, vol_var_unsigned_long_long_int, vol_var_int_p);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_remquo_545 (void)
{
  extern typeof (remquo (vol_var_unsigned___int128, vol_var___int128, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_unsigned___int128, vol_var___int128, vol_var_int_p);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_remquo_546 (void)
{
  extern typeof (remquo (vol_var_unsigned___int128, vol_var_unsigned___int128, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_unsigned___int128, vol_var_unsigned___int128, vol_var_int_p);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_remquo_547 (void)
{
  extern typeof (remquo (vol_var_unsigned___int128, vol_var_enum_e, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_unsigned___int128, vol_var_enum_e, vol_var_int_p);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_remquo_548 (void)
{
  extern typeof (remquo (vol_var_unsigned___int128, vol_var__Bool, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_unsigned___int128, vol_var__Bool, vol_var_int_p);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_remquo_549 (void)
{
  extern typeof (remquo (vol_var_unsigned___int128, vol_var_bit_field, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_unsigned___int128, vol_var_bit_field, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F16
static void
test_remquo_550 (void)
{
  extern typeof (remquo (vol_var_enum_e, vol_var__Float16, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_enum_e, vol_var__Float16, vol_var_int_p);
}
#endif
static void
test_remquo_551 (void)
{
  extern typeof (remquo (vol_var_enum_e, vol_var_float, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_enum_e, vol_var_float, vol_var_int_p);
}
#if defined HUGE_VAL_F32
static void
test_remquo_552 (void)
{
  extern typeof (remquo (vol_var_enum_e, vol_var__Float32, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_enum_e, vol_var__Float32, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_remquo_553 (void)
{
  extern typeof (remquo (vol_var_enum_e, vol_var__Float32x, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_enum_e, vol_var__Float32x, vol_var_int_p);
}
#endif
static void
test_remquo_554 (void)
{
  extern typeof (remquo (vol_var_enum_e, vol_var_double, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_enum_e, vol_var_double, vol_var_int_p);
}
static void
test_remquo_555 (void)
{
  extern typeof (remquo (vol_var_enum_e, vol_var_long_double, vol_var_int_p)) var_long_double __attribute__ ((unused));
  vol_var_long_double = remquo (vol_var_enum_e, vol_var_long_double, vol_var_int_p);
}
#if defined HUGE_VAL_F64
static void
test_remquo_556 (void)
{
  extern typeof (remquo (vol_var_enum_e, vol_var__Float64, vol_var_int_p)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = remquo (vol_var_enum_e, vol_var__Float64, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_remquo_557 (void)
{
  extern typeof (remquo (vol_var_enum_e, vol_var__Float64x, vol_var_int_p)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = remquo (vol_var_enum_e, vol_var__Float64x, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F128
static void
test_remquo_558 (void)
{
  extern typeof (remquo (vol_var_enum_e, vol_var__Float128, vol_var_int_p)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = remquo (vol_var_enum_e, vol_var__Float128, vol_var_int_p);
}
#endif
static void
test_remquo_559 (void)
{
  extern typeof (remquo (vol_var_enum_e, vol_var_char, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_enum_e, vol_var_char, vol_var_int_p);
}
static void
test_remquo_560 (void)
{
  extern typeof (remquo (vol_var_enum_e, vol_var_signed_char, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_enum_e, vol_var_signed_char, vol_var_int_p);
}
static void
test_remquo_561 (void)
{
  extern typeof (remquo (vol_var_enum_e, vol_var_unsigned_char, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_enum_e, vol_var_unsigned_char, vol_var_int_p);
}
static void
test_remquo_562 (void)
{
  extern typeof (remquo (vol_var_enum_e, vol_var_short_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_enum_e, vol_var_short_int, vol_var_int_p);
}
static void
test_remquo_563 (void)
{
  extern typeof (remquo (vol_var_enum_e, vol_var_unsigned_short_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_enum_e, vol_var_unsigned_short_int, vol_var_int_p);
}
static void
test_remquo_564 (void)
{
  extern typeof (remquo (vol_var_enum_e, vol_var_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_enum_e, vol_var_int, vol_var_int_p);
}
static void
test_remquo_565 (void)
{
  extern typeof (remquo (vol_var_enum_e, vol_var_unsigned_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_enum_e, vol_var_unsigned_int, vol_var_int_p);
}
static void
test_remquo_566 (void)
{
  extern typeof (remquo (vol_var_enum_e, vol_var_long_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_enum_e, vol_var_long_int, vol_var_int_p);
}
static void
test_remquo_567 (void)
{
  extern typeof (remquo (vol_var_enum_e, vol_var_unsigned_long_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_enum_e, vol_var_unsigned_long_int, vol_var_int_p);
}
static void
test_remquo_568 (void)
{
  extern typeof (remquo (vol_var_enum_e, vol_var_long_long_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_enum_e, vol_var_long_long_int, vol_var_int_p);
}
static void
test_remquo_569 (void)
{
  extern typeof (remquo (vol_var_enum_e, vol_var_unsigned_long_long_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_enum_e, vol_var_unsigned_long_long_int, vol_var_int_p);
}
#if defined __SIZEOF_INT128__
static void
test_remquo_570 (void)
{
  extern typeof (remquo (vol_var_enum_e, vol_var___int128, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_enum_e, vol_var___int128, vol_var_int_p);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_remquo_571 (void)
{
  extern typeof (remquo (vol_var_enum_e, vol_var_unsigned___int128, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_enum_e, vol_var_unsigned___int128, vol_var_int_p);
}
#endif
static void
test_remquo_572 (void)
{
  extern typeof (remquo (vol_var_enum_e, vol_var_enum_e, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_enum_e, vol_var_enum_e, vol_var_int_p);
}
static void
test_remquo_573 (void)
{
  extern typeof (remquo (vol_var_enum_e, vol_var__Bool, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_enum_e, vol_var__Bool, vol_var_int_p);
}
static void
test_remquo_574 (void)
{
  extern typeof (remquo (vol_var_enum_e, vol_var_bit_field, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_enum_e, vol_var_bit_field, vol_var_int_p);
}
#if defined HUGE_VAL_F16
static void
test_remquo_575 (void)
{
  extern typeof (remquo (vol_var__Bool, vol_var__Float16, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var__Bool, vol_var__Float16, vol_var_int_p);
}
#endif
static void
test_remquo_576 (void)
{
  extern typeof (remquo (vol_var__Bool, vol_var_float, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var__Bool, vol_var_float, vol_var_int_p);
}
#if defined HUGE_VAL_F32
static void
test_remquo_577 (void)
{
  extern typeof (remquo (vol_var__Bool, vol_var__Float32, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var__Bool, vol_var__Float32, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_remquo_578 (void)
{
  extern typeof (remquo (vol_var__Bool, vol_var__Float32x, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var__Bool, vol_var__Float32x, vol_var_int_p);
}
#endif
static void
test_remquo_579 (void)
{
  extern typeof (remquo (vol_var__Bool, vol_var_double, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var__Bool, vol_var_double, vol_var_int_p);
}
static void
test_remquo_580 (void)
{
  extern typeof (remquo (vol_var__Bool, vol_var_long_double, vol_var_int_p)) var_long_double __attribute__ ((unused));
  vol_var_long_double = remquo (vol_var__Bool, vol_var_long_double, vol_var_int_p);
}
#if defined HUGE_VAL_F64
static void
test_remquo_581 (void)
{
  extern typeof (remquo (vol_var__Bool, vol_var__Float64, vol_var_int_p)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = remquo (vol_var__Bool, vol_var__Float64, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_remquo_582 (void)
{
  extern typeof (remquo (vol_var__Bool, vol_var__Float64x, vol_var_int_p)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = remquo (vol_var__Bool, vol_var__Float64x, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F128
static void
test_remquo_583 (void)
{
  extern typeof (remquo (vol_var__Bool, vol_var__Float128, vol_var_int_p)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = remquo (vol_var__Bool, vol_var__Float128, vol_var_int_p);
}
#endif
static void
test_remquo_584 (void)
{
  extern typeof (remquo (vol_var__Bool, vol_var_char, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var__Bool, vol_var_char, vol_var_int_p);
}
static void
test_remquo_585 (void)
{
  extern typeof (remquo (vol_var__Bool, vol_var_signed_char, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var__Bool, vol_var_signed_char, vol_var_int_p);
}
static void
test_remquo_586 (void)
{
  extern typeof (remquo (vol_var__Bool, vol_var_unsigned_char, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var__Bool, vol_var_unsigned_char, vol_var_int_p);
}
static void
test_remquo_587 (void)
{
  extern typeof (remquo (vol_var__Bool, vol_var_short_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var__Bool, vol_var_short_int, vol_var_int_p);
}
static void
test_remquo_588 (void)
{
  extern typeof (remquo (vol_var__Bool, vol_var_unsigned_short_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var__Bool, vol_var_unsigned_short_int, vol_var_int_p);
}
static void
test_remquo_589 (void)
{
  extern typeof (remquo (vol_var__Bool, vol_var_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var__Bool, vol_var_int, vol_var_int_p);
}
static void
test_remquo_590 (void)
{
  extern typeof (remquo (vol_var__Bool, vol_var_unsigned_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var__Bool, vol_var_unsigned_int, vol_var_int_p);
}
static void
test_remquo_591 (void)
{
  extern typeof (remquo (vol_var__Bool, vol_var_long_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var__Bool, vol_var_long_int, vol_var_int_p);
}
static void
test_remquo_592 (void)
{
  extern typeof (remquo (vol_var__Bool, vol_var_unsigned_long_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var__Bool, vol_var_unsigned_long_int, vol_var_int_p);
}
static void
test_remquo_593 (void)
{
  extern typeof (remquo (vol_var__Bool, vol_var_long_long_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var__Bool, vol_var_long_long_int, vol_var_int_p);
}
static void
test_remquo_594 (void)
{
  extern typeof (remquo (vol_var__Bool, vol_var_unsigned_long_long_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var__Bool, vol_var_unsigned_long_long_int, vol_var_int_p);
}
#if defined __SIZEOF_INT128__
static void
test_remquo_595 (void)
{
  extern typeof (remquo (vol_var__Bool, vol_var___int128, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var__Bool, vol_var___int128, vol_var_int_p);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_remquo_596 (void)
{
  extern typeof (remquo (vol_var__Bool, vol_var_unsigned___int128, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var__Bool, vol_var_unsigned___int128, vol_var_int_p);
}
#endif
static void
test_remquo_597 (void)
{
  extern typeof (remquo (vol_var__Bool, vol_var_enum_e, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var__Bool, vol_var_enum_e, vol_var_int_p);
}
static void
test_remquo_598 (void)
{
  extern typeof (remquo (vol_var__Bool, vol_var__Bool, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var__Bool, vol_var__Bool, vol_var_int_p);
}
static void
test_remquo_599 (void)
{
  extern typeof (remquo (vol_var__Bool, vol_var_bit_field, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var__Bool, vol_var_bit_field, vol_var_int_p);
}
#if defined HUGE_VAL_F16
static void
test_remquo_600 (void)
{
  extern typeof (remquo (vol_var_bit_field, vol_var__Float16, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_bit_field, vol_var__Float16, vol_var_int_p);
}
#endif
static void
test_remquo_601 (void)
{
  extern typeof (remquo (vol_var_bit_field, vol_var_float, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_bit_field, vol_var_float, vol_var_int_p);
}
#if defined HUGE_VAL_F32
static void
test_remquo_602 (void)
{
  extern typeof (remquo (vol_var_bit_field, vol_var__Float32, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_bit_field, vol_var__Float32, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_remquo_603 (void)
{
  extern typeof (remquo (vol_var_bit_field, vol_var__Float32x, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_bit_field, vol_var__Float32x, vol_var_int_p);
}
#endif
static void
test_remquo_604 (void)
{
  extern typeof (remquo (vol_var_bit_field, vol_var_double, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_bit_field, vol_var_double, vol_var_int_p);
}
static void
test_remquo_605 (void)
{
  extern typeof (remquo (vol_var_bit_field, vol_var_long_double, vol_var_int_p)) var_long_double __attribute__ ((unused));
  vol_var_long_double = remquo (vol_var_bit_field, vol_var_long_double, vol_var_int_p);
}
#if defined HUGE_VAL_F64
static void
test_remquo_606 (void)
{
  extern typeof (remquo (vol_var_bit_field, vol_var__Float64, vol_var_int_p)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = remquo (vol_var_bit_field, vol_var__Float64, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_remquo_607 (void)
{
  extern typeof (remquo (vol_var_bit_field, vol_var__Float64x, vol_var_int_p)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = remquo (vol_var_bit_field, vol_var__Float64x, vol_var_int_p);
}
#endif
#if defined HUGE_VAL_F128
static void
test_remquo_608 (void)
{
  extern typeof (remquo (vol_var_bit_field, vol_var__Float128, vol_var_int_p)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = remquo (vol_var_bit_field, vol_var__Float128, vol_var_int_p);
}
#endif
static void
test_remquo_609 (void)
{
  extern typeof (remquo (vol_var_bit_field, vol_var_char, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_bit_field, vol_var_char, vol_var_int_p);
}
static void
test_remquo_610 (void)
{
  extern typeof (remquo (vol_var_bit_field, vol_var_signed_char, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_bit_field, vol_var_signed_char, vol_var_int_p);
}
static void
test_remquo_611 (void)
{
  extern typeof (remquo (vol_var_bit_field, vol_var_unsigned_char, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_bit_field, vol_var_unsigned_char, vol_var_int_p);
}
static void
test_remquo_612 (void)
{
  extern typeof (remquo (vol_var_bit_field, vol_var_short_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_bit_field, vol_var_short_int, vol_var_int_p);
}
static void
test_remquo_613 (void)
{
  extern typeof (remquo (vol_var_bit_field, vol_var_unsigned_short_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_bit_field, vol_var_unsigned_short_int, vol_var_int_p);
}
static void
test_remquo_614 (void)
{
  extern typeof (remquo (vol_var_bit_field, vol_var_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_bit_field, vol_var_int, vol_var_int_p);
}
static void
test_remquo_615 (void)
{
  extern typeof (remquo (vol_var_bit_field, vol_var_unsigned_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_bit_field, vol_var_unsigned_int, vol_var_int_p);
}
static void
test_remquo_616 (void)
{
  extern typeof (remquo (vol_var_bit_field, vol_var_long_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_bit_field, vol_var_long_int, vol_var_int_p);
}
static void
test_remquo_617 (void)
{
  extern typeof (remquo (vol_var_bit_field, vol_var_unsigned_long_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_bit_field, vol_var_unsigned_long_int, vol_var_int_p);
}
static void
test_remquo_618 (void)
{
  extern typeof (remquo (vol_var_bit_field, vol_var_long_long_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_bit_field, vol_var_long_long_int, vol_var_int_p);
}
static void
test_remquo_619 (void)
{
  extern typeof (remquo (vol_var_bit_field, vol_var_unsigned_long_long_int, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_bit_field, vol_var_unsigned_long_long_int, vol_var_int_p);
}
#if defined __SIZEOF_INT128__
static void
test_remquo_620 (void)
{
  extern typeof (remquo (vol_var_bit_field, vol_var___int128, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_bit_field, vol_var___int128, vol_var_int_p);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_remquo_621 (void)
{
  extern typeof (remquo (vol_var_bit_field, vol_var_unsigned___int128, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_bit_field, vol_var_unsigned___int128, vol_var_int_p);
}
#endif
static void
test_remquo_622 (void)
{
  extern typeof (remquo (vol_var_bit_field, vol_var_enum_e, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_bit_field, vol_var_enum_e, vol_var_int_p);
}
static void
test_remquo_623 (void)
{
  extern typeof (remquo (vol_var_bit_field, vol_var__Bool, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_bit_field, vol_var__Bool, vol_var_int_p);
}
static void
test_remquo_624 (void)
{
  extern typeof (remquo (vol_var_bit_field, vol_var_bit_field, vol_var_int_p)) var_double __attribute__ ((unused));
  vol_var_double = remquo (vol_var_bit_field, vol_var_bit_field, vol_var_int_p);
}
static const struct test tests[] =
  {
#if defined HUGE_VAL_F16
    { test_remquo_0, "remquo", "remquo (_Float16, _Float16)", FLT16_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_remquo_1, "remquo", "remquo (_Float16, float)", FLT_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F32
    { test_remquo_2, "remquo", "remquo (_Float16, _Float32)", FLT32_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
    { test_remquo_3, "remquo", "remquo (_Float16, _Float32x)", FLT32X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_remquo_4, "remquo", "remquo (_Float16, double)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_remquo_5, "remquo", "remquo (_Float16, long double)", LDBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F64
    { test_remquo_6, "remquo", "remquo (_Float16, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
    { test_remquo_7, "remquo", "remquo (_Float16, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F16
    { test_remquo_8, "remquo", "remquo (_Float16, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_remquo_9, "remquo", "remquo (_Float16, char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_remquo_10, "remquo", "remquo (_Float16, signed char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_remquo_11, "remquo", "remquo (_Float16, unsigned char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_remquo_12, "remquo", "remquo (_Float16, short int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_remquo_13, "remquo", "remquo (_Float16, unsigned short int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_remquo_14, "remquo", "remquo (_Float16, int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_remquo_15, "remquo", "remquo (_Float16, unsigned int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_remquo_16, "remquo", "remquo (_Float16, long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_remquo_17, "remquo", "remquo (_Float16, unsigned long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_remquo_18, "remquo", "remquo (_Float16, long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_remquo_19, "remquo", "remquo (_Float16, unsigned long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_remquo_20, "remquo", "remquo (_Float16, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_remquo_21, "remquo", "remquo (_Float16, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_remquo_22, "remquo", "remquo (_Float16, enum e)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_remquo_23, "remquo", "remquo (_Float16, _Bool)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_remquo_24, "remquo", "remquo (_Float16, bit_field)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_remquo_25, "remquo", "remquo (float, _Float16)", FLT_MANT_DIG, 0 },
#endif
    { test_remquo_26, "remquo", "remquo (float, float)", FLT_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_remquo_27, "remquo", "remquo (float, _Float32)", FLT32_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_remquo_28, "remquo", "remquo (float, _Float32x)", FLT32X_MANT_DIG, 0 },
#endif
    { test_remquo_29, "remquo", "remquo (float, double)", DBL_MANT_DIG, 0 },
    { test_remquo_30, "remquo", "remquo (float, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_remquo_31, "remquo", "remquo (float, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_remquo_32, "remquo", "remquo (float, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_remquo_33, "remquo", "remquo (float, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_remquo_34, "remquo", "remquo (float, char)", DBL_MANT_DIG, 0 },
    { test_remquo_35, "remquo", "remquo (float, signed char)", DBL_MANT_DIG, 0 },
    { test_remquo_36, "remquo", "remquo (float, unsigned char)", DBL_MANT_DIG, 0 },
    { test_remquo_37, "remquo", "remquo (float, short int)", DBL_MANT_DIG, 0 },
    { test_remquo_38, "remquo", "remquo (float, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_remquo_39, "remquo", "remquo (float, int)", DBL_MANT_DIG, 0 },
    { test_remquo_40, "remquo", "remquo (float, unsigned int)", DBL_MANT_DIG, 0 },
    { test_remquo_41, "remquo", "remquo (float, long int)", DBL_MANT_DIG, 0 },
    { test_remquo_42, "remquo", "remquo (float, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_remquo_43, "remquo", "remquo (float, long long int)", DBL_MANT_DIG, 0 },
    { test_remquo_44, "remquo", "remquo (float, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_remquo_45, "remquo", "remquo (float, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_remquo_46, "remquo", "remquo (float, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_remquo_47, "remquo", "remquo (float, enum e)", DBL_MANT_DIG, 0 },
    { test_remquo_48, "remquo", "remquo (float, _Bool)", DBL_MANT_DIG, 0 },
    { test_remquo_49, "remquo", "remquo (float, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F32
    { test_remquo_50, "remquo", "remquo (_Float32, _Float16)", FLT32_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_remquo_51, "remquo", "remquo (_Float32, float)", FLT32_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_remquo_52, "remquo", "remquo (_Float32, _Float32)", FLT32_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
    { test_remquo_53, "remquo", "remquo (_Float32, _Float32x)", FLT32X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_remquo_54, "remquo", "remquo (_Float32, double)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_remquo_55, "remquo", "remquo (_Float32, long double)", LDBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F64
    { test_remquo_56, "remquo", "remquo (_Float32, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
    { test_remquo_57, "remquo", "remquo (_Float32, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F32
    { test_remquo_58, "remquo", "remquo (_Float32, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_remquo_59, "remquo", "remquo (_Float32, char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_remquo_60, "remquo", "remquo (_Float32, signed char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_remquo_61, "remquo", "remquo (_Float32, unsigned char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_remquo_62, "remquo", "remquo (_Float32, short int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_remquo_63, "remquo", "remquo (_Float32, unsigned short int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_remquo_64, "remquo", "remquo (_Float32, int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_remquo_65, "remquo", "remquo (_Float32, unsigned int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_remquo_66, "remquo", "remquo (_Float32, long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_remquo_67, "remquo", "remquo (_Float32, unsigned long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_remquo_68, "remquo", "remquo (_Float32, long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_remquo_69, "remquo", "remquo (_Float32, unsigned long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_remquo_70, "remquo", "remquo (_Float32, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_remquo_71, "remquo", "remquo (_Float32, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_remquo_72, "remquo", "remquo (_Float32, enum e)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_remquo_73, "remquo", "remquo (_Float32, _Bool)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_remquo_74, "remquo", "remquo (_Float32, bit_field)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
    { test_remquo_75, "remquo", "remquo (_Float32x, _Float16)", FLT32X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_remquo_76, "remquo", "remquo (_Float32x, float)", FLT32X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
    { test_remquo_77, "remquo", "remquo (_Float32x, _Float32)", FLT32X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_remquo_78, "remquo", "remquo (_Float32x, _Float32x)", FLT32X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_remquo_79, "remquo", "remquo (_Float32x, double)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_remquo_80, "remquo", "remquo (_Float32x, long double)", LDBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X && defined HUGE_VAL_F64
    { test_remquo_81, "remquo", "remquo (_Float32x, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
    { test_remquo_82, "remquo", "remquo (_Float32x, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
    { test_remquo_83, "remquo", "remquo (_Float32x, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_remquo_84, "remquo", "remquo (_Float32x, char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_remquo_85, "remquo", "remquo (_Float32x, signed char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_remquo_86, "remquo", "remquo (_Float32x, unsigned char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_remquo_87, "remquo", "remquo (_Float32x, short int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_remquo_88, "remquo", "remquo (_Float32x, unsigned short int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_remquo_89, "remquo", "remquo (_Float32x, int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_remquo_90, "remquo", "remquo (_Float32x, unsigned int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_remquo_91, "remquo", "remquo (_Float32x, long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_remquo_92, "remquo", "remquo (_Float32x, unsigned long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_remquo_93, "remquo", "remquo (_Float32x, long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_remquo_94, "remquo", "remquo (_Float32x, unsigned long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_remquo_95, "remquo", "remquo (_Float32x, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_remquo_96, "remquo", "remquo (_Float32x, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_remquo_97, "remquo", "remquo (_Float32x, enum e)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_remquo_98, "remquo", "remquo (_Float32x, _Bool)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_remquo_99, "remquo", "remquo (_Float32x, bit_field)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_remquo_100, "remquo", "remquo (double, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_remquo_101, "remquo", "remquo (double, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_remquo_102, "remquo", "remquo (double, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_remquo_103, "remquo", "remquo (double, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_remquo_104, "remquo", "remquo (double, double)", DBL_MANT_DIG, 0 },
    { test_remquo_105, "remquo", "remquo (double, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_remquo_106, "remquo", "remquo (double, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_remquo_107, "remquo", "remquo (double, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_remquo_108, "remquo", "remquo (double, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_remquo_109, "remquo", "remquo (double, char)", DBL_MANT_DIG, 0 },
    { test_remquo_110, "remquo", "remquo (double, signed char)", DBL_MANT_DIG, 0 },
    { test_remquo_111, "remquo", "remquo (double, unsigned char)", DBL_MANT_DIG, 0 },
    { test_remquo_112, "remquo", "remquo (double, short int)", DBL_MANT_DIG, 0 },
    { test_remquo_113, "remquo", "remquo (double, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_remquo_114, "remquo", "remquo (double, int)", DBL_MANT_DIG, 0 },
    { test_remquo_115, "remquo", "remquo (double, unsigned int)", DBL_MANT_DIG, 0 },
    { test_remquo_116, "remquo", "remquo (double, long int)", DBL_MANT_DIG, 0 },
    { test_remquo_117, "remquo", "remquo (double, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_remquo_118, "remquo", "remquo (double, long long int)", DBL_MANT_DIG, 0 },
    { test_remquo_119, "remquo", "remquo (double, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_remquo_120, "remquo", "remquo (double, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_remquo_121, "remquo", "remquo (double, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_remquo_122, "remquo", "remquo (double, enum e)", DBL_MANT_DIG, 0 },
    { test_remquo_123, "remquo", "remquo (double, _Bool)", DBL_MANT_DIG, 0 },
    { test_remquo_124, "remquo", "remquo (double, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_remquo_125, "remquo", "remquo (long double, _Float16)", LDBL_MANT_DIG, 0 },
#endif
    { test_remquo_126, "remquo", "remquo (long double, float)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_remquo_127, "remquo", "remquo (long double, _Float32)", LDBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_remquo_128, "remquo", "remquo (long double, _Float32x)", LDBL_MANT_DIG, 0 },
#endif
    { test_remquo_129, "remquo", "remquo (long double, double)", LDBL_MANT_DIG, 0 },
    { test_remquo_130, "remquo", "remquo (long double, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_remquo_131, "remquo", "remquo (long double, _Float64)", LDBL_MANT_DIG, 0 },
#endif
#if (LDBL_MANT_DIG != 106) && defined HUGE_VAL_F64X
    { test_remquo_132, "remquo", "remquo (long double, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (LDBL_MANT_DIG != 106) && defined HUGE_VAL_F128
    { test_remquo_133, "remquo", "remquo (long double, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_remquo_134, "remquo", "remquo (long double, char)", LDBL_MANT_DIG, 0 },
    { test_remquo_135, "remquo", "remquo (long double, signed char)", LDBL_MANT_DIG, 0 },
    { test_remquo_136, "remquo", "remquo (long double, unsigned char)", LDBL_MANT_DIG, 0 },
    { test_remquo_137, "remquo", "remquo (long double, short int)", LDBL_MANT_DIG, 0 },
    { test_remquo_138, "remquo", "remquo (long double, unsigned short int)", LDBL_MANT_DIG, 0 },
    { test_remquo_139, "remquo", "remquo (long double, int)", LDBL_MANT_DIG, 0 },
    { test_remquo_140, "remquo", "remquo (long double, unsigned int)", LDBL_MANT_DIG, 0 },
    { test_remquo_141, "remquo", "remquo (long double, long int)", LDBL_MANT_DIG, 0 },
    { test_remquo_142, "remquo", "remquo (long double, unsigned long int)", LDBL_MANT_DIG, 0 },
    { test_remquo_143, "remquo", "remquo (long double, long long int)", LDBL_MANT_DIG, 0 },
    { test_remquo_144, "remquo", "remquo (long double, unsigned long long int)", LDBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_remquo_145, "remquo", "remquo (long double, __int128)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_remquo_146, "remquo", "remquo (long double, unsigned __int128)", LDBL_MANT_DIG, 0 },
#endif
    { test_remquo_147, "remquo", "remquo (long double, enum e)", LDBL_MANT_DIG, 0 },
    { test_remquo_148, "remquo", "remquo (long double, _Bool)", LDBL_MANT_DIG, 0 },
    { test_remquo_149, "remquo", "remquo (long double, bit_field)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F64
    { test_remquo_150, "remquo", "remquo (_Float64, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_remquo_151, "remquo", "remquo (_Float64, float)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F64
    { test_remquo_152, "remquo", "remquo (_Float64, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X && defined HUGE_VAL_F64
    { test_remquo_153, "remquo", "remquo (_Float64, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_remquo_154, "remquo", "remquo (_Float64, double)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_remquo_155, "remquo", "remquo (_Float64, long double)", LDBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_remquo_156, "remquo", "remquo (_Float64, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
    { test_remquo_157, "remquo", "remquo (_Float64, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F64
    { test_remquo_158, "remquo", "remquo (_Float64, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_remquo_159, "remquo", "remquo (_Float64, char)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_remquo_160, "remquo", "remquo (_Float64, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_remquo_161, "remquo", "remquo (_Float64, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_remquo_162, "remquo", "remquo (_Float64, short int)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_remquo_163, "remquo", "remquo (_Float64, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_remquo_164, "remquo", "remquo (_Float64, int)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_remquo_165, "remquo", "remquo (_Float64, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_remquo_166, "remquo", "remquo (_Float64, long int)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_remquo_167, "remquo", "remquo (_Float64, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_remquo_168, "remquo", "remquo (_Float64, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_remquo_169, "remquo", "remquo (_Float64, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_remquo_170, "remquo", "remquo (_Float64, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_remquo_171, "remquo", "remquo (_Float64, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_remquo_172, "remquo", "remquo (_Float64, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_remquo_173, "remquo", "remquo (_Float64, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_remquo_174, "remquo", "remquo (_Float64, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
    { test_remquo_175, "remquo", "remquo (_Float64x, _Float16)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_remquo_176, "remquo", "remquo (_Float64x, float)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
    { test_remquo_177, "remquo", "remquo (_Float64x, _Float32)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
    { test_remquo_178, "remquo", "remquo (_Float64x, _Float32x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_remquo_179, "remquo", "remquo (_Float64x, double)", FLT64X_MANT_DIG, 0 },
#endif
#if (LDBL_MANT_DIG != 106) && defined HUGE_VAL_F64X
    { test_remquo_180, "remquo", "remquo (_Float64x, long double)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
    { test_remquo_181, "remquo", "remquo (_Float64x, _Float64)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_remquo_182, "remquo", "remquo (_Float64x, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
    { test_remquo_183, "remquo", "remquo (_Float64x, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_remquo_184, "remquo", "remquo (_Float64x, char)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_remquo_185, "remquo", "remquo (_Float64x, signed char)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_remquo_186, "remquo", "remquo (_Float64x, unsigned char)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_remquo_187, "remquo", "remquo (_Float64x, short int)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_remquo_188, "remquo", "remquo (_Float64x, unsigned short int)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_remquo_189, "remquo", "remquo (_Float64x, int)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_remquo_190, "remquo", "remquo (_Float64x, unsigned int)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_remquo_191, "remquo", "remquo (_Float64x, long int)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_remquo_192, "remquo", "remquo (_Float64x, unsigned long int)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_remquo_193, "remquo", "remquo (_Float64x, long long int)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_remquo_194, "remquo", "remquo (_Float64x, unsigned long long int)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_remquo_195, "remquo", "remquo (_Float64x, __int128)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_remquo_196, "remquo", "remquo (_Float64x, unsigned __int128)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_remquo_197, "remquo", "remquo (_Float64x, enum e)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_remquo_198, "remquo", "remquo (_Float64x, _Bool)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_remquo_199, "remquo", "remquo (_Float64x, bit_field)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F16
    { test_remquo_200, "remquo", "remquo (_Float128, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_remquo_201, "remquo", "remquo (_Float128, float)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F32
    { test_remquo_202, "remquo", "remquo (_Float128, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
    { test_remquo_203, "remquo", "remquo (_Float128, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_remquo_204, "remquo", "remquo (_Float128, double)", FLT128_MANT_DIG, 0 },
#endif
#if (LDBL_MANT_DIG != 106) && defined HUGE_VAL_F128
    { test_remquo_205, "remquo", "remquo (_Float128, long double)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F64
    { test_remquo_206, "remquo", "remquo (_Float128, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
    { test_remquo_207, "remquo", "remquo (_Float128, _Float64x)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_remquo_208, "remquo", "remquo (_Float128, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_remquo_209, "remquo", "remquo (_Float128, char)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_remquo_210, "remquo", "remquo (_Float128, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_remquo_211, "remquo", "remquo (_Float128, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_remquo_212, "remquo", "remquo (_Float128, short int)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_remquo_213, "remquo", "remquo (_Float128, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_remquo_214, "remquo", "remquo (_Float128, int)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_remquo_215, "remquo", "remquo (_Float128, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_remquo_216, "remquo", "remquo (_Float128, long int)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_remquo_217, "remquo", "remquo (_Float128, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_remquo_218, "remquo", "remquo (_Float128, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_remquo_219, "remquo", "remquo (_Float128, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_remquo_220, "remquo", "remquo (_Float128, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_remquo_221, "remquo", "remquo (_Float128, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_remquo_222, "remquo", "remquo (_Float128, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_remquo_223, "remquo", "remquo (_Float128, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_remquo_224, "remquo", "remquo (_Float128, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_remquo_225, "remquo", "remquo (char, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_remquo_226, "remquo", "remquo (char, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_remquo_227, "remquo", "remquo (char, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_remquo_228, "remquo", "remquo (char, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_remquo_229, "remquo", "remquo (char, double)", DBL_MANT_DIG, 0 },
    { test_remquo_230, "remquo", "remquo (char, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_remquo_231, "remquo", "remquo (char, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_remquo_232, "remquo", "remquo (char, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_remquo_233, "remquo", "remquo (char, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_remquo_234, "remquo", "remquo (char, char)", DBL_MANT_DIG, 0 },
    { test_remquo_235, "remquo", "remquo (char, signed char)", DBL_MANT_DIG, 0 },
    { test_remquo_236, "remquo", "remquo (char, unsigned char)", DBL_MANT_DIG, 0 },
    { test_remquo_237, "remquo", "remquo (char, short int)", DBL_MANT_DIG, 0 },
    { test_remquo_238, "remquo", "remquo (char, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_remquo_239, "remquo", "remquo (char, int)", DBL_MANT_DIG, 0 },
    { test_remquo_240, "remquo", "remquo (char, unsigned int)", DBL_MANT_DIG, 0 },
    { test_remquo_241, "remquo", "remquo (char, long int)", DBL_MANT_DIG, 0 },
    { test_remquo_242, "remquo", "remquo (char, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_remquo_243, "remquo", "remquo (char, long long int)", DBL_MANT_DIG, 0 },
    { test_remquo_244, "remquo", "remquo (char, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_remquo_245, "remquo", "remquo (char, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_remquo_246, "remquo", "remquo (char, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_remquo_247, "remquo", "remquo (char, enum e)", DBL_MANT_DIG, 0 },
    { test_remquo_248, "remquo", "remquo (char, _Bool)", DBL_MANT_DIG, 0 },
    { test_remquo_249, "remquo", "remquo (char, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_remquo_250, "remquo", "remquo (signed char, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_remquo_251, "remquo", "remquo (signed char, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_remquo_252, "remquo", "remquo (signed char, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_remquo_253, "remquo", "remquo (signed char, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_remquo_254, "remquo", "remquo (signed char, double)", DBL_MANT_DIG, 0 },
    { test_remquo_255, "remquo", "remquo (signed char, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_remquo_256, "remquo", "remquo (signed char, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_remquo_257, "remquo", "remquo (signed char, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_remquo_258, "remquo", "remquo (signed char, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_remquo_259, "remquo", "remquo (signed char, char)", DBL_MANT_DIG, 0 },
    { test_remquo_260, "remquo", "remquo (signed char, signed char)", DBL_MANT_DIG, 0 },
    { test_remquo_261, "remquo", "remquo (signed char, unsigned char)", DBL_MANT_DIG, 0 },
    { test_remquo_262, "remquo", "remquo (signed char, short int)", DBL_MANT_DIG, 0 },
    { test_remquo_263, "remquo", "remquo (signed char, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_remquo_264, "remquo", "remquo (signed char, int)", DBL_MANT_DIG, 0 },
    { test_remquo_265, "remquo", "remquo (signed char, unsigned int)", DBL_MANT_DIG, 0 },
    { test_remquo_266, "remquo", "remquo (signed char, long int)", DBL_MANT_DIG, 0 },
    { test_remquo_267, "remquo", "remquo (signed char, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_remquo_268, "remquo", "remquo (signed char, long long int)", DBL_MANT_DIG, 0 },
    { test_remquo_269, "remquo", "remquo (signed char, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_remquo_270, "remquo", "remquo (signed char, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_remquo_271, "remquo", "remquo (signed char, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_remquo_272, "remquo", "remquo (signed char, enum e)", DBL_MANT_DIG, 0 },
    { test_remquo_273, "remquo", "remquo (signed char, _Bool)", DBL_MANT_DIG, 0 },
    { test_remquo_274, "remquo", "remquo (signed char, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_remquo_275, "remquo", "remquo (unsigned char, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_remquo_276, "remquo", "remquo (unsigned char, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_remquo_277, "remquo", "remquo (unsigned char, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_remquo_278, "remquo", "remquo (unsigned char, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_remquo_279, "remquo", "remquo (unsigned char, double)", DBL_MANT_DIG, 0 },
    { test_remquo_280, "remquo", "remquo (unsigned char, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_remquo_281, "remquo", "remquo (unsigned char, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_remquo_282, "remquo", "remquo (unsigned char, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_remquo_283, "remquo", "remquo (unsigned char, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_remquo_284, "remquo", "remquo (unsigned char, char)", DBL_MANT_DIG, 0 },
    { test_remquo_285, "remquo", "remquo (unsigned char, signed char)", DBL_MANT_DIG, 0 },
    { test_remquo_286, "remquo", "remquo (unsigned char, unsigned char)", DBL_MANT_DIG, 0 },
    { test_remquo_287, "remquo", "remquo (unsigned char, short int)", DBL_MANT_DIG, 0 },
    { test_remquo_288, "remquo", "remquo (unsigned char, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_remquo_289, "remquo", "remquo (unsigned char, int)", DBL_MANT_DIG, 0 },
    { test_remquo_290, "remquo", "remquo (unsigned char, unsigned int)", DBL_MANT_DIG, 0 },
    { test_remquo_291, "remquo", "remquo (unsigned char, long int)", DBL_MANT_DIG, 0 },
    { test_remquo_292, "remquo", "remquo (unsigned char, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_remquo_293, "remquo", "remquo (unsigned char, long long int)", DBL_MANT_DIG, 0 },
    { test_remquo_294, "remquo", "remquo (unsigned char, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_remquo_295, "remquo", "remquo (unsigned char, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_remquo_296, "remquo", "remquo (unsigned char, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_remquo_297, "remquo", "remquo (unsigned char, enum e)", DBL_MANT_DIG, 0 },
    { test_remquo_298, "remquo", "remquo (unsigned char, _Bool)", DBL_MANT_DIG, 0 },
    { test_remquo_299, "remquo", "remquo (unsigned char, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_remquo_300, "remquo", "remquo (short int, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_remquo_301, "remquo", "remquo (short int, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_remquo_302, "remquo", "remquo (short int, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_remquo_303, "remquo", "remquo (short int, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_remquo_304, "remquo", "remquo (short int, double)", DBL_MANT_DIG, 0 },
    { test_remquo_305, "remquo", "remquo (short int, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_remquo_306, "remquo", "remquo (short int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_remquo_307, "remquo", "remquo (short int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_remquo_308, "remquo", "remquo (short int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_remquo_309, "remquo", "remquo (short int, char)", DBL_MANT_DIG, 0 },
    { test_remquo_310, "remquo", "remquo (short int, signed char)", DBL_MANT_DIG, 0 },
    { test_remquo_311, "remquo", "remquo (short int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_remquo_312, "remquo", "remquo (short int, short int)", DBL_MANT_DIG, 0 },
    { test_remquo_313, "remquo", "remquo (short int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_remquo_314, "remquo", "remquo (short int, int)", DBL_MANT_DIG, 0 },
    { test_remquo_315, "remquo", "remquo (short int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_remquo_316, "remquo", "remquo (short int, long int)", DBL_MANT_DIG, 0 },
    { test_remquo_317, "remquo", "remquo (short int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_remquo_318, "remquo", "remquo (short int, long long int)", DBL_MANT_DIG, 0 },
    { test_remquo_319, "remquo", "remquo (short int, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_remquo_320, "remquo", "remquo (short int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_remquo_321, "remquo", "remquo (short int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_remquo_322, "remquo", "remquo (short int, enum e)", DBL_MANT_DIG, 0 },
    { test_remquo_323, "remquo", "remquo (short int, _Bool)", DBL_MANT_DIG, 0 },
    { test_remquo_324, "remquo", "remquo (short int, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_remquo_325, "remquo", "remquo (unsigned short int, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_remquo_326, "remquo", "remquo (unsigned short int, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_remquo_327, "remquo", "remquo (unsigned short int, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_remquo_328, "remquo", "remquo (unsigned short int, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_remquo_329, "remquo", "remquo (unsigned short int, double)", DBL_MANT_DIG, 0 },
    { test_remquo_330, "remquo", "remquo (unsigned short int, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_remquo_331, "remquo", "remquo (unsigned short int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_remquo_332, "remquo", "remquo (unsigned short int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_remquo_333, "remquo", "remquo (unsigned short int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_remquo_334, "remquo", "remquo (unsigned short int, char)", DBL_MANT_DIG, 0 },
    { test_remquo_335, "remquo", "remquo (unsigned short int, signed char)", DBL_MANT_DIG, 0 },
    { test_remquo_336, "remquo", "remquo (unsigned short int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_remquo_337, "remquo", "remquo (unsigned short int, short int)", DBL_MANT_DIG, 0 },
    { test_remquo_338, "remquo", "remquo (unsigned short int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_remquo_339, "remquo", "remquo (unsigned short int, int)", DBL_MANT_DIG, 0 },
    { test_remquo_340, "remquo", "remquo (unsigned short int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_remquo_341, "remquo", "remquo (unsigned short int, long int)", DBL_MANT_DIG, 0 },
    { test_remquo_342, "remquo", "remquo (unsigned short int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_remquo_343, "remquo", "remquo (unsigned short int, long long int)", DBL_MANT_DIG, 0 },
    { test_remquo_344, "remquo", "remquo (unsigned short int, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_remquo_345, "remquo", "remquo (unsigned short int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_remquo_346, "remquo", "remquo (unsigned short int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_remquo_347, "remquo", "remquo (unsigned short int, enum e)", DBL_MANT_DIG, 0 },
    { test_remquo_348, "remquo", "remquo (unsigned short int, _Bool)", DBL_MANT_DIG, 0 },
    { test_remquo_349, "remquo", "remquo (unsigned short int, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_remquo_350, "remquo", "remquo (int, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_remquo_351, "remquo", "remquo (int, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_remquo_352, "remquo", "remquo (int, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_remquo_353, "remquo", "remquo (int, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_remquo_354, "remquo", "remquo (int, double)", DBL_MANT_DIG, 0 },
    { test_remquo_355, "remquo", "remquo (int, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_remquo_356, "remquo", "remquo (int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_remquo_357, "remquo", "remquo (int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_remquo_358, "remquo", "remquo (int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_remquo_359, "remquo", "remquo (int, char)", DBL_MANT_DIG, 0 },
    { test_remquo_360, "remquo", "remquo (int, signed char)", DBL_MANT_DIG, 0 },
    { test_remquo_361, "remquo", "remquo (int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_remquo_362, "remquo", "remquo (int, short int)", DBL_MANT_DIG, 0 },
    { test_remquo_363, "remquo", "remquo (int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_remquo_364, "remquo", "remquo (int, int)", DBL_MANT_DIG, 0 },
    { test_remquo_365, "remquo", "remquo (int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_remquo_366, "remquo", "remquo (int, long int)", DBL_MANT_DIG, 0 },
    { test_remquo_367, "remquo", "remquo (int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_remquo_368, "remquo", "remquo (int, long long int)", DBL_MANT_DIG, 0 },
    { test_remquo_369, "remquo", "remquo (int, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_remquo_370, "remquo", "remquo (int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_remquo_371, "remquo", "remquo (int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_remquo_372, "remquo", "remquo (int, enum e)", DBL_MANT_DIG, 0 },
    { test_remquo_373, "remquo", "remquo (int, _Bool)", DBL_MANT_DIG, 0 },
    { test_remquo_374, "remquo", "remquo (int, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_remquo_375, "remquo", "remquo (unsigned int, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_remquo_376, "remquo", "remquo (unsigned int, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_remquo_377, "remquo", "remquo (unsigned int, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_remquo_378, "remquo", "remquo (unsigned int, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_remquo_379, "remquo", "remquo (unsigned int, double)", DBL_MANT_DIG, 0 },
    { test_remquo_380, "remquo", "remquo (unsigned int, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_remquo_381, "remquo", "remquo (unsigned int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_remquo_382, "remquo", "remquo (unsigned int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_remquo_383, "remquo", "remquo (unsigned int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_remquo_384, "remquo", "remquo (unsigned int, char)", DBL_MANT_DIG, 0 },
    { test_remquo_385, "remquo", "remquo (unsigned int, signed char)", DBL_MANT_DIG, 0 },
    { test_remquo_386, "remquo", "remquo (unsigned int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_remquo_387, "remquo", "remquo (unsigned int, short int)", DBL_MANT_DIG, 0 },
    { test_remquo_388, "remquo", "remquo (unsigned int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_remquo_389, "remquo", "remquo (unsigned int, int)", DBL_MANT_DIG, 0 },
    { test_remquo_390, "remquo", "remquo (unsigned int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_remquo_391, "remquo", "remquo (unsigned int, long int)", DBL_MANT_DIG, 0 },
    { test_remquo_392, "remquo", "remquo (unsigned int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_remquo_393, "remquo", "remquo (unsigned int, long long int)", DBL_MANT_DIG, 0 },
    { test_remquo_394, "remquo", "remquo (unsigned int, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_remquo_395, "remquo", "remquo (unsigned int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_remquo_396, "remquo", "remquo (unsigned int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_remquo_397, "remquo", "remquo (unsigned int, enum e)", DBL_MANT_DIG, 0 },
    { test_remquo_398, "remquo", "remquo (unsigned int, _Bool)", DBL_MANT_DIG, 0 },
    { test_remquo_399, "remquo", "remquo (unsigned int, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_remquo_400, "remquo", "remquo (long int, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_remquo_401, "remquo", "remquo (long int, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_remquo_402, "remquo", "remquo (long int, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_remquo_403, "remquo", "remquo (long int, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_remquo_404, "remquo", "remquo (long int, double)", DBL_MANT_DIG, 0 },
    { test_remquo_405, "remquo", "remquo (long int, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_remquo_406, "remquo", "remquo (long int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_remquo_407, "remquo", "remquo (long int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_remquo_408, "remquo", "remquo (long int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_remquo_409, "remquo", "remquo (long int, char)", DBL_MANT_DIG, 0 },
    { test_remquo_410, "remquo", "remquo (long int, signed char)", DBL_MANT_DIG, 0 },
    { test_remquo_411, "remquo", "remquo (long int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_remquo_412, "remquo", "remquo (long int, short int)", DBL_MANT_DIG, 0 },
    { test_remquo_413, "remquo", "remquo (long int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_remquo_414, "remquo", "remquo (long int, int)", DBL_MANT_DIG, 0 },
    { test_remquo_415, "remquo", "remquo (long int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_remquo_416, "remquo", "remquo (long int, long int)", DBL_MANT_DIG, 0 },
    { test_remquo_417, "remquo", "remquo (long int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_remquo_418, "remquo", "remquo (long int, long long int)", DBL_MANT_DIG, 0 },
    { test_remquo_419, "remquo", "remquo (long int, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_remquo_420, "remquo", "remquo (long int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_remquo_421, "remquo", "remquo (long int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_remquo_422, "remquo", "remquo (long int, enum e)", DBL_MANT_DIG, 0 },
    { test_remquo_423, "remquo", "remquo (long int, _Bool)", DBL_MANT_DIG, 0 },
    { test_remquo_424, "remquo", "remquo (long int, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_remquo_425, "remquo", "remquo (unsigned long int, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_remquo_426, "remquo", "remquo (unsigned long int, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_remquo_427, "remquo", "remquo (unsigned long int, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_remquo_428, "remquo", "remquo (unsigned long int, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_remquo_429, "remquo", "remquo (unsigned long int, double)", DBL_MANT_DIG, 0 },
    { test_remquo_430, "remquo", "remquo (unsigned long int, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_remquo_431, "remquo", "remquo (unsigned long int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_remquo_432, "remquo", "remquo (unsigned long int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_remquo_433, "remquo", "remquo (unsigned long int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_remquo_434, "remquo", "remquo (unsigned long int, char)", DBL_MANT_DIG, 0 },
    { test_remquo_435, "remquo", "remquo (unsigned long int, signed char)", DBL_MANT_DIG, 0 },
    { test_remquo_436, "remquo", "remquo (unsigned long int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_remquo_437, "remquo", "remquo (unsigned long int, short int)", DBL_MANT_DIG, 0 },
    { test_remquo_438, "remquo", "remquo (unsigned long int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_remquo_439, "remquo", "remquo (unsigned long int, int)", DBL_MANT_DIG, 0 },
    { test_remquo_440, "remquo", "remquo (unsigned long int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_remquo_441, "remquo", "remquo (unsigned long int, long int)", DBL_MANT_DIG, 0 },
    { test_remquo_442, "remquo", "remquo (unsigned long int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_remquo_443, "remquo", "remquo (unsigned long int, long long int)", DBL_MANT_DIG, 0 },
    { test_remquo_444, "remquo", "remquo (unsigned long int, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_remquo_445, "remquo", "remquo (unsigned long int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_remquo_446, "remquo", "remquo (unsigned long int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_remquo_447, "remquo", "remquo (unsigned long int, enum e)", DBL_MANT_DIG, 0 },
    { test_remquo_448, "remquo", "remquo (unsigned long int, _Bool)", DBL_MANT_DIG, 0 },
    { test_remquo_449, "remquo", "remquo (unsigned long int, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_remquo_450, "remquo", "remquo (long long int, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_remquo_451, "remquo", "remquo (long long int, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_remquo_452, "remquo", "remquo (long long int, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_remquo_453, "remquo", "remquo (long long int, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_remquo_454, "remquo", "remquo (long long int, double)", DBL_MANT_DIG, 0 },
    { test_remquo_455, "remquo", "remquo (long long int, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_remquo_456, "remquo", "remquo (long long int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_remquo_457, "remquo", "remquo (long long int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_remquo_458, "remquo", "remquo (long long int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_remquo_459, "remquo", "remquo (long long int, char)", DBL_MANT_DIG, 0 },
    { test_remquo_460, "remquo", "remquo (long long int, signed char)", DBL_MANT_DIG, 0 },
    { test_remquo_461, "remquo", "remquo (long long int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_remquo_462, "remquo", "remquo (long long int, short int)", DBL_MANT_DIG, 0 },
    { test_remquo_463, "remquo", "remquo (long long int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_remquo_464, "remquo", "remquo (long long int, int)", DBL_MANT_DIG, 0 },
    { test_remquo_465, "remquo", "remquo (long long int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_remquo_466, "remquo", "remquo (long long int, long int)", DBL_MANT_DIG, 0 },
    { test_remquo_467, "remquo", "remquo (long long int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_remquo_468, "remquo", "remquo (long long int, long long int)", DBL_MANT_DIG, 0 },
    { test_remquo_469, "remquo", "remquo (long long int, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_remquo_470, "remquo", "remquo (long long int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_remquo_471, "remquo", "remquo (long long int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_remquo_472, "remquo", "remquo (long long int, enum e)", DBL_MANT_DIG, 0 },
    { test_remquo_473, "remquo", "remquo (long long int, _Bool)", DBL_MANT_DIG, 0 },
    { test_remquo_474, "remquo", "remquo (long long int, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_remquo_475, "remquo", "remquo (unsigned long long int, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_remquo_476, "remquo", "remquo (unsigned long long int, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_remquo_477, "remquo", "remquo (unsigned long long int, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_remquo_478, "remquo", "remquo (unsigned long long int, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_remquo_479, "remquo", "remquo (unsigned long long int, double)", DBL_MANT_DIG, 0 },
    { test_remquo_480, "remquo", "remquo (unsigned long long int, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_remquo_481, "remquo", "remquo (unsigned long long int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_remquo_482, "remquo", "remquo (unsigned long long int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_remquo_483, "remquo", "remquo (unsigned long long int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_remquo_484, "remquo", "remquo (unsigned long long int, char)", DBL_MANT_DIG, 0 },
    { test_remquo_485, "remquo", "remquo (unsigned long long int, signed char)", DBL_MANT_DIG, 0 },
    { test_remquo_486, "remquo", "remquo (unsigned long long int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_remquo_487, "remquo", "remquo (unsigned long long int, short int)", DBL_MANT_DIG, 0 },
    { test_remquo_488, "remquo", "remquo (unsigned long long int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_remquo_489, "remquo", "remquo (unsigned long long int, int)", DBL_MANT_DIG, 0 },
    { test_remquo_490, "remquo", "remquo (unsigned long long int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_remquo_491, "remquo", "remquo (unsigned long long int, long int)", DBL_MANT_DIG, 0 },
    { test_remquo_492, "remquo", "remquo (unsigned long long int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_remquo_493, "remquo", "remquo (unsigned long long int, long long int)", DBL_MANT_DIG, 0 },
    { test_remquo_494, "remquo", "remquo (unsigned long long int, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_remquo_495, "remquo", "remquo (unsigned long long int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_remquo_496, "remquo", "remquo (unsigned long long int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_remquo_497, "remquo", "remquo (unsigned long long int, enum e)", DBL_MANT_DIG, 0 },
    { test_remquo_498, "remquo", "remquo (unsigned long long int, _Bool)", DBL_MANT_DIG, 0 },
    { test_remquo_499, "remquo", "remquo (unsigned long long int, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_remquo_500, "remquo", "remquo (__int128, _Float16)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_remquo_501, "remquo", "remquo (__int128, float)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_remquo_502, "remquo", "remquo (__int128, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_remquo_503, "remquo", "remquo (__int128, _Float32x)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_remquo_504, "remquo", "remquo (__int128, double)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_remquo_505, "remquo", "remquo (__int128, long double)", LDBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_remquo_506, "remquo", "remquo (__int128, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_remquo_507, "remquo", "remquo (__int128, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_remquo_508, "remquo", "remquo (__int128, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_remquo_509, "remquo", "remquo (__int128, char)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_remquo_510, "remquo", "remquo (__int128, signed char)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_remquo_511, "remquo", "remquo (__int128, unsigned char)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_remquo_512, "remquo", "remquo (__int128, short int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_remquo_513, "remquo", "remquo (__int128, unsigned short int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_remquo_514, "remquo", "remquo (__int128, int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_remquo_515, "remquo", "remquo (__int128, unsigned int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_remquo_516, "remquo", "remquo (__int128, long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_remquo_517, "remquo", "remquo (__int128, unsigned long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_remquo_518, "remquo", "remquo (__int128, long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_remquo_519, "remquo", "remquo (__int128, unsigned long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_remquo_520, "remquo", "remquo (__int128, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_remquo_521, "remquo", "remquo (__int128, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_remquo_522, "remquo", "remquo (__int128, enum e)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_remquo_523, "remquo", "remquo (__int128, _Bool)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_remquo_524, "remquo", "remquo (__int128, bit_field)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_remquo_525, "remquo", "remquo (unsigned __int128, _Float16)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_remquo_526, "remquo", "remquo (unsigned __int128, float)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_remquo_527, "remquo", "remquo (unsigned __int128, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_remquo_528, "remquo", "remquo (unsigned __int128, _Float32x)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_remquo_529, "remquo", "remquo (unsigned __int128, double)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_remquo_530, "remquo", "remquo (unsigned __int128, long double)", LDBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_remquo_531, "remquo", "remquo (unsigned __int128, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_remquo_532, "remquo", "remquo (unsigned __int128, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_remquo_533, "remquo", "remquo (unsigned __int128, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_remquo_534, "remquo", "remquo (unsigned __int128, char)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_remquo_535, "remquo", "remquo (unsigned __int128, signed char)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_remquo_536, "remquo", "remquo (unsigned __int128, unsigned char)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_remquo_537, "remquo", "remquo (unsigned __int128, short int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_remquo_538, "remquo", "remquo (unsigned __int128, unsigned short int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_remquo_539, "remquo", "remquo (unsigned __int128, int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_remquo_540, "remquo", "remquo (unsigned __int128, unsigned int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_remquo_541, "remquo", "remquo (unsigned __int128, long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_remquo_542, "remquo", "remquo (unsigned __int128, unsigned long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_remquo_543, "remquo", "remquo (unsigned __int128, long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_remquo_544, "remquo", "remquo (unsigned __int128, unsigned long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_remquo_545, "remquo", "remquo (unsigned __int128, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_remquo_546, "remquo", "remquo (unsigned __int128, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_remquo_547, "remquo", "remquo (unsigned __int128, enum e)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_remquo_548, "remquo", "remquo (unsigned __int128, _Bool)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_remquo_549, "remquo", "remquo (unsigned __int128, bit_field)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_remquo_550, "remquo", "remquo (enum e, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_remquo_551, "remquo", "remquo (enum e, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_remquo_552, "remquo", "remquo (enum e, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_remquo_553, "remquo", "remquo (enum e, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_remquo_554, "remquo", "remquo (enum e, double)", DBL_MANT_DIG, 0 },
    { test_remquo_555, "remquo", "remquo (enum e, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_remquo_556, "remquo", "remquo (enum e, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_remquo_557, "remquo", "remquo (enum e, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_remquo_558, "remquo", "remquo (enum e, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_remquo_559, "remquo", "remquo (enum e, char)", DBL_MANT_DIG, 0 },
    { test_remquo_560, "remquo", "remquo (enum e, signed char)", DBL_MANT_DIG, 0 },
    { test_remquo_561, "remquo", "remquo (enum e, unsigned char)", DBL_MANT_DIG, 0 },
    { test_remquo_562, "remquo", "remquo (enum e, short int)", DBL_MANT_DIG, 0 },
    { test_remquo_563, "remquo", "remquo (enum e, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_remquo_564, "remquo", "remquo (enum e, int)", DBL_MANT_DIG, 0 },
    { test_remquo_565, "remquo", "remquo (enum e, unsigned int)", DBL_MANT_DIG, 0 },
    { test_remquo_566, "remquo", "remquo (enum e, long int)", DBL_MANT_DIG, 0 },
    { test_remquo_567, "remquo", "remquo (enum e, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_remquo_568, "remquo", "remquo (enum e, long long int)", DBL_MANT_DIG, 0 },
    { test_remquo_569, "remquo", "remquo (enum e, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_remquo_570, "remquo", "remquo (enum e, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_remquo_571, "remquo", "remquo (enum e, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_remquo_572, "remquo", "remquo (enum e, enum e)", DBL_MANT_DIG, 0 },
    { test_remquo_573, "remquo", "remquo (enum e, _Bool)", DBL_MANT_DIG, 0 },
    { test_remquo_574, "remquo", "remquo (enum e, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_remquo_575, "remquo", "remquo (_Bool, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_remquo_576, "remquo", "remquo (_Bool, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_remquo_577, "remquo", "remquo (_Bool, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_remquo_578, "remquo", "remquo (_Bool, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_remquo_579, "remquo", "remquo (_Bool, double)", DBL_MANT_DIG, 0 },
    { test_remquo_580, "remquo", "remquo (_Bool, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_remquo_581, "remquo", "remquo (_Bool, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_remquo_582, "remquo", "remquo (_Bool, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_remquo_583, "remquo", "remquo (_Bool, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_remquo_584, "remquo", "remquo (_Bool, char)", DBL_MANT_DIG, 0 },
    { test_remquo_585, "remquo", "remquo (_Bool, signed char)", DBL_MANT_DIG, 0 },
    { test_remquo_586, "remquo", "remquo (_Bool, unsigned char)", DBL_MANT_DIG, 0 },
    { test_remquo_587, "remquo", "remquo (_Bool, short int)", DBL_MANT_DIG, 0 },
    { test_remquo_588, "remquo", "remquo (_Bool, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_remquo_589, "remquo", "remquo (_Bool, int)", DBL_MANT_DIG, 0 },
    { test_remquo_590, "remquo", "remquo (_Bool, unsigned int)", DBL_MANT_DIG, 0 },
    { test_remquo_591, "remquo", "remquo (_Bool, long int)", DBL_MANT_DIG, 0 },
    { test_remquo_592, "remquo", "remquo (_Bool, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_remquo_593, "remquo", "remquo (_Bool, long long int)", DBL_MANT_DIG, 0 },
    { test_remquo_594, "remquo", "remquo (_Bool, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_remquo_595, "remquo", "remquo (_Bool, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_remquo_596, "remquo", "remquo (_Bool, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_remquo_597, "remquo", "remquo (_Bool, enum e)", DBL_MANT_DIG, 0 },
    { test_remquo_598, "remquo", "remquo (_Bool, _Bool)", DBL_MANT_DIG, 0 },
    { test_remquo_599, "remquo", "remquo (_Bool, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_remquo_600, "remquo", "remquo (bit_field, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_remquo_601, "remquo", "remquo (bit_field, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_remquo_602, "remquo", "remquo (bit_field, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_remquo_603, "remquo", "remquo (bit_field, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_remquo_604, "remquo", "remquo (bit_field, double)", DBL_MANT_DIG, 0 },
    { test_remquo_605, "remquo", "remquo (bit_field, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_remquo_606, "remquo", "remquo (bit_field, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_remquo_607, "remquo", "remquo (bit_field, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_remquo_608, "remquo", "remquo (bit_field, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_remquo_609, "remquo", "remquo (bit_field, char)", DBL_MANT_DIG, 0 },
    { test_remquo_610, "remquo", "remquo (bit_field, signed char)", DBL_MANT_DIG, 0 },
    { test_remquo_611, "remquo", "remquo (bit_field, unsigned char)", DBL_MANT_DIG, 0 },
    { test_remquo_612, "remquo", "remquo (bit_field, short int)", DBL_MANT_DIG, 0 },
    { test_remquo_613, "remquo", "remquo (bit_field, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_remquo_614, "remquo", "remquo (bit_field, int)", DBL_MANT_DIG, 0 },
    { test_remquo_615, "remquo", "remquo (bit_field, unsigned int)", DBL_MANT_DIG, 0 },
    { test_remquo_616, "remquo", "remquo (bit_field, long int)", DBL_MANT_DIG, 0 },
    { test_remquo_617, "remquo", "remquo (bit_field, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_remquo_618, "remquo", "remquo (bit_field, long long int)", DBL_MANT_DIG, 0 },
    { test_remquo_619, "remquo", "remquo (bit_field, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_remquo_620, "remquo", "remquo (bit_field, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_remquo_621, "remquo", "remquo (bit_field, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_remquo_622, "remquo", "remquo (bit_field, enum e)", DBL_MANT_DIG, 0 },
    { test_remquo_623, "remquo", "remquo (bit_field, _Bool)", DBL_MANT_DIG, 0 },
    { test_remquo_624, "remquo", "remquo (bit_field, bit_field)", DBL_MANT_DIG, 0 },
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
