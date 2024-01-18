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
(fdimf16) (_Float16 arg0 __attribute__ ((unused)), _Float16 arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT16_MANT_DIG;
  called_func_name = "fdim";
  return 0;
}
#endif
float
(fdimf) (float arg0 __attribute__ ((unused)), float arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT_MANT_DIG;
  called_func_name = "fdim";
  return 0;
}
#if defined HUGE_VAL_F32
_Float32
(fdimf32) (_Float32 arg0 __attribute__ ((unused)), _Float32 arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT32_MANT_DIG;
  called_func_name = "fdim";
  return 0;
}
#endif
#if defined HUGE_VAL_F32X
_Float32x
(fdimf32x) (_Float32x arg0 __attribute__ ((unused)), _Float32x arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT32X_MANT_DIG;
  called_func_name = "fdim";
  return 0;
}
#endif
double
(fdim) (double arg0 __attribute__ ((unused)), double arg1 __attribute__ ((unused)))
{
  called_mant_dig = DBL_MANT_DIG;
  called_func_name = "fdim";
  return 0;
}
long double
(fdiml) (long double arg0 __attribute__ ((unused)), long double arg1 __attribute__ ((unused)))
{
  called_mant_dig = LDBL_MANT_DIG;
  called_func_name = "fdim";
  return 0;
}
#if defined HUGE_VAL_F64
_Float64
(fdimf64) (_Float64 arg0 __attribute__ ((unused)), _Float64 arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT64_MANT_DIG;
  called_func_name = "fdim";
  return 0;
}
#endif
#if defined HUGE_VAL_F64X
_Float64x
(fdimf64x) (_Float64x arg0 __attribute__ ((unused)), _Float64x arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT64X_MANT_DIG;
  called_func_name = "fdim";
  return 0;
}
#endif
#if defined HUGE_VAL_F128
_Float128
(fdimf128) (_Float128 arg0 __attribute__ ((unused)), _Float128 arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT128_MANT_DIG;
  called_func_name = "fdim";
  return 0;
}
#endif
#if defined HUGE_VAL_F16
static void
test_fdim_0 (void)
{
  extern typeof (fdim (vol_var__Float16, vol_var__Float16)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = fdim (vol_var__Float16, vol_var__Float16);
}
#endif
#if defined HUGE_VAL_F16
static void
test_fdim_1 (void)
{
  extern typeof (fdim (vol_var__Float16, vol_var_float)) var_float __attribute__ ((unused));
  vol_var_float = fdim (vol_var__Float16, vol_var_float);
}
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F32
static void
test_fdim_2 (void)
{
  extern typeof (fdim (vol_var__Float16, vol_var__Float32)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = fdim (vol_var__Float16, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
static void
test_fdim_3 (void)
{
  extern typeof (fdim (vol_var__Float16, vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = fdim (vol_var__Float16, vol_var__Float32x);
}
#endif
#if defined HUGE_VAL_F16
static void
test_fdim_4 (void)
{
  extern typeof (fdim (vol_var__Float16, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var__Float16, vol_var_double);
}
#endif
#if defined HUGE_VAL_F16
static void
test_fdim_5 (void)
{
  extern typeof (fdim (vol_var__Float16, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fdim (vol_var__Float16, vol_var_long_double);
}
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F64
static void
test_fdim_6 (void)
{
  extern typeof (fdim (vol_var__Float16, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fdim (vol_var__Float16, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
static void
test_fdim_7 (void)
{
  extern typeof (fdim (vol_var__Float16, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fdim (vol_var__Float16, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F16
static void
test_fdim_8 (void)
{
  extern typeof (fdim (vol_var__Float16, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fdim (vol_var__Float16, vol_var__Float128);
}
#endif
#if defined HUGE_VAL_F16
static void
test_fdim_9 (void)
{
  extern typeof (fdim (vol_var__Float16, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var__Float16, vol_var_char);
}
#endif
#if defined HUGE_VAL_F16
static void
test_fdim_10 (void)
{
  extern typeof (fdim (vol_var__Float16, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var__Float16, vol_var_signed_char);
}
#endif
#if defined HUGE_VAL_F16
static void
test_fdim_11 (void)
{
  extern typeof (fdim (vol_var__Float16, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var__Float16, vol_var_unsigned_char);
}
#endif
#if defined HUGE_VAL_F16
static void
test_fdim_12 (void)
{
  extern typeof (fdim (vol_var__Float16, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var__Float16, vol_var_short_int);
}
#endif
#if defined HUGE_VAL_F16
static void
test_fdim_13 (void)
{
  extern typeof (fdim (vol_var__Float16, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var__Float16, vol_var_unsigned_short_int);
}
#endif
#if defined HUGE_VAL_F16
static void
test_fdim_14 (void)
{
  extern typeof (fdim (vol_var__Float16, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var__Float16, vol_var_int);
}
#endif
#if defined HUGE_VAL_F16
static void
test_fdim_15 (void)
{
  extern typeof (fdim (vol_var__Float16, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var__Float16, vol_var_unsigned_int);
}
#endif
#if defined HUGE_VAL_F16
static void
test_fdim_16 (void)
{
  extern typeof (fdim (vol_var__Float16, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var__Float16, vol_var_long_int);
}
#endif
#if defined HUGE_VAL_F16
static void
test_fdim_17 (void)
{
  extern typeof (fdim (vol_var__Float16, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var__Float16, vol_var_unsigned_long_int);
}
#endif
#if defined HUGE_VAL_F16
static void
test_fdim_18 (void)
{
  extern typeof (fdim (vol_var__Float16, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var__Float16, vol_var_long_long_int);
}
#endif
#if defined HUGE_VAL_F16
static void
test_fdim_19 (void)
{
  extern typeof (fdim (vol_var__Float16, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var__Float16, vol_var_unsigned_long_long_int);
}
#endif
#if defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_fdim_20 (void)
{
  extern typeof (fdim (vol_var__Float16, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var__Float16, vol_var___int128);
}
#endif
#if defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_fdim_21 (void)
{
  extern typeof (fdim (vol_var__Float16, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var__Float16, vol_var_unsigned___int128);
}
#endif
#if defined HUGE_VAL_F16
static void
test_fdim_22 (void)
{
  extern typeof (fdim (vol_var__Float16, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var__Float16, vol_var_enum_e);
}
#endif
#if defined HUGE_VAL_F16
static void
test_fdim_23 (void)
{
  extern typeof (fdim (vol_var__Float16, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var__Float16, vol_var__Bool);
}
#endif
#if defined HUGE_VAL_F16
static void
test_fdim_24 (void)
{
  extern typeof (fdim (vol_var__Float16, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var__Float16, vol_var_bit_field);
}
#endif
#if defined HUGE_VAL_F16
static void
test_fdim_25 (void)
{
  extern typeof (fdim (vol_var_float, vol_var__Float16)) var_float __attribute__ ((unused));
  vol_var_float = fdim (vol_var_float, vol_var__Float16);
}
#endif
static void
test_fdim_26 (void)
{
  extern typeof (fdim (vol_var_float, vol_var_float)) var_float __attribute__ ((unused));
  vol_var_float = fdim (vol_var_float, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_fdim_27 (void)
{
  extern typeof (fdim (vol_var_float, vol_var__Float32)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = fdim (vol_var_float, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fdim_28 (void)
{
  extern typeof (fdim (vol_var_float, vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = fdim (vol_var_float, vol_var__Float32x);
}
#endif
static void
test_fdim_29 (void)
{
  extern typeof (fdim (vol_var_float, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_float, vol_var_double);
}
static void
test_fdim_30 (void)
{
  extern typeof (fdim (vol_var_float, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fdim (vol_var_float, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_fdim_31 (void)
{
  extern typeof (fdim (vol_var_float, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fdim (vol_var_float, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fdim_32 (void)
{
  extern typeof (fdim (vol_var_float, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fdim (vol_var_float, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fdim_33 (void)
{
  extern typeof (fdim (vol_var_float, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fdim (vol_var_float, vol_var__Float128);
}
#endif
static void
test_fdim_34 (void)
{
  extern typeof (fdim (vol_var_float, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_float, vol_var_char);
}
static void
test_fdim_35 (void)
{
  extern typeof (fdim (vol_var_float, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_float, vol_var_signed_char);
}
static void
test_fdim_36 (void)
{
  extern typeof (fdim (vol_var_float, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_float, vol_var_unsigned_char);
}
static void
test_fdim_37 (void)
{
  extern typeof (fdim (vol_var_float, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_float, vol_var_short_int);
}
static void
test_fdim_38 (void)
{
  extern typeof (fdim (vol_var_float, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_float, vol_var_unsigned_short_int);
}
static void
test_fdim_39 (void)
{
  extern typeof (fdim (vol_var_float, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_float, vol_var_int);
}
static void
test_fdim_40 (void)
{
  extern typeof (fdim (vol_var_float, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_float, vol_var_unsigned_int);
}
static void
test_fdim_41 (void)
{
  extern typeof (fdim (vol_var_float, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_float, vol_var_long_int);
}
static void
test_fdim_42 (void)
{
  extern typeof (fdim (vol_var_float, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_float, vol_var_unsigned_long_int);
}
static void
test_fdim_43 (void)
{
  extern typeof (fdim (vol_var_float, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_float, vol_var_long_long_int);
}
static void
test_fdim_44 (void)
{
  extern typeof (fdim (vol_var_float, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_float, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fdim_45 (void)
{
  extern typeof (fdim (vol_var_float, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_float, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fdim_46 (void)
{
  extern typeof (fdim (vol_var_float, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_float, vol_var_unsigned___int128);
}
#endif
static void
test_fdim_47 (void)
{
  extern typeof (fdim (vol_var_float, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_float, vol_var_enum_e);
}
static void
test_fdim_48 (void)
{
  extern typeof (fdim (vol_var_float, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_float, vol_var__Bool);
}
static void
test_fdim_49 (void)
{
  extern typeof (fdim (vol_var_float, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_float, vol_var_bit_field);
}
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F32
static void
test_fdim_50 (void)
{
  extern typeof (fdim (vol_var__Float32, vol_var__Float16)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = fdim (vol_var__Float32, vol_var__Float16);
}
#endif
#if defined HUGE_VAL_F32
static void
test_fdim_51 (void)
{
  extern typeof (fdim (vol_var__Float32, vol_var_float)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = fdim (vol_var__Float32, vol_var_float);
}
#endif
#if defined HUGE_VAL_F32
static void
test_fdim_52 (void)
{
  extern typeof (fdim (vol_var__Float32, vol_var__Float32)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = fdim (vol_var__Float32, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
static void
test_fdim_53 (void)
{
  extern typeof (fdim (vol_var__Float32, vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = fdim (vol_var__Float32, vol_var__Float32x);
}
#endif
#if defined HUGE_VAL_F32
static void
test_fdim_54 (void)
{
  extern typeof (fdim (vol_var__Float32, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var__Float32, vol_var_double);
}
#endif
#if defined HUGE_VAL_F32
static void
test_fdim_55 (void)
{
  extern typeof (fdim (vol_var__Float32, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fdim (vol_var__Float32, vol_var_long_double);
}
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F64
static void
test_fdim_56 (void)
{
  extern typeof (fdim (vol_var__Float32, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fdim (vol_var__Float32, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
static void
test_fdim_57 (void)
{
  extern typeof (fdim (vol_var__Float32, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fdim (vol_var__Float32, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F32
static void
test_fdim_58 (void)
{
  extern typeof (fdim (vol_var__Float32, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fdim (vol_var__Float32, vol_var__Float128);
}
#endif
#if defined HUGE_VAL_F32
static void
test_fdim_59 (void)
{
  extern typeof (fdim (vol_var__Float32, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var__Float32, vol_var_char);
}
#endif
#if defined HUGE_VAL_F32
static void
test_fdim_60 (void)
{
  extern typeof (fdim (vol_var__Float32, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var__Float32, vol_var_signed_char);
}
#endif
#if defined HUGE_VAL_F32
static void
test_fdim_61 (void)
{
  extern typeof (fdim (vol_var__Float32, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var__Float32, vol_var_unsigned_char);
}
#endif
#if defined HUGE_VAL_F32
static void
test_fdim_62 (void)
{
  extern typeof (fdim (vol_var__Float32, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var__Float32, vol_var_short_int);
}
#endif
#if defined HUGE_VAL_F32
static void
test_fdim_63 (void)
{
  extern typeof (fdim (vol_var__Float32, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var__Float32, vol_var_unsigned_short_int);
}
#endif
#if defined HUGE_VAL_F32
static void
test_fdim_64 (void)
{
  extern typeof (fdim (vol_var__Float32, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var__Float32, vol_var_int);
}
#endif
#if defined HUGE_VAL_F32
static void
test_fdim_65 (void)
{
  extern typeof (fdim (vol_var__Float32, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var__Float32, vol_var_unsigned_int);
}
#endif
#if defined HUGE_VAL_F32
static void
test_fdim_66 (void)
{
  extern typeof (fdim (vol_var__Float32, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var__Float32, vol_var_long_int);
}
#endif
#if defined HUGE_VAL_F32
static void
test_fdim_67 (void)
{
  extern typeof (fdim (vol_var__Float32, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var__Float32, vol_var_unsigned_long_int);
}
#endif
#if defined HUGE_VAL_F32
static void
test_fdim_68 (void)
{
  extern typeof (fdim (vol_var__Float32, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var__Float32, vol_var_long_long_int);
}
#endif
#if defined HUGE_VAL_F32
static void
test_fdim_69 (void)
{
  extern typeof (fdim (vol_var__Float32, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var__Float32, vol_var_unsigned_long_long_int);
}
#endif
#if defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_fdim_70 (void)
{
  extern typeof (fdim (vol_var__Float32, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var__Float32, vol_var___int128);
}
#endif
#if defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_fdim_71 (void)
{
  extern typeof (fdim (vol_var__Float32, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var__Float32, vol_var_unsigned___int128);
}
#endif
#if defined HUGE_VAL_F32
static void
test_fdim_72 (void)
{
  extern typeof (fdim (vol_var__Float32, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var__Float32, vol_var_enum_e);
}
#endif
#if defined HUGE_VAL_F32
static void
test_fdim_73 (void)
{
  extern typeof (fdim (vol_var__Float32, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var__Float32, vol_var__Bool);
}
#endif
#if defined HUGE_VAL_F32
static void
test_fdim_74 (void)
{
  extern typeof (fdim (vol_var__Float32, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var__Float32, vol_var_bit_field);
}
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
static void
test_fdim_75 (void)
{
  extern typeof (fdim (vol_var__Float32x, vol_var__Float16)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = fdim (vol_var__Float32x, vol_var__Float16);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fdim_76 (void)
{
  extern typeof (fdim (vol_var__Float32x, vol_var_float)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = fdim (vol_var__Float32x, vol_var_float);
}
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
static void
test_fdim_77 (void)
{
  extern typeof (fdim (vol_var__Float32x, vol_var__Float32)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = fdim (vol_var__Float32x, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fdim_78 (void)
{
  extern typeof (fdim (vol_var__Float32x, vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = fdim (vol_var__Float32x, vol_var__Float32x);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fdim_79 (void)
{
  extern typeof (fdim (vol_var__Float32x, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var__Float32x, vol_var_double);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fdim_80 (void)
{
  extern typeof (fdim (vol_var__Float32x, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fdim (vol_var__Float32x, vol_var_long_double);
}
#endif
#if defined HUGE_VAL_F32X && defined HUGE_VAL_F64
static void
test_fdim_81 (void)
{
  extern typeof (fdim (vol_var__Float32x, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fdim (vol_var__Float32x, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
static void
test_fdim_82 (void)
{
  extern typeof (fdim (vol_var__Float32x, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fdim (vol_var__Float32x, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
static void
test_fdim_83 (void)
{
  extern typeof (fdim (vol_var__Float32x, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fdim (vol_var__Float32x, vol_var__Float128);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fdim_84 (void)
{
  extern typeof (fdim (vol_var__Float32x, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var__Float32x, vol_var_char);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fdim_85 (void)
{
  extern typeof (fdim (vol_var__Float32x, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var__Float32x, vol_var_signed_char);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fdim_86 (void)
{
  extern typeof (fdim (vol_var__Float32x, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var__Float32x, vol_var_unsigned_char);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fdim_87 (void)
{
  extern typeof (fdim (vol_var__Float32x, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var__Float32x, vol_var_short_int);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fdim_88 (void)
{
  extern typeof (fdim (vol_var__Float32x, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var__Float32x, vol_var_unsigned_short_int);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fdim_89 (void)
{
  extern typeof (fdim (vol_var__Float32x, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var__Float32x, vol_var_int);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fdim_90 (void)
{
  extern typeof (fdim (vol_var__Float32x, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var__Float32x, vol_var_unsigned_int);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fdim_91 (void)
{
  extern typeof (fdim (vol_var__Float32x, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var__Float32x, vol_var_long_int);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fdim_92 (void)
{
  extern typeof (fdim (vol_var__Float32x, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var__Float32x, vol_var_unsigned_long_int);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fdim_93 (void)
{
  extern typeof (fdim (vol_var__Float32x, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var__Float32x, vol_var_long_long_int);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fdim_94 (void)
{
  extern typeof (fdim (vol_var__Float32x, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var__Float32x, vol_var_unsigned_long_long_int);
}
#endif
#if defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_fdim_95 (void)
{
  extern typeof (fdim (vol_var__Float32x, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var__Float32x, vol_var___int128);
}
#endif
#if defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_fdim_96 (void)
{
  extern typeof (fdim (vol_var__Float32x, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var__Float32x, vol_var_unsigned___int128);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fdim_97 (void)
{
  extern typeof (fdim (vol_var__Float32x, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var__Float32x, vol_var_enum_e);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fdim_98 (void)
{
  extern typeof (fdim (vol_var__Float32x, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var__Float32x, vol_var__Bool);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fdim_99 (void)
{
  extern typeof (fdim (vol_var__Float32x, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var__Float32x, vol_var_bit_field);
}
#endif
#if defined HUGE_VAL_F16
static void
test_fdim_100 (void)
{
  extern typeof (fdim (vol_var_double, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_double, vol_var__Float16);
}
#endif
static void
test_fdim_101 (void)
{
  extern typeof (fdim (vol_var_double, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_double, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_fdim_102 (void)
{
  extern typeof (fdim (vol_var_double, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_double, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fdim_103 (void)
{
  extern typeof (fdim (vol_var_double, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_double, vol_var__Float32x);
}
#endif
static void
test_fdim_104 (void)
{
  extern typeof (fdim (vol_var_double, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_double, vol_var_double);
}
static void
test_fdim_105 (void)
{
  extern typeof (fdim (vol_var_double, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fdim (vol_var_double, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_fdim_106 (void)
{
  extern typeof (fdim (vol_var_double, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fdim (vol_var_double, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fdim_107 (void)
{
  extern typeof (fdim (vol_var_double, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fdim (vol_var_double, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fdim_108 (void)
{
  extern typeof (fdim (vol_var_double, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fdim (vol_var_double, vol_var__Float128);
}
#endif
static void
test_fdim_109 (void)
{
  extern typeof (fdim (vol_var_double, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_double, vol_var_char);
}
static void
test_fdim_110 (void)
{
  extern typeof (fdim (vol_var_double, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_double, vol_var_signed_char);
}
static void
test_fdim_111 (void)
{
  extern typeof (fdim (vol_var_double, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_double, vol_var_unsigned_char);
}
static void
test_fdim_112 (void)
{
  extern typeof (fdim (vol_var_double, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_double, vol_var_short_int);
}
static void
test_fdim_113 (void)
{
  extern typeof (fdim (vol_var_double, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_double, vol_var_unsigned_short_int);
}
static void
test_fdim_114 (void)
{
  extern typeof (fdim (vol_var_double, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_double, vol_var_int);
}
static void
test_fdim_115 (void)
{
  extern typeof (fdim (vol_var_double, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_double, vol_var_unsigned_int);
}
static void
test_fdim_116 (void)
{
  extern typeof (fdim (vol_var_double, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_double, vol_var_long_int);
}
static void
test_fdim_117 (void)
{
  extern typeof (fdim (vol_var_double, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_double, vol_var_unsigned_long_int);
}
static void
test_fdim_118 (void)
{
  extern typeof (fdim (vol_var_double, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_double, vol_var_long_long_int);
}
static void
test_fdim_119 (void)
{
  extern typeof (fdim (vol_var_double, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_double, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fdim_120 (void)
{
  extern typeof (fdim (vol_var_double, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_double, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fdim_121 (void)
{
  extern typeof (fdim (vol_var_double, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_double, vol_var_unsigned___int128);
}
#endif
static void
test_fdim_122 (void)
{
  extern typeof (fdim (vol_var_double, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_double, vol_var_enum_e);
}
static void
test_fdim_123 (void)
{
  extern typeof (fdim (vol_var_double, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_double, vol_var__Bool);
}
static void
test_fdim_124 (void)
{
  extern typeof (fdim (vol_var_double, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_double, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_fdim_125 (void)
{
  extern typeof (fdim (vol_var_long_double, vol_var__Float16)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fdim (vol_var_long_double, vol_var__Float16);
}
#endif
static void
test_fdim_126 (void)
{
  extern typeof (fdim (vol_var_long_double, vol_var_float)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fdim (vol_var_long_double, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_fdim_127 (void)
{
  extern typeof (fdim (vol_var_long_double, vol_var__Float32)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fdim (vol_var_long_double, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fdim_128 (void)
{
  extern typeof (fdim (vol_var_long_double, vol_var__Float32x)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fdim (vol_var_long_double, vol_var__Float32x);
}
#endif
static void
test_fdim_129 (void)
{
  extern typeof (fdim (vol_var_long_double, vol_var_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fdim (vol_var_long_double, vol_var_double);
}
static void
test_fdim_130 (void)
{
  extern typeof (fdim (vol_var_long_double, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fdim (vol_var_long_double, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_fdim_131 (void)
{
  extern typeof (fdim (vol_var_long_double, vol_var__Float64)) var_long_double_Float64 __attribute__ ((unused));
  vol_var_long_double_Float64 = fdim (vol_var_long_double, vol_var__Float64);
}
#endif
#if (LDBL_MANT_DIG != 106) && defined HUGE_VAL_F64X
static void
test_fdim_132 (void)
{
  extern typeof (fdim (vol_var_long_double, vol_var__Float64x)) var_long_double_Float64x __attribute__ ((unused));
  vol_var_long_double_Float64x = fdim (vol_var_long_double, vol_var__Float64x);
}
#endif
#if (LDBL_MANT_DIG != 106) && defined HUGE_VAL_F128
static void
test_fdim_133 (void)
{
  extern typeof (fdim (vol_var_long_double, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fdim (vol_var_long_double, vol_var__Float128);
}
#endif
static void
test_fdim_134 (void)
{
  extern typeof (fdim (vol_var_long_double, vol_var_char)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fdim (vol_var_long_double, vol_var_char);
}
static void
test_fdim_135 (void)
{
  extern typeof (fdim (vol_var_long_double, vol_var_signed_char)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fdim (vol_var_long_double, vol_var_signed_char);
}
static void
test_fdim_136 (void)
{
  extern typeof (fdim (vol_var_long_double, vol_var_unsigned_char)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fdim (vol_var_long_double, vol_var_unsigned_char);
}
static void
test_fdim_137 (void)
{
  extern typeof (fdim (vol_var_long_double, vol_var_short_int)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fdim (vol_var_long_double, vol_var_short_int);
}
static void
test_fdim_138 (void)
{
  extern typeof (fdim (vol_var_long_double, vol_var_unsigned_short_int)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fdim (vol_var_long_double, vol_var_unsigned_short_int);
}
static void
test_fdim_139 (void)
{
  extern typeof (fdim (vol_var_long_double, vol_var_int)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fdim (vol_var_long_double, vol_var_int);
}
static void
test_fdim_140 (void)
{
  extern typeof (fdim (vol_var_long_double, vol_var_unsigned_int)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fdim (vol_var_long_double, vol_var_unsigned_int);
}
static void
test_fdim_141 (void)
{
  extern typeof (fdim (vol_var_long_double, vol_var_long_int)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fdim (vol_var_long_double, vol_var_long_int);
}
static void
test_fdim_142 (void)
{
  extern typeof (fdim (vol_var_long_double, vol_var_unsigned_long_int)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fdim (vol_var_long_double, vol_var_unsigned_long_int);
}
static void
test_fdim_143 (void)
{
  extern typeof (fdim (vol_var_long_double, vol_var_long_long_int)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fdim (vol_var_long_double, vol_var_long_long_int);
}
static void
test_fdim_144 (void)
{
  extern typeof (fdim (vol_var_long_double, vol_var_unsigned_long_long_int)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fdim (vol_var_long_double, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fdim_145 (void)
{
  extern typeof (fdim (vol_var_long_double, vol_var___int128)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fdim (vol_var_long_double, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fdim_146 (void)
{
  extern typeof (fdim (vol_var_long_double, vol_var_unsigned___int128)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fdim (vol_var_long_double, vol_var_unsigned___int128);
}
#endif
static void
test_fdim_147 (void)
{
  extern typeof (fdim (vol_var_long_double, vol_var_enum_e)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fdim (vol_var_long_double, vol_var_enum_e);
}
static void
test_fdim_148 (void)
{
  extern typeof (fdim (vol_var_long_double, vol_var__Bool)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fdim (vol_var_long_double, vol_var__Bool);
}
static void
test_fdim_149 (void)
{
  extern typeof (fdim (vol_var_long_double, vol_var_bit_field)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fdim (vol_var_long_double, vol_var_bit_field);
}
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F64
static void
test_fdim_150 (void)
{
  extern typeof (fdim (vol_var__Float64, vol_var__Float16)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fdim (vol_var__Float64, vol_var__Float16);
}
#endif
#if defined HUGE_VAL_F64
static void
test_fdim_151 (void)
{
  extern typeof (fdim (vol_var__Float64, vol_var_float)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fdim (vol_var__Float64, vol_var_float);
}
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F64
static void
test_fdim_152 (void)
{
  extern typeof (fdim (vol_var__Float64, vol_var__Float32)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fdim (vol_var__Float64, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X && defined HUGE_VAL_F64
static void
test_fdim_153 (void)
{
  extern typeof (fdim (vol_var__Float64, vol_var__Float32x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fdim (vol_var__Float64, vol_var__Float32x);
}
#endif
#if defined HUGE_VAL_F64
static void
test_fdim_154 (void)
{
  extern typeof (fdim (vol_var__Float64, vol_var_double)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fdim (vol_var__Float64, vol_var_double);
}
#endif
#if defined HUGE_VAL_F64
static void
test_fdim_155 (void)
{
  extern typeof (fdim (vol_var__Float64, vol_var_long_double)) var_long_double_Float64 __attribute__ ((unused));
  vol_var_long_double_Float64 = fdim (vol_var__Float64, vol_var_long_double);
}
#endif
#if defined HUGE_VAL_F64
static void
test_fdim_156 (void)
{
  extern typeof (fdim (vol_var__Float64, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fdim (vol_var__Float64, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
static void
test_fdim_157 (void)
{
  extern typeof (fdim (vol_var__Float64, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fdim (vol_var__Float64, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F64
static void
test_fdim_158 (void)
{
  extern typeof (fdim (vol_var__Float64, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fdim (vol_var__Float64, vol_var__Float128);
}
#endif
#if defined HUGE_VAL_F64
static void
test_fdim_159 (void)
{
  extern typeof (fdim (vol_var__Float64, vol_var_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fdim (vol_var__Float64, vol_var_char);
}
#endif
#if defined HUGE_VAL_F64
static void
test_fdim_160 (void)
{
  extern typeof (fdim (vol_var__Float64, vol_var_signed_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fdim (vol_var__Float64, vol_var_signed_char);
}
#endif
#if defined HUGE_VAL_F64
static void
test_fdim_161 (void)
{
  extern typeof (fdim (vol_var__Float64, vol_var_unsigned_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fdim (vol_var__Float64, vol_var_unsigned_char);
}
#endif
#if defined HUGE_VAL_F64
static void
test_fdim_162 (void)
{
  extern typeof (fdim (vol_var__Float64, vol_var_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fdim (vol_var__Float64, vol_var_short_int);
}
#endif
#if defined HUGE_VAL_F64
static void
test_fdim_163 (void)
{
  extern typeof (fdim (vol_var__Float64, vol_var_unsigned_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fdim (vol_var__Float64, vol_var_unsigned_short_int);
}
#endif
#if defined HUGE_VAL_F64
static void
test_fdim_164 (void)
{
  extern typeof (fdim (vol_var__Float64, vol_var_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fdim (vol_var__Float64, vol_var_int);
}
#endif
#if defined HUGE_VAL_F64
static void
test_fdim_165 (void)
{
  extern typeof (fdim (vol_var__Float64, vol_var_unsigned_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fdim (vol_var__Float64, vol_var_unsigned_int);
}
#endif
#if defined HUGE_VAL_F64
static void
test_fdim_166 (void)
{
  extern typeof (fdim (vol_var__Float64, vol_var_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fdim (vol_var__Float64, vol_var_long_int);
}
#endif
#if defined HUGE_VAL_F64
static void
test_fdim_167 (void)
{
  extern typeof (fdim (vol_var__Float64, vol_var_unsigned_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fdim (vol_var__Float64, vol_var_unsigned_long_int);
}
#endif
#if defined HUGE_VAL_F64
static void
test_fdim_168 (void)
{
  extern typeof (fdim (vol_var__Float64, vol_var_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fdim (vol_var__Float64, vol_var_long_long_int);
}
#endif
#if defined HUGE_VAL_F64
static void
test_fdim_169 (void)
{
  extern typeof (fdim (vol_var__Float64, vol_var_unsigned_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fdim (vol_var__Float64, vol_var_unsigned_long_long_int);
}
#endif
#if defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_fdim_170 (void)
{
  extern typeof (fdim (vol_var__Float64, vol_var___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fdim (vol_var__Float64, vol_var___int128);
}
#endif
#if defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_fdim_171 (void)
{
  extern typeof (fdim (vol_var__Float64, vol_var_unsigned___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fdim (vol_var__Float64, vol_var_unsigned___int128);
}
#endif
#if defined HUGE_VAL_F64
static void
test_fdim_172 (void)
{
  extern typeof (fdim (vol_var__Float64, vol_var_enum_e)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fdim (vol_var__Float64, vol_var_enum_e);
}
#endif
#if defined HUGE_VAL_F64
static void
test_fdim_173 (void)
{
  extern typeof (fdim (vol_var__Float64, vol_var__Bool)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fdim (vol_var__Float64, vol_var__Bool);
}
#endif
#if defined HUGE_VAL_F64
static void
test_fdim_174 (void)
{
  extern typeof (fdim (vol_var__Float64, vol_var_bit_field)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fdim (vol_var__Float64, vol_var_bit_field);
}
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
static void
test_fdim_175 (void)
{
  extern typeof (fdim (vol_var__Float64x, vol_var__Float16)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fdim (vol_var__Float64x, vol_var__Float16);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fdim_176 (void)
{
  extern typeof (fdim (vol_var__Float64x, vol_var_float)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fdim (vol_var__Float64x, vol_var_float);
}
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
static void
test_fdim_177 (void)
{
  extern typeof (fdim (vol_var__Float64x, vol_var__Float32)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fdim (vol_var__Float64x, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
static void
test_fdim_178 (void)
{
  extern typeof (fdim (vol_var__Float64x, vol_var__Float32x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fdim (vol_var__Float64x, vol_var__Float32x);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fdim_179 (void)
{
  extern typeof (fdim (vol_var__Float64x, vol_var_double)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fdim (vol_var__Float64x, vol_var_double);
}
#endif
#if (LDBL_MANT_DIG != 106) && defined HUGE_VAL_F64X
static void
test_fdim_180 (void)
{
  extern typeof (fdim (vol_var__Float64x, vol_var_long_double)) var_long_double_Float64x __attribute__ ((unused));
  vol_var_long_double_Float64x = fdim (vol_var__Float64x, vol_var_long_double);
}
#endif
#if defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
static void
test_fdim_181 (void)
{
  extern typeof (fdim (vol_var__Float64x, vol_var__Float64)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fdim (vol_var__Float64x, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fdim_182 (void)
{
  extern typeof (fdim (vol_var__Float64x, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fdim (vol_var__Float64x, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
static void
test_fdim_183 (void)
{
  extern typeof (fdim (vol_var__Float64x, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fdim (vol_var__Float64x, vol_var__Float128);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fdim_184 (void)
{
  extern typeof (fdim (vol_var__Float64x, vol_var_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fdim (vol_var__Float64x, vol_var_char);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fdim_185 (void)
{
  extern typeof (fdim (vol_var__Float64x, vol_var_signed_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fdim (vol_var__Float64x, vol_var_signed_char);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fdim_186 (void)
{
  extern typeof (fdim (vol_var__Float64x, vol_var_unsigned_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fdim (vol_var__Float64x, vol_var_unsigned_char);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fdim_187 (void)
{
  extern typeof (fdim (vol_var__Float64x, vol_var_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fdim (vol_var__Float64x, vol_var_short_int);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fdim_188 (void)
{
  extern typeof (fdim (vol_var__Float64x, vol_var_unsigned_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fdim (vol_var__Float64x, vol_var_unsigned_short_int);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fdim_189 (void)
{
  extern typeof (fdim (vol_var__Float64x, vol_var_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fdim (vol_var__Float64x, vol_var_int);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fdim_190 (void)
{
  extern typeof (fdim (vol_var__Float64x, vol_var_unsigned_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fdim (vol_var__Float64x, vol_var_unsigned_int);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fdim_191 (void)
{
  extern typeof (fdim (vol_var__Float64x, vol_var_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fdim (vol_var__Float64x, vol_var_long_int);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fdim_192 (void)
{
  extern typeof (fdim (vol_var__Float64x, vol_var_unsigned_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fdim (vol_var__Float64x, vol_var_unsigned_long_int);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fdim_193 (void)
{
  extern typeof (fdim (vol_var__Float64x, vol_var_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fdim (vol_var__Float64x, vol_var_long_long_int);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fdim_194 (void)
{
  extern typeof (fdim (vol_var__Float64x, vol_var_unsigned_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fdim (vol_var__Float64x, vol_var_unsigned_long_long_int);
}
#endif
#if defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_fdim_195 (void)
{
  extern typeof (fdim (vol_var__Float64x, vol_var___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fdim (vol_var__Float64x, vol_var___int128);
}
#endif
#if defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_fdim_196 (void)
{
  extern typeof (fdim (vol_var__Float64x, vol_var_unsigned___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fdim (vol_var__Float64x, vol_var_unsigned___int128);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fdim_197 (void)
{
  extern typeof (fdim (vol_var__Float64x, vol_var_enum_e)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fdim (vol_var__Float64x, vol_var_enum_e);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fdim_198 (void)
{
  extern typeof (fdim (vol_var__Float64x, vol_var__Bool)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fdim (vol_var__Float64x, vol_var__Bool);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fdim_199 (void)
{
  extern typeof (fdim (vol_var__Float64x, vol_var_bit_field)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fdim (vol_var__Float64x, vol_var_bit_field);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F16
static void
test_fdim_200 (void)
{
  extern typeof (fdim (vol_var__Float128, vol_var__Float16)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fdim (vol_var__Float128, vol_var__Float16);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fdim_201 (void)
{
  extern typeof (fdim (vol_var__Float128, vol_var_float)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fdim (vol_var__Float128, vol_var_float);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F32
static void
test_fdim_202 (void)
{
  extern typeof (fdim (vol_var__Float128, vol_var__Float32)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fdim (vol_var__Float128, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
static void
test_fdim_203 (void)
{
  extern typeof (fdim (vol_var__Float128, vol_var__Float32x)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fdim (vol_var__Float128, vol_var__Float32x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fdim_204 (void)
{
  extern typeof (fdim (vol_var__Float128, vol_var_double)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fdim (vol_var__Float128, vol_var_double);
}
#endif
#if (LDBL_MANT_DIG != 106) && defined HUGE_VAL_F128
static void
test_fdim_205 (void)
{
  extern typeof (fdim (vol_var__Float128, vol_var_long_double)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fdim (vol_var__Float128, vol_var_long_double);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F64
static void
test_fdim_206 (void)
{
  extern typeof (fdim (vol_var__Float128, vol_var__Float64)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fdim (vol_var__Float128, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
static void
test_fdim_207 (void)
{
  extern typeof (fdim (vol_var__Float128, vol_var__Float64x)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fdim (vol_var__Float128, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fdim_208 (void)
{
  extern typeof (fdim (vol_var__Float128, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fdim (vol_var__Float128, vol_var__Float128);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fdim_209 (void)
{
  extern typeof (fdim (vol_var__Float128, vol_var_char)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fdim (vol_var__Float128, vol_var_char);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fdim_210 (void)
{
  extern typeof (fdim (vol_var__Float128, vol_var_signed_char)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fdim (vol_var__Float128, vol_var_signed_char);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fdim_211 (void)
{
  extern typeof (fdim (vol_var__Float128, vol_var_unsigned_char)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fdim (vol_var__Float128, vol_var_unsigned_char);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fdim_212 (void)
{
  extern typeof (fdim (vol_var__Float128, vol_var_short_int)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fdim (vol_var__Float128, vol_var_short_int);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fdim_213 (void)
{
  extern typeof (fdim (vol_var__Float128, vol_var_unsigned_short_int)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fdim (vol_var__Float128, vol_var_unsigned_short_int);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fdim_214 (void)
{
  extern typeof (fdim (vol_var__Float128, vol_var_int)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fdim (vol_var__Float128, vol_var_int);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fdim_215 (void)
{
  extern typeof (fdim (vol_var__Float128, vol_var_unsigned_int)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fdim (vol_var__Float128, vol_var_unsigned_int);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fdim_216 (void)
{
  extern typeof (fdim (vol_var__Float128, vol_var_long_int)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fdim (vol_var__Float128, vol_var_long_int);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fdim_217 (void)
{
  extern typeof (fdim (vol_var__Float128, vol_var_unsigned_long_int)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fdim (vol_var__Float128, vol_var_unsigned_long_int);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fdim_218 (void)
{
  extern typeof (fdim (vol_var__Float128, vol_var_long_long_int)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fdim (vol_var__Float128, vol_var_long_long_int);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fdim_219 (void)
{
  extern typeof (fdim (vol_var__Float128, vol_var_unsigned_long_long_int)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fdim (vol_var__Float128, vol_var_unsigned_long_long_int);
}
#endif
#if defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_fdim_220 (void)
{
  extern typeof (fdim (vol_var__Float128, vol_var___int128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fdim (vol_var__Float128, vol_var___int128);
}
#endif
#if defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_fdim_221 (void)
{
  extern typeof (fdim (vol_var__Float128, vol_var_unsigned___int128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fdim (vol_var__Float128, vol_var_unsigned___int128);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fdim_222 (void)
{
  extern typeof (fdim (vol_var__Float128, vol_var_enum_e)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fdim (vol_var__Float128, vol_var_enum_e);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fdim_223 (void)
{
  extern typeof (fdim (vol_var__Float128, vol_var__Bool)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fdim (vol_var__Float128, vol_var__Bool);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fdim_224 (void)
{
  extern typeof (fdim (vol_var__Float128, vol_var_bit_field)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fdim (vol_var__Float128, vol_var_bit_field);
}
#endif
#if defined HUGE_VAL_F16
static void
test_fdim_225 (void)
{
  extern typeof (fdim (vol_var_char, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_char, vol_var__Float16);
}
#endif
static void
test_fdim_226 (void)
{
  extern typeof (fdim (vol_var_char, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_char, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_fdim_227 (void)
{
  extern typeof (fdim (vol_var_char, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_char, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fdim_228 (void)
{
  extern typeof (fdim (vol_var_char, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_char, vol_var__Float32x);
}
#endif
static void
test_fdim_229 (void)
{
  extern typeof (fdim (vol_var_char, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_char, vol_var_double);
}
static void
test_fdim_230 (void)
{
  extern typeof (fdim (vol_var_char, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fdim (vol_var_char, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_fdim_231 (void)
{
  extern typeof (fdim (vol_var_char, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fdim (vol_var_char, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fdim_232 (void)
{
  extern typeof (fdim (vol_var_char, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fdim (vol_var_char, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fdim_233 (void)
{
  extern typeof (fdim (vol_var_char, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fdim (vol_var_char, vol_var__Float128);
}
#endif
static void
test_fdim_234 (void)
{
  extern typeof (fdim (vol_var_char, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_char, vol_var_char);
}
static void
test_fdim_235 (void)
{
  extern typeof (fdim (vol_var_char, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_char, vol_var_signed_char);
}
static void
test_fdim_236 (void)
{
  extern typeof (fdim (vol_var_char, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_char, vol_var_unsigned_char);
}
static void
test_fdim_237 (void)
{
  extern typeof (fdim (vol_var_char, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_char, vol_var_short_int);
}
static void
test_fdim_238 (void)
{
  extern typeof (fdim (vol_var_char, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_char, vol_var_unsigned_short_int);
}
static void
test_fdim_239 (void)
{
  extern typeof (fdim (vol_var_char, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_char, vol_var_int);
}
static void
test_fdim_240 (void)
{
  extern typeof (fdim (vol_var_char, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_char, vol_var_unsigned_int);
}
static void
test_fdim_241 (void)
{
  extern typeof (fdim (vol_var_char, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_char, vol_var_long_int);
}
static void
test_fdim_242 (void)
{
  extern typeof (fdim (vol_var_char, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_char, vol_var_unsigned_long_int);
}
static void
test_fdim_243 (void)
{
  extern typeof (fdim (vol_var_char, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_char, vol_var_long_long_int);
}
static void
test_fdim_244 (void)
{
  extern typeof (fdim (vol_var_char, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_char, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fdim_245 (void)
{
  extern typeof (fdim (vol_var_char, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_char, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fdim_246 (void)
{
  extern typeof (fdim (vol_var_char, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_char, vol_var_unsigned___int128);
}
#endif
static void
test_fdim_247 (void)
{
  extern typeof (fdim (vol_var_char, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_char, vol_var_enum_e);
}
static void
test_fdim_248 (void)
{
  extern typeof (fdim (vol_var_char, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_char, vol_var__Bool);
}
static void
test_fdim_249 (void)
{
  extern typeof (fdim (vol_var_char, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_char, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_fdim_250 (void)
{
  extern typeof (fdim (vol_var_signed_char, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_signed_char, vol_var__Float16);
}
#endif
static void
test_fdim_251 (void)
{
  extern typeof (fdim (vol_var_signed_char, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_signed_char, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_fdim_252 (void)
{
  extern typeof (fdim (vol_var_signed_char, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_signed_char, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fdim_253 (void)
{
  extern typeof (fdim (vol_var_signed_char, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_signed_char, vol_var__Float32x);
}
#endif
static void
test_fdim_254 (void)
{
  extern typeof (fdim (vol_var_signed_char, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_signed_char, vol_var_double);
}
static void
test_fdim_255 (void)
{
  extern typeof (fdim (vol_var_signed_char, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fdim (vol_var_signed_char, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_fdim_256 (void)
{
  extern typeof (fdim (vol_var_signed_char, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fdim (vol_var_signed_char, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fdim_257 (void)
{
  extern typeof (fdim (vol_var_signed_char, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fdim (vol_var_signed_char, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fdim_258 (void)
{
  extern typeof (fdim (vol_var_signed_char, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fdim (vol_var_signed_char, vol_var__Float128);
}
#endif
static void
test_fdim_259 (void)
{
  extern typeof (fdim (vol_var_signed_char, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_signed_char, vol_var_char);
}
static void
test_fdim_260 (void)
{
  extern typeof (fdim (vol_var_signed_char, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_signed_char, vol_var_signed_char);
}
static void
test_fdim_261 (void)
{
  extern typeof (fdim (vol_var_signed_char, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_signed_char, vol_var_unsigned_char);
}
static void
test_fdim_262 (void)
{
  extern typeof (fdim (vol_var_signed_char, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_signed_char, vol_var_short_int);
}
static void
test_fdim_263 (void)
{
  extern typeof (fdim (vol_var_signed_char, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_signed_char, vol_var_unsigned_short_int);
}
static void
test_fdim_264 (void)
{
  extern typeof (fdim (vol_var_signed_char, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_signed_char, vol_var_int);
}
static void
test_fdim_265 (void)
{
  extern typeof (fdim (vol_var_signed_char, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_signed_char, vol_var_unsigned_int);
}
static void
test_fdim_266 (void)
{
  extern typeof (fdim (vol_var_signed_char, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_signed_char, vol_var_long_int);
}
static void
test_fdim_267 (void)
{
  extern typeof (fdim (vol_var_signed_char, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_signed_char, vol_var_unsigned_long_int);
}
static void
test_fdim_268 (void)
{
  extern typeof (fdim (vol_var_signed_char, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_signed_char, vol_var_long_long_int);
}
static void
test_fdim_269 (void)
{
  extern typeof (fdim (vol_var_signed_char, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_signed_char, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fdim_270 (void)
{
  extern typeof (fdim (vol_var_signed_char, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_signed_char, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fdim_271 (void)
{
  extern typeof (fdim (vol_var_signed_char, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_signed_char, vol_var_unsigned___int128);
}
#endif
static void
test_fdim_272 (void)
{
  extern typeof (fdim (vol_var_signed_char, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_signed_char, vol_var_enum_e);
}
static void
test_fdim_273 (void)
{
  extern typeof (fdim (vol_var_signed_char, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_signed_char, vol_var__Bool);
}
static void
test_fdim_274 (void)
{
  extern typeof (fdim (vol_var_signed_char, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_signed_char, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_fdim_275 (void)
{
  extern typeof (fdim (vol_var_unsigned_char, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_unsigned_char, vol_var__Float16);
}
#endif
static void
test_fdim_276 (void)
{
  extern typeof (fdim (vol_var_unsigned_char, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_unsigned_char, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_fdim_277 (void)
{
  extern typeof (fdim (vol_var_unsigned_char, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_unsigned_char, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fdim_278 (void)
{
  extern typeof (fdim (vol_var_unsigned_char, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_unsigned_char, vol_var__Float32x);
}
#endif
static void
test_fdim_279 (void)
{
  extern typeof (fdim (vol_var_unsigned_char, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_unsigned_char, vol_var_double);
}
static void
test_fdim_280 (void)
{
  extern typeof (fdim (vol_var_unsigned_char, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fdim (vol_var_unsigned_char, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_fdim_281 (void)
{
  extern typeof (fdim (vol_var_unsigned_char, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fdim (vol_var_unsigned_char, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fdim_282 (void)
{
  extern typeof (fdim (vol_var_unsigned_char, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fdim (vol_var_unsigned_char, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fdim_283 (void)
{
  extern typeof (fdim (vol_var_unsigned_char, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fdim (vol_var_unsigned_char, vol_var__Float128);
}
#endif
static void
test_fdim_284 (void)
{
  extern typeof (fdim (vol_var_unsigned_char, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_unsigned_char, vol_var_char);
}
static void
test_fdim_285 (void)
{
  extern typeof (fdim (vol_var_unsigned_char, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_unsigned_char, vol_var_signed_char);
}
static void
test_fdim_286 (void)
{
  extern typeof (fdim (vol_var_unsigned_char, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_unsigned_char, vol_var_unsigned_char);
}
static void
test_fdim_287 (void)
{
  extern typeof (fdim (vol_var_unsigned_char, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_unsigned_char, vol_var_short_int);
}
static void
test_fdim_288 (void)
{
  extern typeof (fdim (vol_var_unsigned_char, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_unsigned_char, vol_var_unsigned_short_int);
}
static void
test_fdim_289 (void)
{
  extern typeof (fdim (vol_var_unsigned_char, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_unsigned_char, vol_var_int);
}
static void
test_fdim_290 (void)
{
  extern typeof (fdim (vol_var_unsigned_char, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_unsigned_char, vol_var_unsigned_int);
}
static void
test_fdim_291 (void)
{
  extern typeof (fdim (vol_var_unsigned_char, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_unsigned_char, vol_var_long_int);
}
static void
test_fdim_292 (void)
{
  extern typeof (fdim (vol_var_unsigned_char, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_unsigned_char, vol_var_unsigned_long_int);
}
static void
test_fdim_293 (void)
{
  extern typeof (fdim (vol_var_unsigned_char, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_unsigned_char, vol_var_long_long_int);
}
static void
test_fdim_294 (void)
{
  extern typeof (fdim (vol_var_unsigned_char, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_unsigned_char, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fdim_295 (void)
{
  extern typeof (fdim (vol_var_unsigned_char, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_unsigned_char, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fdim_296 (void)
{
  extern typeof (fdim (vol_var_unsigned_char, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_unsigned_char, vol_var_unsigned___int128);
}
#endif
static void
test_fdim_297 (void)
{
  extern typeof (fdim (vol_var_unsigned_char, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_unsigned_char, vol_var_enum_e);
}
static void
test_fdim_298 (void)
{
  extern typeof (fdim (vol_var_unsigned_char, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_unsigned_char, vol_var__Bool);
}
static void
test_fdim_299 (void)
{
  extern typeof (fdim (vol_var_unsigned_char, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_unsigned_char, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_fdim_300 (void)
{
  extern typeof (fdim (vol_var_short_int, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_short_int, vol_var__Float16);
}
#endif
static void
test_fdim_301 (void)
{
  extern typeof (fdim (vol_var_short_int, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_short_int, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_fdim_302 (void)
{
  extern typeof (fdim (vol_var_short_int, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_short_int, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fdim_303 (void)
{
  extern typeof (fdim (vol_var_short_int, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_short_int, vol_var__Float32x);
}
#endif
static void
test_fdim_304 (void)
{
  extern typeof (fdim (vol_var_short_int, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_short_int, vol_var_double);
}
static void
test_fdim_305 (void)
{
  extern typeof (fdim (vol_var_short_int, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fdim (vol_var_short_int, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_fdim_306 (void)
{
  extern typeof (fdim (vol_var_short_int, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fdim (vol_var_short_int, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fdim_307 (void)
{
  extern typeof (fdim (vol_var_short_int, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fdim (vol_var_short_int, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fdim_308 (void)
{
  extern typeof (fdim (vol_var_short_int, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fdim (vol_var_short_int, vol_var__Float128);
}
#endif
static void
test_fdim_309 (void)
{
  extern typeof (fdim (vol_var_short_int, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_short_int, vol_var_char);
}
static void
test_fdim_310 (void)
{
  extern typeof (fdim (vol_var_short_int, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_short_int, vol_var_signed_char);
}
static void
test_fdim_311 (void)
{
  extern typeof (fdim (vol_var_short_int, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_short_int, vol_var_unsigned_char);
}
static void
test_fdim_312 (void)
{
  extern typeof (fdim (vol_var_short_int, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_short_int, vol_var_short_int);
}
static void
test_fdim_313 (void)
{
  extern typeof (fdim (vol_var_short_int, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_short_int, vol_var_unsigned_short_int);
}
static void
test_fdim_314 (void)
{
  extern typeof (fdim (vol_var_short_int, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_short_int, vol_var_int);
}
static void
test_fdim_315 (void)
{
  extern typeof (fdim (vol_var_short_int, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_short_int, vol_var_unsigned_int);
}
static void
test_fdim_316 (void)
{
  extern typeof (fdim (vol_var_short_int, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_short_int, vol_var_long_int);
}
static void
test_fdim_317 (void)
{
  extern typeof (fdim (vol_var_short_int, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_short_int, vol_var_unsigned_long_int);
}
static void
test_fdim_318 (void)
{
  extern typeof (fdim (vol_var_short_int, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_short_int, vol_var_long_long_int);
}
static void
test_fdim_319 (void)
{
  extern typeof (fdim (vol_var_short_int, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_short_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fdim_320 (void)
{
  extern typeof (fdim (vol_var_short_int, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_short_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fdim_321 (void)
{
  extern typeof (fdim (vol_var_short_int, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_short_int, vol_var_unsigned___int128);
}
#endif
static void
test_fdim_322 (void)
{
  extern typeof (fdim (vol_var_short_int, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_short_int, vol_var_enum_e);
}
static void
test_fdim_323 (void)
{
  extern typeof (fdim (vol_var_short_int, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_short_int, vol_var__Bool);
}
static void
test_fdim_324 (void)
{
  extern typeof (fdim (vol_var_short_int, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_short_int, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_fdim_325 (void)
{
  extern typeof (fdim (vol_var_unsigned_short_int, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_unsigned_short_int, vol_var__Float16);
}
#endif
static void
test_fdim_326 (void)
{
  extern typeof (fdim (vol_var_unsigned_short_int, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_unsigned_short_int, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_fdim_327 (void)
{
  extern typeof (fdim (vol_var_unsigned_short_int, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_unsigned_short_int, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fdim_328 (void)
{
  extern typeof (fdim (vol_var_unsigned_short_int, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_unsigned_short_int, vol_var__Float32x);
}
#endif
static void
test_fdim_329 (void)
{
  extern typeof (fdim (vol_var_unsigned_short_int, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_unsigned_short_int, vol_var_double);
}
static void
test_fdim_330 (void)
{
  extern typeof (fdim (vol_var_unsigned_short_int, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fdim (vol_var_unsigned_short_int, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_fdim_331 (void)
{
  extern typeof (fdim (vol_var_unsigned_short_int, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fdim (vol_var_unsigned_short_int, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fdim_332 (void)
{
  extern typeof (fdim (vol_var_unsigned_short_int, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fdim (vol_var_unsigned_short_int, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fdim_333 (void)
{
  extern typeof (fdim (vol_var_unsigned_short_int, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fdim (vol_var_unsigned_short_int, vol_var__Float128);
}
#endif
static void
test_fdim_334 (void)
{
  extern typeof (fdim (vol_var_unsigned_short_int, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_unsigned_short_int, vol_var_char);
}
static void
test_fdim_335 (void)
{
  extern typeof (fdim (vol_var_unsigned_short_int, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_unsigned_short_int, vol_var_signed_char);
}
static void
test_fdim_336 (void)
{
  extern typeof (fdim (vol_var_unsigned_short_int, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_unsigned_short_int, vol_var_unsigned_char);
}
static void
test_fdim_337 (void)
{
  extern typeof (fdim (vol_var_unsigned_short_int, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_unsigned_short_int, vol_var_short_int);
}
static void
test_fdim_338 (void)
{
  extern typeof (fdim (vol_var_unsigned_short_int, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_unsigned_short_int, vol_var_unsigned_short_int);
}
static void
test_fdim_339 (void)
{
  extern typeof (fdim (vol_var_unsigned_short_int, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_unsigned_short_int, vol_var_int);
}
static void
test_fdim_340 (void)
{
  extern typeof (fdim (vol_var_unsigned_short_int, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_unsigned_short_int, vol_var_unsigned_int);
}
static void
test_fdim_341 (void)
{
  extern typeof (fdim (vol_var_unsigned_short_int, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_unsigned_short_int, vol_var_long_int);
}
static void
test_fdim_342 (void)
{
  extern typeof (fdim (vol_var_unsigned_short_int, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_unsigned_short_int, vol_var_unsigned_long_int);
}
static void
test_fdim_343 (void)
{
  extern typeof (fdim (vol_var_unsigned_short_int, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_unsigned_short_int, vol_var_long_long_int);
}
static void
test_fdim_344 (void)
{
  extern typeof (fdim (vol_var_unsigned_short_int, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_unsigned_short_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fdim_345 (void)
{
  extern typeof (fdim (vol_var_unsigned_short_int, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_unsigned_short_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fdim_346 (void)
{
  extern typeof (fdim (vol_var_unsigned_short_int, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_unsigned_short_int, vol_var_unsigned___int128);
}
#endif
static void
test_fdim_347 (void)
{
  extern typeof (fdim (vol_var_unsigned_short_int, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_unsigned_short_int, vol_var_enum_e);
}
static void
test_fdim_348 (void)
{
  extern typeof (fdim (vol_var_unsigned_short_int, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_unsigned_short_int, vol_var__Bool);
}
static void
test_fdim_349 (void)
{
  extern typeof (fdim (vol_var_unsigned_short_int, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_unsigned_short_int, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_fdim_350 (void)
{
  extern typeof (fdim (vol_var_int, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_int, vol_var__Float16);
}
#endif
static void
test_fdim_351 (void)
{
  extern typeof (fdim (vol_var_int, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_int, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_fdim_352 (void)
{
  extern typeof (fdim (vol_var_int, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_int, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fdim_353 (void)
{
  extern typeof (fdim (vol_var_int, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_int, vol_var__Float32x);
}
#endif
static void
test_fdim_354 (void)
{
  extern typeof (fdim (vol_var_int, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_int, vol_var_double);
}
static void
test_fdim_355 (void)
{
  extern typeof (fdim (vol_var_int, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fdim (vol_var_int, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_fdim_356 (void)
{
  extern typeof (fdim (vol_var_int, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fdim (vol_var_int, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fdim_357 (void)
{
  extern typeof (fdim (vol_var_int, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fdim (vol_var_int, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fdim_358 (void)
{
  extern typeof (fdim (vol_var_int, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fdim (vol_var_int, vol_var__Float128);
}
#endif
static void
test_fdim_359 (void)
{
  extern typeof (fdim (vol_var_int, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_int, vol_var_char);
}
static void
test_fdim_360 (void)
{
  extern typeof (fdim (vol_var_int, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_int, vol_var_signed_char);
}
static void
test_fdim_361 (void)
{
  extern typeof (fdim (vol_var_int, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_int, vol_var_unsigned_char);
}
static void
test_fdim_362 (void)
{
  extern typeof (fdim (vol_var_int, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_int, vol_var_short_int);
}
static void
test_fdim_363 (void)
{
  extern typeof (fdim (vol_var_int, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_int, vol_var_unsigned_short_int);
}
static void
test_fdim_364 (void)
{
  extern typeof (fdim (vol_var_int, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_int, vol_var_int);
}
static void
test_fdim_365 (void)
{
  extern typeof (fdim (vol_var_int, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_int, vol_var_unsigned_int);
}
static void
test_fdim_366 (void)
{
  extern typeof (fdim (vol_var_int, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_int, vol_var_long_int);
}
static void
test_fdim_367 (void)
{
  extern typeof (fdim (vol_var_int, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_int, vol_var_unsigned_long_int);
}
static void
test_fdim_368 (void)
{
  extern typeof (fdim (vol_var_int, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_int, vol_var_long_long_int);
}
static void
test_fdim_369 (void)
{
  extern typeof (fdim (vol_var_int, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fdim_370 (void)
{
  extern typeof (fdim (vol_var_int, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fdim_371 (void)
{
  extern typeof (fdim (vol_var_int, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_int, vol_var_unsigned___int128);
}
#endif
static void
test_fdim_372 (void)
{
  extern typeof (fdim (vol_var_int, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_int, vol_var_enum_e);
}
static void
test_fdim_373 (void)
{
  extern typeof (fdim (vol_var_int, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_int, vol_var__Bool);
}
static void
test_fdim_374 (void)
{
  extern typeof (fdim (vol_var_int, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_int, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_fdim_375 (void)
{
  extern typeof (fdim (vol_var_unsigned_int, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_unsigned_int, vol_var__Float16);
}
#endif
static void
test_fdim_376 (void)
{
  extern typeof (fdim (vol_var_unsigned_int, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_unsigned_int, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_fdim_377 (void)
{
  extern typeof (fdim (vol_var_unsigned_int, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_unsigned_int, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fdim_378 (void)
{
  extern typeof (fdim (vol_var_unsigned_int, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_unsigned_int, vol_var__Float32x);
}
#endif
static void
test_fdim_379 (void)
{
  extern typeof (fdim (vol_var_unsigned_int, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_unsigned_int, vol_var_double);
}
static void
test_fdim_380 (void)
{
  extern typeof (fdim (vol_var_unsigned_int, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fdim (vol_var_unsigned_int, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_fdim_381 (void)
{
  extern typeof (fdim (vol_var_unsigned_int, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fdim (vol_var_unsigned_int, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fdim_382 (void)
{
  extern typeof (fdim (vol_var_unsigned_int, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fdim (vol_var_unsigned_int, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fdim_383 (void)
{
  extern typeof (fdim (vol_var_unsigned_int, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fdim (vol_var_unsigned_int, vol_var__Float128);
}
#endif
static void
test_fdim_384 (void)
{
  extern typeof (fdim (vol_var_unsigned_int, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_unsigned_int, vol_var_char);
}
static void
test_fdim_385 (void)
{
  extern typeof (fdim (vol_var_unsigned_int, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_unsigned_int, vol_var_signed_char);
}
static void
test_fdim_386 (void)
{
  extern typeof (fdim (vol_var_unsigned_int, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_unsigned_int, vol_var_unsigned_char);
}
static void
test_fdim_387 (void)
{
  extern typeof (fdim (vol_var_unsigned_int, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_unsigned_int, vol_var_short_int);
}
static void
test_fdim_388 (void)
{
  extern typeof (fdim (vol_var_unsigned_int, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_unsigned_int, vol_var_unsigned_short_int);
}
static void
test_fdim_389 (void)
{
  extern typeof (fdim (vol_var_unsigned_int, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_unsigned_int, vol_var_int);
}
static void
test_fdim_390 (void)
{
  extern typeof (fdim (vol_var_unsigned_int, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_unsigned_int, vol_var_unsigned_int);
}
static void
test_fdim_391 (void)
{
  extern typeof (fdim (vol_var_unsigned_int, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_unsigned_int, vol_var_long_int);
}
static void
test_fdim_392 (void)
{
  extern typeof (fdim (vol_var_unsigned_int, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_unsigned_int, vol_var_unsigned_long_int);
}
static void
test_fdim_393 (void)
{
  extern typeof (fdim (vol_var_unsigned_int, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_unsigned_int, vol_var_long_long_int);
}
static void
test_fdim_394 (void)
{
  extern typeof (fdim (vol_var_unsigned_int, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_unsigned_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fdim_395 (void)
{
  extern typeof (fdim (vol_var_unsigned_int, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_unsigned_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fdim_396 (void)
{
  extern typeof (fdim (vol_var_unsigned_int, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_unsigned_int, vol_var_unsigned___int128);
}
#endif
static void
test_fdim_397 (void)
{
  extern typeof (fdim (vol_var_unsigned_int, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_unsigned_int, vol_var_enum_e);
}
static void
test_fdim_398 (void)
{
  extern typeof (fdim (vol_var_unsigned_int, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_unsigned_int, vol_var__Bool);
}
static void
test_fdim_399 (void)
{
  extern typeof (fdim (vol_var_unsigned_int, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_unsigned_int, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_fdim_400 (void)
{
  extern typeof (fdim (vol_var_long_int, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_long_int, vol_var__Float16);
}
#endif
static void
test_fdim_401 (void)
{
  extern typeof (fdim (vol_var_long_int, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_long_int, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_fdim_402 (void)
{
  extern typeof (fdim (vol_var_long_int, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_long_int, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fdim_403 (void)
{
  extern typeof (fdim (vol_var_long_int, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_long_int, vol_var__Float32x);
}
#endif
static void
test_fdim_404 (void)
{
  extern typeof (fdim (vol_var_long_int, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_long_int, vol_var_double);
}
static void
test_fdim_405 (void)
{
  extern typeof (fdim (vol_var_long_int, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fdim (vol_var_long_int, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_fdim_406 (void)
{
  extern typeof (fdim (vol_var_long_int, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fdim (vol_var_long_int, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fdim_407 (void)
{
  extern typeof (fdim (vol_var_long_int, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fdim (vol_var_long_int, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fdim_408 (void)
{
  extern typeof (fdim (vol_var_long_int, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fdim (vol_var_long_int, vol_var__Float128);
}
#endif
static void
test_fdim_409 (void)
{
  extern typeof (fdim (vol_var_long_int, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_long_int, vol_var_char);
}
static void
test_fdim_410 (void)
{
  extern typeof (fdim (vol_var_long_int, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_long_int, vol_var_signed_char);
}
static void
test_fdim_411 (void)
{
  extern typeof (fdim (vol_var_long_int, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_long_int, vol_var_unsigned_char);
}
static void
test_fdim_412 (void)
{
  extern typeof (fdim (vol_var_long_int, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_long_int, vol_var_short_int);
}
static void
test_fdim_413 (void)
{
  extern typeof (fdim (vol_var_long_int, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_long_int, vol_var_unsigned_short_int);
}
static void
test_fdim_414 (void)
{
  extern typeof (fdim (vol_var_long_int, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_long_int, vol_var_int);
}
static void
test_fdim_415 (void)
{
  extern typeof (fdim (vol_var_long_int, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_long_int, vol_var_unsigned_int);
}
static void
test_fdim_416 (void)
{
  extern typeof (fdim (vol_var_long_int, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_long_int, vol_var_long_int);
}
static void
test_fdim_417 (void)
{
  extern typeof (fdim (vol_var_long_int, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_long_int, vol_var_unsigned_long_int);
}
static void
test_fdim_418 (void)
{
  extern typeof (fdim (vol_var_long_int, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_long_int, vol_var_long_long_int);
}
static void
test_fdim_419 (void)
{
  extern typeof (fdim (vol_var_long_int, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_long_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fdim_420 (void)
{
  extern typeof (fdim (vol_var_long_int, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_long_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fdim_421 (void)
{
  extern typeof (fdim (vol_var_long_int, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_long_int, vol_var_unsigned___int128);
}
#endif
static void
test_fdim_422 (void)
{
  extern typeof (fdim (vol_var_long_int, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_long_int, vol_var_enum_e);
}
static void
test_fdim_423 (void)
{
  extern typeof (fdim (vol_var_long_int, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_long_int, vol_var__Bool);
}
static void
test_fdim_424 (void)
{
  extern typeof (fdim (vol_var_long_int, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_long_int, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_fdim_425 (void)
{
  extern typeof (fdim (vol_var_unsigned_long_int, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_unsigned_long_int, vol_var__Float16);
}
#endif
static void
test_fdim_426 (void)
{
  extern typeof (fdim (vol_var_unsigned_long_int, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_unsigned_long_int, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_fdim_427 (void)
{
  extern typeof (fdim (vol_var_unsigned_long_int, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_unsigned_long_int, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fdim_428 (void)
{
  extern typeof (fdim (vol_var_unsigned_long_int, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_unsigned_long_int, vol_var__Float32x);
}
#endif
static void
test_fdim_429 (void)
{
  extern typeof (fdim (vol_var_unsigned_long_int, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_unsigned_long_int, vol_var_double);
}
static void
test_fdim_430 (void)
{
  extern typeof (fdim (vol_var_unsigned_long_int, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fdim (vol_var_unsigned_long_int, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_fdim_431 (void)
{
  extern typeof (fdim (vol_var_unsigned_long_int, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fdim (vol_var_unsigned_long_int, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fdim_432 (void)
{
  extern typeof (fdim (vol_var_unsigned_long_int, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fdim (vol_var_unsigned_long_int, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fdim_433 (void)
{
  extern typeof (fdim (vol_var_unsigned_long_int, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fdim (vol_var_unsigned_long_int, vol_var__Float128);
}
#endif
static void
test_fdim_434 (void)
{
  extern typeof (fdim (vol_var_unsigned_long_int, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_unsigned_long_int, vol_var_char);
}
static void
test_fdim_435 (void)
{
  extern typeof (fdim (vol_var_unsigned_long_int, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_unsigned_long_int, vol_var_signed_char);
}
static void
test_fdim_436 (void)
{
  extern typeof (fdim (vol_var_unsigned_long_int, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_unsigned_long_int, vol_var_unsigned_char);
}
static void
test_fdim_437 (void)
{
  extern typeof (fdim (vol_var_unsigned_long_int, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_unsigned_long_int, vol_var_short_int);
}
static void
test_fdim_438 (void)
{
  extern typeof (fdim (vol_var_unsigned_long_int, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_unsigned_long_int, vol_var_unsigned_short_int);
}
static void
test_fdim_439 (void)
{
  extern typeof (fdim (vol_var_unsigned_long_int, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_unsigned_long_int, vol_var_int);
}
static void
test_fdim_440 (void)
{
  extern typeof (fdim (vol_var_unsigned_long_int, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_unsigned_long_int, vol_var_unsigned_int);
}
static void
test_fdim_441 (void)
{
  extern typeof (fdim (vol_var_unsigned_long_int, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_unsigned_long_int, vol_var_long_int);
}
static void
test_fdim_442 (void)
{
  extern typeof (fdim (vol_var_unsigned_long_int, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_unsigned_long_int, vol_var_unsigned_long_int);
}
static void
test_fdim_443 (void)
{
  extern typeof (fdim (vol_var_unsigned_long_int, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_unsigned_long_int, vol_var_long_long_int);
}
static void
test_fdim_444 (void)
{
  extern typeof (fdim (vol_var_unsigned_long_int, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_unsigned_long_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fdim_445 (void)
{
  extern typeof (fdim (vol_var_unsigned_long_int, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_unsigned_long_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fdim_446 (void)
{
  extern typeof (fdim (vol_var_unsigned_long_int, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_unsigned_long_int, vol_var_unsigned___int128);
}
#endif
static void
test_fdim_447 (void)
{
  extern typeof (fdim (vol_var_unsigned_long_int, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_unsigned_long_int, vol_var_enum_e);
}
static void
test_fdim_448 (void)
{
  extern typeof (fdim (vol_var_unsigned_long_int, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_unsigned_long_int, vol_var__Bool);
}
static void
test_fdim_449 (void)
{
  extern typeof (fdim (vol_var_unsigned_long_int, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_unsigned_long_int, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_fdim_450 (void)
{
  extern typeof (fdim (vol_var_long_long_int, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_long_long_int, vol_var__Float16);
}
#endif
static void
test_fdim_451 (void)
{
  extern typeof (fdim (vol_var_long_long_int, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_long_long_int, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_fdim_452 (void)
{
  extern typeof (fdim (vol_var_long_long_int, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_long_long_int, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fdim_453 (void)
{
  extern typeof (fdim (vol_var_long_long_int, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_long_long_int, vol_var__Float32x);
}
#endif
static void
test_fdim_454 (void)
{
  extern typeof (fdim (vol_var_long_long_int, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_long_long_int, vol_var_double);
}
static void
test_fdim_455 (void)
{
  extern typeof (fdim (vol_var_long_long_int, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fdim (vol_var_long_long_int, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_fdim_456 (void)
{
  extern typeof (fdim (vol_var_long_long_int, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fdim (vol_var_long_long_int, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fdim_457 (void)
{
  extern typeof (fdim (vol_var_long_long_int, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fdim (vol_var_long_long_int, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fdim_458 (void)
{
  extern typeof (fdim (vol_var_long_long_int, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fdim (vol_var_long_long_int, vol_var__Float128);
}
#endif
static void
test_fdim_459 (void)
{
  extern typeof (fdim (vol_var_long_long_int, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_long_long_int, vol_var_char);
}
static void
test_fdim_460 (void)
{
  extern typeof (fdim (vol_var_long_long_int, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_long_long_int, vol_var_signed_char);
}
static void
test_fdim_461 (void)
{
  extern typeof (fdim (vol_var_long_long_int, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_long_long_int, vol_var_unsigned_char);
}
static void
test_fdim_462 (void)
{
  extern typeof (fdim (vol_var_long_long_int, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_long_long_int, vol_var_short_int);
}
static void
test_fdim_463 (void)
{
  extern typeof (fdim (vol_var_long_long_int, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_long_long_int, vol_var_unsigned_short_int);
}
static void
test_fdim_464 (void)
{
  extern typeof (fdim (vol_var_long_long_int, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_long_long_int, vol_var_int);
}
static void
test_fdim_465 (void)
{
  extern typeof (fdim (vol_var_long_long_int, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_long_long_int, vol_var_unsigned_int);
}
static void
test_fdim_466 (void)
{
  extern typeof (fdim (vol_var_long_long_int, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_long_long_int, vol_var_long_int);
}
static void
test_fdim_467 (void)
{
  extern typeof (fdim (vol_var_long_long_int, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_long_long_int, vol_var_unsigned_long_int);
}
static void
test_fdim_468 (void)
{
  extern typeof (fdim (vol_var_long_long_int, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_long_long_int, vol_var_long_long_int);
}
static void
test_fdim_469 (void)
{
  extern typeof (fdim (vol_var_long_long_int, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_long_long_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fdim_470 (void)
{
  extern typeof (fdim (vol_var_long_long_int, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_long_long_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fdim_471 (void)
{
  extern typeof (fdim (vol_var_long_long_int, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_long_long_int, vol_var_unsigned___int128);
}
#endif
static void
test_fdim_472 (void)
{
  extern typeof (fdim (vol_var_long_long_int, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_long_long_int, vol_var_enum_e);
}
static void
test_fdim_473 (void)
{
  extern typeof (fdim (vol_var_long_long_int, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_long_long_int, vol_var__Bool);
}
static void
test_fdim_474 (void)
{
  extern typeof (fdim (vol_var_long_long_int, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_long_long_int, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_fdim_475 (void)
{
  extern typeof (fdim (vol_var_unsigned_long_long_int, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_unsigned_long_long_int, vol_var__Float16);
}
#endif
static void
test_fdim_476 (void)
{
  extern typeof (fdim (vol_var_unsigned_long_long_int, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_unsigned_long_long_int, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_fdim_477 (void)
{
  extern typeof (fdim (vol_var_unsigned_long_long_int, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_unsigned_long_long_int, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fdim_478 (void)
{
  extern typeof (fdim (vol_var_unsigned_long_long_int, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_unsigned_long_long_int, vol_var__Float32x);
}
#endif
static void
test_fdim_479 (void)
{
  extern typeof (fdim (vol_var_unsigned_long_long_int, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_unsigned_long_long_int, vol_var_double);
}
static void
test_fdim_480 (void)
{
  extern typeof (fdim (vol_var_unsigned_long_long_int, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fdim (vol_var_unsigned_long_long_int, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_fdim_481 (void)
{
  extern typeof (fdim (vol_var_unsigned_long_long_int, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fdim (vol_var_unsigned_long_long_int, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fdim_482 (void)
{
  extern typeof (fdim (vol_var_unsigned_long_long_int, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fdim (vol_var_unsigned_long_long_int, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fdim_483 (void)
{
  extern typeof (fdim (vol_var_unsigned_long_long_int, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fdim (vol_var_unsigned_long_long_int, vol_var__Float128);
}
#endif
static void
test_fdim_484 (void)
{
  extern typeof (fdim (vol_var_unsigned_long_long_int, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_unsigned_long_long_int, vol_var_char);
}
static void
test_fdim_485 (void)
{
  extern typeof (fdim (vol_var_unsigned_long_long_int, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_unsigned_long_long_int, vol_var_signed_char);
}
static void
test_fdim_486 (void)
{
  extern typeof (fdim (vol_var_unsigned_long_long_int, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_unsigned_long_long_int, vol_var_unsigned_char);
}
static void
test_fdim_487 (void)
{
  extern typeof (fdim (vol_var_unsigned_long_long_int, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_unsigned_long_long_int, vol_var_short_int);
}
static void
test_fdim_488 (void)
{
  extern typeof (fdim (vol_var_unsigned_long_long_int, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_unsigned_long_long_int, vol_var_unsigned_short_int);
}
static void
test_fdim_489 (void)
{
  extern typeof (fdim (vol_var_unsigned_long_long_int, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_unsigned_long_long_int, vol_var_int);
}
static void
test_fdim_490 (void)
{
  extern typeof (fdim (vol_var_unsigned_long_long_int, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_unsigned_long_long_int, vol_var_unsigned_int);
}
static void
test_fdim_491 (void)
{
  extern typeof (fdim (vol_var_unsigned_long_long_int, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_unsigned_long_long_int, vol_var_long_int);
}
static void
test_fdim_492 (void)
{
  extern typeof (fdim (vol_var_unsigned_long_long_int, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_unsigned_long_long_int, vol_var_unsigned_long_int);
}
static void
test_fdim_493 (void)
{
  extern typeof (fdim (vol_var_unsigned_long_long_int, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_unsigned_long_long_int, vol_var_long_long_int);
}
static void
test_fdim_494 (void)
{
  extern typeof (fdim (vol_var_unsigned_long_long_int, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_unsigned_long_long_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fdim_495 (void)
{
  extern typeof (fdim (vol_var_unsigned_long_long_int, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_unsigned_long_long_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fdim_496 (void)
{
  extern typeof (fdim (vol_var_unsigned_long_long_int, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_unsigned_long_long_int, vol_var_unsigned___int128);
}
#endif
static void
test_fdim_497 (void)
{
  extern typeof (fdim (vol_var_unsigned_long_long_int, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_unsigned_long_long_int, vol_var_enum_e);
}
static void
test_fdim_498 (void)
{
  extern typeof (fdim (vol_var_unsigned_long_long_int, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_unsigned_long_long_int, vol_var__Bool);
}
static void
test_fdim_499 (void)
{
  extern typeof (fdim (vol_var_unsigned_long_long_int, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_unsigned_long_long_int, vol_var_bit_field);
}
#if defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_fdim_500 (void)
{
  extern typeof (fdim (vol_var___int128, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var___int128, vol_var__Float16);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fdim_501 (void)
{
  extern typeof (fdim (vol_var___int128, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var___int128, vol_var_float);
}
#endif
#if defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_fdim_502 (void)
{
  extern typeof (fdim (vol_var___int128, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var___int128, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_fdim_503 (void)
{
  extern typeof (fdim (vol_var___int128, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var___int128, vol_var__Float32x);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fdim_504 (void)
{
  extern typeof (fdim (vol_var___int128, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var___int128, vol_var_double);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fdim_505 (void)
{
  extern typeof (fdim (vol_var___int128, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fdim (vol_var___int128, vol_var_long_double);
}
#endif
#if defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_fdim_506 (void)
{
  extern typeof (fdim (vol_var___int128, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fdim (vol_var___int128, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_fdim_507 (void)
{
  extern typeof (fdim (vol_var___int128, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fdim (vol_var___int128, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_fdim_508 (void)
{
  extern typeof (fdim (vol_var___int128, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fdim (vol_var___int128, vol_var__Float128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fdim_509 (void)
{
  extern typeof (fdim (vol_var___int128, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var___int128, vol_var_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fdim_510 (void)
{
  extern typeof (fdim (vol_var___int128, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var___int128, vol_var_signed_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fdim_511 (void)
{
  extern typeof (fdim (vol_var___int128, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var___int128, vol_var_unsigned_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fdim_512 (void)
{
  extern typeof (fdim (vol_var___int128, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var___int128, vol_var_short_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fdim_513 (void)
{
  extern typeof (fdim (vol_var___int128, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var___int128, vol_var_unsigned_short_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fdim_514 (void)
{
  extern typeof (fdim (vol_var___int128, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var___int128, vol_var_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fdim_515 (void)
{
  extern typeof (fdim (vol_var___int128, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var___int128, vol_var_unsigned_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fdim_516 (void)
{
  extern typeof (fdim (vol_var___int128, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var___int128, vol_var_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fdim_517 (void)
{
  extern typeof (fdim (vol_var___int128, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var___int128, vol_var_unsigned_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fdim_518 (void)
{
  extern typeof (fdim (vol_var___int128, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var___int128, vol_var_long_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fdim_519 (void)
{
  extern typeof (fdim (vol_var___int128, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var___int128, vol_var_unsigned_long_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fdim_520 (void)
{
  extern typeof (fdim (vol_var___int128, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var___int128, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fdim_521 (void)
{
  extern typeof (fdim (vol_var___int128, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var___int128, vol_var_unsigned___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fdim_522 (void)
{
  extern typeof (fdim (vol_var___int128, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var___int128, vol_var_enum_e);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fdim_523 (void)
{
  extern typeof (fdim (vol_var___int128, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var___int128, vol_var__Bool);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fdim_524 (void)
{
  extern typeof (fdim (vol_var___int128, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var___int128, vol_var_bit_field);
}
#endif
#if defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_fdim_525 (void)
{
  extern typeof (fdim (vol_var_unsigned___int128, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_unsigned___int128, vol_var__Float16);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fdim_526 (void)
{
  extern typeof (fdim (vol_var_unsigned___int128, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_unsigned___int128, vol_var_float);
}
#endif
#if defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_fdim_527 (void)
{
  extern typeof (fdim (vol_var_unsigned___int128, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_unsigned___int128, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_fdim_528 (void)
{
  extern typeof (fdim (vol_var_unsigned___int128, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_unsigned___int128, vol_var__Float32x);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fdim_529 (void)
{
  extern typeof (fdim (vol_var_unsigned___int128, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_unsigned___int128, vol_var_double);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fdim_530 (void)
{
  extern typeof (fdim (vol_var_unsigned___int128, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fdim (vol_var_unsigned___int128, vol_var_long_double);
}
#endif
#if defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_fdim_531 (void)
{
  extern typeof (fdim (vol_var_unsigned___int128, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fdim (vol_var_unsigned___int128, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_fdim_532 (void)
{
  extern typeof (fdim (vol_var_unsigned___int128, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fdim (vol_var_unsigned___int128, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_fdim_533 (void)
{
  extern typeof (fdim (vol_var_unsigned___int128, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fdim (vol_var_unsigned___int128, vol_var__Float128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fdim_534 (void)
{
  extern typeof (fdim (vol_var_unsigned___int128, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_unsigned___int128, vol_var_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fdim_535 (void)
{
  extern typeof (fdim (vol_var_unsigned___int128, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_unsigned___int128, vol_var_signed_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fdim_536 (void)
{
  extern typeof (fdim (vol_var_unsigned___int128, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_unsigned___int128, vol_var_unsigned_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fdim_537 (void)
{
  extern typeof (fdim (vol_var_unsigned___int128, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_unsigned___int128, vol_var_short_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fdim_538 (void)
{
  extern typeof (fdim (vol_var_unsigned___int128, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_unsigned___int128, vol_var_unsigned_short_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fdim_539 (void)
{
  extern typeof (fdim (vol_var_unsigned___int128, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_unsigned___int128, vol_var_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fdim_540 (void)
{
  extern typeof (fdim (vol_var_unsigned___int128, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_unsigned___int128, vol_var_unsigned_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fdim_541 (void)
{
  extern typeof (fdim (vol_var_unsigned___int128, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_unsigned___int128, vol_var_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fdim_542 (void)
{
  extern typeof (fdim (vol_var_unsigned___int128, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_unsigned___int128, vol_var_unsigned_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fdim_543 (void)
{
  extern typeof (fdim (vol_var_unsigned___int128, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_unsigned___int128, vol_var_long_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fdim_544 (void)
{
  extern typeof (fdim (vol_var_unsigned___int128, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_unsigned___int128, vol_var_unsigned_long_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fdim_545 (void)
{
  extern typeof (fdim (vol_var_unsigned___int128, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_unsigned___int128, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fdim_546 (void)
{
  extern typeof (fdim (vol_var_unsigned___int128, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_unsigned___int128, vol_var_unsigned___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fdim_547 (void)
{
  extern typeof (fdim (vol_var_unsigned___int128, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_unsigned___int128, vol_var_enum_e);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fdim_548 (void)
{
  extern typeof (fdim (vol_var_unsigned___int128, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_unsigned___int128, vol_var__Bool);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fdim_549 (void)
{
  extern typeof (fdim (vol_var_unsigned___int128, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_unsigned___int128, vol_var_bit_field);
}
#endif
#if defined HUGE_VAL_F16
static void
test_fdim_550 (void)
{
  extern typeof (fdim (vol_var_enum_e, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_enum_e, vol_var__Float16);
}
#endif
static void
test_fdim_551 (void)
{
  extern typeof (fdim (vol_var_enum_e, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_enum_e, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_fdim_552 (void)
{
  extern typeof (fdim (vol_var_enum_e, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_enum_e, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fdim_553 (void)
{
  extern typeof (fdim (vol_var_enum_e, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_enum_e, vol_var__Float32x);
}
#endif
static void
test_fdim_554 (void)
{
  extern typeof (fdim (vol_var_enum_e, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_enum_e, vol_var_double);
}
static void
test_fdim_555 (void)
{
  extern typeof (fdim (vol_var_enum_e, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fdim (vol_var_enum_e, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_fdim_556 (void)
{
  extern typeof (fdim (vol_var_enum_e, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fdim (vol_var_enum_e, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fdim_557 (void)
{
  extern typeof (fdim (vol_var_enum_e, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fdim (vol_var_enum_e, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fdim_558 (void)
{
  extern typeof (fdim (vol_var_enum_e, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fdim (vol_var_enum_e, vol_var__Float128);
}
#endif
static void
test_fdim_559 (void)
{
  extern typeof (fdim (vol_var_enum_e, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_enum_e, vol_var_char);
}
static void
test_fdim_560 (void)
{
  extern typeof (fdim (vol_var_enum_e, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_enum_e, vol_var_signed_char);
}
static void
test_fdim_561 (void)
{
  extern typeof (fdim (vol_var_enum_e, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_enum_e, vol_var_unsigned_char);
}
static void
test_fdim_562 (void)
{
  extern typeof (fdim (vol_var_enum_e, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_enum_e, vol_var_short_int);
}
static void
test_fdim_563 (void)
{
  extern typeof (fdim (vol_var_enum_e, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_enum_e, vol_var_unsigned_short_int);
}
static void
test_fdim_564 (void)
{
  extern typeof (fdim (vol_var_enum_e, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_enum_e, vol_var_int);
}
static void
test_fdim_565 (void)
{
  extern typeof (fdim (vol_var_enum_e, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_enum_e, vol_var_unsigned_int);
}
static void
test_fdim_566 (void)
{
  extern typeof (fdim (vol_var_enum_e, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_enum_e, vol_var_long_int);
}
static void
test_fdim_567 (void)
{
  extern typeof (fdim (vol_var_enum_e, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_enum_e, vol_var_unsigned_long_int);
}
static void
test_fdim_568 (void)
{
  extern typeof (fdim (vol_var_enum_e, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_enum_e, vol_var_long_long_int);
}
static void
test_fdim_569 (void)
{
  extern typeof (fdim (vol_var_enum_e, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_enum_e, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fdim_570 (void)
{
  extern typeof (fdim (vol_var_enum_e, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_enum_e, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fdim_571 (void)
{
  extern typeof (fdim (vol_var_enum_e, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_enum_e, vol_var_unsigned___int128);
}
#endif
static void
test_fdim_572 (void)
{
  extern typeof (fdim (vol_var_enum_e, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_enum_e, vol_var_enum_e);
}
static void
test_fdim_573 (void)
{
  extern typeof (fdim (vol_var_enum_e, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_enum_e, vol_var__Bool);
}
static void
test_fdim_574 (void)
{
  extern typeof (fdim (vol_var_enum_e, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_enum_e, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_fdim_575 (void)
{
  extern typeof (fdim (vol_var__Bool, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var__Bool, vol_var__Float16);
}
#endif
static void
test_fdim_576 (void)
{
  extern typeof (fdim (vol_var__Bool, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var__Bool, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_fdim_577 (void)
{
  extern typeof (fdim (vol_var__Bool, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var__Bool, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fdim_578 (void)
{
  extern typeof (fdim (vol_var__Bool, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var__Bool, vol_var__Float32x);
}
#endif
static void
test_fdim_579 (void)
{
  extern typeof (fdim (vol_var__Bool, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var__Bool, vol_var_double);
}
static void
test_fdim_580 (void)
{
  extern typeof (fdim (vol_var__Bool, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fdim (vol_var__Bool, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_fdim_581 (void)
{
  extern typeof (fdim (vol_var__Bool, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fdim (vol_var__Bool, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fdim_582 (void)
{
  extern typeof (fdim (vol_var__Bool, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fdim (vol_var__Bool, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fdim_583 (void)
{
  extern typeof (fdim (vol_var__Bool, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fdim (vol_var__Bool, vol_var__Float128);
}
#endif
static void
test_fdim_584 (void)
{
  extern typeof (fdim (vol_var__Bool, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var__Bool, vol_var_char);
}
static void
test_fdim_585 (void)
{
  extern typeof (fdim (vol_var__Bool, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var__Bool, vol_var_signed_char);
}
static void
test_fdim_586 (void)
{
  extern typeof (fdim (vol_var__Bool, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var__Bool, vol_var_unsigned_char);
}
static void
test_fdim_587 (void)
{
  extern typeof (fdim (vol_var__Bool, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var__Bool, vol_var_short_int);
}
static void
test_fdim_588 (void)
{
  extern typeof (fdim (vol_var__Bool, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var__Bool, vol_var_unsigned_short_int);
}
static void
test_fdim_589 (void)
{
  extern typeof (fdim (vol_var__Bool, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var__Bool, vol_var_int);
}
static void
test_fdim_590 (void)
{
  extern typeof (fdim (vol_var__Bool, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var__Bool, vol_var_unsigned_int);
}
static void
test_fdim_591 (void)
{
  extern typeof (fdim (vol_var__Bool, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var__Bool, vol_var_long_int);
}
static void
test_fdim_592 (void)
{
  extern typeof (fdim (vol_var__Bool, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var__Bool, vol_var_unsigned_long_int);
}
static void
test_fdim_593 (void)
{
  extern typeof (fdim (vol_var__Bool, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var__Bool, vol_var_long_long_int);
}
static void
test_fdim_594 (void)
{
  extern typeof (fdim (vol_var__Bool, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var__Bool, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fdim_595 (void)
{
  extern typeof (fdim (vol_var__Bool, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var__Bool, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fdim_596 (void)
{
  extern typeof (fdim (vol_var__Bool, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var__Bool, vol_var_unsigned___int128);
}
#endif
static void
test_fdim_597 (void)
{
  extern typeof (fdim (vol_var__Bool, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var__Bool, vol_var_enum_e);
}
static void
test_fdim_598 (void)
{
  extern typeof (fdim (vol_var__Bool, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var__Bool, vol_var__Bool);
}
static void
test_fdim_599 (void)
{
  extern typeof (fdim (vol_var__Bool, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var__Bool, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_fdim_600 (void)
{
  extern typeof (fdim (vol_var_bit_field, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_bit_field, vol_var__Float16);
}
#endif
static void
test_fdim_601 (void)
{
  extern typeof (fdim (vol_var_bit_field, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_bit_field, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_fdim_602 (void)
{
  extern typeof (fdim (vol_var_bit_field, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_bit_field, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fdim_603 (void)
{
  extern typeof (fdim (vol_var_bit_field, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_bit_field, vol_var__Float32x);
}
#endif
static void
test_fdim_604 (void)
{
  extern typeof (fdim (vol_var_bit_field, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_bit_field, vol_var_double);
}
static void
test_fdim_605 (void)
{
  extern typeof (fdim (vol_var_bit_field, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fdim (vol_var_bit_field, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_fdim_606 (void)
{
  extern typeof (fdim (vol_var_bit_field, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fdim (vol_var_bit_field, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fdim_607 (void)
{
  extern typeof (fdim (vol_var_bit_field, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fdim (vol_var_bit_field, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fdim_608 (void)
{
  extern typeof (fdim (vol_var_bit_field, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fdim (vol_var_bit_field, vol_var__Float128);
}
#endif
static void
test_fdim_609 (void)
{
  extern typeof (fdim (vol_var_bit_field, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_bit_field, vol_var_char);
}
static void
test_fdim_610 (void)
{
  extern typeof (fdim (vol_var_bit_field, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_bit_field, vol_var_signed_char);
}
static void
test_fdim_611 (void)
{
  extern typeof (fdim (vol_var_bit_field, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_bit_field, vol_var_unsigned_char);
}
static void
test_fdim_612 (void)
{
  extern typeof (fdim (vol_var_bit_field, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_bit_field, vol_var_short_int);
}
static void
test_fdim_613 (void)
{
  extern typeof (fdim (vol_var_bit_field, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_bit_field, vol_var_unsigned_short_int);
}
static void
test_fdim_614 (void)
{
  extern typeof (fdim (vol_var_bit_field, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_bit_field, vol_var_int);
}
static void
test_fdim_615 (void)
{
  extern typeof (fdim (vol_var_bit_field, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_bit_field, vol_var_unsigned_int);
}
static void
test_fdim_616 (void)
{
  extern typeof (fdim (vol_var_bit_field, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_bit_field, vol_var_long_int);
}
static void
test_fdim_617 (void)
{
  extern typeof (fdim (vol_var_bit_field, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_bit_field, vol_var_unsigned_long_int);
}
static void
test_fdim_618 (void)
{
  extern typeof (fdim (vol_var_bit_field, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_bit_field, vol_var_long_long_int);
}
static void
test_fdim_619 (void)
{
  extern typeof (fdim (vol_var_bit_field, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_bit_field, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fdim_620 (void)
{
  extern typeof (fdim (vol_var_bit_field, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_bit_field, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fdim_621 (void)
{
  extern typeof (fdim (vol_var_bit_field, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_bit_field, vol_var_unsigned___int128);
}
#endif
static void
test_fdim_622 (void)
{
  extern typeof (fdim (vol_var_bit_field, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_bit_field, vol_var_enum_e);
}
static void
test_fdim_623 (void)
{
  extern typeof (fdim (vol_var_bit_field, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_bit_field, vol_var__Bool);
}
static void
test_fdim_624 (void)
{
  extern typeof (fdim (vol_var_bit_field, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = fdim (vol_var_bit_field, vol_var_bit_field);
}
static const struct test tests[] =
  {
#if defined HUGE_VAL_F16
    { test_fdim_0, "fdim", "fdim (_Float16, _Float16)", FLT16_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_fdim_1, "fdim", "fdim (_Float16, float)", FLT_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F32
    { test_fdim_2, "fdim", "fdim (_Float16, _Float32)", FLT32_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
    { test_fdim_3, "fdim", "fdim (_Float16, _Float32x)", FLT32X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_fdim_4, "fdim", "fdim (_Float16, double)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_fdim_5, "fdim", "fdim (_Float16, long double)", LDBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F64
    { test_fdim_6, "fdim", "fdim (_Float16, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
    { test_fdim_7, "fdim", "fdim (_Float16, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F16
    { test_fdim_8, "fdim", "fdim (_Float16, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_fdim_9, "fdim", "fdim (_Float16, char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_fdim_10, "fdim", "fdim (_Float16, signed char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_fdim_11, "fdim", "fdim (_Float16, unsigned char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_fdim_12, "fdim", "fdim (_Float16, short int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_fdim_13, "fdim", "fdim (_Float16, unsigned short int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_fdim_14, "fdim", "fdim (_Float16, int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_fdim_15, "fdim", "fdim (_Float16, unsigned int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_fdim_16, "fdim", "fdim (_Float16, long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_fdim_17, "fdim", "fdim (_Float16, unsigned long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_fdim_18, "fdim", "fdim (_Float16, long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_fdim_19, "fdim", "fdim (_Float16, unsigned long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_fdim_20, "fdim", "fdim (_Float16, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_fdim_21, "fdim", "fdim (_Float16, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_fdim_22, "fdim", "fdim (_Float16, enum e)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_fdim_23, "fdim", "fdim (_Float16, _Bool)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_fdim_24, "fdim", "fdim (_Float16, bit_field)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_fdim_25, "fdim", "fdim (float, _Float16)", FLT_MANT_DIG, 0 },
#endif
    { test_fdim_26, "fdim", "fdim (float, float)", FLT_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_fdim_27, "fdim", "fdim (float, _Float32)", FLT32_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fdim_28, "fdim", "fdim (float, _Float32x)", FLT32X_MANT_DIG, 0 },
#endif
    { test_fdim_29, "fdim", "fdim (float, double)", DBL_MANT_DIG, 0 },
    { test_fdim_30, "fdim", "fdim (float, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_fdim_31, "fdim", "fdim (float, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fdim_32, "fdim", "fdim (float, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fdim_33, "fdim", "fdim (float, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_fdim_34, "fdim", "fdim (float, char)", DBL_MANT_DIG, 0 },
    { test_fdim_35, "fdim", "fdim (float, signed char)", DBL_MANT_DIG, 0 },
    { test_fdim_36, "fdim", "fdim (float, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fdim_37, "fdim", "fdim (float, short int)", DBL_MANT_DIG, 0 },
    { test_fdim_38, "fdim", "fdim (float, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fdim_39, "fdim", "fdim (float, int)", DBL_MANT_DIG, 0 },
    { test_fdim_40, "fdim", "fdim (float, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fdim_41, "fdim", "fdim (float, long int)", DBL_MANT_DIG, 0 },
    { test_fdim_42, "fdim", "fdim (float, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fdim_43, "fdim", "fdim (float, long long int)", DBL_MANT_DIG, 0 },
    { test_fdim_44, "fdim", "fdim (float, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fdim_45, "fdim", "fdim (float, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fdim_46, "fdim", "fdim (float, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fdim_47, "fdim", "fdim (float, enum e)", DBL_MANT_DIG, 0 },
    { test_fdim_48, "fdim", "fdim (float, _Bool)", DBL_MANT_DIG, 0 },
    { test_fdim_49, "fdim", "fdim (float, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F32
    { test_fdim_50, "fdim", "fdim (_Float32, _Float16)", FLT32_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_fdim_51, "fdim", "fdim (_Float32, float)", FLT32_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_fdim_52, "fdim", "fdim (_Float32, _Float32)", FLT32_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
    { test_fdim_53, "fdim", "fdim (_Float32, _Float32x)", FLT32X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_fdim_54, "fdim", "fdim (_Float32, double)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_fdim_55, "fdim", "fdim (_Float32, long double)", LDBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F64
    { test_fdim_56, "fdim", "fdim (_Float32, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
    { test_fdim_57, "fdim", "fdim (_Float32, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F32
    { test_fdim_58, "fdim", "fdim (_Float32, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_fdim_59, "fdim", "fdim (_Float32, char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_fdim_60, "fdim", "fdim (_Float32, signed char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_fdim_61, "fdim", "fdim (_Float32, unsigned char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_fdim_62, "fdim", "fdim (_Float32, short int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_fdim_63, "fdim", "fdim (_Float32, unsigned short int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_fdim_64, "fdim", "fdim (_Float32, int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_fdim_65, "fdim", "fdim (_Float32, unsigned int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_fdim_66, "fdim", "fdim (_Float32, long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_fdim_67, "fdim", "fdim (_Float32, unsigned long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_fdim_68, "fdim", "fdim (_Float32, long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_fdim_69, "fdim", "fdim (_Float32, unsigned long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_fdim_70, "fdim", "fdim (_Float32, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_fdim_71, "fdim", "fdim (_Float32, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_fdim_72, "fdim", "fdim (_Float32, enum e)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_fdim_73, "fdim", "fdim (_Float32, _Bool)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_fdim_74, "fdim", "fdim (_Float32, bit_field)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
    { test_fdim_75, "fdim", "fdim (_Float32x, _Float16)", FLT32X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fdim_76, "fdim", "fdim (_Float32x, float)", FLT32X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
    { test_fdim_77, "fdim", "fdim (_Float32x, _Float32)", FLT32X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fdim_78, "fdim", "fdim (_Float32x, _Float32x)", FLT32X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fdim_79, "fdim", "fdim (_Float32x, double)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fdim_80, "fdim", "fdim (_Float32x, long double)", LDBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X && defined HUGE_VAL_F64
    { test_fdim_81, "fdim", "fdim (_Float32x, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
    { test_fdim_82, "fdim", "fdim (_Float32x, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
    { test_fdim_83, "fdim", "fdim (_Float32x, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fdim_84, "fdim", "fdim (_Float32x, char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fdim_85, "fdim", "fdim (_Float32x, signed char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fdim_86, "fdim", "fdim (_Float32x, unsigned char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fdim_87, "fdim", "fdim (_Float32x, short int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fdim_88, "fdim", "fdim (_Float32x, unsigned short int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fdim_89, "fdim", "fdim (_Float32x, int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fdim_90, "fdim", "fdim (_Float32x, unsigned int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fdim_91, "fdim", "fdim (_Float32x, long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fdim_92, "fdim", "fdim (_Float32x, unsigned long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fdim_93, "fdim", "fdim (_Float32x, long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fdim_94, "fdim", "fdim (_Float32x, unsigned long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_fdim_95, "fdim", "fdim (_Float32x, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_fdim_96, "fdim", "fdim (_Float32x, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fdim_97, "fdim", "fdim (_Float32x, enum e)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fdim_98, "fdim", "fdim (_Float32x, _Bool)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fdim_99, "fdim", "fdim (_Float32x, bit_field)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_fdim_100, "fdim", "fdim (double, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_fdim_101, "fdim", "fdim (double, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_fdim_102, "fdim", "fdim (double, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fdim_103, "fdim", "fdim (double, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_fdim_104, "fdim", "fdim (double, double)", DBL_MANT_DIG, 0 },
    { test_fdim_105, "fdim", "fdim (double, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_fdim_106, "fdim", "fdim (double, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fdim_107, "fdim", "fdim (double, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fdim_108, "fdim", "fdim (double, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_fdim_109, "fdim", "fdim (double, char)", DBL_MANT_DIG, 0 },
    { test_fdim_110, "fdim", "fdim (double, signed char)", DBL_MANT_DIG, 0 },
    { test_fdim_111, "fdim", "fdim (double, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fdim_112, "fdim", "fdim (double, short int)", DBL_MANT_DIG, 0 },
    { test_fdim_113, "fdim", "fdim (double, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fdim_114, "fdim", "fdim (double, int)", DBL_MANT_DIG, 0 },
    { test_fdim_115, "fdim", "fdim (double, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fdim_116, "fdim", "fdim (double, long int)", DBL_MANT_DIG, 0 },
    { test_fdim_117, "fdim", "fdim (double, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fdim_118, "fdim", "fdim (double, long long int)", DBL_MANT_DIG, 0 },
    { test_fdim_119, "fdim", "fdim (double, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fdim_120, "fdim", "fdim (double, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fdim_121, "fdim", "fdim (double, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fdim_122, "fdim", "fdim (double, enum e)", DBL_MANT_DIG, 0 },
    { test_fdim_123, "fdim", "fdim (double, _Bool)", DBL_MANT_DIG, 0 },
    { test_fdim_124, "fdim", "fdim (double, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_fdim_125, "fdim", "fdim (long double, _Float16)", LDBL_MANT_DIG, 0 },
#endif
    { test_fdim_126, "fdim", "fdim (long double, float)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_fdim_127, "fdim", "fdim (long double, _Float32)", LDBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fdim_128, "fdim", "fdim (long double, _Float32x)", LDBL_MANT_DIG, 0 },
#endif
    { test_fdim_129, "fdim", "fdim (long double, double)", LDBL_MANT_DIG, 0 },
    { test_fdim_130, "fdim", "fdim (long double, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_fdim_131, "fdim", "fdim (long double, _Float64)", LDBL_MANT_DIG, 0 },
#endif
#if (LDBL_MANT_DIG != 106) && defined HUGE_VAL_F64X
    { test_fdim_132, "fdim", "fdim (long double, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (LDBL_MANT_DIG != 106) && defined HUGE_VAL_F128
    { test_fdim_133, "fdim", "fdim (long double, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_fdim_134, "fdim", "fdim (long double, char)", LDBL_MANT_DIG, 0 },
    { test_fdim_135, "fdim", "fdim (long double, signed char)", LDBL_MANT_DIG, 0 },
    { test_fdim_136, "fdim", "fdim (long double, unsigned char)", LDBL_MANT_DIG, 0 },
    { test_fdim_137, "fdim", "fdim (long double, short int)", LDBL_MANT_DIG, 0 },
    { test_fdim_138, "fdim", "fdim (long double, unsigned short int)", LDBL_MANT_DIG, 0 },
    { test_fdim_139, "fdim", "fdim (long double, int)", LDBL_MANT_DIG, 0 },
    { test_fdim_140, "fdim", "fdim (long double, unsigned int)", LDBL_MANT_DIG, 0 },
    { test_fdim_141, "fdim", "fdim (long double, long int)", LDBL_MANT_DIG, 0 },
    { test_fdim_142, "fdim", "fdim (long double, unsigned long int)", LDBL_MANT_DIG, 0 },
    { test_fdim_143, "fdim", "fdim (long double, long long int)", LDBL_MANT_DIG, 0 },
    { test_fdim_144, "fdim", "fdim (long double, unsigned long long int)", LDBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fdim_145, "fdim", "fdim (long double, __int128)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fdim_146, "fdim", "fdim (long double, unsigned __int128)", LDBL_MANT_DIG, 0 },
#endif
    { test_fdim_147, "fdim", "fdim (long double, enum e)", LDBL_MANT_DIG, 0 },
    { test_fdim_148, "fdim", "fdim (long double, _Bool)", LDBL_MANT_DIG, 0 },
    { test_fdim_149, "fdim", "fdim (long double, bit_field)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F64
    { test_fdim_150, "fdim", "fdim (_Float64, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_fdim_151, "fdim", "fdim (_Float64, float)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F64
    { test_fdim_152, "fdim", "fdim (_Float64, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X && defined HUGE_VAL_F64
    { test_fdim_153, "fdim", "fdim (_Float64, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_fdim_154, "fdim", "fdim (_Float64, double)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_fdim_155, "fdim", "fdim (_Float64, long double)", LDBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_fdim_156, "fdim", "fdim (_Float64, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
    { test_fdim_157, "fdim", "fdim (_Float64, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F64
    { test_fdim_158, "fdim", "fdim (_Float64, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_fdim_159, "fdim", "fdim (_Float64, char)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_fdim_160, "fdim", "fdim (_Float64, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_fdim_161, "fdim", "fdim (_Float64, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_fdim_162, "fdim", "fdim (_Float64, short int)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_fdim_163, "fdim", "fdim (_Float64, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_fdim_164, "fdim", "fdim (_Float64, int)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_fdim_165, "fdim", "fdim (_Float64, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_fdim_166, "fdim", "fdim (_Float64, long int)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_fdim_167, "fdim", "fdim (_Float64, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_fdim_168, "fdim", "fdim (_Float64, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_fdim_169, "fdim", "fdim (_Float64, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_fdim_170, "fdim", "fdim (_Float64, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_fdim_171, "fdim", "fdim (_Float64, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_fdim_172, "fdim", "fdim (_Float64, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_fdim_173, "fdim", "fdim (_Float64, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_fdim_174, "fdim", "fdim (_Float64, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
    { test_fdim_175, "fdim", "fdim (_Float64x, _Float16)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fdim_176, "fdim", "fdim (_Float64x, float)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
    { test_fdim_177, "fdim", "fdim (_Float64x, _Float32)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
    { test_fdim_178, "fdim", "fdim (_Float64x, _Float32x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fdim_179, "fdim", "fdim (_Float64x, double)", FLT64X_MANT_DIG, 0 },
#endif
#if (LDBL_MANT_DIG != 106) && defined HUGE_VAL_F64X
    { test_fdim_180, "fdim", "fdim (_Float64x, long double)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
    { test_fdim_181, "fdim", "fdim (_Float64x, _Float64)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fdim_182, "fdim", "fdim (_Float64x, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
    { test_fdim_183, "fdim", "fdim (_Float64x, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fdim_184, "fdim", "fdim (_Float64x, char)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fdim_185, "fdim", "fdim (_Float64x, signed char)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fdim_186, "fdim", "fdim (_Float64x, unsigned char)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fdim_187, "fdim", "fdim (_Float64x, short int)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fdim_188, "fdim", "fdim (_Float64x, unsigned short int)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fdim_189, "fdim", "fdim (_Float64x, int)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fdim_190, "fdim", "fdim (_Float64x, unsigned int)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fdim_191, "fdim", "fdim (_Float64x, long int)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fdim_192, "fdim", "fdim (_Float64x, unsigned long int)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fdim_193, "fdim", "fdim (_Float64x, long long int)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fdim_194, "fdim", "fdim (_Float64x, unsigned long long int)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_fdim_195, "fdim", "fdim (_Float64x, __int128)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_fdim_196, "fdim", "fdim (_Float64x, unsigned __int128)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fdim_197, "fdim", "fdim (_Float64x, enum e)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fdim_198, "fdim", "fdim (_Float64x, _Bool)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fdim_199, "fdim", "fdim (_Float64x, bit_field)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F16
    { test_fdim_200, "fdim", "fdim (_Float128, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fdim_201, "fdim", "fdim (_Float128, float)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F32
    { test_fdim_202, "fdim", "fdim (_Float128, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
    { test_fdim_203, "fdim", "fdim (_Float128, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fdim_204, "fdim", "fdim (_Float128, double)", FLT128_MANT_DIG, 0 },
#endif
#if (LDBL_MANT_DIG != 106) && defined HUGE_VAL_F128
    { test_fdim_205, "fdim", "fdim (_Float128, long double)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F64
    { test_fdim_206, "fdim", "fdim (_Float128, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
    { test_fdim_207, "fdim", "fdim (_Float128, _Float64x)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fdim_208, "fdim", "fdim (_Float128, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fdim_209, "fdim", "fdim (_Float128, char)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fdim_210, "fdim", "fdim (_Float128, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fdim_211, "fdim", "fdim (_Float128, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fdim_212, "fdim", "fdim (_Float128, short int)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fdim_213, "fdim", "fdim (_Float128, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fdim_214, "fdim", "fdim (_Float128, int)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fdim_215, "fdim", "fdim (_Float128, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fdim_216, "fdim", "fdim (_Float128, long int)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fdim_217, "fdim", "fdim (_Float128, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fdim_218, "fdim", "fdim (_Float128, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fdim_219, "fdim", "fdim (_Float128, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_fdim_220, "fdim", "fdim (_Float128, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_fdim_221, "fdim", "fdim (_Float128, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fdim_222, "fdim", "fdim (_Float128, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fdim_223, "fdim", "fdim (_Float128, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fdim_224, "fdim", "fdim (_Float128, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_fdim_225, "fdim", "fdim (char, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_fdim_226, "fdim", "fdim (char, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_fdim_227, "fdim", "fdim (char, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fdim_228, "fdim", "fdim (char, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_fdim_229, "fdim", "fdim (char, double)", DBL_MANT_DIG, 0 },
    { test_fdim_230, "fdim", "fdim (char, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_fdim_231, "fdim", "fdim (char, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fdim_232, "fdim", "fdim (char, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fdim_233, "fdim", "fdim (char, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_fdim_234, "fdim", "fdim (char, char)", DBL_MANT_DIG, 0 },
    { test_fdim_235, "fdim", "fdim (char, signed char)", DBL_MANT_DIG, 0 },
    { test_fdim_236, "fdim", "fdim (char, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fdim_237, "fdim", "fdim (char, short int)", DBL_MANT_DIG, 0 },
    { test_fdim_238, "fdim", "fdim (char, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fdim_239, "fdim", "fdim (char, int)", DBL_MANT_DIG, 0 },
    { test_fdim_240, "fdim", "fdim (char, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fdim_241, "fdim", "fdim (char, long int)", DBL_MANT_DIG, 0 },
    { test_fdim_242, "fdim", "fdim (char, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fdim_243, "fdim", "fdim (char, long long int)", DBL_MANT_DIG, 0 },
    { test_fdim_244, "fdim", "fdim (char, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fdim_245, "fdim", "fdim (char, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fdim_246, "fdim", "fdim (char, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fdim_247, "fdim", "fdim (char, enum e)", DBL_MANT_DIG, 0 },
    { test_fdim_248, "fdim", "fdim (char, _Bool)", DBL_MANT_DIG, 0 },
    { test_fdim_249, "fdim", "fdim (char, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_fdim_250, "fdim", "fdim (signed char, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_fdim_251, "fdim", "fdim (signed char, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_fdim_252, "fdim", "fdim (signed char, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fdim_253, "fdim", "fdim (signed char, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_fdim_254, "fdim", "fdim (signed char, double)", DBL_MANT_DIG, 0 },
    { test_fdim_255, "fdim", "fdim (signed char, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_fdim_256, "fdim", "fdim (signed char, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fdim_257, "fdim", "fdim (signed char, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fdim_258, "fdim", "fdim (signed char, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_fdim_259, "fdim", "fdim (signed char, char)", DBL_MANT_DIG, 0 },
    { test_fdim_260, "fdim", "fdim (signed char, signed char)", DBL_MANT_DIG, 0 },
    { test_fdim_261, "fdim", "fdim (signed char, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fdim_262, "fdim", "fdim (signed char, short int)", DBL_MANT_DIG, 0 },
    { test_fdim_263, "fdim", "fdim (signed char, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fdim_264, "fdim", "fdim (signed char, int)", DBL_MANT_DIG, 0 },
    { test_fdim_265, "fdim", "fdim (signed char, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fdim_266, "fdim", "fdim (signed char, long int)", DBL_MANT_DIG, 0 },
    { test_fdim_267, "fdim", "fdim (signed char, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fdim_268, "fdim", "fdim (signed char, long long int)", DBL_MANT_DIG, 0 },
    { test_fdim_269, "fdim", "fdim (signed char, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fdim_270, "fdim", "fdim (signed char, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fdim_271, "fdim", "fdim (signed char, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fdim_272, "fdim", "fdim (signed char, enum e)", DBL_MANT_DIG, 0 },
    { test_fdim_273, "fdim", "fdim (signed char, _Bool)", DBL_MANT_DIG, 0 },
    { test_fdim_274, "fdim", "fdim (signed char, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_fdim_275, "fdim", "fdim (unsigned char, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_fdim_276, "fdim", "fdim (unsigned char, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_fdim_277, "fdim", "fdim (unsigned char, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fdim_278, "fdim", "fdim (unsigned char, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_fdim_279, "fdim", "fdim (unsigned char, double)", DBL_MANT_DIG, 0 },
    { test_fdim_280, "fdim", "fdim (unsigned char, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_fdim_281, "fdim", "fdim (unsigned char, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fdim_282, "fdim", "fdim (unsigned char, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fdim_283, "fdim", "fdim (unsigned char, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_fdim_284, "fdim", "fdim (unsigned char, char)", DBL_MANT_DIG, 0 },
    { test_fdim_285, "fdim", "fdim (unsigned char, signed char)", DBL_MANT_DIG, 0 },
    { test_fdim_286, "fdim", "fdim (unsigned char, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fdim_287, "fdim", "fdim (unsigned char, short int)", DBL_MANT_DIG, 0 },
    { test_fdim_288, "fdim", "fdim (unsigned char, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fdim_289, "fdim", "fdim (unsigned char, int)", DBL_MANT_DIG, 0 },
    { test_fdim_290, "fdim", "fdim (unsigned char, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fdim_291, "fdim", "fdim (unsigned char, long int)", DBL_MANT_DIG, 0 },
    { test_fdim_292, "fdim", "fdim (unsigned char, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fdim_293, "fdim", "fdim (unsigned char, long long int)", DBL_MANT_DIG, 0 },
    { test_fdim_294, "fdim", "fdim (unsigned char, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fdim_295, "fdim", "fdim (unsigned char, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fdim_296, "fdim", "fdim (unsigned char, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fdim_297, "fdim", "fdim (unsigned char, enum e)", DBL_MANT_DIG, 0 },
    { test_fdim_298, "fdim", "fdim (unsigned char, _Bool)", DBL_MANT_DIG, 0 },
    { test_fdim_299, "fdim", "fdim (unsigned char, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_fdim_300, "fdim", "fdim (short int, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_fdim_301, "fdim", "fdim (short int, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_fdim_302, "fdim", "fdim (short int, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fdim_303, "fdim", "fdim (short int, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_fdim_304, "fdim", "fdim (short int, double)", DBL_MANT_DIG, 0 },
    { test_fdim_305, "fdim", "fdim (short int, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_fdim_306, "fdim", "fdim (short int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fdim_307, "fdim", "fdim (short int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fdim_308, "fdim", "fdim (short int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_fdim_309, "fdim", "fdim (short int, char)", DBL_MANT_DIG, 0 },
    { test_fdim_310, "fdim", "fdim (short int, signed char)", DBL_MANT_DIG, 0 },
    { test_fdim_311, "fdim", "fdim (short int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fdim_312, "fdim", "fdim (short int, short int)", DBL_MANT_DIG, 0 },
    { test_fdim_313, "fdim", "fdim (short int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fdim_314, "fdim", "fdim (short int, int)", DBL_MANT_DIG, 0 },
    { test_fdim_315, "fdim", "fdim (short int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fdim_316, "fdim", "fdim (short int, long int)", DBL_MANT_DIG, 0 },
    { test_fdim_317, "fdim", "fdim (short int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fdim_318, "fdim", "fdim (short int, long long int)", DBL_MANT_DIG, 0 },
    { test_fdim_319, "fdim", "fdim (short int, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fdim_320, "fdim", "fdim (short int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fdim_321, "fdim", "fdim (short int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fdim_322, "fdim", "fdim (short int, enum e)", DBL_MANT_DIG, 0 },
    { test_fdim_323, "fdim", "fdim (short int, _Bool)", DBL_MANT_DIG, 0 },
    { test_fdim_324, "fdim", "fdim (short int, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_fdim_325, "fdim", "fdim (unsigned short int, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_fdim_326, "fdim", "fdim (unsigned short int, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_fdim_327, "fdim", "fdim (unsigned short int, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fdim_328, "fdim", "fdim (unsigned short int, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_fdim_329, "fdim", "fdim (unsigned short int, double)", DBL_MANT_DIG, 0 },
    { test_fdim_330, "fdim", "fdim (unsigned short int, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_fdim_331, "fdim", "fdim (unsigned short int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fdim_332, "fdim", "fdim (unsigned short int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fdim_333, "fdim", "fdim (unsigned short int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_fdim_334, "fdim", "fdim (unsigned short int, char)", DBL_MANT_DIG, 0 },
    { test_fdim_335, "fdim", "fdim (unsigned short int, signed char)", DBL_MANT_DIG, 0 },
    { test_fdim_336, "fdim", "fdim (unsigned short int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fdim_337, "fdim", "fdim (unsigned short int, short int)", DBL_MANT_DIG, 0 },
    { test_fdim_338, "fdim", "fdim (unsigned short int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fdim_339, "fdim", "fdim (unsigned short int, int)", DBL_MANT_DIG, 0 },
    { test_fdim_340, "fdim", "fdim (unsigned short int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fdim_341, "fdim", "fdim (unsigned short int, long int)", DBL_MANT_DIG, 0 },
    { test_fdim_342, "fdim", "fdim (unsigned short int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fdim_343, "fdim", "fdim (unsigned short int, long long int)", DBL_MANT_DIG, 0 },
    { test_fdim_344, "fdim", "fdim (unsigned short int, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fdim_345, "fdim", "fdim (unsigned short int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fdim_346, "fdim", "fdim (unsigned short int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fdim_347, "fdim", "fdim (unsigned short int, enum e)", DBL_MANT_DIG, 0 },
    { test_fdim_348, "fdim", "fdim (unsigned short int, _Bool)", DBL_MANT_DIG, 0 },
    { test_fdim_349, "fdim", "fdim (unsigned short int, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_fdim_350, "fdim", "fdim (int, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_fdim_351, "fdim", "fdim (int, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_fdim_352, "fdim", "fdim (int, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fdim_353, "fdim", "fdim (int, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_fdim_354, "fdim", "fdim (int, double)", DBL_MANT_DIG, 0 },
    { test_fdim_355, "fdim", "fdim (int, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_fdim_356, "fdim", "fdim (int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fdim_357, "fdim", "fdim (int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fdim_358, "fdim", "fdim (int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_fdim_359, "fdim", "fdim (int, char)", DBL_MANT_DIG, 0 },
    { test_fdim_360, "fdim", "fdim (int, signed char)", DBL_MANT_DIG, 0 },
    { test_fdim_361, "fdim", "fdim (int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fdim_362, "fdim", "fdim (int, short int)", DBL_MANT_DIG, 0 },
    { test_fdim_363, "fdim", "fdim (int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fdim_364, "fdim", "fdim (int, int)", DBL_MANT_DIG, 0 },
    { test_fdim_365, "fdim", "fdim (int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fdim_366, "fdim", "fdim (int, long int)", DBL_MANT_DIG, 0 },
    { test_fdim_367, "fdim", "fdim (int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fdim_368, "fdim", "fdim (int, long long int)", DBL_MANT_DIG, 0 },
    { test_fdim_369, "fdim", "fdim (int, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fdim_370, "fdim", "fdim (int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fdim_371, "fdim", "fdim (int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fdim_372, "fdim", "fdim (int, enum e)", DBL_MANT_DIG, 0 },
    { test_fdim_373, "fdim", "fdim (int, _Bool)", DBL_MANT_DIG, 0 },
    { test_fdim_374, "fdim", "fdim (int, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_fdim_375, "fdim", "fdim (unsigned int, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_fdim_376, "fdim", "fdim (unsigned int, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_fdim_377, "fdim", "fdim (unsigned int, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fdim_378, "fdim", "fdim (unsigned int, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_fdim_379, "fdim", "fdim (unsigned int, double)", DBL_MANT_DIG, 0 },
    { test_fdim_380, "fdim", "fdim (unsigned int, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_fdim_381, "fdim", "fdim (unsigned int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fdim_382, "fdim", "fdim (unsigned int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fdim_383, "fdim", "fdim (unsigned int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_fdim_384, "fdim", "fdim (unsigned int, char)", DBL_MANT_DIG, 0 },
    { test_fdim_385, "fdim", "fdim (unsigned int, signed char)", DBL_MANT_DIG, 0 },
    { test_fdim_386, "fdim", "fdim (unsigned int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fdim_387, "fdim", "fdim (unsigned int, short int)", DBL_MANT_DIG, 0 },
    { test_fdim_388, "fdim", "fdim (unsigned int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fdim_389, "fdim", "fdim (unsigned int, int)", DBL_MANT_DIG, 0 },
    { test_fdim_390, "fdim", "fdim (unsigned int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fdim_391, "fdim", "fdim (unsigned int, long int)", DBL_MANT_DIG, 0 },
    { test_fdim_392, "fdim", "fdim (unsigned int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fdim_393, "fdim", "fdim (unsigned int, long long int)", DBL_MANT_DIG, 0 },
    { test_fdim_394, "fdim", "fdim (unsigned int, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fdim_395, "fdim", "fdim (unsigned int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fdim_396, "fdim", "fdim (unsigned int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fdim_397, "fdim", "fdim (unsigned int, enum e)", DBL_MANT_DIG, 0 },
    { test_fdim_398, "fdim", "fdim (unsigned int, _Bool)", DBL_MANT_DIG, 0 },
    { test_fdim_399, "fdim", "fdim (unsigned int, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_fdim_400, "fdim", "fdim (long int, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_fdim_401, "fdim", "fdim (long int, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_fdim_402, "fdim", "fdim (long int, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fdim_403, "fdim", "fdim (long int, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_fdim_404, "fdim", "fdim (long int, double)", DBL_MANT_DIG, 0 },
    { test_fdim_405, "fdim", "fdim (long int, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_fdim_406, "fdim", "fdim (long int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fdim_407, "fdim", "fdim (long int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fdim_408, "fdim", "fdim (long int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_fdim_409, "fdim", "fdim (long int, char)", DBL_MANT_DIG, 0 },
    { test_fdim_410, "fdim", "fdim (long int, signed char)", DBL_MANT_DIG, 0 },
    { test_fdim_411, "fdim", "fdim (long int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fdim_412, "fdim", "fdim (long int, short int)", DBL_MANT_DIG, 0 },
    { test_fdim_413, "fdim", "fdim (long int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fdim_414, "fdim", "fdim (long int, int)", DBL_MANT_DIG, 0 },
    { test_fdim_415, "fdim", "fdim (long int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fdim_416, "fdim", "fdim (long int, long int)", DBL_MANT_DIG, 0 },
    { test_fdim_417, "fdim", "fdim (long int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fdim_418, "fdim", "fdim (long int, long long int)", DBL_MANT_DIG, 0 },
    { test_fdim_419, "fdim", "fdim (long int, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fdim_420, "fdim", "fdim (long int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fdim_421, "fdim", "fdim (long int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fdim_422, "fdim", "fdim (long int, enum e)", DBL_MANT_DIG, 0 },
    { test_fdim_423, "fdim", "fdim (long int, _Bool)", DBL_MANT_DIG, 0 },
    { test_fdim_424, "fdim", "fdim (long int, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_fdim_425, "fdim", "fdim (unsigned long int, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_fdim_426, "fdim", "fdim (unsigned long int, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_fdim_427, "fdim", "fdim (unsigned long int, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fdim_428, "fdim", "fdim (unsigned long int, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_fdim_429, "fdim", "fdim (unsigned long int, double)", DBL_MANT_DIG, 0 },
    { test_fdim_430, "fdim", "fdim (unsigned long int, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_fdim_431, "fdim", "fdim (unsigned long int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fdim_432, "fdim", "fdim (unsigned long int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fdim_433, "fdim", "fdim (unsigned long int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_fdim_434, "fdim", "fdim (unsigned long int, char)", DBL_MANT_DIG, 0 },
    { test_fdim_435, "fdim", "fdim (unsigned long int, signed char)", DBL_MANT_DIG, 0 },
    { test_fdim_436, "fdim", "fdim (unsigned long int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fdim_437, "fdim", "fdim (unsigned long int, short int)", DBL_MANT_DIG, 0 },
    { test_fdim_438, "fdim", "fdim (unsigned long int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fdim_439, "fdim", "fdim (unsigned long int, int)", DBL_MANT_DIG, 0 },
    { test_fdim_440, "fdim", "fdim (unsigned long int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fdim_441, "fdim", "fdim (unsigned long int, long int)", DBL_MANT_DIG, 0 },
    { test_fdim_442, "fdim", "fdim (unsigned long int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fdim_443, "fdim", "fdim (unsigned long int, long long int)", DBL_MANT_DIG, 0 },
    { test_fdim_444, "fdim", "fdim (unsigned long int, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fdim_445, "fdim", "fdim (unsigned long int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fdim_446, "fdim", "fdim (unsigned long int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fdim_447, "fdim", "fdim (unsigned long int, enum e)", DBL_MANT_DIG, 0 },
    { test_fdim_448, "fdim", "fdim (unsigned long int, _Bool)", DBL_MANT_DIG, 0 },
    { test_fdim_449, "fdim", "fdim (unsigned long int, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_fdim_450, "fdim", "fdim (long long int, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_fdim_451, "fdim", "fdim (long long int, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_fdim_452, "fdim", "fdim (long long int, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fdim_453, "fdim", "fdim (long long int, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_fdim_454, "fdim", "fdim (long long int, double)", DBL_MANT_DIG, 0 },
    { test_fdim_455, "fdim", "fdim (long long int, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_fdim_456, "fdim", "fdim (long long int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fdim_457, "fdim", "fdim (long long int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fdim_458, "fdim", "fdim (long long int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_fdim_459, "fdim", "fdim (long long int, char)", DBL_MANT_DIG, 0 },
    { test_fdim_460, "fdim", "fdim (long long int, signed char)", DBL_MANT_DIG, 0 },
    { test_fdim_461, "fdim", "fdim (long long int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fdim_462, "fdim", "fdim (long long int, short int)", DBL_MANT_DIG, 0 },
    { test_fdim_463, "fdim", "fdim (long long int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fdim_464, "fdim", "fdim (long long int, int)", DBL_MANT_DIG, 0 },
    { test_fdim_465, "fdim", "fdim (long long int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fdim_466, "fdim", "fdim (long long int, long int)", DBL_MANT_DIG, 0 },
    { test_fdim_467, "fdim", "fdim (long long int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fdim_468, "fdim", "fdim (long long int, long long int)", DBL_MANT_DIG, 0 },
    { test_fdim_469, "fdim", "fdim (long long int, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fdim_470, "fdim", "fdim (long long int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fdim_471, "fdim", "fdim (long long int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fdim_472, "fdim", "fdim (long long int, enum e)", DBL_MANT_DIG, 0 },
    { test_fdim_473, "fdim", "fdim (long long int, _Bool)", DBL_MANT_DIG, 0 },
    { test_fdim_474, "fdim", "fdim (long long int, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_fdim_475, "fdim", "fdim (unsigned long long int, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_fdim_476, "fdim", "fdim (unsigned long long int, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_fdim_477, "fdim", "fdim (unsigned long long int, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fdim_478, "fdim", "fdim (unsigned long long int, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_fdim_479, "fdim", "fdim (unsigned long long int, double)", DBL_MANT_DIG, 0 },
    { test_fdim_480, "fdim", "fdim (unsigned long long int, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_fdim_481, "fdim", "fdim (unsigned long long int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fdim_482, "fdim", "fdim (unsigned long long int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fdim_483, "fdim", "fdim (unsigned long long int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_fdim_484, "fdim", "fdim (unsigned long long int, char)", DBL_MANT_DIG, 0 },
    { test_fdim_485, "fdim", "fdim (unsigned long long int, signed char)", DBL_MANT_DIG, 0 },
    { test_fdim_486, "fdim", "fdim (unsigned long long int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fdim_487, "fdim", "fdim (unsigned long long int, short int)", DBL_MANT_DIG, 0 },
    { test_fdim_488, "fdim", "fdim (unsigned long long int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fdim_489, "fdim", "fdim (unsigned long long int, int)", DBL_MANT_DIG, 0 },
    { test_fdim_490, "fdim", "fdim (unsigned long long int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fdim_491, "fdim", "fdim (unsigned long long int, long int)", DBL_MANT_DIG, 0 },
    { test_fdim_492, "fdim", "fdim (unsigned long long int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fdim_493, "fdim", "fdim (unsigned long long int, long long int)", DBL_MANT_DIG, 0 },
    { test_fdim_494, "fdim", "fdim (unsigned long long int, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fdim_495, "fdim", "fdim (unsigned long long int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fdim_496, "fdim", "fdim (unsigned long long int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fdim_497, "fdim", "fdim (unsigned long long int, enum e)", DBL_MANT_DIG, 0 },
    { test_fdim_498, "fdim", "fdim (unsigned long long int, _Bool)", DBL_MANT_DIG, 0 },
    { test_fdim_499, "fdim", "fdim (unsigned long long int, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_fdim_500, "fdim", "fdim (__int128, _Float16)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fdim_501, "fdim", "fdim (__int128, float)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_fdim_502, "fdim", "fdim (__int128, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_fdim_503, "fdim", "fdim (__int128, _Float32x)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fdim_504, "fdim", "fdim (__int128, double)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fdim_505, "fdim", "fdim (__int128, long double)", LDBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_fdim_506, "fdim", "fdim (__int128, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_fdim_507, "fdim", "fdim (__int128, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_fdim_508, "fdim", "fdim (__int128, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fdim_509, "fdim", "fdim (__int128, char)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fdim_510, "fdim", "fdim (__int128, signed char)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fdim_511, "fdim", "fdim (__int128, unsigned char)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fdim_512, "fdim", "fdim (__int128, short int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fdim_513, "fdim", "fdim (__int128, unsigned short int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fdim_514, "fdim", "fdim (__int128, int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fdim_515, "fdim", "fdim (__int128, unsigned int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fdim_516, "fdim", "fdim (__int128, long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fdim_517, "fdim", "fdim (__int128, unsigned long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fdim_518, "fdim", "fdim (__int128, long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fdim_519, "fdim", "fdim (__int128, unsigned long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fdim_520, "fdim", "fdim (__int128, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fdim_521, "fdim", "fdim (__int128, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fdim_522, "fdim", "fdim (__int128, enum e)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fdim_523, "fdim", "fdim (__int128, _Bool)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fdim_524, "fdim", "fdim (__int128, bit_field)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_fdim_525, "fdim", "fdim (unsigned __int128, _Float16)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fdim_526, "fdim", "fdim (unsigned __int128, float)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_fdim_527, "fdim", "fdim (unsigned __int128, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_fdim_528, "fdim", "fdim (unsigned __int128, _Float32x)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fdim_529, "fdim", "fdim (unsigned __int128, double)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fdim_530, "fdim", "fdim (unsigned __int128, long double)", LDBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_fdim_531, "fdim", "fdim (unsigned __int128, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_fdim_532, "fdim", "fdim (unsigned __int128, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_fdim_533, "fdim", "fdim (unsigned __int128, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fdim_534, "fdim", "fdim (unsigned __int128, char)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fdim_535, "fdim", "fdim (unsigned __int128, signed char)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fdim_536, "fdim", "fdim (unsigned __int128, unsigned char)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fdim_537, "fdim", "fdim (unsigned __int128, short int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fdim_538, "fdim", "fdim (unsigned __int128, unsigned short int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fdim_539, "fdim", "fdim (unsigned __int128, int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fdim_540, "fdim", "fdim (unsigned __int128, unsigned int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fdim_541, "fdim", "fdim (unsigned __int128, long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fdim_542, "fdim", "fdim (unsigned __int128, unsigned long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fdim_543, "fdim", "fdim (unsigned __int128, long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fdim_544, "fdim", "fdim (unsigned __int128, unsigned long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fdim_545, "fdim", "fdim (unsigned __int128, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fdim_546, "fdim", "fdim (unsigned __int128, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fdim_547, "fdim", "fdim (unsigned __int128, enum e)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fdim_548, "fdim", "fdim (unsigned __int128, _Bool)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fdim_549, "fdim", "fdim (unsigned __int128, bit_field)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_fdim_550, "fdim", "fdim (enum e, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_fdim_551, "fdim", "fdim (enum e, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_fdim_552, "fdim", "fdim (enum e, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fdim_553, "fdim", "fdim (enum e, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_fdim_554, "fdim", "fdim (enum e, double)", DBL_MANT_DIG, 0 },
    { test_fdim_555, "fdim", "fdim (enum e, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_fdim_556, "fdim", "fdim (enum e, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fdim_557, "fdim", "fdim (enum e, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fdim_558, "fdim", "fdim (enum e, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_fdim_559, "fdim", "fdim (enum e, char)", DBL_MANT_DIG, 0 },
    { test_fdim_560, "fdim", "fdim (enum e, signed char)", DBL_MANT_DIG, 0 },
    { test_fdim_561, "fdim", "fdim (enum e, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fdim_562, "fdim", "fdim (enum e, short int)", DBL_MANT_DIG, 0 },
    { test_fdim_563, "fdim", "fdim (enum e, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fdim_564, "fdim", "fdim (enum e, int)", DBL_MANT_DIG, 0 },
    { test_fdim_565, "fdim", "fdim (enum e, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fdim_566, "fdim", "fdim (enum e, long int)", DBL_MANT_DIG, 0 },
    { test_fdim_567, "fdim", "fdim (enum e, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fdim_568, "fdim", "fdim (enum e, long long int)", DBL_MANT_DIG, 0 },
    { test_fdim_569, "fdim", "fdim (enum e, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fdim_570, "fdim", "fdim (enum e, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fdim_571, "fdim", "fdim (enum e, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fdim_572, "fdim", "fdim (enum e, enum e)", DBL_MANT_DIG, 0 },
    { test_fdim_573, "fdim", "fdim (enum e, _Bool)", DBL_MANT_DIG, 0 },
    { test_fdim_574, "fdim", "fdim (enum e, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_fdim_575, "fdim", "fdim (_Bool, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_fdim_576, "fdim", "fdim (_Bool, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_fdim_577, "fdim", "fdim (_Bool, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fdim_578, "fdim", "fdim (_Bool, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_fdim_579, "fdim", "fdim (_Bool, double)", DBL_MANT_DIG, 0 },
    { test_fdim_580, "fdim", "fdim (_Bool, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_fdim_581, "fdim", "fdim (_Bool, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fdim_582, "fdim", "fdim (_Bool, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fdim_583, "fdim", "fdim (_Bool, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_fdim_584, "fdim", "fdim (_Bool, char)", DBL_MANT_DIG, 0 },
    { test_fdim_585, "fdim", "fdim (_Bool, signed char)", DBL_MANT_DIG, 0 },
    { test_fdim_586, "fdim", "fdim (_Bool, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fdim_587, "fdim", "fdim (_Bool, short int)", DBL_MANT_DIG, 0 },
    { test_fdim_588, "fdim", "fdim (_Bool, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fdim_589, "fdim", "fdim (_Bool, int)", DBL_MANT_DIG, 0 },
    { test_fdim_590, "fdim", "fdim (_Bool, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fdim_591, "fdim", "fdim (_Bool, long int)", DBL_MANT_DIG, 0 },
    { test_fdim_592, "fdim", "fdim (_Bool, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fdim_593, "fdim", "fdim (_Bool, long long int)", DBL_MANT_DIG, 0 },
    { test_fdim_594, "fdim", "fdim (_Bool, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fdim_595, "fdim", "fdim (_Bool, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fdim_596, "fdim", "fdim (_Bool, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fdim_597, "fdim", "fdim (_Bool, enum e)", DBL_MANT_DIG, 0 },
    { test_fdim_598, "fdim", "fdim (_Bool, _Bool)", DBL_MANT_DIG, 0 },
    { test_fdim_599, "fdim", "fdim (_Bool, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_fdim_600, "fdim", "fdim (bit_field, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_fdim_601, "fdim", "fdim (bit_field, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_fdim_602, "fdim", "fdim (bit_field, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fdim_603, "fdim", "fdim (bit_field, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_fdim_604, "fdim", "fdim (bit_field, double)", DBL_MANT_DIG, 0 },
    { test_fdim_605, "fdim", "fdim (bit_field, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_fdim_606, "fdim", "fdim (bit_field, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fdim_607, "fdim", "fdim (bit_field, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fdim_608, "fdim", "fdim (bit_field, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_fdim_609, "fdim", "fdim (bit_field, char)", DBL_MANT_DIG, 0 },
    { test_fdim_610, "fdim", "fdim (bit_field, signed char)", DBL_MANT_DIG, 0 },
    { test_fdim_611, "fdim", "fdim (bit_field, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fdim_612, "fdim", "fdim (bit_field, short int)", DBL_MANT_DIG, 0 },
    { test_fdim_613, "fdim", "fdim (bit_field, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fdim_614, "fdim", "fdim (bit_field, int)", DBL_MANT_DIG, 0 },
    { test_fdim_615, "fdim", "fdim (bit_field, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fdim_616, "fdim", "fdim (bit_field, long int)", DBL_MANT_DIG, 0 },
    { test_fdim_617, "fdim", "fdim (bit_field, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fdim_618, "fdim", "fdim (bit_field, long long int)", DBL_MANT_DIG, 0 },
    { test_fdim_619, "fdim", "fdim (bit_field, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fdim_620, "fdim", "fdim (bit_field, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fdim_621, "fdim", "fdim (bit_field, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fdim_622, "fdim", "fdim (bit_field, enum e)", DBL_MANT_DIG, 0 },
    { test_fdim_623, "fdim", "fdim (bit_field, _Bool)", DBL_MANT_DIG, 0 },
    { test_fdim_624, "fdim", "fdim (bit_field, bit_field)", DBL_MANT_DIG, 0 },
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
