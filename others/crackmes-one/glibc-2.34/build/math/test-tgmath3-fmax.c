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
(fmaxf16) (_Float16 arg0 __attribute__ ((unused)), _Float16 arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT16_MANT_DIG;
  called_func_name = "fmax";
  return 0;
}
#endif
float
(fmaxf) (float arg0 __attribute__ ((unused)), float arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT_MANT_DIG;
  called_func_name = "fmax";
  return 0;
}
#if defined HUGE_VAL_F32
_Float32
(fmaxf32) (_Float32 arg0 __attribute__ ((unused)), _Float32 arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT32_MANT_DIG;
  called_func_name = "fmax";
  return 0;
}
#endif
#if defined HUGE_VAL_F32X
_Float32x
(fmaxf32x) (_Float32x arg0 __attribute__ ((unused)), _Float32x arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT32X_MANT_DIG;
  called_func_name = "fmax";
  return 0;
}
#endif
double
(fmax) (double arg0 __attribute__ ((unused)), double arg1 __attribute__ ((unused)))
{
  called_mant_dig = DBL_MANT_DIG;
  called_func_name = "fmax";
  return 0;
}
long double
(fmaxl) (long double arg0 __attribute__ ((unused)), long double arg1 __attribute__ ((unused)))
{
  called_mant_dig = LDBL_MANT_DIG;
  called_func_name = "fmax";
  return 0;
}
#if defined HUGE_VAL_F64
_Float64
(fmaxf64) (_Float64 arg0 __attribute__ ((unused)), _Float64 arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT64_MANT_DIG;
  called_func_name = "fmax";
  return 0;
}
#endif
#if defined HUGE_VAL_F64X
_Float64x
(fmaxf64x) (_Float64x arg0 __attribute__ ((unused)), _Float64x arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT64X_MANT_DIG;
  called_func_name = "fmax";
  return 0;
}
#endif
#if defined HUGE_VAL_F128
_Float128
(fmaxf128) (_Float128 arg0 __attribute__ ((unused)), _Float128 arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT128_MANT_DIG;
  called_func_name = "fmax";
  return 0;
}
#endif
#if defined HUGE_VAL_F16
static void
test_fmax_0 (void)
{
  extern typeof (fmax (vol_var__Float16, vol_var__Float16)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = fmax (vol_var__Float16, vol_var__Float16);
}
#endif
#if defined HUGE_VAL_F16
static void
test_fmax_1 (void)
{
  extern typeof (fmax (vol_var__Float16, vol_var_float)) var_float __attribute__ ((unused));
  vol_var_float = fmax (vol_var__Float16, vol_var_float);
}
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F32
static void
test_fmax_2 (void)
{
  extern typeof (fmax (vol_var__Float16, vol_var__Float32)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = fmax (vol_var__Float16, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
static void
test_fmax_3 (void)
{
  extern typeof (fmax (vol_var__Float16, vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = fmax (vol_var__Float16, vol_var__Float32x);
}
#endif
#if defined HUGE_VAL_F16
static void
test_fmax_4 (void)
{
  extern typeof (fmax (vol_var__Float16, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var__Float16, vol_var_double);
}
#endif
#if defined HUGE_VAL_F16
static void
test_fmax_5 (void)
{
  extern typeof (fmax (vol_var__Float16, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmax (vol_var__Float16, vol_var_long_double);
}
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F64
static void
test_fmax_6 (void)
{
  extern typeof (fmax (vol_var__Float16, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmax (vol_var__Float16, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
static void
test_fmax_7 (void)
{
  extern typeof (fmax (vol_var__Float16, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmax (vol_var__Float16, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F16
static void
test_fmax_8 (void)
{
  extern typeof (fmax (vol_var__Float16, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmax (vol_var__Float16, vol_var__Float128);
}
#endif
#if defined HUGE_VAL_F16
static void
test_fmax_9 (void)
{
  extern typeof (fmax (vol_var__Float16, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var__Float16, vol_var_char);
}
#endif
#if defined HUGE_VAL_F16
static void
test_fmax_10 (void)
{
  extern typeof (fmax (vol_var__Float16, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var__Float16, vol_var_signed_char);
}
#endif
#if defined HUGE_VAL_F16
static void
test_fmax_11 (void)
{
  extern typeof (fmax (vol_var__Float16, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var__Float16, vol_var_unsigned_char);
}
#endif
#if defined HUGE_VAL_F16
static void
test_fmax_12 (void)
{
  extern typeof (fmax (vol_var__Float16, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var__Float16, vol_var_short_int);
}
#endif
#if defined HUGE_VAL_F16
static void
test_fmax_13 (void)
{
  extern typeof (fmax (vol_var__Float16, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var__Float16, vol_var_unsigned_short_int);
}
#endif
#if defined HUGE_VAL_F16
static void
test_fmax_14 (void)
{
  extern typeof (fmax (vol_var__Float16, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var__Float16, vol_var_int);
}
#endif
#if defined HUGE_VAL_F16
static void
test_fmax_15 (void)
{
  extern typeof (fmax (vol_var__Float16, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var__Float16, vol_var_unsigned_int);
}
#endif
#if defined HUGE_VAL_F16
static void
test_fmax_16 (void)
{
  extern typeof (fmax (vol_var__Float16, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var__Float16, vol_var_long_int);
}
#endif
#if defined HUGE_VAL_F16
static void
test_fmax_17 (void)
{
  extern typeof (fmax (vol_var__Float16, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var__Float16, vol_var_unsigned_long_int);
}
#endif
#if defined HUGE_VAL_F16
static void
test_fmax_18 (void)
{
  extern typeof (fmax (vol_var__Float16, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var__Float16, vol_var_long_long_int);
}
#endif
#if defined HUGE_VAL_F16
static void
test_fmax_19 (void)
{
  extern typeof (fmax (vol_var__Float16, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var__Float16, vol_var_unsigned_long_long_int);
}
#endif
#if defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_fmax_20 (void)
{
  extern typeof (fmax (vol_var__Float16, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var__Float16, vol_var___int128);
}
#endif
#if defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_fmax_21 (void)
{
  extern typeof (fmax (vol_var__Float16, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var__Float16, vol_var_unsigned___int128);
}
#endif
#if defined HUGE_VAL_F16
static void
test_fmax_22 (void)
{
  extern typeof (fmax (vol_var__Float16, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var__Float16, vol_var_enum_e);
}
#endif
#if defined HUGE_VAL_F16
static void
test_fmax_23 (void)
{
  extern typeof (fmax (vol_var__Float16, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var__Float16, vol_var__Bool);
}
#endif
#if defined HUGE_VAL_F16
static void
test_fmax_24 (void)
{
  extern typeof (fmax (vol_var__Float16, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var__Float16, vol_var_bit_field);
}
#endif
#if defined HUGE_VAL_F16
static void
test_fmax_25 (void)
{
  extern typeof (fmax (vol_var_float, vol_var__Float16)) var_float __attribute__ ((unused));
  vol_var_float = fmax (vol_var_float, vol_var__Float16);
}
#endif
static void
test_fmax_26 (void)
{
  extern typeof (fmax (vol_var_float, vol_var_float)) var_float __attribute__ ((unused));
  vol_var_float = fmax (vol_var_float, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_fmax_27 (void)
{
  extern typeof (fmax (vol_var_float, vol_var__Float32)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = fmax (vol_var_float, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmax_28 (void)
{
  extern typeof (fmax (vol_var_float, vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = fmax (vol_var_float, vol_var__Float32x);
}
#endif
static void
test_fmax_29 (void)
{
  extern typeof (fmax (vol_var_float, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_float, vol_var_double);
}
static void
test_fmax_30 (void)
{
  extern typeof (fmax (vol_var_float, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmax (vol_var_float, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_fmax_31 (void)
{
  extern typeof (fmax (vol_var_float, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmax (vol_var_float, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fmax_32 (void)
{
  extern typeof (fmax (vol_var_float, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmax (vol_var_float, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fmax_33 (void)
{
  extern typeof (fmax (vol_var_float, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmax (vol_var_float, vol_var__Float128);
}
#endif
static void
test_fmax_34 (void)
{
  extern typeof (fmax (vol_var_float, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_float, vol_var_char);
}
static void
test_fmax_35 (void)
{
  extern typeof (fmax (vol_var_float, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_float, vol_var_signed_char);
}
static void
test_fmax_36 (void)
{
  extern typeof (fmax (vol_var_float, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_float, vol_var_unsigned_char);
}
static void
test_fmax_37 (void)
{
  extern typeof (fmax (vol_var_float, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_float, vol_var_short_int);
}
static void
test_fmax_38 (void)
{
  extern typeof (fmax (vol_var_float, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_float, vol_var_unsigned_short_int);
}
static void
test_fmax_39 (void)
{
  extern typeof (fmax (vol_var_float, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_float, vol_var_int);
}
static void
test_fmax_40 (void)
{
  extern typeof (fmax (vol_var_float, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_float, vol_var_unsigned_int);
}
static void
test_fmax_41 (void)
{
  extern typeof (fmax (vol_var_float, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_float, vol_var_long_int);
}
static void
test_fmax_42 (void)
{
  extern typeof (fmax (vol_var_float, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_float, vol_var_unsigned_long_int);
}
static void
test_fmax_43 (void)
{
  extern typeof (fmax (vol_var_float, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_float, vol_var_long_long_int);
}
static void
test_fmax_44 (void)
{
  extern typeof (fmax (vol_var_float, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_float, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fmax_45 (void)
{
  extern typeof (fmax (vol_var_float, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_float, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmax_46 (void)
{
  extern typeof (fmax (vol_var_float, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_float, vol_var_unsigned___int128);
}
#endif
static void
test_fmax_47 (void)
{
  extern typeof (fmax (vol_var_float, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_float, vol_var_enum_e);
}
static void
test_fmax_48 (void)
{
  extern typeof (fmax (vol_var_float, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_float, vol_var__Bool);
}
static void
test_fmax_49 (void)
{
  extern typeof (fmax (vol_var_float, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_float, vol_var_bit_field);
}
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F32
static void
test_fmax_50 (void)
{
  extern typeof (fmax (vol_var__Float32, vol_var__Float16)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = fmax (vol_var__Float32, vol_var__Float16);
}
#endif
#if defined HUGE_VAL_F32
static void
test_fmax_51 (void)
{
  extern typeof (fmax (vol_var__Float32, vol_var_float)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = fmax (vol_var__Float32, vol_var_float);
}
#endif
#if defined HUGE_VAL_F32
static void
test_fmax_52 (void)
{
  extern typeof (fmax (vol_var__Float32, vol_var__Float32)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = fmax (vol_var__Float32, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
static void
test_fmax_53 (void)
{
  extern typeof (fmax (vol_var__Float32, vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = fmax (vol_var__Float32, vol_var__Float32x);
}
#endif
#if defined HUGE_VAL_F32
static void
test_fmax_54 (void)
{
  extern typeof (fmax (vol_var__Float32, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var__Float32, vol_var_double);
}
#endif
#if defined HUGE_VAL_F32
static void
test_fmax_55 (void)
{
  extern typeof (fmax (vol_var__Float32, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmax (vol_var__Float32, vol_var_long_double);
}
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F64
static void
test_fmax_56 (void)
{
  extern typeof (fmax (vol_var__Float32, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmax (vol_var__Float32, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
static void
test_fmax_57 (void)
{
  extern typeof (fmax (vol_var__Float32, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmax (vol_var__Float32, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F32
static void
test_fmax_58 (void)
{
  extern typeof (fmax (vol_var__Float32, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmax (vol_var__Float32, vol_var__Float128);
}
#endif
#if defined HUGE_VAL_F32
static void
test_fmax_59 (void)
{
  extern typeof (fmax (vol_var__Float32, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var__Float32, vol_var_char);
}
#endif
#if defined HUGE_VAL_F32
static void
test_fmax_60 (void)
{
  extern typeof (fmax (vol_var__Float32, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var__Float32, vol_var_signed_char);
}
#endif
#if defined HUGE_VAL_F32
static void
test_fmax_61 (void)
{
  extern typeof (fmax (vol_var__Float32, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var__Float32, vol_var_unsigned_char);
}
#endif
#if defined HUGE_VAL_F32
static void
test_fmax_62 (void)
{
  extern typeof (fmax (vol_var__Float32, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var__Float32, vol_var_short_int);
}
#endif
#if defined HUGE_VAL_F32
static void
test_fmax_63 (void)
{
  extern typeof (fmax (vol_var__Float32, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var__Float32, vol_var_unsigned_short_int);
}
#endif
#if defined HUGE_VAL_F32
static void
test_fmax_64 (void)
{
  extern typeof (fmax (vol_var__Float32, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var__Float32, vol_var_int);
}
#endif
#if defined HUGE_VAL_F32
static void
test_fmax_65 (void)
{
  extern typeof (fmax (vol_var__Float32, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var__Float32, vol_var_unsigned_int);
}
#endif
#if defined HUGE_VAL_F32
static void
test_fmax_66 (void)
{
  extern typeof (fmax (vol_var__Float32, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var__Float32, vol_var_long_int);
}
#endif
#if defined HUGE_VAL_F32
static void
test_fmax_67 (void)
{
  extern typeof (fmax (vol_var__Float32, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var__Float32, vol_var_unsigned_long_int);
}
#endif
#if defined HUGE_VAL_F32
static void
test_fmax_68 (void)
{
  extern typeof (fmax (vol_var__Float32, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var__Float32, vol_var_long_long_int);
}
#endif
#if defined HUGE_VAL_F32
static void
test_fmax_69 (void)
{
  extern typeof (fmax (vol_var__Float32, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var__Float32, vol_var_unsigned_long_long_int);
}
#endif
#if defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_fmax_70 (void)
{
  extern typeof (fmax (vol_var__Float32, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var__Float32, vol_var___int128);
}
#endif
#if defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_fmax_71 (void)
{
  extern typeof (fmax (vol_var__Float32, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var__Float32, vol_var_unsigned___int128);
}
#endif
#if defined HUGE_VAL_F32
static void
test_fmax_72 (void)
{
  extern typeof (fmax (vol_var__Float32, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var__Float32, vol_var_enum_e);
}
#endif
#if defined HUGE_VAL_F32
static void
test_fmax_73 (void)
{
  extern typeof (fmax (vol_var__Float32, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var__Float32, vol_var__Bool);
}
#endif
#if defined HUGE_VAL_F32
static void
test_fmax_74 (void)
{
  extern typeof (fmax (vol_var__Float32, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var__Float32, vol_var_bit_field);
}
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
static void
test_fmax_75 (void)
{
  extern typeof (fmax (vol_var__Float32x, vol_var__Float16)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = fmax (vol_var__Float32x, vol_var__Float16);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmax_76 (void)
{
  extern typeof (fmax (vol_var__Float32x, vol_var_float)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = fmax (vol_var__Float32x, vol_var_float);
}
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
static void
test_fmax_77 (void)
{
  extern typeof (fmax (vol_var__Float32x, vol_var__Float32)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = fmax (vol_var__Float32x, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmax_78 (void)
{
  extern typeof (fmax (vol_var__Float32x, vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = fmax (vol_var__Float32x, vol_var__Float32x);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmax_79 (void)
{
  extern typeof (fmax (vol_var__Float32x, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var__Float32x, vol_var_double);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmax_80 (void)
{
  extern typeof (fmax (vol_var__Float32x, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmax (vol_var__Float32x, vol_var_long_double);
}
#endif
#if defined HUGE_VAL_F32X && defined HUGE_VAL_F64
static void
test_fmax_81 (void)
{
  extern typeof (fmax (vol_var__Float32x, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmax (vol_var__Float32x, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
static void
test_fmax_82 (void)
{
  extern typeof (fmax (vol_var__Float32x, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmax (vol_var__Float32x, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
static void
test_fmax_83 (void)
{
  extern typeof (fmax (vol_var__Float32x, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmax (vol_var__Float32x, vol_var__Float128);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmax_84 (void)
{
  extern typeof (fmax (vol_var__Float32x, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var__Float32x, vol_var_char);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmax_85 (void)
{
  extern typeof (fmax (vol_var__Float32x, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var__Float32x, vol_var_signed_char);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmax_86 (void)
{
  extern typeof (fmax (vol_var__Float32x, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var__Float32x, vol_var_unsigned_char);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmax_87 (void)
{
  extern typeof (fmax (vol_var__Float32x, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var__Float32x, vol_var_short_int);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmax_88 (void)
{
  extern typeof (fmax (vol_var__Float32x, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var__Float32x, vol_var_unsigned_short_int);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmax_89 (void)
{
  extern typeof (fmax (vol_var__Float32x, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var__Float32x, vol_var_int);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmax_90 (void)
{
  extern typeof (fmax (vol_var__Float32x, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var__Float32x, vol_var_unsigned_int);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmax_91 (void)
{
  extern typeof (fmax (vol_var__Float32x, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var__Float32x, vol_var_long_int);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmax_92 (void)
{
  extern typeof (fmax (vol_var__Float32x, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var__Float32x, vol_var_unsigned_long_int);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmax_93 (void)
{
  extern typeof (fmax (vol_var__Float32x, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var__Float32x, vol_var_long_long_int);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmax_94 (void)
{
  extern typeof (fmax (vol_var__Float32x, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var__Float32x, vol_var_unsigned_long_long_int);
}
#endif
#if defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_fmax_95 (void)
{
  extern typeof (fmax (vol_var__Float32x, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var__Float32x, vol_var___int128);
}
#endif
#if defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_fmax_96 (void)
{
  extern typeof (fmax (vol_var__Float32x, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var__Float32x, vol_var_unsigned___int128);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmax_97 (void)
{
  extern typeof (fmax (vol_var__Float32x, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var__Float32x, vol_var_enum_e);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmax_98 (void)
{
  extern typeof (fmax (vol_var__Float32x, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var__Float32x, vol_var__Bool);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmax_99 (void)
{
  extern typeof (fmax (vol_var__Float32x, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var__Float32x, vol_var_bit_field);
}
#endif
#if defined HUGE_VAL_F16
static void
test_fmax_100 (void)
{
  extern typeof (fmax (vol_var_double, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_double, vol_var__Float16);
}
#endif
static void
test_fmax_101 (void)
{
  extern typeof (fmax (vol_var_double, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_double, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_fmax_102 (void)
{
  extern typeof (fmax (vol_var_double, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_double, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmax_103 (void)
{
  extern typeof (fmax (vol_var_double, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_double, vol_var__Float32x);
}
#endif
static void
test_fmax_104 (void)
{
  extern typeof (fmax (vol_var_double, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_double, vol_var_double);
}
static void
test_fmax_105 (void)
{
  extern typeof (fmax (vol_var_double, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmax (vol_var_double, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_fmax_106 (void)
{
  extern typeof (fmax (vol_var_double, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmax (vol_var_double, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fmax_107 (void)
{
  extern typeof (fmax (vol_var_double, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmax (vol_var_double, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fmax_108 (void)
{
  extern typeof (fmax (vol_var_double, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmax (vol_var_double, vol_var__Float128);
}
#endif
static void
test_fmax_109 (void)
{
  extern typeof (fmax (vol_var_double, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_double, vol_var_char);
}
static void
test_fmax_110 (void)
{
  extern typeof (fmax (vol_var_double, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_double, vol_var_signed_char);
}
static void
test_fmax_111 (void)
{
  extern typeof (fmax (vol_var_double, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_double, vol_var_unsigned_char);
}
static void
test_fmax_112 (void)
{
  extern typeof (fmax (vol_var_double, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_double, vol_var_short_int);
}
static void
test_fmax_113 (void)
{
  extern typeof (fmax (vol_var_double, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_double, vol_var_unsigned_short_int);
}
static void
test_fmax_114 (void)
{
  extern typeof (fmax (vol_var_double, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_double, vol_var_int);
}
static void
test_fmax_115 (void)
{
  extern typeof (fmax (vol_var_double, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_double, vol_var_unsigned_int);
}
static void
test_fmax_116 (void)
{
  extern typeof (fmax (vol_var_double, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_double, vol_var_long_int);
}
static void
test_fmax_117 (void)
{
  extern typeof (fmax (vol_var_double, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_double, vol_var_unsigned_long_int);
}
static void
test_fmax_118 (void)
{
  extern typeof (fmax (vol_var_double, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_double, vol_var_long_long_int);
}
static void
test_fmax_119 (void)
{
  extern typeof (fmax (vol_var_double, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_double, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fmax_120 (void)
{
  extern typeof (fmax (vol_var_double, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_double, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmax_121 (void)
{
  extern typeof (fmax (vol_var_double, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_double, vol_var_unsigned___int128);
}
#endif
static void
test_fmax_122 (void)
{
  extern typeof (fmax (vol_var_double, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_double, vol_var_enum_e);
}
static void
test_fmax_123 (void)
{
  extern typeof (fmax (vol_var_double, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_double, vol_var__Bool);
}
static void
test_fmax_124 (void)
{
  extern typeof (fmax (vol_var_double, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_double, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_fmax_125 (void)
{
  extern typeof (fmax (vol_var_long_double, vol_var__Float16)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmax (vol_var_long_double, vol_var__Float16);
}
#endif
static void
test_fmax_126 (void)
{
  extern typeof (fmax (vol_var_long_double, vol_var_float)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmax (vol_var_long_double, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_fmax_127 (void)
{
  extern typeof (fmax (vol_var_long_double, vol_var__Float32)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmax (vol_var_long_double, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmax_128 (void)
{
  extern typeof (fmax (vol_var_long_double, vol_var__Float32x)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmax (vol_var_long_double, vol_var__Float32x);
}
#endif
static void
test_fmax_129 (void)
{
  extern typeof (fmax (vol_var_long_double, vol_var_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmax (vol_var_long_double, vol_var_double);
}
static void
test_fmax_130 (void)
{
  extern typeof (fmax (vol_var_long_double, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmax (vol_var_long_double, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_fmax_131 (void)
{
  extern typeof (fmax (vol_var_long_double, vol_var__Float64)) var_long_double_Float64 __attribute__ ((unused));
  vol_var_long_double_Float64 = fmax (vol_var_long_double, vol_var__Float64);
}
#endif
#if (LDBL_MANT_DIG != 106) && defined HUGE_VAL_F64X
static void
test_fmax_132 (void)
{
  extern typeof (fmax (vol_var_long_double, vol_var__Float64x)) var_long_double_Float64x __attribute__ ((unused));
  vol_var_long_double_Float64x = fmax (vol_var_long_double, vol_var__Float64x);
}
#endif
#if (LDBL_MANT_DIG != 106) && defined HUGE_VAL_F128
static void
test_fmax_133 (void)
{
  extern typeof (fmax (vol_var_long_double, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmax (vol_var_long_double, vol_var__Float128);
}
#endif
static void
test_fmax_134 (void)
{
  extern typeof (fmax (vol_var_long_double, vol_var_char)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmax (vol_var_long_double, vol_var_char);
}
static void
test_fmax_135 (void)
{
  extern typeof (fmax (vol_var_long_double, vol_var_signed_char)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmax (vol_var_long_double, vol_var_signed_char);
}
static void
test_fmax_136 (void)
{
  extern typeof (fmax (vol_var_long_double, vol_var_unsigned_char)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmax (vol_var_long_double, vol_var_unsigned_char);
}
static void
test_fmax_137 (void)
{
  extern typeof (fmax (vol_var_long_double, vol_var_short_int)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmax (vol_var_long_double, vol_var_short_int);
}
static void
test_fmax_138 (void)
{
  extern typeof (fmax (vol_var_long_double, vol_var_unsigned_short_int)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmax (vol_var_long_double, vol_var_unsigned_short_int);
}
static void
test_fmax_139 (void)
{
  extern typeof (fmax (vol_var_long_double, vol_var_int)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmax (vol_var_long_double, vol_var_int);
}
static void
test_fmax_140 (void)
{
  extern typeof (fmax (vol_var_long_double, vol_var_unsigned_int)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmax (vol_var_long_double, vol_var_unsigned_int);
}
static void
test_fmax_141 (void)
{
  extern typeof (fmax (vol_var_long_double, vol_var_long_int)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmax (vol_var_long_double, vol_var_long_int);
}
static void
test_fmax_142 (void)
{
  extern typeof (fmax (vol_var_long_double, vol_var_unsigned_long_int)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmax (vol_var_long_double, vol_var_unsigned_long_int);
}
static void
test_fmax_143 (void)
{
  extern typeof (fmax (vol_var_long_double, vol_var_long_long_int)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmax (vol_var_long_double, vol_var_long_long_int);
}
static void
test_fmax_144 (void)
{
  extern typeof (fmax (vol_var_long_double, vol_var_unsigned_long_long_int)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmax (vol_var_long_double, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fmax_145 (void)
{
  extern typeof (fmax (vol_var_long_double, vol_var___int128)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmax (vol_var_long_double, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmax_146 (void)
{
  extern typeof (fmax (vol_var_long_double, vol_var_unsigned___int128)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmax (vol_var_long_double, vol_var_unsigned___int128);
}
#endif
static void
test_fmax_147 (void)
{
  extern typeof (fmax (vol_var_long_double, vol_var_enum_e)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmax (vol_var_long_double, vol_var_enum_e);
}
static void
test_fmax_148 (void)
{
  extern typeof (fmax (vol_var_long_double, vol_var__Bool)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmax (vol_var_long_double, vol_var__Bool);
}
static void
test_fmax_149 (void)
{
  extern typeof (fmax (vol_var_long_double, vol_var_bit_field)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmax (vol_var_long_double, vol_var_bit_field);
}
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F64
static void
test_fmax_150 (void)
{
  extern typeof (fmax (vol_var__Float64, vol_var__Float16)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmax (vol_var__Float64, vol_var__Float16);
}
#endif
#if defined HUGE_VAL_F64
static void
test_fmax_151 (void)
{
  extern typeof (fmax (vol_var__Float64, vol_var_float)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmax (vol_var__Float64, vol_var_float);
}
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F64
static void
test_fmax_152 (void)
{
  extern typeof (fmax (vol_var__Float64, vol_var__Float32)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmax (vol_var__Float64, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X && defined HUGE_VAL_F64
static void
test_fmax_153 (void)
{
  extern typeof (fmax (vol_var__Float64, vol_var__Float32x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmax (vol_var__Float64, vol_var__Float32x);
}
#endif
#if defined HUGE_VAL_F64
static void
test_fmax_154 (void)
{
  extern typeof (fmax (vol_var__Float64, vol_var_double)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmax (vol_var__Float64, vol_var_double);
}
#endif
#if defined HUGE_VAL_F64
static void
test_fmax_155 (void)
{
  extern typeof (fmax (vol_var__Float64, vol_var_long_double)) var_long_double_Float64 __attribute__ ((unused));
  vol_var_long_double_Float64 = fmax (vol_var__Float64, vol_var_long_double);
}
#endif
#if defined HUGE_VAL_F64
static void
test_fmax_156 (void)
{
  extern typeof (fmax (vol_var__Float64, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmax (vol_var__Float64, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
static void
test_fmax_157 (void)
{
  extern typeof (fmax (vol_var__Float64, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmax (vol_var__Float64, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F64
static void
test_fmax_158 (void)
{
  extern typeof (fmax (vol_var__Float64, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmax (vol_var__Float64, vol_var__Float128);
}
#endif
#if defined HUGE_VAL_F64
static void
test_fmax_159 (void)
{
  extern typeof (fmax (vol_var__Float64, vol_var_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmax (vol_var__Float64, vol_var_char);
}
#endif
#if defined HUGE_VAL_F64
static void
test_fmax_160 (void)
{
  extern typeof (fmax (vol_var__Float64, vol_var_signed_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmax (vol_var__Float64, vol_var_signed_char);
}
#endif
#if defined HUGE_VAL_F64
static void
test_fmax_161 (void)
{
  extern typeof (fmax (vol_var__Float64, vol_var_unsigned_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmax (vol_var__Float64, vol_var_unsigned_char);
}
#endif
#if defined HUGE_VAL_F64
static void
test_fmax_162 (void)
{
  extern typeof (fmax (vol_var__Float64, vol_var_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmax (vol_var__Float64, vol_var_short_int);
}
#endif
#if defined HUGE_VAL_F64
static void
test_fmax_163 (void)
{
  extern typeof (fmax (vol_var__Float64, vol_var_unsigned_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmax (vol_var__Float64, vol_var_unsigned_short_int);
}
#endif
#if defined HUGE_VAL_F64
static void
test_fmax_164 (void)
{
  extern typeof (fmax (vol_var__Float64, vol_var_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmax (vol_var__Float64, vol_var_int);
}
#endif
#if defined HUGE_VAL_F64
static void
test_fmax_165 (void)
{
  extern typeof (fmax (vol_var__Float64, vol_var_unsigned_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmax (vol_var__Float64, vol_var_unsigned_int);
}
#endif
#if defined HUGE_VAL_F64
static void
test_fmax_166 (void)
{
  extern typeof (fmax (vol_var__Float64, vol_var_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmax (vol_var__Float64, vol_var_long_int);
}
#endif
#if defined HUGE_VAL_F64
static void
test_fmax_167 (void)
{
  extern typeof (fmax (vol_var__Float64, vol_var_unsigned_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmax (vol_var__Float64, vol_var_unsigned_long_int);
}
#endif
#if defined HUGE_VAL_F64
static void
test_fmax_168 (void)
{
  extern typeof (fmax (vol_var__Float64, vol_var_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmax (vol_var__Float64, vol_var_long_long_int);
}
#endif
#if defined HUGE_VAL_F64
static void
test_fmax_169 (void)
{
  extern typeof (fmax (vol_var__Float64, vol_var_unsigned_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmax (vol_var__Float64, vol_var_unsigned_long_long_int);
}
#endif
#if defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_fmax_170 (void)
{
  extern typeof (fmax (vol_var__Float64, vol_var___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmax (vol_var__Float64, vol_var___int128);
}
#endif
#if defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_fmax_171 (void)
{
  extern typeof (fmax (vol_var__Float64, vol_var_unsigned___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmax (vol_var__Float64, vol_var_unsigned___int128);
}
#endif
#if defined HUGE_VAL_F64
static void
test_fmax_172 (void)
{
  extern typeof (fmax (vol_var__Float64, vol_var_enum_e)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmax (vol_var__Float64, vol_var_enum_e);
}
#endif
#if defined HUGE_VAL_F64
static void
test_fmax_173 (void)
{
  extern typeof (fmax (vol_var__Float64, vol_var__Bool)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmax (vol_var__Float64, vol_var__Bool);
}
#endif
#if defined HUGE_VAL_F64
static void
test_fmax_174 (void)
{
  extern typeof (fmax (vol_var__Float64, vol_var_bit_field)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmax (vol_var__Float64, vol_var_bit_field);
}
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
static void
test_fmax_175 (void)
{
  extern typeof (fmax (vol_var__Float64x, vol_var__Float16)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmax (vol_var__Float64x, vol_var__Float16);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fmax_176 (void)
{
  extern typeof (fmax (vol_var__Float64x, vol_var_float)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmax (vol_var__Float64x, vol_var_float);
}
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
static void
test_fmax_177 (void)
{
  extern typeof (fmax (vol_var__Float64x, vol_var__Float32)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmax (vol_var__Float64x, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
static void
test_fmax_178 (void)
{
  extern typeof (fmax (vol_var__Float64x, vol_var__Float32x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmax (vol_var__Float64x, vol_var__Float32x);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fmax_179 (void)
{
  extern typeof (fmax (vol_var__Float64x, vol_var_double)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmax (vol_var__Float64x, vol_var_double);
}
#endif
#if (LDBL_MANT_DIG != 106) && defined HUGE_VAL_F64X
static void
test_fmax_180 (void)
{
  extern typeof (fmax (vol_var__Float64x, vol_var_long_double)) var_long_double_Float64x __attribute__ ((unused));
  vol_var_long_double_Float64x = fmax (vol_var__Float64x, vol_var_long_double);
}
#endif
#if defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
static void
test_fmax_181 (void)
{
  extern typeof (fmax (vol_var__Float64x, vol_var__Float64)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmax (vol_var__Float64x, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fmax_182 (void)
{
  extern typeof (fmax (vol_var__Float64x, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmax (vol_var__Float64x, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
static void
test_fmax_183 (void)
{
  extern typeof (fmax (vol_var__Float64x, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmax (vol_var__Float64x, vol_var__Float128);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fmax_184 (void)
{
  extern typeof (fmax (vol_var__Float64x, vol_var_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmax (vol_var__Float64x, vol_var_char);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fmax_185 (void)
{
  extern typeof (fmax (vol_var__Float64x, vol_var_signed_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmax (vol_var__Float64x, vol_var_signed_char);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fmax_186 (void)
{
  extern typeof (fmax (vol_var__Float64x, vol_var_unsigned_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmax (vol_var__Float64x, vol_var_unsigned_char);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fmax_187 (void)
{
  extern typeof (fmax (vol_var__Float64x, vol_var_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmax (vol_var__Float64x, vol_var_short_int);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fmax_188 (void)
{
  extern typeof (fmax (vol_var__Float64x, vol_var_unsigned_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmax (vol_var__Float64x, vol_var_unsigned_short_int);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fmax_189 (void)
{
  extern typeof (fmax (vol_var__Float64x, vol_var_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmax (vol_var__Float64x, vol_var_int);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fmax_190 (void)
{
  extern typeof (fmax (vol_var__Float64x, vol_var_unsigned_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmax (vol_var__Float64x, vol_var_unsigned_int);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fmax_191 (void)
{
  extern typeof (fmax (vol_var__Float64x, vol_var_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmax (vol_var__Float64x, vol_var_long_int);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fmax_192 (void)
{
  extern typeof (fmax (vol_var__Float64x, vol_var_unsigned_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmax (vol_var__Float64x, vol_var_unsigned_long_int);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fmax_193 (void)
{
  extern typeof (fmax (vol_var__Float64x, vol_var_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmax (vol_var__Float64x, vol_var_long_long_int);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fmax_194 (void)
{
  extern typeof (fmax (vol_var__Float64x, vol_var_unsigned_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmax (vol_var__Float64x, vol_var_unsigned_long_long_int);
}
#endif
#if defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_fmax_195 (void)
{
  extern typeof (fmax (vol_var__Float64x, vol_var___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmax (vol_var__Float64x, vol_var___int128);
}
#endif
#if defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_fmax_196 (void)
{
  extern typeof (fmax (vol_var__Float64x, vol_var_unsigned___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmax (vol_var__Float64x, vol_var_unsigned___int128);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fmax_197 (void)
{
  extern typeof (fmax (vol_var__Float64x, vol_var_enum_e)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmax (vol_var__Float64x, vol_var_enum_e);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fmax_198 (void)
{
  extern typeof (fmax (vol_var__Float64x, vol_var__Bool)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmax (vol_var__Float64x, vol_var__Bool);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fmax_199 (void)
{
  extern typeof (fmax (vol_var__Float64x, vol_var_bit_field)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmax (vol_var__Float64x, vol_var_bit_field);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F16
static void
test_fmax_200 (void)
{
  extern typeof (fmax (vol_var__Float128, vol_var__Float16)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmax (vol_var__Float128, vol_var__Float16);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fmax_201 (void)
{
  extern typeof (fmax (vol_var__Float128, vol_var_float)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmax (vol_var__Float128, vol_var_float);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F32
static void
test_fmax_202 (void)
{
  extern typeof (fmax (vol_var__Float128, vol_var__Float32)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmax (vol_var__Float128, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
static void
test_fmax_203 (void)
{
  extern typeof (fmax (vol_var__Float128, vol_var__Float32x)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmax (vol_var__Float128, vol_var__Float32x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fmax_204 (void)
{
  extern typeof (fmax (vol_var__Float128, vol_var_double)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmax (vol_var__Float128, vol_var_double);
}
#endif
#if (LDBL_MANT_DIG != 106) && defined HUGE_VAL_F128
static void
test_fmax_205 (void)
{
  extern typeof (fmax (vol_var__Float128, vol_var_long_double)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmax (vol_var__Float128, vol_var_long_double);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F64
static void
test_fmax_206 (void)
{
  extern typeof (fmax (vol_var__Float128, vol_var__Float64)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmax (vol_var__Float128, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
static void
test_fmax_207 (void)
{
  extern typeof (fmax (vol_var__Float128, vol_var__Float64x)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmax (vol_var__Float128, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fmax_208 (void)
{
  extern typeof (fmax (vol_var__Float128, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmax (vol_var__Float128, vol_var__Float128);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fmax_209 (void)
{
  extern typeof (fmax (vol_var__Float128, vol_var_char)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmax (vol_var__Float128, vol_var_char);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fmax_210 (void)
{
  extern typeof (fmax (vol_var__Float128, vol_var_signed_char)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmax (vol_var__Float128, vol_var_signed_char);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fmax_211 (void)
{
  extern typeof (fmax (vol_var__Float128, vol_var_unsigned_char)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmax (vol_var__Float128, vol_var_unsigned_char);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fmax_212 (void)
{
  extern typeof (fmax (vol_var__Float128, vol_var_short_int)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmax (vol_var__Float128, vol_var_short_int);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fmax_213 (void)
{
  extern typeof (fmax (vol_var__Float128, vol_var_unsigned_short_int)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmax (vol_var__Float128, vol_var_unsigned_short_int);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fmax_214 (void)
{
  extern typeof (fmax (vol_var__Float128, vol_var_int)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmax (vol_var__Float128, vol_var_int);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fmax_215 (void)
{
  extern typeof (fmax (vol_var__Float128, vol_var_unsigned_int)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmax (vol_var__Float128, vol_var_unsigned_int);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fmax_216 (void)
{
  extern typeof (fmax (vol_var__Float128, vol_var_long_int)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmax (vol_var__Float128, vol_var_long_int);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fmax_217 (void)
{
  extern typeof (fmax (vol_var__Float128, vol_var_unsigned_long_int)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmax (vol_var__Float128, vol_var_unsigned_long_int);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fmax_218 (void)
{
  extern typeof (fmax (vol_var__Float128, vol_var_long_long_int)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmax (vol_var__Float128, vol_var_long_long_int);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fmax_219 (void)
{
  extern typeof (fmax (vol_var__Float128, vol_var_unsigned_long_long_int)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmax (vol_var__Float128, vol_var_unsigned_long_long_int);
}
#endif
#if defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_fmax_220 (void)
{
  extern typeof (fmax (vol_var__Float128, vol_var___int128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmax (vol_var__Float128, vol_var___int128);
}
#endif
#if defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_fmax_221 (void)
{
  extern typeof (fmax (vol_var__Float128, vol_var_unsigned___int128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmax (vol_var__Float128, vol_var_unsigned___int128);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fmax_222 (void)
{
  extern typeof (fmax (vol_var__Float128, vol_var_enum_e)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmax (vol_var__Float128, vol_var_enum_e);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fmax_223 (void)
{
  extern typeof (fmax (vol_var__Float128, vol_var__Bool)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmax (vol_var__Float128, vol_var__Bool);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fmax_224 (void)
{
  extern typeof (fmax (vol_var__Float128, vol_var_bit_field)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmax (vol_var__Float128, vol_var_bit_field);
}
#endif
#if defined HUGE_VAL_F16
static void
test_fmax_225 (void)
{
  extern typeof (fmax (vol_var_char, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_char, vol_var__Float16);
}
#endif
static void
test_fmax_226 (void)
{
  extern typeof (fmax (vol_var_char, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_char, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_fmax_227 (void)
{
  extern typeof (fmax (vol_var_char, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_char, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmax_228 (void)
{
  extern typeof (fmax (vol_var_char, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_char, vol_var__Float32x);
}
#endif
static void
test_fmax_229 (void)
{
  extern typeof (fmax (vol_var_char, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_char, vol_var_double);
}
static void
test_fmax_230 (void)
{
  extern typeof (fmax (vol_var_char, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmax (vol_var_char, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_fmax_231 (void)
{
  extern typeof (fmax (vol_var_char, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmax (vol_var_char, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fmax_232 (void)
{
  extern typeof (fmax (vol_var_char, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmax (vol_var_char, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fmax_233 (void)
{
  extern typeof (fmax (vol_var_char, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmax (vol_var_char, vol_var__Float128);
}
#endif
static void
test_fmax_234 (void)
{
  extern typeof (fmax (vol_var_char, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_char, vol_var_char);
}
static void
test_fmax_235 (void)
{
  extern typeof (fmax (vol_var_char, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_char, vol_var_signed_char);
}
static void
test_fmax_236 (void)
{
  extern typeof (fmax (vol_var_char, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_char, vol_var_unsigned_char);
}
static void
test_fmax_237 (void)
{
  extern typeof (fmax (vol_var_char, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_char, vol_var_short_int);
}
static void
test_fmax_238 (void)
{
  extern typeof (fmax (vol_var_char, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_char, vol_var_unsigned_short_int);
}
static void
test_fmax_239 (void)
{
  extern typeof (fmax (vol_var_char, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_char, vol_var_int);
}
static void
test_fmax_240 (void)
{
  extern typeof (fmax (vol_var_char, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_char, vol_var_unsigned_int);
}
static void
test_fmax_241 (void)
{
  extern typeof (fmax (vol_var_char, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_char, vol_var_long_int);
}
static void
test_fmax_242 (void)
{
  extern typeof (fmax (vol_var_char, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_char, vol_var_unsigned_long_int);
}
static void
test_fmax_243 (void)
{
  extern typeof (fmax (vol_var_char, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_char, vol_var_long_long_int);
}
static void
test_fmax_244 (void)
{
  extern typeof (fmax (vol_var_char, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_char, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fmax_245 (void)
{
  extern typeof (fmax (vol_var_char, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_char, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmax_246 (void)
{
  extern typeof (fmax (vol_var_char, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_char, vol_var_unsigned___int128);
}
#endif
static void
test_fmax_247 (void)
{
  extern typeof (fmax (vol_var_char, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_char, vol_var_enum_e);
}
static void
test_fmax_248 (void)
{
  extern typeof (fmax (vol_var_char, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_char, vol_var__Bool);
}
static void
test_fmax_249 (void)
{
  extern typeof (fmax (vol_var_char, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_char, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_fmax_250 (void)
{
  extern typeof (fmax (vol_var_signed_char, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_signed_char, vol_var__Float16);
}
#endif
static void
test_fmax_251 (void)
{
  extern typeof (fmax (vol_var_signed_char, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_signed_char, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_fmax_252 (void)
{
  extern typeof (fmax (vol_var_signed_char, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_signed_char, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmax_253 (void)
{
  extern typeof (fmax (vol_var_signed_char, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_signed_char, vol_var__Float32x);
}
#endif
static void
test_fmax_254 (void)
{
  extern typeof (fmax (vol_var_signed_char, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_signed_char, vol_var_double);
}
static void
test_fmax_255 (void)
{
  extern typeof (fmax (vol_var_signed_char, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmax (vol_var_signed_char, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_fmax_256 (void)
{
  extern typeof (fmax (vol_var_signed_char, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmax (vol_var_signed_char, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fmax_257 (void)
{
  extern typeof (fmax (vol_var_signed_char, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmax (vol_var_signed_char, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fmax_258 (void)
{
  extern typeof (fmax (vol_var_signed_char, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmax (vol_var_signed_char, vol_var__Float128);
}
#endif
static void
test_fmax_259 (void)
{
  extern typeof (fmax (vol_var_signed_char, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_signed_char, vol_var_char);
}
static void
test_fmax_260 (void)
{
  extern typeof (fmax (vol_var_signed_char, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_signed_char, vol_var_signed_char);
}
static void
test_fmax_261 (void)
{
  extern typeof (fmax (vol_var_signed_char, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_signed_char, vol_var_unsigned_char);
}
static void
test_fmax_262 (void)
{
  extern typeof (fmax (vol_var_signed_char, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_signed_char, vol_var_short_int);
}
static void
test_fmax_263 (void)
{
  extern typeof (fmax (vol_var_signed_char, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_signed_char, vol_var_unsigned_short_int);
}
static void
test_fmax_264 (void)
{
  extern typeof (fmax (vol_var_signed_char, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_signed_char, vol_var_int);
}
static void
test_fmax_265 (void)
{
  extern typeof (fmax (vol_var_signed_char, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_signed_char, vol_var_unsigned_int);
}
static void
test_fmax_266 (void)
{
  extern typeof (fmax (vol_var_signed_char, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_signed_char, vol_var_long_int);
}
static void
test_fmax_267 (void)
{
  extern typeof (fmax (vol_var_signed_char, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_signed_char, vol_var_unsigned_long_int);
}
static void
test_fmax_268 (void)
{
  extern typeof (fmax (vol_var_signed_char, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_signed_char, vol_var_long_long_int);
}
static void
test_fmax_269 (void)
{
  extern typeof (fmax (vol_var_signed_char, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_signed_char, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fmax_270 (void)
{
  extern typeof (fmax (vol_var_signed_char, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_signed_char, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmax_271 (void)
{
  extern typeof (fmax (vol_var_signed_char, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_signed_char, vol_var_unsigned___int128);
}
#endif
static void
test_fmax_272 (void)
{
  extern typeof (fmax (vol_var_signed_char, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_signed_char, vol_var_enum_e);
}
static void
test_fmax_273 (void)
{
  extern typeof (fmax (vol_var_signed_char, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_signed_char, vol_var__Bool);
}
static void
test_fmax_274 (void)
{
  extern typeof (fmax (vol_var_signed_char, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_signed_char, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_fmax_275 (void)
{
  extern typeof (fmax (vol_var_unsigned_char, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_unsigned_char, vol_var__Float16);
}
#endif
static void
test_fmax_276 (void)
{
  extern typeof (fmax (vol_var_unsigned_char, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_unsigned_char, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_fmax_277 (void)
{
  extern typeof (fmax (vol_var_unsigned_char, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_unsigned_char, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmax_278 (void)
{
  extern typeof (fmax (vol_var_unsigned_char, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_unsigned_char, vol_var__Float32x);
}
#endif
static void
test_fmax_279 (void)
{
  extern typeof (fmax (vol_var_unsigned_char, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_unsigned_char, vol_var_double);
}
static void
test_fmax_280 (void)
{
  extern typeof (fmax (vol_var_unsigned_char, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmax (vol_var_unsigned_char, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_fmax_281 (void)
{
  extern typeof (fmax (vol_var_unsigned_char, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmax (vol_var_unsigned_char, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fmax_282 (void)
{
  extern typeof (fmax (vol_var_unsigned_char, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmax (vol_var_unsigned_char, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fmax_283 (void)
{
  extern typeof (fmax (vol_var_unsigned_char, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmax (vol_var_unsigned_char, vol_var__Float128);
}
#endif
static void
test_fmax_284 (void)
{
  extern typeof (fmax (vol_var_unsigned_char, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_unsigned_char, vol_var_char);
}
static void
test_fmax_285 (void)
{
  extern typeof (fmax (vol_var_unsigned_char, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_unsigned_char, vol_var_signed_char);
}
static void
test_fmax_286 (void)
{
  extern typeof (fmax (vol_var_unsigned_char, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_unsigned_char, vol_var_unsigned_char);
}
static void
test_fmax_287 (void)
{
  extern typeof (fmax (vol_var_unsigned_char, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_unsigned_char, vol_var_short_int);
}
static void
test_fmax_288 (void)
{
  extern typeof (fmax (vol_var_unsigned_char, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_unsigned_char, vol_var_unsigned_short_int);
}
static void
test_fmax_289 (void)
{
  extern typeof (fmax (vol_var_unsigned_char, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_unsigned_char, vol_var_int);
}
static void
test_fmax_290 (void)
{
  extern typeof (fmax (vol_var_unsigned_char, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_unsigned_char, vol_var_unsigned_int);
}
static void
test_fmax_291 (void)
{
  extern typeof (fmax (vol_var_unsigned_char, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_unsigned_char, vol_var_long_int);
}
static void
test_fmax_292 (void)
{
  extern typeof (fmax (vol_var_unsigned_char, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_unsigned_char, vol_var_unsigned_long_int);
}
static void
test_fmax_293 (void)
{
  extern typeof (fmax (vol_var_unsigned_char, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_unsigned_char, vol_var_long_long_int);
}
static void
test_fmax_294 (void)
{
  extern typeof (fmax (vol_var_unsigned_char, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_unsigned_char, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fmax_295 (void)
{
  extern typeof (fmax (vol_var_unsigned_char, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_unsigned_char, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmax_296 (void)
{
  extern typeof (fmax (vol_var_unsigned_char, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_unsigned_char, vol_var_unsigned___int128);
}
#endif
static void
test_fmax_297 (void)
{
  extern typeof (fmax (vol_var_unsigned_char, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_unsigned_char, vol_var_enum_e);
}
static void
test_fmax_298 (void)
{
  extern typeof (fmax (vol_var_unsigned_char, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_unsigned_char, vol_var__Bool);
}
static void
test_fmax_299 (void)
{
  extern typeof (fmax (vol_var_unsigned_char, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_unsigned_char, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_fmax_300 (void)
{
  extern typeof (fmax (vol_var_short_int, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_short_int, vol_var__Float16);
}
#endif
static void
test_fmax_301 (void)
{
  extern typeof (fmax (vol_var_short_int, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_short_int, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_fmax_302 (void)
{
  extern typeof (fmax (vol_var_short_int, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_short_int, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmax_303 (void)
{
  extern typeof (fmax (vol_var_short_int, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_short_int, vol_var__Float32x);
}
#endif
static void
test_fmax_304 (void)
{
  extern typeof (fmax (vol_var_short_int, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_short_int, vol_var_double);
}
static void
test_fmax_305 (void)
{
  extern typeof (fmax (vol_var_short_int, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmax (vol_var_short_int, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_fmax_306 (void)
{
  extern typeof (fmax (vol_var_short_int, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmax (vol_var_short_int, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fmax_307 (void)
{
  extern typeof (fmax (vol_var_short_int, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmax (vol_var_short_int, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fmax_308 (void)
{
  extern typeof (fmax (vol_var_short_int, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmax (vol_var_short_int, vol_var__Float128);
}
#endif
static void
test_fmax_309 (void)
{
  extern typeof (fmax (vol_var_short_int, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_short_int, vol_var_char);
}
static void
test_fmax_310 (void)
{
  extern typeof (fmax (vol_var_short_int, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_short_int, vol_var_signed_char);
}
static void
test_fmax_311 (void)
{
  extern typeof (fmax (vol_var_short_int, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_short_int, vol_var_unsigned_char);
}
static void
test_fmax_312 (void)
{
  extern typeof (fmax (vol_var_short_int, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_short_int, vol_var_short_int);
}
static void
test_fmax_313 (void)
{
  extern typeof (fmax (vol_var_short_int, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_short_int, vol_var_unsigned_short_int);
}
static void
test_fmax_314 (void)
{
  extern typeof (fmax (vol_var_short_int, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_short_int, vol_var_int);
}
static void
test_fmax_315 (void)
{
  extern typeof (fmax (vol_var_short_int, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_short_int, vol_var_unsigned_int);
}
static void
test_fmax_316 (void)
{
  extern typeof (fmax (vol_var_short_int, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_short_int, vol_var_long_int);
}
static void
test_fmax_317 (void)
{
  extern typeof (fmax (vol_var_short_int, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_short_int, vol_var_unsigned_long_int);
}
static void
test_fmax_318 (void)
{
  extern typeof (fmax (vol_var_short_int, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_short_int, vol_var_long_long_int);
}
static void
test_fmax_319 (void)
{
  extern typeof (fmax (vol_var_short_int, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_short_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fmax_320 (void)
{
  extern typeof (fmax (vol_var_short_int, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_short_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmax_321 (void)
{
  extern typeof (fmax (vol_var_short_int, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_short_int, vol_var_unsigned___int128);
}
#endif
static void
test_fmax_322 (void)
{
  extern typeof (fmax (vol_var_short_int, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_short_int, vol_var_enum_e);
}
static void
test_fmax_323 (void)
{
  extern typeof (fmax (vol_var_short_int, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_short_int, vol_var__Bool);
}
static void
test_fmax_324 (void)
{
  extern typeof (fmax (vol_var_short_int, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_short_int, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_fmax_325 (void)
{
  extern typeof (fmax (vol_var_unsigned_short_int, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_unsigned_short_int, vol_var__Float16);
}
#endif
static void
test_fmax_326 (void)
{
  extern typeof (fmax (vol_var_unsigned_short_int, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_unsigned_short_int, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_fmax_327 (void)
{
  extern typeof (fmax (vol_var_unsigned_short_int, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_unsigned_short_int, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmax_328 (void)
{
  extern typeof (fmax (vol_var_unsigned_short_int, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_unsigned_short_int, vol_var__Float32x);
}
#endif
static void
test_fmax_329 (void)
{
  extern typeof (fmax (vol_var_unsigned_short_int, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_unsigned_short_int, vol_var_double);
}
static void
test_fmax_330 (void)
{
  extern typeof (fmax (vol_var_unsigned_short_int, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmax (vol_var_unsigned_short_int, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_fmax_331 (void)
{
  extern typeof (fmax (vol_var_unsigned_short_int, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmax (vol_var_unsigned_short_int, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fmax_332 (void)
{
  extern typeof (fmax (vol_var_unsigned_short_int, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmax (vol_var_unsigned_short_int, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fmax_333 (void)
{
  extern typeof (fmax (vol_var_unsigned_short_int, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmax (vol_var_unsigned_short_int, vol_var__Float128);
}
#endif
static void
test_fmax_334 (void)
{
  extern typeof (fmax (vol_var_unsigned_short_int, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_unsigned_short_int, vol_var_char);
}
static void
test_fmax_335 (void)
{
  extern typeof (fmax (vol_var_unsigned_short_int, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_unsigned_short_int, vol_var_signed_char);
}
static void
test_fmax_336 (void)
{
  extern typeof (fmax (vol_var_unsigned_short_int, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_unsigned_short_int, vol_var_unsigned_char);
}
static void
test_fmax_337 (void)
{
  extern typeof (fmax (vol_var_unsigned_short_int, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_unsigned_short_int, vol_var_short_int);
}
static void
test_fmax_338 (void)
{
  extern typeof (fmax (vol_var_unsigned_short_int, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_unsigned_short_int, vol_var_unsigned_short_int);
}
static void
test_fmax_339 (void)
{
  extern typeof (fmax (vol_var_unsigned_short_int, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_unsigned_short_int, vol_var_int);
}
static void
test_fmax_340 (void)
{
  extern typeof (fmax (vol_var_unsigned_short_int, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_unsigned_short_int, vol_var_unsigned_int);
}
static void
test_fmax_341 (void)
{
  extern typeof (fmax (vol_var_unsigned_short_int, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_unsigned_short_int, vol_var_long_int);
}
static void
test_fmax_342 (void)
{
  extern typeof (fmax (vol_var_unsigned_short_int, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_unsigned_short_int, vol_var_unsigned_long_int);
}
static void
test_fmax_343 (void)
{
  extern typeof (fmax (vol_var_unsigned_short_int, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_unsigned_short_int, vol_var_long_long_int);
}
static void
test_fmax_344 (void)
{
  extern typeof (fmax (vol_var_unsigned_short_int, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_unsigned_short_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fmax_345 (void)
{
  extern typeof (fmax (vol_var_unsigned_short_int, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_unsigned_short_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmax_346 (void)
{
  extern typeof (fmax (vol_var_unsigned_short_int, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_unsigned_short_int, vol_var_unsigned___int128);
}
#endif
static void
test_fmax_347 (void)
{
  extern typeof (fmax (vol_var_unsigned_short_int, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_unsigned_short_int, vol_var_enum_e);
}
static void
test_fmax_348 (void)
{
  extern typeof (fmax (vol_var_unsigned_short_int, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_unsigned_short_int, vol_var__Bool);
}
static void
test_fmax_349 (void)
{
  extern typeof (fmax (vol_var_unsigned_short_int, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_unsigned_short_int, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_fmax_350 (void)
{
  extern typeof (fmax (vol_var_int, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_int, vol_var__Float16);
}
#endif
static void
test_fmax_351 (void)
{
  extern typeof (fmax (vol_var_int, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_int, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_fmax_352 (void)
{
  extern typeof (fmax (vol_var_int, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_int, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmax_353 (void)
{
  extern typeof (fmax (vol_var_int, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_int, vol_var__Float32x);
}
#endif
static void
test_fmax_354 (void)
{
  extern typeof (fmax (vol_var_int, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_int, vol_var_double);
}
static void
test_fmax_355 (void)
{
  extern typeof (fmax (vol_var_int, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmax (vol_var_int, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_fmax_356 (void)
{
  extern typeof (fmax (vol_var_int, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmax (vol_var_int, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fmax_357 (void)
{
  extern typeof (fmax (vol_var_int, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmax (vol_var_int, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fmax_358 (void)
{
  extern typeof (fmax (vol_var_int, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmax (vol_var_int, vol_var__Float128);
}
#endif
static void
test_fmax_359 (void)
{
  extern typeof (fmax (vol_var_int, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_int, vol_var_char);
}
static void
test_fmax_360 (void)
{
  extern typeof (fmax (vol_var_int, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_int, vol_var_signed_char);
}
static void
test_fmax_361 (void)
{
  extern typeof (fmax (vol_var_int, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_int, vol_var_unsigned_char);
}
static void
test_fmax_362 (void)
{
  extern typeof (fmax (vol_var_int, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_int, vol_var_short_int);
}
static void
test_fmax_363 (void)
{
  extern typeof (fmax (vol_var_int, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_int, vol_var_unsigned_short_int);
}
static void
test_fmax_364 (void)
{
  extern typeof (fmax (vol_var_int, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_int, vol_var_int);
}
static void
test_fmax_365 (void)
{
  extern typeof (fmax (vol_var_int, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_int, vol_var_unsigned_int);
}
static void
test_fmax_366 (void)
{
  extern typeof (fmax (vol_var_int, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_int, vol_var_long_int);
}
static void
test_fmax_367 (void)
{
  extern typeof (fmax (vol_var_int, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_int, vol_var_unsigned_long_int);
}
static void
test_fmax_368 (void)
{
  extern typeof (fmax (vol_var_int, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_int, vol_var_long_long_int);
}
static void
test_fmax_369 (void)
{
  extern typeof (fmax (vol_var_int, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fmax_370 (void)
{
  extern typeof (fmax (vol_var_int, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmax_371 (void)
{
  extern typeof (fmax (vol_var_int, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_int, vol_var_unsigned___int128);
}
#endif
static void
test_fmax_372 (void)
{
  extern typeof (fmax (vol_var_int, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_int, vol_var_enum_e);
}
static void
test_fmax_373 (void)
{
  extern typeof (fmax (vol_var_int, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_int, vol_var__Bool);
}
static void
test_fmax_374 (void)
{
  extern typeof (fmax (vol_var_int, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_int, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_fmax_375 (void)
{
  extern typeof (fmax (vol_var_unsigned_int, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_unsigned_int, vol_var__Float16);
}
#endif
static void
test_fmax_376 (void)
{
  extern typeof (fmax (vol_var_unsigned_int, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_unsigned_int, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_fmax_377 (void)
{
  extern typeof (fmax (vol_var_unsigned_int, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_unsigned_int, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmax_378 (void)
{
  extern typeof (fmax (vol_var_unsigned_int, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_unsigned_int, vol_var__Float32x);
}
#endif
static void
test_fmax_379 (void)
{
  extern typeof (fmax (vol_var_unsigned_int, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_unsigned_int, vol_var_double);
}
static void
test_fmax_380 (void)
{
  extern typeof (fmax (vol_var_unsigned_int, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmax (vol_var_unsigned_int, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_fmax_381 (void)
{
  extern typeof (fmax (vol_var_unsigned_int, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmax (vol_var_unsigned_int, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fmax_382 (void)
{
  extern typeof (fmax (vol_var_unsigned_int, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmax (vol_var_unsigned_int, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fmax_383 (void)
{
  extern typeof (fmax (vol_var_unsigned_int, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmax (vol_var_unsigned_int, vol_var__Float128);
}
#endif
static void
test_fmax_384 (void)
{
  extern typeof (fmax (vol_var_unsigned_int, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_unsigned_int, vol_var_char);
}
static void
test_fmax_385 (void)
{
  extern typeof (fmax (vol_var_unsigned_int, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_unsigned_int, vol_var_signed_char);
}
static void
test_fmax_386 (void)
{
  extern typeof (fmax (vol_var_unsigned_int, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_unsigned_int, vol_var_unsigned_char);
}
static void
test_fmax_387 (void)
{
  extern typeof (fmax (vol_var_unsigned_int, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_unsigned_int, vol_var_short_int);
}
static void
test_fmax_388 (void)
{
  extern typeof (fmax (vol_var_unsigned_int, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_unsigned_int, vol_var_unsigned_short_int);
}
static void
test_fmax_389 (void)
{
  extern typeof (fmax (vol_var_unsigned_int, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_unsigned_int, vol_var_int);
}
static void
test_fmax_390 (void)
{
  extern typeof (fmax (vol_var_unsigned_int, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_unsigned_int, vol_var_unsigned_int);
}
static void
test_fmax_391 (void)
{
  extern typeof (fmax (vol_var_unsigned_int, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_unsigned_int, vol_var_long_int);
}
static void
test_fmax_392 (void)
{
  extern typeof (fmax (vol_var_unsigned_int, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_unsigned_int, vol_var_unsigned_long_int);
}
static void
test_fmax_393 (void)
{
  extern typeof (fmax (vol_var_unsigned_int, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_unsigned_int, vol_var_long_long_int);
}
static void
test_fmax_394 (void)
{
  extern typeof (fmax (vol_var_unsigned_int, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_unsigned_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fmax_395 (void)
{
  extern typeof (fmax (vol_var_unsigned_int, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_unsigned_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmax_396 (void)
{
  extern typeof (fmax (vol_var_unsigned_int, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_unsigned_int, vol_var_unsigned___int128);
}
#endif
static void
test_fmax_397 (void)
{
  extern typeof (fmax (vol_var_unsigned_int, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_unsigned_int, vol_var_enum_e);
}
static void
test_fmax_398 (void)
{
  extern typeof (fmax (vol_var_unsigned_int, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_unsigned_int, vol_var__Bool);
}
static void
test_fmax_399 (void)
{
  extern typeof (fmax (vol_var_unsigned_int, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_unsigned_int, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_fmax_400 (void)
{
  extern typeof (fmax (vol_var_long_int, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_long_int, vol_var__Float16);
}
#endif
static void
test_fmax_401 (void)
{
  extern typeof (fmax (vol_var_long_int, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_long_int, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_fmax_402 (void)
{
  extern typeof (fmax (vol_var_long_int, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_long_int, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmax_403 (void)
{
  extern typeof (fmax (vol_var_long_int, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_long_int, vol_var__Float32x);
}
#endif
static void
test_fmax_404 (void)
{
  extern typeof (fmax (vol_var_long_int, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_long_int, vol_var_double);
}
static void
test_fmax_405 (void)
{
  extern typeof (fmax (vol_var_long_int, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmax (vol_var_long_int, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_fmax_406 (void)
{
  extern typeof (fmax (vol_var_long_int, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmax (vol_var_long_int, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fmax_407 (void)
{
  extern typeof (fmax (vol_var_long_int, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmax (vol_var_long_int, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fmax_408 (void)
{
  extern typeof (fmax (vol_var_long_int, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmax (vol_var_long_int, vol_var__Float128);
}
#endif
static void
test_fmax_409 (void)
{
  extern typeof (fmax (vol_var_long_int, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_long_int, vol_var_char);
}
static void
test_fmax_410 (void)
{
  extern typeof (fmax (vol_var_long_int, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_long_int, vol_var_signed_char);
}
static void
test_fmax_411 (void)
{
  extern typeof (fmax (vol_var_long_int, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_long_int, vol_var_unsigned_char);
}
static void
test_fmax_412 (void)
{
  extern typeof (fmax (vol_var_long_int, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_long_int, vol_var_short_int);
}
static void
test_fmax_413 (void)
{
  extern typeof (fmax (vol_var_long_int, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_long_int, vol_var_unsigned_short_int);
}
static void
test_fmax_414 (void)
{
  extern typeof (fmax (vol_var_long_int, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_long_int, vol_var_int);
}
static void
test_fmax_415 (void)
{
  extern typeof (fmax (vol_var_long_int, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_long_int, vol_var_unsigned_int);
}
static void
test_fmax_416 (void)
{
  extern typeof (fmax (vol_var_long_int, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_long_int, vol_var_long_int);
}
static void
test_fmax_417 (void)
{
  extern typeof (fmax (vol_var_long_int, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_long_int, vol_var_unsigned_long_int);
}
static void
test_fmax_418 (void)
{
  extern typeof (fmax (vol_var_long_int, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_long_int, vol_var_long_long_int);
}
static void
test_fmax_419 (void)
{
  extern typeof (fmax (vol_var_long_int, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_long_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fmax_420 (void)
{
  extern typeof (fmax (vol_var_long_int, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_long_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmax_421 (void)
{
  extern typeof (fmax (vol_var_long_int, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_long_int, vol_var_unsigned___int128);
}
#endif
static void
test_fmax_422 (void)
{
  extern typeof (fmax (vol_var_long_int, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_long_int, vol_var_enum_e);
}
static void
test_fmax_423 (void)
{
  extern typeof (fmax (vol_var_long_int, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_long_int, vol_var__Bool);
}
static void
test_fmax_424 (void)
{
  extern typeof (fmax (vol_var_long_int, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_long_int, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_fmax_425 (void)
{
  extern typeof (fmax (vol_var_unsigned_long_int, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_unsigned_long_int, vol_var__Float16);
}
#endif
static void
test_fmax_426 (void)
{
  extern typeof (fmax (vol_var_unsigned_long_int, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_unsigned_long_int, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_fmax_427 (void)
{
  extern typeof (fmax (vol_var_unsigned_long_int, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_unsigned_long_int, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmax_428 (void)
{
  extern typeof (fmax (vol_var_unsigned_long_int, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_unsigned_long_int, vol_var__Float32x);
}
#endif
static void
test_fmax_429 (void)
{
  extern typeof (fmax (vol_var_unsigned_long_int, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_unsigned_long_int, vol_var_double);
}
static void
test_fmax_430 (void)
{
  extern typeof (fmax (vol_var_unsigned_long_int, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmax (vol_var_unsigned_long_int, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_fmax_431 (void)
{
  extern typeof (fmax (vol_var_unsigned_long_int, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmax (vol_var_unsigned_long_int, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fmax_432 (void)
{
  extern typeof (fmax (vol_var_unsigned_long_int, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmax (vol_var_unsigned_long_int, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fmax_433 (void)
{
  extern typeof (fmax (vol_var_unsigned_long_int, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmax (vol_var_unsigned_long_int, vol_var__Float128);
}
#endif
static void
test_fmax_434 (void)
{
  extern typeof (fmax (vol_var_unsigned_long_int, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_unsigned_long_int, vol_var_char);
}
static void
test_fmax_435 (void)
{
  extern typeof (fmax (vol_var_unsigned_long_int, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_unsigned_long_int, vol_var_signed_char);
}
static void
test_fmax_436 (void)
{
  extern typeof (fmax (vol_var_unsigned_long_int, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_unsigned_long_int, vol_var_unsigned_char);
}
static void
test_fmax_437 (void)
{
  extern typeof (fmax (vol_var_unsigned_long_int, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_unsigned_long_int, vol_var_short_int);
}
static void
test_fmax_438 (void)
{
  extern typeof (fmax (vol_var_unsigned_long_int, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_unsigned_long_int, vol_var_unsigned_short_int);
}
static void
test_fmax_439 (void)
{
  extern typeof (fmax (vol_var_unsigned_long_int, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_unsigned_long_int, vol_var_int);
}
static void
test_fmax_440 (void)
{
  extern typeof (fmax (vol_var_unsigned_long_int, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_unsigned_long_int, vol_var_unsigned_int);
}
static void
test_fmax_441 (void)
{
  extern typeof (fmax (vol_var_unsigned_long_int, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_unsigned_long_int, vol_var_long_int);
}
static void
test_fmax_442 (void)
{
  extern typeof (fmax (vol_var_unsigned_long_int, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_unsigned_long_int, vol_var_unsigned_long_int);
}
static void
test_fmax_443 (void)
{
  extern typeof (fmax (vol_var_unsigned_long_int, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_unsigned_long_int, vol_var_long_long_int);
}
static void
test_fmax_444 (void)
{
  extern typeof (fmax (vol_var_unsigned_long_int, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_unsigned_long_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fmax_445 (void)
{
  extern typeof (fmax (vol_var_unsigned_long_int, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_unsigned_long_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmax_446 (void)
{
  extern typeof (fmax (vol_var_unsigned_long_int, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_unsigned_long_int, vol_var_unsigned___int128);
}
#endif
static void
test_fmax_447 (void)
{
  extern typeof (fmax (vol_var_unsigned_long_int, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_unsigned_long_int, vol_var_enum_e);
}
static void
test_fmax_448 (void)
{
  extern typeof (fmax (vol_var_unsigned_long_int, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_unsigned_long_int, vol_var__Bool);
}
static void
test_fmax_449 (void)
{
  extern typeof (fmax (vol_var_unsigned_long_int, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_unsigned_long_int, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_fmax_450 (void)
{
  extern typeof (fmax (vol_var_long_long_int, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_long_long_int, vol_var__Float16);
}
#endif
static void
test_fmax_451 (void)
{
  extern typeof (fmax (vol_var_long_long_int, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_long_long_int, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_fmax_452 (void)
{
  extern typeof (fmax (vol_var_long_long_int, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_long_long_int, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmax_453 (void)
{
  extern typeof (fmax (vol_var_long_long_int, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_long_long_int, vol_var__Float32x);
}
#endif
static void
test_fmax_454 (void)
{
  extern typeof (fmax (vol_var_long_long_int, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_long_long_int, vol_var_double);
}
static void
test_fmax_455 (void)
{
  extern typeof (fmax (vol_var_long_long_int, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmax (vol_var_long_long_int, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_fmax_456 (void)
{
  extern typeof (fmax (vol_var_long_long_int, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmax (vol_var_long_long_int, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fmax_457 (void)
{
  extern typeof (fmax (vol_var_long_long_int, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmax (vol_var_long_long_int, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fmax_458 (void)
{
  extern typeof (fmax (vol_var_long_long_int, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmax (vol_var_long_long_int, vol_var__Float128);
}
#endif
static void
test_fmax_459 (void)
{
  extern typeof (fmax (vol_var_long_long_int, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_long_long_int, vol_var_char);
}
static void
test_fmax_460 (void)
{
  extern typeof (fmax (vol_var_long_long_int, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_long_long_int, vol_var_signed_char);
}
static void
test_fmax_461 (void)
{
  extern typeof (fmax (vol_var_long_long_int, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_long_long_int, vol_var_unsigned_char);
}
static void
test_fmax_462 (void)
{
  extern typeof (fmax (vol_var_long_long_int, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_long_long_int, vol_var_short_int);
}
static void
test_fmax_463 (void)
{
  extern typeof (fmax (vol_var_long_long_int, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_long_long_int, vol_var_unsigned_short_int);
}
static void
test_fmax_464 (void)
{
  extern typeof (fmax (vol_var_long_long_int, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_long_long_int, vol_var_int);
}
static void
test_fmax_465 (void)
{
  extern typeof (fmax (vol_var_long_long_int, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_long_long_int, vol_var_unsigned_int);
}
static void
test_fmax_466 (void)
{
  extern typeof (fmax (vol_var_long_long_int, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_long_long_int, vol_var_long_int);
}
static void
test_fmax_467 (void)
{
  extern typeof (fmax (vol_var_long_long_int, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_long_long_int, vol_var_unsigned_long_int);
}
static void
test_fmax_468 (void)
{
  extern typeof (fmax (vol_var_long_long_int, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_long_long_int, vol_var_long_long_int);
}
static void
test_fmax_469 (void)
{
  extern typeof (fmax (vol_var_long_long_int, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_long_long_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fmax_470 (void)
{
  extern typeof (fmax (vol_var_long_long_int, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_long_long_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmax_471 (void)
{
  extern typeof (fmax (vol_var_long_long_int, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_long_long_int, vol_var_unsigned___int128);
}
#endif
static void
test_fmax_472 (void)
{
  extern typeof (fmax (vol_var_long_long_int, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_long_long_int, vol_var_enum_e);
}
static void
test_fmax_473 (void)
{
  extern typeof (fmax (vol_var_long_long_int, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_long_long_int, vol_var__Bool);
}
static void
test_fmax_474 (void)
{
  extern typeof (fmax (vol_var_long_long_int, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_long_long_int, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_fmax_475 (void)
{
  extern typeof (fmax (vol_var_unsigned_long_long_int, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_unsigned_long_long_int, vol_var__Float16);
}
#endif
static void
test_fmax_476 (void)
{
  extern typeof (fmax (vol_var_unsigned_long_long_int, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_unsigned_long_long_int, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_fmax_477 (void)
{
  extern typeof (fmax (vol_var_unsigned_long_long_int, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_unsigned_long_long_int, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmax_478 (void)
{
  extern typeof (fmax (vol_var_unsigned_long_long_int, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_unsigned_long_long_int, vol_var__Float32x);
}
#endif
static void
test_fmax_479 (void)
{
  extern typeof (fmax (vol_var_unsigned_long_long_int, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_unsigned_long_long_int, vol_var_double);
}
static void
test_fmax_480 (void)
{
  extern typeof (fmax (vol_var_unsigned_long_long_int, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmax (vol_var_unsigned_long_long_int, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_fmax_481 (void)
{
  extern typeof (fmax (vol_var_unsigned_long_long_int, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmax (vol_var_unsigned_long_long_int, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fmax_482 (void)
{
  extern typeof (fmax (vol_var_unsigned_long_long_int, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmax (vol_var_unsigned_long_long_int, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fmax_483 (void)
{
  extern typeof (fmax (vol_var_unsigned_long_long_int, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmax (vol_var_unsigned_long_long_int, vol_var__Float128);
}
#endif
static void
test_fmax_484 (void)
{
  extern typeof (fmax (vol_var_unsigned_long_long_int, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_unsigned_long_long_int, vol_var_char);
}
static void
test_fmax_485 (void)
{
  extern typeof (fmax (vol_var_unsigned_long_long_int, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_unsigned_long_long_int, vol_var_signed_char);
}
static void
test_fmax_486 (void)
{
  extern typeof (fmax (vol_var_unsigned_long_long_int, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_unsigned_long_long_int, vol_var_unsigned_char);
}
static void
test_fmax_487 (void)
{
  extern typeof (fmax (vol_var_unsigned_long_long_int, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_unsigned_long_long_int, vol_var_short_int);
}
static void
test_fmax_488 (void)
{
  extern typeof (fmax (vol_var_unsigned_long_long_int, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_unsigned_long_long_int, vol_var_unsigned_short_int);
}
static void
test_fmax_489 (void)
{
  extern typeof (fmax (vol_var_unsigned_long_long_int, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_unsigned_long_long_int, vol_var_int);
}
static void
test_fmax_490 (void)
{
  extern typeof (fmax (vol_var_unsigned_long_long_int, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_unsigned_long_long_int, vol_var_unsigned_int);
}
static void
test_fmax_491 (void)
{
  extern typeof (fmax (vol_var_unsigned_long_long_int, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_unsigned_long_long_int, vol_var_long_int);
}
static void
test_fmax_492 (void)
{
  extern typeof (fmax (vol_var_unsigned_long_long_int, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_unsigned_long_long_int, vol_var_unsigned_long_int);
}
static void
test_fmax_493 (void)
{
  extern typeof (fmax (vol_var_unsigned_long_long_int, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_unsigned_long_long_int, vol_var_long_long_int);
}
static void
test_fmax_494 (void)
{
  extern typeof (fmax (vol_var_unsigned_long_long_int, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_unsigned_long_long_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fmax_495 (void)
{
  extern typeof (fmax (vol_var_unsigned_long_long_int, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_unsigned_long_long_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmax_496 (void)
{
  extern typeof (fmax (vol_var_unsigned_long_long_int, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_unsigned_long_long_int, vol_var_unsigned___int128);
}
#endif
static void
test_fmax_497 (void)
{
  extern typeof (fmax (vol_var_unsigned_long_long_int, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_unsigned_long_long_int, vol_var_enum_e);
}
static void
test_fmax_498 (void)
{
  extern typeof (fmax (vol_var_unsigned_long_long_int, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_unsigned_long_long_int, vol_var__Bool);
}
static void
test_fmax_499 (void)
{
  extern typeof (fmax (vol_var_unsigned_long_long_int, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_unsigned_long_long_int, vol_var_bit_field);
}
#if defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_fmax_500 (void)
{
  extern typeof (fmax (vol_var___int128, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var___int128, vol_var__Float16);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmax_501 (void)
{
  extern typeof (fmax (vol_var___int128, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var___int128, vol_var_float);
}
#endif
#if defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_fmax_502 (void)
{
  extern typeof (fmax (vol_var___int128, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var___int128, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_fmax_503 (void)
{
  extern typeof (fmax (vol_var___int128, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var___int128, vol_var__Float32x);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmax_504 (void)
{
  extern typeof (fmax (vol_var___int128, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var___int128, vol_var_double);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmax_505 (void)
{
  extern typeof (fmax (vol_var___int128, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmax (vol_var___int128, vol_var_long_double);
}
#endif
#if defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_fmax_506 (void)
{
  extern typeof (fmax (vol_var___int128, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmax (vol_var___int128, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_fmax_507 (void)
{
  extern typeof (fmax (vol_var___int128, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmax (vol_var___int128, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_fmax_508 (void)
{
  extern typeof (fmax (vol_var___int128, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmax (vol_var___int128, vol_var__Float128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmax_509 (void)
{
  extern typeof (fmax (vol_var___int128, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var___int128, vol_var_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmax_510 (void)
{
  extern typeof (fmax (vol_var___int128, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var___int128, vol_var_signed_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmax_511 (void)
{
  extern typeof (fmax (vol_var___int128, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var___int128, vol_var_unsigned_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmax_512 (void)
{
  extern typeof (fmax (vol_var___int128, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var___int128, vol_var_short_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmax_513 (void)
{
  extern typeof (fmax (vol_var___int128, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var___int128, vol_var_unsigned_short_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmax_514 (void)
{
  extern typeof (fmax (vol_var___int128, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var___int128, vol_var_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmax_515 (void)
{
  extern typeof (fmax (vol_var___int128, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var___int128, vol_var_unsigned_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmax_516 (void)
{
  extern typeof (fmax (vol_var___int128, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var___int128, vol_var_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmax_517 (void)
{
  extern typeof (fmax (vol_var___int128, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var___int128, vol_var_unsigned_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmax_518 (void)
{
  extern typeof (fmax (vol_var___int128, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var___int128, vol_var_long_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmax_519 (void)
{
  extern typeof (fmax (vol_var___int128, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var___int128, vol_var_unsigned_long_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmax_520 (void)
{
  extern typeof (fmax (vol_var___int128, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var___int128, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmax_521 (void)
{
  extern typeof (fmax (vol_var___int128, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var___int128, vol_var_unsigned___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmax_522 (void)
{
  extern typeof (fmax (vol_var___int128, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var___int128, vol_var_enum_e);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmax_523 (void)
{
  extern typeof (fmax (vol_var___int128, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var___int128, vol_var__Bool);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmax_524 (void)
{
  extern typeof (fmax (vol_var___int128, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var___int128, vol_var_bit_field);
}
#endif
#if defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_fmax_525 (void)
{
  extern typeof (fmax (vol_var_unsigned___int128, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_unsigned___int128, vol_var__Float16);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmax_526 (void)
{
  extern typeof (fmax (vol_var_unsigned___int128, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_unsigned___int128, vol_var_float);
}
#endif
#if defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_fmax_527 (void)
{
  extern typeof (fmax (vol_var_unsigned___int128, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_unsigned___int128, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_fmax_528 (void)
{
  extern typeof (fmax (vol_var_unsigned___int128, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_unsigned___int128, vol_var__Float32x);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmax_529 (void)
{
  extern typeof (fmax (vol_var_unsigned___int128, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_unsigned___int128, vol_var_double);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmax_530 (void)
{
  extern typeof (fmax (vol_var_unsigned___int128, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmax (vol_var_unsigned___int128, vol_var_long_double);
}
#endif
#if defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_fmax_531 (void)
{
  extern typeof (fmax (vol_var_unsigned___int128, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmax (vol_var_unsigned___int128, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_fmax_532 (void)
{
  extern typeof (fmax (vol_var_unsigned___int128, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmax (vol_var_unsigned___int128, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_fmax_533 (void)
{
  extern typeof (fmax (vol_var_unsigned___int128, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmax (vol_var_unsigned___int128, vol_var__Float128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmax_534 (void)
{
  extern typeof (fmax (vol_var_unsigned___int128, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_unsigned___int128, vol_var_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmax_535 (void)
{
  extern typeof (fmax (vol_var_unsigned___int128, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_unsigned___int128, vol_var_signed_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmax_536 (void)
{
  extern typeof (fmax (vol_var_unsigned___int128, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_unsigned___int128, vol_var_unsigned_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmax_537 (void)
{
  extern typeof (fmax (vol_var_unsigned___int128, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_unsigned___int128, vol_var_short_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmax_538 (void)
{
  extern typeof (fmax (vol_var_unsigned___int128, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_unsigned___int128, vol_var_unsigned_short_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmax_539 (void)
{
  extern typeof (fmax (vol_var_unsigned___int128, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_unsigned___int128, vol_var_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmax_540 (void)
{
  extern typeof (fmax (vol_var_unsigned___int128, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_unsigned___int128, vol_var_unsigned_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmax_541 (void)
{
  extern typeof (fmax (vol_var_unsigned___int128, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_unsigned___int128, vol_var_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmax_542 (void)
{
  extern typeof (fmax (vol_var_unsigned___int128, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_unsigned___int128, vol_var_unsigned_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmax_543 (void)
{
  extern typeof (fmax (vol_var_unsigned___int128, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_unsigned___int128, vol_var_long_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmax_544 (void)
{
  extern typeof (fmax (vol_var_unsigned___int128, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_unsigned___int128, vol_var_unsigned_long_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmax_545 (void)
{
  extern typeof (fmax (vol_var_unsigned___int128, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_unsigned___int128, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmax_546 (void)
{
  extern typeof (fmax (vol_var_unsigned___int128, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_unsigned___int128, vol_var_unsigned___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmax_547 (void)
{
  extern typeof (fmax (vol_var_unsigned___int128, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_unsigned___int128, vol_var_enum_e);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmax_548 (void)
{
  extern typeof (fmax (vol_var_unsigned___int128, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_unsigned___int128, vol_var__Bool);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmax_549 (void)
{
  extern typeof (fmax (vol_var_unsigned___int128, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_unsigned___int128, vol_var_bit_field);
}
#endif
#if defined HUGE_VAL_F16
static void
test_fmax_550 (void)
{
  extern typeof (fmax (vol_var_enum_e, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_enum_e, vol_var__Float16);
}
#endif
static void
test_fmax_551 (void)
{
  extern typeof (fmax (vol_var_enum_e, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_enum_e, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_fmax_552 (void)
{
  extern typeof (fmax (vol_var_enum_e, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_enum_e, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmax_553 (void)
{
  extern typeof (fmax (vol_var_enum_e, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_enum_e, vol_var__Float32x);
}
#endif
static void
test_fmax_554 (void)
{
  extern typeof (fmax (vol_var_enum_e, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_enum_e, vol_var_double);
}
static void
test_fmax_555 (void)
{
  extern typeof (fmax (vol_var_enum_e, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmax (vol_var_enum_e, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_fmax_556 (void)
{
  extern typeof (fmax (vol_var_enum_e, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmax (vol_var_enum_e, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fmax_557 (void)
{
  extern typeof (fmax (vol_var_enum_e, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmax (vol_var_enum_e, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fmax_558 (void)
{
  extern typeof (fmax (vol_var_enum_e, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmax (vol_var_enum_e, vol_var__Float128);
}
#endif
static void
test_fmax_559 (void)
{
  extern typeof (fmax (vol_var_enum_e, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_enum_e, vol_var_char);
}
static void
test_fmax_560 (void)
{
  extern typeof (fmax (vol_var_enum_e, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_enum_e, vol_var_signed_char);
}
static void
test_fmax_561 (void)
{
  extern typeof (fmax (vol_var_enum_e, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_enum_e, vol_var_unsigned_char);
}
static void
test_fmax_562 (void)
{
  extern typeof (fmax (vol_var_enum_e, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_enum_e, vol_var_short_int);
}
static void
test_fmax_563 (void)
{
  extern typeof (fmax (vol_var_enum_e, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_enum_e, vol_var_unsigned_short_int);
}
static void
test_fmax_564 (void)
{
  extern typeof (fmax (vol_var_enum_e, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_enum_e, vol_var_int);
}
static void
test_fmax_565 (void)
{
  extern typeof (fmax (vol_var_enum_e, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_enum_e, vol_var_unsigned_int);
}
static void
test_fmax_566 (void)
{
  extern typeof (fmax (vol_var_enum_e, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_enum_e, vol_var_long_int);
}
static void
test_fmax_567 (void)
{
  extern typeof (fmax (vol_var_enum_e, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_enum_e, vol_var_unsigned_long_int);
}
static void
test_fmax_568 (void)
{
  extern typeof (fmax (vol_var_enum_e, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_enum_e, vol_var_long_long_int);
}
static void
test_fmax_569 (void)
{
  extern typeof (fmax (vol_var_enum_e, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_enum_e, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fmax_570 (void)
{
  extern typeof (fmax (vol_var_enum_e, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_enum_e, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmax_571 (void)
{
  extern typeof (fmax (vol_var_enum_e, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_enum_e, vol_var_unsigned___int128);
}
#endif
static void
test_fmax_572 (void)
{
  extern typeof (fmax (vol_var_enum_e, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_enum_e, vol_var_enum_e);
}
static void
test_fmax_573 (void)
{
  extern typeof (fmax (vol_var_enum_e, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_enum_e, vol_var__Bool);
}
static void
test_fmax_574 (void)
{
  extern typeof (fmax (vol_var_enum_e, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_enum_e, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_fmax_575 (void)
{
  extern typeof (fmax (vol_var__Bool, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var__Bool, vol_var__Float16);
}
#endif
static void
test_fmax_576 (void)
{
  extern typeof (fmax (vol_var__Bool, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var__Bool, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_fmax_577 (void)
{
  extern typeof (fmax (vol_var__Bool, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var__Bool, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmax_578 (void)
{
  extern typeof (fmax (vol_var__Bool, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var__Bool, vol_var__Float32x);
}
#endif
static void
test_fmax_579 (void)
{
  extern typeof (fmax (vol_var__Bool, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var__Bool, vol_var_double);
}
static void
test_fmax_580 (void)
{
  extern typeof (fmax (vol_var__Bool, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmax (vol_var__Bool, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_fmax_581 (void)
{
  extern typeof (fmax (vol_var__Bool, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmax (vol_var__Bool, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fmax_582 (void)
{
  extern typeof (fmax (vol_var__Bool, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmax (vol_var__Bool, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fmax_583 (void)
{
  extern typeof (fmax (vol_var__Bool, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmax (vol_var__Bool, vol_var__Float128);
}
#endif
static void
test_fmax_584 (void)
{
  extern typeof (fmax (vol_var__Bool, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var__Bool, vol_var_char);
}
static void
test_fmax_585 (void)
{
  extern typeof (fmax (vol_var__Bool, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var__Bool, vol_var_signed_char);
}
static void
test_fmax_586 (void)
{
  extern typeof (fmax (vol_var__Bool, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var__Bool, vol_var_unsigned_char);
}
static void
test_fmax_587 (void)
{
  extern typeof (fmax (vol_var__Bool, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var__Bool, vol_var_short_int);
}
static void
test_fmax_588 (void)
{
  extern typeof (fmax (vol_var__Bool, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var__Bool, vol_var_unsigned_short_int);
}
static void
test_fmax_589 (void)
{
  extern typeof (fmax (vol_var__Bool, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var__Bool, vol_var_int);
}
static void
test_fmax_590 (void)
{
  extern typeof (fmax (vol_var__Bool, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var__Bool, vol_var_unsigned_int);
}
static void
test_fmax_591 (void)
{
  extern typeof (fmax (vol_var__Bool, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var__Bool, vol_var_long_int);
}
static void
test_fmax_592 (void)
{
  extern typeof (fmax (vol_var__Bool, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var__Bool, vol_var_unsigned_long_int);
}
static void
test_fmax_593 (void)
{
  extern typeof (fmax (vol_var__Bool, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var__Bool, vol_var_long_long_int);
}
static void
test_fmax_594 (void)
{
  extern typeof (fmax (vol_var__Bool, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var__Bool, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fmax_595 (void)
{
  extern typeof (fmax (vol_var__Bool, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var__Bool, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmax_596 (void)
{
  extern typeof (fmax (vol_var__Bool, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var__Bool, vol_var_unsigned___int128);
}
#endif
static void
test_fmax_597 (void)
{
  extern typeof (fmax (vol_var__Bool, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var__Bool, vol_var_enum_e);
}
static void
test_fmax_598 (void)
{
  extern typeof (fmax (vol_var__Bool, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var__Bool, vol_var__Bool);
}
static void
test_fmax_599 (void)
{
  extern typeof (fmax (vol_var__Bool, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var__Bool, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_fmax_600 (void)
{
  extern typeof (fmax (vol_var_bit_field, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_bit_field, vol_var__Float16);
}
#endif
static void
test_fmax_601 (void)
{
  extern typeof (fmax (vol_var_bit_field, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_bit_field, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_fmax_602 (void)
{
  extern typeof (fmax (vol_var_bit_field, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_bit_field, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmax_603 (void)
{
  extern typeof (fmax (vol_var_bit_field, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_bit_field, vol_var__Float32x);
}
#endif
static void
test_fmax_604 (void)
{
  extern typeof (fmax (vol_var_bit_field, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_bit_field, vol_var_double);
}
static void
test_fmax_605 (void)
{
  extern typeof (fmax (vol_var_bit_field, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmax (vol_var_bit_field, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_fmax_606 (void)
{
  extern typeof (fmax (vol_var_bit_field, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmax (vol_var_bit_field, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fmax_607 (void)
{
  extern typeof (fmax (vol_var_bit_field, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmax (vol_var_bit_field, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fmax_608 (void)
{
  extern typeof (fmax (vol_var_bit_field, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmax (vol_var_bit_field, vol_var__Float128);
}
#endif
static void
test_fmax_609 (void)
{
  extern typeof (fmax (vol_var_bit_field, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_bit_field, vol_var_char);
}
static void
test_fmax_610 (void)
{
  extern typeof (fmax (vol_var_bit_field, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_bit_field, vol_var_signed_char);
}
static void
test_fmax_611 (void)
{
  extern typeof (fmax (vol_var_bit_field, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_bit_field, vol_var_unsigned_char);
}
static void
test_fmax_612 (void)
{
  extern typeof (fmax (vol_var_bit_field, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_bit_field, vol_var_short_int);
}
static void
test_fmax_613 (void)
{
  extern typeof (fmax (vol_var_bit_field, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_bit_field, vol_var_unsigned_short_int);
}
static void
test_fmax_614 (void)
{
  extern typeof (fmax (vol_var_bit_field, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_bit_field, vol_var_int);
}
static void
test_fmax_615 (void)
{
  extern typeof (fmax (vol_var_bit_field, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_bit_field, vol_var_unsigned_int);
}
static void
test_fmax_616 (void)
{
  extern typeof (fmax (vol_var_bit_field, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_bit_field, vol_var_long_int);
}
static void
test_fmax_617 (void)
{
  extern typeof (fmax (vol_var_bit_field, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_bit_field, vol_var_unsigned_long_int);
}
static void
test_fmax_618 (void)
{
  extern typeof (fmax (vol_var_bit_field, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_bit_field, vol_var_long_long_int);
}
static void
test_fmax_619 (void)
{
  extern typeof (fmax (vol_var_bit_field, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_bit_field, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fmax_620 (void)
{
  extern typeof (fmax (vol_var_bit_field, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_bit_field, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmax_621 (void)
{
  extern typeof (fmax (vol_var_bit_field, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_bit_field, vol_var_unsigned___int128);
}
#endif
static void
test_fmax_622 (void)
{
  extern typeof (fmax (vol_var_bit_field, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_bit_field, vol_var_enum_e);
}
static void
test_fmax_623 (void)
{
  extern typeof (fmax (vol_var_bit_field, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_bit_field, vol_var__Bool);
}
static void
test_fmax_624 (void)
{
  extern typeof (fmax (vol_var_bit_field, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = fmax (vol_var_bit_field, vol_var_bit_field);
}
static const struct test tests[] =
  {
#if defined HUGE_VAL_F16
    { test_fmax_0, "fmax", "fmax (_Float16, _Float16)", FLT16_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_fmax_1, "fmax", "fmax (_Float16, float)", FLT_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F32
    { test_fmax_2, "fmax", "fmax (_Float16, _Float32)", FLT32_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
    { test_fmax_3, "fmax", "fmax (_Float16, _Float32x)", FLT32X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_fmax_4, "fmax", "fmax (_Float16, double)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_fmax_5, "fmax", "fmax (_Float16, long double)", LDBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F64
    { test_fmax_6, "fmax", "fmax (_Float16, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
    { test_fmax_7, "fmax", "fmax (_Float16, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F16
    { test_fmax_8, "fmax", "fmax (_Float16, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_fmax_9, "fmax", "fmax (_Float16, char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_fmax_10, "fmax", "fmax (_Float16, signed char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_fmax_11, "fmax", "fmax (_Float16, unsigned char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_fmax_12, "fmax", "fmax (_Float16, short int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_fmax_13, "fmax", "fmax (_Float16, unsigned short int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_fmax_14, "fmax", "fmax (_Float16, int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_fmax_15, "fmax", "fmax (_Float16, unsigned int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_fmax_16, "fmax", "fmax (_Float16, long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_fmax_17, "fmax", "fmax (_Float16, unsigned long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_fmax_18, "fmax", "fmax (_Float16, long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_fmax_19, "fmax", "fmax (_Float16, unsigned long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_fmax_20, "fmax", "fmax (_Float16, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_fmax_21, "fmax", "fmax (_Float16, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_fmax_22, "fmax", "fmax (_Float16, enum e)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_fmax_23, "fmax", "fmax (_Float16, _Bool)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_fmax_24, "fmax", "fmax (_Float16, bit_field)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_fmax_25, "fmax", "fmax (float, _Float16)", FLT_MANT_DIG, 0 },
#endif
    { test_fmax_26, "fmax", "fmax (float, float)", FLT_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_fmax_27, "fmax", "fmax (float, _Float32)", FLT32_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmax_28, "fmax", "fmax (float, _Float32x)", FLT32X_MANT_DIG, 0 },
#endif
    { test_fmax_29, "fmax", "fmax (float, double)", DBL_MANT_DIG, 0 },
    { test_fmax_30, "fmax", "fmax (float, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_fmax_31, "fmax", "fmax (float, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fmax_32, "fmax", "fmax (float, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fmax_33, "fmax", "fmax (float, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_fmax_34, "fmax", "fmax (float, char)", DBL_MANT_DIG, 0 },
    { test_fmax_35, "fmax", "fmax (float, signed char)", DBL_MANT_DIG, 0 },
    { test_fmax_36, "fmax", "fmax (float, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fmax_37, "fmax", "fmax (float, short int)", DBL_MANT_DIG, 0 },
    { test_fmax_38, "fmax", "fmax (float, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fmax_39, "fmax", "fmax (float, int)", DBL_MANT_DIG, 0 },
    { test_fmax_40, "fmax", "fmax (float, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fmax_41, "fmax", "fmax (float, long int)", DBL_MANT_DIG, 0 },
    { test_fmax_42, "fmax", "fmax (float, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fmax_43, "fmax", "fmax (float, long long int)", DBL_MANT_DIG, 0 },
    { test_fmax_44, "fmax", "fmax (float, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fmax_45, "fmax", "fmax (float, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmax_46, "fmax", "fmax (float, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fmax_47, "fmax", "fmax (float, enum e)", DBL_MANT_DIG, 0 },
    { test_fmax_48, "fmax", "fmax (float, _Bool)", DBL_MANT_DIG, 0 },
    { test_fmax_49, "fmax", "fmax (float, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F32
    { test_fmax_50, "fmax", "fmax (_Float32, _Float16)", FLT32_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_fmax_51, "fmax", "fmax (_Float32, float)", FLT32_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_fmax_52, "fmax", "fmax (_Float32, _Float32)", FLT32_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
    { test_fmax_53, "fmax", "fmax (_Float32, _Float32x)", FLT32X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_fmax_54, "fmax", "fmax (_Float32, double)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_fmax_55, "fmax", "fmax (_Float32, long double)", LDBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F64
    { test_fmax_56, "fmax", "fmax (_Float32, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
    { test_fmax_57, "fmax", "fmax (_Float32, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F32
    { test_fmax_58, "fmax", "fmax (_Float32, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_fmax_59, "fmax", "fmax (_Float32, char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_fmax_60, "fmax", "fmax (_Float32, signed char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_fmax_61, "fmax", "fmax (_Float32, unsigned char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_fmax_62, "fmax", "fmax (_Float32, short int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_fmax_63, "fmax", "fmax (_Float32, unsigned short int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_fmax_64, "fmax", "fmax (_Float32, int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_fmax_65, "fmax", "fmax (_Float32, unsigned int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_fmax_66, "fmax", "fmax (_Float32, long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_fmax_67, "fmax", "fmax (_Float32, unsigned long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_fmax_68, "fmax", "fmax (_Float32, long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_fmax_69, "fmax", "fmax (_Float32, unsigned long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_fmax_70, "fmax", "fmax (_Float32, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_fmax_71, "fmax", "fmax (_Float32, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_fmax_72, "fmax", "fmax (_Float32, enum e)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_fmax_73, "fmax", "fmax (_Float32, _Bool)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_fmax_74, "fmax", "fmax (_Float32, bit_field)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
    { test_fmax_75, "fmax", "fmax (_Float32x, _Float16)", FLT32X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmax_76, "fmax", "fmax (_Float32x, float)", FLT32X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
    { test_fmax_77, "fmax", "fmax (_Float32x, _Float32)", FLT32X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmax_78, "fmax", "fmax (_Float32x, _Float32x)", FLT32X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmax_79, "fmax", "fmax (_Float32x, double)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmax_80, "fmax", "fmax (_Float32x, long double)", LDBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X && defined HUGE_VAL_F64
    { test_fmax_81, "fmax", "fmax (_Float32x, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
    { test_fmax_82, "fmax", "fmax (_Float32x, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
    { test_fmax_83, "fmax", "fmax (_Float32x, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmax_84, "fmax", "fmax (_Float32x, char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmax_85, "fmax", "fmax (_Float32x, signed char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmax_86, "fmax", "fmax (_Float32x, unsigned char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmax_87, "fmax", "fmax (_Float32x, short int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmax_88, "fmax", "fmax (_Float32x, unsigned short int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmax_89, "fmax", "fmax (_Float32x, int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmax_90, "fmax", "fmax (_Float32x, unsigned int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmax_91, "fmax", "fmax (_Float32x, long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmax_92, "fmax", "fmax (_Float32x, unsigned long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmax_93, "fmax", "fmax (_Float32x, long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmax_94, "fmax", "fmax (_Float32x, unsigned long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_fmax_95, "fmax", "fmax (_Float32x, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_fmax_96, "fmax", "fmax (_Float32x, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmax_97, "fmax", "fmax (_Float32x, enum e)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmax_98, "fmax", "fmax (_Float32x, _Bool)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmax_99, "fmax", "fmax (_Float32x, bit_field)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_fmax_100, "fmax", "fmax (double, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_fmax_101, "fmax", "fmax (double, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_fmax_102, "fmax", "fmax (double, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmax_103, "fmax", "fmax (double, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_fmax_104, "fmax", "fmax (double, double)", DBL_MANT_DIG, 0 },
    { test_fmax_105, "fmax", "fmax (double, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_fmax_106, "fmax", "fmax (double, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fmax_107, "fmax", "fmax (double, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fmax_108, "fmax", "fmax (double, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_fmax_109, "fmax", "fmax (double, char)", DBL_MANT_DIG, 0 },
    { test_fmax_110, "fmax", "fmax (double, signed char)", DBL_MANT_DIG, 0 },
    { test_fmax_111, "fmax", "fmax (double, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fmax_112, "fmax", "fmax (double, short int)", DBL_MANT_DIG, 0 },
    { test_fmax_113, "fmax", "fmax (double, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fmax_114, "fmax", "fmax (double, int)", DBL_MANT_DIG, 0 },
    { test_fmax_115, "fmax", "fmax (double, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fmax_116, "fmax", "fmax (double, long int)", DBL_MANT_DIG, 0 },
    { test_fmax_117, "fmax", "fmax (double, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fmax_118, "fmax", "fmax (double, long long int)", DBL_MANT_DIG, 0 },
    { test_fmax_119, "fmax", "fmax (double, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fmax_120, "fmax", "fmax (double, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmax_121, "fmax", "fmax (double, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fmax_122, "fmax", "fmax (double, enum e)", DBL_MANT_DIG, 0 },
    { test_fmax_123, "fmax", "fmax (double, _Bool)", DBL_MANT_DIG, 0 },
    { test_fmax_124, "fmax", "fmax (double, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_fmax_125, "fmax", "fmax (long double, _Float16)", LDBL_MANT_DIG, 0 },
#endif
    { test_fmax_126, "fmax", "fmax (long double, float)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_fmax_127, "fmax", "fmax (long double, _Float32)", LDBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmax_128, "fmax", "fmax (long double, _Float32x)", LDBL_MANT_DIG, 0 },
#endif
    { test_fmax_129, "fmax", "fmax (long double, double)", LDBL_MANT_DIG, 0 },
    { test_fmax_130, "fmax", "fmax (long double, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_fmax_131, "fmax", "fmax (long double, _Float64)", LDBL_MANT_DIG, 0 },
#endif
#if (LDBL_MANT_DIG != 106) && defined HUGE_VAL_F64X
    { test_fmax_132, "fmax", "fmax (long double, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (LDBL_MANT_DIG != 106) && defined HUGE_VAL_F128
    { test_fmax_133, "fmax", "fmax (long double, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_fmax_134, "fmax", "fmax (long double, char)", LDBL_MANT_DIG, 0 },
    { test_fmax_135, "fmax", "fmax (long double, signed char)", LDBL_MANT_DIG, 0 },
    { test_fmax_136, "fmax", "fmax (long double, unsigned char)", LDBL_MANT_DIG, 0 },
    { test_fmax_137, "fmax", "fmax (long double, short int)", LDBL_MANT_DIG, 0 },
    { test_fmax_138, "fmax", "fmax (long double, unsigned short int)", LDBL_MANT_DIG, 0 },
    { test_fmax_139, "fmax", "fmax (long double, int)", LDBL_MANT_DIG, 0 },
    { test_fmax_140, "fmax", "fmax (long double, unsigned int)", LDBL_MANT_DIG, 0 },
    { test_fmax_141, "fmax", "fmax (long double, long int)", LDBL_MANT_DIG, 0 },
    { test_fmax_142, "fmax", "fmax (long double, unsigned long int)", LDBL_MANT_DIG, 0 },
    { test_fmax_143, "fmax", "fmax (long double, long long int)", LDBL_MANT_DIG, 0 },
    { test_fmax_144, "fmax", "fmax (long double, unsigned long long int)", LDBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fmax_145, "fmax", "fmax (long double, __int128)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmax_146, "fmax", "fmax (long double, unsigned __int128)", LDBL_MANT_DIG, 0 },
#endif
    { test_fmax_147, "fmax", "fmax (long double, enum e)", LDBL_MANT_DIG, 0 },
    { test_fmax_148, "fmax", "fmax (long double, _Bool)", LDBL_MANT_DIG, 0 },
    { test_fmax_149, "fmax", "fmax (long double, bit_field)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F64
    { test_fmax_150, "fmax", "fmax (_Float64, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_fmax_151, "fmax", "fmax (_Float64, float)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F64
    { test_fmax_152, "fmax", "fmax (_Float64, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X && defined HUGE_VAL_F64
    { test_fmax_153, "fmax", "fmax (_Float64, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_fmax_154, "fmax", "fmax (_Float64, double)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_fmax_155, "fmax", "fmax (_Float64, long double)", LDBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_fmax_156, "fmax", "fmax (_Float64, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
    { test_fmax_157, "fmax", "fmax (_Float64, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F64
    { test_fmax_158, "fmax", "fmax (_Float64, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_fmax_159, "fmax", "fmax (_Float64, char)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_fmax_160, "fmax", "fmax (_Float64, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_fmax_161, "fmax", "fmax (_Float64, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_fmax_162, "fmax", "fmax (_Float64, short int)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_fmax_163, "fmax", "fmax (_Float64, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_fmax_164, "fmax", "fmax (_Float64, int)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_fmax_165, "fmax", "fmax (_Float64, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_fmax_166, "fmax", "fmax (_Float64, long int)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_fmax_167, "fmax", "fmax (_Float64, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_fmax_168, "fmax", "fmax (_Float64, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_fmax_169, "fmax", "fmax (_Float64, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_fmax_170, "fmax", "fmax (_Float64, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_fmax_171, "fmax", "fmax (_Float64, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_fmax_172, "fmax", "fmax (_Float64, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_fmax_173, "fmax", "fmax (_Float64, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_fmax_174, "fmax", "fmax (_Float64, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
    { test_fmax_175, "fmax", "fmax (_Float64x, _Float16)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fmax_176, "fmax", "fmax (_Float64x, float)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
    { test_fmax_177, "fmax", "fmax (_Float64x, _Float32)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
    { test_fmax_178, "fmax", "fmax (_Float64x, _Float32x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fmax_179, "fmax", "fmax (_Float64x, double)", FLT64X_MANT_DIG, 0 },
#endif
#if (LDBL_MANT_DIG != 106) && defined HUGE_VAL_F64X
    { test_fmax_180, "fmax", "fmax (_Float64x, long double)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
    { test_fmax_181, "fmax", "fmax (_Float64x, _Float64)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fmax_182, "fmax", "fmax (_Float64x, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
    { test_fmax_183, "fmax", "fmax (_Float64x, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fmax_184, "fmax", "fmax (_Float64x, char)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fmax_185, "fmax", "fmax (_Float64x, signed char)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fmax_186, "fmax", "fmax (_Float64x, unsigned char)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fmax_187, "fmax", "fmax (_Float64x, short int)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fmax_188, "fmax", "fmax (_Float64x, unsigned short int)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fmax_189, "fmax", "fmax (_Float64x, int)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fmax_190, "fmax", "fmax (_Float64x, unsigned int)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fmax_191, "fmax", "fmax (_Float64x, long int)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fmax_192, "fmax", "fmax (_Float64x, unsigned long int)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fmax_193, "fmax", "fmax (_Float64x, long long int)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fmax_194, "fmax", "fmax (_Float64x, unsigned long long int)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_fmax_195, "fmax", "fmax (_Float64x, __int128)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_fmax_196, "fmax", "fmax (_Float64x, unsigned __int128)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fmax_197, "fmax", "fmax (_Float64x, enum e)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fmax_198, "fmax", "fmax (_Float64x, _Bool)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fmax_199, "fmax", "fmax (_Float64x, bit_field)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F16
    { test_fmax_200, "fmax", "fmax (_Float128, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fmax_201, "fmax", "fmax (_Float128, float)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F32
    { test_fmax_202, "fmax", "fmax (_Float128, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
    { test_fmax_203, "fmax", "fmax (_Float128, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fmax_204, "fmax", "fmax (_Float128, double)", FLT128_MANT_DIG, 0 },
#endif
#if (LDBL_MANT_DIG != 106) && defined HUGE_VAL_F128
    { test_fmax_205, "fmax", "fmax (_Float128, long double)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F64
    { test_fmax_206, "fmax", "fmax (_Float128, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
    { test_fmax_207, "fmax", "fmax (_Float128, _Float64x)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fmax_208, "fmax", "fmax (_Float128, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fmax_209, "fmax", "fmax (_Float128, char)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fmax_210, "fmax", "fmax (_Float128, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fmax_211, "fmax", "fmax (_Float128, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fmax_212, "fmax", "fmax (_Float128, short int)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fmax_213, "fmax", "fmax (_Float128, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fmax_214, "fmax", "fmax (_Float128, int)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fmax_215, "fmax", "fmax (_Float128, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fmax_216, "fmax", "fmax (_Float128, long int)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fmax_217, "fmax", "fmax (_Float128, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fmax_218, "fmax", "fmax (_Float128, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fmax_219, "fmax", "fmax (_Float128, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_fmax_220, "fmax", "fmax (_Float128, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_fmax_221, "fmax", "fmax (_Float128, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fmax_222, "fmax", "fmax (_Float128, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fmax_223, "fmax", "fmax (_Float128, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fmax_224, "fmax", "fmax (_Float128, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_fmax_225, "fmax", "fmax (char, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_fmax_226, "fmax", "fmax (char, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_fmax_227, "fmax", "fmax (char, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmax_228, "fmax", "fmax (char, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_fmax_229, "fmax", "fmax (char, double)", DBL_MANT_DIG, 0 },
    { test_fmax_230, "fmax", "fmax (char, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_fmax_231, "fmax", "fmax (char, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fmax_232, "fmax", "fmax (char, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fmax_233, "fmax", "fmax (char, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_fmax_234, "fmax", "fmax (char, char)", DBL_MANT_DIG, 0 },
    { test_fmax_235, "fmax", "fmax (char, signed char)", DBL_MANT_DIG, 0 },
    { test_fmax_236, "fmax", "fmax (char, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fmax_237, "fmax", "fmax (char, short int)", DBL_MANT_DIG, 0 },
    { test_fmax_238, "fmax", "fmax (char, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fmax_239, "fmax", "fmax (char, int)", DBL_MANT_DIG, 0 },
    { test_fmax_240, "fmax", "fmax (char, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fmax_241, "fmax", "fmax (char, long int)", DBL_MANT_DIG, 0 },
    { test_fmax_242, "fmax", "fmax (char, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fmax_243, "fmax", "fmax (char, long long int)", DBL_MANT_DIG, 0 },
    { test_fmax_244, "fmax", "fmax (char, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fmax_245, "fmax", "fmax (char, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmax_246, "fmax", "fmax (char, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fmax_247, "fmax", "fmax (char, enum e)", DBL_MANT_DIG, 0 },
    { test_fmax_248, "fmax", "fmax (char, _Bool)", DBL_MANT_DIG, 0 },
    { test_fmax_249, "fmax", "fmax (char, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_fmax_250, "fmax", "fmax (signed char, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_fmax_251, "fmax", "fmax (signed char, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_fmax_252, "fmax", "fmax (signed char, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmax_253, "fmax", "fmax (signed char, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_fmax_254, "fmax", "fmax (signed char, double)", DBL_MANT_DIG, 0 },
    { test_fmax_255, "fmax", "fmax (signed char, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_fmax_256, "fmax", "fmax (signed char, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fmax_257, "fmax", "fmax (signed char, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fmax_258, "fmax", "fmax (signed char, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_fmax_259, "fmax", "fmax (signed char, char)", DBL_MANT_DIG, 0 },
    { test_fmax_260, "fmax", "fmax (signed char, signed char)", DBL_MANT_DIG, 0 },
    { test_fmax_261, "fmax", "fmax (signed char, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fmax_262, "fmax", "fmax (signed char, short int)", DBL_MANT_DIG, 0 },
    { test_fmax_263, "fmax", "fmax (signed char, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fmax_264, "fmax", "fmax (signed char, int)", DBL_MANT_DIG, 0 },
    { test_fmax_265, "fmax", "fmax (signed char, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fmax_266, "fmax", "fmax (signed char, long int)", DBL_MANT_DIG, 0 },
    { test_fmax_267, "fmax", "fmax (signed char, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fmax_268, "fmax", "fmax (signed char, long long int)", DBL_MANT_DIG, 0 },
    { test_fmax_269, "fmax", "fmax (signed char, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fmax_270, "fmax", "fmax (signed char, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmax_271, "fmax", "fmax (signed char, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fmax_272, "fmax", "fmax (signed char, enum e)", DBL_MANT_DIG, 0 },
    { test_fmax_273, "fmax", "fmax (signed char, _Bool)", DBL_MANT_DIG, 0 },
    { test_fmax_274, "fmax", "fmax (signed char, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_fmax_275, "fmax", "fmax (unsigned char, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_fmax_276, "fmax", "fmax (unsigned char, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_fmax_277, "fmax", "fmax (unsigned char, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmax_278, "fmax", "fmax (unsigned char, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_fmax_279, "fmax", "fmax (unsigned char, double)", DBL_MANT_DIG, 0 },
    { test_fmax_280, "fmax", "fmax (unsigned char, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_fmax_281, "fmax", "fmax (unsigned char, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fmax_282, "fmax", "fmax (unsigned char, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fmax_283, "fmax", "fmax (unsigned char, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_fmax_284, "fmax", "fmax (unsigned char, char)", DBL_MANT_DIG, 0 },
    { test_fmax_285, "fmax", "fmax (unsigned char, signed char)", DBL_MANT_DIG, 0 },
    { test_fmax_286, "fmax", "fmax (unsigned char, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fmax_287, "fmax", "fmax (unsigned char, short int)", DBL_MANT_DIG, 0 },
    { test_fmax_288, "fmax", "fmax (unsigned char, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fmax_289, "fmax", "fmax (unsigned char, int)", DBL_MANT_DIG, 0 },
    { test_fmax_290, "fmax", "fmax (unsigned char, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fmax_291, "fmax", "fmax (unsigned char, long int)", DBL_MANT_DIG, 0 },
    { test_fmax_292, "fmax", "fmax (unsigned char, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fmax_293, "fmax", "fmax (unsigned char, long long int)", DBL_MANT_DIG, 0 },
    { test_fmax_294, "fmax", "fmax (unsigned char, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fmax_295, "fmax", "fmax (unsigned char, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmax_296, "fmax", "fmax (unsigned char, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fmax_297, "fmax", "fmax (unsigned char, enum e)", DBL_MANT_DIG, 0 },
    { test_fmax_298, "fmax", "fmax (unsigned char, _Bool)", DBL_MANT_DIG, 0 },
    { test_fmax_299, "fmax", "fmax (unsigned char, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_fmax_300, "fmax", "fmax (short int, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_fmax_301, "fmax", "fmax (short int, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_fmax_302, "fmax", "fmax (short int, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmax_303, "fmax", "fmax (short int, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_fmax_304, "fmax", "fmax (short int, double)", DBL_MANT_DIG, 0 },
    { test_fmax_305, "fmax", "fmax (short int, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_fmax_306, "fmax", "fmax (short int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fmax_307, "fmax", "fmax (short int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fmax_308, "fmax", "fmax (short int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_fmax_309, "fmax", "fmax (short int, char)", DBL_MANT_DIG, 0 },
    { test_fmax_310, "fmax", "fmax (short int, signed char)", DBL_MANT_DIG, 0 },
    { test_fmax_311, "fmax", "fmax (short int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fmax_312, "fmax", "fmax (short int, short int)", DBL_MANT_DIG, 0 },
    { test_fmax_313, "fmax", "fmax (short int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fmax_314, "fmax", "fmax (short int, int)", DBL_MANT_DIG, 0 },
    { test_fmax_315, "fmax", "fmax (short int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fmax_316, "fmax", "fmax (short int, long int)", DBL_MANT_DIG, 0 },
    { test_fmax_317, "fmax", "fmax (short int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fmax_318, "fmax", "fmax (short int, long long int)", DBL_MANT_DIG, 0 },
    { test_fmax_319, "fmax", "fmax (short int, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fmax_320, "fmax", "fmax (short int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmax_321, "fmax", "fmax (short int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fmax_322, "fmax", "fmax (short int, enum e)", DBL_MANT_DIG, 0 },
    { test_fmax_323, "fmax", "fmax (short int, _Bool)", DBL_MANT_DIG, 0 },
    { test_fmax_324, "fmax", "fmax (short int, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_fmax_325, "fmax", "fmax (unsigned short int, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_fmax_326, "fmax", "fmax (unsigned short int, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_fmax_327, "fmax", "fmax (unsigned short int, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmax_328, "fmax", "fmax (unsigned short int, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_fmax_329, "fmax", "fmax (unsigned short int, double)", DBL_MANT_DIG, 0 },
    { test_fmax_330, "fmax", "fmax (unsigned short int, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_fmax_331, "fmax", "fmax (unsigned short int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fmax_332, "fmax", "fmax (unsigned short int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fmax_333, "fmax", "fmax (unsigned short int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_fmax_334, "fmax", "fmax (unsigned short int, char)", DBL_MANT_DIG, 0 },
    { test_fmax_335, "fmax", "fmax (unsigned short int, signed char)", DBL_MANT_DIG, 0 },
    { test_fmax_336, "fmax", "fmax (unsigned short int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fmax_337, "fmax", "fmax (unsigned short int, short int)", DBL_MANT_DIG, 0 },
    { test_fmax_338, "fmax", "fmax (unsigned short int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fmax_339, "fmax", "fmax (unsigned short int, int)", DBL_MANT_DIG, 0 },
    { test_fmax_340, "fmax", "fmax (unsigned short int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fmax_341, "fmax", "fmax (unsigned short int, long int)", DBL_MANT_DIG, 0 },
    { test_fmax_342, "fmax", "fmax (unsigned short int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fmax_343, "fmax", "fmax (unsigned short int, long long int)", DBL_MANT_DIG, 0 },
    { test_fmax_344, "fmax", "fmax (unsigned short int, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fmax_345, "fmax", "fmax (unsigned short int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmax_346, "fmax", "fmax (unsigned short int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fmax_347, "fmax", "fmax (unsigned short int, enum e)", DBL_MANT_DIG, 0 },
    { test_fmax_348, "fmax", "fmax (unsigned short int, _Bool)", DBL_MANT_DIG, 0 },
    { test_fmax_349, "fmax", "fmax (unsigned short int, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_fmax_350, "fmax", "fmax (int, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_fmax_351, "fmax", "fmax (int, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_fmax_352, "fmax", "fmax (int, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmax_353, "fmax", "fmax (int, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_fmax_354, "fmax", "fmax (int, double)", DBL_MANT_DIG, 0 },
    { test_fmax_355, "fmax", "fmax (int, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_fmax_356, "fmax", "fmax (int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fmax_357, "fmax", "fmax (int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fmax_358, "fmax", "fmax (int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_fmax_359, "fmax", "fmax (int, char)", DBL_MANT_DIG, 0 },
    { test_fmax_360, "fmax", "fmax (int, signed char)", DBL_MANT_DIG, 0 },
    { test_fmax_361, "fmax", "fmax (int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fmax_362, "fmax", "fmax (int, short int)", DBL_MANT_DIG, 0 },
    { test_fmax_363, "fmax", "fmax (int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fmax_364, "fmax", "fmax (int, int)", DBL_MANT_DIG, 0 },
    { test_fmax_365, "fmax", "fmax (int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fmax_366, "fmax", "fmax (int, long int)", DBL_MANT_DIG, 0 },
    { test_fmax_367, "fmax", "fmax (int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fmax_368, "fmax", "fmax (int, long long int)", DBL_MANT_DIG, 0 },
    { test_fmax_369, "fmax", "fmax (int, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fmax_370, "fmax", "fmax (int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmax_371, "fmax", "fmax (int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fmax_372, "fmax", "fmax (int, enum e)", DBL_MANT_DIG, 0 },
    { test_fmax_373, "fmax", "fmax (int, _Bool)", DBL_MANT_DIG, 0 },
    { test_fmax_374, "fmax", "fmax (int, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_fmax_375, "fmax", "fmax (unsigned int, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_fmax_376, "fmax", "fmax (unsigned int, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_fmax_377, "fmax", "fmax (unsigned int, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmax_378, "fmax", "fmax (unsigned int, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_fmax_379, "fmax", "fmax (unsigned int, double)", DBL_MANT_DIG, 0 },
    { test_fmax_380, "fmax", "fmax (unsigned int, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_fmax_381, "fmax", "fmax (unsigned int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fmax_382, "fmax", "fmax (unsigned int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fmax_383, "fmax", "fmax (unsigned int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_fmax_384, "fmax", "fmax (unsigned int, char)", DBL_MANT_DIG, 0 },
    { test_fmax_385, "fmax", "fmax (unsigned int, signed char)", DBL_MANT_DIG, 0 },
    { test_fmax_386, "fmax", "fmax (unsigned int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fmax_387, "fmax", "fmax (unsigned int, short int)", DBL_MANT_DIG, 0 },
    { test_fmax_388, "fmax", "fmax (unsigned int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fmax_389, "fmax", "fmax (unsigned int, int)", DBL_MANT_DIG, 0 },
    { test_fmax_390, "fmax", "fmax (unsigned int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fmax_391, "fmax", "fmax (unsigned int, long int)", DBL_MANT_DIG, 0 },
    { test_fmax_392, "fmax", "fmax (unsigned int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fmax_393, "fmax", "fmax (unsigned int, long long int)", DBL_MANT_DIG, 0 },
    { test_fmax_394, "fmax", "fmax (unsigned int, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fmax_395, "fmax", "fmax (unsigned int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmax_396, "fmax", "fmax (unsigned int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fmax_397, "fmax", "fmax (unsigned int, enum e)", DBL_MANT_DIG, 0 },
    { test_fmax_398, "fmax", "fmax (unsigned int, _Bool)", DBL_MANT_DIG, 0 },
    { test_fmax_399, "fmax", "fmax (unsigned int, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_fmax_400, "fmax", "fmax (long int, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_fmax_401, "fmax", "fmax (long int, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_fmax_402, "fmax", "fmax (long int, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmax_403, "fmax", "fmax (long int, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_fmax_404, "fmax", "fmax (long int, double)", DBL_MANT_DIG, 0 },
    { test_fmax_405, "fmax", "fmax (long int, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_fmax_406, "fmax", "fmax (long int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fmax_407, "fmax", "fmax (long int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fmax_408, "fmax", "fmax (long int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_fmax_409, "fmax", "fmax (long int, char)", DBL_MANT_DIG, 0 },
    { test_fmax_410, "fmax", "fmax (long int, signed char)", DBL_MANT_DIG, 0 },
    { test_fmax_411, "fmax", "fmax (long int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fmax_412, "fmax", "fmax (long int, short int)", DBL_MANT_DIG, 0 },
    { test_fmax_413, "fmax", "fmax (long int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fmax_414, "fmax", "fmax (long int, int)", DBL_MANT_DIG, 0 },
    { test_fmax_415, "fmax", "fmax (long int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fmax_416, "fmax", "fmax (long int, long int)", DBL_MANT_DIG, 0 },
    { test_fmax_417, "fmax", "fmax (long int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fmax_418, "fmax", "fmax (long int, long long int)", DBL_MANT_DIG, 0 },
    { test_fmax_419, "fmax", "fmax (long int, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fmax_420, "fmax", "fmax (long int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmax_421, "fmax", "fmax (long int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fmax_422, "fmax", "fmax (long int, enum e)", DBL_MANT_DIG, 0 },
    { test_fmax_423, "fmax", "fmax (long int, _Bool)", DBL_MANT_DIG, 0 },
    { test_fmax_424, "fmax", "fmax (long int, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_fmax_425, "fmax", "fmax (unsigned long int, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_fmax_426, "fmax", "fmax (unsigned long int, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_fmax_427, "fmax", "fmax (unsigned long int, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmax_428, "fmax", "fmax (unsigned long int, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_fmax_429, "fmax", "fmax (unsigned long int, double)", DBL_MANT_DIG, 0 },
    { test_fmax_430, "fmax", "fmax (unsigned long int, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_fmax_431, "fmax", "fmax (unsigned long int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fmax_432, "fmax", "fmax (unsigned long int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fmax_433, "fmax", "fmax (unsigned long int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_fmax_434, "fmax", "fmax (unsigned long int, char)", DBL_MANT_DIG, 0 },
    { test_fmax_435, "fmax", "fmax (unsigned long int, signed char)", DBL_MANT_DIG, 0 },
    { test_fmax_436, "fmax", "fmax (unsigned long int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fmax_437, "fmax", "fmax (unsigned long int, short int)", DBL_MANT_DIG, 0 },
    { test_fmax_438, "fmax", "fmax (unsigned long int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fmax_439, "fmax", "fmax (unsigned long int, int)", DBL_MANT_DIG, 0 },
    { test_fmax_440, "fmax", "fmax (unsigned long int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fmax_441, "fmax", "fmax (unsigned long int, long int)", DBL_MANT_DIG, 0 },
    { test_fmax_442, "fmax", "fmax (unsigned long int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fmax_443, "fmax", "fmax (unsigned long int, long long int)", DBL_MANT_DIG, 0 },
    { test_fmax_444, "fmax", "fmax (unsigned long int, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fmax_445, "fmax", "fmax (unsigned long int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmax_446, "fmax", "fmax (unsigned long int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fmax_447, "fmax", "fmax (unsigned long int, enum e)", DBL_MANT_DIG, 0 },
    { test_fmax_448, "fmax", "fmax (unsigned long int, _Bool)", DBL_MANT_DIG, 0 },
    { test_fmax_449, "fmax", "fmax (unsigned long int, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_fmax_450, "fmax", "fmax (long long int, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_fmax_451, "fmax", "fmax (long long int, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_fmax_452, "fmax", "fmax (long long int, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmax_453, "fmax", "fmax (long long int, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_fmax_454, "fmax", "fmax (long long int, double)", DBL_MANT_DIG, 0 },
    { test_fmax_455, "fmax", "fmax (long long int, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_fmax_456, "fmax", "fmax (long long int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fmax_457, "fmax", "fmax (long long int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fmax_458, "fmax", "fmax (long long int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_fmax_459, "fmax", "fmax (long long int, char)", DBL_MANT_DIG, 0 },
    { test_fmax_460, "fmax", "fmax (long long int, signed char)", DBL_MANT_DIG, 0 },
    { test_fmax_461, "fmax", "fmax (long long int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fmax_462, "fmax", "fmax (long long int, short int)", DBL_MANT_DIG, 0 },
    { test_fmax_463, "fmax", "fmax (long long int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fmax_464, "fmax", "fmax (long long int, int)", DBL_MANT_DIG, 0 },
    { test_fmax_465, "fmax", "fmax (long long int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fmax_466, "fmax", "fmax (long long int, long int)", DBL_MANT_DIG, 0 },
    { test_fmax_467, "fmax", "fmax (long long int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fmax_468, "fmax", "fmax (long long int, long long int)", DBL_MANT_DIG, 0 },
    { test_fmax_469, "fmax", "fmax (long long int, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fmax_470, "fmax", "fmax (long long int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmax_471, "fmax", "fmax (long long int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fmax_472, "fmax", "fmax (long long int, enum e)", DBL_MANT_DIG, 0 },
    { test_fmax_473, "fmax", "fmax (long long int, _Bool)", DBL_MANT_DIG, 0 },
    { test_fmax_474, "fmax", "fmax (long long int, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_fmax_475, "fmax", "fmax (unsigned long long int, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_fmax_476, "fmax", "fmax (unsigned long long int, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_fmax_477, "fmax", "fmax (unsigned long long int, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmax_478, "fmax", "fmax (unsigned long long int, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_fmax_479, "fmax", "fmax (unsigned long long int, double)", DBL_MANT_DIG, 0 },
    { test_fmax_480, "fmax", "fmax (unsigned long long int, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_fmax_481, "fmax", "fmax (unsigned long long int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fmax_482, "fmax", "fmax (unsigned long long int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fmax_483, "fmax", "fmax (unsigned long long int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_fmax_484, "fmax", "fmax (unsigned long long int, char)", DBL_MANT_DIG, 0 },
    { test_fmax_485, "fmax", "fmax (unsigned long long int, signed char)", DBL_MANT_DIG, 0 },
    { test_fmax_486, "fmax", "fmax (unsigned long long int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fmax_487, "fmax", "fmax (unsigned long long int, short int)", DBL_MANT_DIG, 0 },
    { test_fmax_488, "fmax", "fmax (unsigned long long int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fmax_489, "fmax", "fmax (unsigned long long int, int)", DBL_MANT_DIG, 0 },
    { test_fmax_490, "fmax", "fmax (unsigned long long int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fmax_491, "fmax", "fmax (unsigned long long int, long int)", DBL_MANT_DIG, 0 },
    { test_fmax_492, "fmax", "fmax (unsigned long long int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fmax_493, "fmax", "fmax (unsigned long long int, long long int)", DBL_MANT_DIG, 0 },
    { test_fmax_494, "fmax", "fmax (unsigned long long int, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fmax_495, "fmax", "fmax (unsigned long long int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmax_496, "fmax", "fmax (unsigned long long int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fmax_497, "fmax", "fmax (unsigned long long int, enum e)", DBL_MANT_DIG, 0 },
    { test_fmax_498, "fmax", "fmax (unsigned long long int, _Bool)", DBL_MANT_DIG, 0 },
    { test_fmax_499, "fmax", "fmax (unsigned long long int, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_fmax_500, "fmax", "fmax (__int128, _Float16)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmax_501, "fmax", "fmax (__int128, float)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_fmax_502, "fmax", "fmax (__int128, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_fmax_503, "fmax", "fmax (__int128, _Float32x)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmax_504, "fmax", "fmax (__int128, double)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmax_505, "fmax", "fmax (__int128, long double)", LDBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_fmax_506, "fmax", "fmax (__int128, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_fmax_507, "fmax", "fmax (__int128, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_fmax_508, "fmax", "fmax (__int128, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmax_509, "fmax", "fmax (__int128, char)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmax_510, "fmax", "fmax (__int128, signed char)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmax_511, "fmax", "fmax (__int128, unsigned char)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmax_512, "fmax", "fmax (__int128, short int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmax_513, "fmax", "fmax (__int128, unsigned short int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmax_514, "fmax", "fmax (__int128, int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmax_515, "fmax", "fmax (__int128, unsigned int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmax_516, "fmax", "fmax (__int128, long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmax_517, "fmax", "fmax (__int128, unsigned long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmax_518, "fmax", "fmax (__int128, long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmax_519, "fmax", "fmax (__int128, unsigned long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmax_520, "fmax", "fmax (__int128, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmax_521, "fmax", "fmax (__int128, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmax_522, "fmax", "fmax (__int128, enum e)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmax_523, "fmax", "fmax (__int128, _Bool)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmax_524, "fmax", "fmax (__int128, bit_field)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_fmax_525, "fmax", "fmax (unsigned __int128, _Float16)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmax_526, "fmax", "fmax (unsigned __int128, float)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_fmax_527, "fmax", "fmax (unsigned __int128, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_fmax_528, "fmax", "fmax (unsigned __int128, _Float32x)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmax_529, "fmax", "fmax (unsigned __int128, double)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmax_530, "fmax", "fmax (unsigned __int128, long double)", LDBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_fmax_531, "fmax", "fmax (unsigned __int128, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_fmax_532, "fmax", "fmax (unsigned __int128, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_fmax_533, "fmax", "fmax (unsigned __int128, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmax_534, "fmax", "fmax (unsigned __int128, char)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmax_535, "fmax", "fmax (unsigned __int128, signed char)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmax_536, "fmax", "fmax (unsigned __int128, unsigned char)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmax_537, "fmax", "fmax (unsigned __int128, short int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmax_538, "fmax", "fmax (unsigned __int128, unsigned short int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmax_539, "fmax", "fmax (unsigned __int128, int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmax_540, "fmax", "fmax (unsigned __int128, unsigned int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmax_541, "fmax", "fmax (unsigned __int128, long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmax_542, "fmax", "fmax (unsigned __int128, unsigned long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmax_543, "fmax", "fmax (unsigned __int128, long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmax_544, "fmax", "fmax (unsigned __int128, unsigned long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmax_545, "fmax", "fmax (unsigned __int128, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmax_546, "fmax", "fmax (unsigned __int128, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmax_547, "fmax", "fmax (unsigned __int128, enum e)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmax_548, "fmax", "fmax (unsigned __int128, _Bool)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmax_549, "fmax", "fmax (unsigned __int128, bit_field)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_fmax_550, "fmax", "fmax (enum e, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_fmax_551, "fmax", "fmax (enum e, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_fmax_552, "fmax", "fmax (enum e, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmax_553, "fmax", "fmax (enum e, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_fmax_554, "fmax", "fmax (enum e, double)", DBL_MANT_DIG, 0 },
    { test_fmax_555, "fmax", "fmax (enum e, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_fmax_556, "fmax", "fmax (enum e, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fmax_557, "fmax", "fmax (enum e, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fmax_558, "fmax", "fmax (enum e, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_fmax_559, "fmax", "fmax (enum e, char)", DBL_MANT_DIG, 0 },
    { test_fmax_560, "fmax", "fmax (enum e, signed char)", DBL_MANT_DIG, 0 },
    { test_fmax_561, "fmax", "fmax (enum e, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fmax_562, "fmax", "fmax (enum e, short int)", DBL_MANT_DIG, 0 },
    { test_fmax_563, "fmax", "fmax (enum e, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fmax_564, "fmax", "fmax (enum e, int)", DBL_MANT_DIG, 0 },
    { test_fmax_565, "fmax", "fmax (enum e, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fmax_566, "fmax", "fmax (enum e, long int)", DBL_MANT_DIG, 0 },
    { test_fmax_567, "fmax", "fmax (enum e, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fmax_568, "fmax", "fmax (enum e, long long int)", DBL_MANT_DIG, 0 },
    { test_fmax_569, "fmax", "fmax (enum e, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fmax_570, "fmax", "fmax (enum e, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmax_571, "fmax", "fmax (enum e, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fmax_572, "fmax", "fmax (enum e, enum e)", DBL_MANT_DIG, 0 },
    { test_fmax_573, "fmax", "fmax (enum e, _Bool)", DBL_MANT_DIG, 0 },
    { test_fmax_574, "fmax", "fmax (enum e, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_fmax_575, "fmax", "fmax (_Bool, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_fmax_576, "fmax", "fmax (_Bool, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_fmax_577, "fmax", "fmax (_Bool, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmax_578, "fmax", "fmax (_Bool, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_fmax_579, "fmax", "fmax (_Bool, double)", DBL_MANT_DIG, 0 },
    { test_fmax_580, "fmax", "fmax (_Bool, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_fmax_581, "fmax", "fmax (_Bool, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fmax_582, "fmax", "fmax (_Bool, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fmax_583, "fmax", "fmax (_Bool, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_fmax_584, "fmax", "fmax (_Bool, char)", DBL_MANT_DIG, 0 },
    { test_fmax_585, "fmax", "fmax (_Bool, signed char)", DBL_MANT_DIG, 0 },
    { test_fmax_586, "fmax", "fmax (_Bool, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fmax_587, "fmax", "fmax (_Bool, short int)", DBL_MANT_DIG, 0 },
    { test_fmax_588, "fmax", "fmax (_Bool, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fmax_589, "fmax", "fmax (_Bool, int)", DBL_MANT_DIG, 0 },
    { test_fmax_590, "fmax", "fmax (_Bool, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fmax_591, "fmax", "fmax (_Bool, long int)", DBL_MANT_DIG, 0 },
    { test_fmax_592, "fmax", "fmax (_Bool, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fmax_593, "fmax", "fmax (_Bool, long long int)", DBL_MANT_DIG, 0 },
    { test_fmax_594, "fmax", "fmax (_Bool, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fmax_595, "fmax", "fmax (_Bool, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmax_596, "fmax", "fmax (_Bool, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fmax_597, "fmax", "fmax (_Bool, enum e)", DBL_MANT_DIG, 0 },
    { test_fmax_598, "fmax", "fmax (_Bool, _Bool)", DBL_MANT_DIG, 0 },
    { test_fmax_599, "fmax", "fmax (_Bool, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_fmax_600, "fmax", "fmax (bit_field, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_fmax_601, "fmax", "fmax (bit_field, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_fmax_602, "fmax", "fmax (bit_field, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmax_603, "fmax", "fmax (bit_field, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_fmax_604, "fmax", "fmax (bit_field, double)", DBL_MANT_DIG, 0 },
    { test_fmax_605, "fmax", "fmax (bit_field, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_fmax_606, "fmax", "fmax (bit_field, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fmax_607, "fmax", "fmax (bit_field, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fmax_608, "fmax", "fmax (bit_field, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_fmax_609, "fmax", "fmax (bit_field, char)", DBL_MANT_DIG, 0 },
    { test_fmax_610, "fmax", "fmax (bit_field, signed char)", DBL_MANT_DIG, 0 },
    { test_fmax_611, "fmax", "fmax (bit_field, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fmax_612, "fmax", "fmax (bit_field, short int)", DBL_MANT_DIG, 0 },
    { test_fmax_613, "fmax", "fmax (bit_field, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fmax_614, "fmax", "fmax (bit_field, int)", DBL_MANT_DIG, 0 },
    { test_fmax_615, "fmax", "fmax (bit_field, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fmax_616, "fmax", "fmax (bit_field, long int)", DBL_MANT_DIG, 0 },
    { test_fmax_617, "fmax", "fmax (bit_field, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fmax_618, "fmax", "fmax (bit_field, long long int)", DBL_MANT_DIG, 0 },
    { test_fmax_619, "fmax", "fmax (bit_field, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fmax_620, "fmax", "fmax (bit_field, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmax_621, "fmax", "fmax (bit_field, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fmax_622, "fmax", "fmax (bit_field, enum e)", DBL_MANT_DIG, 0 },
    { test_fmax_623, "fmax", "fmax (bit_field, _Bool)", DBL_MANT_DIG, 0 },
    { test_fmax_624, "fmax", "fmax (bit_field, bit_field)", DBL_MANT_DIG, 0 },
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
