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
(fmaxmagf16) (_Float16 arg0 __attribute__ ((unused)), _Float16 arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT16_MANT_DIG;
  called_func_name = "fmaxmag";
  return 0;
}
#endif
float
(fmaxmagf) (float arg0 __attribute__ ((unused)), float arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT_MANT_DIG;
  called_func_name = "fmaxmag";
  return 0;
}
#if defined HUGE_VAL_F32
_Float32
(fmaxmagf32) (_Float32 arg0 __attribute__ ((unused)), _Float32 arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT32_MANT_DIG;
  called_func_name = "fmaxmag";
  return 0;
}
#endif
#if defined HUGE_VAL_F32X
_Float32x
(fmaxmagf32x) (_Float32x arg0 __attribute__ ((unused)), _Float32x arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT32X_MANT_DIG;
  called_func_name = "fmaxmag";
  return 0;
}
#endif
double
(fmaxmag) (double arg0 __attribute__ ((unused)), double arg1 __attribute__ ((unused)))
{
  called_mant_dig = DBL_MANT_DIG;
  called_func_name = "fmaxmag";
  return 0;
}
long double
(fmaxmagl) (long double arg0 __attribute__ ((unused)), long double arg1 __attribute__ ((unused)))
{
  called_mant_dig = LDBL_MANT_DIG;
  called_func_name = "fmaxmag";
  return 0;
}
#if defined HUGE_VAL_F64
_Float64
(fmaxmagf64) (_Float64 arg0 __attribute__ ((unused)), _Float64 arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT64_MANT_DIG;
  called_func_name = "fmaxmag";
  return 0;
}
#endif
#if defined HUGE_VAL_F64X
_Float64x
(fmaxmagf64x) (_Float64x arg0 __attribute__ ((unused)), _Float64x arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT64X_MANT_DIG;
  called_func_name = "fmaxmag";
  return 0;
}
#endif
#if defined HUGE_VAL_F128
_Float128
(fmaxmagf128) (_Float128 arg0 __attribute__ ((unused)), _Float128 arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT128_MANT_DIG;
  called_func_name = "fmaxmag";
  return 0;
}
#endif
#if defined HUGE_VAL_F16
static void
test_fmaxmag_0 (void)
{
  extern typeof (fmaxmag (vol_var__Float16, vol_var__Float16)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = fmaxmag (vol_var__Float16, vol_var__Float16);
}
#endif
#if defined HUGE_VAL_F16
static void
test_fmaxmag_1 (void)
{
  extern typeof (fmaxmag (vol_var__Float16, vol_var_float)) var_float __attribute__ ((unused));
  vol_var_float = fmaxmag (vol_var__Float16, vol_var_float);
}
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F32
static void
test_fmaxmag_2 (void)
{
  extern typeof (fmaxmag (vol_var__Float16, vol_var__Float32)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = fmaxmag (vol_var__Float16, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
static void
test_fmaxmag_3 (void)
{
  extern typeof (fmaxmag (vol_var__Float16, vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = fmaxmag (vol_var__Float16, vol_var__Float32x);
}
#endif
#if defined HUGE_VAL_F16
static void
test_fmaxmag_4 (void)
{
  extern typeof (fmaxmag (vol_var__Float16, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var__Float16, vol_var_double);
}
#endif
#if defined HUGE_VAL_F16
static void
test_fmaxmag_5 (void)
{
  extern typeof (fmaxmag (vol_var__Float16, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmaxmag (vol_var__Float16, vol_var_long_double);
}
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F64
static void
test_fmaxmag_6 (void)
{
  extern typeof (fmaxmag (vol_var__Float16, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmaxmag (vol_var__Float16, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
static void
test_fmaxmag_7 (void)
{
  extern typeof (fmaxmag (vol_var__Float16, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmaxmag (vol_var__Float16, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F16
static void
test_fmaxmag_8 (void)
{
  extern typeof (fmaxmag (vol_var__Float16, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmaxmag (vol_var__Float16, vol_var__Float128);
}
#endif
#if defined HUGE_VAL_F16
static void
test_fmaxmag_9 (void)
{
  extern typeof (fmaxmag (vol_var__Float16, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var__Float16, vol_var_char);
}
#endif
#if defined HUGE_VAL_F16
static void
test_fmaxmag_10 (void)
{
  extern typeof (fmaxmag (vol_var__Float16, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var__Float16, vol_var_signed_char);
}
#endif
#if defined HUGE_VAL_F16
static void
test_fmaxmag_11 (void)
{
  extern typeof (fmaxmag (vol_var__Float16, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var__Float16, vol_var_unsigned_char);
}
#endif
#if defined HUGE_VAL_F16
static void
test_fmaxmag_12 (void)
{
  extern typeof (fmaxmag (vol_var__Float16, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var__Float16, vol_var_short_int);
}
#endif
#if defined HUGE_VAL_F16
static void
test_fmaxmag_13 (void)
{
  extern typeof (fmaxmag (vol_var__Float16, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var__Float16, vol_var_unsigned_short_int);
}
#endif
#if defined HUGE_VAL_F16
static void
test_fmaxmag_14 (void)
{
  extern typeof (fmaxmag (vol_var__Float16, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var__Float16, vol_var_int);
}
#endif
#if defined HUGE_VAL_F16
static void
test_fmaxmag_15 (void)
{
  extern typeof (fmaxmag (vol_var__Float16, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var__Float16, vol_var_unsigned_int);
}
#endif
#if defined HUGE_VAL_F16
static void
test_fmaxmag_16 (void)
{
  extern typeof (fmaxmag (vol_var__Float16, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var__Float16, vol_var_long_int);
}
#endif
#if defined HUGE_VAL_F16
static void
test_fmaxmag_17 (void)
{
  extern typeof (fmaxmag (vol_var__Float16, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var__Float16, vol_var_unsigned_long_int);
}
#endif
#if defined HUGE_VAL_F16
static void
test_fmaxmag_18 (void)
{
  extern typeof (fmaxmag (vol_var__Float16, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var__Float16, vol_var_long_long_int);
}
#endif
#if defined HUGE_VAL_F16
static void
test_fmaxmag_19 (void)
{
  extern typeof (fmaxmag (vol_var__Float16, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var__Float16, vol_var_unsigned_long_long_int);
}
#endif
#if defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_fmaxmag_20 (void)
{
  extern typeof (fmaxmag (vol_var__Float16, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var__Float16, vol_var___int128);
}
#endif
#if defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_fmaxmag_21 (void)
{
  extern typeof (fmaxmag (vol_var__Float16, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var__Float16, vol_var_unsigned___int128);
}
#endif
#if defined HUGE_VAL_F16
static void
test_fmaxmag_22 (void)
{
  extern typeof (fmaxmag (vol_var__Float16, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var__Float16, vol_var_enum_e);
}
#endif
#if defined HUGE_VAL_F16
static void
test_fmaxmag_23 (void)
{
  extern typeof (fmaxmag (vol_var__Float16, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var__Float16, vol_var__Bool);
}
#endif
#if defined HUGE_VAL_F16
static void
test_fmaxmag_24 (void)
{
  extern typeof (fmaxmag (vol_var__Float16, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var__Float16, vol_var_bit_field);
}
#endif
#if defined HUGE_VAL_F16
static void
test_fmaxmag_25 (void)
{
  extern typeof (fmaxmag (vol_var_float, vol_var__Float16)) var_float __attribute__ ((unused));
  vol_var_float = fmaxmag (vol_var_float, vol_var__Float16);
}
#endif
static void
test_fmaxmag_26 (void)
{
  extern typeof (fmaxmag (vol_var_float, vol_var_float)) var_float __attribute__ ((unused));
  vol_var_float = fmaxmag (vol_var_float, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_fmaxmag_27 (void)
{
  extern typeof (fmaxmag (vol_var_float, vol_var__Float32)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = fmaxmag (vol_var_float, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmaxmag_28 (void)
{
  extern typeof (fmaxmag (vol_var_float, vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = fmaxmag (vol_var_float, vol_var__Float32x);
}
#endif
static void
test_fmaxmag_29 (void)
{
  extern typeof (fmaxmag (vol_var_float, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_float, vol_var_double);
}
static void
test_fmaxmag_30 (void)
{
  extern typeof (fmaxmag (vol_var_float, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmaxmag (vol_var_float, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_fmaxmag_31 (void)
{
  extern typeof (fmaxmag (vol_var_float, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmaxmag (vol_var_float, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fmaxmag_32 (void)
{
  extern typeof (fmaxmag (vol_var_float, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmaxmag (vol_var_float, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fmaxmag_33 (void)
{
  extern typeof (fmaxmag (vol_var_float, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmaxmag (vol_var_float, vol_var__Float128);
}
#endif
static void
test_fmaxmag_34 (void)
{
  extern typeof (fmaxmag (vol_var_float, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_float, vol_var_char);
}
static void
test_fmaxmag_35 (void)
{
  extern typeof (fmaxmag (vol_var_float, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_float, vol_var_signed_char);
}
static void
test_fmaxmag_36 (void)
{
  extern typeof (fmaxmag (vol_var_float, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_float, vol_var_unsigned_char);
}
static void
test_fmaxmag_37 (void)
{
  extern typeof (fmaxmag (vol_var_float, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_float, vol_var_short_int);
}
static void
test_fmaxmag_38 (void)
{
  extern typeof (fmaxmag (vol_var_float, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_float, vol_var_unsigned_short_int);
}
static void
test_fmaxmag_39 (void)
{
  extern typeof (fmaxmag (vol_var_float, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_float, vol_var_int);
}
static void
test_fmaxmag_40 (void)
{
  extern typeof (fmaxmag (vol_var_float, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_float, vol_var_unsigned_int);
}
static void
test_fmaxmag_41 (void)
{
  extern typeof (fmaxmag (vol_var_float, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_float, vol_var_long_int);
}
static void
test_fmaxmag_42 (void)
{
  extern typeof (fmaxmag (vol_var_float, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_float, vol_var_unsigned_long_int);
}
static void
test_fmaxmag_43 (void)
{
  extern typeof (fmaxmag (vol_var_float, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_float, vol_var_long_long_int);
}
static void
test_fmaxmag_44 (void)
{
  extern typeof (fmaxmag (vol_var_float, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_float, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fmaxmag_45 (void)
{
  extern typeof (fmaxmag (vol_var_float, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_float, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmaxmag_46 (void)
{
  extern typeof (fmaxmag (vol_var_float, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_float, vol_var_unsigned___int128);
}
#endif
static void
test_fmaxmag_47 (void)
{
  extern typeof (fmaxmag (vol_var_float, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_float, vol_var_enum_e);
}
static void
test_fmaxmag_48 (void)
{
  extern typeof (fmaxmag (vol_var_float, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_float, vol_var__Bool);
}
static void
test_fmaxmag_49 (void)
{
  extern typeof (fmaxmag (vol_var_float, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_float, vol_var_bit_field);
}
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F32
static void
test_fmaxmag_50 (void)
{
  extern typeof (fmaxmag (vol_var__Float32, vol_var__Float16)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = fmaxmag (vol_var__Float32, vol_var__Float16);
}
#endif
#if defined HUGE_VAL_F32
static void
test_fmaxmag_51 (void)
{
  extern typeof (fmaxmag (vol_var__Float32, vol_var_float)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = fmaxmag (vol_var__Float32, vol_var_float);
}
#endif
#if defined HUGE_VAL_F32
static void
test_fmaxmag_52 (void)
{
  extern typeof (fmaxmag (vol_var__Float32, vol_var__Float32)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = fmaxmag (vol_var__Float32, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
static void
test_fmaxmag_53 (void)
{
  extern typeof (fmaxmag (vol_var__Float32, vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = fmaxmag (vol_var__Float32, vol_var__Float32x);
}
#endif
#if defined HUGE_VAL_F32
static void
test_fmaxmag_54 (void)
{
  extern typeof (fmaxmag (vol_var__Float32, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var__Float32, vol_var_double);
}
#endif
#if defined HUGE_VAL_F32
static void
test_fmaxmag_55 (void)
{
  extern typeof (fmaxmag (vol_var__Float32, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmaxmag (vol_var__Float32, vol_var_long_double);
}
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F64
static void
test_fmaxmag_56 (void)
{
  extern typeof (fmaxmag (vol_var__Float32, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmaxmag (vol_var__Float32, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
static void
test_fmaxmag_57 (void)
{
  extern typeof (fmaxmag (vol_var__Float32, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmaxmag (vol_var__Float32, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F32
static void
test_fmaxmag_58 (void)
{
  extern typeof (fmaxmag (vol_var__Float32, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmaxmag (vol_var__Float32, vol_var__Float128);
}
#endif
#if defined HUGE_VAL_F32
static void
test_fmaxmag_59 (void)
{
  extern typeof (fmaxmag (vol_var__Float32, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var__Float32, vol_var_char);
}
#endif
#if defined HUGE_VAL_F32
static void
test_fmaxmag_60 (void)
{
  extern typeof (fmaxmag (vol_var__Float32, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var__Float32, vol_var_signed_char);
}
#endif
#if defined HUGE_VAL_F32
static void
test_fmaxmag_61 (void)
{
  extern typeof (fmaxmag (vol_var__Float32, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var__Float32, vol_var_unsigned_char);
}
#endif
#if defined HUGE_VAL_F32
static void
test_fmaxmag_62 (void)
{
  extern typeof (fmaxmag (vol_var__Float32, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var__Float32, vol_var_short_int);
}
#endif
#if defined HUGE_VAL_F32
static void
test_fmaxmag_63 (void)
{
  extern typeof (fmaxmag (vol_var__Float32, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var__Float32, vol_var_unsigned_short_int);
}
#endif
#if defined HUGE_VAL_F32
static void
test_fmaxmag_64 (void)
{
  extern typeof (fmaxmag (vol_var__Float32, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var__Float32, vol_var_int);
}
#endif
#if defined HUGE_VAL_F32
static void
test_fmaxmag_65 (void)
{
  extern typeof (fmaxmag (vol_var__Float32, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var__Float32, vol_var_unsigned_int);
}
#endif
#if defined HUGE_VAL_F32
static void
test_fmaxmag_66 (void)
{
  extern typeof (fmaxmag (vol_var__Float32, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var__Float32, vol_var_long_int);
}
#endif
#if defined HUGE_VAL_F32
static void
test_fmaxmag_67 (void)
{
  extern typeof (fmaxmag (vol_var__Float32, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var__Float32, vol_var_unsigned_long_int);
}
#endif
#if defined HUGE_VAL_F32
static void
test_fmaxmag_68 (void)
{
  extern typeof (fmaxmag (vol_var__Float32, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var__Float32, vol_var_long_long_int);
}
#endif
#if defined HUGE_VAL_F32
static void
test_fmaxmag_69 (void)
{
  extern typeof (fmaxmag (vol_var__Float32, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var__Float32, vol_var_unsigned_long_long_int);
}
#endif
#if defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_fmaxmag_70 (void)
{
  extern typeof (fmaxmag (vol_var__Float32, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var__Float32, vol_var___int128);
}
#endif
#if defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_fmaxmag_71 (void)
{
  extern typeof (fmaxmag (vol_var__Float32, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var__Float32, vol_var_unsigned___int128);
}
#endif
#if defined HUGE_VAL_F32
static void
test_fmaxmag_72 (void)
{
  extern typeof (fmaxmag (vol_var__Float32, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var__Float32, vol_var_enum_e);
}
#endif
#if defined HUGE_VAL_F32
static void
test_fmaxmag_73 (void)
{
  extern typeof (fmaxmag (vol_var__Float32, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var__Float32, vol_var__Bool);
}
#endif
#if defined HUGE_VAL_F32
static void
test_fmaxmag_74 (void)
{
  extern typeof (fmaxmag (vol_var__Float32, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var__Float32, vol_var_bit_field);
}
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
static void
test_fmaxmag_75 (void)
{
  extern typeof (fmaxmag (vol_var__Float32x, vol_var__Float16)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = fmaxmag (vol_var__Float32x, vol_var__Float16);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmaxmag_76 (void)
{
  extern typeof (fmaxmag (vol_var__Float32x, vol_var_float)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = fmaxmag (vol_var__Float32x, vol_var_float);
}
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
static void
test_fmaxmag_77 (void)
{
  extern typeof (fmaxmag (vol_var__Float32x, vol_var__Float32)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = fmaxmag (vol_var__Float32x, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmaxmag_78 (void)
{
  extern typeof (fmaxmag (vol_var__Float32x, vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = fmaxmag (vol_var__Float32x, vol_var__Float32x);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmaxmag_79 (void)
{
  extern typeof (fmaxmag (vol_var__Float32x, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var__Float32x, vol_var_double);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmaxmag_80 (void)
{
  extern typeof (fmaxmag (vol_var__Float32x, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmaxmag (vol_var__Float32x, vol_var_long_double);
}
#endif
#if defined HUGE_VAL_F32X && defined HUGE_VAL_F64
static void
test_fmaxmag_81 (void)
{
  extern typeof (fmaxmag (vol_var__Float32x, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmaxmag (vol_var__Float32x, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
static void
test_fmaxmag_82 (void)
{
  extern typeof (fmaxmag (vol_var__Float32x, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmaxmag (vol_var__Float32x, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
static void
test_fmaxmag_83 (void)
{
  extern typeof (fmaxmag (vol_var__Float32x, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmaxmag (vol_var__Float32x, vol_var__Float128);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmaxmag_84 (void)
{
  extern typeof (fmaxmag (vol_var__Float32x, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var__Float32x, vol_var_char);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmaxmag_85 (void)
{
  extern typeof (fmaxmag (vol_var__Float32x, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var__Float32x, vol_var_signed_char);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmaxmag_86 (void)
{
  extern typeof (fmaxmag (vol_var__Float32x, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var__Float32x, vol_var_unsigned_char);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmaxmag_87 (void)
{
  extern typeof (fmaxmag (vol_var__Float32x, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var__Float32x, vol_var_short_int);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmaxmag_88 (void)
{
  extern typeof (fmaxmag (vol_var__Float32x, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var__Float32x, vol_var_unsigned_short_int);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmaxmag_89 (void)
{
  extern typeof (fmaxmag (vol_var__Float32x, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var__Float32x, vol_var_int);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmaxmag_90 (void)
{
  extern typeof (fmaxmag (vol_var__Float32x, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var__Float32x, vol_var_unsigned_int);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmaxmag_91 (void)
{
  extern typeof (fmaxmag (vol_var__Float32x, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var__Float32x, vol_var_long_int);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmaxmag_92 (void)
{
  extern typeof (fmaxmag (vol_var__Float32x, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var__Float32x, vol_var_unsigned_long_int);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmaxmag_93 (void)
{
  extern typeof (fmaxmag (vol_var__Float32x, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var__Float32x, vol_var_long_long_int);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmaxmag_94 (void)
{
  extern typeof (fmaxmag (vol_var__Float32x, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var__Float32x, vol_var_unsigned_long_long_int);
}
#endif
#if defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_fmaxmag_95 (void)
{
  extern typeof (fmaxmag (vol_var__Float32x, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var__Float32x, vol_var___int128);
}
#endif
#if defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_fmaxmag_96 (void)
{
  extern typeof (fmaxmag (vol_var__Float32x, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var__Float32x, vol_var_unsigned___int128);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmaxmag_97 (void)
{
  extern typeof (fmaxmag (vol_var__Float32x, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var__Float32x, vol_var_enum_e);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmaxmag_98 (void)
{
  extern typeof (fmaxmag (vol_var__Float32x, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var__Float32x, vol_var__Bool);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmaxmag_99 (void)
{
  extern typeof (fmaxmag (vol_var__Float32x, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var__Float32x, vol_var_bit_field);
}
#endif
#if defined HUGE_VAL_F16
static void
test_fmaxmag_100 (void)
{
  extern typeof (fmaxmag (vol_var_double, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_double, vol_var__Float16);
}
#endif
static void
test_fmaxmag_101 (void)
{
  extern typeof (fmaxmag (vol_var_double, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_double, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_fmaxmag_102 (void)
{
  extern typeof (fmaxmag (vol_var_double, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_double, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmaxmag_103 (void)
{
  extern typeof (fmaxmag (vol_var_double, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_double, vol_var__Float32x);
}
#endif
static void
test_fmaxmag_104 (void)
{
  extern typeof (fmaxmag (vol_var_double, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_double, vol_var_double);
}
static void
test_fmaxmag_105 (void)
{
  extern typeof (fmaxmag (vol_var_double, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmaxmag (vol_var_double, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_fmaxmag_106 (void)
{
  extern typeof (fmaxmag (vol_var_double, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmaxmag (vol_var_double, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fmaxmag_107 (void)
{
  extern typeof (fmaxmag (vol_var_double, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmaxmag (vol_var_double, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fmaxmag_108 (void)
{
  extern typeof (fmaxmag (vol_var_double, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmaxmag (vol_var_double, vol_var__Float128);
}
#endif
static void
test_fmaxmag_109 (void)
{
  extern typeof (fmaxmag (vol_var_double, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_double, vol_var_char);
}
static void
test_fmaxmag_110 (void)
{
  extern typeof (fmaxmag (vol_var_double, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_double, vol_var_signed_char);
}
static void
test_fmaxmag_111 (void)
{
  extern typeof (fmaxmag (vol_var_double, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_double, vol_var_unsigned_char);
}
static void
test_fmaxmag_112 (void)
{
  extern typeof (fmaxmag (vol_var_double, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_double, vol_var_short_int);
}
static void
test_fmaxmag_113 (void)
{
  extern typeof (fmaxmag (vol_var_double, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_double, vol_var_unsigned_short_int);
}
static void
test_fmaxmag_114 (void)
{
  extern typeof (fmaxmag (vol_var_double, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_double, vol_var_int);
}
static void
test_fmaxmag_115 (void)
{
  extern typeof (fmaxmag (vol_var_double, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_double, vol_var_unsigned_int);
}
static void
test_fmaxmag_116 (void)
{
  extern typeof (fmaxmag (vol_var_double, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_double, vol_var_long_int);
}
static void
test_fmaxmag_117 (void)
{
  extern typeof (fmaxmag (vol_var_double, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_double, vol_var_unsigned_long_int);
}
static void
test_fmaxmag_118 (void)
{
  extern typeof (fmaxmag (vol_var_double, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_double, vol_var_long_long_int);
}
static void
test_fmaxmag_119 (void)
{
  extern typeof (fmaxmag (vol_var_double, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_double, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fmaxmag_120 (void)
{
  extern typeof (fmaxmag (vol_var_double, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_double, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmaxmag_121 (void)
{
  extern typeof (fmaxmag (vol_var_double, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_double, vol_var_unsigned___int128);
}
#endif
static void
test_fmaxmag_122 (void)
{
  extern typeof (fmaxmag (vol_var_double, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_double, vol_var_enum_e);
}
static void
test_fmaxmag_123 (void)
{
  extern typeof (fmaxmag (vol_var_double, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_double, vol_var__Bool);
}
static void
test_fmaxmag_124 (void)
{
  extern typeof (fmaxmag (vol_var_double, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_double, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_fmaxmag_125 (void)
{
  extern typeof (fmaxmag (vol_var_long_double, vol_var__Float16)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmaxmag (vol_var_long_double, vol_var__Float16);
}
#endif
static void
test_fmaxmag_126 (void)
{
  extern typeof (fmaxmag (vol_var_long_double, vol_var_float)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmaxmag (vol_var_long_double, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_fmaxmag_127 (void)
{
  extern typeof (fmaxmag (vol_var_long_double, vol_var__Float32)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmaxmag (vol_var_long_double, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmaxmag_128 (void)
{
  extern typeof (fmaxmag (vol_var_long_double, vol_var__Float32x)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmaxmag (vol_var_long_double, vol_var__Float32x);
}
#endif
static void
test_fmaxmag_129 (void)
{
  extern typeof (fmaxmag (vol_var_long_double, vol_var_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmaxmag (vol_var_long_double, vol_var_double);
}
static void
test_fmaxmag_130 (void)
{
  extern typeof (fmaxmag (vol_var_long_double, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmaxmag (vol_var_long_double, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_fmaxmag_131 (void)
{
  extern typeof (fmaxmag (vol_var_long_double, vol_var__Float64)) var_long_double_Float64 __attribute__ ((unused));
  vol_var_long_double_Float64 = fmaxmag (vol_var_long_double, vol_var__Float64);
}
#endif
#if (LDBL_MANT_DIG != 106) && defined HUGE_VAL_F64X
static void
test_fmaxmag_132 (void)
{
  extern typeof (fmaxmag (vol_var_long_double, vol_var__Float64x)) var_long_double_Float64x __attribute__ ((unused));
  vol_var_long_double_Float64x = fmaxmag (vol_var_long_double, vol_var__Float64x);
}
#endif
#if (LDBL_MANT_DIG != 106) && defined HUGE_VAL_F128
static void
test_fmaxmag_133 (void)
{
  extern typeof (fmaxmag (vol_var_long_double, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmaxmag (vol_var_long_double, vol_var__Float128);
}
#endif
static void
test_fmaxmag_134 (void)
{
  extern typeof (fmaxmag (vol_var_long_double, vol_var_char)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmaxmag (vol_var_long_double, vol_var_char);
}
static void
test_fmaxmag_135 (void)
{
  extern typeof (fmaxmag (vol_var_long_double, vol_var_signed_char)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmaxmag (vol_var_long_double, vol_var_signed_char);
}
static void
test_fmaxmag_136 (void)
{
  extern typeof (fmaxmag (vol_var_long_double, vol_var_unsigned_char)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmaxmag (vol_var_long_double, vol_var_unsigned_char);
}
static void
test_fmaxmag_137 (void)
{
  extern typeof (fmaxmag (vol_var_long_double, vol_var_short_int)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmaxmag (vol_var_long_double, vol_var_short_int);
}
static void
test_fmaxmag_138 (void)
{
  extern typeof (fmaxmag (vol_var_long_double, vol_var_unsigned_short_int)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmaxmag (vol_var_long_double, vol_var_unsigned_short_int);
}
static void
test_fmaxmag_139 (void)
{
  extern typeof (fmaxmag (vol_var_long_double, vol_var_int)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmaxmag (vol_var_long_double, vol_var_int);
}
static void
test_fmaxmag_140 (void)
{
  extern typeof (fmaxmag (vol_var_long_double, vol_var_unsigned_int)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmaxmag (vol_var_long_double, vol_var_unsigned_int);
}
static void
test_fmaxmag_141 (void)
{
  extern typeof (fmaxmag (vol_var_long_double, vol_var_long_int)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmaxmag (vol_var_long_double, vol_var_long_int);
}
static void
test_fmaxmag_142 (void)
{
  extern typeof (fmaxmag (vol_var_long_double, vol_var_unsigned_long_int)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmaxmag (vol_var_long_double, vol_var_unsigned_long_int);
}
static void
test_fmaxmag_143 (void)
{
  extern typeof (fmaxmag (vol_var_long_double, vol_var_long_long_int)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmaxmag (vol_var_long_double, vol_var_long_long_int);
}
static void
test_fmaxmag_144 (void)
{
  extern typeof (fmaxmag (vol_var_long_double, vol_var_unsigned_long_long_int)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmaxmag (vol_var_long_double, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fmaxmag_145 (void)
{
  extern typeof (fmaxmag (vol_var_long_double, vol_var___int128)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmaxmag (vol_var_long_double, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmaxmag_146 (void)
{
  extern typeof (fmaxmag (vol_var_long_double, vol_var_unsigned___int128)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmaxmag (vol_var_long_double, vol_var_unsigned___int128);
}
#endif
static void
test_fmaxmag_147 (void)
{
  extern typeof (fmaxmag (vol_var_long_double, vol_var_enum_e)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmaxmag (vol_var_long_double, vol_var_enum_e);
}
static void
test_fmaxmag_148 (void)
{
  extern typeof (fmaxmag (vol_var_long_double, vol_var__Bool)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmaxmag (vol_var_long_double, vol_var__Bool);
}
static void
test_fmaxmag_149 (void)
{
  extern typeof (fmaxmag (vol_var_long_double, vol_var_bit_field)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmaxmag (vol_var_long_double, vol_var_bit_field);
}
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F64
static void
test_fmaxmag_150 (void)
{
  extern typeof (fmaxmag (vol_var__Float64, vol_var__Float16)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmaxmag (vol_var__Float64, vol_var__Float16);
}
#endif
#if defined HUGE_VAL_F64
static void
test_fmaxmag_151 (void)
{
  extern typeof (fmaxmag (vol_var__Float64, vol_var_float)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmaxmag (vol_var__Float64, vol_var_float);
}
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F64
static void
test_fmaxmag_152 (void)
{
  extern typeof (fmaxmag (vol_var__Float64, vol_var__Float32)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmaxmag (vol_var__Float64, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X && defined HUGE_VAL_F64
static void
test_fmaxmag_153 (void)
{
  extern typeof (fmaxmag (vol_var__Float64, vol_var__Float32x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmaxmag (vol_var__Float64, vol_var__Float32x);
}
#endif
#if defined HUGE_VAL_F64
static void
test_fmaxmag_154 (void)
{
  extern typeof (fmaxmag (vol_var__Float64, vol_var_double)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmaxmag (vol_var__Float64, vol_var_double);
}
#endif
#if defined HUGE_VAL_F64
static void
test_fmaxmag_155 (void)
{
  extern typeof (fmaxmag (vol_var__Float64, vol_var_long_double)) var_long_double_Float64 __attribute__ ((unused));
  vol_var_long_double_Float64 = fmaxmag (vol_var__Float64, vol_var_long_double);
}
#endif
#if defined HUGE_VAL_F64
static void
test_fmaxmag_156 (void)
{
  extern typeof (fmaxmag (vol_var__Float64, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmaxmag (vol_var__Float64, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
static void
test_fmaxmag_157 (void)
{
  extern typeof (fmaxmag (vol_var__Float64, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmaxmag (vol_var__Float64, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F64
static void
test_fmaxmag_158 (void)
{
  extern typeof (fmaxmag (vol_var__Float64, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmaxmag (vol_var__Float64, vol_var__Float128);
}
#endif
#if defined HUGE_VAL_F64
static void
test_fmaxmag_159 (void)
{
  extern typeof (fmaxmag (vol_var__Float64, vol_var_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmaxmag (vol_var__Float64, vol_var_char);
}
#endif
#if defined HUGE_VAL_F64
static void
test_fmaxmag_160 (void)
{
  extern typeof (fmaxmag (vol_var__Float64, vol_var_signed_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmaxmag (vol_var__Float64, vol_var_signed_char);
}
#endif
#if defined HUGE_VAL_F64
static void
test_fmaxmag_161 (void)
{
  extern typeof (fmaxmag (vol_var__Float64, vol_var_unsigned_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmaxmag (vol_var__Float64, vol_var_unsigned_char);
}
#endif
#if defined HUGE_VAL_F64
static void
test_fmaxmag_162 (void)
{
  extern typeof (fmaxmag (vol_var__Float64, vol_var_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmaxmag (vol_var__Float64, vol_var_short_int);
}
#endif
#if defined HUGE_VAL_F64
static void
test_fmaxmag_163 (void)
{
  extern typeof (fmaxmag (vol_var__Float64, vol_var_unsigned_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmaxmag (vol_var__Float64, vol_var_unsigned_short_int);
}
#endif
#if defined HUGE_VAL_F64
static void
test_fmaxmag_164 (void)
{
  extern typeof (fmaxmag (vol_var__Float64, vol_var_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmaxmag (vol_var__Float64, vol_var_int);
}
#endif
#if defined HUGE_VAL_F64
static void
test_fmaxmag_165 (void)
{
  extern typeof (fmaxmag (vol_var__Float64, vol_var_unsigned_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmaxmag (vol_var__Float64, vol_var_unsigned_int);
}
#endif
#if defined HUGE_VAL_F64
static void
test_fmaxmag_166 (void)
{
  extern typeof (fmaxmag (vol_var__Float64, vol_var_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmaxmag (vol_var__Float64, vol_var_long_int);
}
#endif
#if defined HUGE_VAL_F64
static void
test_fmaxmag_167 (void)
{
  extern typeof (fmaxmag (vol_var__Float64, vol_var_unsigned_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmaxmag (vol_var__Float64, vol_var_unsigned_long_int);
}
#endif
#if defined HUGE_VAL_F64
static void
test_fmaxmag_168 (void)
{
  extern typeof (fmaxmag (vol_var__Float64, vol_var_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmaxmag (vol_var__Float64, vol_var_long_long_int);
}
#endif
#if defined HUGE_VAL_F64
static void
test_fmaxmag_169 (void)
{
  extern typeof (fmaxmag (vol_var__Float64, vol_var_unsigned_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmaxmag (vol_var__Float64, vol_var_unsigned_long_long_int);
}
#endif
#if defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_fmaxmag_170 (void)
{
  extern typeof (fmaxmag (vol_var__Float64, vol_var___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmaxmag (vol_var__Float64, vol_var___int128);
}
#endif
#if defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_fmaxmag_171 (void)
{
  extern typeof (fmaxmag (vol_var__Float64, vol_var_unsigned___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmaxmag (vol_var__Float64, vol_var_unsigned___int128);
}
#endif
#if defined HUGE_VAL_F64
static void
test_fmaxmag_172 (void)
{
  extern typeof (fmaxmag (vol_var__Float64, vol_var_enum_e)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmaxmag (vol_var__Float64, vol_var_enum_e);
}
#endif
#if defined HUGE_VAL_F64
static void
test_fmaxmag_173 (void)
{
  extern typeof (fmaxmag (vol_var__Float64, vol_var__Bool)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmaxmag (vol_var__Float64, vol_var__Bool);
}
#endif
#if defined HUGE_VAL_F64
static void
test_fmaxmag_174 (void)
{
  extern typeof (fmaxmag (vol_var__Float64, vol_var_bit_field)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmaxmag (vol_var__Float64, vol_var_bit_field);
}
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
static void
test_fmaxmag_175 (void)
{
  extern typeof (fmaxmag (vol_var__Float64x, vol_var__Float16)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmaxmag (vol_var__Float64x, vol_var__Float16);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fmaxmag_176 (void)
{
  extern typeof (fmaxmag (vol_var__Float64x, vol_var_float)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmaxmag (vol_var__Float64x, vol_var_float);
}
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
static void
test_fmaxmag_177 (void)
{
  extern typeof (fmaxmag (vol_var__Float64x, vol_var__Float32)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmaxmag (vol_var__Float64x, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
static void
test_fmaxmag_178 (void)
{
  extern typeof (fmaxmag (vol_var__Float64x, vol_var__Float32x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmaxmag (vol_var__Float64x, vol_var__Float32x);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fmaxmag_179 (void)
{
  extern typeof (fmaxmag (vol_var__Float64x, vol_var_double)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmaxmag (vol_var__Float64x, vol_var_double);
}
#endif
#if (LDBL_MANT_DIG != 106) && defined HUGE_VAL_F64X
static void
test_fmaxmag_180 (void)
{
  extern typeof (fmaxmag (vol_var__Float64x, vol_var_long_double)) var_long_double_Float64x __attribute__ ((unused));
  vol_var_long_double_Float64x = fmaxmag (vol_var__Float64x, vol_var_long_double);
}
#endif
#if defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
static void
test_fmaxmag_181 (void)
{
  extern typeof (fmaxmag (vol_var__Float64x, vol_var__Float64)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmaxmag (vol_var__Float64x, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fmaxmag_182 (void)
{
  extern typeof (fmaxmag (vol_var__Float64x, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmaxmag (vol_var__Float64x, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
static void
test_fmaxmag_183 (void)
{
  extern typeof (fmaxmag (vol_var__Float64x, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmaxmag (vol_var__Float64x, vol_var__Float128);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fmaxmag_184 (void)
{
  extern typeof (fmaxmag (vol_var__Float64x, vol_var_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmaxmag (vol_var__Float64x, vol_var_char);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fmaxmag_185 (void)
{
  extern typeof (fmaxmag (vol_var__Float64x, vol_var_signed_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmaxmag (vol_var__Float64x, vol_var_signed_char);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fmaxmag_186 (void)
{
  extern typeof (fmaxmag (vol_var__Float64x, vol_var_unsigned_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmaxmag (vol_var__Float64x, vol_var_unsigned_char);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fmaxmag_187 (void)
{
  extern typeof (fmaxmag (vol_var__Float64x, vol_var_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmaxmag (vol_var__Float64x, vol_var_short_int);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fmaxmag_188 (void)
{
  extern typeof (fmaxmag (vol_var__Float64x, vol_var_unsigned_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmaxmag (vol_var__Float64x, vol_var_unsigned_short_int);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fmaxmag_189 (void)
{
  extern typeof (fmaxmag (vol_var__Float64x, vol_var_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmaxmag (vol_var__Float64x, vol_var_int);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fmaxmag_190 (void)
{
  extern typeof (fmaxmag (vol_var__Float64x, vol_var_unsigned_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmaxmag (vol_var__Float64x, vol_var_unsigned_int);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fmaxmag_191 (void)
{
  extern typeof (fmaxmag (vol_var__Float64x, vol_var_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmaxmag (vol_var__Float64x, vol_var_long_int);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fmaxmag_192 (void)
{
  extern typeof (fmaxmag (vol_var__Float64x, vol_var_unsigned_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmaxmag (vol_var__Float64x, vol_var_unsigned_long_int);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fmaxmag_193 (void)
{
  extern typeof (fmaxmag (vol_var__Float64x, vol_var_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmaxmag (vol_var__Float64x, vol_var_long_long_int);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fmaxmag_194 (void)
{
  extern typeof (fmaxmag (vol_var__Float64x, vol_var_unsigned_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmaxmag (vol_var__Float64x, vol_var_unsigned_long_long_int);
}
#endif
#if defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_fmaxmag_195 (void)
{
  extern typeof (fmaxmag (vol_var__Float64x, vol_var___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmaxmag (vol_var__Float64x, vol_var___int128);
}
#endif
#if defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_fmaxmag_196 (void)
{
  extern typeof (fmaxmag (vol_var__Float64x, vol_var_unsigned___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmaxmag (vol_var__Float64x, vol_var_unsigned___int128);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fmaxmag_197 (void)
{
  extern typeof (fmaxmag (vol_var__Float64x, vol_var_enum_e)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmaxmag (vol_var__Float64x, vol_var_enum_e);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fmaxmag_198 (void)
{
  extern typeof (fmaxmag (vol_var__Float64x, vol_var__Bool)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmaxmag (vol_var__Float64x, vol_var__Bool);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fmaxmag_199 (void)
{
  extern typeof (fmaxmag (vol_var__Float64x, vol_var_bit_field)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmaxmag (vol_var__Float64x, vol_var_bit_field);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F16
static void
test_fmaxmag_200 (void)
{
  extern typeof (fmaxmag (vol_var__Float128, vol_var__Float16)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmaxmag (vol_var__Float128, vol_var__Float16);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fmaxmag_201 (void)
{
  extern typeof (fmaxmag (vol_var__Float128, vol_var_float)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmaxmag (vol_var__Float128, vol_var_float);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F32
static void
test_fmaxmag_202 (void)
{
  extern typeof (fmaxmag (vol_var__Float128, vol_var__Float32)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmaxmag (vol_var__Float128, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
static void
test_fmaxmag_203 (void)
{
  extern typeof (fmaxmag (vol_var__Float128, vol_var__Float32x)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmaxmag (vol_var__Float128, vol_var__Float32x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fmaxmag_204 (void)
{
  extern typeof (fmaxmag (vol_var__Float128, vol_var_double)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmaxmag (vol_var__Float128, vol_var_double);
}
#endif
#if (LDBL_MANT_DIG != 106) && defined HUGE_VAL_F128
static void
test_fmaxmag_205 (void)
{
  extern typeof (fmaxmag (vol_var__Float128, vol_var_long_double)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmaxmag (vol_var__Float128, vol_var_long_double);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F64
static void
test_fmaxmag_206 (void)
{
  extern typeof (fmaxmag (vol_var__Float128, vol_var__Float64)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmaxmag (vol_var__Float128, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
static void
test_fmaxmag_207 (void)
{
  extern typeof (fmaxmag (vol_var__Float128, vol_var__Float64x)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmaxmag (vol_var__Float128, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fmaxmag_208 (void)
{
  extern typeof (fmaxmag (vol_var__Float128, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmaxmag (vol_var__Float128, vol_var__Float128);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fmaxmag_209 (void)
{
  extern typeof (fmaxmag (vol_var__Float128, vol_var_char)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmaxmag (vol_var__Float128, vol_var_char);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fmaxmag_210 (void)
{
  extern typeof (fmaxmag (vol_var__Float128, vol_var_signed_char)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmaxmag (vol_var__Float128, vol_var_signed_char);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fmaxmag_211 (void)
{
  extern typeof (fmaxmag (vol_var__Float128, vol_var_unsigned_char)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmaxmag (vol_var__Float128, vol_var_unsigned_char);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fmaxmag_212 (void)
{
  extern typeof (fmaxmag (vol_var__Float128, vol_var_short_int)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmaxmag (vol_var__Float128, vol_var_short_int);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fmaxmag_213 (void)
{
  extern typeof (fmaxmag (vol_var__Float128, vol_var_unsigned_short_int)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmaxmag (vol_var__Float128, vol_var_unsigned_short_int);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fmaxmag_214 (void)
{
  extern typeof (fmaxmag (vol_var__Float128, vol_var_int)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmaxmag (vol_var__Float128, vol_var_int);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fmaxmag_215 (void)
{
  extern typeof (fmaxmag (vol_var__Float128, vol_var_unsigned_int)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmaxmag (vol_var__Float128, vol_var_unsigned_int);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fmaxmag_216 (void)
{
  extern typeof (fmaxmag (vol_var__Float128, vol_var_long_int)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmaxmag (vol_var__Float128, vol_var_long_int);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fmaxmag_217 (void)
{
  extern typeof (fmaxmag (vol_var__Float128, vol_var_unsigned_long_int)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmaxmag (vol_var__Float128, vol_var_unsigned_long_int);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fmaxmag_218 (void)
{
  extern typeof (fmaxmag (vol_var__Float128, vol_var_long_long_int)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmaxmag (vol_var__Float128, vol_var_long_long_int);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fmaxmag_219 (void)
{
  extern typeof (fmaxmag (vol_var__Float128, vol_var_unsigned_long_long_int)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmaxmag (vol_var__Float128, vol_var_unsigned_long_long_int);
}
#endif
#if defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_fmaxmag_220 (void)
{
  extern typeof (fmaxmag (vol_var__Float128, vol_var___int128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmaxmag (vol_var__Float128, vol_var___int128);
}
#endif
#if defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_fmaxmag_221 (void)
{
  extern typeof (fmaxmag (vol_var__Float128, vol_var_unsigned___int128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmaxmag (vol_var__Float128, vol_var_unsigned___int128);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fmaxmag_222 (void)
{
  extern typeof (fmaxmag (vol_var__Float128, vol_var_enum_e)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmaxmag (vol_var__Float128, vol_var_enum_e);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fmaxmag_223 (void)
{
  extern typeof (fmaxmag (vol_var__Float128, vol_var__Bool)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmaxmag (vol_var__Float128, vol_var__Bool);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fmaxmag_224 (void)
{
  extern typeof (fmaxmag (vol_var__Float128, vol_var_bit_field)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmaxmag (vol_var__Float128, vol_var_bit_field);
}
#endif
#if defined HUGE_VAL_F16
static void
test_fmaxmag_225 (void)
{
  extern typeof (fmaxmag (vol_var_char, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_char, vol_var__Float16);
}
#endif
static void
test_fmaxmag_226 (void)
{
  extern typeof (fmaxmag (vol_var_char, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_char, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_fmaxmag_227 (void)
{
  extern typeof (fmaxmag (vol_var_char, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_char, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmaxmag_228 (void)
{
  extern typeof (fmaxmag (vol_var_char, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_char, vol_var__Float32x);
}
#endif
static void
test_fmaxmag_229 (void)
{
  extern typeof (fmaxmag (vol_var_char, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_char, vol_var_double);
}
static void
test_fmaxmag_230 (void)
{
  extern typeof (fmaxmag (vol_var_char, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmaxmag (vol_var_char, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_fmaxmag_231 (void)
{
  extern typeof (fmaxmag (vol_var_char, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmaxmag (vol_var_char, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fmaxmag_232 (void)
{
  extern typeof (fmaxmag (vol_var_char, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmaxmag (vol_var_char, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fmaxmag_233 (void)
{
  extern typeof (fmaxmag (vol_var_char, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmaxmag (vol_var_char, vol_var__Float128);
}
#endif
static void
test_fmaxmag_234 (void)
{
  extern typeof (fmaxmag (vol_var_char, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_char, vol_var_char);
}
static void
test_fmaxmag_235 (void)
{
  extern typeof (fmaxmag (vol_var_char, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_char, vol_var_signed_char);
}
static void
test_fmaxmag_236 (void)
{
  extern typeof (fmaxmag (vol_var_char, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_char, vol_var_unsigned_char);
}
static void
test_fmaxmag_237 (void)
{
  extern typeof (fmaxmag (vol_var_char, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_char, vol_var_short_int);
}
static void
test_fmaxmag_238 (void)
{
  extern typeof (fmaxmag (vol_var_char, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_char, vol_var_unsigned_short_int);
}
static void
test_fmaxmag_239 (void)
{
  extern typeof (fmaxmag (vol_var_char, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_char, vol_var_int);
}
static void
test_fmaxmag_240 (void)
{
  extern typeof (fmaxmag (vol_var_char, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_char, vol_var_unsigned_int);
}
static void
test_fmaxmag_241 (void)
{
  extern typeof (fmaxmag (vol_var_char, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_char, vol_var_long_int);
}
static void
test_fmaxmag_242 (void)
{
  extern typeof (fmaxmag (vol_var_char, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_char, vol_var_unsigned_long_int);
}
static void
test_fmaxmag_243 (void)
{
  extern typeof (fmaxmag (vol_var_char, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_char, vol_var_long_long_int);
}
static void
test_fmaxmag_244 (void)
{
  extern typeof (fmaxmag (vol_var_char, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_char, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fmaxmag_245 (void)
{
  extern typeof (fmaxmag (vol_var_char, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_char, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmaxmag_246 (void)
{
  extern typeof (fmaxmag (vol_var_char, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_char, vol_var_unsigned___int128);
}
#endif
static void
test_fmaxmag_247 (void)
{
  extern typeof (fmaxmag (vol_var_char, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_char, vol_var_enum_e);
}
static void
test_fmaxmag_248 (void)
{
  extern typeof (fmaxmag (vol_var_char, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_char, vol_var__Bool);
}
static void
test_fmaxmag_249 (void)
{
  extern typeof (fmaxmag (vol_var_char, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_char, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_fmaxmag_250 (void)
{
  extern typeof (fmaxmag (vol_var_signed_char, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_signed_char, vol_var__Float16);
}
#endif
static void
test_fmaxmag_251 (void)
{
  extern typeof (fmaxmag (vol_var_signed_char, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_signed_char, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_fmaxmag_252 (void)
{
  extern typeof (fmaxmag (vol_var_signed_char, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_signed_char, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmaxmag_253 (void)
{
  extern typeof (fmaxmag (vol_var_signed_char, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_signed_char, vol_var__Float32x);
}
#endif
static void
test_fmaxmag_254 (void)
{
  extern typeof (fmaxmag (vol_var_signed_char, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_signed_char, vol_var_double);
}
static void
test_fmaxmag_255 (void)
{
  extern typeof (fmaxmag (vol_var_signed_char, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmaxmag (vol_var_signed_char, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_fmaxmag_256 (void)
{
  extern typeof (fmaxmag (vol_var_signed_char, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmaxmag (vol_var_signed_char, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fmaxmag_257 (void)
{
  extern typeof (fmaxmag (vol_var_signed_char, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmaxmag (vol_var_signed_char, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fmaxmag_258 (void)
{
  extern typeof (fmaxmag (vol_var_signed_char, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmaxmag (vol_var_signed_char, vol_var__Float128);
}
#endif
static void
test_fmaxmag_259 (void)
{
  extern typeof (fmaxmag (vol_var_signed_char, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_signed_char, vol_var_char);
}
static void
test_fmaxmag_260 (void)
{
  extern typeof (fmaxmag (vol_var_signed_char, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_signed_char, vol_var_signed_char);
}
static void
test_fmaxmag_261 (void)
{
  extern typeof (fmaxmag (vol_var_signed_char, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_signed_char, vol_var_unsigned_char);
}
static void
test_fmaxmag_262 (void)
{
  extern typeof (fmaxmag (vol_var_signed_char, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_signed_char, vol_var_short_int);
}
static void
test_fmaxmag_263 (void)
{
  extern typeof (fmaxmag (vol_var_signed_char, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_signed_char, vol_var_unsigned_short_int);
}
static void
test_fmaxmag_264 (void)
{
  extern typeof (fmaxmag (vol_var_signed_char, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_signed_char, vol_var_int);
}
static void
test_fmaxmag_265 (void)
{
  extern typeof (fmaxmag (vol_var_signed_char, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_signed_char, vol_var_unsigned_int);
}
static void
test_fmaxmag_266 (void)
{
  extern typeof (fmaxmag (vol_var_signed_char, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_signed_char, vol_var_long_int);
}
static void
test_fmaxmag_267 (void)
{
  extern typeof (fmaxmag (vol_var_signed_char, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_signed_char, vol_var_unsigned_long_int);
}
static void
test_fmaxmag_268 (void)
{
  extern typeof (fmaxmag (vol_var_signed_char, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_signed_char, vol_var_long_long_int);
}
static void
test_fmaxmag_269 (void)
{
  extern typeof (fmaxmag (vol_var_signed_char, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_signed_char, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fmaxmag_270 (void)
{
  extern typeof (fmaxmag (vol_var_signed_char, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_signed_char, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmaxmag_271 (void)
{
  extern typeof (fmaxmag (vol_var_signed_char, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_signed_char, vol_var_unsigned___int128);
}
#endif
static void
test_fmaxmag_272 (void)
{
  extern typeof (fmaxmag (vol_var_signed_char, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_signed_char, vol_var_enum_e);
}
static void
test_fmaxmag_273 (void)
{
  extern typeof (fmaxmag (vol_var_signed_char, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_signed_char, vol_var__Bool);
}
static void
test_fmaxmag_274 (void)
{
  extern typeof (fmaxmag (vol_var_signed_char, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_signed_char, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_fmaxmag_275 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned_char, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_unsigned_char, vol_var__Float16);
}
#endif
static void
test_fmaxmag_276 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned_char, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_unsigned_char, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_fmaxmag_277 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned_char, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_unsigned_char, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmaxmag_278 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned_char, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_unsigned_char, vol_var__Float32x);
}
#endif
static void
test_fmaxmag_279 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned_char, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_unsigned_char, vol_var_double);
}
static void
test_fmaxmag_280 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned_char, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmaxmag (vol_var_unsigned_char, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_fmaxmag_281 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned_char, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmaxmag (vol_var_unsigned_char, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fmaxmag_282 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned_char, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmaxmag (vol_var_unsigned_char, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fmaxmag_283 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned_char, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmaxmag (vol_var_unsigned_char, vol_var__Float128);
}
#endif
static void
test_fmaxmag_284 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned_char, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_unsigned_char, vol_var_char);
}
static void
test_fmaxmag_285 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned_char, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_unsigned_char, vol_var_signed_char);
}
static void
test_fmaxmag_286 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned_char, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_unsigned_char, vol_var_unsigned_char);
}
static void
test_fmaxmag_287 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned_char, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_unsigned_char, vol_var_short_int);
}
static void
test_fmaxmag_288 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned_char, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_unsigned_char, vol_var_unsigned_short_int);
}
static void
test_fmaxmag_289 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned_char, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_unsigned_char, vol_var_int);
}
static void
test_fmaxmag_290 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned_char, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_unsigned_char, vol_var_unsigned_int);
}
static void
test_fmaxmag_291 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned_char, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_unsigned_char, vol_var_long_int);
}
static void
test_fmaxmag_292 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned_char, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_unsigned_char, vol_var_unsigned_long_int);
}
static void
test_fmaxmag_293 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned_char, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_unsigned_char, vol_var_long_long_int);
}
static void
test_fmaxmag_294 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned_char, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_unsigned_char, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fmaxmag_295 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned_char, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_unsigned_char, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmaxmag_296 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned_char, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_unsigned_char, vol_var_unsigned___int128);
}
#endif
static void
test_fmaxmag_297 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned_char, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_unsigned_char, vol_var_enum_e);
}
static void
test_fmaxmag_298 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned_char, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_unsigned_char, vol_var__Bool);
}
static void
test_fmaxmag_299 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned_char, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_unsigned_char, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_fmaxmag_300 (void)
{
  extern typeof (fmaxmag (vol_var_short_int, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_short_int, vol_var__Float16);
}
#endif
static void
test_fmaxmag_301 (void)
{
  extern typeof (fmaxmag (vol_var_short_int, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_short_int, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_fmaxmag_302 (void)
{
  extern typeof (fmaxmag (vol_var_short_int, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_short_int, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmaxmag_303 (void)
{
  extern typeof (fmaxmag (vol_var_short_int, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_short_int, vol_var__Float32x);
}
#endif
static void
test_fmaxmag_304 (void)
{
  extern typeof (fmaxmag (vol_var_short_int, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_short_int, vol_var_double);
}
static void
test_fmaxmag_305 (void)
{
  extern typeof (fmaxmag (vol_var_short_int, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmaxmag (vol_var_short_int, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_fmaxmag_306 (void)
{
  extern typeof (fmaxmag (vol_var_short_int, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmaxmag (vol_var_short_int, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fmaxmag_307 (void)
{
  extern typeof (fmaxmag (vol_var_short_int, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmaxmag (vol_var_short_int, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fmaxmag_308 (void)
{
  extern typeof (fmaxmag (vol_var_short_int, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmaxmag (vol_var_short_int, vol_var__Float128);
}
#endif
static void
test_fmaxmag_309 (void)
{
  extern typeof (fmaxmag (vol_var_short_int, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_short_int, vol_var_char);
}
static void
test_fmaxmag_310 (void)
{
  extern typeof (fmaxmag (vol_var_short_int, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_short_int, vol_var_signed_char);
}
static void
test_fmaxmag_311 (void)
{
  extern typeof (fmaxmag (vol_var_short_int, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_short_int, vol_var_unsigned_char);
}
static void
test_fmaxmag_312 (void)
{
  extern typeof (fmaxmag (vol_var_short_int, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_short_int, vol_var_short_int);
}
static void
test_fmaxmag_313 (void)
{
  extern typeof (fmaxmag (vol_var_short_int, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_short_int, vol_var_unsigned_short_int);
}
static void
test_fmaxmag_314 (void)
{
  extern typeof (fmaxmag (vol_var_short_int, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_short_int, vol_var_int);
}
static void
test_fmaxmag_315 (void)
{
  extern typeof (fmaxmag (vol_var_short_int, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_short_int, vol_var_unsigned_int);
}
static void
test_fmaxmag_316 (void)
{
  extern typeof (fmaxmag (vol_var_short_int, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_short_int, vol_var_long_int);
}
static void
test_fmaxmag_317 (void)
{
  extern typeof (fmaxmag (vol_var_short_int, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_short_int, vol_var_unsigned_long_int);
}
static void
test_fmaxmag_318 (void)
{
  extern typeof (fmaxmag (vol_var_short_int, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_short_int, vol_var_long_long_int);
}
static void
test_fmaxmag_319 (void)
{
  extern typeof (fmaxmag (vol_var_short_int, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_short_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fmaxmag_320 (void)
{
  extern typeof (fmaxmag (vol_var_short_int, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_short_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmaxmag_321 (void)
{
  extern typeof (fmaxmag (vol_var_short_int, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_short_int, vol_var_unsigned___int128);
}
#endif
static void
test_fmaxmag_322 (void)
{
  extern typeof (fmaxmag (vol_var_short_int, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_short_int, vol_var_enum_e);
}
static void
test_fmaxmag_323 (void)
{
  extern typeof (fmaxmag (vol_var_short_int, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_short_int, vol_var__Bool);
}
static void
test_fmaxmag_324 (void)
{
  extern typeof (fmaxmag (vol_var_short_int, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_short_int, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_fmaxmag_325 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned_short_int, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_unsigned_short_int, vol_var__Float16);
}
#endif
static void
test_fmaxmag_326 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned_short_int, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_unsigned_short_int, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_fmaxmag_327 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned_short_int, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_unsigned_short_int, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmaxmag_328 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned_short_int, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_unsigned_short_int, vol_var__Float32x);
}
#endif
static void
test_fmaxmag_329 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned_short_int, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_unsigned_short_int, vol_var_double);
}
static void
test_fmaxmag_330 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned_short_int, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmaxmag (vol_var_unsigned_short_int, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_fmaxmag_331 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned_short_int, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmaxmag (vol_var_unsigned_short_int, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fmaxmag_332 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned_short_int, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmaxmag (vol_var_unsigned_short_int, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fmaxmag_333 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned_short_int, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmaxmag (vol_var_unsigned_short_int, vol_var__Float128);
}
#endif
static void
test_fmaxmag_334 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned_short_int, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_unsigned_short_int, vol_var_char);
}
static void
test_fmaxmag_335 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned_short_int, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_unsigned_short_int, vol_var_signed_char);
}
static void
test_fmaxmag_336 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned_short_int, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_unsigned_short_int, vol_var_unsigned_char);
}
static void
test_fmaxmag_337 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned_short_int, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_unsigned_short_int, vol_var_short_int);
}
static void
test_fmaxmag_338 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned_short_int, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_unsigned_short_int, vol_var_unsigned_short_int);
}
static void
test_fmaxmag_339 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned_short_int, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_unsigned_short_int, vol_var_int);
}
static void
test_fmaxmag_340 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned_short_int, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_unsigned_short_int, vol_var_unsigned_int);
}
static void
test_fmaxmag_341 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned_short_int, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_unsigned_short_int, vol_var_long_int);
}
static void
test_fmaxmag_342 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned_short_int, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_unsigned_short_int, vol_var_unsigned_long_int);
}
static void
test_fmaxmag_343 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned_short_int, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_unsigned_short_int, vol_var_long_long_int);
}
static void
test_fmaxmag_344 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned_short_int, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_unsigned_short_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fmaxmag_345 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned_short_int, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_unsigned_short_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmaxmag_346 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned_short_int, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_unsigned_short_int, vol_var_unsigned___int128);
}
#endif
static void
test_fmaxmag_347 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned_short_int, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_unsigned_short_int, vol_var_enum_e);
}
static void
test_fmaxmag_348 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned_short_int, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_unsigned_short_int, vol_var__Bool);
}
static void
test_fmaxmag_349 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned_short_int, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_unsigned_short_int, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_fmaxmag_350 (void)
{
  extern typeof (fmaxmag (vol_var_int, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_int, vol_var__Float16);
}
#endif
static void
test_fmaxmag_351 (void)
{
  extern typeof (fmaxmag (vol_var_int, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_int, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_fmaxmag_352 (void)
{
  extern typeof (fmaxmag (vol_var_int, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_int, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmaxmag_353 (void)
{
  extern typeof (fmaxmag (vol_var_int, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_int, vol_var__Float32x);
}
#endif
static void
test_fmaxmag_354 (void)
{
  extern typeof (fmaxmag (vol_var_int, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_int, vol_var_double);
}
static void
test_fmaxmag_355 (void)
{
  extern typeof (fmaxmag (vol_var_int, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmaxmag (vol_var_int, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_fmaxmag_356 (void)
{
  extern typeof (fmaxmag (vol_var_int, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmaxmag (vol_var_int, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fmaxmag_357 (void)
{
  extern typeof (fmaxmag (vol_var_int, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmaxmag (vol_var_int, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fmaxmag_358 (void)
{
  extern typeof (fmaxmag (vol_var_int, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmaxmag (vol_var_int, vol_var__Float128);
}
#endif
static void
test_fmaxmag_359 (void)
{
  extern typeof (fmaxmag (vol_var_int, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_int, vol_var_char);
}
static void
test_fmaxmag_360 (void)
{
  extern typeof (fmaxmag (vol_var_int, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_int, vol_var_signed_char);
}
static void
test_fmaxmag_361 (void)
{
  extern typeof (fmaxmag (vol_var_int, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_int, vol_var_unsigned_char);
}
static void
test_fmaxmag_362 (void)
{
  extern typeof (fmaxmag (vol_var_int, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_int, vol_var_short_int);
}
static void
test_fmaxmag_363 (void)
{
  extern typeof (fmaxmag (vol_var_int, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_int, vol_var_unsigned_short_int);
}
static void
test_fmaxmag_364 (void)
{
  extern typeof (fmaxmag (vol_var_int, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_int, vol_var_int);
}
static void
test_fmaxmag_365 (void)
{
  extern typeof (fmaxmag (vol_var_int, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_int, vol_var_unsigned_int);
}
static void
test_fmaxmag_366 (void)
{
  extern typeof (fmaxmag (vol_var_int, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_int, vol_var_long_int);
}
static void
test_fmaxmag_367 (void)
{
  extern typeof (fmaxmag (vol_var_int, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_int, vol_var_unsigned_long_int);
}
static void
test_fmaxmag_368 (void)
{
  extern typeof (fmaxmag (vol_var_int, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_int, vol_var_long_long_int);
}
static void
test_fmaxmag_369 (void)
{
  extern typeof (fmaxmag (vol_var_int, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fmaxmag_370 (void)
{
  extern typeof (fmaxmag (vol_var_int, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmaxmag_371 (void)
{
  extern typeof (fmaxmag (vol_var_int, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_int, vol_var_unsigned___int128);
}
#endif
static void
test_fmaxmag_372 (void)
{
  extern typeof (fmaxmag (vol_var_int, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_int, vol_var_enum_e);
}
static void
test_fmaxmag_373 (void)
{
  extern typeof (fmaxmag (vol_var_int, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_int, vol_var__Bool);
}
static void
test_fmaxmag_374 (void)
{
  extern typeof (fmaxmag (vol_var_int, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_int, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_fmaxmag_375 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned_int, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_unsigned_int, vol_var__Float16);
}
#endif
static void
test_fmaxmag_376 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned_int, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_unsigned_int, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_fmaxmag_377 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned_int, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_unsigned_int, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmaxmag_378 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned_int, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_unsigned_int, vol_var__Float32x);
}
#endif
static void
test_fmaxmag_379 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned_int, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_unsigned_int, vol_var_double);
}
static void
test_fmaxmag_380 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned_int, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmaxmag (vol_var_unsigned_int, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_fmaxmag_381 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned_int, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmaxmag (vol_var_unsigned_int, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fmaxmag_382 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned_int, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmaxmag (vol_var_unsigned_int, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fmaxmag_383 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned_int, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmaxmag (vol_var_unsigned_int, vol_var__Float128);
}
#endif
static void
test_fmaxmag_384 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned_int, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_unsigned_int, vol_var_char);
}
static void
test_fmaxmag_385 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned_int, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_unsigned_int, vol_var_signed_char);
}
static void
test_fmaxmag_386 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned_int, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_unsigned_int, vol_var_unsigned_char);
}
static void
test_fmaxmag_387 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned_int, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_unsigned_int, vol_var_short_int);
}
static void
test_fmaxmag_388 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned_int, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_unsigned_int, vol_var_unsigned_short_int);
}
static void
test_fmaxmag_389 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned_int, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_unsigned_int, vol_var_int);
}
static void
test_fmaxmag_390 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned_int, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_unsigned_int, vol_var_unsigned_int);
}
static void
test_fmaxmag_391 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned_int, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_unsigned_int, vol_var_long_int);
}
static void
test_fmaxmag_392 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned_int, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_unsigned_int, vol_var_unsigned_long_int);
}
static void
test_fmaxmag_393 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned_int, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_unsigned_int, vol_var_long_long_int);
}
static void
test_fmaxmag_394 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned_int, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_unsigned_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fmaxmag_395 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned_int, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_unsigned_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmaxmag_396 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned_int, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_unsigned_int, vol_var_unsigned___int128);
}
#endif
static void
test_fmaxmag_397 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned_int, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_unsigned_int, vol_var_enum_e);
}
static void
test_fmaxmag_398 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned_int, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_unsigned_int, vol_var__Bool);
}
static void
test_fmaxmag_399 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned_int, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_unsigned_int, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_fmaxmag_400 (void)
{
  extern typeof (fmaxmag (vol_var_long_int, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_long_int, vol_var__Float16);
}
#endif
static void
test_fmaxmag_401 (void)
{
  extern typeof (fmaxmag (vol_var_long_int, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_long_int, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_fmaxmag_402 (void)
{
  extern typeof (fmaxmag (vol_var_long_int, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_long_int, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmaxmag_403 (void)
{
  extern typeof (fmaxmag (vol_var_long_int, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_long_int, vol_var__Float32x);
}
#endif
static void
test_fmaxmag_404 (void)
{
  extern typeof (fmaxmag (vol_var_long_int, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_long_int, vol_var_double);
}
static void
test_fmaxmag_405 (void)
{
  extern typeof (fmaxmag (vol_var_long_int, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmaxmag (vol_var_long_int, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_fmaxmag_406 (void)
{
  extern typeof (fmaxmag (vol_var_long_int, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmaxmag (vol_var_long_int, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fmaxmag_407 (void)
{
  extern typeof (fmaxmag (vol_var_long_int, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmaxmag (vol_var_long_int, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fmaxmag_408 (void)
{
  extern typeof (fmaxmag (vol_var_long_int, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmaxmag (vol_var_long_int, vol_var__Float128);
}
#endif
static void
test_fmaxmag_409 (void)
{
  extern typeof (fmaxmag (vol_var_long_int, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_long_int, vol_var_char);
}
static void
test_fmaxmag_410 (void)
{
  extern typeof (fmaxmag (vol_var_long_int, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_long_int, vol_var_signed_char);
}
static void
test_fmaxmag_411 (void)
{
  extern typeof (fmaxmag (vol_var_long_int, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_long_int, vol_var_unsigned_char);
}
static void
test_fmaxmag_412 (void)
{
  extern typeof (fmaxmag (vol_var_long_int, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_long_int, vol_var_short_int);
}
static void
test_fmaxmag_413 (void)
{
  extern typeof (fmaxmag (vol_var_long_int, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_long_int, vol_var_unsigned_short_int);
}
static void
test_fmaxmag_414 (void)
{
  extern typeof (fmaxmag (vol_var_long_int, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_long_int, vol_var_int);
}
static void
test_fmaxmag_415 (void)
{
  extern typeof (fmaxmag (vol_var_long_int, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_long_int, vol_var_unsigned_int);
}
static void
test_fmaxmag_416 (void)
{
  extern typeof (fmaxmag (vol_var_long_int, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_long_int, vol_var_long_int);
}
static void
test_fmaxmag_417 (void)
{
  extern typeof (fmaxmag (vol_var_long_int, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_long_int, vol_var_unsigned_long_int);
}
static void
test_fmaxmag_418 (void)
{
  extern typeof (fmaxmag (vol_var_long_int, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_long_int, vol_var_long_long_int);
}
static void
test_fmaxmag_419 (void)
{
  extern typeof (fmaxmag (vol_var_long_int, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_long_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fmaxmag_420 (void)
{
  extern typeof (fmaxmag (vol_var_long_int, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_long_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmaxmag_421 (void)
{
  extern typeof (fmaxmag (vol_var_long_int, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_long_int, vol_var_unsigned___int128);
}
#endif
static void
test_fmaxmag_422 (void)
{
  extern typeof (fmaxmag (vol_var_long_int, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_long_int, vol_var_enum_e);
}
static void
test_fmaxmag_423 (void)
{
  extern typeof (fmaxmag (vol_var_long_int, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_long_int, vol_var__Bool);
}
static void
test_fmaxmag_424 (void)
{
  extern typeof (fmaxmag (vol_var_long_int, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_long_int, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_fmaxmag_425 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned_long_int, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_unsigned_long_int, vol_var__Float16);
}
#endif
static void
test_fmaxmag_426 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned_long_int, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_unsigned_long_int, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_fmaxmag_427 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned_long_int, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_unsigned_long_int, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmaxmag_428 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned_long_int, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_unsigned_long_int, vol_var__Float32x);
}
#endif
static void
test_fmaxmag_429 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned_long_int, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_unsigned_long_int, vol_var_double);
}
static void
test_fmaxmag_430 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned_long_int, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmaxmag (vol_var_unsigned_long_int, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_fmaxmag_431 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned_long_int, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmaxmag (vol_var_unsigned_long_int, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fmaxmag_432 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned_long_int, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmaxmag (vol_var_unsigned_long_int, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fmaxmag_433 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned_long_int, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmaxmag (vol_var_unsigned_long_int, vol_var__Float128);
}
#endif
static void
test_fmaxmag_434 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned_long_int, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_unsigned_long_int, vol_var_char);
}
static void
test_fmaxmag_435 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned_long_int, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_unsigned_long_int, vol_var_signed_char);
}
static void
test_fmaxmag_436 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned_long_int, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_unsigned_long_int, vol_var_unsigned_char);
}
static void
test_fmaxmag_437 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned_long_int, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_unsigned_long_int, vol_var_short_int);
}
static void
test_fmaxmag_438 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned_long_int, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_unsigned_long_int, vol_var_unsigned_short_int);
}
static void
test_fmaxmag_439 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned_long_int, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_unsigned_long_int, vol_var_int);
}
static void
test_fmaxmag_440 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned_long_int, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_unsigned_long_int, vol_var_unsigned_int);
}
static void
test_fmaxmag_441 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned_long_int, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_unsigned_long_int, vol_var_long_int);
}
static void
test_fmaxmag_442 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned_long_int, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_unsigned_long_int, vol_var_unsigned_long_int);
}
static void
test_fmaxmag_443 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned_long_int, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_unsigned_long_int, vol_var_long_long_int);
}
static void
test_fmaxmag_444 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned_long_int, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_unsigned_long_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fmaxmag_445 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned_long_int, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_unsigned_long_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmaxmag_446 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned_long_int, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_unsigned_long_int, vol_var_unsigned___int128);
}
#endif
static void
test_fmaxmag_447 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned_long_int, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_unsigned_long_int, vol_var_enum_e);
}
static void
test_fmaxmag_448 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned_long_int, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_unsigned_long_int, vol_var__Bool);
}
static void
test_fmaxmag_449 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned_long_int, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_unsigned_long_int, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_fmaxmag_450 (void)
{
  extern typeof (fmaxmag (vol_var_long_long_int, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_long_long_int, vol_var__Float16);
}
#endif
static void
test_fmaxmag_451 (void)
{
  extern typeof (fmaxmag (vol_var_long_long_int, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_long_long_int, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_fmaxmag_452 (void)
{
  extern typeof (fmaxmag (vol_var_long_long_int, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_long_long_int, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmaxmag_453 (void)
{
  extern typeof (fmaxmag (vol_var_long_long_int, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_long_long_int, vol_var__Float32x);
}
#endif
static void
test_fmaxmag_454 (void)
{
  extern typeof (fmaxmag (vol_var_long_long_int, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_long_long_int, vol_var_double);
}
static void
test_fmaxmag_455 (void)
{
  extern typeof (fmaxmag (vol_var_long_long_int, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmaxmag (vol_var_long_long_int, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_fmaxmag_456 (void)
{
  extern typeof (fmaxmag (vol_var_long_long_int, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmaxmag (vol_var_long_long_int, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fmaxmag_457 (void)
{
  extern typeof (fmaxmag (vol_var_long_long_int, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmaxmag (vol_var_long_long_int, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fmaxmag_458 (void)
{
  extern typeof (fmaxmag (vol_var_long_long_int, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmaxmag (vol_var_long_long_int, vol_var__Float128);
}
#endif
static void
test_fmaxmag_459 (void)
{
  extern typeof (fmaxmag (vol_var_long_long_int, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_long_long_int, vol_var_char);
}
static void
test_fmaxmag_460 (void)
{
  extern typeof (fmaxmag (vol_var_long_long_int, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_long_long_int, vol_var_signed_char);
}
static void
test_fmaxmag_461 (void)
{
  extern typeof (fmaxmag (vol_var_long_long_int, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_long_long_int, vol_var_unsigned_char);
}
static void
test_fmaxmag_462 (void)
{
  extern typeof (fmaxmag (vol_var_long_long_int, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_long_long_int, vol_var_short_int);
}
static void
test_fmaxmag_463 (void)
{
  extern typeof (fmaxmag (vol_var_long_long_int, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_long_long_int, vol_var_unsigned_short_int);
}
static void
test_fmaxmag_464 (void)
{
  extern typeof (fmaxmag (vol_var_long_long_int, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_long_long_int, vol_var_int);
}
static void
test_fmaxmag_465 (void)
{
  extern typeof (fmaxmag (vol_var_long_long_int, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_long_long_int, vol_var_unsigned_int);
}
static void
test_fmaxmag_466 (void)
{
  extern typeof (fmaxmag (vol_var_long_long_int, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_long_long_int, vol_var_long_int);
}
static void
test_fmaxmag_467 (void)
{
  extern typeof (fmaxmag (vol_var_long_long_int, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_long_long_int, vol_var_unsigned_long_int);
}
static void
test_fmaxmag_468 (void)
{
  extern typeof (fmaxmag (vol_var_long_long_int, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_long_long_int, vol_var_long_long_int);
}
static void
test_fmaxmag_469 (void)
{
  extern typeof (fmaxmag (vol_var_long_long_int, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_long_long_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fmaxmag_470 (void)
{
  extern typeof (fmaxmag (vol_var_long_long_int, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_long_long_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmaxmag_471 (void)
{
  extern typeof (fmaxmag (vol_var_long_long_int, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_long_long_int, vol_var_unsigned___int128);
}
#endif
static void
test_fmaxmag_472 (void)
{
  extern typeof (fmaxmag (vol_var_long_long_int, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_long_long_int, vol_var_enum_e);
}
static void
test_fmaxmag_473 (void)
{
  extern typeof (fmaxmag (vol_var_long_long_int, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_long_long_int, vol_var__Bool);
}
static void
test_fmaxmag_474 (void)
{
  extern typeof (fmaxmag (vol_var_long_long_int, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_long_long_int, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_fmaxmag_475 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned_long_long_int, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_unsigned_long_long_int, vol_var__Float16);
}
#endif
static void
test_fmaxmag_476 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned_long_long_int, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_unsigned_long_long_int, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_fmaxmag_477 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned_long_long_int, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_unsigned_long_long_int, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmaxmag_478 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned_long_long_int, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_unsigned_long_long_int, vol_var__Float32x);
}
#endif
static void
test_fmaxmag_479 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned_long_long_int, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_unsigned_long_long_int, vol_var_double);
}
static void
test_fmaxmag_480 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned_long_long_int, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmaxmag (vol_var_unsigned_long_long_int, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_fmaxmag_481 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned_long_long_int, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmaxmag (vol_var_unsigned_long_long_int, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fmaxmag_482 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned_long_long_int, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmaxmag (vol_var_unsigned_long_long_int, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fmaxmag_483 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned_long_long_int, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmaxmag (vol_var_unsigned_long_long_int, vol_var__Float128);
}
#endif
static void
test_fmaxmag_484 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned_long_long_int, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_unsigned_long_long_int, vol_var_char);
}
static void
test_fmaxmag_485 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned_long_long_int, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_unsigned_long_long_int, vol_var_signed_char);
}
static void
test_fmaxmag_486 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned_long_long_int, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_unsigned_long_long_int, vol_var_unsigned_char);
}
static void
test_fmaxmag_487 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned_long_long_int, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_unsigned_long_long_int, vol_var_short_int);
}
static void
test_fmaxmag_488 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned_long_long_int, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_unsigned_long_long_int, vol_var_unsigned_short_int);
}
static void
test_fmaxmag_489 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned_long_long_int, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_unsigned_long_long_int, vol_var_int);
}
static void
test_fmaxmag_490 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned_long_long_int, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_unsigned_long_long_int, vol_var_unsigned_int);
}
static void
test_fmaxmag_491 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned_long_long_int, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_unsigned_long_long_int, vol_var_long_int);
}
static void
test_fmaxmag_492 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned_long_long_int, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_unsigned_long_long_int, vol_var_unsigned_long_int);
}
static void
test_fmaxmag_493 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned_long_long_int, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_unsigned_long_long_int, vol_var_long_long_int);
}
static void
test_fmaxmag_494 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned_long_long_int, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_unsigned_long_long_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fmaxmag_495 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned_long_long_int, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_unsigned_long_long_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmaxmag_496 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned_long_long_int, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_unsigned_long_long_int, vol_var_unsigned___int128);
}
#endif
static void
test_fmaxmag_497 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned_long_long_int, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_unsigned_long_long_int, vol_var_enum_e);
}
static void
test_fmaxmag_498 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned_long_long_int, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_unsigned_long_long_int, vol_var__Bool);
}
static void
test_fmaxmag_499 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned_long_long_int, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_unsigned_long_long_int, vol_var_bit_field);
}
#if defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_fmaxmag_500 (void)
{
  extern typeof (fmaxmag (vol_var___int128, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var___int128, vol_var__Float16);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmaxmag_501 (void)
{
  extern typeof (fmaxmag (vol_var___int128, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var___int128, vol_var_float);
}
#endif
#if defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_fmaxmag_502 (void)
{
  extern typeof (fmaxmag (vol_var___int128, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var___int128, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_fmaxmag_503 (void)
{
  extern typeof (fmaxmag (vol_var___int128, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var___int128, vol_var__Float32x);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmaxmag_504 (void)
{
  extern typeof (fmaxmag (vol_var___int128, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var___int128, vol_var_double);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmaxmag_505 (void)
{
  extern typeof (fmaxmag (vol_var___int128, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmaxmag (vol_var___int128, vol_var_long_double);
}
#endif
#if defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_fmaxmag_506 (void)
{
  extern typeof (fmaxmag (vol_var___int128, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmaxmag (vol_var___int128, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_fmaxmag_507 (void)
{
  extern typeof (fmaxmag (vol_var___int128, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmaxmag (vol_var___int128, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_fmaxmag_508 (void)
{
  extern typeof (fmaxmag (vol_var___int128, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmaxmag (vol_var___int128, vol_var__Float128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmaxmag_509 (void)
{
  extern typeof (fmaxmag (vol_var___int128, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var___int128, vol_var_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmaxmag_510 (void)
{
  extern typeof (fmaxmag (vol_var___int128, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var___int128, vol_var_signed_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmaxmag_511 (void)
{
  extern typeof (fmaxmag (vol_var___int128, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var___int128, vol_var_unsigned_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmaxmag_512 (void)
{
  extern typeof (fmaxmag (vol_var___int128, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var___int128, vol_var_short_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmaxmag_513 (void)
{
  extern typeof (fmaxmag (vol_var___int128, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var___int128, vol_var_unsigned_short_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmaxmag_514 (void)
{
  extern typeof (fmaxmag (vol_var___int128, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var___int128, vol_var_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmaxmag_515 (void)
{
  extern typeof (fmaxmag (vol_var___int128, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var___int128, vol_var_unsigned_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmaxmag_516 (void)
{
  extern typeof (fmaxmag (vol_var___int128, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var___int128, vol_var_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmaxmag_517 (void)
{
  extern typeof (fmaxmag (vol_var___int128, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var___int128, vol_var_unsigned_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmaxmag_518 (void)
{
  extern typeof (fmaxmag (vol_var___int128, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var___int128, vol_var_long_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmaxmag_519 (void)
{
  extern typeof (fmaxmag (vol_var___int128, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var___int128, vol_var_unsigned_long_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmaxmag_520 (void)
{
  extern typeof (fmaxmag (vol_var___int128, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var___int128, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmaxmag_521 (void)
{
  extern typeof (fmaxmag (vol_var___int128, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var___int128, vol_var_unsigned___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmaxmag_522 (void)
{
  extern typeof (fmaxmag (vol_var___int128, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var___int128, vol_var_enum_e);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmaxmag_523 (void)
{
  extern typeof (fmaxmag (vol_var___int128, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var___int128, vol_var__Bool);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmaxmag_524 (void)
{
  extern typeof (fmaxmag (vol_var___int128, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var___int128, vol_var_bit_field);
}
#endif
#if defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_fmaxmag_525 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned___int128, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_unsigned___int128, vol_var__Float16);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmaxmag_526 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned___int128, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_unsigned___int128, vol_var_float);
}
#endif
#if defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_fmaxmag_527 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned___int128, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_unsigned___int128, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_fmaxmag_528 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned___int128, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_unsigned___int128, vol_var__Float32x);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmaxmag_529 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned___int128, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_unsigned___int128, vol_var_double);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmaxmag_530 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned___int128, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmaxmag (vol_var_unsigned___int128, vol_var_long_double);
}
#endif
#if defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_fmaxmag_531 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned___int128, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmaxmag (vol_var_unsigned___int128, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_fmaxmag_532 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned___int128, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmaxmag (vol_var_unsigned___int128, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_fmaxmag_533 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned___int128, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmaxmag (vol_var_unsigned___int128, vol_var__Float128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmaxmag_534 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned___int128, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_unsigned___int128, vol_var_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmaxmag_535 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned___int128, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_unsigned___int128, vol_var_signed_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmaxmag_536 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned___int128, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_unsigned___int128, vol_var_unsigned_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmaxmag_537 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned___int128, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_unsigned___int128, vol_var_short_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmaxmag_538 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned___int128, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_unsigned___int128, vol_var_unsigned_short_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmaxmag_539 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned___int128, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_unsigned___int128, vol_var_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmaxmag_540 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned___int128, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_unsigned___int128, vol_var_unsigned_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmaxmag_541 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned___int128, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_unsigned___int128, vol_var_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmaxmag_542 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned___int128, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_unsigned___int128, vol_var_unsigned_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmaxmag_543 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned___int128, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_unsigned___int128, vol_var_long_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmaxmag_544 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned___int128, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_unsigned___int128, vol_var_unsigned_long_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmaxmag_545 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned___int128, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_unsigned___int128, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmaxmag_546 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned___int128, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_unsigned___int128, vol_var_unsigned___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmaxmag_547 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned___int128, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_unsigned___int128, vol_var_enum_e);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmaxmag_548 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned___int128, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_unsigned___int128, vol_var__Bool);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmaxmag_549 (void)
{
  extern typeof (fmaxmag (vol_var_unsigned___int128, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_unsigned___int128, vol_var_bit_field);
}
#endif
#if defined HUGE_VAL_F16
static void
test_fmaxmag_550 (void)
{
  extern typeof (fmaxmag (vol_var_enum_e, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_enum_e, vol_var__Float16);
}
#endif
static void
test_fmaxmag_551 (void)
{
  extern typeof (fmaxmag (vol_var_enum_e, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_enum_e, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_fmaxmag_552 (void)
{
  extern typeof (fmaxmag (vol_var_enum_e, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_enum_e, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmaxmag_553 (void)
{
  extern typeof (fmaxmag (vol_var_enum_e, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_enum_e, vol_var__Float32x);
}
#endif
static void
test_fmaxmag_554 (void)
{
  extern typeof (fmaxmag (vol_var_enum_e, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_enum_e, vol_var_double);
}
static void
test_fmaxmag_555 (void)
{
  extern typeof (fmaxmag (vol_var_enum_e, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmaxmag (vol_var_enum_e, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_fmaxmag_556 (void)
{
  extern typeof (fmaxmag (vol_var_enum_e, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmaxmag (vol_var_enum_e, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fmaxmag_557 (void)
{
  extern typeof (fmaxmag (vol_var_enum_e, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmaxmag (vol_var_enum_e, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fmaxmag_558 (void)
{
  extern typeof (fmaxmag (vol_var_enum_e, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmaxmag (vol_var_enum_e, vol_var__Float128);
}
#endif
static void
test_fmaxmag_559 (void)
{
  extern typeof (fmaxmag (vol_var_enum_e, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_enum_e, vol_var_char);
}
static void
test_fmaxmag_560 (void)
{
  extern typeof (fmaxmag (vol_var_enum_e, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_enum_e, vol_var_signed_char);
}
static void
test_fmaxmag_561 (void)
{
  extern typeof (fmaxmag (vol_var_enum_e, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_enum_e, vol_var_unsigned_char);
}
static void
test_fmaxmag_562 (void)
{
  extern typeof (fmaxmag (vol_var_enum_e, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_enum_e, vol_var_short_int);
}
static void
test_fmaxmag_563 (void)
{
  extern typeof (fmaxmag (vol_var_enum_e, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_enum_e, vol_var_unsigned_short_int);
}
static void
test_fmaxmag_564 (void)
{
  extern typeof (fmaxmag (vol_var_enum_e, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_enum_e, vol_var_int);
}
static void
test_fmaxmag_565 (void)
{
  extern typeof (fmaxmag (vol_var_enum_e, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_enum_e, vol_var_unsigned_int);
}
static void
test_fmaxmag_566 (void)
{
  extern typeof (fmaxmag (vol_var_enum_e, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_enum_e, vol_var_long_int);
}
static void
test_fmaxmag_567 (void)
{
  extern typeof (fmaxmag (vol_var_enum_e, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_enum_e, vol_var_unsigned_long_int);
}
static void
test_fmaxmag_568 (void)
{
  extern typeof (fmaxmag (vol_var_enum_e, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_enum_e, vol_var_long_long_int);
}
static void
test_fmaxmag_569 (void)
{
  extern typeof (fmaxmag (vol_var_enum_e, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_enum_e, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fmaxmag_570 (void)
{
  extern typeof (fmaxmag (vol_var_enum_e, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_enum_e, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmaxmag_571 (void)
{
  extern typeof (fmaxmag (vol_var_enum_e, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_enum_e, vol_var_unsigned___int128);
}
#endif
static void
test_fmaxmag_572 (void)
{
  extern typeof (fmaxmag (vol_var_enum_e, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_enum_e, vol_var_enum_e);
}
static void
test_fmaxmag_573 (void)
{
  extern typeof (fmaxmag (vol_var_enum_e, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_enum_e, vol_var__Bool);
}
static void
test_fmaxmag_574 (void)
{
  extern typeof (fmaxmag (vol_var_enum_e, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_enum_e, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_fmaxmag_575 (void)
{
  extern typeof (fmaxmag (vol_var__Bool, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var__Bool, vol_var__Float16);
}
#endif
static void
test_fmaxmag_576 (void)
{
  extern typeof (fmaxmag (vol_var__Bool, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var__Bool, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_fmaxmag_577 (void)
{
  extern typeof (fmaxmag (vol_var__Bool, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var__Bool, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmaxmag_578 (void)
{
  extern typeof (fmaxmag (vol_var__Bool, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var__Bool, vol_var__Float32x);
}
#endif
static void
test_fmaxmag_579 (void)
{
  extern typeof (fmaxmag (vol_var__Bool, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var__Bool, vol_var_double);
}
static void
test_fmaxmag_580 (void)
{
  extern typeof (fmaxmag (vol_var__Bool, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmaxmag (vol_var__Bool, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_fmaxmag_581 (void)
{
  extern typeof (fmaxmag (vol_var__Bool, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmaxmag (vol_var__Bool, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fmaxmag_582 (void)
{
  extern typeof (fmaxmag (vol_var__Bool, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmaxmag (vol_var__Bool, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fmaxmag_583 (void)
{
  extern typeof (fmaxmag (vol_var__Bool, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmaxmag (vol_var__Bool, vol_var__Float128);
}
#endif
static void
test_fmaxmag_584 (void)
{
  extern typeof (fmaxmag (vol_var__Bool, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var__Bool, vol_var_char);
}
static void
test_fmaxmag_585 (void)
{
  extern typeof (fmaxmag (vol_var__Bool, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var__Bool, vol_var_signed_char);
}
static void
test_fmaxmag_586 (void)
{
  extern typeof (fmaxmag (vol_var__Bool, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var__Bool, vol_var_unsigned_char);
}
static void
test_fmaxmag_587 (void)
{
  extern typeof (fmaxmag (vol_var__Bool, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var__Bool, vol_var_short_int);
}
static void
test_fmaxmag_588 (void)
{
  extern typeof (fmaxmag (vol_var__Bool, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var__Bool, vol_var_unsigned_short_int);
}
static void
test_fmaxmag_589 (void)
{
  extern typeof (fmaxmag (vol_var__Bool, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var__Bool, vol_var_int);
}
static void
test_fmaxmag_590 (void)
{
  extern typeof (fmaxmag (vol_var__Bool, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var__Bool, vol_var_unsigned_int);
}
static void
test_fmaxmag_591 (void)
{
  extern typeof (fmaxmag (vol_var__Bool, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var__Bool, vol_var_long_int);
}
static void
test_fmaxmag_592 (void)
{
  extern typeof (fmaxmag (vol_var__Bool, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var__Bool, vol_var_unsigned_long_int);
}
static void
test_fmaxmag_593 (void)
{
  extern typeof (fmaxmag (vol_var__Bool, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var__Bool, vol_var_long_long_int);
}
static void
test_fmaxmag_594 (void)
{
  extern typeof (fmaxmag (vol_var__Bool, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var__Bool, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fmaxmag_595 (void)
{
  extern typeof (fmaxmag (vol_var__Bool, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var__Bool, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmaxmag_596 (void)
{
  extern typeof (fmaxmag (vol_var__Bool, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var__Bool, vol_var_unsigned___int128);
}
#endif
static void
test_fmaxmag_597 (void)
{
  extern typeof (fmaxmag (vol_var__Bool, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var__Bool, vol_var_enum_e);
}
static void
test_fmaxmag_598 (void)
{
  extern typeof (fmaxmag (vol_var__Bool, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var__Bool, vol_var__Bool);
}
static void
test_fmaxmag_599 (void)
{
  extern typeof (fmaxmag (vol_var__Bool, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var__Bool, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_fmaxmag_600 (void)
{
  extern typeof (fmaxmag (vol_var_bit_field, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_bit_field, vol_var__Float16);
}
#endif
static void
test_fmaxmag_601 (void)
{
  extern typeof (fmaxmag (vol_var_bit_field, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_bit_field, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_fmaxmag_602 (void)
{
  extern typeof (fmaxmag (vol_var_bit_field, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_bit_field, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmaxmag_603 (void)
{
  extern typeof (fmaxmag (vol_var_bit_field, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_bit_field, vol_var__Float32x);
}
#endif
static void
test_fmaxmag_604 (void)
{
  extern typeof (fmaxmag (vol_var_bit_field, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_bit_field, vol_var_double);
}
static void
test_fmaxmag_605 (void)
{
  extern typeof (fmaxmag (vol_var_bit_field, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmaxmag (vol_var_bit_field, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_fmaxmag_606 (void)
{
  extern typeof (fmaxmag (vol_var_bit_field, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmaxmag (vol_var_bit_field, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fmaxmag_607 (void)
{
  extern typeof (fmaxmag (vol_var_bit_field, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmaxmag (vol_var_bit_field, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fmaxmag_608 (void)
{
  extern typeof (fmaxmag (vol_var_bit_field, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmaxmag (vol_var_bit_field, vol_var__Float128);
}
#endif
static void
test_fmaxmag_609 (void)
{
  extern typeof (fmaxmag (vol_var_bit_field, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_bit_field, vol_var_char);
}
static void
test_fmaxmag_610 (void)
{
  extern typeof (fmaxmag (vol_var_bit_field, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_bit_field, vol_var_signed_char);
}
static void
test_fmaxmag_611 (void)
{
  extern typeof (fmaxmag (vol_var_bit_field, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_bit_field, vol_var_unsigned_char);
}
static void
test_fmaxmag_612 (void)
{
  extern typeof (fmaxmag (vol_var_bit_field, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_bit_field, vol_var_short_int);
}
static void
test_fmaxmag_613 (void)
{
  extern typeof (fmaxmag (vol_var_bit_field, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_bit_field, vol_var_unsigned_short_int);
}
static void
test_fmaxmag_614 (void)
{
  extern typeof (fmaxmag (vol_var_bit_field, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_bit_field, vol_var_int);
}
static void
test_fmaxmag_615 (void)
{
  extern typeof (fmaxmag (vol_var_bit_field, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_bit_field, vol_var_unsigned_int);
}
static void
test_fmaxmag_616 (void)
{
  extern typeof (fmaxmag (vol_var_bit_field, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_bit_field, vol_var_long_int);
}
static void
test_fmaxmag_617 (void)
{
  extern typeof (fmaxmag (vol_var_bit_field, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_bit_field, vol_var_unsigned_long_int);
}
static void
test_fmaxmag_618 (void)
{
  extern typeof (fmaxmag (vol_var_bit_field, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_bit_field, vol_var_long_long_int);
}
static void
test_fmaxmag_619 (void)
{
  extern typeof (fmaxmag (vol_var_bit_field, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_bit_field, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fmaxmag_620 (void)
{
  extern typeof (fmaxmag (vol_var_bit_field, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_bit_field, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmaxmag_621 (void)
{
  extern typeof (fmaxmag (vol_var_bit_field, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_bit_field, vol_var_unsigned___int128);
}
#endif
static void
test_fmaxmag_622 (void)
{
  extern typeof (fmaxmag (vol_var_bit_field, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_bit_field, vol_var_enum_e);
}
static void
test_fmaxmag_623 (void)
{
  extern typeof (fmaxmag (vol_var_bit_field, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_bit_field, vol_var__Bool);
}
static void
test_fmaxmag_624 (void)
{
  extern typeof (fmaxmag (vol_var_bit_field, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = fmaxmag (vol_var_bit_field, vol_var_bit_field);
}
static const struct test tests[] =
  {
#if defined HUGE_VAL_F16
    { test_fmaxmag_0, "fmaxmag", "fmaxmag (_Float16, _Float16)", FLT16_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_fmaxmag_1, "fmaxmag", "fmaxmag (_Float16, float)", FLT_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F32
    { test_fmaxmag_2, "fmaxmag", "fmaxmag (_Float16, _Float32)", FLT32_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
    { test_fmaxmag_3, "fmaxmag", "fmaxmag (_Float16, _Float32x)", FLT32X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_fmaxmag_4, "fmaxmag", "fmaxmag (_Float16, double)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_fmaxmag_5, "fmaxmag", "fmaxmag (_Float16, long double)", LDBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F64
    { test_fmaxmag_6, "fmaxmag", "fmaxmag (_Float16, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
    { test_fmaxmag_7, "fmaxmag", "fmaxmag (_Float16, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F16
    { test_fmaxmag_8, "fmaxmag", "fmaxmag (_Float16, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_fmaxmag_9, "fmaxmag", "fmaxmag (_Float16, char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_fmaxmag_10, "fmaxmag", "fmaxmag (_Float16, signed char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_fmaxmag_11, "fmaxmag", "fmaxmag (_Float16, unsigned char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_fmaxmag_12, "fmaxmag", "fmaxmag (_Float16, short int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_fmaxmag_13, "fmaxmag", "fmaxmag (_Float16, unsigned short int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_fmaxmag_14, "fmaxmag", "fmaxmag (_Float16, int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_fmaxmag_15, "fmaxmag", "fmaxmag (_Float16, unsigned int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_fmaxmag_16, "fmaxmag", "fmaxmag (_Float16, long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_fmaxmag_17, "fmaxmag", "fmaxmag (_Float16, unsigned long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_fmaxmag_18, "fmaxmag", "fmaxmag (_Float16, long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_fmaxmag_19, "fmaxmag", "fmaxmag (_Float16, unsigned long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_fmaxmag_20, "fmaxmag", "fmaxmag (_Float16, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_fmaxmag_21, "fmaxmag", "fmaxmag (_Float16, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_fmaxmag_22, "fmaxmag", "fmaxmag (_Float16, enum e)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_fmaxmag_23, "fmaxmag", "fmaxmag (_Float16, _Bool)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_fmaxmag_24, "fmaxmag", "fmaxmag (_Float16, bit_field)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_fmaxmag_25, "fmaxmag", "fmaxmag (float, _Float16)", FLT_MANT_DIG, 0 },
#endif
    { test_fmaxmag_26, "fmaxmag", "fmaxmag (float, float)", FLT_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_fmaxmag_27, "fmaxmag", "fmaxmag (float, _Float32)", FLT32_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmaxmag_28, "fmaxmag", "fmaxmag (float, _Float32x)", FLT32X_MANT_DIG, 0 },
#endif
    { test_fmaxmag_29, "fmaxmag", "fmaxmag (float, double)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_30, "fmaxmag", "fmaxmag (float, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_fmaxmag_31, "fmaxmag", "fmaxmag (float, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fmaxmag_32, "fmaxmag", "fmaxmag (float, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fmaxmag_33, "fmaxmag", "fmaxmag (float, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_fmaxmag_34, "fmaxmag", "fmaxmag (float, char)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_35, "fmaxmag", "fmaxmag (float, signed char)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_36, "fmaxmag", "fmaxmag (float, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_37, "fmaxmag", "fmaxmag (float, short int)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_38, "fmaxmag", "fmaxmag (float, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_39, "fmaxmag", "fmaxmag (float, int)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_40, "fmaxmag", "fmaxmag (float, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_41, "fmaxmag", "fmaxmag (float, long int)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_42, "fmaxmag", "fmaxmag (float, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_43, "fmaxmag", "fmaxmag (float, long long int)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_44, "fmaxmag", "fmaxmag (float, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fmaxmag_45, "fmaxmag", "fmaxmag (float, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmaxmag_46, "fmaxmag", "fmaxmag (float, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fmaxmag_47, "fmaxmag", "fmaxmag (float, enum e)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_48, "fmaxmag", "fmaxmag (float, _Bool)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_49, "fmaxmag", "fmaxmag (float, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F32
    { test_fmaxmag_50, "fmaxmag", "fmaxmag (_Float32, _Float16)", FLT32_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_fmaxmag_51, "fmaxmag", "fmaxmag (_Float32, float)", FLT32_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_fmaxmag_52, "fmaxmag", "fmaxmag (_Float32, _Float32)", FLT32_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
    { test_fmaxmag_53, "fmaxmag", "fmaxmag (_Float32, _Float32x)", FLT32X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_fmaxmag_54, "fmaxmag", "fmaxmag (_Float32, double)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_fmaxmag_55, "fmaxmag", "fmaxmag (_Float32, long double)", LDBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F64
    { test_fmaxmag_56, "fmaxmag", "fmaxmag (_Float32, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
    { test_fmaxmag_57, "fmaxmag", "fmaxmag (_Float32, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F32
    { test_fmaxmag_58, "fmaxmag", "fmaxmag (_Float32, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_fmaxmag_59, "fmaxmag", "fmaxmag (_Float32, char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_fmaxmag_60, "fmaxmag", "fmaxmag (_Float32, signed char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_fmaxmag_61, "fmaxmag", "fmaxmag (_Float32, unsigned char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_fmaxmag_62, "fmaxmag", "fmaxmag (_Float32, short int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_fmaxmag_63, "fmaxmag", "fmaxmag (_Float32, unsigned short int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_fmaxmag_64, "fmaxmag", "fmaxmag (_Float32, int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_fmaxmag_65, "fmaxmag", "fmaxmag (_Float32, unsigned int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_fmaxmag_66, "fmaxmag", "fmaxmag (_Float32, long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_fmaxmag_67, "fmaxmag", "fmaxmag (_Float32, unsigned long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_fmaxmag_68, "fmaxmag", "fmaxmag (_Float32, long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_fmaxmag_69, "fmaxmag", "fmaxmag (_Float32, unsigned long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_fmaxmag_70, "fmaxmag", "fmaxmag (_Float32, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_fmaxmag_71, "fmaxmag", "fmaxmag (_Float32, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_fmaxmag_72, "fmaxmag", "fmaxmag (_Float32, enum e)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_fmaxmag_73, "fmaxmag", "fmaxmag (_Float32, _Bool)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_fmaxmag_74, "fmaxmag", "fmaxmag (_Float32, bit_field)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
    { test_fmaxmag_75, "fmaxmag", "fmaxmag (_Float32x, _Float16)", FLT32X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmaxmag_76, "fmaxmag", "fmaxmag (_Float32x, float)", FLT32X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
    { test_fmaxmag_77, "fmaxmag", "fmaxmag (_Float32x, _Float32)", FLT32X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmaxmag_78, "fmaxmag", "fmaxmag (_Float32x, _Float32x)", FLT32X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmaxmag_79, "fmaxmag", "fmaxmag (_Float32x, double)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmaxmag_80, "fmaxmag", "fmaxmag (_Float32x, long double)", LDBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X && defined HUGE_VAL_F64
    { test_fmaxmag_81, "fmaxmag", "fmaxmag (_Float32x, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
    { test_fmaxmag_82, "fmaxmag", "fmaxmag (_Float32x, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
    { test_fmaxmag_83, "fmaxmag", "fmaxmag (_Float32x, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmaxmag_84, "fmaxmag", "fmaxmag (_Float32x, char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmaxmag_85, "fmaxmag", "fmaxmag (_Float32x, signed char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmaxmag_86, "fmaxmag", "fmaxmag (_Float32x, unsigned char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmaxmag_87, "fmaxmag", "fmaxmag (_Float32x, short int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmaxmag_88, "fmaxmag", "fmaxmag (_Float32x, unsigned short int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmaxmag_89, "fmaxmag", "fmaxmag (_Float32x, int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmaxmag_90, "fmaxmag", "fmaxmag (_Float32x, unsigned int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmaxmag_91, "fmaxmag", "fmaxmag (_Float32x, long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmaxmag_92, "fmaxmag", "fmaxmag (_Float32x, unsigned long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmaxmag_93, "fmaxmag", "fmaxmag (_Float32x, long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmaxmag_94, "fmaxmag", "fmaxmag (_Float32x, unsigned long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_fmaxmag_95, "fmaxmag", "fmaxmag (_Float32x, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_fmaxmag_96, "fmaxmag", "fmaxmag (_Float32x, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmaxmag_97, "fmaxmag", "fmaxmag (_Float32x, enum e)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmaxmag_98, "fmaxmag", "fmaxmag (_Float32x, _Bool)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmaxmag_99, "fmaxmag", "fmaxmag (_Float32x, bit_field)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_fmaxmag_100, "fmaxmag", "fmaxmag (double, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_fmaxmag_101, "fmaxmag", "fmaxmag (double, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_fmaxmag_102, "fmaxmag", "fmaxmag (double, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmaxmag_103, "fmaxmag", "fmaxmag (double, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_fmaxmag_104, "fmaxmag", "fmaxmag (double, double)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_105, "fmaxmag", "fmaxmag (double, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_fmaxmag_106, "fmaxmag", "fmaxmag (double, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fmaxmag_107, "fmaxmag", "fmaxmag (double, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fmaxmag_108, "fmaxmag", "fmaxmag (double, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_fmaxmag_109, "fmaxmag", "fmaxmag (double, char)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_110, "fmaxmag", "fmaxmag (double, signed char)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_111, "fmaxmag", "fmaxmag (double, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_112, "fmaxmag", "fmaxmag (double, short int)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_113, "fmaxmag", "fmaxmag (double, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_114, "fmaxmag", "fmaxmag (double, int)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_115, "fmaxmag", "fmaxmag (double, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_116, "fmaxmag", "fmaxmag (double, long int)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_117, "fmaxmag", "fmaxmag (double, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_118, "fmaxmag", "fmaxmag (double, long long int)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_119, "fmaxmag", "fmaxmag (double, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fmaxmag_120, "fmaxmag", "fmaxmag (double, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmaxmag_121, "fmaxmag", "fmaxmag (double, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fmaxmag_122, "fmaxmag", "fmaxmag (double, enum e)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_123, "fmaxmag", "fmaxmag (double, _Bool)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_124, "fmaxmag", "fmaxmag (double, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_fmaxmag_125, "fmaxmag", "fmaxmag (long double, _Float16)", LDBL_MANT_DIG, 0 },
#endif
    { test_fmaxmag_126, "fmaxmag", "fmaxmag (long double, float)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_fmaxmag_127, "fmaxmag", "fmaxmag (long double, _Float32)", LDBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmaxmag_128, "fmaxmag", "fmaxmag (long double, _Float32x)", LDBL_MANT_DIG, 0 },
#endif
    { test_fmaxmag_129, "fmaxmag", "fmaxmag (long double, double)", LDBL_MANT_DIG, 0 },
    { test_fmaxmag_130, "fmaxmag", "fmaxmag (long double, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_fmaxmag_131, "fmaxmag", "fmaxmag (long double, _Float64)", LDBL_MANT_DIG, 0 },
#endif
#if (LDBL_MANT_DIG != 106) && defined HUGE_VAL_F64X
    { test_fmaxmag_132, "fmaxmag", "fmaxmag (long double, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (LDBL_MANT_DIG != 106) && defined HUGE_VAL_F128
    { test_fmaxmag_133, "fmaxmag", "fmaxmag (long double, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_fmaxmag_134, "fmaxmag", "fmaxmag (long double, char)", LDBL_MANT_DIG, 0 },
    { test_fmaxmag_135, "fmaxmag", "fmaxmag (long double, signed char)", LDBL_MANT_DIG, 0 },
    { test_fmaxmag_136, "fmaxmag", "fmaxmag (long double, unsigned char)", LDBL_MANT_DIG, 0 },
    { test_fmaxmag_137, "fmaxmag", "fmaxmag (long double, short int)", LDBL_MANT_DIG, 0 },
    { test_fmaxmag_138, "fmaxmag", "fmaxmag (long double, unsigned short int)", LDBL_MANT_DIG, 0 },
    { test_fmaxmag_139, "fmaxmag", "fmaxmag (long double, int)", LDBL_MANT_DIG, 0 },
    { test_fmaxmag_140, "fmaxmag", "fmaxmag (long double, unsigned int)", LDBL_MANT_DIG, 0 },
    { test_fmaxmag_141, "fmaxmag", "fmaxmag (long double, long int)", LDBL_MANT_DIG, 0 },
    { test_fmaxmag_142, "fmaxmag", "fmaxmag (long double, unsigned long int)", LDBL_MANT_DIG, 0 },
    { test_fmaxmag_143, "fmaxmag", "fmaxmag (long double, long long int)", LDBL_MANT_DIG, 0 },
    { test_fmaxmag_144, "fmaxmag", "fmaxmag (long double, unsigned long long int)", LDBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fmaxmag_145, "fmaxmag", "fmaxmag (long double, __int128)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmaxmag_146, "fmaxmag", "fmaxmag (long double, unsigned __int128)", LDBL_MANT_DIG, 0 },
#endif
    { test_fmaxmag_147, "fmaxmag", "fmaxmag (long double, enum e)", LDBL_MANT_DIG, 0 },
    { test_fmaxmag_148, "fmaxmag", "fmaxmag (long double, _Bool)", LDBL_MANT_DIG, 0 },
    { test_fmaxmag_149, "fmaxmag", "fmaxmag (long double, bit_field)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F64
    { test_fmaxmag_150, "fmaxmag", "fmaxmag (_Float64, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_fmaxmag_151, "fmaxmag", "fmaxmag (_Float64, float)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F64
    { test_fmaxmag_152, "fmaxmag", "fmaxmag (_Float64, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X && defined HUGE_VAL_F64
    { test_fmaxmag_153, "fmaxmag", "fmaxmag (_Float64, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_fmaxmag_154, "fmaxmag", "fmaxmag (_Float64, double)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_fmaxmag_155, "fmaxmag", "fmaxmag (_Float64, long double)", LDBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_fmaxmag_156, "fmaxmag", "fmaxmag (_Float64, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
    { test_fmaxmag_157, "fmaxmag", "fmaxmag (_Float64, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F64
    { test_fmaxmag_158, "fmaxmag", "fmaxmag (_Float64, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_fmaxmag_159, "fmaxmag", "fmaxmag (_Float64, char)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_fmaxmag_160, "fmaxmag", "fmaxmag (_Float64, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_fmaxmag_161, "fmaxmag", "fmaxmag (_Float64, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_fmaxmag_162, "fmaxmag", "fmaxmag (_Float64, short int)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_fmaxmag_163, "fmaxmag", "fmaxmag (_Float64, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_fmaxmag_164, "fmaxmag", "fmaxmag (_Float64, int)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_fmaxmag_165, "fmaxmag", "fmaxmag (_Float64, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_fmaxmag_166, "fmaxmag", "fmaxmag (_Float64, long int)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_fmaxmag_167, "fmaxmag", "fmaxmag (_Float64, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_fmaxmag_168, "fmaxmag", "fmaxmag (_Float64, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_fmaxmag_169, "fmaxmag", "fmaxmag (_Float64, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_fmaxmag_170, "fmaxmag", "fmaxmag (_Float64, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_fmaxmag_171, "fmaxmag", "fmaxmag (_Float64, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_fmaxmag_172, "fmaxmag", "fmaxmag (_Float64, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_fmaxmag_173, "fmaxmag", "fmaxmag (_Float64, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_fmaxmag_174, "fmaxmag", "fmaxmag (_Float64, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
    { test_fmaxmag_175, "fmaxmag", "fmaxmag (_Float64x, _Float16)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fmaxmag_176, "fmaxmag", "fmaxmag (_Float64x, float)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
    { test_fmaxmag_177, "fmaxmag", "fmaxmag (_Float64x, _Float32)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
    { test_fmaxmag_178, "fmaxmag", "fmaxmag (_Float64x, _Float32x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fmaxmag_179, "fmaxmag", "fmaxmag (_Float64x, double)", FLT64X_MANT_DIG, 0 },
#endif
#if (LDBL_MANT_DIG != 106) && defined HUGE_VAL_F64X
    { test_fmaxmag_180, "fmaxmag", "fmaxmag (_Float64x, long double)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
    { test_fmaxmag_181, "fmaxmag", "fmaxmag (_Float64x, _Float64)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fmaxmag_182, "fmaxmag", "fmaxmag (_Float64x, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
    { test_fmaxmag_183, "fmaxmag", "fmaxmag (_Float64x, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fmaxmag_184, "fmaxmag", "fmaxmag (_Float64x, char)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fmaxmag_185, "fmaxmag", "fmaxmag (_Float64x, signed char)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fmaxmag_186, "fmaxmag", "fmaxmag (_Float64x, unsigned char)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fmaxmag_187, "fmaxmag", "fmaxmag (_Float64x, short int)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fmaxmag_188, "fmaxmag", "fmaxmag (_Float64x, unsigned short int)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fmaxmag_189, "fmaxmag", "fmaxmag (_Float64x, int)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fmaxmag_190, "fmaxmag", "fmaxmag (_Float64x, unsigned int)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fmaxmag_191, "fmaxmag", "fmaxmag (_Float64x, long int)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fmaxmag_192, "fmaxmag", "fmaxmag (_Float64x, unsigned long int)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fmaxmag_193, "fmaxmag", "fmaxmag (_Float64x, long long int)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fmaxmag_194, "fmaxmag", "fmaxmag (_Float64x, unsigned long long int)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_fmaxmag_195, "fmaxmag", "fmaxmag (_Float64x, __int128)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_fmaxmag_196, "fmaxmag", "fmaxmag (_Float64x, unsigned __int128)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fmaxmag_197, "fmaxmag", "fmaxmag (_Float64x, enum e)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fmaxmag_198, "fmaxmag", "fmaxmag (_Float64x, _Bool)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fmaxmag_199, "fmaxmag", "fmaxmag (_Float64x, bit_field)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F16
    { test_fmaxmag_200, "fmaxmag", "fmaxmag (_Float128, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fmaxmag_201, "fmaxmag", "fmaxmag (_Float128, float)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F32
    { test_fmaxmag_202, "fmaxmag", "fmaxmag (_Float128, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
    { test_fmaxmag_203, "fmaxmag", "fmaxmag (_Float128, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fmaxmag_204, "fmaxmag", "fmaxmag (_Float128, double)", FLT128_MANT_DIG, 0 },
#endif
#if (LDBL_MANT_DIG != 106) && defined HUGE_VAL_F128
    { test_fmaxmag_205, "fmaxmag", "fmaxmag (_Float128, long double)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F64
    { test_fmaxmag_206, "fmaxmag", "fmaxmag (_Float128, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
    { test_fmaxmag_207, "fmaxmag", "fmaxmag (_Float128, _Float64x)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fmaxmag_208, "fmaxmag", "fmaxmag (_Float128, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fmaxmag_209, "fmaxmag", "fmaxmag (_Float128, char)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fmaxmag_210, "fmaxmag", "fmaxmag (_Float128, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fmaxmag_211, "fmaxmag", "fmaxmag (_Float128, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fmaxmag_212, "fmaxmag", "fmaxmag (_Float128, short int)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fmaxmag_213, "fmaxmag", "fmaxmag (_Float128, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fmaxmag_214, "fmaxmag", "fmaxmag (_Float128, int)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fmaxmag_215, "fmaxmag", "fmaxmag (_Float128, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fmaxmag_216, "fmaxmag", "fmaxmag (_Float128, long int)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fmaxmag_217, "fmaxmag", "fmaxmag (_Float128, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fmaxmag_218, "fmaxmag", "fmaxmag (_Float128, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fmaxmag_219, "fmaxmag", "fmaxmag (_Float128, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_fmaxmag_220, "fmaxmag", "fmaxmag (_Float128, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_fmaxmag_221, "fmaxmag", "fmaxmag (_Float128, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fmaxmag_222, "fmaxmag", "fmaxmag (_Float128, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fmaxmag_223, "fmaxmag", "fmaxmag (_Float128, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fmaxmag_224, "fmaxmag", "fmaxmag (_Float128, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_fmaxmag_225, "fmaxmag", "fmaxmag (char, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_fmaxmag_226, "fmaxmag", "fmaxmag (char, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_fmaxmag_227, "fmaxmag", "fmaxmag (char, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmaxmag_228, "fmaxmag", "fmaxmag (char, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_fmaxmag_229, "fmaxmag", "fmaxmag (char, double)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_230, "fmaxmag", "fmaxmag (char, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_fmaxmag_231, "fmaxmag", "fmaxmag (char, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fmaxmag_232, "fmaxmag", "fmaxmag (char, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fmaxmag_233, "fmaxmag", "fmaxmag (char, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_fmaxmag_234, "fmaxmag", "fmaxmag (char, char)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_235, "fmaxmag", "fmaxmag (char, signed char)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_236, "fmaxmag", "fmaxmag (char, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_237, "fmaxmag", "fmaxmag (char, short int)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_238, "fmaxmag", "fmaxmag (char, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_239, "fmaxmag", "fmaxmag (char, int)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_240, "fmaxmag", "fmaxmag (char, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_241, "fmaxmag", "fmaxmag (char, long int)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_242, "fmaxmag", "fmaxmag (char, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_243, "fmaxmag", "fmaxmag (char, long long int)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_244, "fmaxmag", "fmaxmag (char, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fmaxmag_245, "fmaxmag", "fmaxmag (char, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmaxmag_246, "fmaxmag", "fmaxmag (char, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fmaxmag_247, "fmaxmag", "fmaxmag (char, enum e)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_248, "fmaxmag", "fmaxmag (char, _Bool)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_249, "fmaxmag", "fmaxmag (char, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_fmaxmag_250, "fmaxmag", "fmaxmag (signed char, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_fmaxmag_251, "fmaxmag", "fmaxmag (signed char, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_fmaxmag_252, "fmaxmag", "fmaxmag (signed char, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmaxmag_253, "fmaxmag", "fmaxmag (signed char, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_fmaxmag_254, "fmaxmag", "fmaxmag (signed char, double)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_255, "fmaxmag", "fmaxmag (signed char, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_fmaxmag_256, "fmaxmag", "fmaxmag (signed char, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fmaxmag_257, "fmaxmag", "fmaxmag (signed char, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fmaxmag_258, "fmaxmag", "fmaxmag (signed char, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_fmaxmag_259, "fmaxmag", "fmaxmag (signed char, char)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_260, "fmaxmag", "fmaxmag (signed char, signed char)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_261, "fmaxmag", "fmaxmag (signed char, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_262, "fmaxmag", "fmaxmag (signed char, short int)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_263, "fmaxmag", "fmaxmag (signed char, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_264, "fmaxmag", "fmaxmag (signed char, int)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_265, "fmaxmag", "fmaxmag (signed char, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_266, "fmaxmag", "fmaxmag (signed char, long int)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_267, "fmaxmag", "fmaxmag (signed char, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_268, "fmaxmag", "fmaxmag (signed char, long long int)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_269, "fmaxmag", "fmaxmag (signed char, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fmaxmag_270, "fmaxmag", "fmaxmag (signed char, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmaxmag_271, "fmaxmag", "fmaxmag (signed char, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fmaxmag_272, "fmaxmag", "fmaxmag (signed char, enum e)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_273, "fmaxmag", "fmaxmag (signed char, _Bool)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_274, "fmaxmag", "fmaxmag (signed char, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_fmaxmag_275, "fmaxmag", "fmaxmag (unsigned char, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_fmaxmag_276, "fmaxmag", "fmaxmag (unsigned char, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_fmaxmag_277, "fmaxmag", "fmaxmag (unsigned char, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmaxmag_278, "fmaxmag", "fmaxmag (unsigned char, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_fmaxmag_279, "fmaxmag", "fmaxmag (unsigned char, double)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_280, "fmaxmag", "fmaxmag (unsigned char, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_fmaxmag_281, "fmaxmag", "fmaxmag (unsigned char, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fmaxmag_282, "fmaxmag", "fmaxmag (unsigned char, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fmaxmag_283, "fmaxmag", "fmaxmag (unsigned char, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_fmaxmag_284, "fmaxmag", "fmaxmag (unsigned char, char)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_285, "fmaxmag", "fmaxmag (unsigned char, signed char)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_286, "fmaxmag", "fmaxmag (unsigned char, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_287, "fmaxmag", "fmaxmag (unsigned char, short int)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_288, "fmaxmag", "fmaxmag (unsigned char, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_289, "fmaxmag", "fmaxmag (unsigned char, int)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_290, "fmaxmag", "fmaxmag (unsigned char, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_291, "fmaxmag", "fmaxmag (unsigned char, long int)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_292, "fmaxmag", "fmaxmag (unsigned char, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_293, "fmaxmag", "fmaxmag (unsigned char, long long int)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_294, "fmaxmag", "fmaxmag (unsigned char, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fmaxmag_295, "fmaxmag", "fmaxmag (unsigned char, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmaxmag_296, "fmaxmag", "fmaxmag (unsigned char, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fmaxmag_297, "fmaxmag", "fmaxmag (unsigned char, enum e)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_298, "fmaxmag", "fmaxmag (unsigned char, _Bool)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_299, "fmaxmag", "fmaxmag (unsigned char, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_fmaxmag_300, "fmaxmag", "fmaxmag (short int, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_fmaxmag_301, "fmaxmag", "fmaxmag (short int, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_fmaxmag_302, "fmaxmag", "fmaxmag (short int, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmaxmag_303, "fmaxmag", "fmaxmag (short int, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_fmaxmag_304, "fmaxmag", "fmaxmag (short int, double)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_305, "fmaxmag", "fmaxmag (short int, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_fmaxmag_306, "fmaxmag", "fmaxmag (short int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fmaxmag_307, "fmaxmag", "fmaxmag (short int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fmaxmag_308, "fmaxmag", "fmaxmag (short int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_fmaxmag_309, "fmaxmag", "fmaxmag (short int, char)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_310, "fmaxmag", "fmaxmag (short int, signed char)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_311, "fmaxmag", "fmaxmag (short int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_312, "fmaxmag", "fmaxmag (short int, short int)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_313, "fmaxmag", "fmaxmag (short int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_314, "fmaxmag", "fmaxmag (short int, int)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_315, "fmaxmag", "fmaxmag (short int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_316, "fmaxmag", "fmaxmag (short int, long int)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_317, "fmaxmag", "fmaxmag (short int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_318, "fmaxmag", "fmaxmag (short int, long long int)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_319, "fmaxmag", "fmaxmag (short int, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fmaxmag_320, "fmaxmag", "fmaxmag (short int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmaxmag_321, "fmaxmag", "fmaxmag (short int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fmaxmag_322, "fmaxmag", "fmaxmag (short int, enum e)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_323, "fmaxmag", "fmaxmag (short int, _Bool)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_324, "fmaxmag", "fmaxmag (short int, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_fmaxmag_325, "fmaxmag", "fmaxmag (unsigned short int, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_fmaxmag_326, "fmaxmag", "fmaxmag (unsigned short int, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_fmaxmag_327, "fmaxmag", "fmaxmag (unsigned short int, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmaxmag_328, "fmaxmag", "fmaxmag (unsigned short int, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_fmaxmag_329, "fmaxmag", "fmaxmag (unsigned short int, double)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_330, "fmaxmag", "fmaxmag (unsigned short int, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_fmaxmag_331, "fmaxmag", "fmaxmag (unsigned short int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fmaxmag_332, "fmaxmag", "fmaxmag (unsigned short int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fmaxmag_333, "fmaxmag", "fmaxmag (unsigned short int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_fmaxmag_334, "fmaxmag", "fmaxmag (unsigned short int, char)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_335, "fmaxmag", "fmaxmag (unsigned short int, signed char)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_336, "fmaxmag", "fmaxmag (unsigned short int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_337, "fmaxmag", "fmaxmag (unsigned short int, short int)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_338, "fmaxmag", "fmaxmag (unsigned short int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_339, "fmaxmag", "fmaxmag (unsigned short int, int)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_340, "fmaxmag", "fmaxmag (unsigned short int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_341, "fmaxmag", "fmaxmag (unsigned short int, long int)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_342, "fmaxmag", "fmaxmag (unsigned short int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_343, "fmaxmag", "fmaxmag (unsigned short int, long long int)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_344, "fmaxmag", "fmaxmag (unsigned short int, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fmaxmag_345, "fmaxmag", "fmaxmag (unsigned short int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmaxmag_346, "fmaxmag", "fmaxmag (unsigned short int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fmaxmag_347, "fmaxmag", "fmaxmag (unsigned short int, enum e)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_348, "fmaxmag", "fmaxmag (unsigned short int, _Bool)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_349, "fmaxmag", "fmaxmag (unsigned short int, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_fmaxmag_350, "fmaxmag", "fmaxmag (int, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_fmaxmag_351, "fmaxmag", "fmaxmag (int, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_fmaxmag_352, "fmaxmag", "fmaxmag (int, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmaxmag_353, "fmaxmag", "fmaxmag (int, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_fmaxmag_354, "fmaxmag", "fmaxmag (int, double)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_355, "fmaxmag", "fmaxmag (int, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_fmaxmag_356, "fmaxmag", "fmaxmag (int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fmaxmag_357, "fmaxmag", "fmaxmag (int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fmaxmag_358, "fmaxmag", "fmaxmag (int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_fmaxmag_359, "fmaxmag", "fmaxmag (int, char)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_360, "fmaxmag", "fmaxmag (int, signed char)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_361, "fmaxmag", "fmaxmag (int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_362, "fmaxmag", "fmaxmag (int, short int)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_363, "fmaxmag", "fmaxmag (int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_364, "fmaxmag", "fmaxmag (int, int)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_365, "fmaxmag", "fmaxmag (int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_366, "fmaxmag", "fmaxmag (int, long int)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_367, "fmaxmag", "fmaxmag (int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_368, "fmaxmag", "fmaxmag (int, long long int)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_369, "fmaxmag", "fmaxmag (int, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fmaxmag_370, "fmaxmag", "fmaxmag (int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmaxmag_371, "fmaxmag", "fmaxmag (int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fmaxmag_372, "fmaxmag", "fmaxmag (int, enum e)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_373, "fmaxmag", "fmaxmag (int, _Bool)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_374, "fmaxmag", "fmaxmag (int, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_fmaxmag_375, "fmaxmag", "fmaxmag (unsigned int, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_fmaxmag_376, "fmaxmag", "fmaxmag (unsigned int, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_fmaxmag_377, "fmaxmag", "fmaxmag (unsigned int, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmaxmag_378, "fmaxmag", "fmaxmag (unsigned int, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_fmaxmag_379, "fmaxmag", "fmaxmag (unsigned int, double)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_380, "fmaxmag", "fmaxmag (unsigned int, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_fmaxmag_381, "fmaxmag", "fmaxmag (unsigned int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fmaxmag_382, "fmaxmag", "fmaxmag (unsigned int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fmaxmag_383, "fmaxmag", "fmaxmag (unsigned int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_fmaxmag_384, "fmaxmag", "fmaxmag (unsigned int, char)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_385, "fmaxmag", "fmaxmag (unsigned int, signed char)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_386, "fmaxmag", "fmaxmag (unsigned int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_387, "fmaxmag", "fmaxmag (unsigned int, short int)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_388, "fmaxmag", "fmaxmag (unsigned int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_389, "fmaxmag", "fmaxmag (unsigned int, int)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_390, "fmaxmag", "fmaxmag (unsigned int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_391, "fmaxmag", "fmaxmag (unsigned int, long int)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_392, "fmaxmag", "fmaxmag (unsigned int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_393, "fmaxmag", "fmaxmag (unsigned int, long long int)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_394, "fmaxmag", "fmaxmag (unsigned int, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fmaxmag_395, "fmaxmag", "fmaxmag (unsigned int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmaxmag_396, "fmaxmag", "fmaxmag (unsigned int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fmaxmag_397, "fmaxmag", "fmaxmag (unsigned int, enum e)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_398, "fmaxmag", "fmaxmag (unsigned int, _Bool)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_399, "fmaxmag", "fmaxmag (unsigned int, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_fmaxmag_400, "fmaxmag", "fmaxmag (long int, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_fmaxmag_401, "fmaxmag", "fmaxmag (long int, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_fmaxmag_402, "fmaxmag", "fmaxmag (long int, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmaxmag_403, "fmaxmag", "fmaxmag (long int, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_fmaxmag_404, "fmaxmag", "fmaxmag (long int, double)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_405, "fmaxmag", "fmaxmag (long int, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_fmaxmag_406, "fmaxmag", "fmaxmag (long int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fmaxmag_407, "fmaxmag", "fmaxmag (long int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fmaxmag_408, "fmaxmag", "fmaxmag (long int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_fmaxmag_409, "fmaxmag", "fmaxmag (long int, char)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_410, "fmaxmag", "fmaxmag (long int, signed char)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_411, "fmaxmag", "fmaxmag (long int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_412, "fmaxmag", "fmaxmag (long int, short int)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_413, "fmaxmag", "fmaxmag (long int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_414, "fmaxmag", "fmaxmag (long int, int)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_415, "fmaxmag", "fmaxmag (long int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_416, "fmaxmag", "fmaxmag (long int, long int)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_417, "fmaxmag", "fmaxmag (long int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_418, "fmaxmag", "fmaxmag (long int, long long int)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_419, "fmaxmag", "fmaxmag (long int, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fmaxmag_420, "fmaxmag", "fmaxmag (long int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmaxmag_421, "fmaxmag", "fmaxmag (long int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fmaxmag_422, "fmaxmag", "fmaxmag (long int, enum e)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_423, "fmaxmag", "fmaxmag (long int, _Bool)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_424, "fmaxmag", "fmaxmag (long int, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_fmaxmag_425, "fmaxmag", "fmaxmag (unsigned long int, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_fmaxmag_426, "fmaxmag", "fmaxmag (unsigned long int, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_fmaxmag_427, "fmaxmag", "fmaxmag (unsigned long int, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmaxmag_428, "fmaxmag", "fmaxmag (unsigned long int, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_fmaxmag_429, "fmaxmag", "fmaxmag (unsigned long int, double)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_430, "fmaxmag", "fmaxmag (unsigned long int, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_fmaxmag_431, "fmaxmag", "fmaxmag (unsigned long int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fmaxmag_432, "fmaxmag", "fmaxmag (unsigned long int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fmaxmag_433, "fmaxmag", "fmaxmag (unsigned long int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_fmaxmag_434, "fmaxmag", "fmaxmag (unsigned long int, char)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_435, "fmaxmag", "fmaxmag (unsigned long int, signed char)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_436, "fmaxmag", "fmaxmag (unsigned long int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_437, "fmaxmag", "fmaxmag (unsigned long int, short int)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_438, "fmaxmag", "fmaxmag (unsigned long int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_439, "fmaxmag", "fmaxmag (unsigned long int, int)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_440, "fmaxmag", "fmaxmag (unsigned long int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_441, "fmaxmag", "fmaxmag (unsigned long int, long int)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_442, "fmaxmag", "fmaxmag (unsigned long int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_443, "fmaxmag", "fmaxmag (unsigned long int, long long int)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_444, "fmaxmag", "fmaxmag (unsigned long int, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fmaxmag_445, "fmaxmag", "fmaxmag (unsigned long int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmaxmag_446, "fmaxmag", "fmaxmag (unsigned long int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fmaxmag_447, "fmaxmag", "fmaxmag (unsigned long int, enum e)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_448, "fmaxmag", "fmaxmag (unsigned long int, _Bool)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_449, "fmaxmag", "fmaxmag (unsigned long int, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_fmaxmag_450, "fmaxmag", "fmaxmag (long long int, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_fmaxmag_451, "fmaxmag", "fmaxmag (long long int, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_fmaxmag_452, "fmaxmag", "fmaxmag (long long int, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmaxmag_453, "fmaxmag", "fmaxmag (long long int, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_fmaxmag_454, "fmaxmag", "fmaxmag (long long int, double)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_455, "fmaxmag", "fmaxmag (long long int, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_fmaxmag_456, "fmaxmag", "fmaxmag (long long int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fmaxmag_457, "fmaxmag", "fmaxmag (long long int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fmaxmag_458, "fmaxmag", "fmaxmag (long long int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_fmaxmag_459, "fmaxmag", "fmaxmag (long long int, char)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_460, "fmaxmag", "fmaxmag (long long int, signed char)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_461, "fmaxmag", "fmaxmag (long long int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_462, "fmaxmag", "fmaxmag (long long int, short int)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_463, "fmaxmag", "fmaxmag (long long int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_464, "fmaxmag", "fmaxmag (long long int, int)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_465, "fmaxmag", "fmaxmag (long long int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_466, "fmaxmag", "fmaxmag (long long int, long int)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_467, "fmaxmag", "fmaxmag (long long int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_468, "fmaxmag", "fmaxmag (long long int, long long int)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_469, "fmaxmag", "fmaxmag (long long int, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fmaxmag_470, "fmaxmag", "fmaxmag (long long int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmaxmag_471, "fmaxmag", "fmaxmag (long long int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fmaxmag_472, "fmaxmag", "fmaxmag (long long int, enum e)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_473, "fmaxmag", "fmaxmag (long long int, _Bool)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_474, "fmaxmag", "fmaxmag (long long int, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_fmaxmag_475, "fmaxmag", "fmaxmag (unsigned long long int, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_fmaxmag_476, "fmaxmag", "fmaxmag (unsigned long long int, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_fmaxmag_477, "fmaxmag", "fmaxmag (unsigned long long int, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmaxmag_478, "fmaxmag", "fmaxmag (unsigned long long int, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_fmaxmag_479, "fmaxmag", "fmaxmag (unsigned long long int, double)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_480, "fmaxmag", "fmaxmag (unsigned long long int, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_fmaxmag_481, "fmaxmag", "fmaxmag (unsigned long long int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fmaxmag_482, "fmaxmag", "fmaxmag (unsigned long long int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fmaxmag_483, "fmaxmag", "fmaxmag (unsigned long long int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_fmaxmag_484, "fmaxmag", "fmaxmag (unsigned long long int, char)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_485, "fmaxmag", "fmaxmag (unsigned long long int, signed char)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_486, "fmaxmag", "fmaxmag (unsigned long long int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_487, "fmaxmag", "fmaxmag (unsigned long long int, short int)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_488, "fmaxmag", "fmaxmag (unsigned long long int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_489, "fmaxmag", "fmaxmag (unsigned long long int, int)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_490, "fmaxmag", "fmaxmag (unsigned long long int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_491, "fmaxmag", "fmaxmag (unsigned long long int, long int)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_492, "fmaxmag", "fmaxmag (unsigned long long int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_493, "fmaxmag", "fmaxmag (unsigned long long int, long long int)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_494, "fmaxmag", "fmaxmag (unsigned long long int, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fmaxmag_495, "fmaxmag", "fmaxmag (unsigned long long int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmaxmag_496, "fmaxmag", "fmaxmag (unsigned long long int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fmaxmag_497, "fmaxmag", "fmaxmag (unsigned long long int, enum e)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_498, "fmaxmag", "fmaxmag (unsigned long long int, _Bool)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_499, "fmaxmag", "fmaxmag (unsigned long long int, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_fmaxmag_500, "fmaxmag", "fmaxmag (__int128, _Float16)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmaxmag_501, "fmaxmag", "fmaxmag (__int128, float)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_fmaxmag_502, "fmaxmag", "fmaxmag (__int128, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_fmaxmag_503, "fmaxmag", "fmaxmag (__int128, _Float32x)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmaxmag_504, "fmaxmag", "fmaxmag (__int128, double)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmaxmag_505, "fmaxmag", "fmaxmag (__int128, long double)", LDBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_fmaxmag_506, "fmaxmag", "fmaxmag (__int128, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_fmaxmag_507, "fmaxmag", "fmaxmag (__int128, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_fmaxmag_508, "fmaxmag", "fmaxmag (__int128, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmaxmag_509, "fmaxmag", "fmaxmag (__int128, char)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmaxmag_510, "fmaxmag", "fmaxmag (__int128, signed char)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmaxmag_511, "fmaxmag", "fmaxmag (__int128, unsigned char)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmaxmag_512, "fmaxmag", "fmaxmag (__int128, short int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmaxmag_513, "fmaxmag", "fmaxmag (__int128, unsigned short int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmaxmag_514, "fmaxmag", "fmaxmag (__int128, int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmaxmag_515, "fmaxmag", "fmaxmag (__int128, unsigned int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmaxmag_516, "fmaxmag", "fmaxmag (__int128, long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmaxmag_517, "fmaxmag", "fmaxmag (__int128, unsigned long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmaxmag_518, "fmaxmag", "fmaxmag (__int128, long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmaxmag_519, "fmaxmag", "fmaxmag (__int128, unsigned long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmaxmag_520, "fmaxmag", "fmaxmag (__int128, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmaxmag_521, "fmaxmag", "fmaxmag (__int128, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmaxmag_522, "fmaxmag", "fmaxmag (__int128, enum e)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmaxmag_523, "fmaxmag", "fmaxmag (__int128, _Bool)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmaxmag_524, "fmaxmag", "fmaxmag (__int128, bit_field)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_fmaxmag_525, "fmaxmag", "fmaxmag (unsigned __int128, _Float16)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmaxmag_526, "fmaxmag", "fmaxmag (unsigned __int128, float)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_fmaxmag_527, "fmaxmag", "fmaxmag (unsigned __int128, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_fmaxmag_528, "fmaxmag", "fmaxmag (unsigned __int128, _Float32x)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmaxmag_529, "fmaxmag", "fmaxmag (unsigned __int128, double)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmaxmag_530, "fmaxmag", "fmaxmag (unsigned __int128, long double)", LDBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_fmaxmag_531, "fmaxmag", "fmaxmag (unsigned __int128, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_fmaxmag_532, "fmaxmag", "fmaxmag (unsigned __int128, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_fmaxmag_533, "fmaxmag", "fmaxmag (unsigned __int128, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmaxmag_534, "fmaxmag", "fmaxmag (unsigned __int128, char)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmaxmag_535, "fmaxmag", "fmaxmag (unsigned __int128, signed char)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmaxmag_536, "fmaxmag", "fmaxmag (unsigned __int128, unsigned char)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmaxmag_537, "fmaxmag", "fmaxmag (unsigned __int128, short int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmaxmag_538, "fmaxmag", "fmaxmag (unsigned __int128, unsigned short int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmaxmag_539, "fmaxmag", "fmaxmag (unsigned __int128, int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmaxmag_540, "fmaxmag", "fmaxmag (unsigned __int128, unsigned int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmaxmag_541, "fmaxmag", "fmaxmag (unsigned __int128, long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmaxmag_542, "fmaxmag", "fmaxmag (unsigned __int128, unsigned long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmaxmag_543, "fmaxmag", "fmaxmag (unsigned __int128, long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmaxmag_544, "fmaxmag", "fmaxmag (unsigned __int128, unsigned long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmaxmag_545, "fmaxmag", "fmaxmag (unsigned __int128, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmaxmag_546, "fmaxmag", "fmaxmag (unsigned __int128, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmaxmag_547, "fmaxmag", "fmaxmag (unsigned __int128, enum e)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmaxmag_548, "fmaxmag", "fmaxmag (unsigned __int128, _Bool)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmaxmag_549, "fmaxmag", "fmaxmag (unsigned __int128, bit_field)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_fmaxmag_550, "fmaxmag", "fmaxmag (enum e, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_fmaxmag_551, "fmaxmag", "fmaxmag (enum e, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_fmaxmag_552, "fmaxmag", "fmaxmag (enum e, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmaxmag_553, "fmaxmag", "fmaxmag (enum e, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_fmaxmag_554, "fmaxmag", "fmaxmag (enum e, double)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_555, "fmaxmag", "fmaxmag (enum e, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_fmaxmag_556, "fmaxmag", "fmaxmag (enum e, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fmaxmag_557, "fmaxmag", "fmaxmag (enum e, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fmaxmag_558, "fmaxmag", "fmaxmag (enum e, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_fmaxmag_559, "fmaxmag", "fmaxmag (enum e, char)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_560, "fmaxmag", "fmaxmag (enum e, signed char)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_561, "fmaxmag", "fmaxmag (enum e, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_562, "fmaxmag", "fmaxmag (enum e, short int)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_563, "fmaxmag", "fmaxmag (enum e, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_564, "fmaxmag", "fmaxmag (enum e, int)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_565, "fmaxmag", "fmaxmag (enum e, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_566, "fmaxmag", "fmaxmag (enum e, long int)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_567, "fmaxmag", "fmaxmag (enum e, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_568, "fmaxmag", "fmaxmag (enum e, long long int)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_569, "fmaxmag", "fmaxmag (enum e, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fmaxmag_570, "fmaxmag", "fmaxmag (enum e, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmaxmag_571, "fmaxmag", "fmaxmag (enum e, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fmaxmag_572, "fmaxmag", "fmaxmag (enum e, enum e)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_573, "fmaxmag", "fmaxmag (enum e, _Bool)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_574, "fmaxmag", "fmaxmag (enum e, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_fmaxmag_575, "fmaxmag", "fmaxmag (_Bool, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_fmaxmag_576, "fmaxmag", "fmaxmag (_Bool, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_fmaxmag_577, "fmaxmag", "fmaxmag (_Bool, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmaxmag_578, "fmaxmag", "fmaxmag (_Bool, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_fmaxmag_579, "fmaxmag", "fmaxmag (_Bool, double)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_580, "fmaxmag", "fmaxmag (_Bool, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_fmaxmag_581, "fmaxmag", "fmaxmag (_Bool, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fmaxmag_582, "fmaxmag", "fmaxmag (_Bool, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fmaxmag_583, "fmaxmag", "fmaxmag (_Bool, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_fmaxmag_584, "fmaxmag", "fmaxmag (_Bool, char)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_585, "fmaxmag", "fmaxmag (_Bool, signed char)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_586, "fmaxmag", "fmaxmag (_Bool, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_587, "fmaxmag", "fmaxmag (_Bool, short int)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_588, "fmaxmag", "fmaxmag (_Bool, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_589, "fmaxmag", "fmaxmag (_Bool, int)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_590, "fmaxmag", "fmaxmag (_Bool, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_591, "fmaxmag", "fmaxmag (_Bool, long int)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_592, "fmaxmag", "fmaxmag (_Bool, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_593, "fmaxmag", "fmaxmag (_Bool, long long int)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_594, "fmaxmag", "fmaxmag (_Bool, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fmaxmag_595, "fmaxmag", "fmaxmag (_Bool, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmaxmag_596, "fmaxmag", "fmaxmag (_Bool, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fmaxmag_597, "fmaxmag", "fmaxmag (_Bool, enum e)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_598, "fmaxmag", "fmaxmag (_Bool, _Bool)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_599, "fmaxmag", "fmaxmag (_Bool, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_fmaxmag_600, "fmaxmag", "fmaxmag (bit_field, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_fmaxmag_601, "fmaxmag", "fmaxmag (bit_field, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_fmaxmag_602, "fmaxmag", "fmaxmag (bit_field, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmaxmag_603, "fmaxmag", "fmaxmag (bit_field, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_fmaxmag_604, "fmaxmag", "fmaxmag (bit_field, double)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_605, "fmaxmag", "fmaxmag (bit_field, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_fmaxmag_606, "fmaxmag", "fmaxmag (bit_field, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fmaxmag_607, "fmaxmag", "fmaxmag (bit_field, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fmaxmag_608, "fmaxmag", "fmaxmag (bit_field, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_fmaxmag_609, "fmaxmag", "fmaxmag (bit_field, char)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_610, "fmaxmag", "fmaxmag (bit_field, signed char)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_611, "fmaxmag", "fmaxmag (bit_field, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_612, "fmaxmag", "fmaxmag (bit_field, short int)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_613, "fmaxmag", "fmaxmag (bit_field, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_614, "fmaxmag", "fmaxmag (bit_field, int)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_615, "fmaxmag", "fmaxmag (bit_field, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_616, "fmaxmag", "fmaxmag (bit_field, long int)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_617, "fmaxmag", "fmaxmag (bit_field, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_618, "fmaxmag", "fmaxmag (bit_field, long long int)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_619, "fmaxmag", "fmaxmag (bit_field, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fmaxmag_620, "fmaxmag", "fmaxmag (bit_field, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmaxmag_621, "fmaxmag", "fmaxmag (bit_field, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fmaxmag_622, "fmaxmag", "fmaxmag (bit_field, enum e)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_623, "fmaxmag", "fmaxmag (bit_field, _Bool)", DBL_MANT_DIG, 0 },
    { test_fmaxmag_624, "fmaxmag", "fmaxmag (bit_field, bit_field)", DBL_MANT_DIG, 0 },
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
