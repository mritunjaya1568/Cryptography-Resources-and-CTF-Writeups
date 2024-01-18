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
(atan2f16) (_Float16 arg0 __attribute__ ((unused)), _Float16 arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT16_MANT_DIG;
  called_func_name = "atan2";
  return 0;
}
#endif
float
(atan2f) (float arg0 __attribute__ ((unused)), float arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT_MANT_DIG;
  called_func_name = "atan2";
  return 0;
}
#if defined HUGE_VAL_F32
_Float32
(atan2f32) (_Float32 arg0 __attribute__ ((unused)), _Float32 arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT32_MANT_DIG;
  called_func_name = "atan2";
  return 0;
}
#endif
#if defined HUGE_VAL_F32X
_Float32x
(atan2f32x) (_Float32x arg0 __attribute__ ((unused)), _Float32x arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT32X_MANT_DIG;
  called_func_name = "atan2";
  return 0;
}
#endif
double
(atan2) (double arg0 __attribute__ ((unused)), double arg1 __attribute__ ((unused)))
{
  called_mant_dig = DBL_MANT_DIG;
  called_func_name = "atan2";
  return 0;
}
long double
(atan2l) (long double arg0 __attribute__ ((unused)), long double arg1 __attribute__ ((unused)))
{
  called_mant_dig = LDBL_MANT_DIG;
  called_func_name = "atan2";
  return 0;
}
#if defined HUGE_VAL_F64
_Float64
(atan2f64) (_Float64 arg0 __attribute__ ((unused)), _Float64 arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT64_MANT_DIG;
  called_func_name = "atan2";
  return 0;
}
#endif
#if defined HUGE_VAL_F64X
_Float64x
(atan2f64x) (_Float64x arg0 __attribute__ ((unused)), _Float64x arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT64X_MANT_DIG;
  called_func_name = "atan2";
  return 0;
}
#endif
#if defined HUGE_VAL_F128
_Float128
(atan2f128) (_Float128 arg0 __attribute__ ((unused)), _Float128 arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT128_MANT_DIG;
  called_func_name = "atan2";
  return 0;
}
#endif
#if defined HUGE_VAL_F16
static void
test_atan2_0 (void)
{
  extern typeof (atan2 (vol_var__Float16, vol_var__Float16)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = atan2 (vol_var__Float16, vol_var__Float16);
}
#endif
#if defined HUGE_VAL_F16
static void
test_atan2_1 (void)
{
  extern typeof (atan2 (vol_var__Float16, vol_var_float)) var_float __attribute__ ((unused));
  vol_var_float = atan2 (vol_var__Float16, vol_var_float);
}
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F32
static void
test_atan2_2 (void)
{
  extern typeof (atan2 (vol_var__Float16, vol_var__Float32)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = atan2 (vol_var__Float16, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
static void
test_atan2_3 (void)
{
  extern typeof (atan2 (vol_var__Float16, vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = atan2 (vol_var__Float16, vol_var__Float32x);
}
#endif
#if defined HUGE_VAL_F16
static void
test_atan2_4 (void)
{
  extern typeof (atan2 (vol_var__Float16, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var__Float16, vol_var_double);
}
#endif
#if defined HUGE_VAL_F16
static void
test_atan2_5 (void)
{
  extern typeof (atan2 (vol_var__Float16, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = atan2 (vol_var__Float16, vol_var_long_double);
}
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F64
static void
test_atan2_6 (void)
{
  extern typeof (atan2 (vol_var__Float16, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = atan2 (vol_var__Float16, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
static void
test_atan2_7 (void)
{
  extern typeof (atan2 (vol_var__Float16, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = atan2 (vol_var__Float16, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F16
static void
test_atan2_8 (void)
{
  extern typeof (atan2 (vol_var__Float16, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = atan2 (vol_var__Float16, vol_var__Float128);
}
#endif
#if defined HUGE_VAL_F16
static void
test_atan2_9 (void)
{
  extern typeof (atan2 (vol_var__Float16, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var__Float16, vol_var_char);
}
#endif
#if defined HUGE_VAL_F16
static void
test_atan2_10 (void)
{
  extern typeof (atan2 (vol_var__Float16, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var__Float16, vol_var_signed_char);
}
#endif
#if defined HUGE_VAL_F16
static void
test_atan2_11 (void)
{
  extern typeof (atan2 (vol_var__Float16, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var__Float16, vol_var_unsigned_char);
}
#endif
#if defined HUGE_VAL_F16
static void
test_atan2_12 (void)
{
  extern typeof (atan2 (vol_var__Float16, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var__Float16, vol_var_short_int);
}
#endif
#if defined HUGE_VAL_F16
static void
test_atan2_13 (void)
{
  extern typeof (atan2 (vol_var__Float16, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var__Float16, vol_var_unsigned_short_int);
}
#endif
#if defined HUGE_VAL_F16
static void
test_atan2_14 (void)
{
  extern typeof (atan2 (vol_var__Float16, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var__Float16, vol_var_int);
}
#endif
#if defined HUGE_VAL_F16
static void
test_atan2_15 (void)
{
  extern typeof (atan2 (vol_var__Float16, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var__Float16, vol_var_unsigned_int);
}
#endif
#if defined HUGE_VAL_F16
static void
test_atan2_16 (void)
{
  extern typeof (atan2 (vol_var__Float16, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var__Float16, vol_var_long_int);
}
#endif
#if defined HUGE_VAL_F16
static void
test_atan2_17 (void)
{
  extern typeof (atan2 (vol_var__Float16, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var__Float16, vol_var_unsigned_long_int);
}
#endif
#if defined HUGE_VAL_F16
static void
test_atan2_18 (void)
{
  extern typeof (atan2 (vol_var__Float16, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var__Float16, vol_var_long_long_int);
}
#endif
#if defined HUGE_VAL_F16
static void
test_atan2_19 (void)
{
  extern typeof (atan2 (vol_var__Float16, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var__Float16, vol_var_unsigned_long_long_int);
}
#endif
#if defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_atan2_20 (void)
{
  extern typeof (atan2 (vol_var__Float16, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var__Float16, vol_var___int128);
}
#endif
#if defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_atan2_21 (void)
{
  extern typeof (atan2 (vol_var__Float16, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var__Float16, vol_var_unsigned___int128);
}
#endif
#if defined HUGE_VAL_F16
static void
test_atan2_22 (void)
{
  extern typeof (atan2 (vol_var__Float16, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var__Float16, vol_var_enum_e);
}
#endif
#if defined HUGE_VAL_F16
static void
test_atan2_23 (void)
{
  extern typeof (atan2 (vol_var__Float16, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var__Float16, vol_var__Bool);
}
#endif
#if defined HUGE_VAL_F16
static void
test_atan2_24 (void)
{
  extern typeof (atan2 (vol_var__Float16, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var__Float16, vol_var_bit_field);
}
#endif
#if defined HUGE_VAL_F16
static void
test_atan2_25 (void)
{
  extern typeof (atan2 (vol_var_float, vol_var__Float16)) var_float __attribute__ ((unused));
  vol_var_float = atan2 (vol_var_float, vol_var__Float16);
}
#endif
static void
test_atan2_26 (void)
{
  extern typeof (atan2 (vol_var_float, vol_var_float)) var_float __attribute__ ((unused));
  vol_var_float = atan2 (vol_var_float, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_atan2_27 (void)
{
  extern typeof (atan2 (vol_var_float, vol_var__Float32)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = atan2 (vol_var_float, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_atan2_28 (void)
{
  extern typeof (atan2 (vol_var_float, vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = atan2 (vol_var_float, vol_var__Float32x);
}
#endif
static void
test_atan2_29 (void)
{
  extern typeof (atan2 (vol_var_float, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_float, vol_var_double);
}
static void
test_atan2_30 (void)
{
  extern typeof (atan2 (vol_var_float, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = atan2 (vol_var_float, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_atan2_31 (void)
{
  extern typeof (atan2 (vol_var_float, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = atan2 (vol_var_float, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_atan2_32 (void)
{
  extern typeof (atan2 (vol_var_float, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = atan2 (vol_var_float, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_atan2_33 (void)
{
  extern typeof (atan2 (vol_var_float, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = atan2 (vol_var_float, vol_var__Float128);
}
#endif
static void
test_atan2_34 (void)
{
  extern typeof (atan2 (vol_var_float, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_float, vol_var_char);
}
static void
test_atan2_35 (void)
{
  extern typeof (atan2 (vol_var_float, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_float, vol_var_signed_char);
}
static void
test_atan2_36 (void)
{
  extern typeof (atan2 (vol_var_float, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_float, vol_var_unsigned_char);
}
static void
test_atan2_37 (void)
{
  extern typeof (atan2 (vol_var_float, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_float, vol_var_short_int);
}
static void
test_atan2_38 (void)
{
  extern typeof (atan2 (vol_var_float, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_float, vol_var_unsigned_short_int);
}
static void
test_atan2_39 (void)
{
  extern typeof (atan2 (vol_var_float, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_float, vol_var_int);
}
static void
test_atan2_40 (void)
{
  extern typeof (atan2 (vol_var_float, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_float, vol_var_unsigned_int);
}
static void
test_atan2_41 (void)
{
  extern typeof (atan2 (vol_var_float, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_float, vol_var_long_int);
}
static void
test_atan2_42 (void)
{
  extern typeof (atan2 (vol_var_float, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_float, vol_var_unsigned_long_int);
}
static void
test_atan2_43 (void)
{
  extern typeof (atan2 (vol_var_float, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_float, vol_var_long_long_int);
}
static void
test_atan2_44 (void)
{
  extern typeof (atan2 (vol_var_float, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_float, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_atan2_45 (void)
{
  extern typeof (atan2 (vol_var_float, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_float, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_atan2_46 (void)
{
  extern typeof (atan2 (vol_var_float, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_float, vol_var_unsigned___int128);
}
#endif
static void
test_atan2_47 (void)
{
  extern typeof (atan2 (vol_var_float, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_float, vol_var_enum_e);
}
static void
test_atan2_48 (void)
{
  extern typeof (atan2 (vol_var_float, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_float, vol_var__Bool);
}
static void
test_atan2_49 (void)
{
  extern typeof (atan2 (vol_var_float, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_float, vol_var_bit_field);
}
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F32
static void
test_atan2_50 (void)
{
  extern typeof (atan2 (vol_var__Float32, vol_var__Float16)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = atan2 (vol_var__Float32, vol_var__Float16);
}
#endif
#if defined HUGE_VAL_F32
static void
test_atan2_51 (void)
{
  extern typeof (atan2 (vol_var__Float32, vol_var_float)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = atan2 (vol_var__Float32, vol_var_float);
}
#endif
#if defined HUGE_VAL_F32
static void
test_atan2_52 (void)
{
  extern typeof (atan2 (vol_var__Float32, vol_var__Float32)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = atan2 (vol_var__Float32, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
static void
test_atan2_53 (void)
{
  extern typeof (atan2 (vol_var__Float32, vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = atan2 (vol_var__Float32, vol_var__Float32x);
}
#endif
#if defined HUGE_VAL_F32
static void
test_atan2_54 (void)
{
  extern typeof (atan2 (vol_var__Float32, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var__Float32, vol_var_double);
}
#endif
#if defined HUGE_VAL_F32
static void
test_atan2_55 (void)
{
  extern typeof (atan2 (vol_var__Float32, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = atan2 (vol_var__Float32, vol_var_long_double);
}
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F64
static void
test_atan2_56 (void)
{
  extern typeof (atan2 (vol_var__Float32, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = atan2 (vol_var__Float32, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
static void
test_atan2_57 (void)
{
  extern typeof (atan2 (vol_var__Float32, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = atan2 (vol_var__Float32, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F32
static void
test_atan2_58 (void)
{
  extern typeof (atan2 (vol_var__Float32, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = atan2 (vol_var__Float32, vol_var__Float128);
}
#endif
#if defined HUGE_VAL_F32
static void
test_atan2_59 (void)
{
  extern typeof (atan2 (vol_var__Float32, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var__Float32, vol_var_char);
}
#endif
#if defined HUGE_VAL_F32
static void
test_atan2_60 (void)
{
  extern typeof (atan2 (vol_var__Float32, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var__Float32, vol_var_signed_char);
}
#endif
#if defined HUGE_VAL_F32
static void
test_atan2_61 (void)
{
  extern typeof (atan2 (vol_var__Float32, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var__Float32, vol_var_unsigned_char);
}
#endif
#if defined HUGE_VAL_F32
static void
test_atan2_62 (void)
{
  extern typeof (atan2 (vol_var__Float32, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var__Float32, vol_var_short_int);
}
#endif
#if defined HUGE_VAL_F32
static void
test_atan2_63 (void)
{
  extern typeof (atan2 (vol_var__Float32, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var__Float32, vol_var_unsigned_short_int);
}
#endif
#if defined HUGE_VAL_F32
static void
test_atan2_64 (void)
{
  extern typeof (atan2 (vol_var__Float32, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var__Float32, vol_var_int);
}
#endif
#if defined HUGE_VAL_F32
static void
test_atan2_65 (void)
{
  extern typeof (atan2 (vol_var__Float32, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var__Float32, vol_var_unsigned_int);
}
#endif
#if defined HUGE_VAL_F32
static void
test_atan2_66 (void)
{
  extern typeof (atan2 (vol_var__Float32, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var__Float32, vol_var_long_int);
}
#endif
#if defined HUGE_VAL_F32
static void
test_atan2_67 (void)
{
  extern typeof (atan2 (vol_var__Float32, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var__Float32, vol_var_unsigned_long_int);
}
#endif
#if defined HUGE_VAL_F32
static void
test_atan2_68 (void)
{
  extern typeof (atan2 (vol_var__Float32, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var__Float32, vol_var_long_long_int);
}
#endif
#if defined HUGE_VAL_F32
static void
test_atan2_69 (void)
{
  extern typeof (atan2 (vol_var__Float32, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var__Float32, vol_var_unsigned_long_long_int);
}
#endif
#if defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_atan2_70 (void)
{
  extern typeof (atan2 (vol_var__Float32, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var__Float32, vol_var___int128);
}
#endif
#if defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_atan2_71 (void)
{
  extern typeof (atan2 (vol_var__Float32, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var__Float32, vol_var_unsigned___int128);
}
#endif
#if defined HUGE_VAL_F32
static void
test_atan2_72 (void)
{
  extern typeof (atan2 (vol_var__Float32, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var__Float32, vol_var_enum_e);
}
#endif
#if defined HUGE_VAL_F32
static void
test_atan2_73 (void)
{
  extern typeof (atan2 (vol_var__Float32, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var__Float32, vol_var__Bool);
}
#endif
#if defined HUGE_VAL_F32
static void
test_atan2_74 (void)
{
  extern typeof (atan2 (vol_var__Float32, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var__Float32, vol_var_bit_field);
}
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
static void
test_atan2_75 (void)
{
  extern typeof (atan2 (vol_var__Float32x, vol_var__Float16)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = atan2 (vol_var__Float32x, vol_var__Float16);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_atan2_76 (void)
{
  extern typeof (atan2 (vol_var__Float32x, vol_var_float)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = atan2 (vol_var__Float32x, vol_var_float);
}
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
static void
test_atan2_77 (void)
{
  extern typeof (atan2 (vol_var__Float32x, vol_var__Float32)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = atan2 (vol_var__Float32x, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_atan2_78 (void)
{
  extern typeof (atan2 (vol_var__Float32x, vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = atan2 (vol_var__Float32x, vol_var__Float32x);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_atan2_79 (void)
{
  extern typeof (atan2 (vol_var__Float32x, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var__Float32x, vol_var_double);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_atan2_80 (void)
{
  extern typeof (atan2 (vol_var__Float32x, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = atan2 (vol_var__Float32x, vol_var_long_double);
}
#endif
#if defined HUGE_VAL_F32X && defined HUGE_VAL_F64
static void
test_atan2_81 (void)
{
  extern typeof (atan2 (vol_var__Float32x, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = atan2 (vol_var__Float32x, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
static void
test_atan2_82 (void)
{
  extern typeof (atan2 (vol_var__Float32x, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = atan2 (vol_var__Float32x, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
static void
test_atan2_83 (void)
{
  extern typeof (atan2 (vol_var__Float32x, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = atan2 (vol_var__Float32x, vol_var__Float128);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_atan2_84 (void)
{
  extern typeof (atan2 (vol_var__Float32x, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var__Float32x, vol_var_char);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_atan2_85 (void)
{
  extern typeof (atan2 (vol_var__Float32x, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var__Float32x, vol_var_signed_char);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_atan2_86 (void)
{
  extern typeof (atan2 (vol_var__Float32x, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var__Float32x, vol_var_unsigned_char);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_atan2_87 (void)
{
  extern typeof (atan2 (vol_var__Float32x, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var__Float32x, vol_var_short_int);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_atan2_88 (void)
{
  extern typeof (atan2 (vol_var__Float32x, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var__Float32x, vol_var_unsigned_short_int);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_atan2_89 (void)
{
  extern typeof (atan2 (vol_var__Float32x, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var__Float32x, vol_var_int);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_atan2_90 (void)
{
  extern typeof (atan2 (vol_var__Float32x, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var__Float32x, vol_var_unsigned_int);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_atan2_91 (void)
{
  extern typeof (atan2 (vol_var__Float32x, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var__Float32x, vol_var_long_int);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_atan2_92 (void)
{
  extern typeof (atan2 (vol_var__Float32x, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var__Float32x, vol_var_unsigned_long_int);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_atan2_93 (void)
{
  extern typeof (atan2 (vol_var__Float32x, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var__Float32x, vol_var_long_long_int);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_atan2_94 (void)
{
  extern typeof (atan2 (vol_var__Float32x, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var__Float32x, vol_var_unsigned_long_long_int);
}
#endif
#if defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_atan2_95 (void)
{
  extern typeof (atan2 (vol_var__Float32x, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var__Float32x, vol_var___int128);
}
#endif
#if defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_atan2_96 (void)
{
  extern typeof (atan2 (vol_var__Float32x, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var__Float32x, vol_var_unsigned___int128);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_atan2_97 (void)
{
  extern typeof (atan2 (vol_var__Float32x, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var__Float32x, vol_var_enum_e);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_atan2_98 (void)
{
  extern typeof (atan2 (vol_var__Float32x, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var__Float32x, vol_var__Bool);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_atan2_99 (void)
{
  extern typeof (atan2 (vol_var__Float32x, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var__Float32x, vol_var_bit_field);
}
#endif
#if defined HUGE_VAL_F16
static void
test_atan2_100 (void)
{
  extern typeof (atan2 (vol_var_double, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_double, vol_var__Float16);
}
#endif
static void
test_atan2_101 (void)
{
  extern typeof (atan2 (vol_var_double, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_double, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_atan2_102 (void)
{
  extern typeof (atan2 (vol_var_double, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_double, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_atan2_103 (void)
{
  extern typeof (atan2 (vol_var_double, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_double, vol_var__Float32x);
}
#endif
static void
test_atan2_104 (void)
{
  extern typeof (atan2 (vol_var_double, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_double, vol_var_double);
}
static void
test_atan2_105 (void)
{
  extern typeof (atan2 (vol_var_double, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = atan2 (vol_var_double, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_atan2_106 (void)
{
  extern typeof (atan2 (vol_var_double, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = atan2 (vol_var_double, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_atan2_107 (void)
{
  extern typeof (atan2 (vol_var_double, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = atan2 (vol_var_double, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_atan2_108 (void)
{
  extern typeof (atan2 (vol_var_double, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = atan2 (vol_var_double, vol_var__Float128);
}
#endif
static void
test_atan2_109 (void)
{
  extern typeof (atan2 (vol_var_double, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_double, vol_var_char);
}
static void
test_atan2_110 (void)
{
  extern typeof (atan2 (vol_var_double, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_double, vol_var_signed_char);
}
static void
test_atan2_111 (void)
{
  extern typeof (atan2 (vol_var_double, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_double, vol_var_unsigned_char);
}
static void
test_atan2_112 (void)
{
  extern typeof (atan2 (vol_var_double, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_double, vol_var_short_int);
}
static void
test_atan2_113 (void)
{
  extern typeof (atan2 (vol_var_double, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_double, vol_var_unsigned_short_int);
}
static void
test_atan2_114 (void)
{
  extern typeof (atan2 (vol_var_double, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_double, vol_var_int);
}
static void
test_atan2_115 (void)
{
  extern typeof (atan2 (vol_var_double, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_double, vol_var_unsigned_int);
}
static void
test_atan2_116 (void)
{
  extern typeof (atan2 (vol_var_double, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_double, vol_var_long_int);
}
static void
test_atan2_117 (void)
{
  extern typeof (atan2 (vol_var_double, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_double, vol_var_unsigned_long_int);
}
static void
test_atan2_118 (void)
{
  extern typeof (atan2 (vol_var_double, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_double, vol_var_long_long_int);
}
static void
test_atan2_119 (void)
{
  extern typeof (atan2 (vol_var_double, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_double, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_atan2_120 (void)
{
  extern typeof (atan2 (vol_var_double, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_double, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_atan2_121 (void)
{
  extern typeof (atan2 (vol_var_double, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_double, vol_var_unsigned___int128);
}
#endif
static void
test_atan2_122 (void)
{
  extern typeof (atan2 (vol_var_double, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_double, vol_var_enum_e);
}
static void
test_atan2_123 (void)
{
  extern typeof (atan2 (vol_var_double, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_double, vol_var__Bool);
}
static void
test_atan2_124 (void)
{
  extern typeof (atan2 (vol_var_double, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_double, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_atan2_125 (void)
{
  extern typeof (atan2 (vol_var_long_double, vol_var__Float16)) var_long_double __attribute__ ((unused));
  vol_var_long_double = atan2 (vol_var_long_double, vol_var__Float16);
}
#endif
static void
test_atan2_126 (void)
{
  extern typeof (atan2 (vol_var_long_double, vol_var_float)) var_long_double __attribute__ ((unused));
  vol_var_long_double = atan2 (vol_var_long_double, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_atan2_127 (void)
{
  extern typeof (atan2 (vol_var_long_double, vol_var__Float32)) var_long_double __attribute__ ((unused));
  vol_var_long_double = atan2 (vol_var_long_double, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_atan2_128 (void)
{
  extern typeof (atan2 (vol_var_long_double, vol_var__Float32x)) var_long_double __attribute__ ((unused));
  vol_var_long_double = atan2 (vol_var_long_double, vol_var__Float32x);
}
#endif
static void
test_atan2_129 (void)
{
  extern typeof (atan2 (vol_var_long_double, vol_var_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = atan2 (vol_var_long_double, vol_var_double);
}
static void
test_atan2_130 (void)
{
  extern typeof (atan2 (vol_var_long_double, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = atan2 (vol_var_long_double, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_atan2_131 (void)
{
  extern typeof (atan2 (vol_var_long_double, vol_var__Float64)) var_long_double_Float64 __attribute__ ((unused));
  vol_var_long_double_Float64 = atan2 (vol_var_long_double, vol_var__Float64);
}
#endif
#if (LDBL_MANT_DIG != 106) && defined HUGE_VAL_F64X
static void
test_atan2_132 (void)
{
  extern typeof (atan2 (vol_var_long_double, vol_var__Float64x)) var_long_double_Float64x __attribute__ ((unused));
  vol_var_long_double_Float64x = atan2 (vol_var_long_double, vol_var__Float64x);
}
#endif
#if (LDBL_MANT_DIG != 106) && defined HUGE_VAL_F128
static void
test_atan2_133 (void)
{
  extern typeof (atan2 (vol_var_long_double, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = atan2 (vol_var_long_double, vol_var__Float128);
}
#endif
static void
test_atan2_134 (void)
{
  extern typeof (atan2 (vol_var_long_double, vol_var_char)) var_long_double __attribute__ ((unused));
  vol_var_long_double = atan2 (vol_var_long_double, vol_var_char);
}
static void
test_atan2_135 (void)
{
  extern typeof (atan2 (vol_var_long_double, vol_var_signed_char)) var_long_double __attribute__ ((unused));
  vol_var_long_double = atan2 (vol_var_long_double, vol_var_signed_char);
}
static void
test_atan2_136 (void)
{
  extern typeof (atan2 (vol_var_long_double, vol_var_unsigned_char)) var_long_double __attribute__ ((unused));
  vol_var_long_double = atan2 (vol_var_long_double, vol_var_unsigned_char);
}
static void
test_atan2_137 (void)
{
  extern typeof (atan2 (vol_var_long_double, vol_var_short_int)) var_long_double __attribute__ ((unused));
  vol_var_long_double = atan2 (vol_var_long_double, vol_var_short_int);
}
static void
test_atan2_138 (void)
{
  extern typeof (atan2 (vol_var_long_double, vol_var_unsigned_short_int)) var_long_double __attribute__ ((unused));
  vol_var_long_double = atan2 (vol_var_long_double, vol_var_unsigned_short_int);
}
static void
test_atan2_139 (void)
{
  extern typeof (atan2 (vol_var_long_double, vol_var_int)) var_long_double __attribute__ ((unused));
  vol_var_long_double = atan2 (vol_var_long_double, vol_var_int);
}
static void
test_atan2_140 (void)
{
  extern typeof (atan2 (vol_var_long_double, vol_var_unsigned_int)) var_long_double __attribute__ ((unused));
  vol_var_long_double = atan2 (vol_var_long_double, vol_var_unsigned_int);
}
static void
test_atan2_141 (void)
{
  extern typeof (atan2 (vol_var_long_double, vol_var_long_int)) var_long_double __attribute__ ((unused));
  vol_var_long_double = atan2 (vol_var_long_double, vol_var_long_int);
}
static void
test_atan2_142 (void)
{
  extern typeof (atan2 (vol_var_long_double, vol_var_unsigned_long_int)) var_long_double __attribute__ ((unused));
  vol_var_long_double = atan2 (vol_var_long_double, vol_var_unsigned_long_int);
}
static void
test_atan2_143 (void)
{
  extern typeof (atan2 (vol_var_long_double, vol_var_long_long_int)) var_long_double __attribute__ ((unused));
  vol_var_long_double = atan2 (vol_var_long_double, vol_var_long_long_int);
}
static void
test_atan2_144 (void)
{
  extern typeof (atan2 (vol_var_long_double, vol_var_unsigned_long_long_int)) var_long_double __attribute__ ((unused));
  vol_var_long_double = atan2 (vol_var_long_double, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_atan2_145 (void)
{
  extern typeof (atan2 (vol_var_long_double, vol_var___int128)) var_long_double __attribute__ ((unused));
  vol_var_long_double = atan2 (vol_var_long_double, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_atan2_146 (void)
{
  extern typeof (atan2 (vol_var_long_double, vol_var_unsigned___int128)) var_long_double __attribute__ ((unused));
  vol_var_long_double = atan2 (vol_var_long_double, vol_var_unsigned___int128);
}
#endif
static void
test_atan2_147 (void)
{
  extern typeof (atan2 (vol_var_long_double, vol_var_enum_e)) var_long_double __attribute__ ((unused));
  vol_var_long_double = atan2 (vol_var_long_double, vol_var_enum_e);
}
static void
test_atan2_148 (void)
{
  extern typeof (atan2 (vol_var_long_double, vol_var__Bool)) var_long_double __attribute__ ((unused));
  vol_var_long_double = atan2 (vol_var_long_double, vol_var__Bool);
}
static void
test_atan2_149 (void)
{
  extern typeof (atan2 (vol_var_long_double, vol_var_bit_field)) var_long_double __attribute__ ((unused));
  vol_var_long_double = atan2 (vol_var_long_double, vol_var_bit_field);
}
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F64
static void
test_atan2_150 (void)
{
  extern typeof (atan2 (vol_var__Float64, vol_var__Float16)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = atan2 (vol_var__Float64, vol_var__Float16);
}
#endif
#if defined HUGE_VAL_F64
static void
test_atan2_151 (void)
{
  extern typeof (atan2 (vol_var__Float64, vol_var_float)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = atan2 (vol_var__Float64, vol_var_float);
}
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F64
static void
test_atan2_152 (void)
{
  extern typeof (atan2 (vol_var__Float64, vol_var__Float32)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = atan2 (vol_var__Float64, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X && defined HUGE_VAL_F64
static void
test_atan2_153 (void)
{
  extern typeof (atan2 (vol_var__Float64, vol_var__Float32x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = atan2 (vol_var__Float64, vol_var__Float32x);
}
#endif
#if defined HUGE_VAL_F64
static void
test_atan2_154 (void)
{
  extern typeof (atan2 (vol_var__Float64, vol_var_double)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = atan2 (vol_var__Float64, vol_var_double);
}
#endif
#if defined HUGE_VAL_F64
static void
test_atan2_155 (void)
{
  extern typeof (atan2 (vol_var__Float64, vol_var_long_double)) var_long_double_Float64 __attribute__ ((unused));
  vol_var_long_double_Float64 = atan2 (vol_var__Float64, vol_var_long_double);
}
#endif
#if defined HUGE_VAL_F64
static void
test_atan2_156 (void)
{
  extern typeof (atan2 (vol_var__Float64, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = atan2 (vol_var__Float64, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
static void
test_atan2_157 (void)
{
  extern typeof (atan2 (vol_var__Float64, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = atan2 (vol_var__Float64, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F64
static void
test_atan2_158 (void)
{
  extern typeof (atan2 (vol_var__Float64, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = atan2 (vol_var__Float64, vol_var__Float128);
}
#endif
#if defined HUGE_VAL_F64
static void
test_atan2_159 (void)
{
  extern typeof (atan2 (vol_var__Float64, vol_var_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = atan2 (vol_var__Float64, vol_var_char);
}
#endif
#if defined HUGE_VAL_F64
static void
test_atan2_160 (void)
{
  extern typeof (atan2 (vol_var__Float64, vol_var_signed_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = atan2 (vol_var__Float64, vol_var_signed_char);
}
#endif
#if defined HUGE_VAL_F64
static void
test_atan2_161 (void)
{
  extern typeof (atan2 (vol_var__Float64, vol_var_unsigned_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = atan2 (vol_var__Float64, vol_var_unsigned_char);
}
#endif
#if defined HUGE_VAL_F64
static void
test_atan2_162 (void)
{
  extern typeof (atan2 (vol_var__Float64, vol_var_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = atan2 (vol_var__Float64, vol_var_short_int);
}
#endif
#if defined HUGE_VAL_F64
static void
test_atan2_163 (void)
{
  extern typeof (atan2 (vol_var__Float64, vol_var_unsigned_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = atan2 (vol_var__Float64, vol_var_unsigned_short_int);
}
#endif
#if defined HUGE_VAL_F64
static void
test_atan2_164 (void)
{
  extern typeof (atan2 (vol_var__Float64, vol_var_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = atan2 (vol_var__Float64, vol_var_int);
}
#endif
#if defined HUGE_VAL_F64
static void
test_atan2_165 (void)
{
  extern typeof (atan2 (vol_var__Float64, vol_var_unsigned_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = atan2 (vol_var__Float64, vol_var_unsigned_int);
}
#endif
#if defined HUGE_VAL_F64
static void
test_atan2_166 (void)
{
  extern typeof (atan2 (vol_var__Float64, vol_var_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = atan2 (vol_var__Float64, vol_var_long_int);
}
#endif
#if defined HUGE_VAL_F64
static void
test_atan2_167 (void)
{
  extern typeof (atan2 (vol_var__Float64, vol_var_unsigned_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = atan2 (vol_var__Float64, vol_var_unsigned_long_int);
}
#endif
#if defined HUGE_VAL_F64
static void
test_atan2_168 (void)
{
  extern typeof (atan2 (vol_var__Float64, vol_var_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = atan2 (vol_var__Float64, vol_var_long_long_int);
}
#endif
#if defined HUGE_VAL_F64
static void
test_atan2_169 (void)
{
  extern typeof (atan2 (vol_var__Float64, vol_var_unsigned_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = atan2 (vol_var__Float64, vol_var_unsigned_long_long_int);
}
#endif
#if defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_atan2_170 (void)
{
  extern typeof (atan2 (vol_var__Float64, vol_var___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = atan2 (vol_var__Float64, vol_var___int128);
}
#endif
#if defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_atan2_171 (void)
{
  extern typeof (atan2 (vol_var__Float64, vol_var_unsigned___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = atan2 (vol_var__Float64, vol_var_unsigned___int128);
}
#endif
#if defined HUGE_VAL_F64
static void
test_atan2_172 (void)
{
  extern typeof (atan2 (vol_var__Float64, vol_var_enum_e)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = atan2 (vol_var__Float64, vol_var_enum_e);
}
#endif
#if defined HUGE_VAL_F64
static void
test_atan2_173 (void)
{
  extern typeof (atan2 (vol_var__Float64, vol_var__Bool)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = atan2 (vol_var__Float64, vol_var__Bool);
}
#endif
#if defined HUGE_VAL_F64
static void
test_atan2_174 (void)
{
  extern typeof (atan2 (vol_var__Float64, vol_var_bit_field)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = atan2 (vol_var__Float64, vol_var_bit_field);
}
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
static void
test_atan2_175 (void)
{
  extern typeof (atan2 (vol_var__Float64x, vol_var__Float16)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = atan2 (vol_var__Float64x, vol_var__Float16);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_atan2_176 (void)
{
  extern typeof (atan2 (vol_var__Float64x, vol_var_float)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = atan2 (vol_var__Float64x, vol_var_float);
}
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
static void
test_atan2_177 (void)
{
  extern typeof (atan2 (vol_var__Float64x, vol_var__Float32)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = atan2 (vol_var__Float64x, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
static void
test_atan2_178 (void)
{
  extern typeof (atan2 (vol_var__Float64x, vol_var__Float32x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = atan2 (vol_var__Float64x, vol_var__Float32x);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_atan2_179 (void)
{
  extern typeof (atan2 (vol_var__Float64x, vol_var_double)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = atan2 (vol_var__Float64x, vol_var_double);
}
#endif
#if (LDBL_MANT_DIG != 106) && defined HUGE_VAL_F64X
static void
test_atan2_180 (void)
{
  extern typeof (atan2 (vol_var__Float64x, vol_var_long_double)) var_long_double_Float64x __attribute__ ((unused));
  vol_var_long_double_Float64x = atan2 (vol_var__Float64x, vol_var_long_double);
}
#endif
#if defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
static void
test_atan2_181 (void)
{
  extern typeof (atan2 (vol_var__Float64x, vol_var__Float64)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = atan2 (vol_var__Float64x, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_atan2_182 (void)
{
  extern typeof (atan2 (vol_var__Float64x, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = atan2 (vol_var__Float64x, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
static void
test_atan2_183 (void)
{
  extern typeof (atan2 (vol_var__Float64x, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = atan2 (vol_var__Float64x, vol_var__Float128);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_atan2_184 (void)
{
  extern typeof (atan2 (vol_var__Float64x, vol_var_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = atan2 (vol_var__Float64x, vol_var_char);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_atan2_185 (void)
{
  extern typeof (atan2 (vol_var__Float64x, vol_var_signed_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = atan2 (vol_var__Float64x, vol_var_signed_char);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_atan2_186 (void)
{
  extern typeof (atan2 (vol_var__Float64x, vol_var_unsigned_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = atan2 (vol_var__Float64x, vol_var_unsigned_char);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_atan2_187 (void)
{
  extern typeof (atan2 (vol_var__Float64x, vol_var_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = atan2 (vol_var__Float64x, vol_var_short_int);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_atan2_188 (void)
{
  extern typeof (atan2 (vol_var__Float64x, vol_var_unsigned_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = atan2 (vol_var__Float64x, vol_var_unsigned_short_int);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_atan2_189 (void)
{
  extern typeof (atan2 (vol_var__Float64x, vol_var_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = atan2 (vol_var__Float64x, vol_var_int);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_atan2_190 (void)
{
  extern typeof (atan2 (vol_var__Float64x, vol_var_unsigned_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = atan2 (vol_var__Float64x, vol_var_unsigned_int);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_atan2_191 (void)
{
  extern typeof (atan2 (vol_var__Float64x, vol_var_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = atan2 (vol_var__Float64x, vol_var_long_int);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_atan2_192 (void)
{
  extern typeof (atan2 (vol_var__Float64x, vol_var_unsigned_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = atan2 (vol_var__Float64x, vol_var_unsigned_long_int);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_atan2_193 (void)
{
  extern typeof (atan2 (vol_var__Float64x, vol_var_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = atan2 (vol_var__Float64x, vol_var_long_long_int);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_atan2_194 (void)
{
  extern typeof (atan2 (vol_var__Float64x, vol_var_unsigned_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = atan2 (vol_var__Float64x, vol_var_unsigned_long_long_int);
}
#endif
#if defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_atan2_195 (void)
{
  extern typeof (atan2 (vol_var__Float64x, vol_var___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = atan2 (vol_var__Float64x, vol_var___int128);
}
#endif
#if defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_atan2_196 (void)
{
  extern typeof (atan2 (vol_var__Float64x, vol_var_unsigned___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = atan2 (vol_var__Float64x, vol_var_unsigned___int128);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_atan2_197 (void)
{
  extern typeof (atan2 (vol_var__Float64x, vol_var_enum_e)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = atan2 (vol_var__Float64x, vol_var_enum_e);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_atan2_198 (void)
{
  extern typeof (atan2 (vol_var__Float64x, vol_var__Bool)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = atan2 (vol_var__Float64x, vol_var__Bool);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_atan2_199 (void)
{
  extern typeof (atan2 (vol_var__Float64x, vol_var_bit_field)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = atan2 (vol_var__Float64x, vol_var_bit_field);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F16
static void
test_atan2_200 (void)
{
  extern typeof (atan2 (vol_var__Float128, vol_var__Float16)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = atan2 (vol_var__Float128, vol_var__Float16);
}
#endif
#if defined HUGE_VAL_F128
static void
test_atan2_201 (void)
{
  extern typeof (atan2 (vol_var__Float128, vol_var_float)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = atan2 (vol_var__Float128, vol_var_float);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F32
static void
test_atan2_202 (void)
{
  extern typeof (atan2 (vol_var__Float128, vol_var__Float32)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = atan2 (vol_var__Float128, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
static void
test_atan2_203 (void)
{
  extern typeof (atan2 (vol_var__Float128, vol_var__Float32x)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = atan2 (vol_var__Float128, vol_var__Float32x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_atan2_204 (void)
{
  extern typeof (atan2 (vol_var__Float128, vol_var_double)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = atan2 (vol_var__Float128, vol_var_double);
}
#endif
#if (LDBL_MANT_DIG != 106) && defined HUGE_VAL_F128
static void
test_atan2_205 (void)
{
  extern typeof (atan2 (vol_var__Float128, vol_var_long_double)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = atan2 (vol_var__Float128, vol_var_long_double);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F64
static void
test_atan2_206 (void)
{
  extern typeof (atan2 (vol_var__Float128, vol_var__Float64)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = atan2 (vol_var__Float128, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
static void
test_atan2_207 (void)
{
  extern typeof (atan2 (vol_var__Float128, vol_var__Float64x)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = atan2 (vol_var__Float128, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_atan2_208 (void)
{
  extern typeof (atan2 (vol_var__Float128, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = atan2 (vol_var__Float128, vol_var__Float128);
}
#endif
#if defined HUGE_VAL_F128
static void
test_atan2_209 (void)
{
  extern typeof (atan2 (vol_var__Float128, vol_var_char)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = atan2 (vol_var__Float128, vol_var_char);
}
#endif
#if defined HUGE_VAL_F128
static void
test_atan2_210 (void)
{
  extern typeof (atan2 (vol_var__Float128, vol_var_signed_char)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = atan2 (vol_var__Float128, vol_var_signed_char);
}
#endif
#if defined HUGE_VAL_F128
static void
test_atan2_211 (void)
{
  extern typeof (atan2 (vol_var__Float128, vol_var_unsigned_char)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = atan2 (vol_var__Float128, vol_var_unsigned_char);
}
#endif
#if defined HUGE_VAL_F128
static void
test_atan2_212 (void)
{
  extern typeof (atan2 (vol_var__Float128, vol_var_short_int)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = atan2 (vol_var__Float128, vol_var_short_int);
}
#endif
#if defined HUGE_VAL_F128
static void
test_atan2_213 (void)
{
  extern typeof (atan2 (vol_var__Float128, vol_var_unsigned_short_int)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = atan2 (vol_var__Float128, vol_var_unsigned_short_int);
}
#endif
#if defined HUGE_VAL_F128
static void
test_atan2_214 (void)
{
  extern typeof (atan2 (vol_var__Float128, vol_var_int)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = atan2 (vol_var__Float128, vol_var_int);
}
#endif
#if defined HUGE_VAL_F128
static void
test_atan2_215 (void)
{
  extern typeof (atan2 (vol_var__Float128, vol_var_unsigned_int)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = atan2 (vol_var__Float128, vol_var_unsigned_int);
}
#endif
#if defined HUGE_VAL_F128
static void
test_atan2_216 (void)
{
  extern typeof (atan2 (vol_var__Float128, vol_var_long_int)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = atan2 (vol_var__Float128, vol_var_long_int);
}
#endif
#if defined HUGE_VAL_F128
static void
test_atan2_217 (void)
{
  extern typeof (atan2 (vol_var__Float128, vol_var_unsigned_long_int)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = atan2 (vol_var__Float128, vol_var_unsigned_long_int);
}
#endif
#if defined HUGE_VAL_F128
static void
test_atan2_218 (void)
{
  extern typeof (atan2 (vol_var__Float128, vol_var_long_long_int)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = atan2 (vol_var__Float128, vol_var_long_long_int);
}
#endif
#if defined HUGE_VAL_F128
static void
test_atan2_219 (void)
{
  extern typeof (atan2 (vol_var__Float128, vol_var_unsigned_long_long_int)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = atan2 (vol_var__Float128, vol_var_unsigned_long_long_int);
}
#endif
#if defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_atan2_220 (void)
{
  extern typeof (atan2 (vol_var__Float128, vol_var___int128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = atan2 (vol_var__Float128, vol_var___int128);
}
#endif
#if defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_atan2_221 (void)
{
  extern typeof (atan2 (vol_var__Float128, vol_var_unsigned___int128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = atan2 (vol_var__Float128, vol_var_unsigned___int128);
}
#endif
#if defined HUGE_VAL_F128
static void
test_atan2_222 (void)
{
  extern typeof (atan2 (vol_var__Float128, vol_var_enum_e)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = atan2 (vol_var__Float128, vol_var_enum_e);
}
#endif
#if defined HUGE_VAL_F128
static void
test_atan2_223 (void)
{
  extern typeof (atan2 (vol_var__Float128, vol_var__Bool)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = atan2 (vol_var__Float128, vol_var__Bool);
}
#endif
#if defined HUGE_VAL_F128
static void
test_atan2_224 (void)
{
  extern typeof (atan2 (vol_var__Float128, vol_var_bit_field)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = atan2 (vol_var__Float128, vol_var_bit_field);
}
#endif
#if defined HUGE_VAL_F16
static void
test_atan2_225 (void)
{
  extern typeof (atan2 (vol_var_char, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_char, vol_var__Float16);
}
#endif
static void
test_atan2_226 (void)
{
  extern typeof (atan2 (vol_var_char, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_char, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_atan2_227 (void)
{
  extern typeof (atan2 (vol_var_char, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_char, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_atan2_228 (void)
{
  extern typeof (atan2 (vol_var_char, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_char, vol_var__Float32x);
}
#endif
static void
test_atan2_229 (void)
{
  extern typeof (atan2 (vol_var_char, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_char, vol_var_double);
}
static void
test_atan2_230 (void)
{
  extern typeof (atan2 (vol_var_char, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = atan2 (vol_var_char, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_atan2_231 (void)
{
  extern typeof (atan2 (vol_var_char, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = atan2 (vol_var_char, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_atan2_232 (void)
{
  extern typeof (atan2 (vol_var_char, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = atan2 (vol_var_char, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_atan2_233 (void)
{
  extern typeof (atan2 (vol_var_char, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = atan2 (vol_var_char, vol_var__Float128);
}
#endif
static void
test_atan2_234 (void)
{
  extern typeof (atan2 (vol_var_char, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_char, vol_var_char);
}
static void
test_atan2_235 (void)
{
  extern typeof (atan2 (vol_var_char, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_char, vol_var_signed_char);
}
static void
test_atan2_236 (void)
{
  extern typeof (atan2 (vol_var_char, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_char, vol_var_unsigned_char);
}
static void
test_atan2_237 (void)
{
  extern typeof (atan2 (vol_var_char, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_char, vol_var_short_int);
}
static void
test_atan2_238 (void)
{
  extern typeof (atan2 (vol_var_char, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_char, vol_var_unsigned_short_int);
}
static void
test_atan2_239 (void)
{
  extern typeof (atan2 (vol_var_char, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_char, vol_var_int);
}
static void
test_atan2_240 (void)
{
  extern typeof (atan2 (vol_var_char, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_char, vol_var_unsigned_int);
}
static void
test_atan2_241 (void)
{
  extern typeof (atan2 (vol_var_char, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_char, vol_var_long_int);
}
static void
test_atan2_242 (void)
{
  extern typeof (atan2 (vol_var_char, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_char, vol_var_unsigned_long_int);
}
static void
test_atan2_243 (void)
{
  extern typeof (atan2 (vol_var_char, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_char, vol_var_long_long_int);
}
static void
test_atan2_244 (void)
{
  extern typeof (atan2 (vol_var_char, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_char, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_atan2_245 (void)
{
  extern typeof (atan2 (vol_var_char, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_char, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_atan2_246 (void)
{
  extern typeof (atan2 (vol_var_char, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_char, vol_var_unsigned___int128);
}
#endif
static void
test_atan2_247 (void)
{
  extern typeof (atan2 (vol_var_char, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_char, vol_var_enum_e);
}
static void
test_atan2_248 (void)
{
  extern typeof (atan2 (vol_var_char, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_char, vol_var__Bool);
}
static void
test_atan2_249 (void)
{
  extern typeof (atan2 (vol_var_char, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_char, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_atan2_250 (void)
{
  extern typeof (atan2 (vol_var_signed_char, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_signed_char, vol_var__Float16);
}
#endif
static void
test_atan2_251 (void)
{
  extern typeof (atan2 (vol_var_signed_char, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_signed_char, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_atan2_252 (void)
{
  extern typeof (atan2 (vol_var_signed_char, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_signed_char, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_atan2_253 (void)
{
  extern typeof (atan2 (vol_var_signed_char, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_signed_char, vol_var__Float32x);
}
#endif
static void
test_atan2_254 (void)
{
  extern typeof (atan2 (vol_var_signed_char, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_signed_char, vol_var_double);
}
static void
test_atan2_255 (void)
{
  extern typeof (atan2 (vol_var_signed_char, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = atan2 (vol_var_signed_char, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_atan2_256 (void)
{
  extern typeof (atan2 (vol_var_signed_char, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = atan2 (vol_var_signed_char, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_atan2_257 (void)
{
  extern typeof (atan2 (vol_var_signed_char, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = atan2 (vol_var_signed_char, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_atan2_258 (void)
{
  extern typeof (atan2 (vol_var_signed_char, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = atan2 (vol_var_signed_char, vol_var__Float128);
}
#endif
static void
test_atan2_259 (void)
{
  extern typeof (atan2 (vol_var_signed_char, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_signed_char, vol_var_char);
}
static void
test_atan2_260 (void)
{
  extern typeof (atan2 (vol_var_signed_char, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_signed_char, vol_var_signed_char);
}
static void
test_atan2_261 (void)
{
  extern typeof (atan2 (vol_var_signed_char, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_signed_char, vol_var_unsigned_char);
}
static void
test_atan2_262 (void)
{
  extern typeof (atan2 (vol_var_signed_char, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_signed_char, vol_var_short_int);
}
static void
test_atan2_263 (void)
{
  extern typeof (atan2 (vol_var_signed_char, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_signed_char, vol_var_unsigned_short_int);
}
static void
test_atan2_264 (void)
{
  extern typeof (atan2 (vol_var_signed_char, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_signed_char, vol_var_int);
}
static void
test_atan2_265 (void)
{
  extern typeof (atan2 (vol_var_signed_char, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_signed_char, vol_var_unsigned_int);
}
static void
test_atan2_266 (void)
{
  extern typeof (atan2 (vol_var_signed_char, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_signed_char, vol_var_long_int);
}
static void
test_atan2_267 (void)
{
  extern typeof (atan2 (vol_var_signed_char, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_signed_char, vol_var_unsigned_long_int);
}
static void
test_atan2_268 (void)
{
  extern typeof (atan2 (vol_var_signed_char, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_signed_char, vol_var_long_long_int);
}
static void
test_atan2_269 (void)
{
  extern typeof (atan2 (vol_var_signed_char, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_signed_char, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_atan2_270 (void)
{
  extern typeof (atan2 (vol_var_signed_char, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_signed_char, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_atan2_271 (void)
{
  extern typeof (atan2 (vol_var_signed_char, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_signed_char, vol_var_unsigned___int128);
}
#endif
static void
test_atan2_272 (void)
{
  extern typeof (atan2 (vol_var_signed_char, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_signed_char, vol_var_enum_e);
}
static void
test_atan2_273 (void)
{
  extern typeof (atan2 (vol_var_signed_char, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_signed_char, vol_var__Bool);
}
static void
test_atan2_274 (void)
{
  extern typeof (atan2 (vol_var_signed_char, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_signed_char, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_atan2_275 (void)
{
  extern typeof (atan2 (vol_var_unsigned_char, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_unsigned_char, vol_var__Float16);
}
#endif
static void
test_atan2_276 (void)
{
  extern typeof (atan2 (vol_var_unsigned_char, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_unsigned_char, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_atan2_277 (void)
{
  extern typeof (atan2 (vol_var_unsigned_char, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_unsigned_char, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_atan2_278 (void)
{
  extern typeof (atan2 (vol_var_unsigned_char, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_unsigned_char, vol_var__Float32x);
}
#endif
static void
test_atan2_279 (void)
{
  extern typeof (atan2 (vol_var_unsigned_char, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_unsigned_char, vol_var_double);
}
static void
test_atan2_280 (void)
{
  extern typeof (atan2 (vol_var_unsigned_char, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = atan2 (vol_var_unsigned_char, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_atan2_281 (void)
{
  extern typeof (atan2 (vol_var_unsigned_char, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = atan2 (vol_var_unsigned_char, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_atan2_282 (void)
{
  extern typeof (atan2 (vol_var_unsigned_char, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = atan2 (vol_var_unsigned_char, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_atan2_283 (void)
{
  extern typeof (atan2 (vol_var_unsigned_char, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = atan2 (vol_var_unsigned_char, vol_var__Float128);
}
#endif
static void
test_atan2_284 (void)
{
  extern typeof (atan2 (vol_var_unsigned_char, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_unsigned_char, vol_var_char);
}
static void
test_atan2_285 (void)
{
  extern typeof (atan2 (vol_var_unsigned_char, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_unsigned_char, vol_var_signed_char);
}
static void
test_atan2_286 (void)
{
  extern typeof (atan2 (vol_var_unsigned_char, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_unsigned_char, vol_var_unsigned_char);
}
static void
test_atan2_287 (void)
{
  extern typeof (atan2 (vol_var_unsigned_char, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_unsigned_char, vol_var_short_int);
}
static void
test_atan2_288 (void)
{
  extern typeof (atan2 (vol_var_unsigned_char, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_unsigned_char, vol_var_unsigned_short_int);
}
static void
test_atan2_289 (void)
{
  extern typeof (atan2 (vol_var_unsigned_char, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_unsigned_char, vol_var_int);
}
static void
test_atan2_290 (void)
{
  extern typeof (atan2 (vol_var_unsigned_char, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_unsigned_char, vol_var_unsigned_int);
}
static void
test_atan2_291 (void)
{
  extern typeof (atan2 (vol_var_unsigned_char, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_unsigned_char, vol_var_long_int);
}
static void
test_atan2_292 (void)
{
  extern typeof (atan2 (vol_var_unsigned_char, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_unsigned_char, vol_var_unsigned_long_int);
}
static void
test_atan2_293 (void)
{
  extern typeof (atan2 (vol_var_unsigned_char, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_unsigned_char, vol_var_long_long_int);
}
static void
test_atan2_294 (void)
{
  extern typeof (atan2 (vol_var_unsigned_char, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_unsigned_char, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_atan2_295 (void)
{
  extern typeof (atan2 (vol_var_unsigned_char, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_unsigned_char, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_atan2_296 (void)
{
  extern typeof (atan2 (vol_var_unsigned_char, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_unsigned_char, vol_var_unsigned___int128);
}
#endif
static void
test_atan2_297 (void)
{
  extern typeof (atan2 (vol_var_unsigned_char, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_unsigned_char, vol_var_enum_e);
}
static void
test_atan2_298 (void)
{
  extern typeof (atan2 (vol_var_unsigned_char, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_unsigned_char, vol_var__Bool);
}
static void
test_atan2_299 (void)
{
  extern typeof (atan2 (vol_var_unsigned_char, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_unsigned_char, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_atan2_300 (void)
{
  extern typeof (atan2 (vol_var_short_int, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_short_int, vol_var__Float16);
}
#endif
static void
test_atan2_301 (void)
{
  extern typeof (atan2 (vol_var_short_int, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_short_int, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_atan2_302 (void)
{
  extern typeof (atan2 (vol_var_short_int, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_short_int, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_atan2_303 (void)
{
  extern typeof (atan2 (vol_var_short_int, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_short_int, vol_var__Float32x);
}
#endif
static void
test_atan2_304 (void)
{
  extern typeof (atan2 (vol_var_short_int, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_short_int, vol_var_double);
}
static void
test_atan2_305 (void)
{
  extern typeof (atan2 (vol_var_short_int, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = atan2 (vol_var_short_int, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_atan2_306 (void)
{
  extern typeof (atan2 (vol_var_short_int, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = atan2 (vol_var_short_int, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_atan2_307 (void)
{
  extern typeof (atan2 (vol_var_short_int, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = atan2 (vol_var_short_int, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_atan2_308 (void)
{
  extern typeof (atan2 (vol_var_short_int, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = atan2 (vol_var_short_int, vol_var__Float128);
}
#endif
static void
test_atan2_309 (void)
{
  extern typeof (atan2 (vol_var_short_int, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_short_int, vol_var_char);
}
static void
test_atan2_310 (void)
{
  extern typeof (atan2 (vol_var_short_int, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_short_int, vol_var_signed_char);
}
static void
test_atan2_311 (void)
{
  extern typeof (atan2 (vol_var_short_int, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_short_int, vol_var_unsigned_char);
}
static void
test_atan2_312 (void)
{
  extern typeof (atan2 (vol_var_short_int, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_short_int, vol_var_short_int);
}
static void
test_atan2_313 (void)
{
  extern typeof (atan2 (vol_var_short_int, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_short_int, vol_var_unsigned_short_int);
}
static void
test_atan2_314 (void)
{
  extern typeof (atan2 (vol_var_short_int, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_short_int, vol_var_int);
}
static void
test_atan2_315 (void)
{
  extern typeof (atan2 (vol_var_short_int, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_short_int, vol_var_unsigned_int);
}
static void
test_atan2_316 (void)
{
  extern typeof (atan2 (vol_var_short_int, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_short_int, vol_var_long_int);
}
static void
test_atan2_317 (void)
{
  extern typeof (atan2 (vol_var_short_int, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_short_int, vol_var_unsigned_long_int);
}
static void
test_atan2_318 (void)
{
  extern typeof (atan2 (vol_var_short_int, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_short_int, vol_var_long_long_int);
}
static void
test_atan2_319 (void)
{
  extern typeof (atan2 (vol_var_short_int, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_short_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_atan2_320 (void)
{
  extern typeof (atan2 (vol_var_short_int, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_short_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_atan2_321 (void)
{
  extern typeof (atan2 (vol_var_short_int, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_short_int, vol_var_unsigned___int128);
}
#endif
static void
test_atan2_322 (void)
{
  extern typeof (atan2 (vol_var_short_int, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_short_int, vol_var_enum_e);
}
static void
test_atan2_323 (void)
{
  extern typeof (atan2 (vol_var_short_int, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_short_int, vol_var__Bool);
}
static void
test_atan2_324 (void)
{
  extern typeof (atan2 (vol_var_short_int, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_short_int, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_atan2_325 (void)
{
  extern typeof (atan2 (vol_var_unsigned_short_int, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_unsigned_short_int, vol_var__Float16);
}
#endif
static void
test_atan2_326 (void)
{
  extern typeof (atan2 (vol_var_unsigned_short_int, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_unsigned_short_int, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_atan2_327 (void)
{
  extern typeof (atan2 (vol_var_unsigned_short_int, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_unsigned_short_int, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_atan2_328 (void)
{
  extern typeof (atan2 (vol_var_unsigned_short_int, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_unsigned_short_int, vol_var__Float32x);
}
#endif
static void
test_atan2_329 (void)
{
  extern typeof (atan2 (vol_var_unsigned_short_int, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_unsigned_short_int, vol_var_double);
}
static void
test_atan2_330 (void)
{
  extern typeof (atan2 (vol_var_unsigned_short_int, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = atan2 (vol_var_unsigned_short_int, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_atan2_331 (void)
{
  extern typeof (atan2 (vol_var_unsigned_short_int, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = atan2 (vol_var_unsigned_short_int, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_atan2_332 (void)
{
  extern typeof (atan2 (vol_var_unsigned_short_int, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = atan2 (vol_var_unsigned_short_int, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_atan2_333 (void)
{
  extern typeof (atan2 (vol_var_unsigned_short_int, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = atan2 (vol_var_unsigned_short_int, vol_var__Float128);
}
#endif
static void
test_atan2_334 (void)
{
  extern typeof (atan2 (vol_var_unsigned_short_int, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_unsigned_short_int, vol_var_char);
}
static void
test_atan2_335 (void)
{
  extern typeof (atan2 (vol_var_unsigned_short_int, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_unsigned_short_int, vol_var_signed_char);
}
static void
test_atan2_336 (void)
{
  extern typeof (atan2 (vol_var_unsigned_short_int, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_unsigned_short_int, vol_var_unsigned_char);
}
static void
test_atan2_337 (void)
{
  extern typeof (atan2 (vol_var_unsigned_short_int, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_unsigned_short_int, vol_var_short_int);
}
static void
test_atan2_338 (void)
{
  extern typeof (atan2 (vol_var_unsigned_short_int, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_unsigned_short_int, vol_var_unsigned_short_int);
}
static void
test_atan2_339 (void)
{
  extern typeof (atan2 (vol_var_unsigned_short_int, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_unsigned_short_int, vol_var_int);
}
static void
test_atan2_340 (void)
{
  extern typeof (atan2 (vol_var_unsigned_short_int, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_unsigned_short_int, vol_var_unsigned_int);
}
static void
test_atan2_341 (void)
{
  extern typeof (atan2 (vol_var_unsigned_short_int, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_unsigned_short_int, vol_var_long_int);
}
static void
test_atan2_342 (void)
{
  extern typeof (atan2 (vol_var_unsigned_short_int, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_unsigned_short_int, vol_var_unsigned_long_int);
}
static void
test_atan2_343 (void)
{
  extern typeof (atan2 (vol_var_unsigned_short_int, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_unsigned_short_int, vol_var_long_long_int);
}
static void
test_atan2_344 (void)
{
  extern typeof (atan2 (vol_var_unsigned_short_int, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_unsigned_short_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_atan2_345 (void)
{
  extern typeof (atan2 (vol_var_unsigned_short_int, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_unsigned_short_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_atan2_346 (void)
{
  extern typeof (atan2 (vol_var_unsigned_short_int, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_unsigned_short_int, vol_var_unsigned___int128);
}
#endif
static void
test_atan2_347 (void)
{
  extern typeof (atan2 (vol_var_unsigned_short_int, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_unsigned_short_int, vol_var_enum_e);
}
static void
test_atan2_348 (void)
{
  extern typeof (atan2 (vol_var_unsigned_short_int, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_unsigned_short_int, vol_var__Bool);
}
static void
test_atan2_349 (void)
{
  extern typeof (atan2 (vol_var_unsigned_short_int, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_unsigned_short_int, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_atan2_350 (void)
{
  extern typeof (atan2 (vol_var_int, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_int, vol_var__Float16);
}
#endif
static void
test_atan2_351 (void)
{
  extern typeof (atan2 (vol_var_int, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_int, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_atan2_352 (void)
{
  extern typeof (atan2 (vol_var_int, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_int, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_atan2_353 (void)
{
  extern typeof (atan2 (vol_var_int, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_int, vol_var__Float32x);
}
#endif
static void
test_atan2_354 (void)
{
  extern typeof (atan2 (vol_var_int, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_int, vol_var_double);
}
static void
test_atan2_355 (void)
{
  extern typeof (atan2 (vol_var_int, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = atan2 (vol_var_int, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_atan2_356 (void)
{
  extern typeof (atan2 (vol_var_int, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = atan2 (vol_var_int, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_atan2_357 (void)
{
  extern typeof (atan2 (vol_var_int, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = atan2 (vol_var_int, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_atan2_358 (void)
{
  extern typeof (atan2 (vol_var_int, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = atan2 (vol_var_int, vol_var__Float128);
}
#endif
static void
test_atan2_359 (void)
{
  extern typeof (atan2 (vol_var_int, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_int, vol_var_char);
}
static void
test_atan2_360 (void)
{
  extern typeof (atan2 (vol_var_int, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_int, vol_var_signed_char);
}
static void
test_atan2_361 (void)
{
  extern typeof (atan2 (vol_var_int, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_int, vol_var_unsigned_char);
}
static void
test_atan2_362 (void)
{
  extern typeof (atan2 (vol_var_int, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_int, vol_var_short_int);
}
static void
test_atan2_363 (void)
{
  extern typeof (atan2 (vol_var_int, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_int, vol_var_unsigned_short_int);
}
static void
test_atan2_364 (void)
{
  extern typeof (atan2 (vol_var_int, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_int, vol_var_int);
}
static void
test_atan2_365 (void)
{
  extern typeof (atan2 (vol_var_int, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_int, vol_var_unsigned_int);
}
static void
test_atan2_366 (void)
{
  extern typeof (atan2 (vol_var_int, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_int, vol_var_long_int);
}
static void
test_atan2_367 (void)
{
  extern typeof (atan2 (vol_var_int, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_int, vol_var_unsigned_long_int);
}
static void
test_atan2_368 (void)
{
  extern typeof (atan2 (vol_var_int, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_int, vol_var_long_long_int);
}
static void
test_atan2_369 (void)
{
  extern typeof (atan2 (vol_var_int, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_atan2_370 (void)
{
  extern typeof (atan2 (vol_var_int, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_atan2_371 (void)
{
  extern typeof (atan2 (vol_var_int, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_int, vol_var_unsigned___int128);
}
#endif
static void
test_atan2_372 (void)
{
  extern typeof (atan2 (vol_var_int, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_int, vol_var_enum_e);
}
static void
test_atan2_373 (void)
{
  extern typeof (atan2 (vol_var_int, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_int, vol_var__Bool);
}
static void
test_atan2_374 (void)
{
  extern typeof (atan2 (vol_var_int, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_int, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_atan2_375 (void)
{
  extern typeof (atan2 (vol_var_unsigned_int, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_unsigned_int, vol_var__Float16);
}
#endif
static void
test_atan2_376 (void)
{
  extern typeof (atan2 (vol_var_unsigned_int, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_unsigned_int, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_atan2_377 (void)
{
  extern typeof (atan2 (vol_var_unsigned_int, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_unsigned_int, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_atan2_378 (void)
{
  extern typeof (atan2 (vol_var_unsigned_int, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_unsigned_int, vol_var__Float32x);
}
#endif
static void
test_atan2_379 (void)
{
  extern typeof (atan2 (vol_var_unsigned_int, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_unsigned_int, vol_var_double);
}
static void
test_atan2_380 (void)
{
  extern typeof (atan2 (vol_var_unsigned_int, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = atan2 (vol_var_unsigned_int, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_atan2_381 (void)
{
  extern typeof (atan2 (vol_var_unsigned_int, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = atan2 (vol_var_unsigned_int, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_atan2_382 (void)
{
  extern typeof (atan2 (vol_var_unsigned_int, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = atan2 (vol_var_unsigned_int, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_atan2_383 (void)
{
  extern typeof (atan2 (vol_var_unsigned_int, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = atan2 (vol_var_unsigned_int, vol_var__Float128);
}
#endif
static void
test_atan2_384 (void)
{
  extern typeof (atan2 (vol_var_unsigned_int, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_unsigned_int, vol_var_char);
}
static void
test_atan2_385 (void)
{
  extern typeof (atan2 (vol_var_unsigned_int, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_unsigned_int, vol_var_signed_char);
}
static void
test_atan2_386 (void)
{
  extern typeof (atan2 (vol_var_unsigned_int, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_unsigned_int, vol_var_unsigned_char);
}
static void
test_atan2_387 (void)
{
  extern typeof (atan2 (vol_var_unsigned_int, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_unsigned_int, vol_var_short_int);
}
static void
test_atan2_388 (void)
{
  extern typeof (atan2 (vol_var_unsigned_int, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_unsigned_int, vol_var_unsigned_short_int);
}
static void
test_atan2_389 (void)
{
  extern typeof (atan2 (vol_var_unsigned_int, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_unsigned_int, vol_var_int);
}
static void
test_atan2_390 (void)
{
  extern typeof (atan2 (vol_var_unsigned_int, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_unsigned_int, vol_var_unsigned_int);
}
static void
test_atan2_391 (void)
{
  extern typeof (atan2 (vol_var_unsigned_int, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_unsigned_int, vol_var_long_int);
}
static void
test_atan2_392 (void)
{
  extern typeof (atan2 (vol_var_unsigned_int, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_unsigned_int, vol_var_unsigned_long_int);
}
static void
test_atan2_393 (void)
{
  extern typeof (atan2 (vol_var_unsigned_int, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_unsigned_int, vol_var_long_long_int);
}
static void
test_atan2_394 (void)
{
  extern typeof (atan2 (vol_var_unsigned_int, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_unsigned_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_atan2_395 (void)
{
  extern typeof (atan2 (vol_var_unsigned_int, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_unsigned_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_atan2_396 (void)
{
  extern typeof (atan2 (vol_var_unsigned_int, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_unsigned_int, vol_var_unsigned___int128);
}
#endif
static void
test_atan2_397 (void)
{
  extern typeof (atan2 (vol_var_unsigned_int, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_unsigned_int, vol_var_enum_e);
}
static void
test_atan2_398 (void)
{
  extern typeof (atan2 (vol_var_unsigned_int, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_unsigned_int, vol_var__Bool);
}
static void
test_atan2_399 (void)
{
  extern typeof (atan2 (vol_var_unsigned_int, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_unsigned_int, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_atan2_400 (void)
{
  extern typeof (atan2 (vol_var_long_int, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_long_int, vol_var__Float16);
}
#endif
static void
test_atan2_401 (void)
{
  extern typeof (atan2 (vol_var_long_int, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_long_int, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_atan2_402 (void)
{
  extern typeof (atan2 (vol_var_long_int, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_long_int, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_atan2_403 (void)
{
  extern typeof (atan2 (vol_var_long_int, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_long_int, vol_var__Float32x);
}
#endif
static void
test_atan2_404 (void)
{
  extern typeof (atan2 (vol_var_long_int, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_long_int, vol_var_double);
}
static void
test_atan2_405 (void)
{
  extern typeof (atan2 (vol_var_long_int, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = atan2 (vol_var_long_int, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_atan2_406 (void)
{
  extern typeof (atan2 (vol_var_long_int, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = atan2 (vol_var_long_int, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_atan2_407 (void)
{
  extern typeof (atan2 (vol_var_long_int, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = atan2 (vol_var_long_int, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_atan2_408 (void)
{
  extern typeof (atan2 (vol_var_long_int, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = atan2 (vol_var_long_int, vol_var__Float128);
}
#endif
static void
test_atan2_409 (void)
{
  extern typeof (atan2 (vol_var_long_int, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_long_int, vol_var_char);
}
static void
test_atan2_410 (void)
{
  extern typeof (atan2 (vol_var_long_int, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_long_int, vol_var_signed_char);
}
static void
test_atan2_411 (void)
{
  extern typeof (atan2 (vol_var_long_int, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_long_int, vol_var_unsigned_char);
}
static void
test_atan2_412 (void)
{
  extern typeof (atan2 (vol_var_long_int, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_long_int, vol_var_short_int);
}
static void
test_atan2_413 (void)
{
  extern typeof (atan2 (vol_var_long_int, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_long_int, vol_var_unsigned_short_int);
}
static void
test_atan2_414 (void)
{
  extern typeof (atan2 (vol_var_long_int, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_long_int, vol_var_int);
}
static void
test_atan2_415 (void)
{
  extern typeof (atan2 (vol_var_long_int, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_long_int, vol_var_unsigned_int);
}
static void
test_atan2_416 (void)
{
  extern typeof (atan2 (vol_var_long_int, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_long_int, vol_var_long_int);
}
static void
test_atan2_417 (void)
{
  extern typeof (atan2 (vol_var_long_int, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_long_int, vol_var_unsigned_long_int);
}
static void
test_atan2_418 (void)
{
  extern typeof (atan2 (vol_var_long_int, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_long_int, vol_var_long_long_int);
}
static void
test_atan2_419 (void)
{
  extern typeof (atan2 (vol_var_long_int, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_long_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_atan2_420 (void)
{
  extern typeof (atan2 (vol_var_long_int, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_long_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_atan2_421 (void)
{
  extern typeof (atan2 (vol_var_long_int, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_long_int, vol_var_unsigned___int128);
}
#endif
static void
test_atan2_422 (void)
{
  extern typeof (atan2 (vol_var_long_int, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_long_int, vol_var_enum_e);
}
static void
test_atan2_423 (void)
{
  extern typeof (atan2 (vol_var_long_int, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_long_int, vol_var__Bool);
}
static void
test_atan2_424 (void)
{
  extern typeof (atan2 (vol_var_long_int, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_long_int, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_atan2_425 (void)
{
  extern typeof (atan2 (vol_var_unsigned_long_int, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_unsigned_long_int, vol_var__Float16);
}
#endif
static void
test_atan2_426 (void)
{
  extern typeof (atan2 (vol_var_unsigned_long_int, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_unsigned_long_int, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_atan2_427 (void)
{
  extern typeof (atan2 (vol_var_unsigned_long_int, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_unsigned_long_int, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_atan2_428 (void)
{
  extern typeof (atan2 (vol_var_unsigned_long_int, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_unsigned_long_int, vol_var__Float32x);
}
#endif
static void
test_atan2_429 (void)
{
  extern typeof (atan2 (vol_var_unsigned_long_int, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_unsigned_long_int, vol_var_double);
}
static void
test_atan2_430 (void)
{
  extern typeof (atan2 (vol_var_unsigned_long_int, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = atan2 (vol_var_unsigned_long_int, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_atan2_431 (void)
{
  extern typeof (atan2 (vol_var_unsigned_long_int, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = atan2 (vol_var_unsigned_long_int, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_atan2_432 (void)
{
  extern typeof (atan2 (vol_var_unsigned_long_int, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = atan2 (vol_var_unsigned_long_int, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_atan2_433 (void)
{
  extern typeof (atan2 (vol_var_unsigned_long_int, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = atan2 (vol_var_unsigned_long_int, vol_var__Float128);
}
#endif
static void
test_atan2_434 (void)
{
  extern typeof (atan2 (vol_var_unsigned_long_int, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_unsigned_long_int, vol_var_char);
}
static void
test_atan2_435 (void)
{
  extern typeof (atan2 (vol_var_unsigned_long_int, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_unsigned_long_int, vol_var_signed_char);
}
static void
test_atan2_436 (void)
{
  extern typeof (atan2 (vol_var_unsigned_long_int, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_unsigned_long_int, vol_var_unsigned_char);
}
static void
test_atan2_437 (void)
{
  extern typeof (atan2 (vol_var_unsigned_long_int, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_unsigned_long_int, vol_var_short_int);
}
static void
test_atan2_438 (void)
{
  extern typeof (atan2 (vol_var_unsigned_long_int, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_unsigned_long_int, vol_var_unsigned_short_int);
}
static void
test_atan2_439 (void)
{
  extern typeof (atan2 (vol_var_unsigned_long_int, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_unsigned_long_int, vol_var_int);
}
static void
test_atan2_440 (void)
{
  extern typeof (atan2 (vol_var_unsigned_long_int, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_unsigned_long_int, vol_var_unsigned_int);
}
static void
test_atan2_441 (void)
{
  extern typeof (atan2 (vol_var_unsigned_long_int, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_unsigned_long_int, vol_var_long_int);
}
static void
test_atan2_442 (void)
{
  extern typeof (atan2 (vol_var_unsigned_long_int, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_unsigned_long_int, vol_var_unsigned_long_int);
}
static void
test_atan2_443 (void)
{
  extern typeof (atan2 (vol_var_unsigned_long_int, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_unsigned_long_int, vol_var_long_long_int);
}
static void
test_atan2_444 (void)
{
  extern typeof (atan2 (vol_var_unsigned_long_int, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_unsigned_long_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_atan2_445 (void)
{
  extern typeof (atan2 (vol_var_unsigned_long_int, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_unsigned_long_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_atan2_446 (void)
{
  extern typeof (atan2 (vol_var_unsigned_long_int, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_unsigned_long_int, vol_var_unsigned___int128);
}
#endif
static void
test_atan2_447 (void)
{
  extern typeof (atan2 (vol_var_unsigned_long_int, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_unsigned_long_int, vol_var_enum_e);
}
static void
test_atan2_448 (void)
{
  extern typeof (atan2 (vol_var_unsigned_long_int, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_unsigned_long_int, vol_var__Bool);
}
static void
test_atan2_449 (void)
{
  extern typeof (atan2 (vol_var_unsigned_long_int, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_unsigned_long_int, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_atan2_450 (void)
{
  extern typeof (atan2 (vol_var_long_long_int, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_long_long_int, vol_var__Float16);
}
#endif
static void
test_atan2_451 (void)
{
  extern typeof (atan2 (vol_var_long_long_int, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_long_long_int, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_atan2_452 (void)
{
  extern typeof (atan2 (vol_var_long_long_int, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_long_long_int, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_atan2_453 (void)
{
  extern typeof (atan2 (vol_var_long_long_int, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_long_long_int, vol_var__Float32x);
}
#endif
static void
test_atan2_454 (void)
{
  extern typeof (atan2 (vol_var_long_long_int, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_long_long_int, vol_var_double);
}
static void
test_atan2_455 (void)
{
  extern typeof (atan2 (vol_var_long_long_int, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = atan2 (vol_var_long_long_int, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_atan2_456 (void)
{
  extern typeof (atan2 (vol_var_long_long_int, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = atan2 (vol_var_long_long_int, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_atan2_457 (void)
{
  extern typeof (atan2 (vol_var_long_long_int, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = atan2 (vol_var_long_long_int, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_atan2_458 (void)
{
  extern typeof (atan2 (vol_var_long_long_int, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = atan2 (vol_var_long_long_int, vol_var__Float128);
}
#endif
static void
test_atan2_459 (void)
{
  extern typeof (atan2 (vol_var_long_long_int, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_long_long_int, vol_var_char);
}
static void
test_atan2_460 (void)
{
  extern typeof (atan2 (vol_var_long_long_int, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_long_long_int, vol_var_signed_char);
}
static void
test_atan2_461 (void)
{
  extern typeof (atan2 (vol_var_long_long_int, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_long_long_int, vol_var_unsigned_char);
}
static void
test_atan2_462 (void)
{
  extern typeof (atan2 (vol_var_long_long_int, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_long_long_int, vol_var_short_int);
}
static void
test_atan2_463 (void)
{
  extern typeof (atan2 (vol_var_long_long_int, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_long_long_int, vol_var_unsigned_short_int);
}
static void
test_atan2_464 (void)
{
  extern typeof (atan2 (vol_var_long_long_int, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_long_long_int, vol_var_int);
}
static void
test_atan2_465 (void)
{
  extern typeof (atan2 (vol_var_long_long_int, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_long_long_int, vol_var_unsigned_int);
}
static void
test_atan2_466 (void)
{
  extern typeof (atan2 (vol_var_long_long_int, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_long_long_int, vol_var_long_int);
}
static void
test_atan2_467 (void)
{
  extern typeof (atan2 (vol_var_long_long_int, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_long_long_int, vol_var_unsigned_long_int);
}
static void
test_atan2_468 (void)
{
  extern typeof (atan2 (vol_var_long_long_int, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_long_long_int, vol_var_long_long_int);
}
static void
test_atan2_469 (void)
{
  extern typeof (atan2 (vol_var_long_long_int, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_long_long_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_atan2_470 (void)
{
  extern typeof (atan2 (vol_var_long_long_int, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_long_long_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_atan2_471 (void)
{
  extern typeof (atan2 (vol_var_long_long_int, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_long_long_int, vol_var_unsigned___int128);
}
#endif
static void
test_atan2_472 (void)
{
  extern typeof (atan2 (vol_var_long_long_int, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_long_long_int, vol_var_enum_e);
}
static void
test_atan2_473 (void)
{
  extern typeof (atan2 (vol_var_long_long_int, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_long_long_int, vol_var__Bool);
}
static void
test_atan2_474 (void)
{
  extern typeof (atan2 (vol_var_long_long_int, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_long_long_int, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_atan2_475 (void)
{
  extern typeof (atan2 (vol_var_unsigned_long_long_int, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_unsigned_long_long_int, vol_var__Float16);
}
#endif
static void
test_atan2_476 (void)
{
  extern typeof (atan2 (vol_var_unsigned_long_long_int, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_unsigned_long_long_int, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_atan2_477 (void)
{
  extern typeof (atan2 (vol_var_unsigned_long_long_int, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_unsigned_long_long_int, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_atan2_478 (void)
{
  extern typeof (atan2 (vol_var_unsigned_long_long_int, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_unsigned_long_long_int, vol_var__Float32x);
}
#endif
static void
test_atan2_479 (void)
{
  extern typeof (atan2 (vol_var_unsigned_long_long_int, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_unsigned_long_long_int, vol_var_double);
}
static void
test_atan2_480 (void)
{
  extern typeof (atan2 (vol_var_unsigned_long_long_int, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = atan2 (vol_var_unsigned_long_long_int, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_atan2_481 (void)
{
  extern typeof (atan2 (vol_var_unsigned_long_long_int, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = atan2 (vol_var_unsigned_long_long_int, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_atan2_482 (void)
{
  extern typeof (atan2 (vol_var_unsigned_long_long_int, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = atan2 (vol_var_unsigned_long_long_int, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_atan2_483 (void)
{
  extern typeof (atan2 (vol_var_unsigned_long_long_int, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = atan2 (vol_var_unsigned_long_long_int, vol_var__Float128);
}
#endif
static void
test_atan2_484 (void)
{
  extern typeof (atan2 (vol_var_unsigned_long_long_int, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_unsigned_long_long_int, vol_var_char);
}
static void
test_atan2_485 (void)
{
  extern typeof (atan2 (vol_var_unsigned_long_long_int, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_unsigned_long_long_int, vol_var_signed_char);
}
static void
test_atan2_486 (void)
{
  extern typeof (atan2 (vol_var_unsigned_long_long_int, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_unsigned_long_long_int, vol_var_unsigned_char);
}
static void
test_atan2_487 (void)
{
  extern typeof (atan2 (vol_var_unsigned_long_long_int, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_unsigned_long_long_int, vol_var_short_int);
}
static void
test_atan2_488 (void)
{
  extern typeof (atan2 (vol_var_unsigned_long_long_int, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_unsigned_long_long_int, vol_var_unsigned_short_int);
}
static void
test_atan2_489 (void)
{
  extern typeof (atan2 (vol_var_unsigned_long_long_int, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_unsigned_long_long_int, vol_var_int);
}
static void
test_atan2_490 (void)
{
  extern typeof (atan2 (vol_var_unsigned_long_long_int, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_unsigned_long_long_int, vol_var_unsigned_int);
}
static void
test_atan2_491 (void)
{
  extern typeof (atan2 (vol_var_unsigned_long_long_int, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_unsigned_long_long_int, vol_var_long_int);
}
static void
test_atan2_492 (void)
{
  extern typeof (atan2 (vol_var_unsigned_long_long_int, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_unsigned_long_long_int, vol_var_unsigned_long_int);
}
static void
test_atan2_493 (void)
{
  extern typeof (atan2 (vol_var_unsigned_long_long_int, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_unsigned_long_long_int, vol_var_long_long_int);
}
static void
test_atan2_494 (void)
{
  extern typeof (atan2 (vol_var_unsigned_long_long_int, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_unsigned_long_long_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_atan2_495 (void)
{
  extern typeof (atan2 (vol_var_unsigned_long_long_int, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_unsigned_long_long_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_atan2_496 (void)
{
  extern typeof (atan2 (vol_var_unsigned_long_long_int, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_unsigned_long_long_int, vol_var_unsigned___int128);
}
#endif
static void
test_atan2_497 (void)
{
  extern typeof (atan2 (vol_var_unsigned_long_long_int, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_unsigned_long_long_int, vol_var_enum_e);
}
static void
test_atan2_498 (void)
{
  extern typeof (atan2 (vol_var_unsigned_long_long_int, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_unsigned_long_long_int, vol_var__Bool);
}
static void
test_atan2_499 (void)
{
  extern typeof (atan2 (vol_var_unsigned_long_long_int, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_unsigned_long_long_int, vol_var_bit_field);
}
#if defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_atan2_500 (void)
{
  extern typeof (atan2 (vol_var___int128, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var___int128, vol_var__Float16);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_atan2_501 (void)
{
  extern typeof (atan2 (vol_var___int128, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var___int128, vol_var_float);
}
#endif
#if defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_atan2_502 (void)
{
  extern typeof (atan2 (vol_var___int128, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var___int128, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_atan2_503 (void)
{
  extern typeof (atan2 (vol_var___int128, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var___int128, vol_var__Float32x);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_atan2_504 (void)
{
  extern typeof (atan2 (vol_var___int128, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var___int128, vol_var_double);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_atan2_505 (void)
{
  extern typeof (atan2 (vol_var___int128, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = atan2 (vol_var___int128, vol_var_long_double);
}
#endif
#if defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_atan2_506 (void)
{
  extern typeof (atan2 (vol_var___int128, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = atan2 (vol_var___int128, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_atan2_507 (void)
{
  extern typeof (atan2 (vol_var___int128, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = atan2 (vol_var___int128, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_atan2_508 (void)
{
  extern typeof (atan2 (vol_var___int128, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = atan2 (vol_var___int128, vol_var__Float128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_atan2_509 (void)
{
  extern typeof (atan2 (vol_var___int128, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var___int128, vol_var_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_atan2_510 (void)
{
  extern typeof (atan2 (vol_var___int128, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var___int128, vol_var_signed_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_atan2_511 (void)
{
  extern typeof (atan2 (vol_var___int128, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var___int128, vol_var_unsigned_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_atan2_512 (void)
{
  extern typeof (atan2 (vol_var___int128, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var___int128, vol_var_short_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_atan2_513 (void)
{
  extern typeof (atan2 (vol_var___int128, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var___int128, vol_var_unsigned_short_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_atan2_514 (void)
{
  extern typeof (atan2 (vol_var___int128, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var___int128, vol_var_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_atan2_515 (void)
{
  extern typeof (atan2 (vol_var___int128, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var___int128, vol_var_unsigned_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_atan2_516 (void)
{
  extern typeof (atan2 (vol_var___int128, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var___int128, vol_var_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_atan2_517 (void)
{
  extern typeof (atan2 (vol_var___int128, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var___int128, vol_var_unsigned_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_atan2_518 (void)
{
  extern typeof (atan2 (vol_var___int128, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var___int128, vol_var_long_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_atan2_519 (void)
{
  extern typeof (atan2 (vol_var___int128, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var___int128, vol_var_unsigned_long_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_atan2_520 (void)
{
  extern typeof (atan2 (vol_var___int128, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var___int128, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_atan2_521 (void)
{
  extern typeof (atan2 (vol_var___int128, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var___int128, vol_var_unsigned___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_atan2_522 (void)
{
  extern typeof (atan2 (vol_var___int128, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var___int128, vol_var_enum_e);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_atan2_523 (void)
{
  extern typeof (atan2 (vol_var___int128, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var___int128, vol_var__Bool);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_atan2_524 (void)
{
  extern typeof (atan2 (vol_var___int128, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var___int128, vol_var_bit_field);
}
#endif
#if defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_atan2_525 (void)
{
  extern typeof (atan2 (vol_var_unsigned___int128, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_unsigned___int128, vol_var__Float16);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_atan2_526 (void)
{
  extern typeof (atan2 (vol_var_unsigned___int128, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_unsigned___int128, vol_var_float);
}
#endif
#if defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_atan2_527 (void)
{
  extern typeof (atan2 (vol_var_unsigned___int128, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_unsigned___int128, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_atan2_528 (void)
{
  extern typeof (atan2 (vol_var_unsigned___int128, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_unsigned___int128, vol_var__Float32x);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_atan2_529 (void)
{
  extern typeof (atan2 (vol_var_unsigned___int128, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_unsigned___int128, vol_var_double);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_atan2_530 (void)
{
  extern typeof (atan2 (vol_var_unsigned___int128, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = atan2 (vol_var_unsigned___int128, vol_var_long_double);
}
#endif
#if defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_atan2_531 (void)
{
  extern typeof (atan2 (vol_var_unsigned___int128, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = atan2 (vol_var_unsigned___int128, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_atan2_532 (void)
{
  extern typeof (atan2 (vol_var_unsigned___int128, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = atan2 (vol_var_unsigned___int128, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_atan2_533 (void)
{
  extern typeof (atan2 (vol_var_unsigned___int128, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = atan2 (vol_var_unsigned___int128, vol_var__Float128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_atan2_534 (void)
{
  extern typeof (atan2 (vol_var_unsigned___int128, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_unsigned___int128, vol_var_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_atan2_535 (void)
{
  extern typeof (atan2 (vol_var_unsigned___int128, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_unsigned___int128, vol_var_signed_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_atan2_536 (void)
{
  extern typeof (atan2 (vol_var_unsigned___int128, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_unsigned___int128, vol_var_unsigned_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_atan2_537 (void)
{
  extern typeof (atan2 (vol_var_unsigned___int128, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_unsigned___int128, vol_var_short_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_atan2_538 (void)
{
  extern typeof (atan2 (vol_var_unsigned___int128, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_unsigned___int128, vol_var_unsigned_short_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_atan2_539 (void)
{
  extern typeof (atan2 (vol_var_unsigned___int128, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_unsigned___int128, vol_var_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_atan2_540 (void)
{
  extern typeof (atan2 (vol_var_unsigned___int128, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_unsigned___int128, vol_var_unsigned_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_atan2_541 (void)
{
  extern typeof (atan2 (vol_var_unsigned___int128, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_unsigned___int128, vol_var_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_atan2_542 (void)
{
  extern typeof (atan2 (vol_var_unsigned___int128, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_unsigned___int128, vol_var_unsigned_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_atan2_543 (void)
{
  extern typeof (atan2 (vol_var_unsigned___int128, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_unsigned___int128, vol_var_long_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_atan2_544 (void)
{
  extern typeof (atan2 (vol_var_unsigned___int128, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_unsigned___int128, vol_var_unsigned_long_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_atan2_545 (void)
{
  extern typeof (atan2 (vol_var_unsigned___int128, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_unsigned___int128, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_atan2_546 (void)
{
  extern typeof (atan2 (vol_var_unsigned___int128, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_unsigned___int128, vol_var_unsigned___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_atan2_547 (void)
{
  extern typeof (atan2 (vol_var_unsigned___int128, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_unsigned___int128, vol_var_enum_e);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_atan2_548 (void)
{
  extern typeof (atan2 (vol_var_unsigned___int128, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_unsigned___int128, vol_var__Bool);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_atan2_549 (void)
{
  extern typeof (atan2 (vol_var_unsigned___int128, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_unsigned___int128, vol_var_bit_field);
}
#endif
#if defined HUGE_VAL_F16
static void
test_atan2_550 (void)
{
  extern typeof (atan2 (vol_var_enum_e, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_enum_e, vol_var__Float16);
}
#endif
static void
test_atan2_551 (void)
{
  extern typeof (atan2 (vol_var_enum_e, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_enum_e, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_atan2_552 (void)
{
  extern typeof (atan2 (vol_var_enum_e, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_enum_e, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_atan2_553 (void)
{
  extern typeof (atan2 (vol_var_enum_e, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_enum_e, vol_var__Float32x);
}
#endif
static void
test_atan2_554 (void)
{
  extern typeof (atan2 (vol_var_enum_e, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_enum_e, vol_var_double);
}
static void
test_atan2_555 (void)
{
  extern typeof (atan2 (vol_var_enum_e, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = atan2 (vol_var_enum_e, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_atan2_556 (void)
{
  extern typeof (atan2 (vol_var_enum_e, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = atan2 (vol_var_enum_e, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_atan2_557 (void)
{
  extern typeof (atan2 (vol_var_enum_e, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = atan2 (vol_var_enum_e, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_atan2_558 (void)
{
  extern typeof (atan2 (vol_var_enum_e, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = atan2 (vol_var_enum_e, vol_var__Float128);
}
#endif
static void
test_atan2_559 (void)
{
  extern typeof (atan2 (vol_var_enum_e, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_enum_e, vol_var_char);
}
static void
test_atan2_560 (void)
{
  extern typeof (atan2 (vol_var_enum_e, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_enum_e, vol_var_signed_char);
}
static void
test_atan2_561 (void)
{
  extern typeof (atan2 (vol_var_enum_e, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_enum_e, vol_var_unsigned_char);
}
static void
test_atan2_562 (void)
{
  extern typeof (atan2 (vol_var_enum_e, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_enum_e, vol_var_short_int);
}
static void
test_atan2_563 (void)
{
  extern typeof (atan2 (vol_var_enum_e, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_enum_e, vol_var_unsigned_short_int);
}
static void
test_atan2_564 (void)
{
  extern typeof (atan2 (vol_var_enum_e, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_enum_e, vol_var_int);
}
static void
test_atan2_565 (void)
{
  extern typeof (atan2 (vol_var_enum_e, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_enum_e, vol_var_unsigned_int);
}
static void
test_atan2_566 (void)
{
  extern typeof (atan2 (vol_var_enum_e, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_enum_e, vol_var_long_int);
}
static void
test_atan2_567 (void)
{
  extern typeof (atan2 (vol_var_enum_e, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_enum_e, vol_var_unsigned_long_int);
}
static void
test_atan2_568 (void)
{
  extern typeof (atan2 (vol_var_enum_e, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_enum_e, vol_var_long_long_int);
}
static void
test_atan2_569 (void)
{
  extern typeof (atan2 (vol_var_enum_e, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_enum_e, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_atan2_570 (void)
{
  extern typeof (atan2 (vol_var_enum_e, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_enum_e, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_atan2_571 (void)
{
  extern typeof (atan2 (vol_var_enum_e, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_enum_e, vol_var_unsigned___int128);
}
#endif
static void
test_atan2_572 (void)
{
  extern typeof (atan2 (vol_var_enum_e, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_enum_e, vol_var_enum_e);
}
static void
test_atan2_573 (void)
{
  extern typeof (atan2 (vol_var_enum_e, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_enum_e, vol_var__Bool);
}
static void
test_atan2_574 (void)
{
  extern typeof (atan2 (vol_var_enum_e, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_enum_e, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_atan2_575 (void)
{
  extern typeof (atan2 (vol_var__Bool, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var__Bool, vol_var__Float16);
}
#endif
static void
test_atan2_576 (void)
{
  extern typeof (atan2 (vol_var__Bool, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var__Bool, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_atan2_577 (void)
{
  extern typeof (atan2 (vol_var__Bool, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var__Bool, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_atan2_578 (void)
{
  extern typeof (atan2 (vol_var__Bool, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var__Bool, vol_var__Float32x);
}
#endif
static void
test_atan2_579 (void)
{
  extern typeof (atan2 (vol_var__Bool, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var__Bool, vol_var_double);
}
static void
test_atan2_580 (void)
{
  extern typeof (atan2 (vol_var__Bool, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = atan2 (vol_var__Bool, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_atan2_581 (void)
{
  extern typeof (atan2 (vol_var__Bool, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = atan2 (vol_var__Bool, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_atan2_582 (void)
{
  extern typeof (atan2 (vol_var__Bool, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = atan2 (vol_var__Bool, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_atan2_583 (void)
{
  extern typeof (atan2 (vol_var__Bool, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = atan2 (vol_var__Bool, vol_var__Float128);
}
#endif
static void
test_atan2_584 (void)
{
  extern typeof (atan2 (vol_var__Bool, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var__Bool, vol_var_char);
}
static void
test_atan2_585 (void)
{
  extern typeof (atan2 (vol_var__Bool, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var__Bool, vol_var_signed_char);
}
static void
test_atan2_586 (void)
{
  extern typeof (atan2 (vol_var__Bool, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var__Bool, vol_var_unsigned_char);
}
static void
test_atan2_587 (void)
{
  extern typeof (atan2 (vol_var__Bool, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var__Bool, vol_var_short_int);
}
static void
test_atan2_588 (void)
{
  extern typeof (atan2 (vol_var__Bool, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var__Bool, vol_var_unsigned_short_int);
}
static void
test_atan2_589 (void)
{
  extern typeof (atan2 (vol_var__Bool, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var__Bool, vol_var_int);
}
static void
test_atan2_590 (void)
{
  extern typeof (atan2 (vol_var__Bool, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var__Bool, vol_var_unsigned_int);
}
static void
test_atan2_591 (void)
{
  extern typeof (atan2 (vol_var__Bool, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var__Bool, vol_var_long_int);
}
static void
test_atan2_592 (void)
{
  extern typeof (atan2 (vol_var__Bool, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var__Bool, vol_var_unsigned_long_int);
}
static void
test_atan2_593 (void)
{
  extern typeof (atan2 (vol_var__Bool, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var__Bool, vol_var_long_long_int);
}
static void
test_atan2_594 (void)
{
  extern typeof (atan2 (vol_var__Bool, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var__Bool, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_atan2_595 (void)
{
  extern typeof (atan2 (vol_var__Bool, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var__Bool, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_atan2_596 (void)
{
  extern typeof (atan2 (vol_var__Bool, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var__Bool, vol_var_unsigned___int128);
}
#endif
static void
test_atan2_597 (void)
{
  extern typeof (atan2 (vol_var__Bool, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var__Bool, vol_var_enum_e);
}
static void
test_atan2_598 (void)
{
  extern typeof (atan2 (vol_var__Bool, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var__Bool, vol_var__Bool);
}
static void
test_atan2_599 (void)
{
  extern typeof (atan2 (vol_var__Bool, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var__Bool, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_atan2_600 (void)
{
  extern typeof (atan2 (vol_var_bit_field, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_bit_field, vol_var__Float16);
}
#endif
static void
test_atan2_601 (void)
{
  extern typeof (atan2 (vol_var_bit_field, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_bit_field, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_atan2_602 (void)
{
  extern typeof (atan2 (vol_var_bit_field, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_bit_field, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_atan2_603 (void)
{
  extern typeof (atan2 (vol_var_bit_field, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_bit_field, vol_var__Float32x);
}
#endif
static void
test_atan2_604 (void)
{
  extern typeof (atan2 (vol_var_bit_field, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_bit_field, vol_var_double);
}
static void
test_atan2_605 (void)
{
  extern typeof (atan2 (vol_var_bit_field, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = atan2 (vol_var_bit_field, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_atan2_606 (void)
{
  extern typeof (atan2 (vol_var_bit_field, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = atan2 (vol_var_bit_field, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_atan2_607 (void)
{
  extern typeof (atan2 (vol_var_bit_field, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = atan2 (vol_var_bit_field, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_atan2_608 (void)
{
  extern typeof (atan2 (vol_var_bit_field, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = atan2 (vol_var_bit_field, vol_var__Float128);
}
#endif
static void
test_atan2_609 (void)
{
  extern typeof (atan2 (vol_var_bit_field, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_bit_field, vol_var_char);
}
static void
test_atan2_610 (void)
{
  extern typeof (atan2 (vol_var_bit_field, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_bit_field, vol_var_signed_char);
}
static void
test_atan2_611 (void)
{
  extern typeof (atan2 (vol_var_bit_field, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_bit_field, vol_var_unsigned_char);
}
static void
test_atan2_612 (void)
{
  extern typeof (atan2 (vol_var_bit_field, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_bit_field, vol_var_short_int);
}
static void
test_atan2_613 (void)
{
  extern typeof (atan2 (vol_var_bit_field, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_bit_field, vol_var_unsigned_short_int);
}
static void
test_atan2_614 (void)
{
  extern typeof (atan2 (vol_var_bit_field, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_bit_field, vol_var_int);
}
static void
test_atan2_615 (void)
{
  extern typeof (atan2 (vol_var_bit_field, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_bit_field, vol_var_unsigned_int);
}
static void
test_atan2_616 (void)
{
  extern typeof (atan2 (vol_var_bit_field, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_bit_field, vol_var_long_int);
}
static void
test_atan2_617 (void)
{
  extern typeof (atan2 (vol_var_bit_field, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_bit_field, vol_var_unsigned_long_int);
}
static void
test_atan2_618 (void)
{
  extern typeof (atan2 (vol_var_bit_field, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_bit_field, vol_var_long_long_int);
}
static void
test_atan2_619 (void)
{
  extern typeof (atan2 (vol_var_bit_field, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_bit_field, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_atan2_620 (void)
{
  extern typeof (atan2 (vol_var_bit_field, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_bit_field, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_atan2_621 (void)
{
  extern typeof (atan2 (vol_var_bit_field, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_bit_field, vol_var_unsigned___int128);
}
#endif
static void
test_atan2_622 (void)
{
  extern typeof (atan2 (vol_var_bit_field, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_bit_field, vol_var_enum_e);
}
static void
test_atan2_623 (void)
{
  extern typeof (atan2 (vol_var_bit_field, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_bit_field, vol_var__Bool);
}
static void
test_atan2_624 (void)
{
  extern typeof (atan2 (vol_var_bit_field, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = atan2 (vol_var_bit_field, vol_var_bit_field);
}
static const struct test tests[] =
  {
#if defined HUGE_VAL_F16
    { test_atan2_0, "atan2", "atan2 (_Float16, _Float16)", FLT16_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_atan2_1, "atan2", "atan2 (_Float16, float)", FLT_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F32
    { test_atan2_2, "atan2", "atan2 (_Float16, _Float32)", FLT32_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
    { test_atan2_3, "atan2", "atan2 (_Float16, _Float32x)", FLT32X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_atan2_4, "atan2", "atan2 (_Float16, double)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_atan2_5, "atan2", "atan2 (_Float16, long double)", LDBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F64
    { test_atan2_6, "atan2", "atan2 (_Float16, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
    { test_atan2_7, "atan2", "atan2 (_Float16, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F16
    { test_atan2_8, "atan2", "atan2 (_Float16, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_atan2_9, "atan2", "atan2 (_Float16, char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_atan2_10, "atan2", "atan2 (_Float16, signed char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_atan2_11, "atan2", "atan2 (_Float16, unsigned char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_atan2_12, "atan2", "atan2 (_Float16, short int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_atan2_13, "atan2", "atan2 (_Float16, unsigned short int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_atan2_14, "atan2", "atan2 (_Float16, int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_atan2_15, "atan2", "atan2 (_Float16, unsigned int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_atan2_16, "atan2", "atan2 (_Float16, long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_atan2_17, "atan2", "atan2 (_Float16, unsigned long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_atan2_18, "atan2", "atan2 (_Float16, long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_atan2_19, "atan2", "atan2 (_Float16, unsigned long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_atan2_20, "atan2", "atan2 (_Float16, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_atan2_21, "atan2", "atan2 (_Float16, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_atan2_22, "atan2", "atan2 (_Float16, enum e)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_atan2_23, "atan2", "atan2 (_Float16, _Bool)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_atan2_24, "atan2", "atan2 (_Float16, bit_field)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_atan2_25, "atan2", "atan2 (float, _Float16)", FLT_MANT_DIG, 0 },
#endif
    { test_atan2_26, "atan2", "atan2 (float, float)", FLT_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_atan2_27, "atan2", "atan2 (float, _Float32)", FLT32_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_atan2_28, "atan2", "atan2 (float, _Float32x)", FLT32X_MANT_DIG, 0 },
#endif
    { test_atan2_29, "atan2", "atan2 (float, double)", DBL_MANT_DIG, 0 },
    { test_atan2_30, "atan2", "atan2 (float, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_atan2_31, "atan2", "atan2 (float, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_atan2_32, "atan2", "atan2 (float, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_atan2_33, "atan2", "atan2 (float, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_atan2_34, "atan2", "atan2 (float, char)", DBL_MANT_DIG, 0 },
    { test_atan2_35, "atan2", "atan2 (float, signed char)", DBL_MANT_DIG, 0 },
    { test_atan2_36, "atan2", "atan2 (float, unsigned char)", DBL_MANT_DIG, 0 },
    { test_atan2_37, "atan2", "atan2 (float, short int)", DBL_MANT_DIG, 0 },
    { test_atan2_38, "atan2", "atan2 (float, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_atan2_39, "atan2", "atan2 (float, int)", DBL_MANT_DIG, 0 },
    { test_atan2_40, "atan2", "atan2 (float, unsigned int)", DBL_MANT_DIG, 0 },
    { test_atan2_41, "atan2", "atan2 (float, long int)", DBL_MANT_DIG, 0 },
    { test_atan2_42, "atan2", "atan2 (float, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_atan2_43, "atan2", "atan2 (float, long long int)", DBL_MANT_DIG, 0 },
    { test_atan2_44, "atan2", "atan2 (float, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_atan2_45, "atan2", "atan2 (float, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_atan2_46, "atan2", "atan2 (float, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_atan2_47, "atan2", "atan2 (float, enum e)", DBL_MANT_DIG, 0 },
    { test_atan2_48, "atan2", "atan2 (float, _Bool)", DBL_MANT_DIG, 0 },
    { test_atan2_49, "atan2", "atan2 (float, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F32
    { test_atan2_50, "atan2", "atan2 (_Float32, _Float16)", FLT32_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_atan2_51, "atan2", "atan2 (_Float32, float)", FLT32_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_atan2_52, "atan2", "atan2 (_Float32, _Float32)", FLT32_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
    { test_atan2_53, "atan2", "atan2 (_Float32, _Float32x)", FLT32X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_atan2_54, "atan2", "atan2 (_Float32, double)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_atan2_55, "atan2", "atan2 (_Float32, long double)", LDBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F64
    { test_atan2_56, "atan2", "atan2 (_Float32, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
    { test_atan2_57, "atan2", "atan2 (_Float32, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F32
    { test_atan2_58, "atan2", "atan2 (_Float32, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_atan2_59, "atan2", "atan2 (_Float32, char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_atan2_60, "atan2", "atan2 (_Float32, signed char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_atan2_61, "atan2", "atan2 (_Float32, unsigned char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_atan2_62, "atan2", "atan2 (_Float32, short int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_atan2_63, "atan2", "atan2 (_Float32, unsigned short int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_atan2_64, "atan2", "atan2 (_Float32, int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_atan2_65, "atan2", "atan2 (_Float32, unsigned int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_atan2_66, "atan2", "atan2 (_Float32, long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_atan2_67, "atan2", "atan2 (_Float32, unsigned long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_atan2_68, "atan2", "atan2 (_Float32, long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_atan2_69, "atan2", "atan2 (_Float32, unsigned long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_atan2_70, "atan2", "atan2 (_Float32, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_atan2_71, "atan2", "atan2 (_Float32, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_atan2_72, "atan2", "atan2 (_Float32, enum e)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_atan2_73, "atan2", "atan2 (_Float32, _Bool)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_atan2_74, "atan2", "atan2 (_Float32, bit_field)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
    { test_atan2_75, "atan2", "atan2 (_Float32x, _Float16)", FLT32X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_atan2_76, "atan2", "atan2 (_Float32x, float)", FLT32X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
    { test_atan2_77, "atan2", "atan2 (_Float32x, _Float32)", FLT32X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_atan2_78, "atan2", "atan2 (_Float32x, _Float32x)", FLT32X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_atan2_79, "atan2", "atan2 (_Float32x, double)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_atan2_80, "atan2", "atan2 (_Float32x, long double)", LDBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X && defined HUGE_VAL_F64
    { test_atan2_81, "atan2", "atan2 (_Float32x, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
    { test_atan2_82, "atan2", "atan2 (_Float32x, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
    { test_atan2_83, "atan2", "atan2 (_Float32x, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_atan2_84, "atan2", "atan2 (_Float32x, char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_atan2_85, "atan2", "atan2 (_Float32x, signed char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_atan2_86, "atan2", "atan2 (_Float32x, unsigned char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_atan2_87, "atan2", "atan2 (_Float32x, short int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_atan2_88, "atan2", "atan2 (_Float32x, unsigned short int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_atan2_89, "atan2", "atan2 (_Float32x, int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_atan2_90, "atan2", "atan2 (_Float32x, unsigned int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_atan2_91, "atan2", "atan2 (_Float32x, long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_atan2_92, "atan2", "atan2 (_Float32x, unsigned long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_atan2_93, "atan2", "atan2 (_Float32x, long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_atan2_94, "atan2", "atan2 (_Float32x, unsigned long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_atan2_95, "atan2", "atan2 (_Float32x, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_atan2_96, "atan2", "atan2 (_Float32x, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_atan2_97, "atan2", "atan2 (_Float32x, enum e)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_atan2_98, "atan2", "atan2 (_Float32x, _Bool)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_atan2_99, "atan2", "atan2 (_Float32x, bit_field)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_atan2_100, "atan2", "atan2 (double, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_atan2_101, "atan2", "atan2 (double, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_atan2_102, "atan2", "atan2 (double, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_atan2_103, "atan2", "atan2 (double, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_atan2_104, "atan2", "atan2 (double, double)", DBL_MANT_DIG, 0 },
    { test_atan2_105, "atan2", "atan2 (double, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_atan2_106, "atan2", "atan2 (double, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_atan2_107, "atan2", "atan2 (double, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_atan2_108, "atan2", "atan2 (double, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_atan2_109, "atan2", "atan2 (double, char)", DBL_MANT_DIG, 0 },
    { test_atan2_110, "atan2", "atan2 (double, signed char)", DBL_MANT_DIG, 0 },
    { test_atan2_111, "atan2", "atan2 (double, unsigned char)", DBL_MANT_DIG, 0 },
    { test_atan2_112, "atan2", "atan2 (double, short int)", DBL_MANT_DIG, 0 },
    { test_atan2_113, "atan2", "atan2 (double, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_atan2_114, "atan2", "atan2 (double, int)", DBL_MANT_DIG, 0 },
    { test_atan2_115, "atan2", "atan2 (double, unsigned int)", DBL_MANT_DIG, 0 },
    { test_atan2_116, "atan2", "atan2 (double, long int)", DBL_MANT_DIG, 0 },
    { test_atan2_117, "atan2", "atan2 (double, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_atan2_118, "atan2", "atan2 (double, long long int)", DBL_MANT_DIG, 0 },
    { test_atan2_119, "atan2", "atan2 (double, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_atan2_120, "atan2", "atan2 (double, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_atan2_121, "atan2", "atan2 (double, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_atan2_122, "atan2", "atan2 (double, enum e)", DBL_MANT_DIG, 0 },
    { test_atan2_123, "atan2", "atan2 (double, _Bool)", DBL_MANT_DIG, 0 },
    { test_atan2_124, "atan2", "atan2 (double, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_atan2_125, "atan2", "atan2 (long double, _Float16)", LDBL_MANT_DIG, 0 },
#endif
    { test_atan2_126, "atan2", "atan2 (long double, float)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_atan2_127, "atan2", "atan2 (long double, _Float32)", LDBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_atan2_128, "atan2", "atan2 (long double, _Float32x)", LDBL_MANT_DIG, 0 },
#endif
    { test_atan2_129, "atan2", "atan2 (long double, double)", LDBL_MANT_DIG, 0 },
    { test_atan2_130, "atan2", "atan2 (long double, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_atan2_131, "atan2", "atan2 (long double, _Float64)", LDBL_MANT_DIG, 0 },
#endif
#if (LDBL_MANT_DIG != 106) && defined HUGE_VAL_F64X
    { test_atan2_132, "atan2", "atan2 (long double, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (LDBL_MANT_DIG != 106) && defined HUGE_VAL_F128
    { test_atan2_133, "atan2", "atan2 (long double, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_atan2_134, "atan2", "atan2 (long double, char)", LDBL_MANT_DIG, 0 },
    { test_atan2_135, "atan2", "atan2 (long double, signed char)", LDBL_MANT_DIG, 0 },
    { test_atan2_136, "atan2", "atan2 (long double, unsigned char)", LDBL_MANT_DIG, 0 },
    { test_atan2_137, "atan2", "atan2 (long double, short int)", LDBL_MANT_DIG, 0 },
    { test_atan2_138, "atan2", "atan2 (long double, unsigned short int)", LDBL_MANT_DIG, 0 },
    { test_atan2_139, "atan2", "atan2 (long double, int)", LDBL_MANT_DIG, 0 },
    { test_atan2_140, "atan2", "atan2 (long double, unsigned int)", LDBL_MANT_DIG, 0 },
    { test_atan2_141, "atan2", "atan2 (long double, long int)", LDBL_MANT_DIG, 0 },
    { test_atan2_142, "atan2", "atan2 (long double, unsigned long int)", LDBL_MANT_DIG, 0 },
    { test_atan2_143, "atan2", "atan2 (long double, long long int)", LDBL_MANT_DIG, 0 },
    { test_atan2_144, "atan2", "atan2 (long double, unsigned long long int)", LDBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_atan2_145, "atan2", "atan2 (long double, __int128)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_atan2_146, "atan2", "atan2 (long double, unsigned __int128)", LDBL_MANT_DIG, 0 },
#endif
    { test_atan2_147, "atan2", "atan2 (long double, enum e)", LDBL_MANT_DIG, 0 },
    { test_atan2_148, "atan2", "atan2 (long double, _Bool)", LDBL_MANT_DIG, 0 },
    { test_atan2_149, "atan2", "atan2 (long double, bit_field)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F64
    { test_atan2_150, "atan2", "atan2 (_Float64, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_atan2_151, "atan2", "atan2 (_Float64, float)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F64
    { test_atan2_152, "atan2", "atan2 (_Float64, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X && defined HUGE_VAL_F64
    { test_atan2_153, "atan2", "atan2 (_Float64, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_atan2_154, "atan2", "atan2 (_Float64, double)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_atan2_155, "atan2", "atan2 (_Float64, long double)", LDBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_atan2_156, "atan2", "atan2 (_Float64, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
    { test_atan2_157, "atan2", "atan2 (_Float64, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F64
    { test_atan2_158, "atan2", "atan2 (_Float64, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_atan2_159, "atan2", "atan2 (_Float64, char)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_atan2_160, "atan2", "atan2 (_Float64, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_atan2_161, "atan2", "atan2 (_Float64, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_atan2_162, "atan2", "atan2 (_Float64, short int)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_atan2_163, "atan2", "atan2 (_Float64, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_atan2_164, "atan2", "atan2 (_Float64, int)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_atan2_165, "atan2", "atan2 (_Float64, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_atan2_166, "atan2", "atan2 (_Float64, long int)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_atan2_167, "atan2", "atan2 (_Float64, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_atan2_168, "atan2", "atan2 (_Float64, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_atan2_169, "atan2", "atan2 (_Float64, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_atan2_170, "atan2", "atan2 (_Float64, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_atan2_171, "atan2", "atan2 (_Float64, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_atan2_172, "atan2", "atan2 (_Float64, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_atan2_173, "atan2", "atan2 (_Float64, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_atan2_174, "atan2", "atan2 (_Float64, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
    { test_atan2_175, "atan2", "atan2 (_Float64x, _Float16)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_atan2_176, "atan2", "atan2 (_Float64x, float)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
    { test_atan2_177, "atan2", "atan2 (_Float64x, _Float32)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
    { test_atan2_178, "atan2", "atan2 (_Float64x, _Float32x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_atan2_179, "atan2", "atan2 (_Float64x, double)", FLT64X_MANT_DIG, 0 },
#endif
#if (LDBL_MANT_DIG != 106) && defined HUGE_VAL_F64X
    { test_atan2_180, "atan2", "atan2 (_Float64x, long double)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
    { test_atan2_181, "atan2", "atan2 (_Float64x, _Float64)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_atan2_182, "atan2", "atan2 (_Float64x, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
    { test_atan2_183, "atan2", "atan2 (_Float64x, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_atan2_184, "atan2", "atan2 (_Float64x, char)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_atan2_185, "atan2", "atan2 (_Float64x, signed char)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_atan2_186, "atan2", "atan2 (_Float64x, unsigned char)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_atan2_187, "atan2", "atan2 (_Float64x, short int)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_atan2_188, "atan2", "atan2 (_Float64x, unsigned short int)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_atan2_189, "atan2", "atan2 (_Float64x, int)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_atan2_190, "atan2", "atan2 (_Float64x, unsigned int)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_atan2_191, "atan2", "atan2 (_Float64x, long int)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_atan2_192, "atan2", "atan2 (_Float64x, unsigned long int)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_atan2_193, "atan2", "atan2 (_Float64x, long long int)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_atan2_194, "atan2", "atan2 (_Float64x, unsigned long long int)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_atan2_195, "atan2", "atan2 (_Float64x, __int128)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_atan2_196, "atan2", "atan2 (_Float64x, unsigned __int128)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_atan2_197, "atan2", "atan2 (_Float64x, enum e)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_atan2_198, "atan2", "atan2 (_Float64x, _Bool)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_atan2_199, "atan2", "atan2 (_Float64x, bit_field)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F16
    { test_atan2_200, "atan2", "atan2 (_Float128, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_atan2_201, "atan2", "atan2 (_Float128, float)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F32
    { test_atan2_202, "atan2", "atan2 (_Float128, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
    { test_atan2_203, "atan2", "atan2 (_Float128, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_atan2_204, "atan2", "atan2 (_Float128, double)", FLT128_MANT_DIG, 0 },
#endif
#if (LDBL_MANT_DIG != 106) && defined HUGE_VAL_F128
    { test_atan2_205, "atan2", "atan2 (_Float128, long double)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F64
    { test_atan2_206, "atan2", "atan2 (_Float128, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
    { test_atan2_207, "atan2", "atan2 (_Float128, _Float64x)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_atan2_208, "atan2", "atan2 (_Float128, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_atan2_209, "atan2", "atan2 (_Float128, char)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_atan2_210, "atan2", "atan2 (_Float128, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_atan2_211, "atan2", "atan2 (_Float128, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_atan2_212, "atan2", "atan2 (_Float128, short int)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_atan2_213, "atan2", "atan2 (_Float128, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_atan2_214, "atan2", "atan2 (_Float128, int)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_atan2_215, "atan2", "atan2 (_Float128, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_atan2_216, "atan2", "atan2 (_Float128, long int)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_atan2_217, "atan2", "atan2 (_Float128, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_atan2_218, "atan2", "atan2 (_Float128, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_atan2_219, "atan2", "atan2 (_Float128, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_atan2_220, "atan2", "atan2 (_Float128, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_atan2_221, "atan2", "atan2 (_Float128, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_atan2_222, "atan2", "atan2 (_Float128, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_atan2_223, "atan2", "atan2 (_Float128, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_atan2_224, "atan2", "atan2 (_Float128, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_atan2_225, "atan2", "atan2 (char, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_atan2_226, "atan2", "atan2 (char, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_atan2_227, "atan2", "atan2 (char, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_atan2_228, "atan2", "atan2 (char, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_atan2_229, "atan2", "atan2 (char, double)", DBL_MANT_DIG, 0 },
    { test_atan2_230, "atan2", "atan2 (char, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_atan2_231, "atan2", "atan2 (char, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_atan2_232, "atan2", "atan2 (char, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_atan2_233, "atan2", "atan2 (char, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_atan2_234, "atan2", "atan2 (char, char)", DBL_MANT_DIG, 0 },
    { test_atan2_235, "atan2", "atan2 (char, signed char)", DBL_MANT_DIG, 0 },
    { test_atan2_236, "atan2", "atan2 (char, unsigned char)", DBL_MANT_DIG, 0 },
    { test_atan2_237, "atan2", "atan2 (char, short int)", DBL_MANT_DIG, 0 },
    { test_atan2_238, "atan2", "atan2 (char, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_atan2_239, "atan2", "atan2 (char, int)", DBL_MANT_DIG, 0 },
    { test_atan2_240, "atan2", "atan2 (char, unsigned int)", DBL_MANT_DIG, 0 },
    { test_atan2_241, "atan2", "atan2 (char, long int)", DBL_MANT_DIG, 0 },
    { test_atan2_242, "atan2", "atan2 (char, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_atan2_243, "atan2", "atan2 (char, long long int)", DBL_MANT_DIG, 0 },
    { test_atan2_244, "atan2", "atan2 (char, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_atan2_245, "atan2", "atan2 (char, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_atan2_246, "atan2", "atan2 (char, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_atan2_247, "atan2", "atan2 (char, enum e)", DBL_MANT_DIG, 0 },
    { test_atan2_248, "atan2", "atan2 (char, _Bool)", DBL_MANT_DIG, 0 },
    { test_atan2_249, "atan2", "atan2 (char, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_atan2_250, "atan2", "atan2 (signed char, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_atan2_251, "atan2", "atan2 (signed char, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_atan2_252, "atan2", "atan2 (signed char, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_atan2_253, "atan2", "atan2 (signed char, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_atan2_254, "atan2", "atan2 (signed char, double)", DBL_MANT_DIG, 0 },
    { test_atan2_255, "atan2", "atan2 (signed char, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_atan2_256, "atan2", "atan2 (signed char, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_atan2_257, "atan2", "atan2 (signed char, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_atan2_258, "atan2", "atan2 (signed char, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_atan2_259, "atan2", "atan2 (signed char, char)", DBL_MANT_DIG, 0 },
    { test_atan2_260, "atan2", "atan2 (signed char, signed char)", DBL_MANT_DIG, 0 },
    { test_atan2_261, "atan2", "atan2 (signed char, unsigned char)", DBL_MANT_DIG, 0 },
    { test_atan2_262, "atan2", "atan2 (signed char, short int)", DBL_MANT_DIG, 0 },
    { test_atan2_263, "atan2", "atan2 (signed char, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_atan2_264, "atan2", "atan2 (signed char, int)", DBL_MANT_DIG, 0 },
    { test_atan2_265, "atan2", "atan2 (signed char, unsigned int)", DBL_MANT_DIG, 0 },
    { test_atan2_266, "atan2", "atan2 (signed char, long int)", DBL_MANT_DIG, 0 },
    { test_atan2_267, "atan2", "atan2 (signed char, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_atan2_268, "atan2", "atan2 (signed char, long long int)", DBL_MANT_DIG, 0 },
    { test_atan2_269, "atan2", "atan2 (signed char, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_atan2_270, "atan2", "atan2 (signed char, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_atan2_271, "atan2", "atan2 (signed char, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_atan2_272, "atan2", "atan2 (signed char, enum e)", DBL_MANT_DIG, 0 },
    { test_atan2_273, "atan2", "atan2 (signed char, _Bool)", DBL_MANT_DIG, 0 },
    { test_atan2_274, "atan2", "atan2 (signed char, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_atan2_275, "atan2", "atan2 (unsigned char, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_atan2_276, "atan2", "atan2 (unsigned char, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_atan2_277, "atan2", "atan2 (unsigned char, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_atan2_278, "atan2", "atan2 (unsigned char, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_atan2_279, "atan2", "atan2 (unsigned char, double)", DBL_MANT_DIG, 0 },
    { test_atan2_280, "atan2", "atan2 (unsigned char, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_atan2_281, "atan2", "atan2 (unsigned char, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_atan2_282, "atan2", "atan2 (unsigned char, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_atan2_283, "atan2", "atan2 (unsigned char, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_atan2_284, "atan2", "atan2 (unsigned char, char)", DBL_MANT_DIG, 0 },
    { test_atan2_285, "atan2", "atan2 (unsigned char, signed char)", DBL_MANT_DIG, 0 },
    { test_atan2_286, "atan2", "atan2 (unsigned char, unsigned char)", DBL_MANT_DIG, 0 },
    { test_atan2_287, "atan2", "atan2 (unsigned char, short int)", DBL_MANT_DIG, 0 },
    { test_atan2_288, "atan2", "atan2 (unsigned char, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_atan2_289, "atan2", "atan2 (unsigned char, int)", DBL_MANT_DIG, 0 },
    { test_atan2_290, "atan2", "atan2 (unsigned char, unsigned int)", DBL_MANT_DIG, 0 },
    { test_atan2_291, "atan2", "atan2 (unsigned char, long int)", DBL_MANT_DIG, 0 },
    { test_atan2_292, "atan2", "atan2 (unsigned char, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_atan2_293, "atan2", "atan2 (unsigned char, long long int)", DBL_MANT_DIG, 0 },
    { test_atan2_294, "atan2", "atan2 (unsigned char, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_atan2_295, "atan2", "atan2 (unsigned char, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_atan2_296, "atan2", "atan2 (unsigned char, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_atan2_297, "atan2", "atan2 (unsigned char, enum e)", DBL_MANT_DIG, 0 },
    { test_atan2_298, "atan2", "atan2 (unsigned char, _Bool)", DBL_MANT_DIG, 0 },
    { test_atan2_299, "atan2", "atan2 (unsigned char, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_atan2_300, "atan2", "atan2 (short int, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_atan2_301, "atan2", "atan2 (short int, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_atan2_302, "atan2", "atan2 (short int, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_atan2_303, "atan2", "atan2 (short int, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_atan2_304, "atan2", "atan2 (short int, double)", DBL_MANT_DIG, 0 },
    { test_atan2_305, "atan2", "atan2 (short int, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_atan2_306, "atan2", "atan2 (short int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_atan2_307, "atan2", "atan2 (short int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_atan2_308, "atan2", "atan2 (short int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_atan2_309, "atan2", "atan2 (short int, char)", DBL_MANT_DIG, 0 },
    { test_atan2_310, "atan2", "atan2 (short int, signed char)", DBL_MANT_DIG, 0 },
    { test_atan2_311, "atan2", "atan2 (short int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_atan2_312, "atan2", "atan2 (short int, short int)", DBL_MANT_DIG, 0 },
    { test_atan2_313, "atan2", "atan2 (short int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_atan2_314, "atan2", "atan2 (short int, int)", DBL_MANT_DIG, 0 },
    { test_atan2_315, "atan2", "atan2 (short int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_atan2_316, "atan2", "atan2 (short int, long int)", DBL_MANT_DIG, 0 },
    { test_atan2_317, "atan2", "atan2 (short int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_atan2_318, "atan2", "atan2 (short int, long long int)", DBL_MANT_DIG, 0 },
    { test_atan2_319, "atan2", "atan2 (short int, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_atan2_320, "atan2", "atan2 (short int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_atan2_321, "atan2", "atan2 (short int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_atan2_322, "atan2", "atan2 (short int, enum e)", DBL_MANT_DIG, 0 },
    { test_atan2_323, "atan2", "atan2 (short int, _Bool)", DBL_MANT_DIG, 0 },
    { test_atan2_324, "atan2", "atan2 (short int, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_atan2_325, "atan2", "atan2 (unsigned short int, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_atan2_326, "atan2", "atan2 (unsigned short int, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_atan2_327, "atan2", "atan2 (unsigned short int, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_atan2_328, "atan2", "atan2 (unsigned short int, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_atan2_329, "atan2", "atan2 (unsigned short int, double)", DBL_MANT_DIG, 0 },
    { test_atan2_330, "atan2", "atan2 (unsigned short int, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_atan2_331, "atan2", "atan2 (unsigned short int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_atan2_332, "atan2", "atan2 (unsigned short int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_atan2_333, "atan2", "atan2 (unsigned short int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_atan2_334, "atan2", "atan2 (unsigned short int, char)", DBL_MANT_DIG, 0 },
    { test_atan2_335, "atan2", "atan2 (unsigned short int, signed char)", DBL_MANT_DIG, 0 },
    { test_atan2_336, "atan2", "atan2 (unsigned short int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_atan2_337, "atan2", "atan2 (unsigned short int, short int)", DBL_MANT_DIG, 0 },
    { test_atan2_338, "atan2", "atan2 (unsigned short int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_atan2_339, "atan2", "atan2 (unsigned short int, int)", DBL_MANT_DIG, 0 },
    { test_atan2_340, "atan2", "atan2 (unsigned short int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_atan2_341, "atan2", "atan2 (unsigned short int, long int)", DBL_MANT_DIG, 0 },
    { test_atan2_342, "atan2", "atan2 (unsigned short int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_atan2_343, "atan2", "atan2 (unsigned short int, long long int)", DBL_MANT_DIG, 0 },
    { test_atan2_344, "atan2", "atan2 (unsigned short int, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_atan2_345, "atan2", "atan2 (unsigned short int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_atan2_346, "atan2", "atan2 (unsigned short int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_atan2_347, "atan2", "atan2 (unsigned short int, enum e)", DBL_MANT_DIG, 0 },
    { test_atan2_348, "atan2", "atan2 (unsigned short int, _Bool)", DBL_MANT_DIG, 0 },
    { test_atan2_349, "atan2", "atan2 (unsigned short int, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_atan2_350, "atan2", "atan2 (int, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_atan2_351, "atan2", "atan2 (int, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_atan2_352, "atan2", "atan2 (int, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_atan2_353, "atan2", "atan2 (int, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_atan2_354, "atan2", "atan2 (int, double)", DBL_MANT_DIG, 0 },
    { test_atan2_355, "atan2", "atan2 (int, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_atan2_356, "atan2", "atan2 (int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_atan2_357, "atan2", "atan2 (int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_atan2_358, "atan2", "atan2 (int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_atan2_359, "atan2", "atan2 (int, char)", DBL_MANT_DIG, 0 },
    { test_atan2_360, "atan2", "atan2 (int, signed char)", DBL_MANT_DIG, 0 },
    { test_atan2_361, "atan2", "atan2 (int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_atan2_362, "atan2", "atan2 (int, short int)", DBL_MANT_DIG, 0 },
    { test_atan2_363, "atan2", "atan2 (int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_atan2_364, "atan2", "atan2 (int, int)", DBL_MANT_DIG, 0 },
    { test_atan2_365, "atan2", "atan2 (int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_atan2_366, "atan2", "atan2 (int, long int)", DBL_MANT_DIG, 0 },
    { test_atan2_367, "atan2", "atan2 (int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_atan2_368, "atan2", "atan2 (int, long long int)", DBL_MANT_DIG, 0 },
    { test_atan2_369, "atan2", "atan2 (int, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_atan2_370, "atan2", "atan2 (int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_atan2_371, "atan2", "atan2 (int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_atan2_372, "atan2", "atan2 (int, enum e)", DBL_MANT_DIG, 0 },
    { test_atan2_373, "atan2", "atan2 (int, _Bool)", DBL_MANT_DIG, 0 },
    { test_atan2_374, "atan2", "atan2 (int, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_atan2_375, "atan2", "atan2 (unsigned int, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_atan2_376, "atan2", "atan2 (unsigned int, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_atan2_377, "atan2", "atan2 (unsigned int, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_atan2_378, "atan2", "atan2 (unsigned int, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_atan2_379, "atan2", "atan2 (unsigned int, double)", DBL_MANT_DIG, 0 },
    { test_atan2_380, "atan2", "atan2 (unsigned int, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_atan2_381, "atan2", "atan2 (unsigned int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_atan2_382, "atan2", "atan2 (unsigned int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_atan2_383, "atan2", "atan2 (unsigned int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_atan2_384, "atan2", "atan2 (unsigned int, char)", DBL_MANT_DIG, 0 },
    { test_atan2_385, "atan2", "atan2 (unsigned int, signed char)", DBL_MANT_DIG, 0 },
    { test_atan2_386, "atan2", "atan2 (unsigned int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_atan2_387, "atan2", "atan2 (unsigned int, short int)", DBL_MANT_DIG, 0 },
    { test_atan2_388, "atan2", "atan2 (unsigned int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_atan2_389, "atan2", "atan2 (unsigned int, int)", DBL_MANT_DIG, 0 },
    { test_atan2_390, "atan2", "atan2 (unsigned int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_atan2_391, "atan2", "atan2 (unsigned int, long int)", DBL_MANT_DIG, 0 },
    { test_atan2_392, "atan2", "atan2 (unsigned int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_atan2_393, "atan2", "atan2 (unsigned int, long long int)", DBL_MANT_DIG, 0 },
    { test_atan2_394, "atan2", "atan2 (unsigned int, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_atan2_395, "atan2", "atan2 (unsigned int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_atan2_396, "atan2", "atan2 (unsigned int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_atan2_397, "atan2", "atan2 (unsigned int, enum e)", DBL_MANT_DIG, 0 },
    { test_atan2_398, "atan2", "atan2 (unsigned int, _Bool)", DBL_MANT_DIG, 0 },
    { test_atan2_399, "atan2", "atan2 (unsigned int, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_atan2_400, "atan2", "atan2 (long int, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_atan2_401, "atan2", "atan2 (long int, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_atan2_402, "atan2", "atan2 (long int, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_atan2_403, "atan2", "atan2 (long int, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_atan2_404, "atan2", "atan2 (long int, double)", DBL_MANT_DIG, 0 },
    { test_atan2_405, "atan2", "atan2 (long int, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_atan2_406, "atan2", "atan2 (long int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_atan2_407, "atan2", "atan2 (long int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_atan2_408, "atan2", "atan2 (long int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_atan2_409, "atan2", "atan2 (long int, char)", DBL_MANT_DIG, 0 },
    { test_atan2_410, "atan2", "atan2 (long int, signed char)", DBL_MANT_DIG, 0 },
    { test_atan2_411, "atan2", "atan2 (long int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_atan2_412, "atan2", "atan2 (long int, short int)", DBL_MANT_DIG, 0 },
    { test_atan2_413, "atan2", "atan2 (long int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_atan2_414, "atan2", "atan2 (long int, int)", DBL_MANT_DIG, 0 },
    { test_atan2_415, "atan2", "atan2 (long int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_atan2_416, "atan2", "atan2 (long int, long int)", DBL_MANT_DIG, 0 },
    { test_atan2_417, "atan2", "atan2 (long int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_atan2_418, "atan2", "atan2 (long int, long long int)", DBL_MANT_DIG, 0 },
    { test_atan2_419, "atan2", "atan2 (long int, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_atan2_420, "atan2", "atan2 (long int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_atan2_421, "atan2", "atan2 (long int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_atan2_422, "atan2", "atan2 (long int, enum e)", DBL_MANT_DIG, 0 },
    { test_atan2_423, "atan2", "atan2 (long int, _Bool)", DBL_MANT_DIG, 0 },
    { test_atan2_424, "atan2", "atan2 (long int, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_atan2_425, "atan2", "atan2 (unsigned long int, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_atan2_426, "atan2", "atan2 (unsigned long int, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_atan2_427, "atan2", "atan2 (unsigned long int, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_atan2_428, "atan2", "atan2 (unsigned long int, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_atan2_429, "atan2", "atan2 (unsigned long int, double)", DBL_MANT_DIG, 0 },
    { test_atan2_430, "atan2", "atan2 (unsigned long int, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_atan2_431, "atan2", "atan2 (unsigned long int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_atan2_432, "atan2", "atan2 (unsigned long int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_atan2_433, "atan2", "atan2 (unsigned long int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_atan2_434, "atan2", "atan2 (unsigned long int, char)", DBL_MANT_DIG, 0 },
    { test_atan2_435, "atan2", "atan2 (unsigned long int, signed char)", DBL_MANT_DIG, 0 },
    { test_atan2_436, "atan2", "atan2 (unsigned long int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_atan2_437, "atan2", "atan2 (unsigned long int, short int)", DBL_MANT_DIG, 0 },
    { test_atan2_438, "atan2", "atan2 (unsigned long int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_atan2_439, "atan2", "atan2 (unsigned long int, int)", DBL_MANT_DIG, 0 },
    { test_atan2_440, "atan2", "atan2 (unsigned long int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_atan2_441, "atan2", "atan2 (unsigned long int, long int)", DBL_MANT_DIG, 0 },
    { test_atan2_442, "atan2", "atan2 (unsigned long int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_atan2_443, "atan2", "atan2 (unsigned long int, long long int)", DBL_MANT_DIG, 0 },
    { test_atan2_444, "atan2", "atan2 (unsigned long int, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_atan2_445, "atan2", "atan2 (unsigned long int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_atan2_446, "atan2", "atan2 (unsigned long int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_atan2_447, "atan2", "atan2 (unsigned long int, enum e)", DBL_MANT_DIG, 0 },
    { test_atan2_448, "atan2", "atan2 (unsigned long int, _Bool)", DBL_MANT_DIG, 0 },
    { test_atan2_449, "atan2", "atan2 (unsigned long int, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_atan2_450, "atan2", "atan2 (long long int, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_atan2_451, "atan2", "atan2 (long long int, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_atan2_452, "atan2", "atan2 (long long int, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_atan2_453, "atan2", "atan2 (long long int, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_atan2_454, "atan2", "atan2 (long long int, double)", DBL_MANT_DIG, 0 },
    { test_atan2_455, "atan2", "atan2 (long long int, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_atan2_456, "atan2", "atan2 (long long int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_atan2_457, "atan2", "atan2 (long long int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_atan2_458, "atan2", "atan2 (long long int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_atan2_459, "atan2", "atan2 (long long int, char)", DBL_MANT_DIG, 0 },
    { test_atan2_460, "atan2", "atan2 (long long int, signed char)", DBL_MANT_DIG, 0 },
    { test_atan2_461, "atan2", "atan2 (long long int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_atan2_462, "atan2", "atan2 (long long int, short int)", DBL_MANT_DIG, 0 },
    { test_atan2_463, "atan2", "atan2 (long long int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_atan2_464, "atan2", "atan2 (long long int, int)", DBL_MANT_DIG, 0 },
    { test_atan2_465, "atan2", "atan2 (long long int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_atan2_466, "atan2", "atan2 (long long int, long int)", DBL_MANT_DIG, 0 },
    { test_atan2_467, "atan2", "atan2 (long long int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_atan2_468, "atan2", "atan2 (long long int, long long int)", DBL_MANT_DIG, 0 },
    { test_atan2_469, "atan2", "atan2 (long long int, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_atan2_470, "atan2", "atan2 (long long int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_atan2_471, "atan2", "atan2 (long long int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_atan2_472, "atan2", "atan2 (long long int, enum e)", DBL_MANT_DIG, 0 },
    { test_atan2_473, "atan2", "atan2 (long long int, _Bool)", DBL_MANT_DIG, 0 },
    { test_atan2_474, "atan2", "atan2 (long long int, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_atan2_475, "atan2", "atan2 (unsigned long long int, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_atan2_476, "atan2", "atan2 (unsigned long long int, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_atan2_477, "atan2", "atan2 (unsigned long long int, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_atan2_478, "atan2", "atan2 (unsigned long long int, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_atan2_479, "atan2", "atan2 (unsigned long long int, double)", DBL_MANT_DIG, 0 },
    { test_atan2_480, "atan2", "atan2 (unsigned long long int, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_atan2_481, "atan2", "atan2 (unsigned long long int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_atan2_482, "atan2", "atan2 (unsigned long long int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_atan2_483, "atan2", "atan2 (unsigned long long int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_atan2_484, "atan2", "atan2 (unsigned long long int, char)", DBL_MANT_DIG, 0 },
    { test_atan2_485, "atan2", "atan2 (unsigned long long int, signed char)", DBL_MANT_DIG, 0 },
    { test_atan2_486, "atan2", "atan2 (unsigned long long int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_atan2_487, "atan2", "atan2 (unsigned long long int, short int)", DBL_MANT_DIG, 0 },
    { test_atan2_488, "atan2", "atan2 (unsigned long long int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_atan2_489, "atan2", "atan2 (unsigned long long int, int)", DBL_MANT_DIG, 0 },
    { test_atan2_490, "atan2", "atan2 (unsigned long long int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_atan2_491, "atan2", "atan2 (unsigned long long int, long int)", DBL_MANT_DIG, 0 },
    { test_atan2_492, "atan2", "atan2 (unsigned long long int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_atan2_493, "atan2", "atan2 (unsigned long long int, long long int)", DBL_MANT_DIG, 0 },
    { test_atan2_494, "atan2", "atan2 (unsigned long long int, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_atan2_495, "atan2", "atan2 (unsigned long long int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_atan2_496, "atan2", "atan2 (unsigned long long int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_atan2_497, "atan2", "atan2 (unsigned long long int, enum e)", DBL_MANT_DIG, 0 },
    { test_atan2_498, "atan2", "atan2 (unsigned long long int, _Bool)", DBL_MANT_DIG, 0 },
    { test_atan2_499, "atan2", "atan2 (unsigned long long int, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_atan2_500, "atan2", "atan2 (__int128, _Float16)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_atan2_501, "atan2", "atan2 (__int128, float)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_atan2_502, "atan2", "atan2 (__int128, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_atan2_503, "atan2", "atan2 (__int128, _Float32x)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_atan2_504, "atan2", "atan2 (__int128, double)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_atan2_505, "atan2", "atan2 (__int128, long double)", LDBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_atan2_506, "atan2", "atan2 (__int128, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_atan2_507, "atan2", "atan2 (__int128, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_atan2_508, "atan2", "atan2 (__int128, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_atan2_509, "atan2", "atan2 (__int128, char)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_atan2_510, "atan2", "atan2 (__int128, signed char)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_atan2_511, "atan2", "atan2 (__int128, unsigned char)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_atan2_512, "atan2", "atan2 (__int128, short int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_atan2_513, "atan2", "atan2 (__int128, unsigned short int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_atan2_514, "atan2", "atan2 (__int128, int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_atan2_515, "atan2", "atan2 (__int128, unsigned int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_atan2_516, "atan2", "atan2 (__int128, long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_atan2_517, "atan2", "atan2 (__int128, unsigned long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_atan2_518, "atan2", "atan2 (__int128, long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_atan2_519, "atan2", "atan2 (__int128, unsigned long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_atan2_520, "atan2", "atan2 (__int128, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_atan2_521, "atan2", "atan2 (__int128, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_atan2_522, "atan2", "atan2 (__int128, enum e)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_atan2_523, "atan2", "atan2 (__int128, _Bool)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_atan2_524, "atan2", "atan2 (__int128, bit_field)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_atan2_525, "atan2", "atan2 (unsigned __int128, _Float16)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_atan2_526, "atan2", "atan2 (unsigned __int128, float)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_atan2_527, "atan2", "atan2 (unsigned __int128, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_atan2_528, "atan2", "atan2 (unsigned __int128, _Float32x)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_atan2_529, "atan2", "atan2 (unsigned __int128, double)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_atan2_530, "atan2", "atan2 (unsigned __int128, long double)", LDBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_atan2_531, "atan2", "atan2 (unsigned __int128, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_atan2_532, "atan2", "atan2 (unsigned __int128, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_atan2_533, "atan2", "atan2 (unsigned __int128, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_atan2_534, "atan2", "atan2 (unsigned __int128, char)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_atan2_535, "atan2", "atan2 (unsigned __int128, signed char)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_atan2_536, "atan2", "atan2 (unsigned __int128, unsigned char)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_atan2_537, "atan2", "atan2 (unsigned __int128, short int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_atan2_538, "atan2", "atan2 (unsigned __int128, unsigned short int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_atan2_539, "atan2", "atan2 (unsigned __int128, int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_atan2_540, "atan2", "atan2 (unsigned __int128, unsigned int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_atan2_541, "atan2", "atan2 (unsigned __int128, long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_atan2_542, "atan2", "atan2 (unsigned __int128, unsigned long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_atan2_543, "atan2", "atan2 (unsigned __int128, long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_atan2_544, "atan2", "atan2 (unsigned __int128, unsigned long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_atan2_545, "atan2", "atan2 (unsigned __int128, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_atan2_546, "atan2", "atan2 (unsigned __int128, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_atan2_547, "atan2", "atan2 (unsigned __int128, enum e)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_atan2_548, "atan2", "atan2 (unsigned __int128, _Bool)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_atan2_549, "atan2", "atan2 (unsigned __int128, bit_field)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_atan2_550, "atan2", "atan2 (enum e, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_atan2_551, "atan2", "atan2 (enum e, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_atan2_552, "atan2", "atan2 (enum e, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_atan2_553, "atan2", "atan2 (enum e, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_atan2_554, "atan2", "atan2 (enum e, double)", DBL_MANT_DIG, 0 },
    { test_atan2_555, "atan2", "atan2 (enum e, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_atan2_556, "atan2", "atan2 (enum e, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_atan2_557, "atan2", "atan2 (enum e, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_atan2_558, "atan2", "atan2 (enum e, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_atan2_559, "atan2", "atan2 (enum e, char)", DBL_MANT_DIG, 0 },
    { test_atan2_560, "atan2", "atan2 (enum e, signed char)", DBL_MANT_DIG, 0 },
    { test_atan2_561, "atan2", "atan2 (enum e, unsigned char)", DBL_MANT_DIG, 0 },
    { test_atan2_562, "atan2", "atan2 (enum e, short int)", DBL_MANT_DIG, 0 },
    { test_atan2_563, "atan2", "atan2 (enum e, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_atan2_564, "atan2", "atan2 (enum e, int)", DBL_MANT_DIG, 0 },
    { test_atan2_565, "atan2", "atan2 (enum e, unsigned int)", DBL_MANT_DIG, 0 },
    { test_atan2_566, "atan2", "atan2 (enum e, long int)", DBL_MANT_DIG, 0 },
    { test_atan2_567, "atan2", "atan2 (enum e, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_atan2_568, "atan2", "atan2 (enum e, long long int)", DBL_MANT_DIG, 0 },
    { test_atan2_569, "atan2", "atan2 (enum e, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_atan2_570, "atan2", "atan2 (enum e, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_atan2_571, "atan2", "atan2 (enum e, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_atan2_572, "atan2", "atan2 (enum e, enum e)", DBL_MANT_DIG, 0 },
    { test_atan2_573, "atan2", "atan2 (enum e, _Bool)", DBL_MANT_DIG, 0 },
    { test_atan2_574, "atan2", "atan2 (enum e, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_atan2_575, "atan2", "atan2 (_Bool, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_atan2_576, "atan2", "atan2 (_Bool, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_atan2_577, "atan2", "atan2 (_Bool, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_atan2_578, "atan2", "atan2 (_Bool, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_atan2_579, "atan2", "atan2 (_Bool, double)", DBL_MANT_DIG, 0 },
    { test_atan2_580, "atan2", "atan2 (_Bool, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_atan2_581, "atan2", "atan2 (_Bool, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_atan2_582, "atan2", "atan2 (_Bool, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_atan2_583, "atan2", "atan2 (_Bool, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_atan2_584, "atan2", "atan2 (_Bool, char)", DBL_MANT_DIG, 0 },
    { test_atan2_585, "atan2", "atan2 (_Bool, signed char)", DBL_MANT_DIG, 0 },
    { test_atan2_586, "atan2", "atan2 (_Bool, unsigned char)", DBL_MANT_DIG, 0 },
    { test_atan2_587, "atan2", "atan2 (_Bool, short int)", DBL_MANT_DIG, 0 },
    { test_atan2_588, "atan2", "atan2 (_Bool, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_atan2_589, "atan2", "atan2 (_Bool, int)", DBL_MANT_DIG, 0 },
    { test_atan2_590, "atan2", "atan2 (_Bool, unsigned int)", DBL_MANT_DIG, 0 },
    { test_atan2_591, "atan2", "atan2 (_Bool, long int)", DBL_MANT_DIG, 0 },
    { test_atan2_592, "atan2", "atan2 (_Bool, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_atan2_593, "atan2", "atan2 (_Bool, long long int)", DBL_MANT_DIG, 0 },
    { test_atan2_594, "atan2", "atan2 (_Bool, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_atan2_595, "atan2", "atan2 (_Bool, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_atan2_596, "atan2", "atan2 (_Bool, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_atan2_597, "atan2", "atan2 (_Bool, enum e)", DBL_MANT_DIG, 0 },
    { test_atan2_598, "atan2", "atan2 (_Bool, _Bool)", DBL_MANT_DIG, 0 },
    { test_atan2_599, "atan2", "atan2 (_Bool, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_atan2_600, "atan2", "atan2 (bit_field, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_atan2_601, "atan2", "atan2 (bit_field, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_atan2_602, "atan2", "atan2 (bit_field, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_atan2_603, "atan2", "atan2 (bit_field, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_atan2_604, "atan2", "atan2 (bit_field, double)", DBL_MANT_DIG, 0 },
    { test_atan2_605, "atan2", "atan2 (bit_field, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_atan2_606, "atan2", "atan2 (bit_field, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_atan2_607, "atan2", "atan2 (bit_field, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_atan2_608, "atan2", "atan2 (bit_field, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_atan2_609, "atan2", "atan2 (bit_field, char)", DBL_MANT_DIG, 0 },
    { test_atan2_610, "atan2", "atan2 (bit_field, signed char)", DBL_MANT_DIG, 0 },
    { test_atan2_611, "atan2", "atan2 (bit_field, unsigned char)", DBL_MANT_DIG, 0 },
    { test_atan2_612, "atan2", "atan2 (bit_field, short int)", DBL_MANT_DIG, 0 },
    { test_atan2_613, "atan2", "atan2 (bit_field, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_atan2_614, "atan2", "atan2 (bit_field, int)", DBL_MANT_DIG, 0 },
    { test_atan2_615, "atan2", "atan2 (bit_field, unsigned int)", DBL_MANT_DIG, 0 },
    { test_atan2_616, "atan2", "atan2 (bit_field, long int)", DBL_MANT_DIG, 0 },
    { test_atan2_617, "atan2", "atan2 (bit_field, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_atan2_618, "atan2", "atan2 (bit_field, long long int)", DBL_MANT_DIG, 0 },
    { test_atan2_619, "atan2", "atan2 (bit_field, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_atan2_620, "atan2", "atan2 (bit_field, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_atan2_621, "atan2", "atan2 (bit_field, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_atan2_622, "atan2", "atan2 (bit_field, enum e)", DBL_MANT_DIG, 0 },
    { test_atan2_623, "atan2", "atan2 (bit_field, _Bool)", DBL_MANT_DIG, 0 },
    { test_atan2_624, "atan2", "atan2 (bit_field, bit_field)", DBL_MANT_DIG, 0 },
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
