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
(fminmagf16) (_Float16 arg0 __attribute__ ((unused)), _Float16 arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT16_MANT_DIG;
  called_func_name = "fminmag";
  return 0;
}
#endif
float
(fminmagf) (float arg0 __attribute__ ((unused)), float arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT_MANT_DIG;
  called_func_name = "fminmag";
  return 0;
}
#if defined HUGE_VAL_F32
_Float32
(fminmagf32) (_Float32 arg0 __attribute__ ((unused)), _Float32 arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT32_MANT_DIG;
  called_func_name = "fminmag";
  return 0;
}
#endif
#if defined HUGE_VAL_F32X
_Float32x
(fminmagf32x) (_Float32x arg0 __attribute__ ((unused)), _Float32x arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT32X_MANT_DIG;
  called_func_name = "fminmag";
  return 0;
}
#endif
double
(fminmag) (double arg0 __attribute__ ((unused)), double arg1 __attribute__ ((unused)))
{
  called_mant_dig = DBL_MANT_DIG;
  called_func_name = "fminmag";
  return 0;
}
long double
(fminmagl) (long double arg0 __attribute__ ((unused)), long double arg1 __attribute__ ((unused)))
{
  called_mant_dig = LDBL_MANT_DIG;
  called_func_name = "fminmag";
  return 0;
}
#if defined HUGE_VAL_F64
_Float64
(fminmagf64) (_Float64 arg0 __attribute__ ((unused)), _Float64 arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT64_MANT_DIG;
  called_func_name = "fminmag";
  return 0;
}
#endif
#if defined HUGE_VAL_F64X
_Float64x
(fminmagf64x) (_Float64x arg0 __attribute__ ((unused)), _Float64x arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT64X_MANT_DIG;
  called_func_name = "fminmag";
  return 0;
}
#endif
#if defined HUGE_VAL_F128
_Float128
(fminmagf128) (_Float128 arg0 __attribute__ ((unused)), _Float128 arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT128_MANT_DIG;
  called_func_name = "fminmag";
  return 0;
}
#endif
#if defined HUGE_VAL_F16
static void
test_fminmag_0 (void)
{
  extern typeof (fminmag (vol_var__Float16, vol_var__Float16)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = fminmag (vol_var__Float16, vol_var__Float16);
}
#endif
#if defined HUGE_VAL_F16
static void
test_fminmag_1 (void)
{
  extern typeof (fminmag (vol_var__Float16, vol_var_float)) var_float __attribute__ ((unused));
  vol_var_float = fminmag (vol_var__Float16, vol_var_float);
}
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F32
static void
test_fminmag_2 (void)
{
  extern typeof (fminmag (vol_var__Float16, vol_var__Float32)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = fminmag (vol_var__Float16, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
static void
test_fminmag_3 (void)
{
  extern typeof (fminmag (vol_var__Float16, vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = fminmag (vol_var__Float16, vol_var__Float32x);
}
#endif
#if defined HUGE_VAL_F16
static void
test_fminmag_4 (void)
{
  extern typeof (fminmag (vol_var__Float16, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var__Float16, vol_var_double);
}
#endif
#if defined HUGE_VAL_F16
static void
test_fminmag_5 (void)
{
  extern typeof (fminmag (vol_var__Float16, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fminmag (vol_var__Float16, vol_var_long_double);
}
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F64
static void
test_fminmag_6 (void)
{
  extern typeof (fminmag (vol_var__Float16, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fminmag (vol_var__Float16, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
static void
test_fminmag_7 (void)
{
  extern typeof (fminmag (vol_var__Float16, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fminmag (vol_var__Float16, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F16
static void
test_fminmag_8 (void)
{
  extern typeof (fminmag (vol_var__Float16, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fminmag (vol_var__Float16, vol_var__Float128);
}
#endif
#if defined HUGE_VAL_F16
static void
test_fminmag_9 (void)
{
  extern typeof (fminmag (vol_var__Float16, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var__Float16, vol_var_char);
}
#endif
#if defined HUGE_VAL_F16
static void
test_fminmag_10 (void)
{
  extern typeof (fminmag (vol_var__Float16, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var__Float16, vol_var_signed_char);
}
#endif
#if defined HUGE_VAL_F16
static void
test_fminmag_11 (void)
{
  extern typeof (fminmag (vol_var__Float16, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var__Float16, vol_var_unsigned_char);
}
#endif
#if defined HUGE_VAL_F16
static void
test_fminmag_12 (void)
{
  extern typeof (fminmag (vol_var__Float16, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var__Float16, vol_var_short_int);
}
#endif
#if defined HUGE_VAL_F16
static void
test_fminmag_13 (void)
{
  extern typeof (fminmag (vol_var__Float16, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var__Float16, vol_var_unsigned_short_int);
}
#endif
#if defined HUGE_VAL_F16
static void
test_fminmag_14 (void)
{
  extern typeof (fminmag (vol_var__Float16, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var__Float16, vol_var_int);
}
#endif
#if defined HUGE_VAL_F16
static void
test_fminmag_15 (void)
{
  extern typeof (fminmag (vol_var__Float16, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var__Float16, vol_var_unsigned_int);
}
#endif
#if defined HUGE_VAL_F16
static void
test_fminmag_16 (void)
{
  extern typeof (fminmag (vol_var__Float16, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var__Float16, vol_var_long_int);
}
#endif
#if defined HUGE_VAL_F16
static void
test_fminmag_17 (void)
{
  extern typeof (fminmag (vol_var__Float16, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var__Float16, vol_var_unsigned_long_int);
}
#endif
#if defined HUGE_VAL_F16
static void
test_fminmag_18 (void)
{
  extern typeof (fminmag (vol_var__Float16, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var__Float16, vol_var_long_long_int);
}
#endif
#if defined HUGE_VAL_F16
static void
test_fminmag_19 (void)
{
  extern typeof (fminmag (vol_var__Float16, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var__Float16, vol_var_unsigned_long_long_int);
}
#endif
#if defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_fminmag_20 (void)
{
  extern typeof (fminmag (vol_var__Float16, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var__Float16, vol_var___int128);
}
#endif
#if defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_fminmag_21 (void)
{
  extern typeof (fminmag (vol_var__Float16, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var__Float16, vol_var_unsigned___int128);
}
#endif
#if defined HUGE_VAL_F16
static void
test_fminmag_22 (void)
{
  extern typeof (fminmag (vol_var__Float16, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var__Float16, vol_var_enum_e);
}
#endif
#if defined HUGE_VAL_F16
static void
test_fminmag_23 (void)
{
  extern typeof (fminmag (vol_var__Float16, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var__Float16, vol_var__Bool);
}
#endif
#if defined HUGE_VAL_F16
static void
test_fminmag_24 (void)
{
  extern typeof (fminmag (vol_var__Float16, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var__Float16, vol_var_bit_field);
}
#endif
#if defined HUGE_VAL_F16
static void
test_fminmag_25 (void)
{
  extern typeof (fminmag (vol_var_float, vol_var__Float16)) var_float __attribute__ ((unused));
  vol_var_float = fminmag (vol_var_float, vol_var__Float16);
}
#endif
static void
test_fminmag_26 (void)
{
  extern typeof (fminmag (vol_var_float, vol_var_float)) var_float __attribute__ ((unused));
  vol_var_float = fminmag (vol_var_float, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_fminmag_27 (void)
{
  extern typeof (fminmag (vol_var_float, vol_var__Float32)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = fminmag (vol_var_float, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fminmag_28 (void)
{
  extern typeof (fminmag (vol_var_float, vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = fminmag (vol_var_float, vol_var__Float32x);
}
#endif
static void
test_fminmag_29 (void)
{
  extern typeof (fminmag (vol_var_float, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_float, vol_var_double);
}
static void
test_fminmag_30 (void)
{
  extern typeof (fminmag (vol_var_float, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fminmag (vol_var_float, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_fminmag_31 (void)
{
  extern typeof (fminmag (vol_var_float, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fminmag (vol_var_float, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fminmag_32 (void)
{
  extern typeof (fminmag (vol_var_float, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fminmag (vol_var_float, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fminmag_33 (void)
{
  extern typeof (fminmag (vol_var_float, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fminmag (vol_var_float, vol_var__Float128);
}
#endif
static void
test_fminmag_34 (void)
{
  extern typeof (fminmag (vol_var_float, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_float, vol_var_char);
}
static void
test_fminmag_35 (void)
{
  extern typeof (fminmag (vol_var_float, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_float, vol_var_signed_char);
}
static void
test_fminmag_36 (void)
{
  extern typeof (fminmag (vol_var_float, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_float, vol_var_unsigned_char);
}
static void
test_fminmag_37 (void)
{
  extern typeof (fminmag (vol_var_float, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_float, vol_var_short_int);
}
static void
test_fminmag_38 (void)
{
  extern typeof (fminmag (vol_var_float, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_float, vol_var_unsigned_short_int);
}
static void
test_fminmag_39 (void)
{
  extern typeof (fminmag (vol_var_float, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_float, vol_var_int);
}
static void
test_fminmag_40 (void)
{
  extern typeof (fminmag (vol_var_float, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_float, vol_var_unsigned_int);
}
static void
test_fminmag_41 (void)
{
  extern typeof (fminmag (vol_var_float, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_float, vol_var_long_int);
}
static void
test_fminmag_42 (void)
{
  extern typeof (fminmag (vol_var_float, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_float, vol_var_unsigned_long_int);
}
static void
test_fminmag_43 (void)
{
  extern typeof (fminmag (vol_var_float, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_float, vol_var_long_long_int);
}
static void
test_fminmag_44 (void)
{
  extern typeof (fminmag (vol_var_float, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_float, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fminmag_45 (void)
{
  extern typeof (fminmag (vol_var_float, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_float, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fminmag_46 (void)
{
  extern typeof (fminmag (vol_var_float, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_float, vol_var_unsigned___int128);
}
#endif
static void
test_fminmag_47 (void)
{
  extern typeof (fminmag (vol_var_float, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_float, vol_var_enum_e);
}
static void
test_fminmag_48 (void)
{
  extern typeof (fminmag (vol_var_float, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_float, vol_var__Bool);
}
static void
test_fminmag_49 (void)
{
  extern typeof (fminmag (vol_var_float, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_float, vol_var_bit_field);
}
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F32
static void
test_fminmag_50 (void)
{
  extern typeof (fminmag (vol_var__Float32, vol_var__Float16)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = fminmag (vol_var__Float32, vol_var__Float16);
}
#endif
#if defined HUGE_VAL_F32
static void
test_fminmag_51 (void)
{
  extern typeof (fminmag (vol_var__Float32, vol_var_float)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = fminmag (vol_var__Float32, vol_var_float);
}
#endif
#if defined HUGE_VAL_F32
static void
test_fminmag_52 (void)
{
  extern typeof (fminmag (vol_var__Float32, vol_var__Float32)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = fminmag (vol_var__Float32, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
static void
test_fminmag_53 (void)
{
  extern typeof (fminmag (vol_var__Float32, vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = fminmag (vol_var__Float32, vol_var__Float32x);
}
#endif
#if defined HUGE_VAL_F32
static void
test_fminmag_54 (void)
{
  extern typeof (fminmag (vol_var__Float32, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var__Float32, vol_var_double);
}
#endif
#if defined HUGE_VAL_F32
static void
test_fminmag_55 (void)
{
  extern typeof (fminmag (vol_var__Float32, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fminmag (vol_var__Float32, vol_var_long_double);
}
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F64
static void
test_fminmag_56 (void)
{
  extern typeof (fminmag (vol_var__Float32, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fminmag (vol_var__Float32, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
static void
test_fminmag_57 (void)
{
  extern typeof (fminmag (vol_var__Float32, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fminmag (vol_var__Float32, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F32
static void
test_fminmag_58 (void)
{
  extern typeof (fminmag (vol_var__Float32, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fminmag (vol_var__Float32, vol_var__Float128);
}
#endif
#if defined HUGE_VAL_F32
static void
test_fminmag_59 (void)
{
  extern typeof (fminmag (vol_var__Float32, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var__Float32, vol_var_char);
}
#endif
#if defined HUGE_VAL_F32
static void
test_fminmag_60 (void)
{
  extern typeof (fminmag (vol_var__Float32, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var__Float32, vol_var_signed_char);
}
#endif
#if defined HUGE_VAL_F32
static void
test_fminmag_61 (void)
{
  extern typeof (fminmag (vol_var__Float32, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var__Float32, vol_var_unsigned_char);
}
#endif
#if defined HUGE_VAL_F32
static void
test_fminmag_62 (void)
{
  extern typeof (fminmag (vol_var__Float32, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var__Float32, vol_var_short_int);
}
#endif
#if defined HUGE_VAL_F32
static void
test_fminmag_63 (void)
{
  extern typeof (fminmag (vol_var__Float32, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var__Float32, vol_var_unsigned_short_int);
}
#endif
#if defined HUGE_VAL_F32
static void
test_fminmag_64 (void)
{
  extern typeof (fminmag (vol_var__Float32, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var__Float32, vol_var_int);
}
#endif
#if defined HUGE_VAL_F32
static void
test_fminmag_65 (void)
{
  extern typeof (fminmag (vol_var__Float32, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var__Float32, vol_var_unsigned_int);
}
#endif
#if defined HUGE_VAL_F32
static void
test_fminmag_66 (void)
{
  extern typeof (fminmag (vol_var__Float32, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var__Float32, vol_var_long_int);
}
#endif
#if defined HUGE_VAL_F32
static void
test_fminmag_67 (void)
{
  extern typeof (fminmag (vol_var__Float32, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var__Float32, vol_var_unsigned_long_int);
}
#endif
#if defined HUGE_VAL_F32
static void
test_fminmag_68 (void)
{
  extern typeof (fminmag (vol_var__Float32, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var__Float32, vol_var_long_long_int);
}
#endif
#if defined HUGE_VAL_F32
static void
test_fminmag_69 (void)
{
  extern typeof (fminmag (vol_var__Float32, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var__Float32, vol_var_unsigned_long_long_int);
}
#endif
#if defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_fminmag_70 (void)
{
  extern typeof (fminmag (vol_var__Float32, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var__Float32, vol_var___int128);
}
#endif
#if defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_fminmag_71 (void)
{
  extern typeof (fminmag (vol_var__Float32, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var__Float32, vol_var_unsigned___int128);
}
#endif
#if defined HUGE_VAL_F32
static void
test_fminmag_72 (void)
{
  extern typeof (fminmag (vol_var__Float32, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var__Float32, vol_var_enum_e);
}
#endif
#if defined HUGE_VAL_F32
static void
test_fminmag_73 (void)
{
  extern typeof (fminmag (vol_var__Float32, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var__Float32, vol_var__Bool);
}
#endif
#if defined HUGE_VAL_F32
static void
test_fminmag_74 (void)
{
  extern typeof (fminmag (vol_var__Float32, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var__Float32, vol_var_bit_field);
}
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
static void
test_fminmag_75 (void)
{
  extern typeof (fminmag (vol_var__Float32x, vol_var__Float16)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = fminmag (vol_var__Float32x, vol_var__Float16);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fminmag_76 (void)
{
  extern typeof (fminmag (vol_var__Float32x, vol_var_float)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = fminmag (vol_var__Float32x, vol_var_float);
}
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
static void
test_fminmag_77 (void)
{
  extern typeof (fminmag (vol_var__Float32x, vol_var__Float32)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = fminmag (vol_var__Float32x, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fminmag_78 (void)
{
  extern typeof (fminmag (vol_var__Float32x, vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = fminmag (vol_var__Float32x, vol_var__Float32x);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fminmag_79 (void)
{
  extern typeof (fminmag (vol_var__Float32x, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var__Float32x, vol_var_double);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fminmag_80 (void)
{
  extern typeof (fminmag (vol_var__Float32x, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fminmag (vol_var__Float32x, vol_var_long_double);
}
#endif
#if defined HUGE_VAL_F32X && defined HUGE_VAL_F64
static void
test_fminmag_81 (void)
{
  extern typeof (fminmag (vol_var__Float32x, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fminmag (vol_var__Float32x, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
static void
test_fminmag_82 (void)
{
  extern typeof (fminmag (vol_var__Float32x, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fminmag (vol_var__Float32x, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
static void
test_fminmag_83 (void)
{
  extern typeof (fminmag (vol_var__Float32x, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fminmag (vol_var__Float32x, vol_var__Float128);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fminmag_84 (void)
{
  extern typeof (fminmag (vol_var__Float32x, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var__Float32x, vol_var_char);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fminmag_85 (void)
{
  extern typeof (fminmag (vol_var__Float32x, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var__Float32x, vol_var_signed_char);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fminmag_86 (void)
{
  extern typeof (fminmag (vol_var__Float32x, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var__Float32x, vol_var_unsigned_char);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fminmag_87 (void)
{
  extern typeof (fminmag (vol_var__Float32x, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var__Float32x, vol_var_short_int);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fminmag_88 (void)
{
  extern typeof (fminmag (vol_var__Float32x, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var__Float32x, vol_var_unsigned_short_int);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fminmag_89 (void)
{
  extern typeof (fminmag (vol_var__Float32x, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var__Float32x, vol_var_int);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fminmag_90 (void)
{
  extern typeof (fminmag (vol_var__Float32x, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var__Float32x, vol_var_unsigned_int);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fminmag_91 (void)
{
  extern typeof (fminmag (vol_var__Float32x, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var__Float32x, vol_var_long_int);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fminmag_92 (void)
{
  extern typeof (fminmag (vol_var__Float32x, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var__Float32x, vol_var_unsigned_long_int);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fminmag_93 (void)
{
  extern typeof (fminmag (vol_var__Float32x, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var__Float32x, vol_var_long_long_int);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fminmag_94 (void)
{
  extern typeof (fminmag (vol_var__Float32x, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var__Float32x, vol_var_unsigned_long_long_int);
}
#endif
#if defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_fminmag_95 (void)
{
  extern typeof (fminmag (vol_var__Float32x, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var__Float32x, vol_var___int128);
}
#endif
#if defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_fminmag_96 (void)
{
  extern typeof (fminmag (vol_var__Float32x, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var__Float32x, vol_var_unsigned___int128);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fminmag_97 (void)
{
  extern typeof (fminmag (vol_var__Float32x, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var__Float32x, vol_var_enum_e);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fminmag_98 (void)
{
  extern typeof (fminmag (vol_var__Float32x, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var__Float32x, vol_var__Bool);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fminmag_99 (void)
{
  extern typeof (fminmag (vol_var__Float32x, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var__Float32x, vol_var_bit_field);
}
#endif
#if defined HUGE_VAL_F16
static void
test_fminmag_100 (void)
{
  extern typeof (fminmag (vol_var_double, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_double, vol_var__Float16);
}
#endif
static void
test_fminmag_101 (void)
{
  extern typeof (fminmag (vol_var_double, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_double, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_fminmag_102 (void)
{
  extern typeof (fminmag (vol_var_double, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_double, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fminmag_103 (void)
{
  extern typeof (fminmag (vol_var_double, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_double, vol_var__Float32x);
}
#endif
static void
test_fminmag_104 (void)
{
  extern typeof (fminmag (vol_var_double, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_double, vol_var_double);
}
static void
test_fminmag_105 (void)
{
  extern typeof (fminmag (vol_var_double, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fminmag (vol_var_double, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_fminmag_106 (void)
{
  extern typeof (fminmag (vol_var_double, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fminmag (vol_var_double, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fminmag_107 (void)
{
  extern typeof (fminmag (vol_var_double, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fminmag (vol_var_double, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fminmag_108 (void)
{
  extern typeof (fminmag (vol_var_double, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fminmag (vol_var_double, vol_var__Float128);
}
#endif
static void
test_fminmag_109 (void)
{
  extern typeof (fminmag (vol_var_double, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_double, vol_var_char);
}
static void
test_fminmag_110 (void)
{
  extern typeof (fminmag (vol_var_double, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_double, vol_var_signed_char);
}
static void
test_fminmag_111 (void)
{
  extern typeof (fminmag (vol_var_double, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_double, vol_var_unsigned_char);
}
static void
test_fminmag_112 (void)
{
  extern typeof (fminmag (vol_var_double, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_double, vol_var_short_int);
}
static void
test_fminmag_113 (void)
{
  extern typeof (fminmag (vol_var_double, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_double, vol_var_unsigned_short_int);
}
static void
test_fminmag_114 (void)
{
  extern typeof (fminmag (vol_var_double, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_double, vol_var_int);
}
static void
test_fminmag_115 (void)
{
  extern typeof (fminmag (vol_var_double, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_double, vol_var_unsigned_int);
}
static void
test_fminmag_116 (void)
{
  extern typeof (fminmag (vol_var_double, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_double, vol_var_long_int);
}
static void
test_fminmag_117 (void)
{
  extern typeof (fminmag (vol_var_double, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_double, vol_var_unsigned_long_int);
}
static void
test_fminmag_118 (void)
{
  extern typeof (fminmag (vol_var_double, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_double, vol_var_long_long_int);
}
static void
test_fminmag_119 (void)
{
  extern typeof (fminmag (vol_var_double, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_double, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fminmag_120 (void)
{
  extern typeof (fminmag (vol_var_double, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_double, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fminmag_121 (void)
{
  extern typeof (fminmag (vol_var_double, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_double, vol_var_unsigned___int128);
}
#endif
static void
test_fminmag_122 (void)
{
  extern typeof (fminmag (vol_var_double, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_double, vol_var_enum_e);
}
static void
test_fminmag_123 (void)
{
  extern typeof (fminmag (vol_var_double, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_double, vol_var__Bool);
}
static void
test_fminmag_124 (void)
{
  extern typeof (fminmag (vol_var_double, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_double, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_fminmag_125 (void)
{
  extern typeof (fminmag (vol_var_long_double, vol_var__Float16)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fminmag (vol_var_long_double, vol_var__Float16);
}
#endif
static void
test_fminmag_126 (void)
{
  extern typeof (fminmag (vol_var_long_double, vol_var_float)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fminmag (vol_var_long_double, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_fminmag_127 (void)
{
  extern typeof (fminmag (vol_var_long_double, vol_var__Float32)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fminmag (vol_var_long_double, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fminmag_128 (void)
{
  extern typeof (fminmag (vol_var_long_double, vol_var__Float32x)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fminmag (vol_var_long_double, vol_var__Float32x);
}
#endif
static void
test_fminmag_129 (void)
{
  extern typeof (fminmag (vol_var_long_double, vol_var_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fminmag (vol_var_long_double, vol_var_double);
}
static void
test_fminmag_130 (void)
{
  extern typeof (fminmag (vol_var_long_double, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fminmag (vol_var_long_double, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_fminmag_131 (void)
{
  extern typeof (fminmag (vol_var_long_double, vol_var__Float64)) var_long_double_Float64 __attribute__ ((unused));
  vol_var_long_double_Float64 = fminmag (vol_var_long_double, vol_var__Float64);
}
#endif
#if (LDBL_MANT_DIG != 106) && defined HUGE_VAL_F64X
static void
test_fminmag_132 (void)
{
  extern typeof (fminmag (vol_var_long_double, vol_var__Float64x)) var_long_double_Float64x __attribute__ ((unused));
  vol_var_long_double_Float64x = fminmag (vol_var_long_double, vol_var__Float64x);
}
#endif
#if (LDBL_MANT_DIG != 106) && defined HUGE_VAL_F128
static void
test_fminmag_133 (void)
{
  extern typeof (fminmag (vol_var_long_double, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fminmag (vol_var_long_double, vol_var__Float128);
}
#endif
static void
test_fminmag_134 (void)
{
  extern typeof (fminmag (vol_var_long_double, vol_var_char)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fminmag (vol_var_long_double, vol_var_char);
}
static void
test_fminmag_135 (void)
{
  extern typeof (fminmag (vol_var_long_double, vol_var_signed_char)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fminmag (vol_var_long_double, vol_var_signed_char);
}
static void
test_fminmag_136 (void)
{
  extern typeof (fminmag (vol_var_long_double, vol_var_unsigned_char)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fminmag (vol_var_long_double, vol_var_unsigned_char);
}
static void
test_fminmag_137 (void)
{
  extern typeof (fminmag (vol_var_long_double, vol_var_short_int)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fminmag (vol_var_long_double, vol_var_short_int);
}
static void
test_fminmag_138 (void)
{
  extern typeof (fminmag (vol_var_long_double, vol_var_unsigned_short_int)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fminmag (vol_var_long_double, vol_var_unsigned_short_int);
}
static void
test_fminmag_139 (void)
{
  extern typeof (fminmag (vol_var_long_double, vol_var_int)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fminmag (vol_var_long_double, vol_var_int);
}
static void
test_fminmag_140 (void)
{
  extern typeof (fminmag (vol_var_long_double, vol_var_unsigned_int)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fminmag (vol_var_long_double, vol_var_unsigned_int);
}
static void
test_fminmag_141 (void)
{
  extern typeof (fminmag (vol_var_long_double, vol_var_long_int)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fminmag (vol_var_long_double, vol_var_long_int);
}
static void
test_fminmag_142 (void)
{
  extern typeof (fminmag (vol_var_long_double, vol_var_unsigned_long_int)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fminmag (vol_var_long_double, vol_var_unsigned_long_int);
}
static void
test_fminmag_143 (void)
{
  extern typeof (fminmag (vol_var_long_double, vol_var_long_long_int)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fminmag (vol_var_long_double, vol_var_long_long_int);
}
static void
test_fminmag_144 (void)
{
  extern typeof (fminmag (vol_var_long_double, vol_var_unsigned_long_long_int)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fminmag (vol_var_long_double, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fminmag_145 (void)
{
  extern typeof (fminmag (vol_var_long_double, vol_var___int128)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fminmag (vol_var_long_double, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fminmag_146 (void)
{
  extern typeof (fminmag (vol_var_long_double, vol_var_unsigned___int128)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fminmag (vol_var_long_double, vol_var_unsigned___int128);
}
#endif
static void
test_fminmag_147 (void)
{
  extern typeof (fminmag (vol_var_long_double, vol_var_enum_e)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fminmag (vol_var_long_double, vol_var_enum_e);
}
static void
test_fminmag_148 (void)
{
  extern typeof (fminmag (vol_var_long_double, vol_var__Bool)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fminmag (vol_var_long_double, vol_var__Bool);
}
static void
test_fminmag_149 (void)
{
  extern typeof (fminmag (vol_var_long_double, vol_var_bit_field)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fminmag (vol_var_long_double, vol_var_bit_field);
}
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F64
static void
test_fminmag_150 (void)
{
  extern typeof (fminmag (vol_var__Float64, vol_var__Float16)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fminmag (vol_var__Float64, vol_var__Float16);
}
#endif
#if defined HUGE_VAL_F64
static void
test_fminmag_151 (void)
{
  extern typeof (fminmag (vol_var__Float64, vol_var_float)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fminmag (vol_var__Float64, vol_var_float);
}
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F64
static void
test_fminmag_152 (void)
{
  extern typeof (fminmag (vol_var__Float64, vol_var__Float32)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fminmag (vol_var__Float64, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X && defined HUGE_VAL_F64
static void
test_fminmag_153 (void)
{
  extern typeof (fminmag (vol_var__Float64, vol_var__Float32x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fminmag (vol_var__Float64, vol_var__Float32x);
}
#endif
#if defined HUGE_VAL_F64
static void
test_fminmag_154 (void)
{
  extern typeof (fminmag (vol_var__Float64, vol_var_double)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fminmag (vol_var__Float64, vol_var_double);
}
#endif
#if defined HUGE_VAL_F64
static void
test_fminmag_155 (void)
{
  extern typeof (fminmag (vol_var__Float64, vol_var_long_double)) var_long_double_Float64 __attribute__ ((unused));
  vol_var_long_double_Float64 = fminmag (vol_var__Float64, vol_var_long_double);
}
#endif
#if defined HUGE_VAL_F64
static void
test_fminmag_156 (void)
{
  extern typeof (fminmag (vol_var__Float64, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fminmag (vol_var__Float64, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
static void
test_fminmag_157 (void)
{
  extern typeof (fminmag (vol_var__Float64, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fminmag (vol_var__Float64, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F64
static void
test_fminmag_158 (void)
{
  extern typeof (fminmag (vol_var__Float64, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fminmag (vol_var__Float64, vol_var__Float128);
}
#endif
#if defined HUGE_VAL_F64
static void
test_fminmag_159 (void)
{
  extern typeof (fminmag (vol_var__Float64, vol_var_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fminmag (vol_var__Float64, vol_var_char);
}
#endif
#if defined HUGE_VAL_F64
static void
test_fminmag_160 (void)
{
  extern typeof (fminmag (vol_var__Float64, vol_var_signed_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fminmag (vol_var__Float64, vol_var_signed_char);
}
#endif
#if defined HUGE_VAL_F64
static void
test_fminmag_161 (void)
{
  extern typeof (fminmag (vol_var__Float64, vol_var_unsigned_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fminmag (vol_var__Float64, vol_var_unsigned_char);
}
#endif
#if defined HUGE_VAL_F64
static void
test_fminmag_162 (void)
{
  extern typeof (fminmag (vol_var__Float64, vol_var_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fminmag (vol_var__Float64, vol_var_short_int);
}
#endif
#if defined HUGE_VAL_F64
static void
test_fminmag_163 (void)
{
  extern typeof (fminmag (vol_var__Float64, vol_var_unsigned_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fminmag (vol_var__Float64, vol_var_unsigned_short_int);
}
#endif
#if defined HUGE_VAL_F64
static void
test_fminmag_164 (void)
{
  extern typeof (fminmag (vol_var__Float64, vol_var_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fminmag (vol_var__Float64, vol_var_int);
}
#endif
#if defined HUGE_VAL_F64
static void
test_fminmag_165 (void)
{
  extern typeof (fminmag (vol_var__Float64, vol_var_unsigned_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fminmag (vol_var__Float64, vol_var_unsigned_int);
}
#endif
#if defined HUGE_VAL_F64
static void
test_fminmag_166 (void)
{
  extern typeof (fminmag (vol_var__Float64, vol_var_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fminmag (vol_var__Float64, vol_var_long_int);
}
#endif
#if defined HUGE_VAL_F64
static void
test_fminmag_167 (void)
{
  extern typeof (fminmag (vol_var__Float64, vol_var_unsigned_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fminmag (vol_var__Float64, vol_var_unsigned_long_int);
}
#endif
#if defined HUGE_VAL_F64
static void
test_fminmag_168 (void)
{
  extern typeof (fminmag (vol_var__Float64, vol_var_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fminmag (vol_var__Float64, vol_var_long_long_int);
}
#endif
#if defined HUGE_VAL_F64
static void
test_fminmag_169 (void)
{
  extern typeof (fminmag (vol_var__Float64, vol_var_unsigned_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fminmag (vol_var__Float64, vol_var_unsigned_long_long_int);
}
#endif
#if defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_fminmag_170 (void)
{
  extern typeof (fminmag (vol_var__Float64, vol_var___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fminmag (vol_var__Float64, vol_var___int128);
}
#endif
#if defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_fminmag_171 (void)
{
  extern typeof (fminmag (vol_var__Float64, vol_var_unsigned___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fminmag (vol_var__Float64, vol_var_unsigned___int128);
}
#endif
#if defined HUGE_VAL_F64
static void
test_fminmag_172 (void)
{
  extern typeof (fminmag (vol_var__Float64, vol_var_enum_e)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fminmag (vol_var__Float64, vol_var_enum_e);
}
#endif
#if defined HUGE_VAL_F64
static void
test_fminmag_173 (void)
{
  extern typeof (fminmag (vol_var__Float64, vol_var__Bool)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fminmag (vol_var__Float64, vol_var__Bool);
}
#endif
#if defined HUGE_VAL_F64
static void
test_fminmag_174 (void)
{
  extern typeof (fminmag (vol_var__Float64, vol_var_bit_field)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fminmag (vol_var__Float64, vol_var_bit_field);
}
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
static void
test_fminmag_175 (void)
{
  extern typeof (fminmag (vol_var__Float64x, vol_var__Float16)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fminmag (vol_var__Float64x, vol_var__Float16);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fminmag_176 (void)
{
  extern typeof (fminmag (vol_var__Float64x, vol_var_float)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fminmag (vol_var__Float64x, vol_var_float);
}
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
static void
test_fminmag_177 (void)
{
  extern typeof (fminmag (vol_var__Float64x, vol_var__Float32)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fminmag (vol_var__Float64x, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
static void
test_fminmag_178 (void)
{
  extern typeof (fminmag (vol_var__Float64x, vol_var__Float32x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fminmag (vol_var__Float64x, vol_var__Float32x);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fminmag_179 (void)
{
  extern typeof (fminmag (vol_var__Float64x, vol_var_double)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fminmag (vol_var__Float64x, vol_var_double);
}
#endif
#if (LDBL_MANT_DIG != 106) && defined HUGE_VAL_F64X
static void
test_fminmag_180 (void)
{
  extern typeof (fminmag (vol_var__Float64x, vol_var_long_double)) var_long_double_Float64x __attribute__ ((unused));
  vol_var_long_double_Float64x = fminmag (vol_var__Float64x, vol_var_long_double);
}
#endif
#if defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
static void
test_fminmag_181 (void)
{
  extern typeof (fminmag (vol_var__Float64x, vol_var__Float64)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fminmag (vol_var__Float64x, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fminmag_182 (void)
{
  extern typeof (fminmag (vol_var__Float64x, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fminmag (vol_var__Float64x, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
static void
test_fminmag_183 (void)
{
  extern typeof (fminmag (vol_var__Float64x, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fminmag (vol_var__Float64x, vol_var__Float128);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fminmag_184 (void)
{
  extern typeof (fminmag (vol_var__Float64x, vol_var_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fminmag (vol_var__Float64x, vol_var_char);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fminmag_185 (void)
{
  extern typeof (fminmag (vol_var__Float64x, vol_var_signed_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fminmag (vol_var__Float64x, vol_var_signed_char);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fminmag_186 (void)
{
  extern typeof (fminmag (vol_var__Float64x, vol_var_unsigned_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fminmag (vol_var__Float64x, vol_var_unsigned_char);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fminmag_187 (void)
{
  extern typeof (fminmag (vol_var__Float64x, vol_var_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fminmag (vol_var__Float64x, vol_var_short_int);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fminmag_188 (void)
{
  extern typeof (fminmag (vol_var__Float64x, vol_var_unsigned_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fminmag (vol_var__Float64x, vol_var_unsigned_short_int);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fminmag_189 (void)
{
  extern typeof (fminmag (vol_var__Float64x, vol_var_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fminmag (vol_var__Float64x, vol_var_int);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fminmag_190 (void)
{
  extern typeof (fminmag (vol_var__Float64x, vol_var_unsigned_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fminmag (vol_var__Float64x, vol_var_unsigned_int);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fminmag_191 (void)
{
  extern typeof (fminmag (vol_var__Float64x, vol_var_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fminmag (vol_var__Float64x, vol_var_long_int);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fminmag_192 (void)
{
  extern typeof (fminmag (vol_var__Float64x, vol_var_unsigned_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fminmag (vol_var__Float64x, vol_var_unsigned_long_int);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fminmag_193 (void)
{
  extern typeof (fminmag (vol_var__Float64x, vol_var_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fminmag (vol_var__Float64x, vol_var_long_long_int);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fminmag_194 (void)
{
  extern typeof (fminmag (vol_var__Float64x, vol_var_unsigned_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fminmag (vol_var__Float64x, vol_var_unsigned_long_long_int);
}
#endif
#if defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_fminmag_195 (void)
{
  extern typeof (fminmag (vol_var__Float64x, vol_var___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fminmag (vol_var__Float64x, vol_var___int128);
}
#endif
#if defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_fminmag_196 (void)
{
  extern typeof (fminmag (vol_var__Float64x, vol_var_unsigned___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fminmag (vol_var__Float64x, vol_var_unsigned___int128);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fminmag_197 (void)
{
  extern typeof (fminmag (vol_var__Float64x, vol_var_enum_e)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fminmag (vol_var__Float64x, vol_var_enum_e);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fminmag_198 (void)
{
  extern typeof (fminmag (vol_var__Float64x, vol_var__Bool)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fminmag (vol_var__Float64x, vol_var__Bool);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fminmag_199 (void)
{
  extern typeof (fminmag (vol_var__Float64x, vol_var_bit_field)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fminmag (vol_var__Float64x, vol_var_bit_field);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F16
static void
test_fminmag_200 (void)
{
  extern typeof (fminmag (vol_var__Float128, vol_var__Float16)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fminmag (vol_var__Float128, vol_var__Float16);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fminmag_201 (void)
{
  extern typeof (fminmag (vol_var__Float128, vol_var_float)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fminmag (vol_var__Float128, vol_var_float);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F32
static void
test_fminmag_202 (void)
{
  extern typeof (fminmag (vol_var__Float128, vol_var__Float32)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fminmag (vol_var__Float128, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
static void
test_fminmag_203 (void)
{
  extern typeof (fminmag (vol_var__Float128, vol_var__Float32x)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fminmag (vol_var__Float128, vol_var__Float32x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fminmag_204 (void)
{
  extern typeof (fminmag (vol_var__Float128, vol_var_double)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fminmag (vol_var__Float128, vol_var_double);
}
#endif
#if (LDBL_MANT_DIG != 106) && defined HUGE_VAL_F128
static void
test_fminmag_205 (void)
{
  extern typeof (fminmag (vol_var__Float128, vol_var_long_double)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fminmag (vol_var__Float128, vol_var_long_double);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F64
static void
test_fminmag_206 (void)
{
  extern typeof (fminmag (vol_var__Float128, vol_var__Float64)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fminmag (vol_var__Float128, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
static void
test_fminmag_207 (void)
{
  extern typeof (fminmag (vol_var__Float128, vol_var__Float64x)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fminmag (vol_var__Float128, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fminmag_208 (void)
{
  extern typeof (fminmag (vol_var__Float128, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fminmag (vol_var__Float128, vol_var__Float128);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fminmag_209 (void)
{
  extern typeof (fminmag (vol_var__Float128, vol_var_char)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fminmag (vol_var__Float128, vol_var_char);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fminmag_210 (void)
{
  extern typeof (fminmag (vol_var__Float128, vol_var_signed_char)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fminmag (vol_var__Float128, vol_var_signed_char);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fminmag_211 (void)
{
  extern typeof (fminmag (vol_var__Float128, vol_var_unsigned_char)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fminmag (vol_var__Float128, vol_var_unsigned_char);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fminmag_212 (void)
{
  extern typeof (fminmag (vol_var__Float128, vol_var_short_int)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fminmag (vol_var__Float128, vol_var_short_int);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fminmag_213 (void)
{
  extern typeof (fminmag (vol_var__Float128, vol_var_unsigned_short_int)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fminmag (vol_var__Float128, vol_var_unsigned_short_int);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fminmag_214 (void)
{
  extern typeof (fminmag (vol_var__Float128, vol_var_int)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fminmag (vol_var__Float128, vol_var_int);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fminmag_215 (void)
{
  extern typeof (fminmag (vol_var__Float128, vol_var_unsigned_int)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fminmag (vol_var__Float128, vol_var_unsigned_int);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fminmag_216 (void)
{
  extern typeof (fminmag (vol_var__Float128, vol_var_long_int)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fminmag (vol_var__Float128, vol_var_long_int);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fminmag_217 (void)
{
  extern typeof (fminmag (vol_var__Float128, vol_var_unsigned_long_int)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fminmag (vol_var__Float128, vol_var_unsigned_long_int);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fminmag_218 (void)
{
  extern typeof (fminmag (vol_var__Float128, vol_var_long_long_int)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fminmag (vol_var__Float128, vol_var_long_long_int);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fminmag_219 (void)
{
  extern typeof (fminmag (vol_var__Float128, vol_var_unsigned_long_long_int)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fminmag (vol_var__Float128, vol_var_unsigned_long_long_int);
}
#endif
#if defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_fminmag_220 (void)
{
  extern typeof (fminmag (vol_var__Float128, vol_var___int128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fminmag (vol_var__Float128, vol_var___int128);
}
#endif
#if defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_fminmag_221 (void)
{
  extern typeof (fminmag (vol_var__Float128, vol_var_unsigned___int128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fminmag (vol_var__Float128, vol_var_unsigned___int128);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fminmag_222 (void)
{
  extern typeof (fminmag (vol_var__Float128, vol_var_enum_e)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fminmag (vol_var__Float128, vol_var_enum_e);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fminmag_223 (void)
{
  extern typeof (fminmag (vol_var__Float128, vol_var__Bool)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fminmag (vol_var__Float128, vol_var__Bool);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fminmag_224 (void)
{
  extern typeof (fminmag (vol_var__Float128, vol_var_bit_field)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fminmag (vol_var__Float128, vol_var_bit_field);
}
#endif
#if defined HUGE_VAL_F16
static void
test_fminmag_225 (void)
{
  extern typeof (fminmag (vol_var_char, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_char, vol_var__Float16);
}
#endif
static void
test_fminmag_226 (void)
{
  extern typeof (fminmag (vol_var_char, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_char, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_fminmag_227 (void)
{
  extern typeof (fminmag (vol_var_char, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_char, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fminmag_228 (void)
{
  extern typeof (fminmag (vol_var_char, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_char, vol_var__Float32x);
}
#endif
static void
test_fminmag_229 (void)
{
  extern typeof (fminmag (vol_var_char, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_char, vol_var_double);
}
static void
test_fminmag_230 (void)
{
  extern typeof (fminmag (vol_var_char, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fminmag (vol_var_char, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_fminmag_231 (void)
{
  extern typeof (fminmag (vol_var_char, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fminmag (vol_var_char, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fminmag_232 (void)
{
  extern typeof (fminmag (vol_var_char, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fminmag (vol_var_char, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fminmag_233 (void)
{
  extern typeof (fminmag (vol_var_char, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fminmag (vol_var_char, vol_var__Float128);
}
#endif
static void
test_fminmag_234 (void)
{
  extern typeof (fminmag (vol_var_char, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_char, vol_var_char);
}
static void
test_fminmag_235 (void)
{
  extern typeof (fminmag (vol_var_char, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_char, vol_var_signed_char);
}
static void
test_fminmag_236 (void)
{
  extern typeof (fminmag (vol_var_char, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_char, vol_var_unsigned_char);
}
static void
test_fminmag_237 (void)
{
  extern typeof (fminmag (vol_var_char, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_char, vol_var_short_int);
}
static void
test_fminmag_238 (void)
{
  extern typeof (fminmag (vol_var_char, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_char, vol_var_unsigned_short_int);
}
static void
test_fminmag_239 (void)
{
  extern typeof (fminmag (vol_var_char, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_char, vol_var_int);
}
static void
test_fminmag_240 (void)
{
  extern typeof (fminmag (vol_var_char, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_char, vol_var_unsigned_int);
}
static void
test_fminmag_241 (void)
{
  extern typeof (fminmag (vol_var_char, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_char, vol_var_long_int);
}
static void
test_fminmag_242 (void)
{
  extern typeof (fminmag (vol_var_char, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_char, vol_var_unsigned_long_int);
}
static void
test_fminmag_243 (void)
{
  extern typeof (fminmag (vol_var_char, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_char, vol_var_long_long_int);
}
static void
test_fminmag_244 (void)
{
  extern typeof (fminmag (vol_var_char, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_char, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fminmag_245 (void)
{
  extern typeof (fminmag (vol_var_char, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_char, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fminmag_246 (void)
{
  extern typeof (fminmag (vol_var_char, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_char, vol_var_unsigned___int128);
}
#endif
static void
test_fminmag_247 (void)
{
  extern typeof (fminmag (vol_var_char, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_char, vol_var_enum_e);
}
static void
test_fminmag_248 (void)
{
  extern typeof (fminmag (vol_var_char, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_char, vol_var__Bool);
}
static void
test_fminmag_249 (void)
{
  extern typeof (fminmag (vol_var_char, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_char, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_fminmag_250 (void)
{
  extern typeof (fminmag (vol_var_signed_char, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_signed_char, vol_var__Float16);
}
#endif
static void
test_fminmag_251 (void)
{
  extern typeof (fminmag (vol_var_signed_char, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_signed_char, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_fminmag_252 (void)
{
  extern typeof (fminmag (vol_var_signed_char, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_signed_char, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fminmag_253 (void)
{
  extern typeof (fminmag (vol_var_signed_char, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_signed_char, vol_var__Float32x);
}
#endif
static void
test_fminmag_254 (void)
{
  extern typeof (fminmag (vol_var_signed_char, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_signed_char, vol_var_double);
}
static void
test_fminmag_255 (void)
{
  extern typeof (fminmag (vol_var_signed_char, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fminmag (vol_var_signed_char, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_fminmag_256 (void)
{
  extern typeof (fminmag (vol_var_signed_char, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fminmag (vol_var_signed_char, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fminmag_257 (void)
{
  extern typeof (fminmag (vol_var_signed_char, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fminmag (vol_var_signed_char, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fminmag_258 (void)
{
  extern typeof (fminmag (vol_var_signed_char, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fminmag (vol_var_signed_char, vol_var__Float128);
}
#endif
static void
test_fminmag_259 (void)
{
  extern typeof (fminmag (vol_var_signed_char, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_signed_char, vol_var_char);
}
static void
test_fminmag_260 (void)
{
  extern typeof (fminmag (vol_var_signed_char, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_signed_char, vol_var_signed_char);
}
static void
test_fminmag_261 (void)
{
  extern typeof (fminmag (vol_var_signed_char, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_signed_char, vol_var_unsigned_char);
}
static void
test_fminmag_262 (void)
{
  extern typeof (fminmag (vol_var_signed_char, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_signed_char, vol_var_short_int);
}
static void
test_fminmag_263 (void)
{
  extern typeof (fminmag (vol_var_signed_char, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_signed_char, vol_var_unsigned_short_int);
}
static void
test_fminmag_264 (void)
{
  extern typeof (fminmag (vol_var_signed_char, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_signed_char, vol_var_int);
}
static void
test_fminmag_265 (void)
{
  extern typeof (fminmag (vol_var_signed_char, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_signed_char, vol_var_unsigned_int);
}
static void
test_fminmag_266 (void)
{
  extern typeof (fminmag (vol_var_signed_char, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_signed_char, vol_var_long_int);
}
static void
test_fminmag_267 (void)
{
  extern typeof (fminmag (vol_var_signed_char, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_signed_char, vol_var_unsigned_long_int);
}
static void
test_fminmag_268 (void)
{
  extern typeof (fminmag (vol_var_signed_char, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_signed_char, vol_var_long_long_int);
}
static void
test_fminmag_269 (void)
{
  extern typeof (fminmag (vol_var_signed_char, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_signed_char, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fminmag_270 (void)
{
  extern typeof (fminmag (vol_var_signed_char, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_signed_char, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fminmag_271 (void)
{
  extern typeof (fminmag (vol_var_signed_char, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_signed_char, vol_var_unsigned___int128);
}
#endif
static void
test_fminmag_272 (void)
{
  extern typeof (fminmag (vol_var_signed_char, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_signed_char, vol_var_enum_e);
}
static void
test_fminmag_273 (void)
{
  extern typeof (fminmag (vol_var_signed_char, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_signed_char, vol_var__Bool);
}
static void
test_fminmag_274 (void)
{
  extern typeof (fminmag (vol_var_signed_char, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_signed_char, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_fminmag_275 (void)
{
  extern typeof (fminmag (vol_var_unsigned_char, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_unsigned_char, vol_var__Float16);
}
#endif
static void
test_fminmag_276 (void)
{
  extern typeof (fminmag (vol_var_unsigned_char, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_unsigned_char, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_fminmag_277 (void)
{
  extern typeof (fminmag (vol_var_unsigned_char, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_unsigned_char, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fminmag_278 (void)
{
  extern typeof (fminmag (vol_var_unsigned_char, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_unsigned_char, vol_var__Float32x);
}
#endif
static void
test_fminmag_279 (void)
{
  extern typeof (fminmag (vol_var_unsigned_char, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_unsigned_char, vol_var_double);
}
static void
test_fminmag_280 (void)
{
  extern typeof (fminmag (vol_var_unsigned_char, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fminmag (vol_var_unsigned_char, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_fminmag_281 (void)
{
  extern typeof (fminmag (vol_var_unsigned_char, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fminmag (vol_var_unsigned_char, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fminmag_282 (void)
{
  extern typeof (fminmag (vol_var_unsigned_char, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fminmag (vol_var_unsigned_char, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fminmag_283 (void)
{
  extern typeof (fminmag (vol_var_unsigned_char, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fminmag (vol_var_unsigned_char, vol_var__Float128);
}
#endif
static void
test_fminmag_284 (void)
{
  extern typeof (fminmag (vol_var_unsigned_char, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_unsigned_char, vol_var_char);
}
static void
test_fminmag_285 (void)
{
  extern typeof (fminmag (vol_var_unsigned_char, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_unsigned_char, vol_var_signed_char);
}
static void
test_fminmag_286 (void)
{
  extern typeof (fminmag (vol_var_unsigned_char, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_unsigned_char, vol_var_unsigned_char);
}
static void
test_fminmag_287 (void)
{
  extern typeof (fminmag (vol_var_unsigned_char, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_unsigned_char, vol_var_short_int);
}
static void
test_fminmag_288 (void)
{
  extern typeof (fminmag (vol_var_unsigned_char, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_unsigned_char, vol_var_unsigned_short_int);
}
static void
test_fminmag_289 (void)
{
  extern typeof (fminmag (vol_var_unsigned_char, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_unsigned_char, vol_var_int);
}
static void
test_fminmag_290 (void)
{
  extern typeof (fminmag (vol_var_unsigned_char, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_unsigned_char, vol_var_unsigned_int);
}
static void
test_fminmag_291 (void)
{
  extern typeof (fminmag (vol_var_unsigned_char, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_unsigned_char, vol_var_long_int);
}
static void
test_fminmag_292 (void)
{
  extern typeof (fminmag (vol_var_unsigned_char, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_unsigned_char, vol_var_unsigned_long_int);
}
static void
test_fminmag_293 (void)
{
  extern typeof (fminmag (vol_var_unsigned_char, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_unsigned_char, vol_var_long_long_int);
}
static void
test_fminmag_294 (void)
{
  extern typeof (fminmag (vol_var_unsigned_char, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_unsigned_char, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fminmag_295 (void)
{
  extern typeof (fminmag (vol_var_unsigned_char, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_unsigned_char, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fminmag_296 (void)
{
  extern typeof (fminmag (vol_var_unsigned_char, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_unsigned_char, vol_var_unsigned___int128);
}
#endif
static void
test_fminmag_297 (void)
{
  extern typeof (fminmag (vol_var_unsigned_char, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_unsigned_char, vol_var_enum_e);
}
static void
test_fminmag_298 (void)
{
  extern typeof (fminmag (vol_var_unsigned_char, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_unsigned_char, vol_var__Bool);
}
static void
test_fminmag_299 (void)
{
  extern typeof (fminmag (vol_var_unsigned_char, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_unsigned_char, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_fminmag_300 (void)
{
  extern typeof (fminmag (vol_var_short_int, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_short_int, vol_var__Float16);
}
#endif
static void
test_fminmag_301 (void)
{
  extern typeof (fminmag (vol_var_short_int, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_short_int, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_fminmag_302 (void)
{
  extern typeof (fminmag (vol_var_short_int, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_short_int, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fminmag_303 (void)
{
  extern typeof (fminmag (vol_var_short_int, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_short_int, vol_var__Float32x);
}
#endif
static void
test_fminmag_304 (void)
{
  extern typeof (fminmag (vol_var_short_int, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_short_int, vol_var_double);
}
static void
test_fminmag_305 (void)
{
  extern typeof (fminmag (vol_var_short_int, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fminmag (vol_var_short_int, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_fminmag_306 (void)
{
  extern typeof (fminmag (vol_var_short_int, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fminmag (vol_var_short_int, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fminmag_307 (void)
{
  extern typeof (fminmag (vol_var_short_int, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fminmag (vol_var_short_int, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fminmag_308 (void)
{
  extern typeof (fminmag (vol_var_short_int, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fminmag (vol_var_short_int, vol_var__Float128);
}
#endif
static void
test_fminmag_309 (void)
{
  extern typeof (fminmag (vol_var_short_int, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_short_int, vol_var_char);
}
static void
test_fminmag_310 (void)
{
  extern typeof (fminmag (vol_var_short_int, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_short_int, vol_var_signed_char);
}
static void
test_fminmag_311 (void)
{
  extern typeof (fminmag (vol_var_short_int, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_short_int, vol_var_unsigned_char);
}
static void
test_fminmag_312 (void)
{
  extern typeof (fminmag (vol_var_short_int, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_short_int, vol_var_short_int);
}
static void
test_fminmag_313 (void)
{
  extern typeof (fminmag (vol_var_short_int, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_short_int, vol_var_unsigned_short_int);
}
static void
test_fminmag_314 (void)
{
  extern typeof (fminmag (vol_var_short_int, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_short_int, vol_var_int);
}
static void
test_fminmag_315 (void)
{
  extern typeof (fminmag (vol_var_short_int, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_short_int, vol_var_unsigned_int);
}
static void
test_fminmag_316 (void)
{
  extern typeof (fminmag (vol_var_short_int, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_short_int, vol_var_long_int);
}
static void
test_fminmag_317 (void)
{
  extern typeof (fminmag (vol_var_short_int, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_short_int, vol_var_unsigned_long_int);
}
static void
test_fminmag_318 (void)
{
  extern typeof (fminmag (vol_var_short_int, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_short_int, vol_var_long_long_int);
}
static void
test_fminmag_319 (void)
{
  extern typeof (fminmag (vol_var_short_int, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_short_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fminmag_320 (void)
{
  extern typeof (fminmag (vol_var_short_int, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_short_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fminmag_321 (void)
{
  extern typeof (fminmag (vol_var_short_int, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_short_int, vol_var_unsigned___int128);
}
#endif
static void
test_fminmag_322 (void)
{
  extern typeof (fminmag (vol_var_short_int, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_short_int, vol_var_enum_e);
}
static void
test_fminmag_323 (void)
{
  extern typeof (fminmag (vol_var_short_int, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_short_int, vol_var__Bool);
}
static void
test_fminmag_324 (void)
{
  extern typeof (fminmag (vol_var_short_int, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_short_int, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_fminmag_325 (void)
{
  extern typeof (fminmag (vol_var_unsigned_short_int, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_unsigned_short_int, vol_var__Float16);
}
#endif
static void
test_fminmag_326 (void)
{
  extern typeof (fminmag (vol_var_unsigned_short_int, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_unsigned_short_int, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_fminmag_327 (void)
{
  extern typeof (fminmag (vol_var_unsigned_short_int, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_unsigned_short_int, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fminmag_328 (void)
{
  extern typeof (fminmag (vol_var_unsigned_short_int, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_unsigned_short_int, vol_var__Float32x);
}
#endif
static void
test_fminmag_329 (void)
{
  extern typeof (fminmag (vol_var_unsigned_short_int, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_unsigned_short_int, vol_var_double);
}
static void
test_fminmag_330 (void)
{
  extern typeof (fminmag (vol_var_unsigned_short_int, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fminmag (vol_var_unsigned_short_int, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_fminmag_331 (void)
{
  extern typeof (fminmag (vol_var_unsigned_short_int, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fminmag (vol_var_unsigned_short_int, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fminmag_332 (void)
{
  extern typeof (fminmag (vol_var_unsigned_short_int, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fminmag (vol_var_unsigned_short_int, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fminmag_333 (void)
{
  extern typeof (fminmag (vol_var_unsigned_short_int, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fminmag (vol_var_unsigned_short_int, vol_var__Float128);
}
#endif
static void
test_fminmag_334 (void)
{
  extern typeof (fminmag (vol_var_unsigned_short_int, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_unsigned_short_int, vol_var_char);
}
static void
test_fminmag_335 (void)
{
  extern typeof (fminmag (vol_var_unsigned_short_int, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_unsigned_short_int, vol_var_signed_char);
}
static void
test_fminmag_336 (void)
{
  extern typeof (fminmag (vol_var_unsigned_short_int, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_unsigned_short_int, vol_var_unsigned_char);
}
static void
test_fminmag_337 (void)
{
  extern typeof (fminmag (vol_var_unsigned_short_int, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_unsigned_short_int, vol_var_short_int);
}
static void
test_fminmag_338 (void)
{
  extern typeof (fminmag (vol_var_unsigned_short_int, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_unsigned_short_int, vol_var_unsigned_short_int);
}
static void
test_fminmag_339 (void)
{
  extern typeof (fminmag (vol_var_unsigned_short_int, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_unsigned_short_int, vol_var_int);
}
static void
test_fminmag_340 (void)
{
  extern typeof (fminmag (vol_var_unsigned_short_int, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_unsigned_short_int, vol_var_unsigned_int);
}
static void
test_fminmag_341 (void)
{
  extern typeof (fminmag (vol_var_unsigned_short_int, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_unsigned_short_int, vol_var_long_int);
}
static void
test_fminmag_342 (void)
{
  extern typeof (fminmag (vol_var_unsigned_short_int, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_unsigned_short_int, vol_var_unsigned_long_int);
}
static void
test_fminmag_343 (void)
{
  extern typeof (fminmag (vol_var_unsigned_short_int, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_unsigned_short_int, vol_var_long_long_int);
}
static void
test_fminmag_344 (void)
{
  extern typeof (fminmag (vol_var_unsigned_short_int, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_unsigned_short_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fminmag_345 (void)
{
  extern typeof (fminmag (vol_var_unsigned_short_int, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_unsigned_short_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fminmag_346 (void)
{
  extern typeof (fminmag (vol_var_unsigned_short_int, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_unsigned_short_int, vol_var_unsigned___int128);
}
#endif
static void
test_fminmag_347 (void)
{
  extern typeof (fminmag (vol_var_unsigned_short_int, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_unsigned_short_int, vol_var_enum_e);
}
static void
test_fminmag_348 (void)
{
  extern typeof (fminmag (vol_var_unsigned_short_int, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_unsigned_short_int, vol_var__Bool);
}
static void
test_fminmag_349 (void)
{
  extern typeof (fminmag (vol_var_unsigned_short_int, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_unsigned_short_int, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_fminmag_350 (void)
{
  extern typeof (fminmag (vol_var_int, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_int, vol_var__Float16);
}
#endif
static void
test_fminmag_351 (void)
{
  extern typeof (fminmag (vol_var_int, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_int, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_fminmag_352 (void)
{
  extern typeof (fminmag (vol_var_int, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_int, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fminmag_353 (void)
{
  extern typeof (fminmag (vol_var_int, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_int, vol_var__Float32x);
}
#endif
static void
test_fminmag_354 (void)
{
  extern typeof (fminmag (vol_var_int, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_int, vol_var_double);
}
static void
test_fminmag_355 (void)
{
  extern typeof (fminmag (vol_var_int, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fminmag (vol_var_int, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_fminmag_356 (void)
{
  extern typeof (fminmag (vol_var_int, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fminmag (vol_var_int, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fminmag_357 (void)
{
  extern typeof (fminmag (vol_var_int, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fminmag (vol_var_int, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fminmag_358 (void)
{
  extern typeof (fminmag (vol_var_int, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fminmag (vol_var_int, vol_var__Float128);
}
#endif
static void
test_fminmag_359 (void)
{
  extern typeof (fminmag (vol_var_int, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_int, vol_var_char);
}
static void
test_fminmag_360 (void)
{
  extern typeof (fminmag (vol_var_int, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_int, vol_var_signed_char);
}
static void
test_fminmag_361 (void)
{
  extern typeof (fminmag (vol_var_int, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_int, vol_var_unsigned_char);
}
static void
test_fminmag_362 (void)
{
  extern typeof (fminmag (vol_var_int, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_int, vol_var_short_int);
}
static void
test_fminmag_363 (void)
{
  extern typeof (fminmag (vol_var_int, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_int, vol_var_unsigned_short_int);
}
static void
test_fminmag_364 (void)
{
  extern typeof (fminmag (vol_var_int, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_int, vol_var_int);
}
static void
test_fminmag_365 (void)
{
  extern typeof (fminmag (vol_var_int, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_int, vol_var_unsigned_int);
}
static void
test_fminmag_366 (void)
{
  extern typeof (fminmag (vol_var_int, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_int, vol_var_long_int);
}
static void
test_fminmag_367 (void)
{
  extern typeof (fminmag (vol_var_int, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_int, vol_var_unsigned_long_int);
}
static void
test_fminmag_368 (void)
{
  extern typeof (fminmag (vol_var_int, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_int, vol_var_long_long_int);
}
static void
test_fminmag_369 (void)
{
  extern typeof (fminmag (vol_var_int, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fminmag_370 (void)
{
  extern typeof (fminmag (vol_var_int, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fminmag_371 (void)
{
  extern typeof (fminmag (vol_var_int, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_int, vol_var_unsigned___int128);
}
#endif
static void
test_fminmag_372 (void)
{
  extern typeof (fminmag (vol_var_int, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_int, vol_var_enum_e);
}
static void
test_fminmag_373 (void)
{
  extern typeof (fminmag (vol_var_int, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_int, vol_var__Bool);
}
static void
test_fminmag_374 (void)
{
  extern typeof (fminmag (vol_var_int, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_int, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_fminmag_375 (void)
{
  extern typeof (fminmag (vol_var_unsigned_int, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_unsigned_int, vol_var__Float16);
}
#endif
static void
test_fminmag_376 (void)
{
  extern typeof (fminmag (vol_var_unsigned_int, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_unsigned_int, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_fminmag_377 (void)
{
  extern typeof (fminmag (vol_var_unsigned_int, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_unsigned_int, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fminmag_378 (void)
{
  extern typeof (fminmag (vol_var_unsigned_int, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_unsigned_int, vol_var__Float32x);
}
#endif
static void
test_fminmag_379 (void)
{
  extern typeof (fminmag (vol_var_unsigned_int, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_unsigned_int, vol_var_double);
}
static void
test_fminmag_380 (void)
{
  extern typeof (fminmag (vol_var_unsigned_int, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fminmag (vol_var_unsigned_int, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_fminmag_381 (void)
{
  extern typeof (fminmag (vol_var_unsigned_int, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fminmag (vol_var_unsigned_int, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fminmag_382 (void)
{
  extern typeof (fminmag (vol_var_unsigned_int, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fminmag (vol_var_unsigned_int, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fminmag_383 (void)
{
  extern typeof (fminmag (vol_var_unsigned_int, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fminmag (vol_var_unsigned_int, vol_var__Float128);
}
#endif
static void
test_fminmag_384 (void)
{
  extern typeof (fminmag (vol_var_unsigned_int, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_unsigned_int, vol_var_char);
}
static void
test_fminmag_385 (void)
{
  extern typeof (fminmag (vol_var_unsigned_int, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_unsigned_int, vol_var_signed_char);
}
static void
test_fminmag_386 (void)
{
  extern typeof (fminmag (vol_var_unsigned_int, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_unsigned_int, vol_var_unsigned_char);
}
static void
test_fminmag_387 (void)
{
  extern typeof (fminmag (vol_var_unsigned_int, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_unsigned_int, vol_var_short_int);
}
static void
test_fminmag_388 (void)
{
  extern typeof (fminmag (vol_var_unsigned_int, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_unsigned_int, vol_var_unsigned_short_int);
}
static void
test_fminmag_389 (void)
{
  extern typeof (fminmag (vol_var_unsigned_int, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_unsigned_int, vol_var_int);
}
static void
test_fminmag_390 (void)
{
  extern typeof (fminmag (vol_var_unsigned_int, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_unsigned_int, vol_var_unsigned_int);
}
static void
test_fminmag_391 (void)
{
  extern typeof (fminmag (vol_var_unsigned_int, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_unsigned_int, vol_var_long_int);
}
static void
test_fminmag_392 (void)
{
  extern typeof (fminmag (vol_var_unsigned_int, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_unsigned_int, vol_var_unsigned_long_int);
}
static void
test_fminmag_393 (void)
{
  extern typeof (fminmag (vol_var_unsigned_int, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_unsigned_int, vol_var_long_long_int);
}
static void
test_fminmag_394 (void)
{
  extern typeof (fminmag (vol_var_unsigned_int, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_unsigned_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fminmag_395 (void)
{
  extern typeof (fminmag (vol_var_unsigned_int, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_unsigned_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fminmag_396 (void)
{
  extern typeof (fminmag (vol_var_unsigned_int, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_unsigned_int, vol_var_unsigned___int128);
}
#endif
static void
test_fminmag_397 (void)
{
  extern typeof (fminmag (vol_var_unsigned_int, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_unsigned_int, vol_var_enum_e);
}
static void
test_fminmag_398 (void)
{
  extern typeof (fminmag (vol_var_unsigned_int, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_unsigned_int, vol_var__Bool);
}
static void
test_fminmag_399 (void)
{
  extern typeof (fminmag (vol_var_unsigned_int, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_unsigned_int, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_fminmag_400 (void)
{
  extern typeof (fminmag (vol_var_long_int, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_long_int, vol_var__Float16);
}
#endif
static void
test_fminmag_401 (void)
{
  extern typeof (fminmag (vol_var_long_int, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_long_int, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_fminmag_402 (void)
{
  extern typeof (fminmag (vol_var_long_int, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_long_int, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fminmag_403 (void)
{
  extern typeof (fminmag (vol_var_long_int, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_long_int, vol_var__Float32x);
}
#endif
static void
test_fminmag_404 (void)
{
  extern typeof (fminmag (vol_var_long_int, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_long_int, vol_var_double);
}
static void
test_fminmag_405 (void)
{
  extern typeof (fminmag (vol_var_long_int, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fminmag (vol_var_long_int, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_fminmag_406 (void)
{
  extern typeof (fminmag (vol_var_long_int, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fminmag (vol_var_long_int, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fminmag_407 (void)
{
  extern typeof (fminmag (vol_var_long_int, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fminmag (vol_var_long_int, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fminmag_408 (void)
{
  extern typeof (fminmag (vol_var_long_int, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fminmag (vol_var_long_int, vol_var__Float128);
}
#endif
static void
test_fminmag_409 (void)
{
  extern typeof (fminmag (vol_var_long_int, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_long_int, vol_var_char);
}
static void
test_fminmag_410 (void)
{
  extern typeof (fminmag (vol_var_long_int, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_long_int, vol_var_signed_char);
}
static void
test_fminmag_411 (void)
{
  extern typeof (fminmag (vol_var_long_int, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_long_int, vol_var_unsigned_char);
}
static void
test_fminmag_412 (void)
{
  extern typeof (fminmag (vol_var_long_int, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_long_int, vol_var_short_int);
}
static void
test_fminmag_413 (void)
{
  extern typeof (fminmag (vol_var_long_int, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_long_int, vol_var_unsigned_short_int);
}
static void
test_fminmag_414 (void)
{
  extern typeof (fminmag (vol_var_long_int, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_long_int, vol_var_int);
}
static void
test_fminmag_415 (void)
{
  extern typeof (fminmag (vol_var_long_int, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_long_int, vol_var_unsigned_int);
}
static void
test_fminmag_416 (void)
{
  extern typeof (fminmag (vol_var_long_int, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_long_int, vol_var_long_int);
}
static void
test_fminmag_417 (void)
{
  extern typeof (fminmag (vol_var_long_int, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_long_int, vol_var_unsigned_long_int);
}
static void
test_fminmag_418 (void)
{
  extern typeof (fminmag (vol_var_long_int, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_long_int, vol_var_long_long_int);
}
static void
test_fminmag_419 (void)
{
  extern typeof (fminmag (vol_var_long_int, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_long_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fminmag_420 (void)
{
  extern typeof (fminmag (vol_var_long_int, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_long_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fminmag_421 (void)
{
  extern typeof (fminmag (vol_var_long_int, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_long_int, vol_var_unsigned___int128);
}
#endif
static void
test_fminmag_422 (void)
{
  extern typeof (fminmag (vol_var_long_int, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_long_int, vol_var_enum_e);
}
static void
test_fminmag_423 (void)
{
  extern typeof (fminmag (vol_var_long_int, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_long_int, vol_var__Bool);
}
static void
test_fminmag_424 (void)
{
  extern typeof (fminmag (vol_var_long_int, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_long_int, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_fminmag_425 (void)
{
  extern typeof (fminmag (vol_var_unsigned_long_int, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_unsigned_long_int, vol_var__Float16);
}
#endif
static void
test_fminmag_426 (void)
{
  extern typeof (fminmag (vol_var_unsigned_long_int, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_unsigned_long_int, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_fminmag_427 (void)
{
  extern typeof (fminmag (vol_var_unsigned_long_int, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_unsigned_long_int, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fminmag_428 (void)
{
  extern typeof (fminmag (vol_var_unsigned_long_int, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_unsigned_long_int, vol_var__Float32x);
}
#endif
static void
test_fminmag_429 (void)
{
  extern typeof (fminmag (vol_var_unsigned_long_int, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_unsigned_long_int, vol_var_double);
}
static void
test_fminmag_430 (void)
{
  extern typeof (fminmag (vol_var_unsigned_long_int, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fminmag (vol_var_unsigned_long_int, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_fminmag_431 (void)
{
  extern typeof (fminmag (vol_var_unsigned_long_int, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fminmag (vol_var_unsigned_long_int, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fminmag_432 (void)
{
  extern typeof (fminmag (vol_var_unsigned_long_int, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fminmag (vol_var_unsigned_long_int, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fminmag_433 (void)
{
  extern typeof (fminmag (vol_var_unsigned_long_int, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fminmag (vol_var_unsigned_long_int, vol_var__Float128);
}
#endif
static void
test_fminmag_434 (void)
{
  extern typeof (fminmag (vol_var_unsigned_long_int, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_unsigned_long_int, vol_var_char);
}
static void
test_fminmag_435 (void)
{
  extern typeof (fminmag (vol_var_unsigned_long_int, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_unsigned_long_int, vol_var_signed_char);
}
static void
test_fminmag_436 (void)
{
  extern typeof (fminmag (vol_var_unsigned_long_int, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_unsigned_long_int, vol_var_unsigned_char);
}
static void
test_fminmag_437 (void)
{
  extern typeof (fminmag (vol_var_unsigned_long_int, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_unsigned_long_int, vol_var_short_int);
}
static void
test_fminmag_438 (void)
{
  extern typeof (fminmag (vol_var_unsigned_long_int, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_unsigned_long_int, vol_var_unsigned_short_int);
}
static void
test_fminmag_439 (void)
{
  extern typeof (fminmag (vol_var_unsigned_long_int, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_unsigned_long_int, vol_var_int);
}
static void
test_fminmag_440 (void)
{
  extern typeof (fminmag (vol_var_unsigned_long_int, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_unsigned_long_int, vol_var_unsigned_int);
}
static void
test_fminmag_441 (void)
{
  extern typeof (fminmag (vol_var_unsigned_long_int, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_unsigned_long_int, vol_var_long_int);
}
static void
test_fminmag_442 (void)
{
  extern typeof (fminmag (vol_var_unsigned_long_int, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_unsigned_long_int, vol_var_unsigned_long_int);
}
static void
test_fminmag_443 (void)
{
  extern typeof (fminmag (vol_var_unsigned_long_int, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_unsigned_long_int, vol_var_long_long_int);
}
static void
test_fminmag_444 (void)
{
  extern typeof (fminmag (vol_var_unsigned_long_int, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_unsigned_long_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fminmag_445 (void)
{
  extern typeof (fminmag (vol_var_unsigned_long_int, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_unsigned_long_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fminmag_446 (void)
{
  extern typeof (fminmag (vol_var_unsigned_long_int, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_unsigned_long_int, vol_var_unsigned___int128);
}
#endif
static void
test_fminmag_447 (void)
{
  extern typeof (fminmag (vol_var_unsigned_long_int, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_unsigned_long_int, vol_var_enum_e);
}
static void
test_fminmag_448 (void)
{
  extern typeof (fminmag (vol_var_unsigned_long_int, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_unsigned_long_int, vol_var__Bool);
}
static void
test_fminmag_449 (void)
{
  extern typeof (fminmag (vol_var_unsigned_long_int, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_unsigned_long_int, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_fminmag_450 (void)
{
  extern typeof (fminmag (vol_var_long_long_int, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_long_long_int, vol_var__Float16);
}
#endif
static void
test_fminmag_451 (void)
{
  extern typeof (fminmag (vol_var_long_long_int, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_long_long_int, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_fminmag_452 (void)
{
  extern typeof (fminmag (vol_var_long_long_int, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_long_long_int, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fminmag_453 (void)
{
  extern typeof (fminmag (vol_var_long_long_int, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_long_long_int, vol_var__Float32x);
}
#endif
static void
test_fminmag_454 (void)
{
  extern typeof (fminmag (vol_var_long_long_int, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_long_long_int, vol_var_double);
}
static void
test_fminmag_455 (void)
{
  extern typeof (fminmag (vol_var_long_long_int, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fminmag (vol_var_long_long_int, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_fminmag_456 (void)
{
  extern typeof (fminmag (vol_var_long_long_int, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fminmag (vol_var_long_long_int, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fminmag_457 (void)
{
  extern typeof (fminmag (vol_var_long_long_int, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fminmag (vol_var_long_long_int, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fminmag_458 (void)
{
  extern typeof (fminmag (vol_var_long_long_int, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fminmag (vol_var_long_long_int, vol_var__Float128);
}
#endif
static void
test_fminmag_459 (void)
{
  extern typeof (fminmag (vol_var_long_long_int, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_long_long_int, vol_var_char);
}
static void
test_fminmag_460 (void)
{
  extern typeof (fminmag (vol_var_long_long_int, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_long_long_int, vol_var_signed_char);
}
static void
test_fminmag_461 (void)
{
  extern typeof (fminmag (vol_var_long_long_int, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_long_long_int, vol_var_unsigned_char);
}
static void
test_fminmag_462 (void)
{
  extern typeof (fminmag (vol_var_long_long_int, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_long_long_int, vol_var_short_int);
}
static void
test_fminmag_463 (void)
{
  extern typeof (fminmag (vol_var_long_long_int, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_long_long_int, vol_var_unsigned_short_int);
}
static void
test_fminmag_464 (void)
{
  extern typeof (fminmag (vol_var_long_long_int, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_long_long_int, vol_var_int);
}
static void
test_fminmag_465 (void)
{
  extern typeof (fminmag (vol_var_long_long_int, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_long_long_int, vol_var_unsigned_int);
}
static void
test_fminmag_466 (void)
{
  extern typeof (fminmag (vol_var_long_long_int, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_long_long_int, vol_var_long_int);
}
static void
test_fminmag_467 (void)
{
  extern typeof (fminmag (vol_var_long_long_int, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_long_long_int, vol_var_unsigned_long_int);
}
static void
test_fminmag_468 (void)
{
  extern typeof (fminmag (vol_var_long_long_int, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_long_long_int, vol_var_long_long_int);
}
static void
test_fminmag_469 (void)
{
  extern typeof (fminmag (vol_var_long_long_int, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_long_long_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fminmag_470 (void)
{
  extern typeof (fminmag (vol_var_long_long_int, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_long_long_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fminmag_471 (void)
{
  extern typeof (fminmag (vol_var_long_long_int, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_long_long_int, vol_var_unsigned___int128);
}
#endif
static void
test_fminmag_472 (void)
{
  extern typeof (fminmag (vol_var_long_long_int, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_long_long_int, vol_var_enum_e);
}
static void
test_fminmag_473 (void)
{
  extern typeof (fminmag (vol_var_long_long_int, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_long_long_int, vol_var__Bool);
}
static void
test_fminmag_474 (void)
{
  extern typeof (fminmag (vol_var_long_long_int, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_long_long_int, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_fminmag_475 (void)
{
  extern typeof (fminmag (vol_var_unsigned_long_long_int, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_unsigned_long_long_int, vol_var__Float16);
}
#endif
static void
test_fminmag_476 (void)
{
  extern typeof (fminmag (vol_var_unsigned_long_long_int, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_unsigned_long_long_int, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_fminmag_477 (void)
{
  extern typeof (fminmag (vol_var_unsigned_long_long_int, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_unsigned_long_long_int, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fminmag_478 (void)
{
  extern typeof (fminmag (vol_var_unsigned_long_long_int, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_unsigned_long_long_int, vol_var__Float32x);
}
#endif
static void
test_fminmag_479 (void)
{
  extern typeof (fminmag (vol_var_unsigned_long_long_int, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_unsigned_long_long_int, vol_var_double);
}
static void
test_fminmag_480 (void)
{
  extern typeof (fminmag (vol_var_unsigned_long_long_int, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fminmag (vol_var_unsigned_long_long_int, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_fminmag_481 (void)
{
  extern typeof (fminmag (vol_var_unsigned_long_long_int, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fminmag (vol_var_unsigned_long_long_int, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fminmag_482 (void)
{
  extern typeof (fminmag (vol_var_unsigned_long_long_int, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fminmag (vol_var_unsigned_long_long_int, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fminmag_483 (void)
{
  extern typeof (fminmag (vol_var_unsigned_long_long_int, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fminmag (vol_var_unsigned_long_long_int, vol_var__Float128);
}
#endif
static void
test_fminmag_484 (void)
{
  extern typeof (fminmag (vol_var_unsigned_long_long_int, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_unsigned_long_long_int, vol_var_char);
}
static void
test_fminmag_485 (void)
{
  extern typeof (fminmag (vol_var_unsigned_long_long_int, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_unsigned_long_long_int, vol_var_signed_char);
}
static void
test_fminmag_486 (void)
{
  extern typeof (fminmag (vol_var_unsigned_long_long_int, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_unsigned_long_long_int, vol_var_unsigned_char);
}
static void
test_fminmag_487 (void)
{
  extern typeof (fminmag (vol_var_unsigned_long_long_int, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_unsigned_long_long_int, vol_var_short_int);
}
static void
test_fminmag_488 (void)
{
  extern typeof (fminmag (vol_var_unsigned_long_long_int, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_unsigned_long_long_int, vol_var_unsigned_short_int);
}
static void
test_fminmag_489 (void)
{
  extern typeof (fminmag (vol_var_unsigned_long_long_int, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_unsigned_long_long_int, vol_var_int);
}
static void
test_fminmag_490 (void)
{
  extern typeof (fminmag (vol_var_unsigned_long_long_int, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_unsigned_long_long_int, vol_var_unsigned_int);
}
static void
test_fminmag_491 (void)
{
  extern typeof (fminmag (vol_var_unsigned_long_long_int, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_unsigned_long_long_int, vol_var_long_int);
}
static void
test_fminmag_492 (void)
{
  extern typeof (fminmag (vol_var_unsigned_long_long_int, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_unsigned_long_long_int, vol_var_unsigned_long_int);
}
static void
test_fminmag_493 (void)
{
  extern typeof (fminmag (vol_var_unsigned_long_long_int, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_unsigned_long_long_int, vol_var_long_long_int);
}
static void
test_fminmag_494 (void)
{
  extern typeof (fminmag (vol_var_unsigned_long_long_int, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_unsigned_long_long_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fminmag_495 (void)
{
  extern typeof (fminmag (vol_var_unsigned_long_long_int, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_unsigned_long_long_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fminmag_496 (void)
{
  extern typeof (fminmag (vol_var_unsigned_long_long_int, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_unsigned_long_long_int, vol_var_unsigned___int128);
}
#endif
static void
test_fminmag_497 (void)
{
  extern typeof (fminmag (vol_var_unsigned_long_long_int, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_unsigned_long_long_int, vol_var_enum_e);
}
static void
test_fminmag_498 (void)
{
  extern typeof (fminmag (vol_var_unsigned_long_long_int, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_unsigned_long_long_int, vol_var__Bool);
}
static void
test_fminmag_499 (void)
{
  extern typeof (fminmag (vol_var_unsigned_long_long_int, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_unsigned_long_long_int, vol_var_bit_field);
}
#if defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_fminmag_500 (void)
{
  extern typeof (fminmag (vol_var___int128, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var___int128, vol_var__Float16);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fminmag_501 (void)
{
  extern typeof (fminmag (vol_var___int128, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var___int128, vol_var_float);
}
#endif
#if defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_fminmag_502 (void)
{
  extern typeof (fminmag (vol_var___int128, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var___int128, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_fminmag_503 (void)
{
  extern typeof (fminmag (vol_var___int128, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var___int128, vol_var__Float32x);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fminmag_504 (void)
{
  extern typeof (fminmag (vol_var___int128, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var___int128, vol_var_double);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fminmag_505 (void)
{
  extern typeof (fminmag (vol_var___int128, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fminmag (vol_var___int128, vol_var_long_double);
}
#endif
#if defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_fminmag_506 (void)
{
  extern typeof (fminmag (vol_var___int128, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fminmag (vol_var___int128, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_fminmag_507 (void)
{
  extern typeof (fminmag (vol_var___int128, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fminmag (vol_var___int128, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_fminmag_508 (void)
{
  extern typeof (fminmag (vol_var___int128, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fminmag (vol_var___int128, vol_var__Float128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fminmag_509 (void)
{
  extern typeof (fminmag (vol_var___int128, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var___int128, vol_var_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fminmag_510 (void)
{
  extern typeof (fminmag (vol_var___int128, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var___int128, vol_var_signed_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fminmag_511 (void)
{
  extern typeof (fminmag (vol_var___int128, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var___int128, vol_var_unsigned_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fminmag_512 (void)
{
  extern typeof (fminmag (vol_var___int128, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var___int128, vol_var_short_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fminmag_513 (void)
{
  extern typeof (fminmag (vol_var___int128, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var___int128, vol_var_unsigned_short_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fminmag_514 (void)
{
  extern typeof (fminmag (vol_var___int128, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var___int128, vol_var_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fminmag_515 (void)
{
  extern typeof (fminmag (vol_var___int128, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var___int128, vol_var_unsigned_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fminmag_516 (void)
{
  extern typeof (fminmag (vol_var___int128, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var___int128, vol_var_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fminmag_517 (void)
{
  extern typeof (fminmag (vol_var___int128, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var___int128, vol_var_unsigned_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fminmag_518 (void)
{
  extern typeof (fminmag (vol_var___int128, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var___int128, vol_var_long_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fminmag_519 (void)
{
  extern typeof (fminmag (vol_var___int128, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var___int128, vol_var_unsigned_long_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fminmag_520 (void)
{
  extern typeof (fminmag (vol_var___int128, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var___int128, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fminmag_521 (void)
{
  extern typeof (fminmag (vol_var___int128, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var___int128, vol_var_unsigned___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fminmag_522 (void)
{
  extern typeof (fminmag (vol_var___int128, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var___int128, vol_var_enum_e);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fminmag_523 (void)
{
  extern typeof (fminmag (vol_var___int128, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var___int128, vol_var__Bool);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fminmag_524 (void)
{
  extern typeof (fminmag (vol_var___int128, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var___int128, vol_var_bit_field);
}
#endif
#if defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_fminmag_525 (void)
{
  extern typeof (fminmag (vol_var_unsigned___int128, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_unsigned___int128, vol_var__Float16);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fminmag_526 (void)
{
  extern typeof (fminmag (vol_var_unsigned___int128, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_unsigned___int128, vol_var_float);
}
#endif
#if defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_fminmag_527 (void)
{
  extern typeof (fminmag (vol_var_unsigned___int128, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_unsigned___int128, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_fminmag_528 (void)
{
  extern typeof (fminmag (vol_var_unsigned___int128, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_unsigned___int128, vol_var__Float32x);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fminmag_529 (void)
{
  extern typeof (fminmag (vol_var_unsigned___int128, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_unsigned___int128, vol_var_double);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fminmag_530 (void)
{
  extern typeof (fminmag (vol_var_unsigned___int128, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fminmag (vol_var_unsigned___int128, vol_var_long_double);
}
#endif
#if defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_fminmag_531 (void)
{
  extern typeof (fminmag (vol_var_unsigned___int128, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fminmag (vol_var_unsigned___int128, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_fminmag_532 (void)
{
  extern typeof (fminmag (vol_var_unsigned___int128, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fminmag (vol_var_unsigned___int128, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_fminmag_533 (void)
{
  extern typeof (fminmag (vol_var_unsigned___int128, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fminmag (vol_var_unsigned___int128, vol_var__Float128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fminmag_534 (void)
{
  extern typeof (fminmag (vol_var_unsigned___int128, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_unsigned___int128, vol_var_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fminmag_535 (void)
{
  extern typeof (fminmag (vol_var_unsigned___int128, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_unsigned___int128, vol_var_signed_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fminmag_536 (void)
{
  extern typeof (fminmag (vol_var_unsigned___int128, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_unsigned___int128, vol_var_unsigned_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fminmag_537 (void)
{
  extern typeof (fminmag (vol_var_unsigned___int128, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_unsigned___int128, vol_var_short_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fminmag_538 (void)
{
  extern typeof (fminmag (vol_var_unsigned___int128, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_unsigned___int128, vol_var_unsigned_short_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fminmag_539 (void)
{
  extern typeof (fminmag (vol_var_unsigned___int128, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_unsigned___int128, vol_var_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fminmag_540 (void)
{
  extern typeof (fminmag (vol_var_unsigned___int128, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_unsigned___int128, vol_var_unsigned_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fminmag_541 (void)
{
  extern typeof (fminmag (vol_var_unsigned___int128, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_unsigned___int128, vol_var_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fminmag_542 (void)
{
  extern typeof (fminmag (vol_var_unsigned___int128, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_unsigned___int128, vol_var_unsigned_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fminmag_543 (void)
{
  extern typeof (fminmag (vol_var_unsigned___int128, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_unsigned___int128, vol_var_long_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fminmag_544 (void)
{
  extern typeof (fminmag (vol_var_unsigned___int128, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_unsigned___int128, vol_var_unsigned_long_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fminmag_545 (void)
{
  extern typeof (fminmag (vol_var_unsigned___int128, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_unsigned___int128, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fminmag_546 (void)
{
  extern typeof (fminmag (vol_var_unsigned___int128, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_unsigned___int128, vol_var_unsigned___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fminmag_547 (void)
{
  extern typeof (fminmag (vol_var_unsigned___int128, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_unsigned___int128, vol_var_enum_e);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fminmag_548 (void)
{
  extern typeof (fminmag (vol_var_unsigned___int128, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_unsigned___int128, vol_var__Bool);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fminmag_549 (void)
{
  extern typeof (fminmag (vol_var_unsigned___int128, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_unsigned___int128, vol_var_bit_field);
}
#endif
#if defined HUGE_VAL_F16
static void
test_fminmag_550 (void)
{
  extern typeof (fminmag (vol_var_enum_e, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_enum_e, vol_var__Float16);
}
#endif
static void
test_fminmag_551 (void)
{
  extern typeof (fminmag (vol_var_enum_e, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_enum_e, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_fminmag_552 (void)
{
  extern typeof (fminmag (vol_var_enum_e, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_enum_e, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fminmag_553 (void)
{
  extern typeof (fminmag (vol_var_enum_e, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_enum_e, vol_var__Float32x);
}
#endif
static void
test_fminmag_554 (void)
{
  extern typeof (fminmag (vol_var_enum_e, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_enum_e, vol_var_double);
}
static void
test_fminmag_555 (void)
{
  extern typeof (fminmag (vol_var_enum_e, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fminmag (vol_var_enum_e, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_fminmag_556 (void)
{
  extern typeof (fminmag (vol_var_enum_e, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fminmag (vol_var_enum_e, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fminmag_557 (void)
{
  extern typeof (fminmag (vol_var_enum_e, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fminmag (vol_var_enum_e, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fminmag_558 (void)
{
  extern typeof (fminmag (vol_var_enum_e, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fminmag (vol_var_enum_e, vol_var__Float128);
}
#endif
static void
test_fminmag_559 (void)
{
  extern typeof (fminmag (vol_var_enum_e, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_enum_e, vol_var_char);
}
static void
test_fminmag_560 (void)
{
  extern typeof (fminmag (vol_var_enum_e, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_enum_e, vol_var_signed_char);
}
static void
test_fminmag_561 (void)
{
  extern typeof (fminmag (vol_var_enum_e, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_enum_e, vol_var_unsigned_char);
}
static void
test_fminmag_562 (void)
{
  extern typeof (fminmag (vol_var_enum_e, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_enum_e, vol_var_short_int);
}
static void
test_fminmag_563 (void)
{
  extern typeof (fminmag (vol_var_enum_e, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_enum_e, vol_var_unsigned_short_int);
}
static void
test_fminmag_564 (void)
{
  extern typeof (fminmag (vol_var_enum_e, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_enum_e, vol_var_int);
}
static void
test_fminmag_565 (void)
{
  extern typeof (fminmag (vol_var_enum_e, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_enum_e, vol_var_unsigned_int);
}
static void
test_fminmag_566 (void)
{
  extern typeof (fminmag (vol_var_enum_e, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_enum_e, vol_var_long_int);
}
static void
test_fminmag_567 (void)
{
  extern typeof (fminmag (vol_var_enum_e, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_enum_e, vol_var_unsigned_long_int);
}
static void
test_fminmag_568 (void)
{
  extern typeof (fminmag (vol_var_enum_e, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_enum_e, vol_var_long_long_int);
}
static void
test_fminmag_569 (void)
{
  extern typeof (fminmag (vol_var_enum_e, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_enum_e, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fminmag_570 (void)
{
  extern typeof (fminmag (vol_var_enum_e, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_enum_e, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fminmag_571 (void)
{
  extern typeof (fminmag (vol_var_enum_e, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_enum_e, vol_var_unsigned___int128);
}
#endif
static void
test_fminmag_572 (void)
{
  extern typeof (fminmag (vol_var_enum_e, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_enum_e, vol_var_enum_e);
}
static void
test_fminmag_573 (void)
{
  extern typeof (fminmag (vol_var_enum_e, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_enum_e, vol_var__Bool);
}
static void
test_fminmag_574 (void)
{
  extern typeof (fminmag (vol_var_enum_e, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_enum_e, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_fminmag_575 (void)
{
  extern typeof (fminmag (vol_var__Bool, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var__Bool, vol_var__Float16);
}
#endif
static void
test_fminmag_576 (void)
{
  extern typeof (fminmag (vol_var__Bool, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var__Bool, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_fminmag_577 (void)
{
  extern typeof (fminmag (vol_var__Bool, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var__Bool, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fminmag_578 (void)
{
  extern typeof (fminmag (vol_var__Bool, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var__Bool, vol_var__Float32x);
}
#endif
static void
test_fminmag_579 (void)
{
  extern typeof (fminmag (vol_var__Bool, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var__Bool, vol_var_double);
}
static void
test_fminmag_580 (void)
{
  extern typeof (fminmag (vol_var__Bool, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fminmag (vol_var__Bool, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_fminmag_581 (void)
{
  extern typeof (fminmag (vol_var__Bool, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fminmag (vol_var__Bool, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fminmag_582 (void)
{
  extern typeof (fminmag (vol_var__Bool, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fminmag (vol_var__Bool, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fminmag_583 (void)
{
  extern typeof (fminmag (vol_var__Bool, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fminmag (vol_var__Bool, vol_var__Float128);
}
#endif
static void
test_fminmag_584 (void)
{
  extern typeof (fminmag (vol_var__Bool, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var__Bool, vol_var_char);
}
static void
test_fminmag_585 (void)
{
  extern typeof (fminmag (vol_var__Bool, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var__Bool, vol_var_signed_char);
}
static void
test_fminmag_586 (void)
{
  extern typeof (fminmag (vol_var__Bool, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var__Bool, vol_var_unsigned_char);
}
static void
test_fminmag_587 (void)
{
  extern typeof (fminmag (vol_var__Bool, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var__Bool, vol_var_short_int);
}
static void
test_fminmag_588 (void)
{
  extern typeof (fminmag (vol_var__Bool, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var__Bool, vol_var_unsigned_short_int);
}
static void
test_fminmag_589 (void)
{
  extern typeof (fminmag (vol_var__Bool, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var__Bool, vol_var_int);
}
static void
test_fminmag_590 (void)
{
  extern typeof (fminmag (vol_var__Bool, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var__Bool, vol_var_unsigned_int);
}
static void
test_fminmag_591 (void)
{
  extern typeof (fminmag (vol_var__Bool, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var__Bool, vol_var_long_int);
}
static void
test_fminmag_592 (void)
{
  extern typeof (fminmag (vol_var__Bool, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var__Bool, vol_var_unsigned_long_int);
}
static void
test_fminmag_593 (void)
{
  extern typeof (fminmag (vol_var__Bool, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var__Bool, vol_var_long_long_int);
}
static void
test_fminmag_594 (void)
{
  extern typeof (fminmag (vol_var__Bool, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var__Bool, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fminmag_595 (void)
{
  extern typeof (fminmag (vol_var__Bool, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var__Bool, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fminmag_596 (void)
{
  extern typeof (fminmag (vol_var__Bool, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var__Bool, vol_var_unsigned___int128);
}
#endif
static void
test_fminmag_597 (void)
{
  extern typeof (fminmag (vol_var__Bool, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var__Bool, vol_var_enum_e);
}
static void
test_fminmag_598 (void)
{
  extern typeof (fminmag (vol_var__Bool, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var__Bool, vol_var__Bool);
}
static void
test_fminmag_599 (void)
{
  extern typeof (fminmag (vol_var__Bool, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var__Bool, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_fminmag_600 (void)
{
  extern typeof (fminmag (vol_var_bit_field, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_bit_field, vol_var__Float16);
}
#endif
static void
test_fminmag_601 (void)
{
  extern typeof (fminmag (vol_var_bit_field, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_bit_field, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_fminmag_602 (void)
{
  extern typeof (fminmag (vol_var_bit_field, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_bit_field, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fminmag_603 (void)
{
  extern typeof (fminmag (vol_var_bit_field, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_bit_field, vol_var__Float32x);
}
#endif
static void
test_fminmag_604 (void)
{
  extern typeof (fminmag (vol_var_bit_field, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_bit_field, vol_var_double);
}
static void
test_fminmag_605 (void)
{
  extern typeof (fminmag (vol_var_bit_field, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fminmag (vol_var_bit_field, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_fminmag_606 (void)
{
  extern typeof (fminmag (vol_var_bit_field, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fminmag (vol_var_bit_field, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fminmag_607 (void)
{
  extern typeof (fminmag (vol_var_bit_field, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fminmag (vol_var_bit_field, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fminmag_608 (void)
{
  extern typeof (fminmag (vol_var_bit_field, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fminmag (vol_var_bit_field, vol_var__Float128);
}
#endif
static void
test_fminmag_609 (void)
{
  extern typeof (fminmag (vol_var_bit_field, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_bit_field, vol_var_char);
}
static void
test_fminmag_610 (void)
{
  extern typeof (fminmag (vol_var_bit_field, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_bit_field, vol_var_signed_char);
}
static void
test_fminmag_611 (void)
{
  extern typeof (fminmag (vol_var_bit_field, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_bit_field, vol_var_unsigned_char);
}
static void
test_fminmag_612 (void)
{
  extern typeof (fminmag (vol_var_bit_field, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_bit_field, vol_var_short_int);
}
static void
test_fminmag_613 (void)
{
  extern typeof (fminmag (vol_var_bit_field, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_bit_field, vol_var_unsigned_short_int);
}
static void
test_fminmag_614 (void)
{
  extern typeof (fminmag (vol_var_bit_field, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_bit_field, vol_var_int);
}
static void
test_fminmag_615 (void)
{
  extern typeof (fminmag (vol_var_bit_field, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_bit_field, vol_var_unsigned_int);
}
static void
test_fminmag_616 (void)
{
  extern typeof (fminmag (vol_var_bit_field, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_bit_field, vol_var_long_int);
}
static void
test_fminmag_617 (void)
{
  extern typeof (fminmag (vol_var_bit_field, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_bit_field, vol_var_unsigned_long_int);
}
static void
test_fminmag_618 (void)
{
  extern typeof (fminmag (vol_var_bit_field, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_bit_field, vol_var_long_long_int);
}
static void
test_fminmag_619 (void)
{
  extern typeof (fminmag (vol_var_bit_field, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_bit_field, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fminmag_620 (void)
{
  extern typeof (fminmag (vol_var_bit_field, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_bit_field, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fminmag_621 (void)
{
  extern typeof (fminmag (vol_var_bit_field, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_bit_field, vol_var_unsigned___int128);
}
#endif
static void
test_fminmag_622 (void)
{
  extern typeof (fminmag (vol_var_bit_field, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_bit_field, vol_var_enum_e);
}
static void
test_fminmag_623 (void)
{
  extern typeof (fminmag (vol_var_bit_field, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_bit_field, vol_var__Bool);
}
static void
test_fminmag_624 (void)
{
  extern typeof (fminmag (vol_var_bit_field, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = fminmag (vol_var_bit_field, vol_var_bit_field);
}
static const struct test tests[] =
  {
#if defined HUGE_VAL_F16
    { test_fminmag_0, "fminmag", "fminmag (_Float16, _Float16)", FLT16_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_fminmag_1, "fminmag", "fminmag (_Float16, float)", FLT_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F32
    { test_fminmag_2, "fminmag", "fminmag (_Float16, _Float32)", FLT32_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
    { test_fminmag_3, "fminmag", "fminmag (_Float16, _Float32x)", FLT32X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_fminmag_4, "fminmag", "fminmag (_Float16, double)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_fminmag_5, "fminmag", "fminmag (_Float16, long double)", LDBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F64
    { test_fminmag_6, "fminmag", "fminmag (_Float16, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
    { test_fminmag_7, "fminmag", "fminmag (_Float16, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F16
    { test_fminmag_8, "fminmag", "fminmag (_Float16, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_fminmag_9, "fminmag", "fminmag (_Float16, char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_fminmag_10, "fminmag", "fminmag (_Float16, signed char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_fminmag_11, "fminmag", "fminmag (_Float16, unsigned char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_fminmag_12, "fminmag", "fminmag (_Float16, short int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_fminmag_13, "fminmag", "fminmag (_Float16, unsigned short int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_fminmag_14, "fminmag", "fminmag (_Float16, int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_fminmag_15, "fminmag", "fminmag (_Float16, unsigned int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_fminmag_16, "fminmag", "fminmag (_Float16, long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_fminmag_17, "fminmag", "fminmag (_Float16, unsigned long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_fminmag_18, "fminmag", "fminmag (_Float16, long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_fminmag_19, "fminmag", "fminmag (_Float16, unsigned long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_fminmag_20, "fminmag", "fminmag (_Float16, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_fminmag_21, "fminmag", "fminmag (_Float16, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_fminmag_22, "fminmag", "fminmag (_Float16, enum e)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_fminmag_23, "fminmag", "fminmag (_Float16, _Bool)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_fminmag_24, "fminmag", "fminmag (_Float16, bit_field)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_fminmag_25, "fminmag", "fminmag (float, _Float16)", FLT_MANT_DIG, 0 },
#endif
    { test_fminmag_26, "fminmag", "fminmag (float, float)", FLT_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_fminmag_27, "fminmag", "fminmag (float, _Float32)", FLT32_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fminmag_28, "fminmag", "fminmag (float, _Float32x)", FLT32X_MANT_DIG, 0 },
#endif
    { test_fminmag_29, "fminmag", "fminmag (float, double)", DBL_MANT_DIG, 0 },
    { test_fminmag_30, "fminmag", "fminmag (float, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_fminmag_31, "fminmag", "fminmag (float, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fminmag_32, "fminmag", "fminmag (float, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fminmag_33, "fminmag", "fminmag (float, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_fminmag_34, "fminmag", "fminmag (float, char)", DBL_MANT_DIG, 0 },
    { test_fminmag_35, "fminmag", "fminmag (float, signed char)", DBL_MANT_DIG, 0 },
    { test_fminmag_36, "fminmag", "fminmag (float, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fminmag_37, "fminmag", "fminmag (float, short int)", DBL_MANT_DIG, 0 },
    { test_fminmag_38, "fminmag", "fminmag (float, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fminmag_39, "fminmag", "fminmag (float, int)", DBL_MANT_DIG, 0 },
    { test_fminmag_40, "fminmag", "fminmag (float, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fminmag_41, "fminmag", "fminmag (float, long int)", DBL_MANT_DIG, 0 },
    { test_fminmag_42, "fminmag", "fminmag (float, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fminmag_43, "fminmag", "fminmag (float, long long int)", DBL_MANT_DIG, 0 },
    { test_fminmag_44, "fminmag", "fminmag (float, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fminmag_45, "fminmag", "fminmag (float, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fminmag_46, "fminmag", "fminmag (float, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fminmag_47, "fminmag", "fminmag (float, enum e)", DBL_MANT_DIG, 0 },
    { test_fminmag_48, "fminmag", "fminmag (float, _Bool)", DBL_MANT_DIG, 0 },
    { test_fminmag_49, "fminmag", "fminmag (float, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F32
    { test_fminmag_50, "fminmag", "fminmag (_Float32, _Float16)", FLT32_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_fminmag_51, "fminmag", "fminmag (_Float32, float)", FLT32_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_fminmag_52, "fminmag", "fminmag (_Float32, _Float32)", FLT32_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
    { test_fminmag_53, "fminmag", "fminmag (_Float32, _Float32x)", FLT32X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_fminmag_54, "fminmag", "fminmag (_Float32, double)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_fminmag_55, "fminmag", "fminmag (_Float32, long double)", LDBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F64
    { test_fminmag_56, "fminmag", "fminmag (_Float32, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
    { test_fminmag_57, "fminmag", "fminmag (_Float32, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F32
    { test_fminmag_58, "fminmag", "fminmag (_Float32, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_fminmag_59, "fminmag", "fminmag (_Float32, char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_fminmag_60, "fminmag", "fminmag (_Float32, signed char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_fminmag_61, "fminmag", "fminmag (_Float32, unsigned char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_fminmag_62, "fminmag", "fminmag (_Float32, short int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_fminmag_63, "fminmag", "fminmag (_Float32, unsigned short int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_fminmag_64, "fminmag", "fminmag (_Float32, int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_fminmag_65, "fminmag", "fminmag (_Float32, unsigned int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_fminmag_66, "fminmag", "fminmag (_Float32, long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_fminmag_67, "fminmag", "fminmag (_Float32, unsigned long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_fminmag_68, "fminmag", "fminmag (_Float32, long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_fminmag_69, "fminmag", "fminmag (_Float32, unsigned long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_fminmag_70, "fminmag", "fminmag (_Float32, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_fminmag_71, "fminmag", "fminmag (_Float32, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_fminmag_72, "fminmag", "fminmag (_Float32, enum e)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_fminmag_73, "fminmag", "fminmag (_Float32, _Bool)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_fminmag_74, "fminmag", "fminmag (_Float32, bit_field)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
    { test_fminmag_75, "fminmag", "fminmag (_Float32x, _Float16)", FLT32X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fminmag_76, "fminmag", "fminmag (_Float32x, float)", FLT32X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
    { test_fminmag_77, "fminmag", "fminmag (_Float32x, _Float32)", FLT32X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fminmag_78, "fminmag", "fminmag (_Float32x, _Float32x)", FLT32X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fminmag_79, "fminmag", "fminmag (_Float32x, double)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fminmag_80, "fminmag", "fminmag (_Float32x, long double)", LDBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X && defined HUGE_VAL_F64
    { test_fminmag_81, "fminmag", "fminmag (_Float32x, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
    { test_fminmag_82, "fminmag", "fminmag (_Float32x, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
    { test_fminmag_83, "fminmag", "fminmag (_Float32x, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fminmag_84, "fminmag", "fminmag (_Float32x, char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fminmag_85, "fminmag", "fminmag (_Float32x, signed char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fminmag_86, "fminmag", "fminmag (_Float32x, unsigned char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fminmag_87, "fminmag", "fminmag (_Float32x, short int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fminmag_88, "fminmag", "fminmag (_Float32x, unsigned short int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fminmag_89, "fminmag", "fminmag (_Float32x, int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fminmag_90, "fminmag", "fminmag (_Float32x, unsigned int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fminmag_91, "fminmag", "fminmag (_Float32x, long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fminmag_92, "fminmag", "fminmag (_Float32x, unsigned long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fminmag_93, "fminmag", "fminmag (_Float32x, long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fminmag_94, "fminmag", "fminmag (_Float32x, unsigned long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_fminmag_95, "fminmag", "fminmag (_Float32x, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_fminmag_96, "fminmag", "fminmag (_Float32x, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fminmag_97, "fminmag", "fminmag (_Float32x, enum e)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fminmag_98, "fminmag", "fminmag (_Float32x, _Bool)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fminmag_99, "fminmag", "fminmag (_Float32x, bit_field)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_fminmag_100, "fminmag", "fminmag (double, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_fminmag_101, "fminmag", "fminmag (double, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_fminmag_102, "fminmag", "fminmag (double, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fminmag_103, "fminmag", "fminmag (double, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_fminmag_104, "fminmag", "fminmag (double, double)", DBL_MANT_DIG, 0 },
    { test_fminmag_105, "fminmag", "fminmag (double, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_fminmag_106, "fminmag", "fminmag (double, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fminmag_107, "fminmag", "fminmag (double, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fminmag_108, "fminmag", "fminmag (double, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_fminmag_109, "fminmag", "fminmag (double, char)", DBL_MANT_DIG, 0 },
    { test_fminmag_110, "fminmag", "fminmag (double, signed char)", DBL_MANT_DIG, 0 },
    { test_fminmag_111, "fminmag", "fminmag (double, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fminmag_112, "fminmag", "fminmag (double, short int)", DBL_MANT_DIG, 0 },
    { test_fminmag_113, "fminmag", "fminmag (double, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fminmag_114, "fminmag", "fminmag (double, int)", DBL_MANT_DIG, 0 },
    { test_fminmag_115, "fminmag", "fminmag (double, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fminmag_116, "fminmag", "fminmag (double, long int)", DBL_MANT_DIG, 0 },
    { test_fminmag_117, "fminmag", "fminmag (double, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fminmag_118, "fminmag", "fminmag (double, long long int)", DBL_MANT_DIG, 0 },
    { test_fminmag_119, "fminmag", "fminmag (double, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fminmag_120, "fminmag", "fminmag (double, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fminmag_121, "fminmag", "fminmag (double, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fminmag_122, "fminmag", "fminmag (double, enum e)", DBL_MANT_DIG, 0 },
    { test_fminmag_123, "fminmag", "fminmag (double, _Bool)", DBL_MANT_DIG, 0 },
    { test_fminmag_124, "fminmag", "fminmag (double, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_fminmag_125, "fminmag", "fminmag (long double, _Float16)", LDBL_MANT_DIG, 0 },
#endif
    { test_fminmag_126, "fminmag", "fminmag (long double, float)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_fminmag_127, "fminmag", "fminmag (long double, _Float32)", LDBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fminmag_128, "fminmag", "fminmag (long double, _Float32x)", LDBL_MANT_DIG, 0 },
#endif
    { test_fminmag_129, "fminmag", "fminmag (long double, double)", LDBL_MANT_DIG, 0 },
    { test_fminmag_130, "fminmag", "fminmag (long double, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_fminmag_131, "fminmag", "fminmag (long double, _Float64)", LDBL_MANT_DIG, 0 },
#endif
#if (LDBL_MANT_DIG != 106) && defined HUGE_VAL_F64X
    { test_fminmag_132, "fminmag", "fminmag (long double, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (LDBL_MANT_DIG != 106) && defined HUGE_VAL_F128
    { test_fminmag_133, "fminmag", "fminmag (long double, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_fminmag_134, "fminmag", "fminmag (long double, char)", LDBL_MANT_DIG, 0 },
    { test_fminmag_135, "fminmag", "fminmag (long double, signed char)", LDBL_MANT_DIG, 0 },
    { test_fminmag_136, "fminmag", "fminmag (long double, unsigned char)", LDBL_MANT_DIG, 0 },
    { test_fminmag_137, "fminmag", "fminmag (long double, short int)", LDBL_MANT_DIG, 0 },
    { test_fminmag_138, "fminmag", "fminmag (long double, unsigned short int)", LDBL_MANT_DIG, 0 },
    { test_fminmag_139, "fminmag", "fminmag (long double, int)", LDBL_MANT_DIG, 0 },
    { test_fminmag_140, "fminmag", "fminmag (long double, unsigned int)", LDBL_MANT_DIG, 0 },
    { test_fminmag_141, "fminmag", "fminmag (long double, long int)", LDBL_MANT_DIG, 0 },
    { test_fminmag_142, "fminmag", "fminmag (long double, unsigned long int)", LDBL_MANT_DIG, 0 },
    { test_fminmag_143, "fminmag", "fminmag (long double, long long int)", LDBL_MANT_DIG, 0 },
    { test_fminmag_144, "fminmag", "fminmag (long double, unsigned long long int)", LDBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fminmag_145, "fminmag", "fminmag (long double, __int128)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fminmag_146, "fminmag", "fminmag (long double, unsigned __int128)", LDBL_MANT_DIG, 0 },
#endif
    { test_fminmag_147, "fminmag", "fminmag (long double, enum e)", LDBL_MANT_DIG, 0 },
    { test_fminmag_148, "fminmag", "fminmag (long double, _Bool)", LDBL_MANT_DIG, 0 },
    { test_fminmag_149, "fminmag", "fminmag (long double, bit_field)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F64
    { test_fminmag_150, "fminmag", "fminmag (_Float64, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_fminmag_151, "fminmag", "fminmag (_Float64, float)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F64
    { test_fminmag_152, "fminmag", "fminmag (_Float64, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X && defined HUGE_VAL_F64
    { test_fminmag_153, "fminmag", "fminmag (_Float64, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_fminmag_154, "fminmag", "fminmag (_Float64, double)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_fminmag_155, "fminmag", "fminmag (_Float64, long double)", LDBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_fminmag_156, "fminmag", "fminmag (_Float64, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
    { test_fminmag_157, "fminmag", "fminmag (_Float64, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F64
    { test_fminmag_158, "fminmag", "fminmag (_Float64, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_fminmag_159, "fminmag", "fminmag (_Float64, char)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_fminmag_160, "fminmag", "fminmag (_Float64, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_fminmag_161, "fminmag", "fminmag (_Float64, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_fminmag_162, "fminmag", "fminmag (_Float64, short int)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_fminmag_163, "fminmag", "fminmag (_Float64, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_fminmag_164, "fminmag", "fminmag (_Float64, int)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_fminmag_165, "fminmag", "fminmag (_Float64, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_fminmag_166, "fminmag", "fminmag (_Float64, long int)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_fminmag_167, "fminmag", "fminmag (_Float64, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_fminmag_168, "fminmag", "fminmag (_Float64, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_fminmag_169, "fminmag", "fminmag (_Float64, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_fminmag_170, "fminmag", "fminmag (_Float64, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_fminmag_171, "fminmag", "fminmag (_Float64, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_fminmag_172, "fminmag", "fminmag (_Float64, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_fminmag_173, "fminmag", "fminmag (_Float64, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_fminmag_174, "fminmag", "fminmag (_Float64, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
    { test_fminmag_175, "fminmag", "fminmag (_Float64x, _Float16)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fminmag_176, "fminmag", "fminmag (_Float64x, float)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
    { test_fminmag_177, "fminmag", "fminmag (_Float64x, _Float32)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
    { test_fminmag_178, "fminmag", "fminmag (_Float64x, _Float32x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fminmag_179, "fminmag", "fminmag (_Float64x, double)", FLT64X_MANT_DIG, 0 },
#endif
#if (LDBL_MANT_DIG != 106) && defined HUGE_VAL_F64X
    { test_fminmag_180, "fminmag", "fminmag (_Float64x, long double)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
    { test_fminmag_181, "fminmag", "fminmag (_Float64x, _Float64)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fminmag_182, "fminmag", "fminmag (_Float64x, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
    { test_fminmag_183, "fminmag", "fminmag (_Float64x, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fminmag_184, "fminmag", "fminmag (_Float64x, char)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fminmag_185, "fminmag", "fminmag (_Float64x, signed char)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fminmag_186, "fminmag", "fminmag (_Float64x, unsigned char)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fminmag_187, "fminmag", "fminmag (_Float64x, short int)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fminmag_188, "fminmag", "fminmag (_Float64x, unsigned short int)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fminmag_189, "fminmag", "fminmag (_Float64x, int)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fminmag_190, "fminmag", "fminmag (_Float64x, unsigned int)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fminmag_191, "fminmag", "fminmag (_Float64x, long int)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fminmag_192, "fminmag", "fminmag (_Float64x, unsigned long int)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fminmag_193, "fminmag", "fminmag (_Float64x, long long int)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fminmag_194, "fminmag", "fminmag (_Float64x, unsigned long long int)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_fminmag_195, "fminmag", "fminmag (_Float64x, __int128)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_fminmag_196, "fminmag", "fminmag (_Float64x, unsigned __int128)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fminmag_197, "fminmag", "fminmag (_Float64x, enum e)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fminmag_198, "fminmag", "fminmag (_Float64x, _Bool)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fminmag_199, "fminmag", "fminmag (_Float64x, bit_field)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F16
    { test_fminmag_200, "fminmag", "fminmag (_Float128, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fminmag_201, "fminmag", "fminmag (_Float128, float)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F32
    { test_fminmag_202, "fminmag", "fminmag (_Float128, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
    { test_fminmag_203, "fminmag", "fminmag (_Float128, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fminmag_204, "fminmag", "fminmag (_Float128, double)", FLT128_MANT_DIG, 0 },
#endif
#if (LDBL_MANT_DIG != 106) && defined HUGE_VAL_F128
    { test_fminmag_205, "fminmag", "fminmag (_Float128, long double)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F64
    { test_fminmag_206, "fminmag", "fminmag (_Float128, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
    { test_fminmag_207, "fminmag", "fminmag (_Float128, _Float64x)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fminmag_208, "fminmag", "fminmag (_Float128, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fminmag_209, "fminmag", "fminmag (_Float128, char)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fminmag_210, "fminmag", "fminmag (_Float128, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fminmag_211, "fminmag", "fminmag (_Float128, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fminmag_212, "fminmag", "fminmag (_Float128, short int)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fminmag_213, "fminmag", "fminmag (_Float128, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fminmag_214, "fminmag", "fminmag (_Float128, int)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fminmag_215, "fminmag", "fminmag (_Float128, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fminmag_216, "fminmag", "fminmag (_Float128, long int)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fminmag_217, "fminmag", "fminmag (_Float128, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fminmag_218, "fminmag", "fminmag (_Float128, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fminmag_219, "fminmag", "fminmag (_Float128, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_fminmag_220, "fminmag", "fminmag (_Float128, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_fminmag_221, "fminmag", "fminmag (_Float128, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fminmag_222, "fminmag", "fminmag (_Float128, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fminmag_223, "fminmag", "fminmag (_Float128, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fminmag_224, "fminmag", "fminmag (_Float128, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_fminmag_225, "fminmag", "fminmag (char, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_fminmag_226, "fminmag", "fminmag (char, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_fminmag_227, "fminmag", "fminmag (char, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fminmag_228, "fminmag", "fminmag (char, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_fminmag_229, "fminmag", "fminmag (char, double)", DBL_MANT_DIG, 0 },
    { test_fminmag_230, "fminmag", "fminmag (char, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_fminmag_231, "fminmag", "fminmag (char, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fminmag_232, "fminmag", "fminmag (char, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fminmag_233, "fminmag", "fminmag (char, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_fminmag_234, "fminmag", "fminmag (char, char)", DBL_MANT_DIG, 0 },
    { test_fminmag_235, "fminmag", "fminmag (char, signed char)", DBL_MANT_DIG, 0 },
    { test_fminmag_236, "fminmag", "fminmag (char, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fminmag_237, "fminmag", "fminmag (char, short int)", DBL_MANT_DIG, 0 },
    { test_fminmag_238, "fminmag", "fminmag (char, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fminmag_239, "fminmag", "fminmag (char, int)", DBL_MANT_DIG, 0 },
    { test_fminmag_240, "fminmag", "fminmag (char, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fminmag_241, "fminmag", "fminmag (char, long int)", DBL_MANT_DIG, 0 },
    { test_fminmag_242, "fminmag", "fminmag (char, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fminmag_243, "fminmag", "fminmag (char, long long int)", DBL_MANT_DIG, 0 },
    { test_fminmag_244, "fminmag", "fminmag (char, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fminmag_245, "fminmag", "fminmag (char, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fminmag_246, "fminmag", "fminmag (char, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fminmag_247, "fminmag", "fminmag (char, enum e)", DBL_MANT_DIG, 0 },
    { test_fminmag_248, "fminmag", "fminmag (char, _Bool)", DBL_MANT_DIG, 0 },
    { test_fminmag_249, "fminmag", "fminmag (char, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_fminmag_250, "fminmag", "fminmag (signed char, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_fminmag_251, "fminmag", "fminmag (signed char, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_fminmag_252, "fminmag", "fminmag (signed char, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fminmag_253, "fminmag", "fminmag (signed char, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_fminmag_254, "fminmag", "fminmag (signed char, double)", DBL_MANT_DIG, 0 },
    { test_fminmag_255, "fminmag", "fminmag (signed char, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_fminmag_256, "fminmag", "fminmag (signed char, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fminmag_257, "fminmag", "fminmag (signed char, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fminmag_258, "fminmag", "fminmag (signed char, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_fminmag_259, "fminmag", "fminmag (signed char, char)", DBL_MANT_DIG, 0 },
    { test_fminmag_260, "fminmag", "fminmag (signed char, signed char)", DBL_MANT_DIG, 0 },
    { test_fminmag_261, "fminmag", "fminmag (signed char, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fminmag_262, "fminmag", "fminmag (signed char, short int)", DBL_MANT_DIG, 0 },
    { test_fminmag_263, "fminmag", "fminmag (signed char, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fminmag_264, "fminmag", "fminmag (signed char, int)", DBL_MANT_DIG, 0 },
    { test_fminmag_265, "fminmag", "fminmag (signed char, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fminmag_266, "fminmag", "fminmag (signed char, long int)", DBL_MANT_DIG, 0 },
    { test_fminmag_267, "fminmag", "fminmag (signed char, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fminmag_268, "fminmag", "fminmag (signed char, long long int)", DBL_MANT_DIG, 0 },
    { test_fminmag_269, "fminmag", "fminmag (signed char, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fminmag_270, "fminmag", "fminmag (signed char, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fminmag_271, "fminmag", "fminmag (signed char, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fminmag_272, "fminmag", "fminmag (signed char, enum e)", DBL_MANT_DIG, 0 },
    { test_fminmag_273, "fminmag", "fminmag (signed char, _Bool)", DBL_MANT_DIG, 0 },
    { test_fminmag_274, "fminmag", "fminmag (signed char, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_fminmag_275, "fminmag", "fminmag (unsigned char, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_fminmag_276, "fminmag", "fminmag (unsigned char, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_fminmag_277, "fminmag", "fminmag (unsigned char, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fminmag_278, "fminmag", "fminmag (unsigned char, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_fminmag_279, "fminmag", "fminmag (unsigned char, double)", DBL_MANT_DIG, 0 },
    { test_fminmag_280, "fminmag", "fminmag (unsigned char, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_fminmag_281, "fminmag", "fminmag (unsigned char, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fminmag_282, "fminmag", "fminmag (unsigned char, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fminmag_283, "fminmag", "fminmag (unsigned char, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_fminmag_284, "fminmag", "fminmag (unsigned char, char)", DBL_MANT_DIG, 0 },
    { test_fminmag_285, "fminmag", "fminmag (unsigned char, signed char)", DBL_MANT_DIG, 0 },
    { test_fminmag_286, "fminmag", "fminmag (unsigned char, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fminmag_287, "fminmag", "fminmag (unsigned char, short int)", DBL_MANT_DIG, 0 },
    { test_fminmag_288, "fminmag", "fminmag (unsigned char, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fminmag_289, "fminmag", "fminmag (unsigned char, int)", DBL_MANT_DIG, 0 },
    { test_fminmag_290, "fminmag", "fminmag (unsigned char, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fminmag_291, "fminmag", "fminmag (unsigned char, long int)", DBL_MANT_DIG, 0 },
    { test_fminmag_292, "fminmag", "fminmag (unsigned char, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fminmag_293, "fminmag", "fminmag (unsigned char, long long int)", DBL_MANT_DIG, 0 },
    { test_fminmag_294, "fminmag", "fminmag (unsigned char, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fminmag_295, "fminmag", "fminmag (unsigned char, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fminmag_296, "fminmag", "fminmag (unsigned char, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fminmag_297, "fminmag", "fminmag (unsigned char, enum e)", DBL_MANT_DIG, 0 },
    { test_fminmag_298, "fminmag", "fminmag (unsigned char, _Bool)", DBL_MANT_DIG, 0 },
    { test_fminmag_299, "fminmag", "fminmag (unsigned char, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_fminmag_300, "fminmag", "fminmag (short int, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_fminmag_301, "fminmag", "fminmag (short int, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_fminmag_302, "fminmag", "fminmag (short int, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fminmag_303, "fminmag", "fminmag (short int, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_fminmag_304, "fminmag", "fminmag (short int, double)", DBL_MANT_DIG, 0 },
    { test_fminmag_305, "fminmag", "fminmag (short int, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_fminmag_306, "fminmag", "fminmag (short int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fminmag_307, "fminmag", "fminmag (short int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fminmag_308, "fminmag", "fminmag (short int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_fminmag_309, "fminmag", "fminmag (short int, char)", DBL_MANT_DIG, 0 },
    { test_fminmag_310, "fminmag", "fminmag (short int, signed char)", DBL_MANT_DIG, 0 },
    { test_fminmag_311, "fminmag", "fminmag (short int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fminmag_312, "fminmag", "fminmag (short int, short int)", DBL_MANT_DIG, 0 },
    { test_fminmag_313, "fminmag", "fminmag (short int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fminmag_314, "fminmag", "fminmag (short int, int)", DBL_MANT_DIG, 0 },
    { test_fminmag_315, "fminmag", "fminmag (short int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fminmag_316, "fminmag", "fminmag (short int, long int)", DBL_MANT_DIG, 0 },
    { test_fminmag_317, "fminmag", "fminmag (short int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fminmag_318, "fminmag", "fminmag (short int, long long int)", DBL_MANT_DIG, 0 },
    { test_fminmag_319, "fminmag", "fminmag (short int, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fminmag_320, "fminmag", "fminmag (short int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fminmag_321, "fminmag", "fminmag (short int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fminmag_322, "fminmag", "fminmag (short int, enum e)", DBL_MANT_DIG, 0 },
    { test_fminmag_323, "fminmag", "fminmag (short int, _Bool)", DBL_MANT_DIG, 0 },
    { test_fminmag_324, "fminmag", "fminmag (short int, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_fminmag_325, "fminmag", "fminmag (unsigned short int, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_fminmag_326, "fminmag", "fminmag (unsigned short int, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_fminmag_327, "fminmag", "fminmag (unsigned short int, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fminmag_328, "fminmag", "fminmag (unsigned short int, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_fminmag_329, "fminmag", "fminmag (unsigned short int, double)", DBL_MANT_DIG, 0 },
    { test_fminmag_330, "fminmag", "fminmag (unsigned short int, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_fminmag_331, "fminmag", "fminmag (unsigned short int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fminmag_332, "fminmag", "fminmag (unsigned short int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fminmag_333, "fminmag", "fminmag (unsigned short int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_fminmag_334, "fminmag", "fminmag (unsigned short int, char)", DBL_MANT_DIG, 0 },
    { test_fminmag_335, "fminmag", "fminmag (unsigned short int, signed char)", DBL_MANT_DIG, 0 },
    { test_fminmag_336, "fminmag", "fminmag (unsigned short int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fminmag_337, "fminmag", "fminmag (unsigned short int, short int)", DBL_MANT_DIG, 0 },
    { test_fminmag_338, "fminmag", "fminmag (unsigned short int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fminmag_339, "fminmag", "fminmag (unsigned short int, int)", DBL_MANT_DIG, 0 },
    { test_fminmag_340, "fminmag", "fminmag (unsigned short int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fminmag_341, "fminmag", "fminmag (unsigned short int, long int)", DBL_MANT_DIG, 0 },
    { test_fminmag_342, "fminmag", "fminmag (unsigned short int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fminmag_343, "fminmag", "fminmag (unsigned short int, long long int)", DBL_MANT_DIG, 0 },
    { test_fminmag_344, "fminmag", "fminmag (unsigned short int, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fminmag_345, "fminmag", "fminmag (unsigned short int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fminmag_346, "fminmag", "fminmag (unsigned short int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fminmag_347, "fminmag", "fminmag (unsigned short int, enum e)", DBL_MANT_DIG, 0 },
    { test_fminmag_348, "fminmag", "fminmag (unsigned short int, _Bool)", DBL_MANT_DIG, 0 },
    { test_fminmag_349, "fminmag", "fminmag (unsigned short int, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_fminmag_350, "fminmag", "fminmag (int, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_fminmag_351, "fminmag", "fminmag (int, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_fminmag_352, "fminmag", "fminmag (int, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fminmag_353, "fminmag", "fminmag (int, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_fminmag_354, "fminmag", "fminmag (int, double)", DBL_MANT_DIG, 0 },
    { test_fminmag_355, "fminmag", "fminmag (int, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_fminmag_356, "fminmag", "fminmag (int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fminmag_357, "fminmag", "fminmag (int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fminmag_358, "fminmag", "fminmag (int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_fminmag_359, "fminmag", "fminmag (int, char)", DBL_MANT_DIG, 0 },
    { test_fminmag_360, "fminmag", "fminmag (int, signed char)", DBL_MANT_DIG, 0 },
    { test_fminmag_361, "fminmag", "fminmag (int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fminmag_362, "fminmag", "fminmag (int, short int)", DBL_MANT_DIG, 0 },
    { test_fminmag_363, "fminmag", "fminmag (int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fminmag_364, "fminmag", "fminmag (int, int)", DBL_MANT_DIG, 0 },
    { test_fminmag_365, "fminmag", "fminmag (int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fminmag_366, "fminmag", "fminmag (int, long int)", DBL_MANT_DIG, 0 },
    { test_fminmag_367, "fminmag", "fminmag (int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fminmag_368, "fminmag", "fminmag (int, long long int)", DBL_MANT_DIG, 0 },
    { test_fminmag_369, "fminmag", "fminmag (int, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fminmag_370, "fminmag", "fminmag (int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fminmag_371, "fminmag", "fminmag (int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fminmag_372, "fminmag", "fminmag (int, enum e)", DBL_MANT_DIG, 0 },
    { test_fminmag_373, "fminmag", "fminmag (int, _Bool)", DBL_MANT_DIG, 0 },
    { test_fminmag_374, "fminmag", "fminmag (int, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_fminmag_375, "fminmag", "fminmag (unsigned int, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_fminmag_376, "fminmag", "fminmag (unsigned int, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_fminmag_377, "fminmag", "fminmag (unsigned int, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fminmag_378, "fminmag", "fminmag (unsigned int, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_fminmag_379, "fminmag", "fminmag (unsigned int, double)", DBL_MANT_DIG, 0 },
    { test_fminmag_380, "fminmag", "fminmag (unsigned int, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_fminmag_381, "fminmag", "fminmag (unsigned int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fminmag_382, "fminmag", "fminmag (unsigned int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fminmag_383, "fminmag", "fminmag (unsigned int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_fminmag_384, "fminmag", "fminmag (unsigned int, char)", DBL_MANT_DIG, 0 },
    { test_fminmag_385, "fminmag", "fminmag (unsigned int, signed char)", DBL_MANT_DIG, 0 },
    { test_fminmag_386, "fminmag", "fminmag (unsigned int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fminmag_387, "fminmag", "fminmag (unsigned int, short int)", DBL_MANT_DIG, 0 },
    { test_fminmag_388, "fminmag", "fminmag (unsigned int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fminmag_389, "fminmag", "fminmag (unsigned int, int)", DBL_MANT_DIG, 0 },
    { test_fminmag_390, "fminmag", "fminmag (unsigned int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fminmag_391, "fminmag", "fminmag (unsigned int, long int)", DBL_MANT_DIG, 0 },
    { test_fminmag_392, "fminmag", "fminmag (unsigned int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fminmag_393, "fminmag", "fminmag (unsigned int, long long int)", DBL_MANT_DIG, 0 },
    { test_fminmag_394, "fminmag", "fminmag (unsigned int, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fminmag_395, "fminmag", "fminmag (unsigned int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fminmag_396, "fminmag", "fminmag (unsigned int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fminmag_397, "fminmag", "fminmag (unsigned int, enum e)", DBL_MANT_DIG, 0 },
    { test_fminmag_398, "fminmag", "fminmag (unsigned int, _Bool)", DBL_MANT_DIG, 0 },
    { test_fminmag_399, "fminmag", "fminmag (unsigned int, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_fminmag_400, "fminmag", "fminmag (long int, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_fminmag_401, "fminmag", "fminmag (long int, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_fminmag_402, "fminmag", "fminmag (long int, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fminmag_403, "fminmag", "fminmag (long int, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_fminmag_404, "fminmag", "fminmag (long int, double)", DBL_MANT_DIG, 0 },
    { test_fminmag_405, "fminmag", "fminmag (long int, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_fminmag_406, "fminmag", "fminmag (long int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fminmag_407, "fminmag", "fminmag (long int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fminmag_408, "fminmag", "fminmag (long int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_fminmag_409, "fminmag", "fminmag (long int, char)", DBL_MANT_DIG, 0 },
    { test_fminmag_410, "fminmag", "fminmag (long int, signed char)", DBL_MANT_DIG, 0 },
    { test_fminmag_411, "fminmag", "fminmag (long int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fminmag_412, "fminmag", "fminmag (long int, short int)", DBL_MANT_DIG, 0 },
    { test_fminmag_413, "fminmag", "fminmag (long int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fminmag_414, "fminmag", "fminmag (long int, int)", DBL_MANT_DIG, 0 },
    { test_fminmag_415, "fminmag", "fminmag (long int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fminmag_416, "fminmag", "fminmag (long int, long int)", DBL_MANT_DIG, 0 },
    { test_fminmag_417, "fminmag", "fminmag (long int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fminmag_418, "fminmag", "fminmag (long int, long long int)", DBL_MANT_DIG, 0 },
    { test_fminmag_419, "fminmag", "fminmag (long int, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fminmag_420, "fminmag", "fminmag (long int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fminmag_421, "fminmag", "fminmag (long int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fminmag_422, "fminmag", "fminmag (long int, enum e)", DBL_MANT_DIG, 0 },
    { test_fminmag_423, "fminmag", "fminmag (long int, _Bool)", DBL_MANT_DIG, 0 },
    { test_fminmag_424, "fminmag", "fminmag (long int, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_fminmag_425, "fminmag", "fminmag (unsigned long int, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_fminmag_426, "fminmag", "fminmag (unsigned long int, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_fminmag_427, "fminmag", "fminmag (unsigned long int, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fminmag_428, "fminmag", "fminmag (unsigned long int, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_fminmag_429, "fminmag", "fminmag (unsigned long int, double)", DBL_MANT_DIG, 0 },
    { test_fminmag_430, "fminmag", "fminmag (unsigned long int, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_fminmag_431, "fminmag", "fminmag (unsigned long int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fminmag_432, "fminmag", "fminmag (unsigned long int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fminmag_433, "fminmag", "fminmag (unsigned long int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_fminmag_434, "fminmag", "fminmag (unsigned long int, char)", DBL_MANT_DIG, 0 },
    { test_fminmag_435, "fminmag", "fminmag (unsigned long int, signed char)", DBL_MANT_DIG, 0 },
    { test_fminmag_436, "fminmag", "fminmag (unsigned long int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fminmag_437, "fminmag", "fminmag (unsigned long int, short int)", DBL_MANT_DIG, 0 },
    { test_fminmag_438, "fminmag", "fminmag (unsigned long int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fminmag_439, "fminmag", "fminmag (unsigned long int, int)", DBL_MANT_DIG, 0 },
    { test_fminmag_440, "fminmag", "fminmag (unsigned long int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fminmag_441, "fminmag", "fminmag (unsigned long int, long int)", DBL_MANT_DIG, 0 },
    { test_fminmag_442, "fminmag", "fminmag (unsigned long int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fminmag_443, "fminmag", "fminmag (unsigned long int, long long int)", DBL_MANT_DIG, 0 },
    { test_fminmag_444, "fminmag", "fminmag (unsigned long int, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fminmag_445, "fminmag", "fminmag (unsigned long int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fminmag_446, "fminmag", "fminmag (unsigned long int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fminmag_447, "fminmag", "fminmag (unsigned long int, enum e)", DBL_MANT_DIG, 0 },
    { test_fminmag_448, "fminmag", "fminmag (unsigned long int, _Bool)", DBL_MANT_DIG, 0 },
    { test_fminmag_449, "fminmag", "fminmag (unsigned long int, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_fminmag_450, "fminmag", "fminmag (long long int, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_fminmag_451, "fminmag", "fminmag (long long int, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_fminmag_452, "fminmag", "fminmag (long long int, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fminmag_453, "fminmag", "fminmag (long long int, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_fminmag_454, "fminmag", "fminmag (long long int, double)", DBL_MANT_DIG, 0 },
    { test_fminmag_455, "fminmag", "fminmag (long long int, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_fminmag_456, "fminmag", "fminmag (long long int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fminmag_457, "fminmag", "fminmag (long long int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fminmag_458, "fminmag", "fminmag (long long int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_fminmag_459, "fminmag", "fminmag (long long int, char)", DBL_MANT_DIG, 0 },
    { test_fminmag_460, "fminmag", "fminmag (long long int, signed char)", DBL_MANT_DIG, 0 },
    { test_fminmag_461, "fminmag", "fminmag (long long int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fminmag_462, "fminmag", "fminmag (long long int, short int)", DBL_MANT_DIG, 0 },
    { test_fminmag_463, "fminmag", "fminmag (long long int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fminmag_464, "fminmag", "fminmag (long long int, int)", DBL_MANT_DIG, 0 },
    { test_fminmag_465, "fminmag", "fminmag (long long int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fminmag_466, "fminmag", "fminmag (long long int, long int)", DBL_MANT_DIG, 0 },
    { test_fminmag_467, "fminmag", "fminmag (long long int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fminmag_468, "fminmag", "fminmag (long long int, long long int)", DBL_MANT_DIG, 0 },
    { test_fminmag_469, "fminmag", "fminmag (long long int, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fminmag_470, "fminmag", "fminmag (long long int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fminmag_471, "fminmag", "fminmag (long long int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fminmag_472, "fminmag", "fminmag (long long int, enum e)", DBL_MANT_DIG, 0 },
    { test_fminmag_473, "fminmag", "fminmag (long long int, _Bool)", DBL_MANT_DIG, 0 },
    { test_fminmag_474, "fminmag", "fminmag (long long int, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_fminmag_475, "fminmag", "fminmag (unsigned long long int, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_fminmag_476, "fminmag", "fminmag (unsigned long long int, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_fminmag_477, "fminmag", "fminmag (unsigned long long int, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fminmag_478, "fminmag", "fminmag (unsigned long long int, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_fminmag_479, "fminmag", "fminmag (unsigned long long int, double)", DBL_MANT_DIG, 0 },
    { test_fminmag_480, "fminmag", "fminmag (unsigned long long int, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_fminmag_481, "fminmag", "fminmag (unsigned long long int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fminmag_482, "fminmag", "fminmag (unsigned long long int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fminmag_483, "fminmag", "fminmag (unsigned long long int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_fminmag_484, "fminmag", "fminmag (unsigned long long int, char)", DBL_MANT_DIG, 0 },
    { test_fminmag_485, "fminmag", "fminmag (unsigned long long int, signed char)", DBL_MANT_DIG, 0 },
    { test_fminmag_486, "fminmag", "fminmag (unsigned long long int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fminmag_487, "fminmag", "fminmag (unsigned long long int, short int)", DBL_MANT_DIG, 0 },
    { test_fminmag_488, "fminmag", "fminmag (unsigned long long int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fminmag_489, "fminmag", "fminmag (unsigned long long int, int)", DBL_MANT_DIG, 0 },
    { test_fminmag_490, "fminmag", "fminmag (unsigned long long int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fminmag_491, "fminmag", "fminmag (unsigned long long int, long int)", DBL_MANT_DIG, 0 },
    { test_fminmag_492, "fminmag", "fminmag (unsigned long long int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fminmag_493, "fminmag", "fminmag (unsigned long long int, long long int)", DBL_MANT_DIG, 0 },
    { test_fminmag_494, "fminmag", "fminmag (unsigned long long int, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fminmag_495, "fminmag", "fminmag (unsigned long long int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fminmag_496, "fminmag", "fminmag (unsigned long long int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fminmag_497, "fminmag", "fminmag (unsigned long long int, enum e)", DBL_MANT_DIG, 0 },
    { test_fminmag_498, "fminmag", "fminmag (unsigned long long int, _Bool)", DBL_MANT_DIG, 0 },
    { test_fminmag_499, "fminmag", "fminmag (unsigned long long int, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_fminmag_500, "fminmag", "fminmag (__int128, _Float16)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fminmag_501, "fminmag", "fminmag (__int128, float)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_fminmag_502, "fminmag", "fminmag (__int128, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_fminmag_503, "fminmag", "fminmag (__int128, _Float32x)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fminmag_504, "fminmag", "fminmag (__int128, double)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fminmag_505, "fminmag", "fminmag (__int128, long double)", LDBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_fminmag_506, "fminmag", "fminmag (__int128, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_fminmag_507, "fminmag", "fminmag (__int128, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_fminmag_508, "fminmag", "fminmag (__int128, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fminmag_509, "fminmag", "fminmag (__int128, char)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fminmag_510, "fminmag", "fminmag (__int128, signed char)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fminmag_511, "fminmag", "fminmag (__int128, unsigned char)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fminmag_512, "fminmag", "fminmag (__int128, short int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fminmag_513, "fminmag", "fminmag (__int128, unsigned short int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fminmag_514, "fminmag", "fminmag (__int128, int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fminmag_515, "fminmag", "fminmag (__int128, unsigned int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fminmag_516, "fminmag", "fminmag (__int128, long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fminmag_517, "fminmag", "fminmag (__int128, unsigned long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fminmag_518, "fminmag", "fminmag (__int128, long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fminmag_519, "fminmag", "fminmag (__int128, unsigned long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fminmag_520, "fminmag", "fminmag (__int128, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fminmag_521, "fminmag", "fminmag (__int128, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fminmag_522, "fminmag", "fminmag (__int128, enum e)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fminmag_523, "fminmag", "fminmag (__int128, _Bool)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fminmag_524, "fminmag", "fminmag (__int128, bit_field)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_fminmag_525, "fminmag", "fminmag (unsigned __int128, _Float16)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fminmag_526, "fminmag", "fminmag (unsigned __int128, float)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_fminmag_527, "fminmag", "fminmag (unsigned __int128, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_fminmag_528, "fminmag", "fminmag (unsigned __int128, _Float32x)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fminmag_529, "fminmag", "fminmag (unsigned __int128, double)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fminmag_530, "fminmag", "fminmag (unsigned __int128, long double)", LDBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_fminmag_531, "fminmag", "fminmag (unsigned __int128, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_fminmag_532, "fminmag", "fminmag (unsigned __int128, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_fminmag_533, "fminmag", "fminmag (unsigned __int128, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fminmag_534, "fminmag", "fminmag (unsigned __int128, char)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fminmag_535, "fminmag", "fminmag (unsigned __int128, signed char)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fminmag_536, "fminmag", "fminmag (unsigned __int128, unsigned char)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fminmag_537, "fminmag", "fminmag (unsigned __int128, short int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fminmag_538, "fminmag", "fminmag (unsigned __int128, unsigned short int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fminmag_539, "fminmag", "fminmag (unsigned __int128, int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fminmag_540, "fminmag", "fminmag (unsigned __int128, unsigned int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fminmag_541, "fminmag", "fminmag (unsigned __int128, long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fminmag_542, "fminmag", "fminmag (unsigned __int128, unsigned long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fminmag_543, "fminmag", "fminmag (unsigned __int128, long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fminmag_544, "fminmag", "fminmag (unsigned __int128, unsigned long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fminmag_545, "fminmag", "fminmag (unsigned __int128, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fminmag_546, "fminmag", "fminmag (unsigned __int128, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fminmag_547, "fminmag", "fminmag (unsigned __int128, enum e)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fminmag_548, "fminmag", "fminmag (unsigned __int128, _Bool)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fminmag_549, "fminmag", "fminmag (unsigned __int128, bit_field)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_fminmag_550, "fminmag", "fminmag (enum e, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_fminmag_551, "fminmag", "fminmag (enum e, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_fminmag_552, "fminmag", "fminmag (enum e, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fminmag_553, "fminmag", "fminmag (enum e, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_fminmag_554, "fminmag", "fminmag (enum e, double)", DBL_MANT_DIG, 0 },
    { test_fminmag_555, "fminmag", "fminmag (enum e, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_fminmag_556, "fminmag", "fminmag (enum e, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fminmag_557, "fminmag", "fminmag (enum e, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fminmag_558, "fminmag", "fminmag (enum e, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_fminmag_559, "fminmag", "fminmag (enum e, char)", DBL_MANT_DIG, 0 },
    { test_fminmag_560, "fminmag", "fminmag (enum e, signed char)", DBL_MANT_DIG, 0 },
    { test_fminmag_561, "fminmag", "fminmag (enum e, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fminmag_562, "fminmag", "fminmag (enum e, short int)", DBL_MANT_DIG, 0 },
    { test_fminmag_563, "fminmag", "fminmag (enum e, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fminmag_564, "fminmag", "fminmag (enum e, int)", DBL_MANT_DIG, 0 },
    { test_fminmag_565, "fminmag", "fminmag (enum e, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fminmag_566, "fminmag", "fminmag (enum e, long int)", DBL_MANT_DIG, 0 },
    { test_fminmag_567, "fminmag", "fminmag (enum e, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fminmag_568, "fminmag", "fminmag (enum e, long long int)", DBL_MANT_DIG, 0 },
    { test_fminmag_569, "fminmag", "fminmag (enum e, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fminmag_570, "fminmag", "fminmag (enum e, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fminmag_571, "fminmag", "fminmag (enum e, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fminmag_572, "fminmag", "fminmag (enum e, enum e)", DBL_MANT_DIG, 0 },
    { test_fminmag_573, "fminmag", "fminmag (enum e, _Bool)", DBL_MANT_DIG, 0 },
    { test_fminmag_574, "fminmag", "fminmag (enum e, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_fminmag_575, "fminmag", "fminmag (_Bool, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_fminmag_576, "fminmag", "fminmag (_Bool, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_fminmag_577, "fminmag", "fminmag (_Bool, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fminmag_578, "fminmag", "fminmag (_Bool, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_fminmag_579, "fminmag", "fminmag (_Bool, double)", DBL_MANT_DIG, 0 },
    { test_fminmag_580, "fminmag", "fminmag (_Bool, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_fminmag_581, "fminmag", "fminmag (_Bool, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fminmag_582, "fminmag", "fminmag (_Bool, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fminmag_583, "fminmag", "fminmag (_Bool, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_fminmag_584, "fminmag", "fminmag (_Bool, char)", DBL_MANT_DIG, 0 },
    { test_fminmag_585, "fminmag", "fminmag (_Bool, signed char)", DBL_MANT_DIG, 0 },
    { test_fminmag_586, "fminmag", "fminmag (_Bool, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fminmag_587, "fminmag", "fminmag (_Bool, short int)", DBL_MANT_DIG, 0 },
    { test_fminmag_588, "fminmag", "fminmag (_Bool, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fminmag_589, "fminmag", "fminmag (_Bool, int)", DBL_MANT_DIG, 0 },
    { test_fminmag_590, "fminmag", "fminmag (_Bool, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fminmag_591, "fminmag", "fminmag (_Bool, long int)", DBL_MANT_DIG, 0 },
    { test_fminmag_592, "fminmag", "fminmag (_Bool, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fminmag_593, "fminmag", "fminmag (_Bool, long long int)", DBL_MANT_DIG, 0 },
    { test_fminmag_594, "fminmag", "fminmag (_Bool, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fminmag_595, "fminmag", "fminmag (_Bool, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fminmag_596, "fminmag", "fminmag (_Bool, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fminmag_597, "fminmag", "fminmag (_Bool, enum e)", DBL_MANT_DIG, 0 },
    { test_fminmag_598, "fminmag", "fminmag (_Bool, _Bool)", DBL_MANT_DIG, 0 },
    { test_fminmag_599, "fminmag", "fminmag (_Bool, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_fminmag_600, "fminmag", "fminmag (bit_field, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_fminmag_601, "fminmag", "fminmag (bit_field, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_fminmag_602, "fminmag", "fminmag (bit_field, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fminmag_603, "fminmag", "fminmag (bit_field, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_fminmag_604, "fminmag", "fminmag (bit_field, double)", DBL_MANT_DIG, 0 },
    { test_fminmag_605, "fminmag", "fminmag (bit_field, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_fminmag_606, "fminmag", "fminmag (bit_field, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fminmag_607, "fminmag", "fminmag (bit_field, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fminmag_608, "fminmag", "fminmag (bit_field, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_fminmag_609, "fminmag", "fminmag (bit_field, char)", DBL_MANT_DIG, 0 },
    { test_fminmag_610, "fminmag", "fminmag (bit_field, signed char)", DBL_MANT_DIG, 0 },
    { test_fminmag_611, "fminmag", "fminmag (bit_field, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fminmag_612, "fminmag", "fminmag (bit_field, short int)", DBL_MANT_DIG, 0 },
    { test_fminmag_613, "fminmag", "fminmag (bit_field, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fminmag_614, "fminmag", "fminmag (bit_field, int)", DBL_MANT_DIG, 0 },
    { test_fminmag_615, "fminmag", "fminmag (bit_field, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fminmag_616, "fminmag", "fminmag (bit_field, long int)", DBL_MANT_DIG, 0 },
    { test_fminmag_617, "fminmag", "fminmag (bit_field, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fminmag_618, "fminmag", "fminmag (bit_field, long long int)", DBL_MANT_DIG, 0 },
    { test_fminmag_619, "fminmag", "fminmag (bit_field, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fminmag_620, "fminmag", "fminmag (bit_field, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fminmag_621, "fminmag", "fminmag (bit_field, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fminmag_622, "fminmag", "fminmag (bit_field, enum e)", DBL_MANT_DIG, 0 },
    { test_fminmag_623, "fminmag", "fminmag (bit_field, _Bool)", DBL_MANT_DIG, 0 },
    { test_fminmag_624, "fminmag", "fminmag (bit_field, bit_field)", DBL_MANT_DIG, 0 },
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
