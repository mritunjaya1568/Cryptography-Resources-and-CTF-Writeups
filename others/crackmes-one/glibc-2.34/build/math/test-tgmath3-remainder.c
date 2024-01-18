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
(remainderf16) (_Float16 arg0 __attribute__ ((unused)), _Float16 arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT16_MANT_DIG;
  called_func_name = "remainder";
  return 0;
}
#endif
float
(remainderf) (float arg0 __attribute__ ((unused)), float arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT_MANT_DIG;
  called_func_name = "remainder";
  return 0;
}
#if defined HUGE_VAL_F32
_Float32
(remainderf32) (_Float32 arg0 __attribute__ ((unused)), _Float32 arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT32_MANT_DIG;
  called_func_name = "remainder";
  return 0;
}
#endif
#if defined HUGE_VAL_F32X
_Float32x
(remainderf32x) (_Float32x arg0 __attribute__ ((unused)), _Float32x arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT32X_MANT_DIG;
  called_func_name = "remainder";
  return 0;
}
#endif
double
(remainder) (double arg0 __attribute__ ((unused)), double arg1 __attribute__ ((unused)))
{
  called_mant_dig = DBL_MANT_DIG;
  called_func_name = "remainder";
  return 0;
}
long double
(remainderl) (long double arg0 __attribute__ ((unused)), long double arg1 __attribute__ ((unused)))
{
  called_mant_dig = LDBL_MANT_DIG;
  called_func_name = "remainder";
  return 0;
}
#if defined HUGE_VAL_F64
_Float64
(remainderf64) (_Float64 arg0 __attribute__ ((unused)), _Float64 arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT64_MANT_DIG;
  called_func_name = "remainder";
  return 0;
}
#endif
#if defined HUGE_VAL_F64X
_Float64x
(remainderf64x) (_Float64x arg0 __attribute__ ((unused)), _Float64x arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT64X_MANT_DIG;
  called_func_name = "remainder";
  return 0;
}
#endif
#if defined HUGE_VAL_F128
_Float128
(remainderf128) (_Float128 arg0 __attribute__ ((unused)), _Float128 arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT128_MANT_DIG;
  called_func_name = "remainder";
  return 0;
}
#endif
#if defined HUGE_VAL_F16
static void
test_remainder_0 (void)
{
  extern typeof (remainder (vol_var__Float16, vol_var__Float16)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = remainder (vol_var__Float16, vol_var__Float16);
}
#endif
#if defined HUGE_VAL_F16
static void
test_remainder_1 (void)
{
  extern typeof (remainder (vol_var__Float16, vol_var_float)) var_float __attribute__ ((unused));
  vol_var_float = remainder (vol_var__Float16, vol_var_float);
}
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F32
static void
test_remainder_2 (void)
{
  extern typeof (remainder (vol_var__Float16, vol_var__Float32)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = remainder (vol_var__Float16, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
static void
test_remainder_3 (void)
{
  extern typeof (remainder (vol_var__Float16, vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = remainder (vol_var__Float16, vol_var__Float32x);
}
#endif
#if defined HUGE_VAL_F16
static void
test_remainder_4 (void)
{
  extern typeof (remainder (vol_var__Float16, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var__Float16, vol_var_double);
}
#endif
#if defined HUGE_VAL_F16
static void
test_remainder_5 (void)
{
  extern typeof (remainder (vol_var__Float16, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = remainder (vol_var__Float16, vol_var_long_double);
}
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F64
static void
test_remainder_6 (void)
{
  extern typeof (remainder (vol_var__Float16, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = remainder (vol_var__Float16, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
static void
test_remainder_7 (void)
{
  extern typeof (remainder (vol_var__Float16, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = remainder (vol_var__Float16, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F16
static void
test_remainder_8 (void)
{
  extern typeof (remainder (vol_var__Float16, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = remainder (vol_var__Float16, vol_var__Float128);
}
#endif
#if defined HUGE_VAL_F16
static void
test_remainder_9 (void)
{
  extern typeof (remainder (vol_var__Float16, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var__Float16, vol_var_char);
}
#endif
#if defined HUGE_VAL_F16
static void
test_remainder_10 (void)
{
  extern typeof (remainder (vol_var__Float16, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var__Float16, vol_var_signed_char);
}
#endif
#if defined HUGE_VAL_F16
static void
test_remainder_11 (void)
{
  extern typeof (remainder (vol_var__Float16, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var__Float16, vol_var_unsigned_char);
}
#endif
#if defined HUGE_VAL_F16
static void
test_remainder_12 (void)
{
  extern typeof (remainder (vol_var__Float16, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var__Float16, vol_var_short_int);
}
#endif
#if defined HUGE_VAL_F16
static void
test_remainder_13 (void)
{
  extern typeof (remainder (vol_var__Float16, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var__Float16, vol_var_unsigned_short_int);
}
#endif
#if defined HUGE_VAL_F16
static void
test_remainder_14 (void)
{
  extern typeof (remainder (vol_var__Float16, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var__Float16, vol_var_int);
}
#endif
#if defined HUGE_VAL_F16
static void
test_remainder_15 (void)
{
  extern typeof (remainder (vol_var__Float16, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var__Float16, vol_var_unsigned_int);
}
#endif
#if defined HUGE_VAL_F16
static void
test_remainder_16 (void)
{
  extern typeof (remainder (vol_var__Float16, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var__Float16, vol_var_long_int);
}
#endif
#if defined HUGE_VAL_F16
static void
test_remainder_17 (void)
{
  extern typeof (remainder (vol_var__Float16, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var__Float16, vol_var_unsigned_long_int);
}
#endif
#if defined HUGE_VAL_F16
static void
test_remainder_18 (void)
{
  extern typeof (remainder (vol_var__Float16, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var__Float16, vol_var_long_long_int);
}
#endif
#if defined HUGE_VAL_F16
static void
test_remainder_19 (void)
{
  extern typeof (remainder (vol_var__Float16, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var__Float16, vol_var_unsigned_long_long_int);
}
#endif
#if defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_remainder_20 (void)
{
  extern typeof (remainder (vol_var__Float16, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var__Float16, vol_var___int128);
}
#endif
#if defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_remainder_21 (void)
{
  extern typeof (remainder (vol_var__Float16, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var__Float16, vol_var_unsigned___int128);
}
#endif
#if defined HUGE_VAL_F16
static void
test_remainder_22 (void)
{
  extern typeof (remainder (vol_var__Float16, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var__Float16, vol_var_enum_e);
}
#endif
#if defined HUGE_VAL_F16
static void
test_remainder_23 (void)
{
  extern typeof (remainder (vol_var__Float16, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var__Float16, vol_var__Bool);
}
#endif
#if defined HUGE_VAL_F16
static void
test_remainder_24 (void)
{
  extern typeof (remainder (vol_var__Float16, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var__Float16, vol_var_bit_field);
}
#endif
#if defined HUGE_VAL_F16
static void
test_remainder_25 (void)
{
  extern typeof (remainder (vol_var_float, vol_var__Float16)) var_float __attribute__ ((unused));
  vol_var_float = remainder (vol_var_float, vol_var__Float16);
}
#endif
static void
test_remainder_26 (void)
{
  extern typeof (remainder (vol_var_float, vol_var_float)) var_float __attribute__ ((unused));
  vol_var_float = remainder (vol_var_float, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_remainder_27 (void)
{
  extern typeof (remainder (vol_var_float, vol_var__Float32)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = remainder (vol_var_float, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_remainder_28 (void)
{
  extern typeof (remainder (vol_var_float, vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = remainder (vol_var_float, vol_var__Float32x);
}
#endif
static void
test_remainder_29 (void)
{
  extern typeof (remainder (vol_var_float, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_float, vol_var_double);
}
static void
test_remainder_30 (void)
{
  extern typeof (remainder (vol_var_float, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = remainder (vol_var_float, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_remainder_31 (void)
{
  extern typeof (remainder (vol_var_float, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = remainder (vol_var_float, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_remainder_32 (void)
{
  extern typeof (remainder (vol_var_float, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = remainder (vol_var_float, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_remainder_33 (void)
{
  extern typeof (remainder (vol_var_float, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = remainder (vol_var_float, vol_var__Float128);
}
#endif
static void
test_remainder_34 (void)
{
  extern typeof (remainder (vol_var_float, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_float, vol_var_char);
}
static void
test_remainder_35 (void)
{
  extern typeof (remainder (vol_var_float, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_float, vol_var_signed_char);
}
static void
test_remainder_36 (void)
{
  extern typeof (remainder (vol_var_float, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_float, vol_var_unsigned_char);
}
static void
test_remainder_37 (void)
{
  extern typeof (remainder (vol_var_float, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_float, vol_var_short_int);
}
static void
test_remainder_38 (void)
{
  extern typeof (remainder (vol_var_float, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_float, vol_var_unsigned_short_int);
}
static void
test_remainder_39 (void)
{
  extern typeof (remainder (vol_var_float, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_float, vol_var_int);
}
static void
test_remainder_40 (void)
{
  extern typeof (remainder (vol_var_float, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_float, vol_var_unsigned_int);
}
static void
test_remainder_41 (void)
{
  extern typeof (remainder (vol_var_float, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_float, vol_var_long_int);
}
static void
test_remainder_42 (void)
{
  extern typeof (remainder (vol_var_float, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_float, vol_var_unsigned_long_int);
}
static void
test_remainder_43 (void)
{
  extern typeof (remainder (vol_var_float, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_float, vol_var_long_long_int);
}
static void
test_remainder_44 (void)
{
  extern typeof (remainder (vol_var_float, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_float, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_remainder_45 (void)
{
  extern typeof (remainder (vol_var_float, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_float, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_remainder_46 (void)
{
  extern typeof (remainder (vol_var_float, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_float, vol_var_unsigned___int128);
}
#endif
static void
test_remainder_47 (void)
{
  extern typeof (remainder (vol_var_float, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_float, vol_var_enum_e);
}
static void
test_remainder_48 (void)
{
  extern typeof (remainder (vol_var_float, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_float, vol_var__Bool);
}
static void
test_remainder_49 (void)
{
  extern typeof (remainder (vol_var_float, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_float, vol_var_bit_field);
}
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F32
static void
test_remainder_50 (void)
{
  extern typeof (remainder (vol_var__Float32, vol_var__Float16)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = remainder (vol_var__Float32, vol_var__Float16);
}
#endif
#if defined HUGE_VAL_F32
static void
test_remainder_51 (void)
{
  extern typeof (remainder (vol_var__Float32, vol_var_float)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = remainder (vol_var__Float32, vol_var_float);
}
#endif
#if defined HUGE_VAL_F32
static void
test_remainder_52 (void)
{
  extern typeof (remainder (vol_var__Float32, vol_var__Float32)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = remainder (vol_var__Float32, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
static void
test_remainder_53 (void)
{
  extern typeof (remainder (vol_var__Float32, vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = remainder (vol_var__Float32, vol_var__Float32x);
}
#endif
#if defined HUGE_VAL_F32
static void
test_remainder_54 (void)
{
  extern typeof (remainder (vol_var__Float32, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var__Float32, vol_var_double);
}
#endif
#if defined HUGE_VAL_F32
static void
test_remainder_55 (void)
{
  extern typeof (remainder (vol_var__Float32, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = remainder (vol_var__Float32, vol_var_long_double);
}
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F64
static void
test_remainder_56 (void)
{
  extern typeof (remainder (vol_var__Float32, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = remainder (vol_var__Float32, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
static void
test_remainder_57 (void)
{
  extern typeof (remainder (vol_var__Float32, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = remainder (vol_var__Float32, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F32
static void
test_remainder_58 (void)
{
  extern typeof (remainder (vol_var__Float32, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = remainder (vol_var__Float32, vol_var__Float128);
}
#endif
#if defined HUGE_VAL_F32
static void
test_remainder_59 (void)
{
  extern typeof (remainder (vol_var__Float32, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var__Float32, vol_var_char);
}
#endif
#if defined HUGE_VAL_F32
static void
test_remainder_60 (void)
{
  extern typeof (remainder (vol_var__Float32, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var__Float32, vol_var_signed_char);
}
#endif
#if defined HUGE_VAL_F32
static void
test_remainder_61 (void)
{
  extern typeof (remainder (vol_var__Float32, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var__Float32, vol_var_unsigned_char);
}
#endif
#if defined HUGE_VAL_F32
static void
test_remainder_62 (void)
{
  extern typeof (remainder (vol_var__Float32, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var__Float32, vol_var_short_int);
}
#endif
#if defined HUGE_VAL_F32
static void
test_remainder_63 (void)
{
  extern typeof (remainder (vol_var__Float32, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var__Float32, vol_var_unsigned_short_int);
}
#endif
#if defined HUGE_VAL_F32
static void
test_remainder_64 (void)
{
  extern typeof (remainder (vol_var__Float32, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var__Float32, vol_var_int);
}
#endif
#if defined HUGE_VAL_F32
static void
test_remainder_65 (void)
{
  extern typeof (remainder (vol_var__Float32, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var__Float32, vol_var_unsigned_int);
}
#endif
#if defined HUGE_VAL_F32
static void
test_remainder_66 (void)
{
  extern typeof (remainder (vol_var__Float32, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var__Float32, vol_var_long_int);
}
#endif
#if defined HUGE_VAL_F32
static void
test_remainder_67 (void)
{
  extern typeof (remainder (vol_var__Float32, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var__Float32, vol_var_unsigned_long_int);
}
#endif
#if defined HUGE_VAL_F32
static void
test_remainder_68 (void)
{
  extern typeof (remainder (vol_var__Float32, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var__Float32, vol_var_long_long_int);
}
#endif
#if defined HUGE_VAL_F32
static void
test_remainder_69 (void)
{
  extern typeof (remainder (vol_var__Float32, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var__Float32, vol_var_unsigned_long_long_int);
}
#endif
#if defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_remainder_70 (void)
{
  extern typeof (remainder (vol_var__Float32, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var__Float32, vol_var___int128);
}
#endif
#if defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_remainder_71 (void)
{
  extern typeof (remainder (vol_var__Float32, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var__Float32, vol_var_unsigned___int128);
}
#endif
#if defined HUGE_VAL_F32
static void
test_remainder_72 (void)
{
  extern typeof (remainder (vol_var__Float32, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var__Float32, vol_var_enum_e);
}
#endif
#if defined HUGE_VAL_F32
static void
test_remainder_73 (void)
{
  extern typeof (remainder (vol_var__Float32, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var__Float32, vol_var__Bool);
}
#endif
#if defined HUGE_VAL_F32
static void
test_remainder_74 (void)
{
  extern typeof (remainder (vol_var__Float32, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var__Float32, vol_var_bit_field);
}
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
static void
test_remainder_75 (void)
{
  extern typeof (remainder (vol_var__Float32x, vol_var__Float16)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = remainder (vol_var__Float32x, vol_var__Float16);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_remainder_76 (void)
{
  extern typeof (remainder (vol_var__Float32x, vol_var_float)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = remainder (vol_var__Float32x, vol_var_float);
}
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
static void
test_remainder_77 (void)
{
  extern typeof (remainder (vol_var__Float32x, vol_var__Float32)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = remainder (vol_var__Float32x, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_remainder_78 (void)
{
  extern typeof (remainder (vol_var__Float32x, vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = remainder (vol_var__Float32x, vol_var__Float32x);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_remainder_79 (void)
{
  extern typeof (remainder (vol_var__Float32x, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var__Float32x, vol_var_double);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_remainder_80 (void)
{
  extern typeof (remainder (vol_var__Float32x, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = remainder (vol_var__Float32x, vol_var_long_double);
}
#endif
#if defined HUGE_VAL_F32X && defined HUGE_VAL_F64
static void
test_remainder_81 (void)
{
  extern typeof (remainder (vol_var__Float32x, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = remainder (vol_var__Float32x, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
static void
test_remainder_82 (void)
{
  extern typeof (remainder (vol_var__Float32x, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = remainder (vol_var__Float32x, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
static void
test_remainder_83 (void)
{
  extern typeof (remainder (vol_var__Float32x, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = remainder (vol_var__Float32x, vol_var__Float128);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_remainder_84 (void)
{
  extern typeof (remainder (vol_var__Float32x, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var__Float32x, vol_var_char);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_remainder_85 (void)
{
  extern typeof (remainder (vol_var__Float32x, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var__Float32x, vol_var_signed_char);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_remainder_86 (void)
{
  extern typeof (remainder (vol_var__Float32x, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var__Float32x, vol_var_unsigned_char);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_remainder_87 (void)
{
  extern typeof (remainder (vol_var__Float32x, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var__Float32x, vol_var_short_int);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_remainder_88 (void)
{
  extern typeof (remainder (vol_var__Float32x, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var__Float32x, vol_var_unsigned_short_int);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_remainder_89 (void)
{
  extern typeof (remainder (vol_var__Float32x, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var__Float32x, vol_var_int);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_remainder_90 (void)
{
  extern typeof (remainder (vol_var__Float32x, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var__Float32x, vol_var_unsigned_int);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_remainder_91 (void)
{
  extern typeof (remainder (vol_var__Float32x, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var__Float32x, vol_var_long_int);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_remainder_92 (void)
{
  extern typeof (remainder (vol_var__Float32x, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var__Float32x, vol_var_unsigned_long_int);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_remainder_93 (void)
{
  extern typeof (remainder (vol_var__Float32x, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var__Float32x, vol_var_long_long_int);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_remainder_94 (void)
{
  extern typeof (remainder (vol_var__Float32x, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var__Float32x, vol_var_unsigned_long_long_int);
}
#endif
#if defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_remainder_95 (void)
{
  extern typeof (remainder (vol_var__Float32x, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var__Float32x, vol_var___int128);
}
#endif
#if defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_remainder_96 (void)
{
  extern typeof (remainder (vol_var__Float32x, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var__Float32x, vol_var_unsigned___int128);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_remainder_97 (void)
{
  extern typeof (remainder (vol_var__Float32x, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var__Float32x, vol_var_enum_e);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_remainder_98 (void)
{
  extern typeof (remainder (vol_var__Float32x, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var__Float32x, vol_var__Bool);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_remainder_99 (void)
{
  extern typeof (remainder (vol_var__Float32x, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var__Float32x, vol_var_bit_field);
}
#endif
#if defined HUGE_VAL_F16
static void
test_remainder_100 (void)
{
  extern typeof (remainder (vol_var_double, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_double, vol_var__Float16);
}
#endif
static void
test_remainder_101 (void)
{
  extern typeof (remainder (vol_var_double, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_double, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_remainder_102 (void)
{
  extern typeof (remainder (vol_var_double, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_double, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_remainder_103 (void)
{
  extern typeof (remainder (vol_var_double, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_double, vol_var__Float32x);
}
#endif
static void
test_remainder_104 (void)
{
  extern typeof (remainder (vol_var_double, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_double, vol_var_double);
}
static void
test_remainder_105 (void)
{
  extern typeof (remainder (vol_var_double, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = remainder (vol_var_double, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_remainder_106 (void)
{
  extern typeof (remainder (vol_var_double, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = remainder (vol_var_double, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_remainder_107 (void)
{
  extern typeof (remainder (vol_var_double, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = remainder (vol_var_double, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_remainder_108 (void)
{
  extern typeof (remainder (vol_var_double, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = remainder (vol_var_double, vol_var__Float128);
}
#endif
static void
test_remainder_109 (void)
{
  extern typeof (remainder (vol_var_double, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_double, vol_var_char);
}
static void
test_remainder_110 (void)
{
  extern typeof (remainder (vol_var_double, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_double, vol_var_signed_char);
}
static void
test_remainder_111 (void)
{
  extern typeof (remainder (vol_var_double, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_double, vol_var_unsigned_char);
}
static void
test_remainder_112 (void)
{
  extern typeof (remainder (vol_var_double, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_double, vol_var_short_int);
}
static void
test_remainder_113 (void)
{
  extern typeof (remainder (vol_var_double, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_double, vol_var_unsigned_short_int);
}
static void
test_remainder_114 (void)
{
  extern typeof (remainder (vol_var_double, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_double, vol_var_int);
}
static void
test_remainder_115 (void)
{
  extern typeof (remainder (vol_var_double, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_double, vol_var_unsigned_int);
}
static void
test_remainder_116 (void)
{
  extern typeof (remainder (vol_var_double, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_double, vol_var_long_int);
}
static void
test_remainder_117 (void)
{
  extern typeof (remainder (vol_var_double, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_double, vol_var_unsigned_long_int);
}
static void
test_remainder_118 (void)
{
  extern typeof (remainder (vol_var_double, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_double, vol_var_long_long_int);
}
static void
test_remainder_119 (void)
{
  extern typeof (remainder (vol_var_double, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_double, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_remainder_120 (void)
{
  extern typeof (remainder (vol_var_double, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_double, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_remainder_121 (void)
{
  extern typeof (remainder (vol_var_double, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_double, vol_var_unsigned___int128);
}
#endif
static void
test_remainder_122 (void)
{
  extern typeof (remainder (vol_var_double, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_double, vol_var_enum_e);
}
static void
test_remainder_123 (void)
{
  extern typeof (remainder (vol_var_double, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_double, vol_var__Bool);
}
static void
test_remainder_124 (void)
{
  extern typeof (remainder (vol_var_double, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_double, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_remainder_125 (void)
{
  extern typeof (remainder (vol_var_long_double, vol_var__Float16)) var_long_double __attribute__ ((unused));
  vol_var_long_double = remainder (vol_var_long_double, vol_var__Float16);
}
#endif
static void
test_remainder_126 (void)
{
  extern typeof (remainder (vol_var_long_double, vol_var_float)) var_long_double __attribute__ ((unused));
  vol_var_long_double = remainder (vol_var_long_double, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_remainder_127 (void)
{
  extern typeof (remainder (vol_var_long_double, vol_var__Float32)) var_long_double __attribute__ ((unused));
  vol_var_long_double = remainder (vol_var_long_double, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_remainder_128 (void)
{
  extern typeof (remainder (vol_var_long_double, vol_var__Float32x)) var_long_double __attribute__ ((unused));
  vol_var_long_double = remainder (vol_var_long_double, vol_var__Float32x);
}
#endif
static void
test_remainder_129 (void)
{
  extern typeof (remainder (vol_var_long_double, vol_var_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = remainder (vol_var_long_double, vol_var_double);
}
static void
test_remainder_130 (void)
{
  extern typeof (remainder (vol_var_long_double, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = remainder (vol_var_long_double, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_remainder_131 (void)
{
  extern typeof (remainder (vol_var_long_double, vol_var__Float64)) var_long_double_Float64 __attribute__ ((unused));
  vol_var_long_double_Float64 = remainder (vol_var_long_double, vol_var__Float64);
}
#endif
#if (LDBL_MANT_DIG != 106) && defined HUGE_VAL_F64X
static void
test_remainder_132 (void)
{
  extern typeof (remainder (vol_var_long_double, vol_var__Float64x)) var_long_double_Float64x __attribute__ ((unused));
  vol_var_long_double_Float64x = remainder (vol_var_long_double, vol_var__Float64x);
}
#endif
#if (LDBL_MANT_DIG != 106) && defined HUGE_VAL_F128
static void
test_remainder_133 (void)
{
  extern typeof (remainder (vol_var_long_double, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = remainder (vol_var_long_double, vol_var__Float128);
}
#endif
static void
test_remainder_134 (void)
{
  extern typeof (remainder (vol_var_long_double, vol_var_char)) var_long_double __attribute__ ((unused));
  vol_var_long_double = remainder (vol_var_long_double, vol_var_char);
}
static void
test_remainder_135 (void)
{
  extern typeof (remainder (vol_var_long_double, vol_var_signed_char)) var_long_double __attribute__ ((unused));
  vol_var_long_double = remainder (vol_var_long_double, vol_var_signed_char);
}
static void
test_remainder_136 (void)
{
  extern typeof (remainder (vol_var_long_double, vol_var_unsigned_char)) var_long_double __attribute__ ((unused));
  vol_var_long_double = remainder (vol_var_long_double, vol_var_unsigned_char);
}
static void
test_remainder_137 (void)
{
  extern typeof (remainder (vol_var_long_double, vol_var_short_int)) var_long_double __attribute__ ((unused));
  vol_var_long_double = remainder (vol_var_long_double, vol_var_short_int);
}
static void
test_remainder_138 (void)
{
  extern typeof (remainder (vol_var_long_double, vol_var_unsigned_short_int)) var_long_double __attribute__ ((unused));
  vol_var_long_double = remainder (vol_var_long_double, vol_var_unsigned_short_int);
}
static void
test_remainder_139 (void)
{
  extern typeof (remainder (vol_var_long_double, vol_var_int)) var_long_double __attribute__ ((unused));
  vol_var_long_double = remainder (vol_var_long_double, vol_var_int);
}
static void
test_remainder_140 (void)
{
  extern typeof (remainder (vol_var_long_double, vol_var_unsigned_int)) var_long_double __attribute__ ((unused));
  vol_var_long_double = remainder (vol_var_long_double, vol_var_unsigned_int);
}
static void
test_remainder_141 (void)
{
  extern typeof (remainder (vol_var_long_double, vol_var_long_int)) var_long_double __attribute__ ((unused));
  vol_var_long_double = remainder (vol_var_long_double, vol_var_long_int);
}
static void
test_remainder_142 (void)
{
  extern typeof (remainder (vol_var_long_double, vol_var_unsigned_long_int)) var_long_double __attribute__ ((unused));
  vol_var_long_double = remainder (vol_var_long_double, vol_var_unsigned_long_int);
}
static void
test_remainder_143 (void)
{
  extern typeof (remainder (vol_var_long_double, vol_var_long_long_int)) var_long_double __attribute__ ((unused));
  vol_var_long_double = remainder (vol_var_long_double, vol_var_long_long_int);
}
static void
test_remainder_144 (void)
{
  extern typeof (remainder (vol_var_long_double, vol_var_unsigned_long_long_int)) var_long_double __attribute__ ((unused));
  vol_var_long_double = remainder (vol_var_long_double, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_remainder_145 (void)
{
  extern typeof (remainder (vol_var_long_double, vol_var___int128)) var_long_double __attribute__ ((unused));
  vol_var_long_double = remainder (vol_var_long_double, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_remainder_146 (void)
{
  extern typeof (remainder (vol_var_long_double, vol_var_unsigned___int128)) var_long_double __attribute__ ((unused));
  vol_var_long_double = remainder (vol_var_long_double, vol_var_unsigned___int128);
}
#endif
static void
test_remainder_147 (void)
{
  extern typeof (remainder (vol_var_long_double, vol_var_enum_e)) var_long_double __attribute__ ((unused));
  vol_var_long_double = remainder (vol_var_long_double, vol_var_enum_e);
}
static void
test_remainder_148 (void)
{
  extern typeof (remainder (vol_var_long_double, vol_var__Bool)) var_long_double __attribute__ ((unused));
  vol_var_long_double = remainder (vol_var_long_double, vol_var__Bool);
}
static void
test_remainder_149 (void)
{
  extern typeof (remainder (vol_var_long_double, vol_var_bit_field)) var_long_double __attribute__ ((unused));
  vol_var_long_double = remainder (vol_var_long_double, vol_var_bit_field);
}
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F64
static void
test_remainder_150 (void)
{
  extern typeof (remainder (vol_var__Float64, vol_var__Float16)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = remainder (vol_var__Float64, vol_var__Float16);
}
#endif
#if defined HUGE_VAL_F64
static void
test_remainder_151 (void)
{
  extern typeof (remainder (vol_var__Float64, vol_var_float)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = remainder (vol_var__Float64, vol_var_float);
}
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F64
static void
test_remainder_152 (void)
{
  extern typeof (remainder (vol_var__Float64, vol_var__Float32)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = remainder (vol_var__Float64, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X && defined HUGE_VAL_F64
static void
test_remainder_153 (void)
{
  extern typeof (remainder (vol_var__Float64, vol_var__Float32x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = remainder (vol_var__Float64, vol_var__Float32x);
}
#endif
#if defined HUGE_VAL_F64
static void
test_remainder_154 (void)
{
  extern typeof (remainder (vol_var__Float64, vol_var_double)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = remainder (vol_var__Float64, vol_var_double);
}
#endif
#if defined HUGE_VAL_F64
static void
test_remainder_155 (void)
{
  extern typeof (remainder (vol_var__Float64, vol_var_long_double)) var_long_double_Float64 __attribute__ ((unused));
  vol_var_long_double_Float64 = remainder (vol_var__Float64, vol_var_long_double);
}
#endif
#if defined HUGE_VAL_F64
static void
test_remainder_156 (void)
{
  extern typeof (remainder (vol_var__Float64, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = remainder (vol_var__Float64, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
static void
test_remainder_157 (void)
{
  extern typeof (remainder (vol_var__Float64, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = remainder (vol_var__Float64, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F64
static void
test_remainder_158 (void)
{
  extern typeof (remainder (vol_var__Float64, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = remainder (vol_var__Float64, vol_var__Float128);
}
#endif
#if defined HUGE_VAL_F64
static void
test_remainder_159 (void)
{
  extern typeof (remainder (vol_var__Float64, vol_var_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = remainder (vol_var__Float64, vol_var_char);
}
#endif
#if defined HUGE_VAL_F64
static void
test_remainder_160 (void)
{
  extern typeof (remainder (vol_var__Float64, vol_var_signed_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = remainder (vol_var__Float64, vol_var_signed_char);
}
#endif
#if defined HUGE_VAL_F64
static void
test_remainder_161 (void)
{
  extern typeof (remainder (vol_var__Float64, vol_var_unsigned_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = remainder (vol_var__Float64, vol_var_unsigned_char);
}
#endif
#if defined HUGE_VAL_F64
static void
test_remainder_162 (void)
{
  extern typeof (remainder (vol_var__Float64, vol_var_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = remainder (vol_var__Float64, vol_var_short_int);
}
#endif
#if defined HUGE_VAL_F64
static void
test_remainder_163 (void)
{
  extern typeof (remainder (vol_var__Float64, vol_var_unsigned_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = remainder (vol_var__Float64, vol_var_unsigned_short_int);
}
#endif
#if defined HUGE_VAL_F64
static void
test_remainder_164 (void)
{
  extern typeof (remainder (vol_var__Float64, vol_var_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = remainder (vol_var__Float64, vol_var_int);
}
#endif
#if defined HUGE_VAL_F64
static void
test_remainder_165 (void)
{
  extern typeof (remainder (vol_var__Float64, vol_var_unsigned_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = remainder (vol_var__Float64, vol_var_unsigned_int);
}
#endif
#if defined HUGE_VAL_F64
static void
test_remainder_166 (void)
{
  extern typeof (remainder (vol_var__Float64, vol_var_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = remainder (vol_var__Float64, vol_var_long_int);
}
#endif
#if defined HUGE_VAL_F64
static void
test_remainder_167 (void)
{
  extern typeof (remainder (vol_var__Float64, vol_var_unsigned_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = remainder (vol_var__Float64, vol_var_unsigned_long_int);
}
#endif
#if defined HUGE_VAL_F64
static void
test_remainder_168 (void)
{
  extern typeof (remainder (vol_var__Float64, vol_var_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = remainder (vol_var__Float64, vol_var_long_long_int);
}
#endif
#if defined HUGE_VAL_F64
static void
test_remainder_169 (void)
{
  extern typeof (remainder (vol_var__Float64, vol_var_unsigned_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = remainder (vol_var__Float64, vol_var_unsigned_long_long_int);
}
#endif
#if defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_remainder_170 (void)
{
  extern typeof (remainder (vol_var__Float64, vol_var___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = remainder (vol_var__Float64, vol_var___int128);
}
#endif
#if defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_remainder_171 (void)
{
  extern typeof (remainder (vol_var__Float64, vol_var_unsigned___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = remainder (vol_var__Float64, vol_var_unsigned___int128);
}
#endif
#if defined HUGE_VAL_F64
static void
test_remainder_172 (void)
{
  extern typeof (remainder (vol_var__Float64, vol_var_enum_e)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = remainder (vol_var__Float64, vol_var_enum_e);
}
#endif
#if defined HUGE_VAL_F64
static void
test_remainder_173 (void)
{
  extern typeof (remainder (vol_var__Float64, vol_var__Bool)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = remainder (vol_var__Float64, vol_var__Bool);
}
#endif
#if defined HUGE_VAL_F64
static void
test_remainder_174 (void)
{
  extern typeof (remainder (vol_var__Float64, vol_var_bit_field)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = remainder (vol_var__Float64, vol_var_bit_field);
}
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
static void
test_remainder_175 (void)
{
  extern typeof (remainder (vol_var__Float64x, vol_var__Float16)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = remainder (vol_var__Float64x, vol_var__Float16);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_remainder_176 (void)
{
  extern typeof (remainder (vol_var__Float64x, vol_var_float)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = remainder (vol_var__Float64x, vol_var_float);
}
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
static void
test_remainder_177 (void)
{
  extern typeof (remainder (vol_var__Float64x, vol_var__Float32)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = remainder (vol_var__Float64x, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
static void
test_remainder_178 (void)
{
  extern typeof (remainder (vol_var__Float64x, vol_var__Float32x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = remainder (vol_var__Float64x, vol_var__Float32x);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_remainder_179 (void)
{
  extern typeof (remainder (vol_var__Float64x, vol_var_double)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = remainder (vol_var__Float64x, vol_var_double);
}
#endif
#if (LDBL_MANT_DIG != 106) && defined HUGE_VAL_F64X
static void
test_remainder_180 (void)
{
  extern typeof (remainder (vol_var__Float64x, vol_var_long_double)) var_long_double_Float64x __attribute__ ((unused));
  vol_var_long_double_Float64x = remainder (vol_var__Float64x, vol_var_long_double);
}
#endif
#if defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
static void
test_remainder_181 (void)
{
  extern typeof (remainder (vol_var__Float64x, vol_var__Float64)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = remainder (vol_var__Float64x, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_remainder_182 (void)
{
  extern typeof (remainder (vol_var__Float64x, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = remainder (vol_var__Float64x, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
static void
test_remainder_183 (void)
{
  extern typeof (remainder (vol_var__Float64x, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = remainder (vol_var__Float64x, vol_var__Float128);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_remainder_184 (void)
{
  extern typeof (remainder (vol_var__Float64x, vol_var_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = remainder (vol_var__Float64x, vol_var_char);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_remainder_185 (void)
{
  extern typeof (remainder (vol_var__Float64x, vol_var_signed_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = remainder (vol_var__Float64x, vol_var_signed_char);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_remainder_186 (void)
{
  extern typeof (remainder (vol_var__Float64x, vol_var_unsigned_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = remainder (vol_var__Float64x, vol_var_unsigned_char);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_remainder_187 (void)
{
  extern typeof (remainder (vol_var__Float64x, vol_var_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = remainder (vol_var__Float64x, vol_var_short_int);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_remainder_188 (void)
{
  extern typeof (remainder (vol_var__Float64x, vol_var_unsigned_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = remainder (vol_var__Float64x, vol_var_unsigned_short_int);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_remainder_189 (void)
{
  extern typeof (remainder (vol_var__Float64x, vol_var_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = remainder (vol_var__Float64x, vol_var_int);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_remainder_190 (void)
{
  extern typeof (remainder (vol_var__Float64x, vol_var_unsigned_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = remainder (vol_var__Float64x, vol_var_unsigned_int);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_remainder_191 (void)
{
  extern typeof (remainder (vol_var__Float64x, vol_var_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = remainder (vol_var__Float64x, vol_var_long_int);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_remainder_192 (void)
{
  extern typeof (remainder (vol_var__Float64x, vol_var_unsigned_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = remainder (vol_var__Float64x, vol_var_unsigned_long_int);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_remainder_193 (void)
{
  extern typeof (remainder (vol_var__Float64x, vol_var_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = remainder (vol_var__Float64x, vol_var_long_long_int);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_remainder_194 (void)
{
  extern typeof (remainder (vol_var__Float64x, vol_var_unsigned_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = remainder (vol_var__Float64x, vol_var_unsigned_long_long_int);
}
#endif
#if defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_remainder_195 (void)
{
  extern typeof (remainder (vol_var__Float64x, vol_var___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = remainder (vol_var__Float64x, vol_var___int128);
}
#endif
#if defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_remainder_196 (void)
{
  extern typeof (remainder (vol_var__Float64x, vol_var_unsigned___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = remainder (vol_var__Float64x, vol_var_unsigned___int128);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_remainder_197 (void)
{
  extern typeof (remainder (vol_var__Float64x, vol_var_enum_e)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = remainder (vol_var__Float64x, vol_var_enum_e);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_remainder_198 (void)
{
  extern typeof (remainder (vol_var__Float64x, vol_var__Bool)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = remainder (vol_var__Float64x, vol_var__Bool);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_remainder_199 (void)
{
  extern typeof (remainder (vol_var__Float64x, vol_var_bit_field)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = remainder (vol_var__Float64x, vol_var_bit_field);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F16
static void
test_remainder_200 (void)
{
  extern typeof (remainder (vol_var__Float128, vol_var__Float16)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = remainder (vol_var__Float128, vol_var__Float16);
}
#endif
#if defined HUGE_VAL_F128
static void
test_remainder_201 (void)
{
  extern typeof (remainder (vol_var__Float128, vol_var_float)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = remainder (vol_var__Float128, vol_var_float);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F32
static void
test_remainder_202 (void)
{
  extern typeof (remainder (vol_var__Float128, vol_var__Float32)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = remainder (vol_var__Float128, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
static void
test_remainder_203 (void)
{
  extern typeof (remainder (vol_var__Float128, vol_var__Float32x)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = remainder (vol_var__Float128, vol_var__Float32x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_remainder_204 (void)
{
  extern typeof (remainder (vol_var__Float128, vol_var_double)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = remainder (vol_var__Float128, vol_var_double);
}
#endif
#if (LDBL_MANT_DIG != 106) && defined HUGE_VAL_F128
static void
test_remainder_205 (void)
{
  extern typeof (remainder (vol_var__Float128, vol_var_long_double)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = remainder (vol_var__Float128, vol_var_long_double);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F64
static void
test_remainder_206 (void)
{
  extern typeof (remainder (vol_var__Float128, vol_var__Float64)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = remainder (vol_var__Float128, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
static void
test_remainder_207 (void)
{
  extern typeof (remainder (vol_var__Float128, vol_var__Float64x)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = remainder (vol_var__Float128, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_remainder_208 (void)
{
  extern typeof (remainder (vol_var__Float128, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = remainder (vol_var__Float128, vol_var__Float128);
}
#endif
#if defined HUGE_VAL_F128
static void
test_remainder_209 (void)
{
  extern typeof (remainder (vol_var__Float128, vol_var_char)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = remainder (vol_var__Float128, vol_var_char);
}
#endif
#if defined HUGE_VAL_F128
static void
test_remainder_210 (void)
{
  extern typeof (remainder (vol_var__Float128, vol_var_signed_char)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = remainder (vol_var__Float128, vol_var_signed_char);
}
#endif
#if defined HUGE_VAL_F128
static void
test_remainder_211 (void)
{
  extern typeof (remainder (vol_var__Float128, vol_var_unsigned_char)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = remainder (vol_var__Float128, vol_var_unsigned_char);
}
#endif
#if defined HUGE_VAL_F128
static void
test_remainder_212 (void)
{
  extern typeof (remainder (vol_var__Float128, vol_var_short_int)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = remainder (vol_var__Float128, vol_var_short_int);
}
#endif
#if defined HUGE_VAL_F128
static void
test_remainder_213 (void)
{
  extern typeof (remainder (vol_var__Float128, vol_var_unsigned_short_int)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = remainder (vol_var__Float128, vol_var_unsigned_short_int);
}
#endif
#if defined HUGE_VAL_F128
static void
test_remainder_214 (void)
{
  extern typeof (remainder (vol_var__Float128, vol_var_int)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = remainder (vol_var__Float128, vol_var_int);
}
#endif
#if defined HUGE_VAL_F128
static void
test_remainder_215 (void)
{
  extern typeof (remainder (vol_var__Float128, vol_var_unsigned_int)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = remainder (vol_var__Float128, vol_var_unsigned_int);
}
#endif
#if defined HUGE_VAL_F128
static void
test_remainder_216 (void)
{
  extern typeof (remainder (vol_var__Float128, vol_var_long_int)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = remainder (vol_var__Float128, vol_var_long_int);
}
#endif
#if defined HUGE_VAL_F128
static void
test_remainder_217 (void)
{
  extern typeof (remainder (vol_var__Float128, vol_var_unsigned_long_int)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = remainder (vol_var__Float128, vol_var_unsigned_long_int);
}
#endif
#if defined HUGE_VAL_F128
static void
test_remainder_218 (void)
{
  extern typeof (remainder (vol_var__Float128, vol_var_long_long_int)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = remainder (vol_var__Float128, vol_var_long_long_int);
}
#endif
#if defined HUGE_VAL_F128
static void
test_remainder_219 (void)
{
  extern typeof (remainder (vol_var__Float128, vol_var_unsigned_long_long_int)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = remainder (vol_var__Float128, vol_var_unsigned_long_long_int);
}
#endif
#if defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_remainder_220 (void)
{
  extern typeof (remainder (vol_var__Float128, vol_var___int128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = remainder (vol_var__Float128, vol_var___int128);
}
#endif
#if defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_remainder_221 (void)
{
  extern typeof (remainder (vol_var__Float128, vol_var_unsigned___int128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = remainder (vol_var__Float128, vol_var_unsigned___int128);
}
#endif
#if defined HUGE_VAL_F128
static void
test_remainder_222 (void)
{
  extern typeof (remainder (vol_var__Float128, vol_var_enum_e)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = remainder (vol_var__Float128, vol_var_enum_e);
}
#endif
#if defined HUGE_VAL_F128
static void
test_remainder_223 (void)
{
  extern typeof (remainder (vol_var__Float128, vol_var__Bool)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = remainder (vol_var__Float128, vol_var__Bool);
}
#endif
#if defined HUGE_VAL_F128
static void
test_remainder_224 (void)
{
  extern typeof (remainder (vol_var__Float128, vol_var_bit_field)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = remainder (vol_var__Float128, vol_var_bit_field);
}
#endif
#if defined HUGE_VAL_F16
static void
test_remainder_225 (void)
{
  extern typeof (remainder (vol_var_char, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_char, vol_var__Float16);
}
#endif
static void
test_remainder_226 (void)
{
  extern typeof (remainder (vol_var_char, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_char, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_remainder_227 (void)
{
  extern typeof (remainder (vol_var_char, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_char, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_remainder_228 (void)
{
  extern typeof (remainder (vol_var_char, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_char, vol_var__Float32x);
}
#endif
static void
test_remainder_229 (void)
{
  extern typeof (remainder (vol_var_char, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_char, vol_var_double);
}
static void
test_remainder_230 (void)
{
  extern typeof (remainder (vol_var_char, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = remainder (vol_var_char, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_remainder_231 (void)
{
  extern typeof (remainder (vol_var_char, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = remainder (vol_var_char, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_remainder_232 (void)
{
  extern typeof (remainder (vol_var_char, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = remainder (vol_var_char, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_remainder_233 (void)
{
  extern typeof (remainder (vol_var_char, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = remainder (vol_var_char, vol_var__Float128);
}
#endif
static void
test_remainder_234 (void)
{
  extern typeof (remainder (vol_var_char, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_char, vol_var_char);
}
static void
test_remainder_235 (void)
{
  extern typeof (remainder (vol_var_char, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_char, vol_var_signed_char);
}
static void
test_remainder_236 (void)
{
  extern typeof (remainder (vol_var_char, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_char, vol_var_unsigned_char);
}
static void
test_remainder_237 (void)
{
  extern typeof (remainder (vol_var_char, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_char, vol_var_short_int);
}
static void
test_remainder_238 (void)
{
  extern typeof (remainder (vol_var_char, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_char, vol_var_unsigned_short_int);
}
static void
test_remainder_239 (void)
{
  extern typeof (remainder (vol_var_char, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_char, vol_var_int);
}
static void
test_remainder_240 (void)
{
  extern typeof (remainder (vol_var_char, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_char, vol_var_unsigned_int);
}
static void
test_remainder_241 (void)
{
  extern typeof (remainder (vol_var_char, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_char, vol_var_long_int);
}
static void
test_remainder_242 (void)
{
  extern typeof (remainder (vol_var_char, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_char, vol_var_unsigned_long_int);
}
static void
test_remainder_243 (void)
{
  extern typeof (remainder (vol_var_char, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_char, vol_var_long_long_int);
}
static void
test_remainder_244 (void)
{
  extern typeof (remainder (vol_var_char, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_char, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_remainder_245 (void)
{
  extern typeof (remainder (vol_var_char, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_char, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_remainder_246 (void)
{
  extern typeof (remainder (vol_var_char, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_char, vol_var_unsigned___int128);
}
#endif
static void
test_remainder_247 (void)
{
  extern typeof (remainder (vol_var_char, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_char, vol_var_enum_e);
}
static void
test_remainder_248 (void)
{
  extern typeof (remainder (vol_var_char, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_char, vol_var__Bool);
}
static void
test_remainder_249 (void)
{
  extern typeof (remainder (vol_var_char, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_char, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_remainder_250 (void)
{
  extern typeof (remainder (vol_var_signed_char, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_signed_char, vol_var__Float16);
}
#endif
static void
test_remainder_251 (void)
{
  extern typeof (remainder (vol_var_signed_char, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_signed_char, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_remainder_252 (void)
{
  extern typeof (remainder (vol_var_signed_char, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_signed_char, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_remainder_253 (void)
{
  extern typeof (remainder (vol_var_signed_char, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_signed_char, vol_var__Float32x);
}
#endif
static void
test_remainder_254 (void)
{
  extern typeof (remainder (vol_var_signed_char, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_signed_char, vol_var_double);
}
static void
test_remainder_255 (void)
{
  extern typeof (remainder (vol_var_signed_char, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = remainder (vol_var_signed_char, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_remainder_256 (void)
{
  extern typeof (remainder (vol_var_signed_char, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = remainder (vol_var_signed_char, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_remainder_257 (void)
{
  extern typeof (remainder (vol_var_signed_char, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = remainder (vol_var_signed_char, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_remainder_258 (void)
{
  extern typeof (remainder (vol_var_signed_char, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = remainder (vol_var_signed_char, vol_var__Float128);
}
#endif
static void
test_remainder_259 (void)
{
  extern typeof (remainder (vol_var_signed_char, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_signed_char, vol_var_char);
}
static void
test_remainder_260 (void)
{
  extern typeof (remainder (vol_var_signed_char, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_signed_char, vol_var_signed_char);
}
static void
test_remainder_261 (void)
{
  extern typeof (remainder (vol_var_signed_char, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_signed_char, vol_var_unsigned_char);
}
static void
test_remainder_262 (void)
{
  extern typeof (remainder (vol_var_signed_char, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_signed_char, vol_var_short_int);
}
static void
test_remainder_263 (void)
{
  extern typeof (remainder (vol_var_signed_char, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_signed_char, vol_var_unsigned_short_int);
}
static void
test_remainder_264 (void)
{
  extern typeof (remainder (vol_var_signed_char, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_signed_char, vol_var_int);
}
static void
test_remainder_265 (void)
{
  extern typeof (remainder (vol_var_signed_char, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_signed_char, vol_var_unsigned_int);
}
static void
test_remainder_266 (void)
{
  extern typeof (remainder (vol_var_signed_char, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_signed_char, vol_var_long_int);
}
static void
test_remainder_267 (void)
{
  extern typeof (remainder (vol_var_signed_char, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_signed_char, vol_var_unsigned_long_int);
}
static void
test_remainder_268 (void)
{
  extern typeof (remainder (vol_var_signed_char, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_signed_char, vol_var_long_long_int);
}
static void
test_remainder_269 (void)
{
  extern typeof (remainder (vol_var_signed_char, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_signed_char, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_remainder_270 (void)
{
  extern typeof (remainder (vol_var_signed_char, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_signed_char, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_remainder_271 (void)
{
  extern typeof (remainder (vol_var_signed_char, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_signed_char, vol_var_unsigned___int128);
}
#endif
static void
test_remainder_272 (void)
{
  extern typeof (remainder (vol_var_signed_char, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_signed_char, vol_var_enum_e);
}
static void
test_remainder_273 (void)
{
  extern typeof (remainder (vol_var_signed_char, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_signed_char, vol_var__Bool);
}
static void
test_remainder_274 (void)
{
  extern typeof (remainder (vol_var_signed_char, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_signed_char, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_remainder_275 (void)
{
  extern typeof (remainder (vol_var_unsigned_char, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_unsigned_char, vol_var__Float16);
}
#endif
static void
test_remainder_276 (void)
{
  extern typeof (remainder (vol_var_unsigned_char, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_unsigned_char, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_remainder_277 (void)
{
  extern typeof (remainder (vol_var_unsigned_char, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_unsigned_char, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_remainder_278 (void)
{
  extern typeof (remainder (vol_var_unsigned_char, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_unsigned_char, vol_var__Float32x);
}
#endif
static void
test_remainder_279 (void)
{
  extern typeof (remainder (vol_var_unsigned_char, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_unsigned_char, vol_var_double);
}
static void
test_remainder_280 (void)
{
  extern typeof (remainder (vol_var_unsigned_char, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = remainder (vol_var_unsigned_char, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_remainder_281 (void)
{
  extern typeof (remainder (vol_var_unsigned_char, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = remainder (vol_var_unsigned_char, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_remainder_282 (void)
{
  extern typeof (remainder (vol_var_unsigned_char, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = remainder (vol_var_unsigned_char, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_remainder_283 (void)
{
  extern typeof (remainder (vol_var_unsigned_char, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = remainder (vol_var_unsigned_char, vol_var__Float128);
}
#endif
static void
test_remainder_284 (void)
{
  extern typeof (remainder (vol_var_unsigned_char, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_unsigned_char, vol_var_char);
}
static void
test_remainder_285 (void)
{
  extern typeof (remainder (vol_var_unsigned_char, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_unsigned_char, vol_var_signed_char);
}
static void
test_remainder_286 (void)
{
  extern typeof (remainder (vol_var_unsigned_char, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_unsigned_char, vol_var_unsigned_char);
}
static void
test_remainder_287 (void)
{
  extern typeof (remainder (vol_var_unsigned_char, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_unsigned_char, vol_var_short_int);
}
static void
test_remainder_288 (void)
{
  extern typeof (remainder (vol_var_unsigned_char, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_unsigned_char, vol_var_unsigned_short_int);
}
static void
test_remainder_289 (void)
{
  extern typeof (remainder (vol_var_unsigned_char, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_unsigned_char, vol_var_int);
}
static void
test_remainder_290 (void)
{
  extern typeof (remainder (vol_var_unsigned_char, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_unsigned_char, vol_var_unsigned_int);
}
static void
test_remainder_291 (void)
{
  extern typeof (remainder (vol_var_unsigned_char, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_unsigned_char, vol_var_long_int);
}
static void
test_remainder_292 (void)
{
  extern typeof (remainder (vol_var_unsigned_char, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_unsigned_char, vol_var_unsigned_long_int);
}
static void
test_remainder_293 (void)
{
  extern typeof (remainder (vol_var_unsigned_char, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_unsigned_char, vol_var_long_long_int);
}
static void
test_remainder_294 (void)
{
  extern typeof (remainder (vol_var_unsigned_char, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_unsigned_char, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_remainder_295 (void)
{
  extern typeof (remainder (vol_var_unsigned_char, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_unsigned_char, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_remainder_296 (void)
{
  extern typeof (remainder (vol_var_unsigned_char, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_unsigned_char, vol_var_unsigned___int128);
}
#endif
static void
test_remainder_297 (void)
{
  extern typeof (remainder (vol_var_unsigned_char, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_unsigned_char, vol_var_enum_e);
}
static void
test_remainder_298 (void)
{
  extern typeof (remainder (vol_var_unsigned_char, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_unsigned_char, vol_var__Bool);
}
static void
test_remainder_299 (void)
{
  extern typeof (remainder (vol_var_unsigned_char, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_unsigned_char, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_remainder_300 (void)
{
  extern typeof (remainder (vol_var_short_int, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_short_int, vol_var__Float16);
}
#endif
static void
test_remainder_301 (void)
{
  extern typeof (remainder (vol_var_short_int, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_short_int, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_remainder_302 (void)
{
  extern typeof (remainder (vol_var_short_int, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_short_int, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_remainder_303 (void)
{
  extern typeof (remainder (vol_var_short_int, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_short_int, vol_var__Float32x);
}
#endif
static void
test_remainder_304 (void)
{
  extern typeof (remainder (vol_var_short_int, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_short_int, vol_var_double);
}
static void
test_remainder_305 (void)
{
  extern typeof (remainder (vol_var_short_int, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = remainder (vol_var_short_int, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_remainder_306 (void)
{
  extern typeof (remainder (vol_var_short_int, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = remainder (vol_var_short_int, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_remainder_307 (void)
{
  extern typeof (remainder (vol_var_short_int, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = remainder (vol_var_short_int, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_remainder_308 (void)
{
  extern typeof (remainder (vol_var_short_int, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = remainder (vol_var_short_int, vol_var__Float128);
}
#endif
static void
test_remainder_309 (void)
{
  extern typeof (remainder (vol_var_short_int, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_short_int, vol_var_char);
}
static void
test_remainder_310 (void)
{
  extern typeof (remainder (vol_var_short_int, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_short_int, vol_var_signed_char);
}
static void
test_remainder_311 (void)
{
  extern typeof (remainder (vol_var_short_int, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_short_int, vol_var_unsigned_char);
}
static void
test_remainder_312 (void)
{
  extern typeof (remainder (vol_var_short_int, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_short_int, vol_var_short_int);
}
static void
test_remainder_313 (void)
{
  extern typeof (remainder (vol_var_short_int, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_short_int, vol_var_unsigned_short_int);
}
static void
test_remainder_314 (void)
{
  extern typeof (remainder (vol_var_short_int, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_short_int, vol_var_int);
}
static void
test_remainder_315 (void)
{
  extern typeof (remainder (vol_var_short_int, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_short_int, vol_var_unsigned_int);
}
static void
test_remainder_316 (void)
{
  extern typeof (remainder (vol_var_short_int, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_short_int, vol_var_long_int);
}
static void
test_remainder_317 (void)
{
  extern typeof (remainder (vol_var_short_int, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_short_int, vol_var_unsigned_long_int);
}
static void
test_remainder_318 (void)
{
  extern typeof (remainder (vol_var_short_int, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_short_int, vol_var_long_long_int);
}
static void
test_remainder_319 (void)
{
  extern typeof (remainder (vol_var_short_int, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_short_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_remainder_320 (void)
{
  extern typeof (remainder (vol_var_short_int, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_short_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_remainder_321 (void)
{
  extern typeof (remainder (vol_var_short_int, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_short_int, vol_var_unsigned___int128);
}
#endif
static void
test_remainder_322 (void)
{
  extern typeof (remainder (vol_var_short_int, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_short_int, vol_var_enum_e);
}
static void
test_remainder_323 (void)
{
  extern typeof (remainder (vol_var_short_int, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_short_int, vol_var__Bool);
}
static void
test_remainder_324 (void)
{
  extern typeof (remainder (vol_var_short_int, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_short_int, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_remainder_325 (void)
{
  extern typeof (remainder (vol_var_unsigned_short_int, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_unsigned_short_int, vol_var__Float16);
}
#endif
static void
test_remainder_326 (void)
{
  extern typeof (remainder (vol_var_unsigned_short_int, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_unsigned_short_int, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_remainder_327 (void)
{
  extern typeof (remainder (vol_var_unsigned_short_int, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_unsigned_short_int, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_remainder_328 (void)
{
  extern typeof (remainder (vol_var_unsigned_short_int, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_unsigned_short_int, vol_var__Float32x);
}
#endif
static void
test_remainder_329 (void)
{
  extern typeof (remainder (vol_var_unsigned_short_int, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_unsigned_short_int, vol_var_double);
}
static void
test_remainder_330 (void)
{
  extern typeof (remainder (vol_var_unsigned_short_int, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = remainder (vol_var_unsigned_short_int, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_remainder_331 (void)
{
  extern typeof (remainder (vol_var_unsigned_short_int, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = remainder (vol_var_unsigned_short_int, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_remainder_332 (void)
{
  extern typeof (remainder (vol_var_unsigned_short_int, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = remainder (vol_var_unsigned_short_int, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_remainder_333 (void)
{
  extern typeof (remainder (vol_var_unsigned_short_int, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = remainder (vol_var_unsigned_short_int, vol_var__Float128);
}
#endif
static void
test_remainder_334 (void)
{
  extern typeof (remainder (vol_var_unsigned_short_int, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_unsigned_short_int, vol_var_char);
}
static void
test_remainder_335 (void)
{
  extern typeof (remainder (vol_var_unsigned_short_int, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_unsigned_short_int, vol_var_signed_char);
}
static void
test_remainder_336 (void)
{
  extern typeof (remainder (vol_var_unsigned_short_int, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_unsigned_short_int, vol_var_unsigned_char);
}
static void
test_remainder_337 (void)
{
  extern typeof (remainder (vol_var_unsigned_short_int, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_unsigned_short_int, vol_var_short_int);
}
static void
test_remainder_338 (void)
{
  extern typeof (remainder (vol_var_unsigned_short_int, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_unsigned_short_int, vol_var_unsigned_short_int);
}
static void
test_remainder_339 (void)
{
  extern typeof (remainder (vol_var_unsigned_short_int, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_unsigned_short_int, vol_var_int);
}
static void
test_remainder_340 (void)
{
  extern typeof (remainder (vol_var_unsigned_short_int, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_unsigned_short_int, vol_var_unsigned_int);
}
static void
test_remainder_341 (void)
{
  extern typeof (remainder (vol_var_unsigned_short_int, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_unsigned_short_int, vol_var_long_int);
}
static void
test_remainder_342 (void)
{
  extern typeof (remainder (vol_var_unsigned_short_int, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_unsigned_short_int, vol_var_unsigned_long_int);
}
static void
test_remainder_343 (void)
{
  extern typeof (remainder (vol_var_unsigned_short_int, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_unsigned_short_int, vol_var_long_long_int);
}
static void
test_remainder_344 (void)
{
  extern typeof (remainder (vol_var_unsigned_short_int, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_unsigned_short_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_remainder_345 (void)
{
  extern typeof (remainder (vol_var_unsigned_short_int, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_unsigned_short_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_remainder_346 (void)
{
  extern typeof (remainder (vol_var_unsigned_short_int, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_unsigned_short_int, vol_var_unsigned___int128);
}
#endif
static void
test_remainder_347 (void)
{
  extern typeof (remainder (vol_var_unsigned_short_int, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_unsigned_short_int, vol_var_enum_e);
}
static void
test_remainder_348 (void)
{
  extern typeof (remainder (vol_var_unsigned_short_int, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_unsigned_short_int, vol_var__Bool);
}
static void
test_remainder_349 (void)
{
  extern typeof (remainder (vol_var_unsigned_short_int, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_unsigned_short_int, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_remainder_350 (void)
{
  extern typeof (remainder (vol_var_int, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_int, vol_var__Float16);
}
#endif
static void
test_remainder_351 (void)
{
  extern typeof (remainder (vol_var_int, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_int, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_remainder_352 (void)
{
  extern typeof (remainder (vol_var_int, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_int, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_remainder_353 (void)
{
  extern typeof (remainder (vol_var_int, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_int, vol_var__Float32x);
}
#endif
static void
test_remainder_354 (void)
{
  extern typeof (remainder (vol_var_int, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_int, vol_var_double);
}
static void
test_remainder_355 (void)
{
  extern typeof (remainder (vol_var_int, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = remainder (vol_var_int, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_remainder_356 (void)
{
  extern typeof (remainder (vol_var_int, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = remainder (vol_var_int, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_remainder_357 (void)
{
  extern typeof (remainder (vol_var_int, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = remainder (vol_var_int, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_remainder_358 (void)
{
  extern typeof (remainder (vol_var_int, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = remainder (vol_var_int, vol_var__Float128);
}
#endif
static void
test_remainder_359 (void)
{
  extern typeof (remainder (vol_var_int, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_int, vol_var_char);
}
static void
test_remainder_360 (void)
{
  extern typeof (remainder (vol_var_int, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_int, vol_var_signed_char);
}
static void
test_remainder_361 (void)
{
  extern typeof (remainder (vol_var_int, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_int, vol_var_unsigned_char);
}
static void
test_remainder_362 (void)
{
  extern typeof (remainder (vol_var_int, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_int, vol_var_short_int);
}
static void
test_remainder_363 (void)
{
  extern typeof (remainder (vol_var_int, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_int, vol_var_unsigned_short_int);
}
static void
test_remainder_364 (void)
{
  extern typeof (remainder (vol_var_int, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_int, vol_var_int);
}
static void
test_remainder_365 (void)
{
  extern typeof (remainder (vol_var_int, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_int, vol_var_unsigned_int);
}
static void
test_remainder_366 (void)
{
  extern typeof (remainder (vol_var_int, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_int, vol_var_long_int);
}
static void
test_remainder_367 (void)
{
  extern typeof (remainder (vol_var_int, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_int, vol_var_unsigned_long_int);
}
static void
test_remainder_368 (void)
{
  extern typeof (remainder (vol_var_int, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_int, vol_var_long_long_int);
}
static void
test_remainder_369 (void)
{
  extern typeof (remainder (vol_var_int, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_remainder_370 (void)
{
  extern typeof (remainder (vol_var_int, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_remainder_371 (void)
{
  extern typeof (remainder (vol_var_int, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_int, vol_var_unsigned___int128);
}
#endif
static void
test_remainder_372 (void)
{
  extern typeof (remainder (vol_var_int, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_int, vol_var_enum_e);
}
static void
test_remainder_373 (void)
{
  extern typeof (remainder (vol_var_int, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_int, vol_var__Bool);
}
static void
test_remainder_374 (void)
{
  extern typeof (remainder (vol_var_int, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_int, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_remainder_375 (void)
{
  extern typeof (remainder (vol_var_unsigned_int, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_unsigned_int, vol_var__Float16);
}
#endif
static void
test_remainder_376 (void)
{
  extern typeof (remainder (vol_var_unsigned_int, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_unsigned_int, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_remainder_377 (void)
{
  extern typeof (remainder (vol_var_unsigned_int, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_unsigned_int, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_remainder_378 (void)
{
  extern typeof (remainder (vol_var_unsigned_int, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_unsigned_int, vol_var__Float32x);
}
#endif
static void
test_remainder_379 (void)
{
  extern typeof (remainder (vol_var_unsigned_int, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_unsigned_int, vol_var_double);
}
static void
test_remainder_380 (void)
{
  extern typeof (remainder (vol_var_unsigned_int, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = remainder (vol_var_unsigned_int, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_remainder_381 (void)
{
  extern typeof (remainder (vol_var_unsigned_int, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = remainder (vol_var_unsigned_int, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_remainder_382 (void)
{
  extern typeof (remainder (vol_var_unsigned_int, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = remainder (vol_var_unsigned_int, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_remainder_383 (void)
{
  extern typeof (remainder (vol_var_unsigned_int, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = remainder (vol_var_unsigned_int, vol_var__Float128);
}
#endif
static void
test_remainder_384 (void)
{
  extern typeof (remainder (vol_var_unsigned_int, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_unsigned_int, vol_var_char);
}
static void
test_remainder_385 (void)
{
  extern typeof (remainder (vol_var_unsigned_int, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_unsigned_int, vol_var_signed_char);
}
static void
test_remainder_386 (void)
{
  extern typeof (remainder (vol_var_unsigned_int, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_unsigned_int, vol_var_unsigned_char);
}
static void
test_remainder_387 (void)
{
  extern typeof (remainder (vol_var_unsigned_int, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_unsigned_int, vol_var_short_int);
}
static void
test_remainder_388 (void)
{
  extern typeof (remainder (vol_var_unsigned_int, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_unsigned_int, vol_var_unsigned_short_int);
}
static void
test_remainder_389 (void)
{
  extern typeof (remainder (vol_var_unsigned_int, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_unsigned_int, vol_var_int);
}
static void
test_remainder_390 (void)
{
  extern typeof (remainder (vol_var_unsigned_int, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_unsigned_int, vol_var_unsigned_int);
}
static void
test_remainder_391 (void)
{
  extern typeof (remainder (vol_var_unsigned_int, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_unsigned_int, vol_var_long_int);
}
static void
test_remainder_392 (void)
{
  extern typeof (remainder (vol_var_unsigned_int, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_unsigned_int, vol_var_unsigned_long_int);
}
static void
test_remainder_393 (void)
{
  extern typeof (remainder (vol_var_unsigned_int, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_unsigned_int, vol_var_long_long_int);
}
static void
test_remainder_394 (void)
{
  extern typeof (remainder (vol_var_unsigned_int, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_unsigned_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_remainder_395 (void)
{
  extern typeof (remainder (vol_var_unsigned_int, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_unsigned_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_remainder_396 (void)
{
  extern typeof (remainder (vol_var_unsigned_int, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_unsigned_int, vol_var_unsigned___int128);
}
#endif
static void
test_remainder_397 (void)
{
  extern typeof (remainder (vol_var_unsigned_int, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_unsigned_int, vol_var_enum_e);
}
static void
test_remainder_398 (void)
{
  extern typeof (remainder (vol_var_unsigned_int, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_unsigned_int, vol_var__Bool);
}
static void
test_remainder_399 (void)
{
  extern typeof (remainder (vol_var_unsigned_int, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_unsigned_int, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_remainder_400 (void)
{
  extern typeof (remainder (vol_var_long_int, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_long_int, vol_var__Float16);
}
#endif
static void
test_remainder_401 (void)
{
  extern typeof (remainder (vol_var_long_int, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_long_int, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_remainder_402 (void)
{
  extern typeof (remainder (vol_var_long_int, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_long_int, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_remainder_403 (void)
{
  extern typeof (remainder (vol_var_long_int, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_long_int, vol_var__Float32x);
}
#endif
static void
test_remainder_404 (void)
{
  extern typeof (remainder (vol_var_long_int, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_long_int, vol_var_double);
}
static void
test_remainder_405 (void)
{
  extern typeof (remainder (vol_var_long_int, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = remainder (vol_var_long_int, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_remainder_406 (void)
{
  extern typeof (remainder (vol_var_long_int, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = remainder (vol_var_long_int, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_remainder_407 (void)
{
  extern typeof (remainder (vol_var_long_int, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = remainder (vol_var_long_int, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_remainder_408 (void)
{
  extern typeof (remainder (vol_var_long_int, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = remainder (vol_var_long_int, vol_var__Float128);
}
#endif
static void
test_remainder_409 (void)
{
  extern typeof (remainder (vol_var_long_int, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_long_int, vol_var_char);
}
static void
test_remainder_410 (void)
{
  extern typeof (remainder (vol_var_long_int, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_long_int, vol_var_signed_char);
}
static void
test_remainder_411 (void)
{
  extern typeof (remainder (vol_var_long_int, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_long_int, vol_var_unsigned_char);
}
static void
test_remainder_412 (void)
{
  extern typeof (remainder (vol_var_long_int, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_long_int, vol_var_short_int);
}
static void
test_remainder_413 (void)
{
  extern typeof (remainder (vol_var_long_int, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_long_int, vol_var_unsigned_short_int);
}
static void
test_remainder_414 (void)
{
  extern typeof (remainder (vol_var_long_int, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_long_int, vol_var_int);
}
static void
test_remainder_415 (void)
{
  extern typeof (remainder (vol_var_long_int, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_long_int, vol_var_unsigned_int);
}
static void
test_remainder_416 (void)
{
  extern typeof (remainder (vol_var_long_int, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_long_int, vol_var_long_int);
}
static void
test_remainder_417 (void)
{
  extern typeof (remainder (vol_var_long_int, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_long_int, vol_var_unsigned_long_int);
}
static void
test_remainder_418 (void)
{
  extern typeof (remainder (vol_var_long_int, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_long_int, vol_var_long_long_int);
}
static void
test_remainder_419 (void)
{
  extern typeof (remainder (vol_var_long_int, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_long_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_remainder_420 (void)
{
  extern typeof (remainder (vol_var_long_int, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_long_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_remainder_421 (void)
{
  extern typeof (remainder (vol_var_long_int, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_long_int, vol_var_unsigned___int128);
}
#endif
static void
test_remainder_422 (void)
{
  extern typeof (remainder (vol_var_long_int, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_long_int, vol_var_enum_e);
}
static void
test_remainder_423 (void)
{
  extern typeof (remainder (vol_var_long_int, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_long_int, vol_var__Bool);
}
static void
test_remainder_424 (void)
{
  extern typeof (remainder (vol_var_long_int, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_long_int, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_remainder_425 (void)
{
  extern typeof (remainder (vol_var_unsigned_long_int, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_unsigned_long_int, vol_var__Float16);
}
#endif
static void
test_remainder_426 (void)
{
  extern typeof (remainder (vol_var_unsigned_long_int, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_unsigned_long_int, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_remainder_427 (void)
{
  extern typeof (remainder (vol_var_unsigned_long_int, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_unsigned_long_int, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_remainder_428 (void)
{
  extern typeof (remainder (vol_var_unsigned_long_int, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_unsigned_long_int, vol_var__Float32x);
}
#endif
static void
test_remainder_429 (void)
{
  extern typeof (remainder (vol_var_unsigned_long_int, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_unsigned_long_int, vol_var_double);
}
static void
test_remainder_430 (void)
{
  extern typeof (remainder (vol_var_unsigned_long_int, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = remainder (vol_var_unsigned_long_int, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_remainder_431 (void)
{
  extern typeof (remainder (vol_var_unsigned_long_int, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = remainder (vol_var_unsigned_long_int, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_remainder_432 (void)
{
  extern typeof (remainder (vol_var_unsigned_long_int, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = remainder (vol_var_unsigned_long_int, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_remainder_433 (void)
{
  extern typeof (remainder (vol_var_unsigned_long_int, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = remainder (vol_var_unsigned_long_int, vol_var__Float128);
}
#endif
static void
test_remainder_434 (void)
{
  extern typeof (remainder (vol_var_unsigned_long_int, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_unsigned_long_int, vol_var_char);
}
static void
test_remainder_435 (void)
{
  extern typeof (remainder (vol_var_unsigned_long_int, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_unsigned_long_int, vol_var_signed_char);
}
static void
test_remainder_436 (void)
{
  extern typeof (remainder (vol_var_unsigned_long_int, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_unsigned_long_int, vol_var_unsigned_char);
}
static void
test_remainder_437 (void)
{
  extern typeof (remainder (vol_var_unsigned_long_int, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_unsigned_long_int, vol_var_short_int);
}
static void
test_remainder_438 (void)
{
  extern typeof (remainder (vol_var_unsigned_long_int, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_unsigned_long_int, vol_var_unsigned_short_int);
}
static void
test_remainder_439 (void)
{
  extern typeof (remainder (vol_var_unsigned_long_int, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_unsigned_long_int, vol_var_int);
}
static void
test_remainder_440 (void)
{
  extern typeof (remainder (vol_var_unsigned_long_int, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_unsigned_long_int, vol_var_unsigned_int);
}
static void
test_remainder_441 (void)
{
  extern typeof (remainder (vol_var_unsigned_long_int, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_unsigned_long_int, vol_var_long_int);
}
static void
test_remainder_442 (void)
{
  extern typeof (remainder (vol_var_unsigned_long_int, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_unsigned_long_int, vol_var_unsigned_long_int);
}
static void
test_remainder_443 (void)
{
  extern typeof (remainder (vol_var_unsigned_long_int, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_unsigned_long_int, vol_var_long_long_int);
}
static void
test_remainder_444 (void)
{
  extern typeof (remainder (vol_var_unsigned_long_int, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_unsigned_long_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_remainder_445 (void)
{
  extern typeof (remainder (vol_var_unsigned_long_int, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_unsigned_long_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_remainder_446 (void)
{
  extern typeof (remainder (vol_var_unsigned_long_int, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_unsigned_long_int, vol_var_unsigned___int128);
}
#endif
static void
test_remainder_447 (void)
{
  extern typeof (remainder (vol_var_unsigned_long_int, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_unsigned_long_int, vol_var_enum_e);
}
static void
test_remainder_448 (void)
{
  extern typeof (remainder (vol_var_unsigned_long_int, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_unsigned_long_int, vol_var__Bool);
}
static void
test_remainder_449 (void)
{
  extern typeof (remainder (vol_var_unsigned_long_int, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_unsigned_long_int, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_remainder_450 (void)
{
  extern typeof (remainder (vol_var_long_long_int, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_long_long_int, vol_var__Float16);
}
#endif
static void
test_remainder_451 (void)
{
  extern typeof (remainder (vol_var_long_long_int, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_long_long_int, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_remainder_452 (void)
{
  extern typeof (remainder (vol_var_long_long_int, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_long_long_int, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_remainder_453 (void)
{
  extern typeof (remainder (vol_var_long_long_int, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_long_long_int, vol_var__Float32x);
}
#endif
static void
test_remainder_454 (void)
{
  extern typeof (remainder (vol_var_long_long_int, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_long_long_int, vol_var_double);
}
static void
test_remainder_455 (void)
{
  extern typeof (remainder (vol_var_long_long_int, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = remainder (vol_var_long_long_int, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_remainder_456 (void)
{
  extern typeof (remainder (vol_var_long_long_int, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = remainder (vol_var_long_long_int, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_remainder_457 (void)
{
  extern typeof (remainder (vol_var_long_long_int, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = remainder (vol_var_long_long_int, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_remainder_458 (void)
{
  extern typeof (remainder (vol_var_long_long_int, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = remainder (vol_var_long_long_int, vol_var__Float128);
}
#endif
static void
test_remainder_459 (void)
{
  extern typeof (remainder (vol_var_long_long_int, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_long_long_int, vol_var_char);
}
static void
test_remainder_460 (void)
{
  extern typeof (remainder (vol_var_long_long_int, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_long_long_int, vol_var_signed_char);
}
static void
test_remainder_461 (void)
{
  extern typeof (remainder (vol_var_long_long_int, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_long_long_int, vol_var_unsigned_char);
}
static void
test_remainder_462 (void)
{
  extern typeof (remainder (vol_var_long_long_int, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_long_long_int, vol_var_short_int);
}
static void
test_remainder_463 (void)
{
  extern typeof (remainder (vol_var_long_long_int, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_long_long_int, vol_var_unsigned_short_int);
}
static void
test_remainder_464 (void)
{
  extern typeof (remainder (vol_var_long_long_int, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_long_long_int, vol_var_int);
}
static void
test_remainder_465 (void)
{
  extern typeof (remainder (vol_var_long_long_int, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_long_long_int, vol_var_unsigned_int);
}
static void
test_remainder_466 (void)
{
  extern typeof (remainder (vol_var_long_long_int, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_long_long_int, vol_var_long_int);
}
static void
test_remainder_467 (void)
{
  extern typeof (remainder (vol_var_long_long_int, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_long_long_int, vol_var_unsigned_long_int);
}
static void
test_remainder_468 (void)
{
  extern typeof (remainder (vol_var_long_long_int, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_long_long_int, vol_var_long_long_int);
}
static void
test_remainder_469 (void)
{
  extern typeof (remainder (vol_var_long_long_int, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_long_long_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_remainder_470 (void)
{
  extern typeof (remainder (vol_var_long_long_int, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_long_long_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_remainder_471 (void)
{
  extern typeof (remainder (vol_var_long_long_int, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_long_long_int, vol_var_unsigned___int128);
}
#endif
static void
test_remainder_472 (void)
{
  extern typeof (remainder (vol_var_long_long_int, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_long_long_int, vol_var_enum_e);
}
static void
test_remainder_473 (void)
{
  extern typeof (remainder (vol_var_long_long_int, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_long_long_int, vol_var__Bool);
}
static void
test_remainder_474 (void)
{
  extern typeof (remainder (vol_var_long_long_int, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_long_long_int, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_remainder_475 (void)
{
  extern typeof (remainder (vol_var_unsigned_long_long_int, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_unsigned_long_long_int, vol_var__Float16);
}
#endif
static void
test_remainder_476 (void)
{
  extern typeof (remainder (vol_var_unsigned_long_long_int, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_unsigned_long_long_int, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_remainder_477 (void)
{
  extern typeof (remainder (vol_var_unsigned_long_long_int, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_unsigned_long_long_int, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_remainder_478 (void)
{
  extern typeof (remainder (vol_var_unsigned_long_long_int, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_unsigned_long_long_int, vol_var__Float32x);
}
#endif
static void
test_remainder_479 (void)
{
  extern typeof (remainder (vol_var_unsigned_long_long_int, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_unsigned_long_long_int, vol_var_double);
}
static void
test_remainder_480 (void)
{
  extern typeof (remainder (vol_var_unsigned_long_long_int, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = remainder (vol_var_unsigned_long_long_int, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_remainder_481 (void)
{
  extern typeof (remainder (vol_var_unsigned_long_long_int, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = remainder (vol_var_unsigned_long_long_int, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_remainder_482 (void)
{
  extern typeof (remainder (vol_var_unsigned_long_long_int, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = remainder (vol_var_unsigned_long_long_int, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_remainder_483 (void)
{
  extern typeof (remainder (vol_var_unsigned_long_long_int, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = remainder (vol_var_unsigned_long_long_int, vol_var__Float128);
}
#endif
static void
test_remainder_484 (void)
{
  extern typeof (remainder (vol_var_unsigned_long_long_int, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_unsigned_long_long_int, vol_var_char);
}
static void
test_remainder_485 (void)
{
  extern typeof (remainder (vol_var_unsigned_long_long_int, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_unsigned_long_long_int, vol_var_signed_char);
}
static void
test_remainder_486 (void)
{
  extern typeof (remainder (vol_var_unsigned_long_long_int, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_unsigned_long_long_int, vol_var_unsigned_char);
}
static void
test_remainder_487 (void)
{
  extern typeof (remainder (vol_var_unsigned_long_long_int, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_unsigned_long_long_int, vol_var_short_int);
}
static void
test_remainder_488 (void)
{
  extern typeof (remainder (vol_var_unsigned_long_long_int, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_unsigned_long_long_int, vol_var_unsigned_short_int);
}
static void
test_remainder_489 (void)
{
  extern typeof (remainder (vol_var_unsigned_long_long_int, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_unsigned_long_long_int, vol_var_int);
}
static void
test_remainder_490 (void)
{
  extern typeof (remainder (vol_var_unsigned_long_long_int, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_unsigned_long_long_int, vol_var_unsigned_int);
}
static void
test_remainder_491 (void)
{
  extern typeof (remainder (vol_var_unsigned_long_long_int, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_unsigned_long_long_int, vol_var_long_int);
}
static void
test_remainder_492 (void)
{
  extern typeof (remainder (vol_var_unsigned_long_long_int, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_unsigned_long_long_int, vol_var_unsigned_long_int);
}
static void
test_remainder_493 (void)
{
  extern typeof (remainder (vol_var_unsigned_long_long_int, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_unsigned_long_long_int, vol_var_long_long_int);
}
static void
test_remainder_494 (void)
{
  extern typeof (remainder (vol_var_unsigned_long_long_int, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_unsigned_long_long_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_remainder_495 (void)
{
  extern typeof (remainder (vol_var_unsigned_long_long_int, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_unsigned_long_long_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_remainder_496 (void)
{
  extern typeof (remainder (vol_var_unsigned_long_long_int, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_unsigned_long_long_int, vol_var_unsigned___int128);
}
#endif
static void
test_remainder_497 (void)
{
  extern typeof (remainder (vol_var_unsigned_long_long_int, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_unsigned_long_long_int, vol_var_enum_e);
}
static void
test_remainder_498 (void)
{
  extern typeof (remainder (vol_var_unsigned_long_long_int, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_unsigned_long_long_int, vol_var__Bool);
}
static void
test_remainder_499 (void)
{
  extern typeof (remainder (vol_var_unsigned_long_long_int, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_unsigned_long_long_int, vol_var_bit_field);
}
#if defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_remainder_500 (void)
{
  extern typeof (remainder (vol_var___int128, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var___int128, vol_var__Float16);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_remainder_501 (void)
{
  extern typeof (remainder (vol_var___int128, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var___int128, vol_var_float);
}
#endif
#if defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_remainder_502 (void)
{
  extern typeof (remainder (vol_var___int128, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var___int128, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_remainder_503 (void)
{
  extern typeof (remainder (vol_var___int128, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var___int128, vol_var__Float32x);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_remainder_504 (void)
{
  extern typeof (remainder (vol_var___int128, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var___int128, vol_var_double);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_remainder_505 (void)
{
  extern typeof (remainder (vol_var___int128, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = remainder (vol_var___int128, vol_var_long_double);
}
#endif
#if defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_remainder_506 (void)
{
  extern typeof (remainder (vol_var___int128, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = remainder (vol_var___int128, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_remainder_507 (void)
{
  extern typeof (remainder (vol_var___int128, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = remainder (vol_var___int128, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_remainder_508 (void)
{
  extern typeof (remainder (vol_var___int128, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = remainder (vol_var___int128, vol_var__Float128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_remainder_509 (void)
{
  extern typeof (remainder (vol_var___int128, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var___int128, vol_var_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_remainder_510 (void)
{
  extern typeof (remainder (vol_var___int128, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var___int128, vol_var_signed_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_remainder_511 (void)
{
  extern typeof (remainder (vol_var___int128, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var___int128, vol_var_unsigned_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_remainder_512 (void)
{
  extern typeof (remainder (vol_var___int128, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var___int128, vol_var_short_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_remainder_513 (void)
{
  extern typeof (remainder (vol_var___int128, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var___int128, vol_var_unsigned_short_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_remainder_514 (void)
{
  extern typeof (remainder (vol_var___int128, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var___int128, vol_var_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_remainder_515 (void)
{
  extern typeof (remainder (vol_var___int128, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var___int128, vol_var_unsigned_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_remainder_516 (void)
{
  extern typeof (remainder (vol_var___int128, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var___int128, vol_var_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_remainder_517 (void)
{
  extern typeof (remainder (vol_var___int128, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var___int128, vol_var_unsigned_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_remainder_518 (void)
{
  extern typeof (remainder (vol_var___int128, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var___int128, vol_var_long_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_remainder_519 (void)
{
  extern typeof (remainder (vol_var___int128, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var___int128, vol_var_unsigned_long_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_remainder_520 (void)
{
  extern typeof (remainder (vol_var___int128, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var___int128, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_remainder_521 (void)
{
  extern typeof (remainder (vol_var___int128, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var___int128, vol_var_unsigned___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_remainder_522 (void)
{
  extern typeof (remainder (vol_var___int128, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var___int128, vol_var_enum_e);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_remainder_523 (void)
{
  extern typeof (remainder (vol_var___int128, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var___int128, vol_var__Bool);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_remainder_524 (void)
{
  extern typeof (remainder (vol_var___int128, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var___int128, vol_var_bit_field);
}
#endif
#if defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_remainder_525 (void)
{
  extern typeof (remainder (vol_var_unsigned___int128, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_unsigned___int128, vol_var__Float16);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_remainder_526 (void)
{
  extern typeof (remainder (vol_var_unsigned___int128, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_unsigned___int128, vol_var_float);
}
#endif
#if defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_remainder_527 (void)
{
  extern typeof (remainder (vol_var_unsigned___int128, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_unsigned___int128, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_remainder_528 (void)
{
  extern typeof (remainder (vol_var_unsigned___int128, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_unsigned___int128, vol_var__Float32x);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_remainder_529 (void)
{
  extern typeof (remainder (vol_var_unsigned___int128, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_unsigned___int128, vol_var_double);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_remainder_530 (void)
{
  extern typeof (remainder (vol_var_unsigned___int128, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = remainder (vol_var_unsigned___int128, vol_var_long_double);
}
#endif
#if defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_remainder_531 (void)
{
  extern typeof (remainder (vol_var_unsigned___int128, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = remainder (vol_var_unsigned___int128, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_remainder_532 (void)
{
  extern typeof (remainder (vol_var_unsigned___int128, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = remainder (vol_var_unsigned___int128, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_remainder_533 (void)
{
  extern typeof (remainder (vol_var_unsigned___int128, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = remainder (vol_var_unsigned___int128, vol_var__Float128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_remainder_534 (void)
{
  extern typeof (remainder (vol_var_unsigned___int128, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_unsigned___int128, vol_var_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_remainder_535 (void)
{
  extern typeof (remainder (vol_var_unsigned___int128, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_unsigned___int128, vol_var_signed_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_remainder_536 (void)
{
  extern typeof (remainder (vol_var_unsigned___int128, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_unsigned___int128, vol_var_unsigned_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_remainder_537 (void)
{
  extern typeof (remainder (vol_var_unsigned___int128, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_unsigned___int128, vol_var_short_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_remainder_538 (void)
{
  extern typeof (remainder (vol_var_unsigned___int128, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_unsigned___int128, vol_var_unsigned_short_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_remainder_539 (void)
{
  extern typeof (remainder (vol_var_unsigned___int128, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_unsigned___int128, vol_var_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_remainder_540 (void)
{
  extern typeof (remainder (vol_var_unsigned___int128, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_unsigned___int128, vol_var_unsigned_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_remainder_541 (void)
{
  extern typeof (remainder (vol_var_unsigned___int128, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_unsigned___int128, vol_var_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_remainder_542 (void)
{
  extern typeof (remainder (vol_var_unsigned___int128, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_unsigned___int128, vol_var_unsigned_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_remainder_543 (void)
{
  extern typeof (remainder (vol_var_unsigned___int128, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_unsigned___int128, vol_var_long_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_remainder_544 (void)
{
  extern typeof (remainder (vol_var_unsigned___int128, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_unsigned___int128, vol_var_unsigned_long_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_remainder_545 (void)
{
  extern typeof (remainder (vol_var_unsigned___int128, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_unsigned___int128, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_remainder_546 (void)
{
  extern typeof (remainder (vol_var_unsigned___int128, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_unsigned___int128, vol_var_unsigned___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_remainder_547 (void)
{
  extern typeof (remainder (vol_var_unsigned___int128, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_unsigned___int128, vol_var_enum_e);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_remainder_548 (void)
{
  extern typeof (remainder (vol_var_unsigned___int128, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_unsigned___int128, vol_var__Bool);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_remainder_549 (void)
{
  extern typeof (remainder (vol_var_unsigned___int128, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_unsigned___int128, vol_var_bit_field);
}
#endif
#if defined HUGE_VAL_F16
static void
test_remainder_550 (void)
{
  extern typeof (remainder (vol_var_enum_e, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_enum_e, vol_var__Float16);
}
#endif
static void
test_remainder_551 (void)
{
  extern typeof (remainder (vol_var_enum_e, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_enum_e, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_remainder_552 (void)
{
  extern typeof (remainder (vol_var_enum_e, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_enum_e, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_remainder_553 (void)
{
  extern typeof (remainder (vol_var_enum_e, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_enum_e, vol_var__Float32x);
}
#endif
static void
test_remainder_554 (void)
{
  extern typeof (remainder (vol_var_enum_e, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_enum_e, vol_var_double);
}
static void
test_remainder_555 (void)
{
  extern typeof (remainder (vol_var_enum_e, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = remainder (vol_var_enum_e, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_remainder_556 (void)
{
  extern typeof (remainder (vol_var_enum_e, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = remainder (vol_var_enum_e, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_remainder_557 (void)
{
  extern typeof (remainder (vol_var_enum_e, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = remainder (vol_var_enum_e, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_remainder_558 (void)
{
  extern typeof (remainder (vol_var_enum_e, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = remainder (vol_var_enum_e, vol_var__Float128);
}
#endif
static void
test_remainder_559 (void)
{
  extern typeof (remainder (vol_var_enum_e, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_enum_e, vol_var_char);
}
static void
test_remainder_560 (void)
{
  extern typeof (remainder (vol_var_enum_e, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_enum_e, vol_var_signed_char);
}
static void
test_remainder_561 (void)
{
  extern typeof (remainder (vol_var_enum_e, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_enum_e, vol_var_unsigned_char);
}
static void
test_remainder_562 (void)
{
  extern typeof (remainder (vol_var_enum_e, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_enum_e, vol_var_short_int);
}
static void
test_remainder_563 (void)
{
  extern typeof (remainder (vol_var_enum_e, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_enum_e, vol_var_unsigned_short_int);
}
static void
test_remainder_564 (void)
{
  extern typeof (remainder (vol_var_enum_e, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_enum_e, vol_var_int);
}
static void
test_remainder_565 (void)
{
  extern typeof (remainder (vol_var_enum_e, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_enum_e, vol_var_unsigned_int);
}
static void
test_remainder_566 (void)
{
  extern typeof (remainder (vol_var_enum_e, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_enum_e, vol_var_long_int);
}
static void
test_remainder_567 (void)
{
  extern typeof (remainder (vol_var_enum_e, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_enum_e, vol_var_unsigned_long_int);
}
static void
test_remainder_568 (void)
{
  extern typeof (remainder (vol_var_enum_e, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_enum_e, vol_var_long_long_int);
}
static void
test_remainder_569 (void)
{
  extern typeof (remainder (vol_var_enum_e, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_enum_e, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_remainder_570 (void)
{
  extern typeof (remainder (vol_var_enum_e, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_enum_e, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_remainder_571 (void)
{
  extern typeof (remainder (vol_var_enum_e, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_enum_e, vol_var_unsigned___int128);
}
#endif
static void
test_remainder_572 (void)
{
  extern typeof (remainder (vol_var_enum_e, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_enum_e, vol_var_enum_e);
}
static void
test_remainder_573 (void)
{
  extern typeof (remainder (vol_var_enum_e, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_enum_e, vol_var__Bool);
}
static void
test_remainder_574 (void)
{
  extern typeof (remainder (vol_var_enum_e, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_enum_e, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_remainder_575 (void)
{
  extern typeof (remainder (vol_var__Bool, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var__Bool, vol_var__Float16);
}
#endif
static void
test_remainder_576 (void)
{
  extern typeof (remainder (vol_var__Bool, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var__Bool, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_remainder_577 (void)
{
  extern typeof (remainder (vol_var__Bool, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var__Bool, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_remainder_578 (void)
{
  extern typeof (remainder (vol_var__Bool, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var__Bool, vol_var__Float32x);
}
#endif
static void
test_remainder_579 (void)
{
  extern typeof (remainder (vol_var__Bool, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var__Bool, vol_var_double);
}
static void
test_remainder_580 (void)
{
  extern typeof (remainder (vol_var__Bool, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = remainder (vol_var__Bool, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_remainder_581 (void)
{
  extern typeof (remainder (vol_var__Bool, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = remainder (vol_var__Bool, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_remainder_582 (void)
{
  extern typeof (remainder (vol_var__Bool, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = remainder (vol_var__Bool, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_remainder_583 (void)
{
  extern typeof (remainder (vol_var__Bool, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = remainder (vol_var__Bool, vol_var__Float128);
}
#endif
static void
test_remainder_584 (void)
{
  extern typeof (remainder (vol_var__Bool, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var__Bool, vol_var_char);
}
static void
test_remainder_585 (void)
{
  extern typeof (remainder (vol_var__Bool, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var__Bool, vol_var_signed_char);
}
static void
test_remainder_586 (void)
{
  extern typeof (remainder (vol_var__Bool, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var__Bool, vol_var_unsigned_char);
}
static void
test_remainder_587 (void)
{
  extern typeof (remainder (vol_var__Bool, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var__Bool, vol_var_short_int);
}
static void
test_remainder_588 (void)
{
  extern typeof (remainder (vol_var__Bool, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var__Bool, vol_var_unsigned_short_int);
}
static void
test_remainder_589 (void)
{
  extern typeof (remainder (vol_var__Bool, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var__Bool, vol_var_int);
}
static void
test_remainder_590 (void)
{
  extern typeof (remainder (vol_var__Bool, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var__Bool, vol_var_unsigned_int);
}
static void
test_remainder_591 (void)
{
  extern typeof (remainder (vol_var__Bool, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var__Bool, vol_var_long_int);
}
static void
test_remainder_592 (void)
{
  extern typeof (remainder (vol_var__Bool, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var__Bool, vol_var_unsigned_long_int);
}
static void
test_remainder_593 (void)
{
  extern typeof (remainder (vol_var__Bool, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var__Bool, vol_var_long_long_int);
}
static void
test_remainder_594 (void)
{
  extern typeof (remainder (vol_var__Bool, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var__Bool, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_remainder_595 (void)
{
  extern typeof (remainder (vol_var__Bool, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var__Bool, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_remainder_596 (void)
{
  extern typeof (remainder (vol_var__Bool, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var__Bool, vol_var_unsigned___int128);
}
#endif
static void
test_remainder_597 (void)
{
  extern typeof (remainder (vol_var__Bool, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var__Bool, vol_var_enum_e);
}
static void
test_remainder_598 (void)
{
  extern typeof (remainder (vol_var__Bool, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var__Bool, vol_var__Bool);
}
static void
test_remainder_599 (void)
{
  extern typeof (remainder (vol_var__Bool, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var__Bool, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_remainder_600 (void)
{
  extern typeof (remainder (vol_var_bit_field, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_bit_field, vol_var__Float16);
}
#endif
static void
test_remainder_601 (void)
{
  extern typeof (remainder (vol_var_bit_field, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_bit_field, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_remainder_602 (void)
{
  extern typeof (remainder (vol_var_bit_field, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_bit_field, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_remainder_603 (void)
{
  extern typeof (remainder (vol_var_bit_field, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_bit_field, vol_var__Float32x);
}
#endif
static void
test_remainder_604 (void)
{
  extern typeof (remainder (vol_var_bit_field, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_bit_field, vol_var_double);
}
static void
test_remainder_605 (void)
{
  extern typeof (remainder (vol_var_bit_field, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = remainder (vol_var_bit_field, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_remainder_606 (void)
{
  extern typeof (remainder (vol_var_bit_field, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = remainder (vol_var_bit_field, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_remainder_607 (void)
{
  extern typeof (remainder (vol_var_bit_field, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = remainder (vol_var_bit_field, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_remainder_608 (void)
{
  extern typeof (remainder (vol_var_bit_field, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = remainder (vol_var_bit_field, vol_var__Float128);
}
#endif
static void
test_remainder_609 (void)
{
  extern typeof (remainder (vol_var_bit_field, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_bit_field, vol_var_char);
}
static void
test_remainder_610 (void)
{
  extern typeof (remainder (vol_var_bit_field, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_bit_field, vol_var_signed_char);
}
static void
test_remainder_611 (void)
{
  extern typeof (remainder (vol_var_bit_field, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_bit_field, vol_var_unsigned_char);
}
static void
test_remainder_612 (void)
{
  extern typeof (remainder (vol_var_bit_field, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_bit_field, vol_var_short_int);
}
static void
test_remainder_613 (void)
{
  extern typeof (remainder (vol_var_bit_field, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_bit_field, vol_var_unsigned_short_int);
}
static void
test_remainder_614 (void)
{
  extern typeof (remainder (vol_var_bit_field, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_bit_field, vol_var_int);
}
static void
test_remainder_615 (void)
{
  extern typeof (remainder (vol_var_bit_field, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_bit_field, vol_var_unsigned_int);
}
static void
test_remainder_616 (void)
{
  extern typeof (remainder (vol_var_bit_field, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_bit_field, vol_var_long_int);
}
static void
test_remainder_617 (void)
{
  extern typeof (remainder (vol_var_bit_field, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_bit_field, vol_var_unsigned_long_int);
}
static void
test_remainder_618 (void)
{
  extern typeof (remainder (vol_var_bit_field, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_bit_field, vol_var_long_long_int);
}
static void
test_remainder_619 (void)
{
  extern typeof (remainder (vol_var_bit_field, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_bit_field, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_remainder_620 (void)
{
  extern typeof (remainder (vol_var_bit_field, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_bit_field, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_remainder_621 (void)
{
  extern typeof (remainder (vol_var_bit_field, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_bit_field, vol_var_unsigned___int128);
}
#endif
static void
test_remainder_622 (void)
{
  extern typeof (remainder (vol_var_bit_field, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_bit_field, vol_var_enum_e);
}
static void
test_remainder_623 (void)
{
  extern typeof (remainder (vol_var_bit_field, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_bit_field, vol_var__Bool);
}
static void
test_remainder_624 (void)
{
  extern typeof (remainder (vol_var_bit_field, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = remainder (vol_var_bit_field, vol_var_bit_field);
}
static const struct test tests[] =
  {
#if defined HUGE_VAL_F16
    { test_remainder_0, "remainder", "remainder (_Float16, _Float16)", FLT16_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_remainder_1, "remainder", "remainder (_Float16, float)", FLT_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F32
    { test_remainder_2, "remainder", "remainder (_Float16, _Float32)", FLT32_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
    { test_remainder_3, "remainder", "remainder (_Float16, _Float32x)", FLT32X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_remainder_4, "remainder", "remainder (_Float16, double)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_remainder_5, "remainder", "remainder (_Float16, long double)", LDBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F64
    { test_remainder_6, "remainder", "remainder (_Float16, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
    { test_remainder_7, "remainder", "remainder (_Float16, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F16
    { test_remainder_8, "remainder", "remainder (_Float16, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_remainder_9, "remainder", "remainder (_Float16, char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_remainder_10, "remainder", "remainder (_Float16, signed char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_remainder_11, "remainder", "remainder (_Float16, unsigned char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_remainder_12, "remainder", "remainder (_Float16, short int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_remainder_13, "remainder", "remainder (_Float16, unsigned short int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_remainder_14, "remainder", "remainder (_Float16, int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_remainder_15, "remainder", "remainder (_Float16, unsigned int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_remainder_16, "remainder", "remainder (_Float16, long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_remainder_17, "remainder", "remainder (_Float16, unsigned long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_remainder_18, "remainder", "remainder (_Float16, long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_remainder_19, "remainder", "remainder (_Float16, unsigned long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_remainder_20, "remainder", "remainder (_Float16, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_remainder_21, "remainder", "remainder (_Float16, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_remainder_22, "remainder", "remainder (_Float16, enum e)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_remainder_23, "remainder", "remainder (_Float16, _Bool)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_remainder_24, "remainder", "remainder (_Float16, bit_field)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_remainder_25, "remainder", "remainder (float, _Float16)", FLT_MANT_DIG, 0 },
#endif
    { test_remainder_26, "remainder", "remainder (float, float)", FLT_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_remainder_27, "remainder", "remainder (float, _Float32)", FLT32_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_remainder_28, "remainder", "remainder (float, _Float32x)", FLT32X_MANT_DIG, 0 },
#endif
    { test_remainder_29, "remainder", "remainder (float, double)", DBL_MANT_DIG, 0 },
    { test_remainder_30, "remainder", "remainder (float, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_remainder_31, "remainder", "remainder (float, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_remainder_32, "remainder", "remainder (float, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_remainder_33, "remainder", "remainder (float, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_remainder_34, "remainder", "remainder (float, char)", DBL_MANT_DIG, 0 },
    { test_remainder_35, "remainder", "remainder (float, signed char)", DBL_MANT_DIG, 0 },
    { test_remainder_36, "remainder", "remainder (float, unsigned char)", DBL_MANT_DIG, 0 },
    { test_remainder_37, "remainder", "remainder (float, short int)", DBL_MANT_DIG, 0 },
    { test_remainder_38, "remainder", "remainder (float, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_remainder_39, "remainder", "remainder (float, int)", DBL_MANT_DIG, 0 },
    { test_remainder_40, "remainder", "remainder (float, unsigned int)", DBL_MANT_DIG, 0 },
    { test_remainder_41, "remainder", "remainder (float, long int)", DBL_MANT_DIG, 0 },
    { test_remainder_42, "remainder", "remainder (float, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_remainder_43, "remainder", "remainder (float, long long int)", DBL_MANT_DIG, 0 },
    { test_remainder_44, "remainder", "remainder (float, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_remainder_45, "remainder", "remainder (float, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_remainder_46, "remainder", "remainder (float, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_remainder_47, "remainder", "remainder (float, enum e)", DBL_MANT_DIG, 0 },
    { test_remainder_48, "remainder", "remainder (float, _Bool)", DBL_MANT_DIG, 0 },
    { test_remainder_49, "remainder", "remainder (float, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F32
    { test_remainder_50, "remainder", "remainder (_Float32, _Float16)", FLT32_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_remainder_51, "remainder", "remainder (_Float32, float)", FLT32_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_remainder_52, "remainder", "remainder (_Float32, _Float32)", FLT32_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
    { test_remainder_53, "remainder", "remainder (_Float32, _Float32x)", FLT32X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_remainder_54, "remainder", "remainder (_Float32, double)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_remainder_55, "remainder", "remainder (_Float32, long double)", LDBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F64
    { test_remainder_56, "remainder", "remainder (_Float32, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
    { test_remainder_57, "remainder", "remainder (_Float32, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F32
    { test_remainder_58, "remainder", "remainder (_Float32, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_remainder_59, "remainder", "remainder (_Float32, char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_remainder_60, "remainder", "remainder (_Float32, signed char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_remainder_61, "remainder", "remainder (_Float32, unsigned char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_remainder_62, "remainder", "remainder (_Float32, short int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_remainder_63, "remainder", "remainder (_Float32, unsigned short int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_remainder_64, "remainder", "remainder (_Float32, int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_remainder_65, "remainder", "remainder (_Float32, unsigned int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_remainder_66, "remainder", "remainder (_Float32, long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_remainder_67, "remainder", "remainder (_Float32, unsigned long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_remainder_68, "remainder", "remainder (_Float32, long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_remainder_69, "remainder", "remainder (_Float32, unsigned long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_remainder_70, "remainder", "remainder (_Float32, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_remainder_71, "remainder", "remainder (_Float32, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_remainder_72, "remainder", "remainder (_Float32, enum e)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_remainder_73, "remainder", "remainder (_Float32, _Bool)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_remainder_74, "remainder", "remainder (_Float32, bit_field)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
    { test_remainder_75, "remainder", "remainder (_Float32x, _Float16)", FLT32X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_remainder_76, "remainder", "remainder (_Float32x, float)", FLT32X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
    { test_remainder_77, "remainder", "remainder (_Float32x, _Float32)", FLT32X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_remainder_78, "remainder", "remainder (_Float32x, _Float32x)", FLT32X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_remainder_79, "remainder", "remainder (_Float32x, double)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_remainder_80, "remainder", "remainder (_Float32x, long double)", LDBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X && defined HUGE_VAL_F64
    { test_remainder_81, "remainder", "remainder (_Float32x, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
    { test_remainder_82, "remainder", "remainder (_Float32x, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
    { test_remainder_83, "remainder", "remainder (_Float32x, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_remainder_84, "remainder", "remainder (_Float32x, char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_remainder_85, "remainder", "remainder (_Float32x, signed char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_remainder_86, "remainder", "remainder (_Float32x, unsigned char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_remainder_87, "remainder", "remainder (_Float32x, short int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_remainder_88, "remainder", "remainder (_Float32x, unsigned short int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_remainder_89, "remainder", "remainder (_Float32x, int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_remainder_90, "remainder", "remainder (_Float32x, unsigned int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_remainder_91, "remainder", "remainder (_Float32x, long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_remainder_92, "remainder", "remainder (_Float32x, unsigned long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_remainder_93, "remainder", "remainder (_Float32x, long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_remainder_94, "remainder", "remainder (_Float32x, unsigned long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_remainder_95, "remainder", "remainder (_Float32x, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_remainder_96, "remainder", "remainder (_Float32x, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_remainder_97, "remainder", "remainder (_Float32x, enum e)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_remainder_98, "remainder", "remainder (_Float32x, _Bool)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_remainder_99, "remainder", "remainder (_Float32x, bit_field)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_remainder_100, "remainder", "remainder (double, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_remainder_101, "remainder", "remainder (double, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_remainder_102, "remainder", "remainder (double, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_remainder_103, "remainder", "remainder (double, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_remainder_104, "remainder", "remainder (double, double)", DBL_MANT_DIG, 0 },
    { test_remainder_105, "remainder", "remainder (double, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_remainder_106, "remainder", "remainder (double, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_remainder_107, "remainder", "remainder (double, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_remainder_108, "remainder", "remainder (double, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_remainder_109, "remainder", "remainder (double, char)", DBL_MANT_DIG, 0 },
    { test_remainder_110, "remainder", "remainder (double, signed char)", DBL_MANT_DIG, 0 },
    { test_remainder_111, "remainder", "remainder (double, unsigned char)", DBL_MANT_DIG, 0 },
    { test_remainder_112, "remainder", "remainder (double, short int)", DBL_MANT_DIG, 0 },
    { test_remainder_113, "remainder", "remainder (double, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_remainder_114, "remainder", "remainder (double, int)", DBL_MANT_DIG, 0 },
    { test_remainder_115, "remainder", "remainder (double, unsigned int)", DBL_MANT_DIG, 0 },
    { test_remainder_116, "remainder", "remainder (double, long int)", DBL_MANT_DIG, 0 },
    { test_remainder_117, "remainder", "remainder (double, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_remainder_118, "remainder", "remainder (double, long long int)", DBL_MANT_DIG, 0 },
    { test_remainder_119, "remainder", "remainder (double, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_remainder_120, "remainder", "remainder (double, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_remainder_121, "remainder", "remainder (double, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_remainder_122, "remainder", "remainder (double, enum e)", DBL_MANT_DIG, 0 },
    { test_remainder_123, "remainder", "remainder (double, _Bool)", DBL_MANT_DIG, 0 },
    { test_remainder_124, "remainder", "remainder (double, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_remainder_125, "remainder", "remainder (long double, _Float16)", LDBL_MANT_DIG, 0 },
#endif
    { test_remainder_126, "remainder", "remainder (long double, float)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_remainder_127, "remainder", "remainder (long double, _Float32)", LDBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_remainder_128, "remainder", "remainder (long double, _Float32x)", LDBL_MANT_DIG, 0 },
#endif
    { test_remainder_129, "remainder", "remainder (long double, double)", LDBL_MANT_DIG, 0 },
    { test_remainder_130, "remainder", "remainder (long double, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_remainder_131, "remainder", "remainder (long double, _Float64)", LDBL_MANT_DIG, 0 },
#endif
#if (LDBL_MANT_DIG != 106) && defined HUGE_VAL_F64X
    { test_remainder_132, "remainder", "remainder (long double, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (LDBL_MANT_DIG != 106) && defined HUGE_VAL_F128
    { test_remainder_133, "remainder", "remainder (long double, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_remainder_134, "remainder", "remainder (long double, char)", LDBL_MANT_DIG, 0 },
    { test_remainder_135, "remainder", "remainder (long double, signed char)", LDBL_MANT_DIG, 0 },
    { test_remainder_136, "remainder", "remainder (long double, unsigned char)", LDBL_MANT_DIG, 0 },
    { test_remainder_137, "remainder", "remainder (long double, short int)", LDBL_MANT_DIG, 0 },
    { test_remainder_138, "remainder", "remainder (long double, unsigned short int)", LDBL_MANT_DIG, 0 },
    { test_remainder_139, "remainder", "remainder (long double, int)", LDBL_MANT_DIG, 0 },
    { test_remainder_140, "remainder", "remainder (long double, unsigned int)", LDBL_MANT_DIG, 0 },
    { test_remainder_141, "remainder", "remainder (long double, long int)", LDBL_MANT_DIG, 0 },
    { test_remainder_142, "remainder", "remainder (long double, unsigned long int)", LDBL_MANT_DIG, 0 },
    { test_remainder_143, "remainder", "remainder (long double, long long int)", LDBL_MANT_DIG, 0 },
    { test_remainder_144, "remainder", "remainder (long double, unsigned long long int)", LDBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_remainder_145, "remainder", "remainder (long double, __int128)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_remainder_146, "remainder", "remainder (long double, unsigned __int128)", LDBL_MANT_DIG, 0 },
#endif
    { test_remainder_147, "remainder", "remainder (long double, enum e)", LDBL_MANT_DIG, 0 },
    { test_remainder_148, "remainder", "remainder (long double, _Bool)", LDBL_MANT_DIG, 0 },
    { test_remainder_149, "remainder", "remainder (long double, bit_field)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F64
    { test_remainder_150, "remainder", "remainder (_Float64, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_remainder_151, "remainder", "remainder (_Float64, float)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F64
    { test_remainder_152, "remainder", "remainder (_Float64, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X && defined HUGE_VAL_F64
    { test_remainder_153, "remainder", "remainder (_Float64, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_remainder_154, "remainder", "remainder (_Float64, double)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_remainder_155, "remainder", "remainder (_Float64, long double)", LDBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_remainder_156, "remainder", "remainder (_Float64, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
    { test_remainder_157, "remainder", "remainder (_Float64, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F64
    { test_remainder_158, "remainder", "remainder (_Float64, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_remainder_159, "remainder", "remainder (_Float64, char)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_remainder_160, "remainder", "remainder (_Float64, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_remainder_161, "remainder", "remainder (_Float64, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_remainder_162, "remainder", "remainder (_Float64, short int)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_remainder_163, "remainder", "remainder (_Float64, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_remainder_164, "remainder", "remainder (_Float64, int)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_remainder_165, "remainder", "remainder (_Float64, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_remainder_166, "remainder", "remainder (_Float64, long int)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_remainder_167, "remainder", "remainder (_Float64, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_remainder_168, "remainder", "remainder (_Float64, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_remainder_169, "remainder", "remainder (_Float64, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_remainder_170, "remainder", "remainder (_Float64, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_remainder_171, "remainder", "remainder (_Float64, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_remainder_172, "remainder", "remainder (_Float64, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_remainder_173, "remainder", "remainder (_Float64, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_remainder_174, "remainder", "remainder (_Float64, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
    { test_remainder_175, "remainder", "remainder (_Float64x, _Float16)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_remainder_176, "remainder", "remainder (_Float64x, float)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
    { test_remainder_177, "remainder", "remainder (_Float64x, _Float32)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
    { test_remainder_178, "remainder", "remainder (_Float64x, _Float32x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_remainder_179, "remainder", "remainder (_Float64x, double)", FLT64X_MANT_DIG, 0 },
#endif
#if (LDBL_MANT_DIG != 106) && defined HUGE_VAL_F64X
    { test_remainder_180, "remainder", "remainder (_Float64x, long double)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
    { test_remainder_181, "remainder", "remainder (_Float64x, _Float64)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_remainder_182, "remainder", "remainder (_Float64x, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
    { test_remainder_183, "remainder", "remainder (_Float64x, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_remainder_184, "remainder", "remainder (_Float64x, char)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_remainder_185, "remainder", "remainder (_Float64x, signed char)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_remainder_186, "remainder", "remainder (_Float64x, unsigned char)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_remainder_187, "remainder", "remainder (_Float64x, short int)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_remainder_188, "remainder", "remainder (_Float64x, unsigned short int)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_remainder_189, "remainder", "remainder (_Float64x, int)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_remainder_190, "remainder", "remainder (_Float64x, unsigned int)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_remainder_191, "remainder", "remainder (_Float64x, long int)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_remainder_192, "remainder", "remainder (_Float64x, unsigned long int)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_remainder_193, "remainder", "remainder (_Float64x, long long int)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_remainder_194, "remainder", "remainder (_Float64x, unsigned long long int)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_remainder_195, "remainder", "remainder (_Float64x, __int128)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_remainder_196, "remainder", "remainder (_Float64x, unsigned __int128)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_remainder_197, "remainder", "remainder (_Float64x, enum e)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_remainder_198, "remainder", "remainder (_Float64x, _Bool)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_remainder_199, "remainder", "remainder (_Float64x, bit_field)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F16
    { test_remainder_200, "remainder", "remainder (_Float128, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_remainder_201, "remainder", "remainder (_Float128, float)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F32
    { test_remainder_202, "remainder", "remainder (_Float128, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
    { test_remainder_203, "remainder", "remainder (_Float128, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_remainder_204, "remainder", "remainder (_Float128, double)", FLT128_MANT_DIG, 0 },
#endif
#if (LDBL_MANT_DIG != 106) && defined HUGE_VAL_F128
    { test_remainder_205, "remainder", "remainder (_Float128, long double)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F64
    { test_remainder_206, "remainder", "remainder (_Float128, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
    { test_remainder_207, "remainder", "remainder (_Float128, _Float64x)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_remainder_208, "remainder", "remainder (_Float128, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_remainder_209, "remainder", "remainder (_Float128, char)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_remainder_210, "remainder", "remainder (_Float128, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_remainder_211, "remainder", "remainder (_Float128, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_remainder_212, "remainder", "remainder (_Float128, short int)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_remainder_213, "remainder", "remainder (_Float128, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_remainder_214, "remainder", "remainder (_Float128, int)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_remainder_215, "remainder", "remainder (_Float128, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_remainder_216, "remainder", "remainder (_Float128, long int)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_remainder_217, "remainder", "remainder (_Float128, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_remainder_218, "remainder", "remainder (_Float128, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_remainder_219, "remainder", "remainder (_Float128, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_remainder_220, "remainder", "remainder (_Float128, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_remainder_221, "remainder", "remainder (_Float128, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_remainder_222, "remainder", "remainder (_Float128, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_remainder_223, "remainder", "remainder (_Float128, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_remainder_224, "remainder", "remainder (_Float128, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_remainder_225, "remainder", "remainder (char, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_remainder_226, "remainder", "remainder (char, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_remainder_227, "remainder", "remainder (char, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_remainder_228, "remainder", "remainder (char, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_remainder_229, "remainder", "remainder (char, double)", DBL_MANT_DIG, 0 },
    { test_remainder_230, "remainder", "remainder (char, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_remainder_231, "remainder", "remainder (char, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_remainder_232, "remainder", "remainder (char, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_remainder_233, "remainder", "remainder (char, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_remainder_234, "remainder", "remainder (char, char)", DBL_MANT_DIG, 0 },
    { test_remainder_235, "remainder", "remainder (char, signed char)", DBL_MANT_DIG, 0 },
    { test_remainder_236, "remainder", "remainder (char, unsigned char)", DBL_MANT_DIG, 0 },
    { test_remainder_237, "remainder", "remainder (char, short int)", DBL_MANT_DIG, 0 },
    { test_remainder_238, "remainder", "remainder (char, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_remainder_239, "remainder", "remainder (char, int)", DBL_MANT_DIG, 0 },
    { test_remainder_240, "remainder", "remainder (char, unsigned int)", DBL_MANT_DIG, 0 },
    { test_remainder_241, "remainder", "remainder (char, long int)", DBL_MANT_DIG, 0 },
    { test_remainder_242, "remainder", "remainder (char, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_remainder_243, "remainder", "remainder (char, long long int)", DBL_MANT_DIG, 0 },
    { test_remainder_244, "remainder", "remainder (char, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_remainder_245, "remainder", "remainder (char, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_remainder_246, "remainder", "remainder (char, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_remainder_247, "remainder", "remainder (char, enum e)", DBL_MANT_DIG, 0 },
    { test_remainder_248, "remainder", "remainder (char, _Bool)", DBL_MANT_DIG, 0 },
    { test_remainder_249, "remainder", "remainder (char, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_remainder_250, "remainder", "remainder (signed char, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_remainder_251, "remainder", "remainder (signed char, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_remainder_252, "remainder", "remainder (signed char, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_remainder_253, "remainder", "remainder (signed char, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_remainder_254, "remainder", "remainder (signed char, double)", DBL_MANT_DIG, 0 },
    { test_remainder_255, "remainder", "remainder (signed char, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_remainder_256, "remainder", "remainder (signed char, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_remainder_257, "remainder", "remainder (signed char, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_remainder_258, "remainder", "remainder (signed char, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_remainder_259, "remainder", "remainder (signed char, char)", DBL_MANT_DIG, 0 },
    { test_remainder_260, "remainder", "remainder (signed char, signed char)", DBL_MANT_DIG, 0 },
    { test_remainder_261, "remainder", "remainder (signed char, unsigned char)", DBL_MANT_DIG, 0 },
    { test_remainder_262, "remainder", "remainder (signed char, short int)", DBL_MANT_DIG, 0 },
    { test_remainder_263, "remainder", "remainder (signed char, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_remainder_264, "remainder", "remainder (signed char, int)", DBL_MANT_DIG, 0 },
    { test_remainder_265, "remainder", "remainder (signed char, unsigned int)", DBL_MANT_DIG, 0 },
    { test_remainder_266, "remainder", "remainder (signed char, long int)", DBL_MANT_DIG, 0 },
    { test_remainder_267, "remainder", "remainder (signed char, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_remainder_268, "remainder", "remainder (signed char, long long int)", DBL_MANT_DIG, 0 },
    { test_remainder_269, "remainder", "remainder (signed char, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_remainder_270, "remainder", "remainder (signed char, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_remainder_271, "remainder", "remainder (signed char, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_remainder_272, "remainder", "remainder (signed char, enum e)", DBL_MANT_DIG, 0 },
    { test_remainder_273, "remainder", "remainder (signed char, _Bool)", DBL_MANT_DIG, 0 },
    { test_remainder_274, "remainder", "remainder (signed char, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_remainder_275, "remainder", "remainder (unsigned char, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_remainder_276, "remainder", "remainder (unsigned char, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_remainder_277, "remainder", "remainder (unsigned char, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_remainder_278, "remainder", "remainder (unsigned char, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_remainder_279, "remainder", "remainder (unsigned char, double)", DBL_MANT_DIG, 0 },
    { test_remainder_280, "remainder", "remainder (unsigned char, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_remainder_281, "remainder", "remainder (unsigned char, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_remainder_282, "remainder", "remainder (unsigned char, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_remainder_283, "remainder", "remainder (unsigned char, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_remainder_284, "remainder", "remainder (unsigned char, char)", DBL_MANT_DIG, 0 },
    { test_remainder_285, "remainder", "remainder (unsigned char, signed char)", DBL_MANT_DIG, 0 },
    { test_remainder_286, "remainder", "remainder (unsigned char, unsigned char)", DBL_MANT_DIG, 0 },
    { test_remainder_287, "remainder", "remainder (unsigned char, short int)", DBL_MANT_DIG, 0 },
    { test_remainder_288, "remainder", "remainder (unsigned char, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_remainder_289, "remainder", "remainder (unsigned char, int)", DBL_MANT_DIG, 0 },
    { test_remainder_290, "remainder", "remainder (unsigned char, unsigned int)", DBL_MANT_DIG, 0 },
    { test_remainder_291, "remainder", "remainder (unsigned char, long int)", DBL_MANT_DIG, 0 },
    { test_remainder_292, "remainder", "remainder (unsigned char, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_remainder_293, "remainder", "remainder (unsigned char, long long int)", DBL_MANT_DIG, 0 },
    { test_remainder_294, "remainder", "remainder (unsigned char, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_remainder_295, "remainder", "remainder (unsigned char, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_remainder_296, "remainder", "remainder (unsigned char, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_remainder_297, "remainder", "remainder (unsigned char, enum e)", DBL_MANT_DIG, 0 },
    { test_remainder_298, "remainder", "remainder (unsigned char, _Bool)", DBL_MANT_DIG, 0 },
    { test_remainder_299, "remainder", "remainder (unsigned char, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_remainder_300, "remainder", "remainder (short int, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_remainder_301, "remainder", "remainder (short int, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_remainder_302, "remainder", "remainder (short int, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_remainder_303, "remainder", "remainder (short int, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_remainder_304, "remainder", "remainder (short int, double)", DBL_MANT_DIG, 0 },
    { test_remainder_305, "remainder", "remainder (short int, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_remainder_306, "remainder", "remainder (short int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_remainder_307, "remainder", "remainder (short int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_remainder_308, "remainder", "remainder (short int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_remainder_309, "remainder", "remainder (short int, char)", DBL_MANT_DIG, 0 },
    { test_remainder_310, "remainder", "remainder (short int, signed char)", DBL_MANT_DIG, 0 },
    { test_remainder_311, "remainder", "remainder (short int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_remainder_312, "remainder", "remainder (short int, short int)", DBL_MANT_DIG, 0 },
    { test_remainder_313, "remainder", "remainder (short int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_remainder_314, "remainder", "remainder (short int, int)", DBL_MANT_DIG, 0 },
    { test_remainder_315, "remainder", "remainder (short int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_remainder_316, "remainder", "remainder (short int, long int)", DBL_MANT_DIG, 0 },
    { test_remainder_317, "remainder", "remainder (short int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_remainder_318, "remainder", "remainder (short int, long long int)", DBL_MANT_DIG, 0 },
    { test_remainder_319, "remainder", "remainder (short int, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_remainder_320, "remainder", "remainder (short int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_remainder_321, "remainder", "remainder (short int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_remainder_322, "remainder", "remainder (short int, enum e)", DBL_MANT_DIG, 0 },
    { test_remainder_323, "remainder", "remainder (short int, _Bool)", DBL_MANT_DIG, 0 },
    { test_remainder_324, "remainder", "remainder (short int, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_remainder_325, "remainder", "remainder (unsigned short int, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_remainder_326, "remainder", "remainder (unsigned short int, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_remainder_327, "remainder", "remainder (unsigned short int, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_remainder_328, "remainder", "remainder (unsigned short int, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_remainder_329, "remainder", "remainder (unsigned short int, double)", DBL_MANT_DIG, 0 },
    { test_remainder_330, "remainder", "remainder (unsigned short int, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_remainder_331, "remainder", "remainder (unsigned short int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_remainder_332, "remainder", "remainder (unsigned short int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_remainder_333, "remainder", "remainder (unsigned short int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_remainder_334, "remainder", "remainder (unsigned short int, char)", DBL_MANT_DIG, 0 },
    { test_remainder_335, "remainder", "remainder (unsigned short int, signed char)", DBL_MANT_DIG, 0 },
    { test_remainder_336, "remainder", "remainder (unsigned short int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_remainder_337, "remainder", "remainder (unsigned short int, short int)", DBL_MANT_DIG, 0 },
    { test_remainder_338, "remainder", "remainder (unsigned short int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_remainder_339, "remainder", "remainder (unsigned short int, int)", DBL_MANT_DIG, 0 },
    { test_remainder_340, "remainder", "remainder (unsigned short int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_remainder_341, "remainder", "remainder (unsigned short int, long int)", DBL_MANT_DIG, 0 },
    { test_remainder_342, "remainder", "remainder (unsigned short int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_remainder_343, "remainder", "remainder (unsigned short int, long long int)", DBL_MANT_DIG, 0 },
    { test_remainder_344, "remainder", "remainder (unsigned short int, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_remainder_345, "remainder", "remainder (unsigned short int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_remainder_346, "remainder", "remainder (unsigned short int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_remainder_347, "remainder", "remainder (unsigned short int, enum e)", DBL_MANT_DIG, 0 },
    { test_remainder_348, "remainder", "remainder (unsigned short int, _Bool)", DBL_MANT_DIG, 0 },
    { test_remainder_349, "remainder", "remainder (unsigned short int, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_remainder_350, "remainder", "remainder (int, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_remainder_351, "remainder", "remainder (int, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_remainder_352, "remainder", "remainder (int, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_remainder_353, "remainder", "remainder (int, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_remainder_354, "remainder", "remainder (int, double)", DBL_MANT_DIG, 0 },
    { test_remainder_355, "remainder", "remainder (int, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_remainder_356, "remainder", "remainder (int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_remainder_357, "remainder", "remainder (int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_remainder_358, "remainder", "remainder (int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_remainder_359, "remainder", "remainder (int, char)", DBL_MANT_DIG, 0 },
    { test_remainder_360, "remainder", "remainder (int, signed char)", DBL_MANT_DIG, 0 },
    { test_remainder_361, "remainder", "remainder (int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_remainder_362, "remainder", "remainder (int, short int)", DBL_MANT_DIG, 0 },
    { test_remainder_363, "remainder", "remainder (int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_remainder_364, "remainder", "remainder (int, int)", DBL_MANT_DIG, 0 },
    { test_remainder_365, "remainder", "remainder (int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_remainder_366, "remainder", "remainder (int, long int)", DBL_MANT_DIG, 0 },
    { test_remainder_367, "remainder", "remainder (int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_remainder_368, "remainder", "remainder (int, long long int)", DBL_MANT_DIG, 0 },
    { test_remainder_369, "remainder", "remainder (int, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_remainder_370, "remainder", "remainder (int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_remainder_371, "remainder", "remainder (int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_remainder_372, "remainder", "remainder (int, enum e)", DBL_MANT_DIG, 0 },
    { test_remainder_373, "remainder", "remainder (int, _Bool)", DBL_MANT_DIG, 0 },
    { test_remainder_374, "remainder", "remainder (int, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_remainder_375, "remainder", "remainder (unsigned int, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_remainder_376, "remainder", "remainder (unsigned int, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_remainder_377, "remainder", "remainder (unsigned int, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_remainder_378, "remainder", "remainder (unsigned int, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_remainder_379, "remainder", "remainder (unsigned int, double)", DBL_MANT_DIG, 0 },
    { test_remainder_380, "remainder", "remainder (unsigned int, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_remainder_381, "remainder", "remainder (unsigned int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_remainder_382, "remainder", "remainder (unsigned int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_remainder_383, "remainder", "remainder (unsigned int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_remainder_384, "remainder", "remainder (unsigned int, char)", DBL_MANT_DIG, 0 },
    { test_remainder_385, "remainder", "remainder (unsigned int, signed char)", DBL_MANT_DIG, 0 },
    { test_remainder_386, "remainder", "remainder (unsigned int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_remainder_387, "remainder", "remainder (unsigned int, short int)", DBL_MANT_DIG, 0 },
    { test_remainder_388, "remainder", "remainder (unsigned int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_remainder_389, "remainder", "remainder (unsigned int, int)", DBL_MANT_DIG, 0 },
    { test_remainder_390, "remainder", "remainder (unsigned int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_remainder_391, "remainder", "remainder (unsigned int, long int)", DBL_MANT_DIG, 0 },
    { test_remainder_392, "remainder", "remainder (unsigned int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_remainder_393, "remainder", "remainder (unsigned int, long long int)", DBL_MANT_DIG, 0 },
    { test_remainder_394, "remainder", "remainder (unsigned int, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_remainder_395, "remainder", "remainder (unsigned int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_remainder_396, "remainder", "remainder (unsigned int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_remainder_397, "remainder", "remainder (unsigned int, enum e)", DBL_MANT_DIG, 0 },
    { test_remainder_398, "remainder", "remainder (unsigned int, _Bool)", DBL_MANT_DIG, 0 },
    { test_remainder_399, "remainder", "remainder (unsigned int, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_remainder_400, "remainder", "remainder (long int, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_remainder_401, "remainder", "remainder (long int, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_remainder_402, "remainder", "remainder (long int, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_remainder_403, "remainder", "remainder (long int, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_remainder_404, "remainder", "remainder (long int, double)", DBL_MANT_DIG, 0 },
    { test_remainder_405, "remainder", "remainder (long int, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_remainder_406, "remainder", "remainder (long int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_remainder_407, "remainder", "remainder (long int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_remainder_408, "remainder", "remainder (long int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_remainder_409, "remainder", "remainder (long int, char)", DBL_MANT_DIG, 0 },
    { test_remainder_410, "remainder", "remainder (long int, signed char)", DBL_MANT_DIG, 0 },
    { test_remainder_411, "remainder", "remainder (long int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_remainder_412, "remainder", "remainder (long int, short int)", DBL_MANT_DIG, 0 },
    { test_remainder_413, "remainder", "remainder (long int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_remainder_414, "remainder", "remainder (long int, int)", DBL_MANT_DIG, 0 },
    { test_remainder_415, "remainder", "remainder (long int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_remainder_416, "remainder", "remainder (long int, long int)", DBL_MANT_DIG, 0 },
    { test_remainder_417, "remainder", "remainder (long int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_remainder_418, "remainder", "remainder (long int, long long int)", DBL_MANT_DIG, 0 },
    { test_remainder_419, "remainder", "remainder (long int, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_remainder_420, "remainder", "remainder (long int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_remainder_421, "remainder", "remainder (long int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_remainder_422, "remainder", "remainder (long int, enum e)", DBL_MANT_DIG, 0 },
    { test_remainder_423, "remainder", "remainder (long int, _Bool)", DBL_MANT_DIG, 0 },
    { test_remainder_424, "remainder", "remainder (long int, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_remainder_425, "remainder", "remainder (unsigned long int, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_remainder_426, "remainder", "remainder (unsigned long int, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_remainder_427, "remainder", "remainder (unsigned long int, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_remainder_428, "remainder", "remainder (unsigned long int, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_remainder_429, "remainder", "remainder (unsigned long int, double)", DBL_MANT_DIG, 0 },
    { test_remainder_430, "remainder", "remainder (unsigned long int, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_remainder_431, "remainder", "remainder (unsigned long int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_remainder_432, "remainder", "remainder (unsigned long int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_remainder_433, "remainder", "remainder (unsigned long int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_remainder_434, "remainder", "remainder (unsigned long int, char)", DBL_MANT_DIG, 0 },
    { test_remainder_435, "remainder", "remainder (unsigned long int, signed char)", DBL_MANT_DIG, 0 },
    { test_remainder_436, "remainder", "remainder (unsigned long int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_remainder_437, "remainder", "remainder (unsigned long int, short int)", DBL_MANT_DIG, 0 },
    { test_remainder_438, "remainder", "remainder (unsigned long int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_remainder_439, "remainder", "remainder (unsigned long int, int)", DBL_MANT_DIG, 0 },
    { test_remainder_440, "remainder", "remainder (unsigned long int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_remainder_441, "remainder", "remainder (unsigned long int, long int)", DBL_MANT_DIG, 0 },
    { test_remainder_442, "remainder", "remainder (unsigned long int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_remainder_443, "remainder", "remainder (unsigned long int, long long int)", DBL_MANT_DIG, 0 },
    { test_remainder_444, "remainder", "remainder (unsigned long int, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_remainder_445, "remainder", "remainder (unsigned long int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_remainder_446, "remainder", "remainder (unsigned long int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_remainder_447, "remainder", "remainder (unsigned long int, enum e)", DBL_MANT_DIG, 0 },
    { test_remainder_448, "remainder", "remainder (unsigned long int, _Bool)", DBL_MANT_DIG, 0 },
    { test_remainder_449, "remainder", "remainder (unsigned long int, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_remainder_450, "remainder", "remainder (long long int, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_remainder_451, "remainder", "remainder (long long int, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_remainder_452, "remainder", "remainder (long long int, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_remainder_453, "remainder", "remainder (long long int, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_remainder_454, "remainder", "remainder (long long int, double)", DBL_MANT_DIG, 0 },
    { test_remainder_455, "remainder", "remainder (long long int, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_remainder_456, "remainder", "remainder (long long int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_remainder_457, "remainder", "remainder (long long int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_remainder_458, "remainder", "remainder (long long int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_remainder_459, "remainder", "remainder (long long int, char)", DBL_MANT_DIG, 0 },
    { test_remainder_460, "remainder", "remainder (long long int, signed char)", DBL_MANT_DIG, 0 },
    { test_remainder_461, "remainder", "remainder (long long int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_remainder_462, "remainder", "remainder (long long int, short int)", DBL_MANT_DIG, 0 },
    { test_remainder_463, "remainder", "remainder (long long int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_remainder_464, "remainder", "remainder (long long int, int)", DBL_MANT_DIG, 0 },
    { test_remainder_465, "remainder", "remainder (long long int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_remainder_466, "remainder", "remainder (long long int, long int)", DBL_MANT_DIG, 0 },
    { test_remainder_467, "remainder", "remainder (long long int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_remainder_468, "remainder", "remainder (long long int, long long int)", DBL_MANT_DIG, 0 },
    { test_remainder_469, "remainder", "remainder (long long int, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_remainder_470, "remainder", "remainder (long long int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_remainder_471, "remainder", "remainder (long long int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_remainder_472, "remainder", "remainder (long long int, enum e)", DBL_MANT_DIG, 0 },
    { test_remainder_473, "remainder", "remainder (long long int, _Bool)", DBL_MANT_DIG, 0 },
    { test_remainder_474, "remainder", "remainder (long long int, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_remainder_475, "remainder", "remainder (unsigned long long int, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_remainder_476, "remainder", "remainder (unsigned long long int, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_remainder_477, "remainder", "remainder (unsigned long long int, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_remainder_478, "remainder", "remainder (unsigned long long int, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_remainder_479, "remainder", "remainder (unsigned long long int, double)", DBL_MANT_DIG, 0 },
    { test_remainder_480, "remainder", "remainder (unsigned long long int, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_remainder_481, "remainder", "remainder (unsigned long long int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_remainder_482, "remainder", "remainder (unsigned long long int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_remainder_483, "remainder", "remainder (unsigned long long int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_remainder_484, "remainder", "remainder (unsigned long long int, char)", DBL_MANT_DIG, 0 },
    { test_remainder_485, "remainder", "remainder (unsigned long long int, signed char)", DBL_MANT_DIG, 0 },
    { test_remainder_486, "remainder", "remainder (unsigned long long int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_remainder_487, "remainder", "remainder (unsigned long long int, short int)", DBL_MANT_DIG, 0 },
    { test_remainder_488, "remainder", "remainder (unsigned long long int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_remainder_489, "remainder", "remainder (unsigned long long int, int)", DBL_MANT_DIG, 0 },
    { test_remainder_490, "remainder", "remainder (unsigned long long int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_remainder_491, "remainder", "remainder (unsigned long long int, long int)", DBL_MANT_DIG, 0 },
    { test_remainder_492, "remainder", "remainder (unsigned long long int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_remainder_493, "remainder", "remainder (unsigned long long int, long long int)", DBL_MANT_DIG, 0 },
    { test_remainder_494, "remainder", "remainder (unsigned long long int, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_remainder_495, "remainder", "remainder (unsigned long long int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_remainder_496, "remainder", "remainder (unsigned long long int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_remainder_497, "remainder", "remainder (unsigned long long int, enum e)", DBL_MANT_DIG, 0 },
    { test_remainder_498, "remainder", "remainder (unsigned long long int, _Bool)", DBL_MANT_DIG, 0 },
    { test_remainder_499, "remainder", "remainder (unsigned long long int, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_remainder_500, "remainder", "remainder (__int128, _Float16)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_remainder_501, "remainder", "remainder (__int128, float)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_remainder_502, "remainder", "remainder (__int128, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_remainder_503, "remainder", "remainder (__int128, _Float32x)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_remainder_504, "remainder", "remainder (__int128, double)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_remainder_505, "remainder", "remainder (__int128, long double)", LDBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_remainder_506, "remainder", "remainder (__int128, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_remainder_507, "remainder", "remainder (__int128, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_remainder_508, "remainder", "remainder (__int128, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_remainder_509, "remainder", "remainder (__int128, char)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_remainder_510, "remainder", "remainder (__int128, signed char)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_remainder_511, "remainder", "remainder (__int128, unsigned char)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_remainder_512, "remainder", "remainder (__int128, short int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_remainder_513, "remainder", "remainder (__int128, unsigned short int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_remainder_514, "remainder", "remainder (__int128, int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_remainder_515, "remainder", "remainder (__int128, unsigned int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_remainder_516, "remainder", "remainder (__int128, long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_remainder_517, "remainder", "remainder (__int128, unsigned long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_remainder_518, "remainder", "remainder (__int128, long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_remainder_519, "remainder", "remainder (__int128, unsigned long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_remainder_520, "remainder", "remainder (__int128, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_remainder_521, "remainder", "remainder (__int128, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_remainder_522, "remainder", "remainder (__int128, enum e)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_remainder_523, "remainder", "remainder (__int128, _Bool)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_remainder_524, "remainder", "remainder (__int128, bit_field)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_remainder_525, "remainder", "remainder (unsigned __int128, _Float16)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_remainder_526, "remainder", "remainder (unsigned __int128, float)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_remainder_527, "remainder", "remainder (unsigned __int128, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_remainder_528, "remainder", "remainder (unsigned __int128, _Float32x)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_remainder_529, "remainder", "remainder (unsigned __int128, double)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_remainder_530, "remainder", "remainder (unsigned __int128, long double)", LDBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_remainder_531, "remainder", "remainder (unsigned __int128, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_remainder_532, "remainder", "remainder (unsigned __int128, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_remainder_533, "remainder", "remainder (unsigned __int128, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_remainder_534, "remainder", "remainder (unsigned __int128, char)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_remainder_535, "remainder", "remainder (unsigned __int128, signed char)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_remainder_536, "remainder", "remainder (unsigned __int128, unsigned char)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_remainder_537, "remainder", "remainder (unsigned __int128, short int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_remainder_538, "remainder", "remainder (unsigned __int128, unsigned short int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_remainder_539, "remainder", "remainder (unsigned __int128, int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_remainder_540, "remainder", "remainder (unsigned __int128, unsigned int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_remainder_541, "remainder", "remainder (unsigned __int128, long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_remainder_542, "remainder", "remainder (unsigned __int128, unsigned long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_remainder_543, "remainder", "remainder (unsigned __int128, long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_remainder_544, "remainder", "remainder (unsigned __int128, unsigned long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_remainder_545, "remainder", "remainder (unsigned __int128, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_remainder_546, "remainder", "remainder (unsigned __int128, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_remainder_547, "remainder", "remainder (unsigned __int128, enum e)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_remainder_548, "remainder", "remainder (unsigned __int128, _Bool)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_remainder_549, "remainder", "remainder (unsigned __int128, bit_field)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_remainder_550, "remainder", "remainder (enum e, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_remainder_551, "remainder", "remainder (enum e, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_remainder_552, "remainder", "remainder (enum e, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_remainder_553, "remainder", "remainder (enum e, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_remainder_554, "remainder", "remainder (enum e, double)", DBL_MANT_DIG, 0 },
    { test_remainder_555, "remainder", "remainder (enum e, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_remainder_556, "remainder", "remainder (enum e, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_remainder_557, "remainder", "remainder (enum e, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_remainder_558, "remainder", "remainder (enum e, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_remainder_559, "remainder", "remainder (enum e, char)", DBL_MANT_DIG, 0 },
    { test_remainder_560, "remainder", "remainder (enum e, signed char)", DBL_MANT_DIG, 0 },
    { test_remainder_561, "remainder", "remainder (enum e, unsigned char)", DBL_MANT_DIG, 0 },
    { test_remainder_562, "remainder", "remainder (enum e, short int)", DBL_MANT_DIG, 0 },
    { test_remainder_563, "remainder", "remainder (enum e, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_remainder_564, "remainder", "remainder (enum e, int)", DBL_MANT_DIG, 0 },
    { test_remainder_565, "remainder", "remainder (enum e, unsigned int)", DBL_MANT_DIG, 0 },
    { test_remainder_566, "remainder", "remainder (enum e, long int)", DBL_MANT_DIG, 0 },
    { test_remainder_567, "remainder", "remainder (enum e, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_remainder_568, "remainder", "remainder (enum e, long long int)", DBL_MANT_DIG, 0 },
    { test_remainder_569, "remainder", "remainder (enum e, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_remainder_570, "remainder", "remainder (enum e, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_remainder_571, "remainder", "remainder (enum e, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_remainder_572, "remainder", "remainder (enum e, enum e)", DBL_MANT_DIG, 0 },
    { test_remainder_573, "remainder", "remainder (enum e, _Bool)", DBL_MANT_DIG, 0 },
    { test_remainder_574, "remainder", "remainder (enum e, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_remainder_575, "remainder", "remainder (_Bool, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_remainder_576, "remainder", "remainder (_Bool, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_remainder_577, "remainder", "remainder (_Bool, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_remainder_578, "remainder", "remainder (_Bool, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_remainder_579, "remainder", "remainder (_Bool, double)", DBL_MANT_DIG, 0 },
    { test_remainder_580, "remainder", "remainder (_Bool, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_remainder_581, "remainder", "remainder (_Bool, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_remainder_582, "remainder", "remainder (_Bool, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_remainder_583, "remainder", "remainder (_Bool, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_remainder_584, "remainder", "remainder (_Bool, char)", DBL_MANT_DIG, 0 },
    { test_remainder_585, "remainder", "remainder (_Bool, signed char)", DBL_MANT_DIG, 0 },
    { test_remainder_586, "remainder", "remainder (_Bool, unsigned char)", DBL_MANT_DIG, 0 },
    { test_remainder_587, "remainder", "remainder (_Bool, short int)", DBL_MANT_DIG, 0 },
    { test_remainder_588, "remainder", "remainder (_Bool, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_remainder_589, "remainder", "remainder (_Bool, int)", DBL_MANT_DIG, 0 },
    { test_remainder_590, "remainder", "remainder (_Bool, unsigned int)", DBL_MANT_DIG, 0 },
    { test_remainder_591, "remainder", "remainder (_Bool, long int)", DBL_MANT_DIG, 0 },
    { test_remainder_592, "remainder", "remainder (_Bool, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_remainder_593, "remainder", "remainder (_Bool, long long int)", DBL_MANT_DIG, 0 },
    { test_remainder_594, "remainder", "remainder (_Bool, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_remainder_595, "remainder", "remainder (_Bool, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_remainder_596, "remainder", "remainder (_Bool, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_remainder_597, "remainder", "remainder (_Bool, enum e)", DBL_MANT_DIG, 0 },
    { test_remainder_598, "remainder", "remainder (_Bool, _Bool)", DBL_MANT_DIG, 0 },
    { test_remainder_599, "remainder", "remainder (_Bool, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_remainder_600, "remainder", "remainder (bit_field, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_remainder_601, "remainder", "remainder (bit_field, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_remainder_602, "remainder", "remainder (bit_field, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_remainder_603, "remainder", "remainder (bit_field, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_remainder_604, "remainder", "remainder (bit_field, double)", DBL_MANT_DIG, 0 },
    { test_remainder_605, "remainder", "remainder (bit_field, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_remainder_606, "remainder", "remainder (bit_field, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_remainder_607, "remainder", "remainder (bit_field, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_remainder_608, "remainder", "remainder (bit_field, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_remainder_609, "remainder", "remainder (bit_field, char)", DBL_MANT_DIG, 0 },
    { test_remainder_610, "remainder", "remainder (bit_field, signed char)", DBL_MANT_DIG, 0 },
    { test_remainder_611, "remainder", "remainder (bit_field, unsigned char)", DBL_MANT_DIG, 0 },
    { test_remainder_612, "remainder", "remainder (bit_field, short int)", DBL_MANT_DIG, 0 },
    { test_remainder_613, "remainder", "remainder (bit_field, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_remainder_614, "remainder", "remainder (bit_field, int)", DBL_MANT_DIG, 0 },
    { test_remainder_615, "remainder", "remainder (bit_field, unsigned int)", DBL_MANT_DIG, 0 },
    { test_remainder_616, "remainder", "remainder (bit_field, long int)", DBL_MANT_DIG, 0 },
    { test_remainder_617, "remainder", "remainder (bit_field, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_remainder_618, "remainder", "remainder (bit_field, long long int)", DBL_MANT_DIG, 0 },
    { test_remainder_619, "remainder", "remainder (bit_field, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_remainder_620, "remainder", "remainder (bit_field, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_remainder_621, "remainder", "remainder (bit_field, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_remainder_622, "remainder", "remainder (bit_field, enum e)", DBL_MANT_DIG, 0 },
    { test_remainder_623, "remainder", "remainder (bit_field, _Bool)", DBL_MANT_DIG, 0 },
    { test_remainder_624, "remainder", "remainder (bit_field, bit_field)", DBL_MANT_DIG, 0 },
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
