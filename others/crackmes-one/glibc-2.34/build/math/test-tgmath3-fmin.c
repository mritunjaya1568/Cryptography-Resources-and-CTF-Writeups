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
(fminf16) (_Float16 arg0 __attribute__ ((unused)), _Float16 arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT16_MANT_DIG;
  called_func_name = "fmin";
  return 0;
}
#endif
float
(fminf) (float arg0 __attribute__ ((unused)), float arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT_MANT_DIG;
  called_func_name = "fmin";
  return 0;
}
#if defined HUGE_VAL_F32
_Float32
(fminf32) (_Float32 arg0 __attribute__ ((unused)), _Float32 arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT32_MANT_DIG;
  called_func_name = "fmin";
  return 0;
}
#endif
#if defined HUGE_VAL_F32X
_Float32x
(fminf32x) (_Float32x arg0 __attribute__ ((unused)), _Float32x arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT32X_MANT_DIG;
  called_func_name = "fmin";
  return 0;
}
#endif
double
(fmin) (double arg0 __attribute__ ((unused)), double arg1 __attribute__ ((unused)))
{
  called_mant_dig = DBL_MANT_DIG;
  called_func_name = "fmin";
  return 0;
}
long double
(fminl) (long double arg0 __attribute__ ((unused)), long double arg1 __attribute__ ((unused)))
{
  called_mant_dig = LDBL_MANT_DIG;
  called_func_name = "fmin";
  return 0;
}
#if defined HUGE_VAL_F64
_Float64
(fminf64) (_Float64 arg0 __attribute__ ((unused)), _Float64 arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT64_MANT_DIG;
  called_func_name = "fmin";
  return 0;
}
#endif
#if defined HUGE_VAL_F64X
_Float64x
(fminf64x) (_Float64x arg0 __attribute__ ((unused)), _Float64x arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT64X_MANT_DIG;
  called_func_name = "fmin";
  return 0;
}
#endif
#if defined HUGE_VAL_F128
_Float128
(fminf128) (_Float128 arg0 __attribute__ ((unused)), _Float128 arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT128_MANT_DIG;
  called_func_name = "fmin";
  return 0;
}
#endif
#if defined HUGE_VAL_F16
static void
test_fmin_0 (void)
{
  extern typeof (fmin (vol_var__Float16, vol_var__Float16)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = fmin (vol_var__Float16, vol_var__Float16);
}
#endif
#if defined HUGE_VAL_F16
static void
test_fmin_1 (void)
{
  extern typeof (fmin (vol_var__Float16, vol_var_float)) var_float __attribute__ ((unused));
  vol_var_float = fmin (vol_var__Float16, vol_var_float);
}
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F32
static void
test_fmin_2 (void)
{
  extern typeof (fmin (vol_var__Float16, vol_var__Float32)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = fmin (vol_var__Float16, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
static void
test_fmin_3 (void)
{
  extern typeof (fmin (vol_var__Float16, vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = fmin (vol_var__Float16, vol_var__Float32x);
}
#endif
#if defined HUGE_VAL_F16
static void
test_fmin_4 (void)
{
  extern typeof (fmin (vol_var__Float16, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var__Float16, vol_var_double);
}
#endif
#if defined HUGE_VAL_F16
static void
test_fmin_5 (void)
{
  extern typeof (fmin (vol_var__Float16, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmin (vol_var__Float16, vol_var_long_double);
}
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F64
static void
test_fmin_6 (void)
{
  extern typeof (fmin (vol_var__Float16, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmin (vol_var__Float16, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
static void
test_fmin_7 (void)
{
  extern typeof (fmin (vol_var__Float16, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmin (vol_var__Float16, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F16
static void
test_fmin_8 (void)
{
  extern typeof (fmin (vol_var__Float16, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmin (vol_var__Float16, vol_var__Float128);
}
#endif
#if defined HUGE_VAL_F16
static void
test_fmin_9 (void)
{
  extern typeof (fmin (vol_var__Float16, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var__Float16, vol_var_char);
}
#endif
#if defined HUGE_VAL_F16
static void
test_fmin_10 (void)
{
  extern typeof (fmin (vol_var__Float16, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var__Float16, vol_var_signed_char);
}
#endif
#if defined HUGE_VAL_F16
static void
test_fmin_11 (void)
{
  extern typeof (fmin (vol_var__Float16, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var__Float16, vol_var_unsigned_char);
}
#endif
#if defined HUGE_VAL_F16
static void
test_fmin_12 (void)
{
  extern typeof (fmin (vol_var__Float16, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var__Float16, vol_var_short_int);
}
#endif
#if defined HUGE_VAL_F16
static void
test_fmin_13 (void)
{
  extern typeof (fmin (vol_var__Float16, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var__Float16, vol_var_unsigned_short_int);
}
#endif
#if defined HUGE_VAL_F16
static void
test_fmin_14 (void)
{
  extern typeof (fmin (vol_var__Float16, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var__Float16, vol_var_int);
}
#endif
#if defined HUGE_VAL_F16
static void
test_fmin_15 (void)
{
  extern typeof (fmin (vol_var__Float16, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var__Float16, vol_var_unsigned_int);
}
#endif
#if defined HUGE_VAL_F16
static void
test_fmin_16 (void)
{
  extern typeof (fmin (vol_var__Float16, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var__Float16, vol_var_long_int);
}
#endif
#if defined HUGE_VAL_F16
static void
test_fmin_17 (void)
{
  extern typeof (fmin (vol_var__Float16, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var__Float16, vol_var_unsigned_long_int);
}
#endif
#if defined HUGE_VAL_F16
static void
test_fmin_18 (void)
{
  extern typeof (fmin (vol_var__Float16, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var__Float16, vol_var_long_long_int);
}
#endif
#if defined HUGE_VAL_F16
static void
test_fmin_19 (void)
{
  extern typeof (fmin (vol_var__Float16, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var__Float16, vol_var_unsigned_long_long_int);
}
#endif
#if defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_fmin_20 (void)
{
  extern typeof (fmin (vol_var__Float16, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var__Float16, vol_var___int128);
}
#endif
#if defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_fmin_21 (void)
{
  extern typeof (fmin (vol_var__Float16, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var__Float16, vol_var_unsigned___int128);
}
#endif
#if defined HUGE_VAL_F16
static void
test_fmin_22 (void)
{
  extern typeof (fmin (vol_var__Float16, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var__Float16, vol_var_enum_e);
}
#endif
#if defined HUGE_VAL_F16
static void
test_fmin_23 (void)
{
  extern typeof (fmin (vol_var__Float16, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var__Float16, vol_var__Bool);
}
#endif
#if defined HUGE_VAL_F16
static void
test_fmin_24 (void)
{
  extern typeof (fmin (vol_var__Float16, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var__Float16, vol_var_bit_field);
}
#endif
#if defined HUGE_VAL_F16
static void
test_fmin_25 (void)
{
  extern typeof (fmin (vol_var_float, vol_var__Float16)) var_float __attribute__ ((unused));
  vol_var_float = fmin (vol_var_float, vol_var__Float16);
}
#endif
static void
test_fmin_26 (void)
{
  extern typeof (fmin (vol_var_float, vol_var_float)) var_float __attribute__ ((unused));
  vol_var_float = fmin (vol_var_float, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_fmin_27 (void)
{
  extern typeof (fmin (vol_var_float, vol_var__Float32)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = fmin (vol_var_float, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmin_28 (void)
{
  extern typeof (fmin (vol_var_float, vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = fmin (vol_var_float, vol_var__Float32x);
}
#endif
static void
test_fmin_29 (void)
{
  extern typeof (fmin (vol_var_float, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_float, vol_var_double);
}
static void
test_fmin_30 (void)
{
  extern typeof (fmin (vol_var_float, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmin (vol_var_float, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_fmin_31 (void)
{
  extern typeof (fmin (vol_var_float, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmin (vol_var_float, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fmin_32 (void)
{
  extern typeof (fmin (vol_var_float, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmin (vol_var_float, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fmin_33 (void)
{
  extern typeof (fmin (vol_var_float, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmin (vol_var_float, vol_var__Float128);
}
#endif
static void
test_fmin_34 (void)
{
  extern typeof (fmin (vol_var_float, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_float, vol_var_char);
}
static void
test_fmin_35 (void)
{
  extern typeof (fmin (vol_var_float, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_float, vol_var_signed_char);
}
static void
test_fmin_36 (void)
{
  extern typeof (fmin (vol_var_float, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_float, vol_var_unsigned_char);
}
static void
test_fmin_37 (void)
{
  extern typeof (fmin (vol_var_float, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_float, vol_var_short_int);
}
static void
test_fmin_38 (void)
{
  extern typeof (fmin (vol_var_float, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_float, vol_var_unsigned_short_int);
}
static void
test_fmin_39 (void)
{
  extern typeof (fmin (vol_var_float, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_float, vol_var_int);
}
static void
test_fmin_40 (void)
{
  extern typeof (fmin (vol_var_float, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_float, vol_var_unsigned_int);
}
static void
test_fmin_41 (void)
{
  extern typeof (fmin (vol_var_float, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_float, vol_var_long_int);
}
static void
test_fmin_42 (void)
{
  extern typeof (fmin (vol_var_float, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_float, vol_var_unsigned_long_int);
}
static void
test_fmin_43 (void)
{
  extern typeof (fmin (vol_var_float, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_float, vol_var_long_long_int);
}
static void
test_fmin_44 (void)
{
  extern typeof (fmin (vol_var_float, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_float, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fmin_45 (void)
{
  extern typeof (fmin (vol_var_float, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_float, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmin_46 (void)
{
  extern typeof (fmin (vol_var_float, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_float, vol_var_unsigned___int128);
}
#endif
static void
test_fmin_47 (void)
{
  extern typeof (fmin (vol_var_float, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_float, vol_var_enum_e);
}
static void
test_fmin_48 (void)
{
  extern typeof (fmin (vol_var_float, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_float, vol_var__Bool);
}
static void
test_fmin_49 (void)
{
  extern typeof (fmin (vol_var_float, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_float, vol_var_bit_field);
}
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F32
static void
test_fmin_50 (void)
{
  extern typeof (fmin (vol_var__Float32, vol_var__Float16)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = fmin (vol_var__Float32, vol_var__Float16);
}
#endif
#if defined HUGE_VAL_F32
static void
test_fmin_51 (void)
{
  extern typeof (fmin (vol_var__Float32, vol_var_float)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = fmin (vol_var__Float32, vol_var_float);
}
#endif
#if defined HUGE_VAL_F32
static void
test_fmin_52 (void)
{
  extern typeof (fmin (vol_var__Float32, vol_var__Float32)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = fmin (vol_var__Float32, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
static void
test_fmin_53 (void)
{
  extern typeof (fmin (vol_var__Float32, vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = fmin (vol_var__Float32, vol_var__Float32x);
}
#endif
#if defined HUGE_VAL_F32
static void
test_fmin_54 (void)
{
  extern typeof (fmin (vol_var__Float32, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var__Float32, vol_var_double);
}
#endif
#if defined HUGE_VAL_F32
static void
test_fmin_55 (void)
{
  extern typeof (fmin (vol_var__Float32, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmin (vol_var__Float32, vol_var_long_double);
}
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F64
static void
test_fmin_56 (void)
{
  extern typeof (fmin (vol_var__Float32, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmin (vol_var__Float32, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
static void
test_fmin_57 (void)
{
  extern typeof (fmin (vol_var__Float32, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmin (vol_var__Float32, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F32
static void
test_fmin_58 (void)
{
  extern typeof (fmin (vol_var__Float32, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmin (vol_var__Float32, vol_var__Float128);
}
#endif
#if defined HUGE_VAL_F32
static void
test_fmin_59 (void)
{
  extern typeof (fmin (vol_var__Float32, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var__Float32, vol_var_char);
}
#endif
#if defined HUGE_VAL_F32
static void
test_fmin_60 (void)
{
  extern typeof (fmin (vol_var__Float32, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var__Float32, vol_var_signed_char);
}
#endif
#if defined HUGE_VAL_F32
static void
test_fmin_61 (void)
{
  extern typeof (fmin (vol_var__Float32, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var__Float32, vol_var_unsigned_char);
}
#endif
#if defined HUGE_VAL_F32
static void
test_fmin_62 (void)
{
  extern typeof (fmin (vol_var__Float32, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var__Float32, vol_var_short_int);
}
#endif
#if defined HUGE_VAL_F32
static void
test_fmin_63 (void)
{
  extern typeof (fmin (vol_var__Float32, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var__Float32, vol_var_unsigned_short_int);
}
#endif
#if defined HUGE_VAL_F32
static void
test_fmin_64 (void)
{
  extern typeof (fmin (vol_var__Float32, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var__Float32, vol_var_int);
}
#endif
#if defined HUGE_VAL_F32
static void
test_fmin_65 (void)
{
  extern typeof (fmin (vol_var__Float32, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var__Float32, vol_var_unsigned_int);
}
#endif
#if defined HUGE_VAL_F32
static void
test_fmin_66 (void)
{
  extern typeof (fmin (vol_var__Float32, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var__Float32, vol_var_long_int);
}
#endif
#if defined HUGE_VAL_F32
static void
test_fmin_67 (void)
{
  extern typeof (fmin (vol_var__Float32, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var__Float32, vol_var_unsigned_long_int);
}
#endif
#if defined HUGE_VAL_F32
static void
test_fmin_68 (void)
{
  extern typeof (fmin (vol_var__Float32, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var__Float32, vol_var_long_long_int);
}
#endif
#if defined HUGE_VAL_F32
static void
test_fmin_69 (void)
{
  extern typeof (fmin (vol_var__Float32, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var__Float32, vol_var_unsigned_long_long_int);
}
#endif
#if defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_fmin_70 (void)
{
  extern typeof (fmin (vol_var__Float32, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var__Float32, vol_var___int128);
}
#endif
#if defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_fmin_71 (void)
{
  extern typeof (fmin (vol_var__Float32, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var__Float32, vol_var_unsigned___int128);
}
#endif
#if defined HUGE_VAL_F32
static void
test_fmin_72 (void)
{
  extern typeof (fmin (vol_var__Float32, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var__Float32, vol_var_enum_e);
}
#endif
#if defined HUGE_VAL_F32
static void
test_fmin_73 (void)
{
  extern typeof (fmin (vol_var__Float32, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var__Float32, vol_var__Bool);
}
#endif
#if defined HUGE_VAL_F32
static void
test_fmin_74 (void)
{
  extern typeof (fmin (vol_var__Float32, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var__Float32, vol_var_bit_field);
}
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
static void
test_fmin_75 (void)
{
  extern typeof (fmin (vol_var__Float32x, vol_var__Float16)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = fmin (vol_var__Float32x, vol_var__Float16);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmin_76 (void)
{
  extern typeof (fmin (vol_var__Float32x, vol_var_float)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = fmin (vol_var__Float32x, vol_var_float);
}
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
static void
test_fmin_77 (void)
{
  extern typeof (fmin (vol_var__Float32x, vol_var__Float32)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = fmin (vol_var__Float32x, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmin_78 (void)
{
  extern typeof (fmin (vol_var__Float32x, vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = fmin (vol_var__Float32x, vol_var__Float32x);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmin_79 (void)
{
  extern typeof (fmin (vol_var__Float32x, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var__Float32x, vol_var_double);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmin_80 (void)
{
  extern typeof (fmin (vol_var__Float32x, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmin (vol_var__Float32x, vol_var_long_double);
}
#endif
#if defined HUGE_VAL_F32X && defined HUGE_VAL_F64
static void
test_fmin_81 (void)
{
  extern typeof (fmin (vol_var__Float32x, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmin (vol_var__Float32x, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
static void
test_fmin_82 (void)
{
  extern typeof (fmin (vol_var__Float32x, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmin (vol_var__Float32x, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
static void
test_fmin_83 (void)
{
  extern typeof (fmin (vol_var__Float32x, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmin (vol_var__Float32x, vol_var__Float128);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmin_84 (void)
{
  extern typeof (fmin (vol_var__Float32x, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var__Float32x, vol_var_char);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmin_85 (void)
{
  extern typeof (fmin (vol_var__Float32x, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var__Float32x, vol_var_signed_char);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmin_86 (void)
{
  extern typeof (fmin (vol_var__Float32x, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var__Float32x, vol_var_unsigned_char);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmin_87 (void)
{
  extern typeof (fmin (vol_var__Float32x, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var__Float32x, vol_var_short_int);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmin_88 (void)
{
  extern typeof (fmin (vol_var__Float32x, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var__Float32x, vol_var_unsigned_short_int);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmin_89 (void)
{
  extern typeof (fmin (vol_var__Float32x, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var__Float32x, vol_var_int);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmin_90 (void)
{
  extern typeof (fmin (vol_var__Float32x, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var__Float32x, vol_var_unsigned_int);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmin_91 (void)
{
  extern typeof (fmin (vol_var__Float32x, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var__Float32x, vol_var_long_int);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmin_92 (void)
{
  extern typeof (fmin (vol_var__Float32x, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var__Float32x, vol_var_unsigned_long_int);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmin_93 (void)
{
  extern typeof (fmin (vol_var__Float32x, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var__Float32x, vol_var_long_long_int);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmin_94 (void)
{
  extern typeof (fmin (vol_var__Float32x, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var__Float32x, vol_var_unsigned_long_long_int);
}
#endif
#if defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_fmin_95 (void)
{
  extern typeof (fmin (vol_var__Float32x, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var__Float32x, vol_var___int128);
}
#endif
#if defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_fmin_96 (void)
{
  extern typeof (fmin (vol_var__Float32x, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var__Float32x, vol_var_unsigned___int128);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmin_97 (void)
{
  extern typeof (fmin (vol_var__Float32x, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var__Float32x, vol_var_enum_e);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmin_98 (void)
{
  extern typeof (fmin (vol_var__Float32x, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var__Float32x, vol_var__Bool);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmin_99 (void)
{
  extern typeof (fmin (vol_var__Float32x, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var__Float32x, vol_var_bit_field);
}
#endif
#if defined HUGE_VAL_F16
static void
test_fmin_100 (void)
{
  extern typeof (fmin (vol_var_double, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_double, vol_var__Float16);
}
#endif
static void
test_fmin_101 (void)
{
  extern typeof (fmin (vol_var_double, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_double, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_fmin_102 (void)
{
  extern typeof (fmin (vol_var_double, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_double, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmin_103 (void)
{
  extern typeof (fmin (vol_var_double, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_double, vol_var__Float32x);
}
#endif
static void
test_fmin_104 (void)
{
  extern typeof (fmin (vol_var_double, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_double, vol_var_double);
}
static void
test_fmin_105 (void)
{
  extern typeof (fmin (vol_var_double, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmin (vol_var_double, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_fmin_106 (void)
{
  extern typeof (fmin (vol_var_double, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmin (vol_var_double, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fmin_107 (void)
{
  extern typeof (fmin (vol_var_double, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmin (vol_var_double, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fmin_108 (void)
{
  extern typeof (fmin (vol_var_double, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmin (vol_var_double, vol_var__Float128);
}
#endif
static void
test_fmin_109 (void)
{
  extern typeof (fmin (vol_var_double, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_double, vol_var_char);
}
static void
test_fmin_110 (void)
{
  extern typeof (fmin (vol_var_double, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_double, vol_var_signed_char);
}
static void
test_fmin_111 (void)
{
  extern typeof (fmin (vol_var_double, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_double, vol_var_unsigned_char);
}
static void
test_fmin_112 (void)
{
  extern typeof (fmin (vol_var_double, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_double, vol_var_short_int);
}
static void
test_fmin_113 (void)
{
  extern typeof (fmin (vol_var_double, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_double, vol_var_unsigned_short_int);
}
static void
test_fmin_114 (void)
{
  extern typeof (fmin (vol_var_double, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_double, vol_var_int);
}
static void
test_fmin_115 (void)
{
  extern typeof (fmin (vol_var_double, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_double, vol_var_unsigned_int);
}
static void
test_fmin_116 (void)
{
  extern typeof (fmin (vol_var_double, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_double, vol_var_long_int);
}
static void
test_fmin_117 (void)
{
  extern typeof (fmin (vol_var_double, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_double, vol_var_unsigned_long_int);
}
static void
test_fmin_118 (void)
{
  extern typeof (fmin (vol_var_double, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_double, vol_var_long_long_int);
}
static void
test_fmin_119 (void)
{
  extern typeof (fmin (vol_var_double, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_double, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fmin_120 (void)
{
  extern typeof (fmin (vol_var_double, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_double, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmin_121 (void)
{
  extern typeof (fmin (vol_var_double, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_double, vol_var_unsigned___int128);
}
#endif
static void
test_fmin_122 (void)
{
  extern typeof (fmin (vol_var_double, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_double, vol_var_enum_e);
}
static void
test_fmin_123 (void)
{
  extern typeof (fmin (vol_var_double, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_double, vol_var__Bool);
}
static void
test_fmin_124 (void)
{
  extern typeof (fmin (vol_var_double, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_double, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_fmin_125 (void)
{
  extern typeof (fmin (vol_var_long_double, vol_var__Float16)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmin (vol_var_long_double, vol_var__Float16);
}
#endif
static void
test_fmin_126 (void)
{
  extern typeof (fmin (vol_var_long_double, vol_var_float)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmin (vol_var_long_double, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_fmin_127 (void)
{
  extern typeof (fmin (vol_var_long_double, vol_var__Float32)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmin (vol_var_long_double, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmin_128 (void)
{
  extern typeof (fmin (vol_var_long_double, vol_var__Float32x)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmin (vol_var_long_double, vol_var__Float32x);
}
#endif
static void
test_fmin_129 (void)
{
  extern typeof (fmin (vol_var_long_double, vol_var_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmin (vol_var_long_double, vol_var_double);
}
static void
test_fmin_130 (void)
{
  extern typeof (fmin (vol_var_long_double, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmin (vol_var_long_double, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_fmin_131 (void)
{
  extern typeof (fmin (vol_var_long_double, vol_var__Float64)) var_long_double_Float64 __attribute__ ((unused));
  vol_var_long_double_Float64 = fmin (vol_var_long_double, vol_var__Float64);
}
#endif
#if (LDBL_MANT_DIG != 106) && defined HUGE_VAL_F64X
static void
test_fmin_132 (void)
{
  extern typeof (fmin (vol_var_long_double, vol_var__Float64x)) var_long_double_Float64x __attribute__ ((unused));
  vol_var_long_double_Float64x = fmin (vol_var_long_double, vol_var__Float64x);
}
#endif
#if (LDBL_MANT_DIG != 106) && defined HUGE_VAL_F128
static void
test_fmin_133 (void)
{
  extern typeof (fmin (vol_var_long_double, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmin (vol_var_long_double, vol_var__Float128);
}
#endif
static void
test_fmin_134 (void)
{
  extern typeof (fmin (vol_var_long_double, vol_var_char)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmin (vol_var_long_double, vol_var_char);
}
static void
test_fmin_135 (void)
{
  extern typeof (fmin (vol_var_long_double, vol_var_signed_char)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmin (vol_var_long_double, vol_var_signed_char);
}
static void
test_fmin_136 (void)
{
  extern typeof (fmin (vol_var_long_double, vol_var_unsigned_char)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmin (vol_var_long_double, vol_var_unsigned_char);
}
static void
test_fmin_137 (void)
{
  extern typeof (fmin (vol_var_long_double, vol_var_short_int)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmin (vol_var_long_double, vol_var_short_int);
}
static void
test_fmin_138 (void)
{
  extern typeof (fmin (vol_var_long_double, vol_var_unsigned_short_int)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmin (vol_var_long_double, vol_var_unsigned_short_int);
}
static void
test_fmin_139 (void)
{
  extern typeof (fmin (vol_var_long_double, vol_var_int)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmin (vol_var_long_double, vol_var_int);
}
static void
test_fmin_140 (void)
{
  extern typeof (fmin (vol_var_long_double, vol_var_unsigned_int)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmin (vol_var_long_double, vol_var_unsigned_int);
}
static void
test_fmin_141 (void)
{
  extern typeof (fmin (vol_var_long_double, vol_var_long_int)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmin (vol_var_long_double, vol_var_long_int);
}
static void
test_fmin_142 (void)
{
  extern typeof (fmin (vol_var_long_double, vol_var_unsigned_long_int)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmin (vol_var_long_double, vol_var_unsigned_long_int);
}
static void
test_fmin_143 (void)
{
  extern typeof (fmin (vol_var_long_double, vol_var_long_long_int)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmin (vol_var_long_double, vol_var_long_long_int);
}
static void
test_fmin_144 (void)
{
  extern typeof (fmin (vol_var_long_double, vol_var_unsigned_long_long_int)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmin (vol_var_long_double, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fmin_145 (void)
{
  extern typeof (fmin (vol_var_long_double, vol_var___int128)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmin (vol_var_long_double, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmin_146 (void)
{
  extern typeof (fmin (vol_var_long_double, vol_var_unsigned___int128)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmin (vol_var_long_double, vol_var_unsigned___int128);
}
#endif
static void
test_fmin_147 (void)
{
  extern typeof (fmin (vol_var_long_double, vol_var_enum_e)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmin (vol_var_long_double, vol_var_enum_e);
}
static void
test_fmin_148 (void)
{
  extern typeof (fmin (vol_var_long_double, vol_var__Bool)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmin (vol_var_long_double, vol_var__Bool);
}
static void
test_fmin_149 (void)
{
  extern typeof (fmin (vol_var_long_double, vol_var_bit_field)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmin (vol_var_long_double, vol_var_bit_field);
}
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F64
static void
test_fmin_150 (void)
{
  extern typeof (fmin (vol_var__Float64, vol_var__Float16)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmin (vol_var__Float64, vol_var__Float16);
}
#endif
#if defined HUGE_VAL_F64
static void
test_fmin_151 (void)
{
  extern typeof (fmin (vol_var__Float64, vol_var_float)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmin (vol_var__Float64, vol_var_float);
}
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F64
static void
test_fmin_152 (void)
{
  extern typeof (fmin (vol_var__Float64, vol_var__Float32)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmin (vol_var__Float64, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X && defined HUGE_VAL_F64
static void
test_fmin_153 (void)
{
  extern typeof (fmin (vol_var__Float64, vol_var__Float32x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmin (vol_var__Float64, vol_var__Float32x);
}
#endif
#if defined HUGE_VAL_F64
static void
test_fmin_154 (void)
{
  extern typeof (fmin (vol_var__Float64, vol_var_double)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmin (vol_var__Float64, vol_var_double);
}
#endif
#if defined HUGE_VAL_F64
static void
test_fmin_155 (void)
{
  extern typeof (fmin (vol_var__Float64, vol_var_long_double)) var_long_double_Float64 __attribute__ ((unused));
  vol_var_long_double_Float64 = fmin (vol_var__Float64, vol_var_long_double);
}
#endif
#if defined HUGE_VAL_F64
static void
test_fmin_156 (void)
{
  extern typeof (fmin (vol_var__Float64, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmin (vol_var__Float64, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
static void
test_fmin_157 (void)
{
  extern typeof (fmin (vol_var__Float64, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmin (vol_var__Float64, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F64
static void
test_fmin_158 (void)
{
  extern typeof (fmin (vol_var__Float64, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmin (vol_var__Float64, vol_var__Float128);
}
#endif
#if defined HUGE_VAL_F64
static void
test_fmin_159 (void)
{
  extern typeof (fmin (vol_var__Float64, vol_var_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmin (vol_var__Float64, vol_var_char);
}
#endif
#if defined HUGE_VAL_F64
static void
test_fmin_160 (void)
{
  extern typeof (fmin (vol_var__Float64, vol_var_signed_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmin (vol_var__Float64, vol_var_signed_char);
}
#endif
#if defined HUGE_VAL_F64
static void
test_fmin_161 (void)
{
  extern typeof (fmin (vol_var__Float64, vol_var_unsigned_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmin (vol_var__Float64, vol_var_unsigned_char);
}
#endif
#if defined HUGE_VAL_F64
static void
test_fmin_162 (void)
{
  extern typeof (fmin (vol_var__Float64, vol_var_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmin (vol_var__Float64, vol_var_short_int);
}
#endif
#if defined HUGE_VAL_F64
static void
test_fmin_163 (void)
{
  extern typeof (fmin (vol_var__Float64, vol_var_unsigned_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmin (vol_var__Float64, vol_var_unsigned_short_int);
}
#endif
#if defined HUGE_VAL_F64
static void
test_fmin_164 (void)
{
  extern typeof (fmin (vol_var__Float64, vol_var_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmin (vol_var__Float64, vol_var_int);
}
#endif
#if defined HUGE_VAL_F64
static void
test_fmin_165 (void)
{
  extern typeof (fmin (vol_var__Float64, vol_var_unsigned_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmin (vol_var__Float64, vol_var_unsigned_int);
}
#endif
#if defined HUGE_VAL_F64
static void
test_fmin_166 (void)
{
  extern typeof (fmin (vol_var__Float64, vol_var_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmin (vol_var__Float64, vol_var_long_int);
}
#endif
#if defined HUGE_VAL_F64
static void
test_fmin_167 (void)
{
  extern typeof (fmin (vol_var__Float64, vol_var_unsigned_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmin (vol_var__Float64, vol_var_unsigned_long_int);
}
#endif
#if defined HUGE_VAL_F64
static void
test_fmin_168 (void)
{
  extern typeof (fmin (vol_var__Float64, vol_var_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmin (vol_var__Float64, vol_var_long_long_int);
}
#endif
#if defined HUGE_VAL_F64
static void
test_fmin_169 (void)
{
  extern typeof (fmin (vol_var__Float64, vol_var_unsigned_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmin (vol_var__Float64, vol_var_unsigned_long_long_int);
}
#endif
#if defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_fmin_170 (void)
{
  extern typeof (fmin (vol_var__Float64, vol_var___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmin (vol_var__Float64, vol_var___int128);
}
#endif
#if defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_fmin_171 (void)
{
  extern typeof (fmin (vol_var__Float64, vol_var_unsigned___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmin (vol_var__Float64, vol_var_unsigned___int128);
}
#endif
#if defined HUGE_VAL_F64
static void
test_fmin_172 (void)
{
  extern typeof (fmin (vol_var__Float64, vol_var_enum_e)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmin (vol_var__Float64, vol_var_enum_e);
}
#endif
#if defined HUGE_VAL_F64
static void
test_fmin_173 (void)
{
  extern typeof (fmin (vol_var__Float64, vol_var__Bool)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmin (vol_var__Float64, vol_var__Bool);
}
#endif
#if defined HUGE_VAL_F64
static void
test_fmin_174 (void)
{
  extern typeof (fmin (vol_var__Float64, vol_var_bit_field)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmin (vol_var__Float64, vol_var_bit_field);
}
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
static void
test_fmin_175 (void)
{
  extern typeof (fmin (vol_var__Float64x, vol_var__Float16)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmin (vol_var__Float64x, vol_var__Float16);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fmin_176 (void)
{
  extern typeof (fmin (vol_var__Float64x, vol_var_float)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmin (vol_var__Float64x, vol_var_float);
}
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
static void
test_fmin_177 (void)
{
  extern typeof (fmin (vol_var__Float64x, vol_var__Float32)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmin (vol_var__Float64x, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
static void
test_fmin_178 (void)
{
  extern typeof (fmin (vol_var__Float64x, vol_var__Float32x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmin (vol_var__Float64x, vol_var__Float32x);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fmin_179 (void)
{
  extern typeof (fmin (vol_var__Float64x, vol_var_double)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmin (vol_var__Float64x, vol_var_double);
}
#endif
#if (LDBL_MANT_DIG != 106) && defined HUGE_VAL_F64X
static void
test_fmin_180 (void)
{
  extern typeof (fmin (vol_var__Float64x, vol_var_long_double)) var_long_double_Float64x __attribute__ ((unused));
  vol_var_long_double_Float64x = fmin (vol_var__Float64x, vol_var_long_double);
}
#endif
#if defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
static void
test_fmin_181 (void)
{
  extern typeof (fmin (vol_var__Float64x, vol_var__Float64)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmin (vol_var__Float64x, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fmin_182 (void)
{
  extern typeof (fmin (vol_var__Float64x, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmin (vol_var__Float64x, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
static void
test_fmin_183 (void)
{
  extern typeof (fmin (vol_var__Float64x, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmin (vol_var__Float64x, vol_var__Float128);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fmin_184 (void)
{
  extern typeof (fmin (vol_var__Float64x, vol_var_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmin (vol_var__Float64x, vol_var_char);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fmin_185 (void)
{
  extern typeof (fmin (vol_var__Float64x, vol_var_signed_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmin (vol_var__Float64x, vol_var_signed_char);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fmin_186 (void)
{
  extern typeof (fmin (vol_var__Float64x, vol_var_unsigned_char)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmin (vol_var__Float64x, vol_var_unsigned_char);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fmin_187 (void)
{
  extern typeof (fmin (vol_var__Float64x, vol_var_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmin (vol_var__Float64x, vol_var_short_int);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fmin_188 (void)
{
  extern typeof (fmin (vol_var__Float64x, vol_var_unsigned_short_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmin (vol_var__Float64x, vol_var_unsigned_short_int);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fmin_189 (void)
{
  extern typeof (fmin (vol_var__Float64x, vol_var_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmin (vol_var__Float64x, vol_var_int);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fmin_190 (void)
{
  extern typeof (fmin (vol_var__Float64x, vol_var_unsigned_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmin (vol_var__Float64x, vol_var_unsigned_int);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fmin_191 (void)
{
  extern typeof (fmin (vol_var__Float64x, vol_var_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmin (vol_var__Float64x, vol_var_long_int);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fmin_192 (void)
{
  extern typeof (fmin (vol_var__Float64x, vol_var_unsigned_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmin (vol_var__Float64x, vol_var_unsigned_long_int);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fmin_193 (void)
{
  extern typeof (fmin (vol_var__Float64x, vol_var_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmin (vol_var__Float64x, vol_var_long_long_int);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fmin_194 (void)
{
  extern typeof (fmin (vol_var__Float64x, vol_var_unsigned_long_long_int)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmin (vol_var__Float64x, vol_var_unsigned_long_long_int);
}
#endif
#if defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_fmin_195 (void)
{
  extern typeof (fmin (vol_var__Float64x, vol_var___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmin (vol_var__Float64x, vol_var___int128);
}
#endif
#if defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_fmin_196 (void)
{
  extern typeof (fmin (vol_var__Float64x, vol_var_unsigned___int128)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmin (vol_var__Float64x, vol_var_unsigned___int128);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fmin_197 (void)
{
  extern typeof (fmin (vol_var__Float64x, vol_var_enum_e)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmin (vol_var__Float64x, vol_var_enum_e);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fmin_198 (void)
{
  extern typeof (fmin (vol_var__Float64x, vol_var__Bool)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmin (vol_var__Float64x, vol_var__Bool);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fmin_199 (void)
{
  extern typeof (fmin (vol_var__Float64x, vol_var_bit_field)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmin (vol_var__Float64x, vol_var_bit_field);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F16
static void
test_fmin_200 (void)
{
  extern typeof (fmin (vol_var__Float128, vol_var__Float16)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmin (vol_var__Float128, vol_var__Float16);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fmin_201 (void)
{
  extern typeof (fmin (vol_var__Float128, vol_var_float)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmin (vol_var__Float128, vol_var_float);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F32
static void
test_fmin_202 (void)
{
  extern typeof (fmin (vol_var__Float128, vol_var__Float32)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmin (vol_var__Float128, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
static void
test_fmin_203 (void)
{
  extern typeof (fmin (vol_var__Float128, vol_var__Float32x)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmin (vol_var__Float128, vol_var__Float32x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fmin_204 (void)
{
  extern typeof (fmin (vol_var__Float128, vol_var_double)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmin (vol_var__Float128, vol_var_double);
}
#endif
#if (LDBL_MANT_DIG != 106) && defined HUGE_VAL_F128
static void
test_fmin_205 (void)
{
  extern typeof (fmin (vol_var__Float128, vol_var_long_double)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmin (vol_var__Float128, vol_var_long_double);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F64
static void
test_fmin_206 (void)
{
  extern typeof (fmin (vol_var__Float128, vol_var__Float64)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmin (vol_var__Float128, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
static void
test_fmin_207 (void)
{
  extern typeof (fmin (vol_var__Float128, vol_var__Float64x)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmin (vol_var__Float128, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fmin_208 (void)
{
  extern typeof (fmin (vol_var__Float128, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmin (vol_var__Float128, vol_var__Float128);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fmin_209 (void)
{
  extern typeof (fmin (vol_var__Float128, vol_var_char)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmin (vol_var__Float128, vol_var_char);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fmin_210 (void)
{
  extern typeof (fmin (vol_var__Float128, vol_var_signed_char)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmin (vol_var__Float128, vol_var_signed_char);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fmin_211 (void)
{
  extern typeof (fmin (vol_var__Float128, vol_var_unsigned_char)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmin (vol_var__Float128, vol_var_unsigned_char);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fmin_212 (void)
{
  extern typeof (fmin (vol_var__Float128, vol_var_short_int)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmin (vol_var__Float128, vol_var_short_int);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fmin_213 (void)
{
  extern typeof (fmin (vol_var__Float128, vol_var_unsigned_short_int)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmin (vol_var__Float128, vol_var_unsigned_short_int);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fmin_214 (void)
{
  extern typeof (fmin (vol_var__Float128, vol_var_int)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmin (vol_var__Float128, vol_var_int);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fmin_215 (void)
{
  extern typeof (fmin (vol_var__Float128, vol_var_unsigned_int)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmin (vol_var__Float128, vol_var_unsigned_int);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fmin_216 (void)
{
  extern typeof (fmin (vol_var__Float128, vol_var_long_int)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmin (vol_var__Float128, vol_var_long_int);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fmin_217 (void)
{
  extern typeof (fmin (vol_var__Float128, vol_var_unsigned_long_int)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmin (vol_var__Float128, vol_var_unsigned_long_int);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fmin_218 (void)
{
  extern typeof (fmin (vol_var__Float128, vol_var_long_long_int)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmin (vol_var__Float128, vol_var_long_long_int);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fmin_219 (void)
{
  extern typeof (fmin (vol_var__Float128, vol_var_unsigned_long_long_int)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmin (vol_var__Float128, vol_var_unsigned_long_long_int);
}
#endif
#if defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_fmin_220 (void)
{
  extern typeof (fmin (vol_var__Float128, vol_var___int128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmin (vol_var__Float128, vol_var___int128);
}
#endif
#if defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_fmin_221 (void)
{
  extern typeof (fmin (vol_var__Float128, vol_var_unsigned___int128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmin (vol_var__Float128, vol_var_unsigned___int128);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fmin_222 (void)
{
  extern typeof (fmin (vol_var__Float128, vol_var_enum_e)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmin (vol_var__Float128, vol_var_enum_e);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fmin_223 (void)
{
  extern typeof (fmin (vol_var__Float128, vol_var__Bool)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmin (vol_var__Float128, vol_var__Bool);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fmin_224 (void)
{
  extern typeof (fmin (vol_var__Float128, vol_var_bit_field)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmin (vol_var__Float128, vol_var_bit_field);
}
#endif
#if defined HUGE_VAL_F16
static void
test_fmin_225 (void)
{
  extern typeof (fmin (vol_var_char, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_char, vol_var__Float16);
}
#endif
static void
test_fmin_226 (void)
{
  extern typeof (fmin (vol_var_char, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_char, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_fmin_227 (void)
{
  extern typeof (fmin (vol_var_char, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_char, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmin_228 (void)
{
  extern typeof (fmin (vol_var_char, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_char, vol_var__Float32x);
}
#endif
static void
test_fmin_229 (void)
{
  extern typeof (fmin (vol_var_char, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_char, vol_var_double);
}
static void
test_fmin_230 (void)
{
  extern typeof (fmin (vol_var_char, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmin (vol_var_char, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_fmin_231 (void)
{
  extern typeof (fmin (vol_var_char, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmin (vol_var_char, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fmin_232 (void)
{
  extern typeof (fmin (vol_var_char, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmin (vol_var_char, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fmin_233 (void)
{
  extern typeof (fmin (vol_var_char, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmin (vol_var_char, vol_var__Float128);
}
#endif
static void
test_fmin_234 (void)
{
  extern typeof (fmin (vol_var_char, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_char, vol_var_char);
}
static void
test_fmin_235 (void)
{
  extern typeof (fmin (vol_var_char, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_char, vol_var_signed_char);
}
static void
test_fmin_236 (void)
{
  extern typeof (fmin (vol_var_char, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_char, vol_var_unsigned_char);
}
static void
test_fmin_237 (void)
{
  extern typeof (fmin (vol_var_char, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_char, vol_var_short_int);
}
static void
test_fmin_238 (void)
{
  extern typeof (fmin (vol_var_char, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_char, vol_var_unsigned_short_int);
}
static void
test_fmin_239 (void)
{
  extern typeof (fmin (vol_var_char, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_char, vol_var_int);
}
static void
test_fmin_240 (void)
{
  extern typeof (fmin (vol_var_char, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_char, vol_var_unsigned_int);
}
static void
test_fmin_241 (void)
{
  extern typeof (fmin (vol_var_char, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_char, vol_var_long_int);
}
static void
test_fmin_242 (void)
{
  extern typeof (fmin (vol_var_char, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_char, vol_var_unsigned_long_int);
}
static void
test_fmin_243 (void)
{
  extern typeof (fmin (vol_var_char, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_char, vol_var_long_long_int);
}
static void
test_fmin_244 (void)
{
  extern typeof (fmin (vol_var_char, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_char, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fmin_245 (void)
{
  extern typeof (fmin (vol_var_char, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_char, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmin_246 (void)
{
  extern typeof (fmin (vol_var_char, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_char, vol_var_unsigned___int128);
}
#endif
static void
test_fmin_247 (void)
{
  extern typeof (fmin (vol_var_char, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_char, vol_var_enum_e);
}
static void
test_fmin_248 (void)
{
  extern typeof (fmin (vol_var_char, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_char, vol_var__Bool);
}
static void
test_fmin_249 (void)
{
  extern typeof (fmin (vol_var_char, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_char, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_fmin_250 (void)
{
  extern typeof (fmin (vol_var_signed_char, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_signed_char, vol_var__Float16);
}
#endif
static void
test_fmin_251 (void)
{
  extern typeof (fmin (vol_var_signed_char, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_signed_char, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_fmin_252 (void)
{
  extern typeof (fmin (vol_var_signed_char, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_signed_char, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmin_253 (void)
{
  extern typeof (fmin (vol_var_signed_char, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_signed_char, vol_var__Float32x);
}
#endif
static void
test_fmin_254 (void)
{
  extern typeof (fmin (vol_var_signed_char, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_signed_char, vol_var_double);
}
static void
test_fmin_255 (void)
{
  extern typeof (fmin (vol_var_signed_char, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmin (vol_var_signed_char, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_fmin_256 (void)
{
  extern typeof (fmin (vol_var_signed_char, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmin (vol_var_signed_char, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fmin_257 (void)
{
  extern typeof (fmin (vol_var_signed_char, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmin (vol_var_signed_char, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fmin_258 (void)
{
  extern typeof (fmin (vol_var_signed_char, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmin (vol_var_signed_char, vol_var__Float128);
}
#endif
static void
test_fmin_259 (void)
{
  extern typeof (fmin (vol_var_signed_char, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_signed_char, vol_var_char);
}
static void
test_fmin_260 (void)
{
  extern typeof (fmin (vol_var_signed_char, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_signed_char, vol_var_signed_char);
}
static void
test_fmin_261 (void)
{
  extern typeof (fmin (vol_var_signed_char, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_signed_char, vol_var_unsigned_char);
}
static void
test_fmin_262 (void)
{
  extern typeof (fmin (vol_var_signed_char, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_signed_char, vol_var_short_int);
}
static void
test_fmin_263 (void)
{
  extern typeof (fmin (vol_var_signed_char, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_signed_char, vol_var_unsigned_short_int);
}
static void
test_fmin_264 (void)
{
  extern typeof (fmin (vol_var_signed_char, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_signed_char, vol_var_int);
}
static void
test_fmin_265 (void)
{
  extern typeof (fmin (vol_var_signed_char, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_signed_char, vol_var_unsigned_int);
}
static void
test_fmin_266 (void)
{
  extern typeof (fmin (vol_var_signed_char, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_signed_char, vol_var_long_int);
}
static void
test_fmin_267 (void)
{
  extern typeof (fmin (vol_var_signed_char, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_signed_char, vol_var_unsigned_long_int);
}
static void
test_fmin_268 (void)
{
  extern typeof (fmin (vol_var_signed_char, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_signed_char, vol_var_long_long_int);
}
static void
test_fmin_269 (void)
{
  extern typeof (fmin (vol_var_signed_char, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_signed_char, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fmin_270 (void)
{
  extern typeof (fmin (vol_var_signed_char, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_signed_char, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmin_271 (void)
{
  extern typeof (fmin (vol_var_signed_char, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_signed_char, vol_var_unsigned___int128);
}
#endif
static void
test_fmin_272 (void)
{
  extern typeof (fmin (vol_var_signed_char, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_signed_char, vol_var_enum_e);
}
static void
test_fmin_273 (void)
{
  extern typeof (fmin (vol_var_signed_char, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_signed_char, vol_var__Bool);
}
static void
test_fmin_274 (void)
{
  extern typeof (fmin (vol_var_signed_char, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_signed_char, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_fmin_275 (void)
{
  extern typeof (fmin (vol_var_unsigned_char, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_unsigned_char, vol_var__Float16);
}
#endif
static void
test_fmin_276 (void)
{
  extern typeof (fmin (vol_var_unsigned_char, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_unsigned_char, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_fmin_277 (void)
{
  extern typeof (fmin (vol_var_unsigned_char, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_unsigned_char, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmin_278 (void)
{
  extern typeof (fmin (vol_var_unsigned_char, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_unsigned_char, vol_var__Float32x);
}
#endif
static void
test_fmin_279 (void)
{
  extern typeof (fmin (vol_var_unsigned_char, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_unsigned_char, vol_var_double);
}
static void
test_fmin_280 (void)
{
  extern typeof (fmin (vol_var_unsigned_char, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmin (vol_var_unsigned_char, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_fmin_281 (void)
{
  extern typeof (fmin (vol_var_unsigned_char, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmin (vol_var_unsigned_char, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fmin_282 (void)
{
  extern typeof (fmin (vol_var_unsigned_char, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmin (vol_var_unsigned_char, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fmin_283 (void)
{
  extern typeof (fmin (vol_var_unsigned_char, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmin (vol_var_unsigned_char, vol_var__Float128);
}
#endif
static void
test_fmin_284 (void)
{
  extern typeof (fmin (vol_var_unsigned_char, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_unsigned_char, vol_var_char);
}
static void
test_fmin_285 (void)
{
  extern typeof (fmin (vol_var_unsigned_char, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_unsigned_char, vol_var_signed_char);
}
static void
test_fmin_286 (void)
{
  extern typeof (fmin (vol_var_unsigned_char, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_unsigned_char, vol_var_unsigned_char);
}
static void
test_fmin_287 (void)
{
  extern typeof (fmin (vol_var_unsigned_char, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_unsigned_char, vol_var_short_int);
}
static void
test_fmin_288 (void)
{
  extern typeof (fmin (vol_var_unsigned_char, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_unsigned_char, vol_var_unsigned_short_int);
}
static void
test_fmin_289 (void)
{
  extern typeof (fmin (vol_var_unsigned_char, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_unsigned_char, vol_var_int);
}
static void
test_fmin_290 (void)
{
  extern typeof (fmin (vol_var_unsigned_char, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_unsigned_char, vol_var_unsigned_int);
}
static void
test_fmin_291 (void)
{
  extern typeof (fmin (vol_var_unsigned_char, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_unsigned_char, vol_var_long_int);
}
static void
test_fmin_292 (void)
{
  extern typeof (fmin (vol_var_unsigned_char, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_unsigned_char, vol_var_unsigned_long_int);
}
static void
test_fmin_293 (void)
{
  extern typeof (fmin (vol_var_unsigned_char, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_unsigned_char, vol_var_long_long_int);
}
static void
test_fmin_294 (void)
{
  extern typeof (fmin (vol_var_unsigned_char, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_unsigned_char, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fmin_295 (void)
{
  extern typeof (fmin (vol_var_unsigned_char, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_unsigned_char, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmin_296 (void)
{
  extern typeof (fmin (vol_var_unsigned_char, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_unsigned_char, vol_var_unsigned___int128);
}
#endif
static void
test_fmin_297 (void)
{
  extern typeof (fmin (vol_var_unsigned_char, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_unsigned_char, vol_var_enum_e);
}
static void
test_fmin_298 (void)
{
  extern typeof (fmin (vol_var_unsigned_char, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_unsigned_char, vol_var__Bool);
}
static void
test_fmin_299 (void)
{
  extern typeof (fmin (vol_var_unsigned_char, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_unsigned_char, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_fmin_300 (void)
{
  extern typeof (fmin (vol_var_short_int, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_short_int, vol_var__Float16);
}
#endif
static void
test_fmin_301 (void)
{
  extern typeof (fmin (vol_var_short_int, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_short_int, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_fmin_302 (void)
{
  extern typeof (fmin (vol_var_short_int, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_short_int, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmin_303 (void)
{
  extern typeof (fmin (vol_var_short_int, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_short_int, vol_var__Float32x);
}
#endif
static void
test_fmin_304 (void)
{
  extern typeof (fmin (vol_var_short_int, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_short_int, vol_var_double);
}
static void
test_fmin_305 (void)
{
  extern typeof (fmin (vol_var_short_int, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmin (vol_var_short_int, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_fmin_306 (void)
{
  extern typeof (fmin (vol_var_short_int, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmin (vol_var_short_int, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fmin_307 (void)
{
  extern typeof (fmin (vol_var_short_int, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmin (vol_var_short_int, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fmin_308 (void)
{
  extern typeof (fmin (vol_var_short_int, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmin (vol_var_short_int, vol_var__Float128);
}
#endif
static void
test_fmin_309 (void)
{
  extern typeof (fmin (vol_var_short_int, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_short_int, vol_var_char);
}
static void
test_fmin_310 (void)
{
  extern typeof (fmin (vol_var_short_int, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_short_int, vol_var_signed_char);
}
static void
test_fmin_311 (void)
{
  extern typeof (fmin (vol_var_short_int, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_short_int, vol_var_unsigned_char);
}
static void
test_fmin_312 (void)
{
  extern typeof (fmin (vol_var_short_int, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_short_int, vol_var_short_int);
}
static void
test_fmin_313 (void)
{
  extern typeof (fmin (vol_var_short_int, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_short_int, vol_var_unsigned_short_int);
}
static void
test_fmin_314 (void)
{
  extern typeof (fmin (vol_var_short_int, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_short_int, vol_var_int);
}
static void
test_fmin_315 (void)
{
  extern typeof (fmin (vol_var_short_int, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_short_int, vol_var_unsigned_int);
}
static void
test_fmin_316 (void)
{
  extern typeof (fmin (vol_var_short_int, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_short_int, vol_var_long_int);
}
static void
test_fmin_317 (void)
{
  extern typeof (fmin (vol_var_short_int, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_short_int, vol_var_unsigned_long_int);
}
static void
test_fmin_318 (void)
{
  extern typeof (fmin (vol_var_short_int, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_short_int, vol_var_long_long_int);
}
static void
test_fmin_319 (void)
{
  extern typeof (fmin (vol_var_short_int, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_short_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fmin_320 (void)
{
  extern typeof (fmin (vol_var_short_int, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_short_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmin_321 (void)
{
  extern typeof (fmin (vol_var_short_int, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_short_int, vol_var_unsigned___int128);
}
#endif
static void
test_fmin_322 (void)
{
  extern typeof (fmin (vol_var_short_int, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_short_int, vol_var_enum_e);
}
static void
test_fmin_323 (void)
{
  extern typeof (fmin (vol_var_short_int, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_short_int, vol_var__Bool);
}
static void
test_fmin_324 (void)
{
  extern typeof (fmin (vol_var_short_int, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_short_int, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_fmin_325 (void)
{
  extern typeof (fmin (vol_var_unsigned_short_int, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_unsigned_short_int, vol_var__Float16);
}
#endif
static void
test_fmin_326 (void)
{
  extern typeof (fmin (vol_var_unsigned_short_int, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_unsigned_short_int, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_fmin_327 (void)
{
  extern typeof (fmin (vol_var_unsigned_short_int, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_unsigned_short_int, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmin_328 (void)
{
  extern typeof (fmin (vol_var_unsigned_short_int, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_unsigned_short_int, vol_var__Float32x);
}
#endif
static void
test_fmin_329 (void)
{
  extern typeof (fmin (vol_var_unsigned_short_int, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_unsigned_short_int, vol_var_double);
}
static void
test_fmin_330 (void)
{
  extern typeof (fmin (vol_var_unsigned_short_int, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmin (vol_var_unsigned_short_int, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_fmin_331 (void)
{
  extern typeof (fmin (vol_var_unsigned_short_int, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmin (vol_var_unsigned_short_int, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fmin_332 (void)
{
  extern typeof (fmin (vol_var_unsigned_short_int, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmin (vol_var_unsigned_short_int, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fmin_333 (void)
{
  extern typeof (fmin (vol_var_unsigned_short_int, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmin (vol_var_unsigned_short_int, vol_var__Float128);
}
#endif
static void
test_fmin_334 (void)
{
  extern typeof (fmin (vol_var_unsigned_short_int, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_unsigned_short_int, vol_var_char);
}
static void
test_fmin_335 (void)
{
  extern typeof (fmin (vol_var_unsigned_short_int, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_unsigned_short_int, vol_var_signed_char);
}
static void
test_fmin_336 (void)
{
  extern typeof (fmin (vol_var_unsigned_short_int, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_unsigned_short_int, vol_var_unsigned_char);
}
static void
test_fmin_337 (void)
{
  extern typeof (fmin (vol_var_unsigned_short_int, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_unsigned_short_int, vol_var_short_int);
}
static void
test_fmin_338 (void)
{
  extern typeof (fmin (vol_var_unsigned_short_int, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_unsigned_short_int, vol_var_unsigned_short_int);
}
static void
test_fmin_339 (void)
{
  extern typeof (fmin (vol_var_unsigned_short_int, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_unsigned_short_int, vol_var_int);
}
static void
test_fmin_340 (void)
{
  extern typeof (fmin (vol_var_unsigned_short_int, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_unsigned_short_int, vol_var_unsigned_int);
}
static void
test_fmin_341 (void)
{
  extern typeof (fmin (vol_var_unsigned_short_int, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_unsigned_short_int, vol_var_long_int);
}
static void
test_fmin_342 (void)
{
  extern typeof (fmin (vol_var_unsigned_short_int, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_unsigned_short_int, vol_var_unsigned_long_int);
}
static void
test_fmin_343 (void)
{
  extern typeof (fmin (vol_var_unsigned_short_int, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_unsigned_short_int, vol_var_long_long_int);
}
static void
test_fmin_344 (void)
{
  extern typeof (fmin (vol_var_unsigned_short_int, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_unsigned_short_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fmin_345 (void)
{
  extern typeof (fmin (vol_var_unsigned_short_int, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_unsigned_short_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmin_346 (void)
{
  extern typeof (fmin (vol_var_unsigned_short_int, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_unsigned_short_int, vol_var_unsigned___int128);
}
#endif
static void
test_fmin_347 (void)
{
  extern typeof (fmin (vol_var_unsigned_short_int, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_unsigned_short_int, vol_var_enum_e);
}
static void
test_fmin_348 (void)
{
  extern typeof (fmin (vol_var_unsigned_short_int, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_unsigned_short_int, vol_var__Bool);
}
static void
test_fmin_349 (void)
{
  extern typeof (fmin (vol_var_unsigned_short_int, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_unsigned_short_int, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_fmin_350 (void)
{
  extern typeof (fmin (vol_var_int, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_int, vol_var__Float16);
}
#endif
static void
test_fmin_351 (void)
{
  extern typeof (fmin (vol_var_int, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_int, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_fmin_352 (void)
{
  extern typeof (fmin (vol_var_int, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_int, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmin_353 (void)
{
  extern typeof (fmin (vol_var_int, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_int, vol_var__Float32x);
}
#endif
static void
test_fmin_354 (void)
{
  extern typeof (fmin (vol_var_int, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_int, vol_var_double);
}
static void
test_fmin_355 (void)
{
  extern typeof (fmin (vol_var_int, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmin (vol_var_int, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_fmin_356 (void)
{
  extern typeof (fmin (vol_var_int, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmin (vol_var_int, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fmin_357 (void)
{
  extern typeof (fmin (vol_var_int, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmin (vol_var_int, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fmin_358 (void)
{
  extern typeof (fmin (vol_var_int, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmin (vol_var_int, vol_var__Float128);
}
#endif
static void
test_fmin_359 (void)
{
  extern typeof (fmin (vol_var_int, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_int, vol_var_char);
}
static void
test_fmin_360 (void)
{
  extern typeof (fmin (vol_var_int, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_int, vol_var_signed_char);
}
static void
test_fmin_361 (void)
{
  extern typeof (fmin (vol_var_int, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_int, vol_var_unsigned_char);
}
static void
test_fmin_362 (void)
{
  extern typeof (fmin (vol_var_int, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_int, vol_var_short_int);
}
static void
test_fmin_363 (void)
{
  extern typeof (fmin (vol_var_int, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_int, vol_var_unsigned_short_int);
}
static void
test_fmin_364 (void)
{
  extern typeof (fmin (vol_var_int, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_int, vol_var_int);
}
static void
test_fmin_365 (void)
{
  extern typeof (fmin (vol_var_int, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_int, vol_var_unsigned_int);
}
static void
test_fmin_366 (void)
{
  extern typeof (fmin (vol_var_int, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_int, vol_var_long_int);
}
static void
test_fmin_367 (void)
{
  extern typeof (fmin (vol_var_int, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_int, vol_var_unsigned_long_int);
}
static void
test_fmin_368 (void)
{
  extern typeof (fmin (vol_var_int, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_int, vol_var_long_long_int);
}
static void
test_fmin_369 (void)
{
  extern typeof (fmin (vol_var_int, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fmin_370 (void)
{
  extern typeof (fmin (vol_var_int, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmin_371 (void)
{
  extern typeof (fmin (vol_var_int, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_int, vol_var_unsigned___int128);
}
#endif
static void
test_fmin_372 (void)
{
  extern typeof (fmin (vol_var_int, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_int, vol_var_enum_e);
}
static void
test_fmin_373 (void)
{
  extern typeof (fmin (vol_var_int, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_int, vol_var__Bool);
}
static void
test_fmin_374 (void)
{
  extern typeof (fmin (vol_var_int, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_int, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_fmin_375 (void)
{
  extern typeof (fmin (vol_var_unsigned_int, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_unsigned_int, vol_var__Float16);
}
#endif
static void
test_fmin_376 (void)
{
  extern typeof (fmin (vol_var_unsigned_int, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_unsigned_int, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_fmin_377 (void)
{
  extern typeof (fmin (vol_var_unsigned_int, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_unsigned_int, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmin_378 (void)
{
  extern typeof (fmin (vol_var_unsigned_int, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_unsigned_int, vol_var__Float32x);
}
#endif
static void
test_fmin_379 (void)
{
  extern typeof (fmin (vol_var_unsigned_int, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_unsigned_int, vol_var_double);
}
static void
test_fmin_380 (void)
{
  extern typeof (fmin (vol_var_unsigned_int, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmin (vol_var_unsigned_int, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_fmin_381 (void)
{
  extern typeof (fmin (vol_var_unsigned_int, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmin (vol_var_unsigned_int, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fmin_382 (void)
{
  extern typeof (fmin (vol_var_unsigned_int, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmin (vol_var_unsigned_int, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fmin_383 (void)
{
  extern typeof (fmin (vol_var_unsigned_int, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmin (vol_var_unsigned_int, vol_var__Float128);
}
#endif
static void
test_fmin_384 (void)
{
  extern typeof (fmin (vol_var_unsigned_int, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_unsigned_int, vol_var_char);
}
static void
test_fmin_385 (void)
{
  extern typeof (fmin (vol_var_unsigned_int, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_unsigned_int, vol_var_signed_char);
}
static void
test_fmin_386 (void)
{
  extern typeof (fmin (vol_var_unsigned_int, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_unsigned_int, vol_var_unsigned_char);
}
static void
test_fmin_387 (void)
{
  extern typeof (fmin (vol_var_unsigned_int, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_unsigned_int, vol_var_short_int);
}
static void
test_fmin_388 (void)
{
  extern typeof (fmin (vol_var_unsigned_int, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_unsigned_int, vol_var_unsigned_short_int);
}
static void
test_fmin_389 (void)
{
  extern typeof (fmin (vol_var_unsigned_int, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_unsigned_int, vol_var_int);
}
static void
test_fmin_390 (void)
{
  extern typeof (fmin (vol_var_unsigned_int, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_unsigned_int, vol_var_unsigned_int);
}
static void
test_fmin_391 (void)
{
  extern typeof (fmin (vol_var_unsigned_int, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_unsigned_int, vol_var_long_int);
}
static void
test_fmin_392 (void)
{
  extern typeof (fmin (vol_var_unsigned_int, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_unsigned_int, vol_var_unsigned_long_int);
}
static void
test_fmin_393 (void)
{
  extern typeof (fmin (vol_var_unsigned_int, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_unsigned_int, vol_var_long_long_int);
}
static void
test_fmin_394 (void)
{
  extern typeof (fmin (vol_var_unsigned_int, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_unsigned_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fmin_395 (void)
{
  extern typeof (fmin (vol_var_unsigned_int, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_unsigned_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmin_396 (void)
{
  extern typeof (fmin (vol_var_unsigned_int, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_unsigned_int, vol_var_unsigned___int128);
}
#endif
static void
test_fmin_397 (void)
{
  extern typeof (fmin (vol_var_unsigned_int, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_unsigned_int, vol_var_enum_e);
}
static void
test_fmin_398 (void)
{
  extern typeof (fmin (vol_var_unsigned_int, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_unsigned_int, vol_var__Bool);
}
static void
test_fmin_399 (void)
{
  extern typeof (fmin (vol_var_unsigned_int, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_unsigned_int, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_fmin_400 (void)
{
  extern typeof (fmin (vol_var_long_int, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_long_int, vol_var__Float16);
}
#endif
static void
test_fmin_401 (void)
{
  extern typeof (fmin (vol_var_long_int, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_long_int, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_fmin_402 (void)
{
  extern typeof (fmin (vol_var_long_int, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_long_int, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmin_403 (void)
{
  extern typeof (fmin (vol_var_long_int, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_long_int, vol_var__Float32x);
}
#endif
static void
test_fmin_404 (void)
{
  extern typeof (fmin (vol_var_long_int, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_long_int, vol_var_double);
}
static void
test_fmin_405 (void)
{
  extern typeof (fmin (vol_var_long_int, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmin (vol_var_long_int, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_fmin_406 (void)
{
  extern typeof (fmin (vol_var_long_int, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmin (vol_var_long_int, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fmin_407 (void)
{
  extern typeof (fmin (vol_var_long_int, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmin (vol_var_long_int, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fmin_408 (void)
{
  extern typeof (fmin (vol_var_long_int, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmin (vol_var_long_int, vol_var__Float128);
}
#endif
static void
test_fmin_409 (void)
{
  extern typeof (fmin (vol_var_long_int, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_long_int, vol_var_char);
}
static void
test_fmin_410 (void)
{
  extern typeof (fmin (vol_var_long_int, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_long_int, vol_var_signed_char);
}
static void
test_fmin_411 (void)
{
  extern typeof (fmin (vol_var_long_int, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_long_int, vol_var_unsigned_char);
}
static void
test_fmin_412 (void)
{
  extern typeof (fmin (vol_var_long_int, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_long_int, vol_var_short_int);
}
static void
test_fmin_413 (void)
{
  extern typeof (fmin (vol_var_long_int, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_long_int, vol_var_unsigned_short_int);
}
static void
test_fmin_414 (void)
{
  extern typeof (fmin (vol_var_long_int, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_long_int, vol_var_int);
}
static void
test_fmin_415 (void)
{
  extern typeof (fmin (vol_var_long_int, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_long_int, vol_var_unsigned_int);
}
static void
test_fmin_416 (void)
{
  extern typeof (fmin (vol_var_long_int, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_long_int, vol_var_long_int);
}
static void
test_fmin_417 (void)
{
  extern typeof (fmin (vol_var_long_int, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_long_int, vol_var_unsigned_long_int);
}
static void
test_fmin_418 (void)
{
  extern typeof (fmin (vol_var_long_int, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_long_int, vol_var_long_long_int);
}
static void
test_fmin_419 (void)
{
  extern typeof (fmin (vol_var_long_int, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_long_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fmin_420 (void)
{
  extern typeof (fmin (vol_var_long_int, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_long_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmin_421 (void)
{
  extern typeof (fmin (vol_var_long_int, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_long_int, vol_var_unsigned___int128);
}
#endif
static void
test_fmin_422 (void)
{
  extern typeof (fmin (vol_var_long_int, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_long_int, vol_var_enum_e);
}
static void
test_fmin_423 (void)
{
  extern typeof (fmin (vol_var_long_int, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_long_int, vol_var__Bool);
}
static void
test_fmin_424 (void)
{
  extern typeof (fmin (vol_var_long_int, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_long_int, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_fmin_425 (void)
{
  extern typeof (fmin (vol_var_unsigned_long_int, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_unsigned_long_int, vol_var__Float16);
}
#endif
static void
test_fmin_426 (void)
{
  extern typeof (fmin (vol_var_unsigned_long_int, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_unsigned_long_int, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_fmin_427 (void)
{
  extern typeof (fmin (vol_var_unsigned_long_int, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_unsigned_long_int, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmin_428 (void)
{
  extern typeof (fmin (vol_var_unsigned_long_int, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_unsigned_long_int, vol_var__Float32x);
}
#endif
static void
test_fmin_429 (void)
{
  extern typeof (fmin (vol_var_unsigned_long_int, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_unsigned_long_int, vol_var_double);
}
static void
test_fmin_430 (void)
{
  extern typeof (fmin (vol_var_unsigned_long_int, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmin (vol_var_unsigned_long_int, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_fmin_431 (void)
{
  extern typeof (fmin (vol_var_unsigned_long_int, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmin (vol_var_unsigned_long_int, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fmin_432 (void)
{
  extern typeof (fmin (vol_var_unsigned_long_int, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmin (vol_var_unsigned_long_int, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fmin_433 (void)
{
  extern typeof (fmin (vol_var_unsigned_long_int, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmin (vol_var_unsigned_long_int, vol_var__Float128);
}
#endif
static void
test_fmin_434 (void)
{
  extern typeof (fmin (vol_var_unsigned_long_int, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_unsigned_long_int, vol_var_char);
}
static void
test_fmin_435 (void)
{
  extern typeof (fmin (vol_var_unsigned_long_int, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_unsigned_long_int, vol_var_signed_char);
}
static void
test_fmin_436 (void)
{
  extern typeof (fmin (vol_var_unsigned_long_int, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_unsigned_long_int, vol_var_unsigned_char);
}
static void
test_fmin_437 (void)
{
  extern typeof (fmin (vol_var_unsigned_long_int, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_unsigned_long_int, vol_var_short_int);
}
static void
test_fmin_438 (void)
{
  extern typeof (fmin (vol_var_unsigned_long_int, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_unsigned_long_int, vol_var_unsigned_short_int);
}
static void
test_fmin_439 (void)
{
  extern typeof (fmin (vol_var_unsigned_long_int, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_unsigned_long_int, vol_var_int);
}
static void
test_fmin_440 (void)
{
  extern typeof (fmin (vol_var_unsigned_long_int, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_unsigned_long_int, vol_var_unsigned_int);
}
static void
test_fmin_441 (void)
{
  extern typeof (fmin (vol_var_unsigned_long_int, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_unsigned_long_int, vol_var_long_int);
}
static void
test_fmin_442 (void)
{
  extern typeof (fmin (vol_var_unsigned_long_int, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_unsigned_long_int, vol_var_unsigned_long_int);
}
static void
test_fmin_443 (void)
{
  extern typeof (fmin (vol_var_unsigned_long_int, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_unsigned_long_int, vol_var_long_long_int);
}
static void
test_fmin_444 (void)
{
  extern typeof (fmin (vol_var_unsigned_long_int, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_unsigned_long_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fmin_445 (void)
{
  extern typeof (fmin (vol_var_unsigned_long_int, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_unsigned_long_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmin_446 (void)
{
  extern typeof (fmin (vol_var_unsigned_long_int, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_unsigned_long_int, vol_var_unsigned___int128);
}
#endif
static void
test_fmin_447 (void)
{
  extern typeof (fmin (vol_var_unsigned_long_int, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_unsigned_long_int, vol_var_enum_e);
}
static void
test_fmin_448 (void)
{
  extern typeof (fmin (vol_var_unsigned_long_int, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_unsigned_long_int, vol_var__Bool);
}
static void
test_fmin_449 (void)
{
  extern typeof (fmin (vol_var_unsigned_long_int, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_unsigned_long_int, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_fmin_450 (void)
{
  extern typeof (fmin (vol_var_long_long_int, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_long_long_int, vol_var__Float16);
}
#endif
static void
test_fmin_451 (void)
{
  extern typeof (fmin (vol_var_long_long_int, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_long_long_int, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_fmin_452 (void)
{
  extern typeof (fmin (vol_var_long_long_int, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_long_long_int, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmin_453 (void)
{
  extern typeof (fmin (vol_var_long_long_int, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_long_long_int, vol_var__Float32x);
}
#endif
static void
test_fmin_454 (void)
{
  extern typeof (fmin (vol_var_long_long_int, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_long_long_int, vol_var_double);
}
static void
test_fmin_455 (void)
{
  extern typeof (fmin (vol_var_long_long_int, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmin (vol_var_long_long_int, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_fmin_456 (void)
{
  extern typeof (fmin (vol_var_long_long_int, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmin (vol_var_long_long_int, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fmin_457 (void)
{
  extern typeof (fmin (vol_var_long_long_int, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmin (vol_var_long_long_int, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fmin_458 (void)
{
  extern typeof (fmin (vol_var_long_long_int, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmin (vol_var_long_long_int, vol_var__Float128);
}
#endif
static void
test_fmin_459 (void)
{
  extern typeof (fmin (vol_var_long_long_int, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_long_long_int, vol_var_char);
}
static void
test_fmin_460 (void)
{
  extern typeof (fmin (vol_var_long_long_int, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_long_long_int, vol_var_signed_char);
}
static void
test_fmin_461 (void)
{
  extern typeof (fmin (vol_var_long_long_int, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_long_long_int, vol_var_unsigned_char);
}
static void
test_fmin_462 (void)
{
  extern typeof (fmin (vol_var_long_long_int, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_long_long_int, vol_var_short_int);
}
static void
test_fmin_463 (void)
{
  extern typeof (fmin (vol_var_long_long_int, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_long_long_int, vol_var_unsigned_short_int);
}
static void
test_fmin_464 (void)
{
  extern typeof (fmin (vol_var_long_long_int, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_long_long_int, vol_var_int);
}
static void
test_fmin_465 (void)
{
  extern typeof (fmin (vol_var_long_long_int, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_long_long_int, vol_var_unsigned_int);
}
static void
test_fmin_466 (void)
{
  extern typeof (fmin (vol_var_long_long_int, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_long_long_int, vol_var_long_int);
}
static void
test_fmin_467 (void)
{
  extern typeof (fmin (vol_var_long_long_int, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_long_long_int, vol_var_unsigned_long_int);
}
static void
test_fmin_468 (void)
{
  extern typeof (fmin (vol_var_long_long_int, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_long_long_int, vol_var_long_long_int);
}
static void
test_fmin_469 (void)
{
  extern typeof (fmin (vol_var_long_long_int, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_long_long_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fmin_470 (void)
{
  extern typeof (fmin (vol_var_long_long_int, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_long_long_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmin_471 (void)
{
  extern typeof (fmin (vol_var_long_long_int, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_long_long_int, vol_var_unsigned___int128);
}
#endif
static void
test_fmin_472 (void)
{
  extern typeof (fmin (vol_var_long_long_int, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_long_long_int, vol_var_enum_e);
}
static void
test_fmin_473 (void)
{
  extern typeof (fmin (vol_var_long_long_int, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_long_long_int, vol_var__Bool);
}
static void
test_fmin_474 (void)
{
  extern typeof (fmin (vol_var_long_long_int, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_long_long_int, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_fmin_475 (void)
{
  extern typeof (fmin (vol_var_unsigned_long_long_int, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_unsigned_long_long_int, vol_var__Float16);
}
#endif
static void
test_fmin_476 (void)
{
  extern typeof (fmin (vol_var_unsigned_long_long_int, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_unsigned_long_long_int, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_fmin_477 (void)
{
  extern typeof (fmin (vol_var_unsigned_long_long_int, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_unsigned_long_long_int, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmin_478 (void)
{
  extern typeof (fmin (vol_var_unsigned_long_long_int, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_unsigned_long_long_int, vol_var__Float32x);
}
#endif
static void
test_fmin_479 (void)
{
  extern typeof (fmin (vol_var_unsigned_long_long_int, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_unsigned_long_long_int, vol_var_double);
}
static void
test_fmin_480 (void)
{
  extern typeof (fmin (vol_var_unsigned_long_long_int, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmin (vol_var_unsigned_long_long_int, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_fmin_481 (void)
{
  extern typeof (fmin (vol_var_unsigned_long_long_int, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmin (vol_var_unsigned_long_long_int, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fmin_482 (void)
{
  extern typeof (fmin (vol_var_unsigned_long_long_int, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmin (vol_var_unsigned_long_long_int, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fmin_483 (void)
{
  extern typeof (fmin (vol_var_unsigned_long_long_int, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmin (vol_var_unsigned_long_long_int, vol_var__Float128);
}
#endif
static void
test_fmin_484 (void)
{
  extern typeof (fmin (vol_var_unsigned_long_long_int, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_unsigned_long_long_int, vol_var_char);
}
static void
test_fmin_485 (void)
{
  extern typeof (fmin (vol_var_unsigned_long_long_int, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_unsigned_long_long_int, vol_var_signed_char);
}
static void
test_fmin_486 (void)
{
  extern typeof (fmin (vol_var_unsigned_long_long_int, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_unsigned_long_long_int, vol_var_unsigned_char);
}
static void
test_fmin_487 (void)
{
  extern typeof (fmin (vol_var_unsigned_long_long_int, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_unsigned_long_long_int, vol_var_short_int);
}
static void
test_fmin_488 (void)
{
  extern typeof (fmin (vol_var_unsigned_long_long_int, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_unsigned_long_long_int, vol_var_unsigned_short_int);
}
static void
test_fmin_489 (void)
{
  extern typeof (fmin (vol_var_unsigned_long_long_int, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_unsigned_long_long_int, vol_var_int);
}
static void
test_fmin_490 (void)
{
  extern typeof (fmin (vol_var_unsigned_long_long_int, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_unsigned_long_long_int, vol_var_unsigned_int);
}
static void
test_fmin_491 (void)
{
  extern typeof (fmin (vol_var_unsigned_long_long_int, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_unsigned_long_long_int, vol_var_long_int);
}
static void
test_fmin_492 (void)
{
  extern typeof (fmin (vol_var_unsigned_long_long_int, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_unsigned_long_long_int, vol_var_unsigned_long_int);
}
static void
test_fmin_493 (void)
{
  extern typeof (fmin (vol_var_unsigned_long_long_int, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_unsigned_long_long_int, vol_var_long_long_int);
}
static void
test_fmin_494 (void)
{
  extern typeof (fmin (vol_var_unsigned_long_long_int, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_unsigned_long_long_int, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fmin_495 (void)
{
  extern typeof (fmin (vol_var_unsigned_long_long_int, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_unsigned_long_long_int, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmin_496 (void)
{
  extern typeof (fmin (vol_var_unsigned_long_long_int, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_unsigned_long_long_int, vol_var_unsigned___int128);
}
#endif
static void
test_fmin_497 (void)
{
  extern typeof (fmin (vol_var_unsigned_long_long_int, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_unsigned_long_long_int, vol_var_enum_e);
}
static void
test_fmin_498 (void)
{
  extern typeof (fmin (vol_var_unsigned_long_long_int, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_unsigned_long_long_int, vol_var__Bool);
}
static void
test_fmin_499 (void)
{
  extern typeof (fmin (vol_var_unsigned_long_long_int, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_unsigned_long_long_int, vol_var_bit_field);
}
#if defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_fmin_500 (void)
{
  extern typeof (fmin (vol_var___int128, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var___int128, vol_var__Float16);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmin_501 (void)
{
  extern typeof (fmin (vol_var___int128, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var___int128, vol_var_float);
}
#endif
#if defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_fmin_502 (void)
{
  extern typeof (fmin (vol_var___int128, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var___int128, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_fmin_503 (void)
{
  extern typeof (fmin (vol_var___int128, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var___int128, vol_var__Float32x);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmin_504 (void)
{
  extern typeof (fmin (vol_var___int128, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var___int128, vol_var_double);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmin_505 (void)
{
  extern typeof (fmin (vol_var___int128, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmin (vol_var___int128, vol_var_long_double);
}
#endif
#if defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_fmin_506 (void)
{
  extern typeof (fmin (vol_var___int128, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmin (vol_var___int128, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_fmin_507 (void)
{
  extern typeof (fmin (vol_var___int128, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmin (vol_var___int128, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_fmin_508 (void)
{
  extern typeof (fmin (vol_var___int128, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmin (vol_var___int128, vol_var__Float128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmin_509 (void)
{
  extern typeof (fmin (vol_var___int128, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var___int128, vol_var_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmin_510 (void)
{
  extern typeof (fmin (vol_var___int128, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var___int128, vol_var_signed_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmin_511 (void)
{
  extern typeof (fmin (vol_var___int128, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var___int128, vol_var_unsigned_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmin_512 (void)
{
  extern typeof (fmin (vol_var___int128, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var___int128, vol_var_short_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmin_513 (void)
{
  extern typeof (fmin (vol_var___int128, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var___int128, vol_var_unsigned_short_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmin_514 (void)
{
  extern typeof (fmin (vol_var___int128, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var___int128, vol_var_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmin_515 (void)
{
  extern typeof (fmin (vol_var___int128, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var___int128, vol_var_unsigned_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmin_516 (void)
{
  extern typeof (fmin (vol_var___int128, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var___int128, vol_var_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmin_517 (void)
{
  extern typeof (fmin (vol_var___int128, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var___int128, vol_var_unsigned_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmin_518 (void)
{
  extern typeof (fmin (vol_var___int128, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var___int128, vol_var_long_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmin_519 (void)
{
  extern typeof (fmin (vol_var___int128, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var___int128, vol_var_unsigned_long_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmin_520 (void)
{
  extern typeof (fmin (vol_var___int128, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var___int128, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmin_521 (void)
{
  extern typeof (fmin (vol_var___int128, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var___int128, vol_var_unsigned___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmin_522 (void)
{
  extern typeof (fmin (vol_var___int128, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var___int128, vol_var_enum_e);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmin_523 (void)
{
  extern typeof (fmin (vol_var___int128, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var___int128, vol_var__Bool);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmin_524 (void)
{
  extern typeof (fmin (vol_var___int128, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var___int128, vol_var_bit_field);
}
#endif
#if defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_fmin_525 (void)
{
  extern typeof (fmin (vol_var_unsigned___int128, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_unsigned___int128, vol_var__Float16);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmin_526 (void)
{
  extern typeof (fmin (vol_var_unsigned___int128, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_unsigned___int128, vol_var_float);
}
#endif
#if defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_fmin_527 (void)
{
  extern typeof (fmin (vol_var_unsigned___int128, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_unsigned___int128, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_fmin_528 (void)
{
  extern typeof (fmin (vol_var_unsigned___int128, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_unsigned___int128, vol_var__Float32x);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmin_529 (void)
{
  extern typeof (fmin (vol_var_unsigned___int128, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_unsigned___int128, vol_var_double);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmin_530 (void)
{
  extern typeof (fmin (vol_var_unsigned___int128, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmin (vol_var_unsigned___int128, vol_var_long_double);
}
#endif
#if defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_fmin_531 (void)
{
  extern typeof (fmin (vol_var_unsigned___int128, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmin (vol_var_unsigned___int128, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_fmin_532 (void)
{
  extern typeof (fmin (vol_var_unsigned___int128, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmin (vol_var_unsigned___int128, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_fmin_533 (void)
{
  extern typeof (fmin (vol_var_unsigned___int128, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmin (vol_var_unsigned___int128, vol_var__Float128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmin_534 (void)
{
  extern typeof (fmin (vol_var_unsigned___int128, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_unsigned___int128, vol_var_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmin_535 (void)
{
  extern typeof (fmin (vol_var_unsigned___int128, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_unsigned___int128, vol_var_signed_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmin_536 (void)
{
  extern typeof (fmin (vol_var_unsigned___int128, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_unsigned___int128, vol_var_unsigned_char);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmin_537 (void)
{
  extern typeof (fmin (vol_var_unsigned___int128, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_unsigned___int128, vol_var_short_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmin_538 (void)
{
  extern typeof (fmin (vol_var_unsigned___int128, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_unsigned___int128, vol_var_unsigned_short_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmin_539 (void)
{
  extern typeof (fmin (vol_var_unsigned___int128, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_unsigned___int128, vol_var_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmin_540 (void)
{
  extern typeof (fmin (vol_var_unsigned___int128, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_unsigned___int128, vol_var_unsigned_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmin_541 (void)
{
  extern typeof (fmin (vol_var_unsigned___int128, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_unsigned___int128, vol_var_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmin_542 (void)
{
  extern typeof (fmin (vol_var_unsigned___int128, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_unsigned___int128, vol_var_unsigned_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmin_543 (void)
{
  extern typeof (fmin (vol_var_unsigned___int128, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_unsigned___int128, vol_var_long_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmin_544 (void)
{
  extern typeof (fmin (vol_var_unsigned___int128, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_unsigned___int128, vol_var_unsigned_long_long_int);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmin_545 (void)
{
  extern typeof (fmin (vol_var_unsigned___int128, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_unsigned___int128, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmin_546 (void)
{
  extern typeof (fmin (vol_var_unsigned___int128, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_unsigned___int128, vol_var_unsigned___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmin_547 (void)
{
  extern typeof (fmin (vol_var_unsigned___int128, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_unsigned___int128, vol_var_enum_e);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmin_548 (void)
{
  extern typeof (fmin (vol_var_unsigned___int128, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_unsigned___int128, vol_var__Bool);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmin_549 (void)
{
  extern typeof (fmin (vol_var_unsigned___int128, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_unsigned___int128, vol_var_bit_field);
}
#endif
#if defined HUGE_VAL_F16
static void
test_fmin_550 (void)
{
  extern typeof (fmin (vol_var_enum_e, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_enum_e, vol_var__Float16);
}
#endif
static void
test_fmin_551 (void)
{
  extern typeof (fmin (vol_var_enum_e, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_enum_e, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_fmin_552 (void)
{
  extern typeof (fmin (vol_var_enum_e, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_enum_e, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmin_553 (void)
{
  extern typeof (fmin (vol_var_enum_e, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_enum_e, vol_var__Float32x);
}
#endif
static void
test_fmin_554 (void)
{
  extern typeof (fmin (vol_var_enum_e, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_enum_e, vol_var_double);
}
static void
test_fmin_555 (void)
{
  extern typeof (fmin (vol_var_enum_e, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmin (vol_var_enum_e, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_fmin_556 (void)
{
  extern typeof (fmin (vol_var_enum_e, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmin (vol_var_enum_e, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fmin_557 (void)
{
  extern typeof (fmin (vol_var_enum_e, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmin (vol_var_enum_e, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fmin_558 (void)
{
  extern typeof (fmin (vol_var_enum_e, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmin (vol_var_enum_e, vol_var__Float128);
}
#endif
static void
test_fmin_559 (void)
{
  extern typeof (fmin (vol_var_enum_e, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_enum_e, vol_var_char);
}
static void
test_fmin_560 (void)
{
  extern typeof (fmin (vol_var_enum_e, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_enum_e, vol_var_signed_char);
}
static void
test_fmin_561 (void)
{
  extern typeof (fmin (vol_var_enum_e, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_enum_e, vol_var_unsigned_char);
}
static void
test_fmin_562 (void)
{
  extern typeof (fmin (vol_var_enum_e, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_enum_e, vol_var_short_int);
}
static void
test_fmin_563 (void)
{
  extern typeof (fmin (vol_var_enum_e, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_enum_e, vol_var_unsigned_short_int);
}
static void
test_fmin_564 (void)
{
  extern typeof (fmin (vol_var_enum_e, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_enum_e, vol_var_int);
}
static void
test_fmin_565 (void)
{
  extern typeof (fmin (vol_var_enum_e, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_enum_e, vol_var_unsigned_int);
}
static void
test_fmin_566 (void)
{
  extern typeof (fmin (vol_var_enum_e, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_enum_e, vol_var_long_int);
}
static void
test_fmin_567 (void)
{
  extern typeof (fmin (vol_var_enum_e, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_enum_e, vol_var_unsigned_long_int);
}
static void
test_fmin_568 (void)
{
  extern typeof (fmin (vol_var_enum_e, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_enum_e, vol_var_long_long_int);
}
static void
test_fmin_569 (void)
{
  extern typeof (fmin (vol_var_enum_e, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_enum_e, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fmin_570 (void)
{
  extern typeof (fmin (vol_var_enum_e, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_enum_e, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmin_571 (void)
{
  extern typeof (fmin (vol_var_enum_e, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_enum_e, vol_var_unsigned___int128);
}
#endif
static void
test_fmin_572 (void)
{
  extern typeof (fmin (vol_var_enum_e, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_enum_e, vol_var_enum_e);
}
static void
test_fmin_573 (void)
{
  extern typeof (fmin (vol_var_enum_e, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_enum_e, vol_var__Bool);
}
static void
test_fmin_574 (void)
{
  extern typeof (fmin (vol_var_enum_e, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_enum_e, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_fmin_575 (void)
{
  extern typeof (fmin (vol_var__Bool, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var__Bool, vol_var__Float16);
}
#endif
static void
test_fmin_576 (void)
{
  extern typeof (fmin (vol_var__Bool, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var__Bool, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_fmin_577 (void)
{
  extern typeof (fmin (vol_var__Bool, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var__Bool, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmin_578 (void)
{
  extern typeof (fmin (vol_var__Bool, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var__Bool, vol_var__Float32x);
}
#endif
static void
test_fmin_579 (void)
{
  extern typeof (fmin (vol_var__Bool, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var__Bool, vol_var_double);
}
static void
test_fmin_580 (void)
{
  extern typeof (fmin (vol_var__Bool, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmin (vol_var__Bool, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_fmin_581 (void)
{
  extern typeof (fmin (vol_var__Bool, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmin (vol_var__Bool, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fmin_582 (void)
{
  extern typeof (fmin (vol_var__Bool, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmin (vol_var__Bool, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fmin_583 (void)
{
  extern typeof (fmin (vol_var__Bool, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmin (vol_var__Bool, vol_var__Float128);
}
#endif
static void
test_fmin_584 (void)
{
  extern typeof (fmin (vol_var__Bool, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var__Bool, vol_var_char);
}
static void
test_fmin_585 (void)
{
  extern typeof (fmin (vol_var__Bool, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var__Bool, vol_var_signed_char);
}
static void
test_fmin_586 (void)
{
  extern typeof (fmin (vol_var__Bool, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var__Bool, vol_var_unsigned_char);
}
static void
test_fmin_587 (void)
{
  extern typeof (fmin (vol_var__Bool, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var__Bool, vol_var_short_int);
}
static void
test_fmin_588 (void)
{
  extern typeof (fmin (vol_var__Bool, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var__Bool, vol_var_unsigned_short_int);
}
static void
test_fmin_589 (void)
{
  extern typeof (fmin (vol_var__Bool, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var__Bool, vol_var_int);
}
static void
test_fmin_590 (void)
{
  extern typeof (fmin (vol_var__Bool, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var__Bool, vol_var_unsigned_int);
}
static void
test_fmin_591 (void)
{
  extern typeof (fmin (vol_var__Bool, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var__Bool, vol_var_long_int);
}
static void
test_fmin_592 (void)
{
  extern typeof (fmin (vol_var__Bool, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var__Bool, vol_var_unsigned_long_int);
}
static void
test_fmin_593 (void)
{
  extern typeof (fmin (vol_var__Bool, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var__Bool, vol_var_long_long_int);
}
static void
test_fmin_594 (void)
{
  extern typeof (fmin (vol_var__Bool, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var__Bool, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fmin_595 (void)
{
  extern typeof (fmin (vol_var__Bool, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var__Bool, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmin_596 (void)
{
  extern typeof (fmin (vol_var__Bool, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var__Bool, vol_var_unsigned___int128);
}
#endif
static void
test_fmin_597 (void)
{
  extern typeof (fmin (vol_var__Bool, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var__Bool, vol_var_enum_e);
}
static void
test_fmin_598 (void)
{
  extern typeof (fmin (vol_var__Bool, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var__Bool, vol_var__Bool);
}
static void
test_fmin_599 (void)
{
  extern typeof (fmin (vol_var__Bool, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var__Bool, vol_var_bit_field);
}
#if defined HUGE_VAL_F16
static void
test_fmin_600 (void)
{
  extern typeof (fmin (vol_var_bit_field, vol_var__Float16)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_bit_field, vol_var__Float16);
}
#endif
static void
test_fmin_601 (void)
{
  extern typeof (fmin (vol_var_bit_field, vol_var_float)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_bit_field, vol_var_float);
}
#if defined HUGE_VAL_F32
static void
test_fmin_602 (void)
{
  extern typeof (fmin (vol_var_bit_field, vol_var__Float32)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_bit_field, vol_var__Float32);
}
#endif
#if defined HUGE_VAL_F32X
static void
test_fmin_603 (void)
{
  extern typeof (fmin (vol_var_bit_field, vol_var__Float32x)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_bit_field, vol_var__Float32x);
}
#endif
static void
test_fmin_604 (void)
{
  extern typeof (fmin (vol_var_bit_field, vol_var_double)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_bit_field, vol_var_double);
}
static void
test_fmin_605 (void)
{
  extern typeof (fmin (vol_var_bit_field, vol_var_long_double)) var_long_double __attribute__ ((unused));
  vol_var_long_double = fmin (vol_var_bit_field, vol_var_long_double);
}
#if defined HUGE_VAL_F64
static void
test_fmin_606 (void)
{
  extern typeof (fmin (vol_var_bit_field, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = fmin (vol_var_bit_field, vol_var__Float64);
}
#endif
#if defined HUGE_VAL_F64X
static void
test_fmin_607 (void)
{
  extern typeof (fmin (vol_var_bit_field, vol_var__Float64x)) var__Float64x __attribute__ ((unused));
  vol_var__Float64x = fmin (vol_var_bit_field, vol_var__Float64x);
}
#endif
#if defined HUGE_VAL_F128
static void
test_fmin_608 (void)
{
  extern typeof (fmin (vol_var_bit_field, vol_var__Float128)) var__Float128 __attribute__ ((unused));
  vol_var__Float128 = fmin (vol_var_bit_field, vol_var__Float128);
}
#endif
static void
test_fmin_609 (void)
{
  extern typeof (fmin (vol_var_bit_field, vol_var_char)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_bit_field, vol_var_char);
}
static void
test_fmin_610 (void)
{
  extern typeof (fmin (vol_var_bit_field, vol_var_signed_char)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_bit_field, vol_var_signed_char);
}
static void
test_fmin_611 (void)
{
  extern typeof (fmin (vol_var_bit_field, vol_var_unsigned_char)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_bit_field, vol_var_unsigned_char);
}
static void
test_fmin_612 (void)
{
  extern typeof (fmin (vol_var_bit_field, vol_var_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_bit_field, vol_var_short_int);
}
static void
test_fmin_613 (void)
{
  extern typeof (fmin (vol_var_bit_field, vol_var_unsigned_short_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_bit_field, vol_var_unsigned_short_int);
}
static void
test_fmin_614 (void)
{
  extern typeof (fmin (vol_var_bit_field, vol_var_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_bit_field, vol_var_int);
}
static void
test_fmin_615 (void)
{
  extern typeof (fmin (vol_var_bit_field, vol_var_unsigned_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_bit_field, vol_var_unsigned_int);
}
static void
test_fmin_616 (void)
{
  extern typeof (fmin (vol_var_bit_field, vol_var_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_bit_field, vol_var_long_int);
}
static void
test_fmin_617 (void)
{
  extern typeof (fmin (vol_var_bit_field, vol_var_unsigned_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_bit_field, vol_var_unsigned_long_int);
}
static void
test_fmin_618 (void)
{
  extern typeof (fmin (vol_var_bit_field, vol_var_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_bit_field, vol_var_long_long_int);
}
static void
test_fmin_619 (void)
{
  extern typeof (fmin (vol_var_bit_field, vol_var_unsigned_long_long_int)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_bit_field, vol_var_unsigned_long_long_int);
}
#if defined __SIZEOF_INT128__
static void
test_fmin_620 (void)
{
  extern typeof (fmin (vol_var_bit_field, vol_var___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_bit_field, vol_var___int128);
}
#endif
#if defined __SIZEOF_INT128__
static void
test_fmin_621 (void)
{
  extern typeof (fmin (vol_var_bit_field, vol_var_unsigned___int128)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_bit_field, vol_var_unsigned___int128);
}
#endif
static void
test_fmin_622 (void)
{
  extern typeof (fmin (vol_var_bit_field, vol_var_enum_e)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_bit_field, vol_var_enum_e);
}
static void
test_fmin_623 (void)
{
  extern typeof (fmin (vol_var_bit_field, vol_var__Bool)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_bit_field, vol_var__Bool);
}
static void
test_fmin_624 (void)
{
  extern typeof (fmin (vol_var_bit_field, vol_var_bit_field)) var_double __attribute__ ((unused));
  vol_var_double = fmin (vol_var_bit_field, vol_var_bit_field);
}
static const struct test tests[] =
  {
#if defined HUGE_VAL_F16
    { test_fmin_0, "fmin", "fmin (_Float16, _Float16)", FLT16_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_fmin_1, "fmin", "fmin (_Float16, float)", FLT_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F32
    { test_fmin_2, "fmin", "fmin (_Float16, _Float32)", FLT32_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
    { test_fmin_3, "fmin", "fmin (_Float16, _Float32x)", FLT32X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_fmin_4, "fmin", "fmin (_Float16, double)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_fmin_5, "fmin", "fmin (_Float16, long double)", LDBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F64
    { test_fmin_6, "fmin", "fmin (_Float16, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
    { test_fmin_7, "fmin", "fmin (_Float16, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F16
    { test_fmin_8, "fmin", "fmin (_Float16, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_fmin_9, "fmin", "fmin (_Float16, char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_fmin_10, "fmin", "fmin (_Float16, signed char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_fmin_11, "fmin", "fmin (_Float16, unsigned char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_fmin_12, "fmin", "fmin (_Float16, short int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_fmin_13, "fmin", "fmin (_Float16, unsigned short int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_fmin_14, "fmin", "fmin (_Float16, int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_fmin_15, "fmin", "fmin (_Float16, unsigned int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_fmin_16, "fmin", "fmin (_Float16, long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_fmin_17, "fmin", "fmin (_Float16, unsigned long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_fmin_18, "fmin", "fmin (_Float16, long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_fmin_19, "fmin", "fmin (_Float16, unsigned long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_fmin_20, "fmin", "fmin (_Float16, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_fmin_21, "fmin", "fmin (_Float16, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_fmin_22, "fmin", "fmin (_Float16, enum e)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_fmin_23, "fmin", "fmin (_Float16, _Bool)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_fmin_24, "fmin", "fmin (_Float16, bit_field)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_fmin_25, "fmin", "fmin (float, _Float16)", FLT_MANT_DIG, 0 },
#endif
    { test_fmin_26, "fmin", "fmin (float, float)", FLT_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_fmin_27, "fmin", "fmin (float, _Float32)", FLT32_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmin_28, "fmin", "fmin (float, _Float32x)", FLT32X_MANT_DIG, 0 },
#endif
    { test_fmin_29, "fmin", "fmin (float, double)", DBL_MANT_DIG, 0 },
    { test_fmin_30, "fmin", "fmin (float, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_fmin_31, "fmin", "fmin (float, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fmin_32, "fmin", "fmin (float, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fmin_33, "fmin", "fmin (float, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_fmin_34, "fmin", "fmin (float, char)", DBL_MANT_DIG, 0 },
    { test_fmin_35, "fmin", "fmin (float, signed char)", DBL_MANT_DIG, 0 },
    { test_fmin_36, "fmin", "fmin (float, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fmin_37, "fmin", "fmin (float, short int)", DBL_MANT_DIG, 0 },
    { test_fmin_38, "fmin", "fmin (float, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fmin_39, "fmin", "fmin (float, int)", DBL_MANT_DIG, 0 },
    { test_fmin_40, "fmin", "fmin (float, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fmin_41, "fmin", "fmin (float, long int)", DBL_MANT_DIG, 0 },
    { test_fmin_42, "fmin", "fmin (float, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fmin_43, "fmin", "fmin (float, long long int)", DBL_MANT_DIG, 0 },
    { test_fmin_44, "fmin", "fmin (float, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fmin_45, "fmin", "fmin (float, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmin_46, "fmin", "fmin (float, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fmin_47, "fmin", "fmin (float, enum e)", DBL_MANT_DIG, 0 },
    { test_fmin_48, "fmin", "fmin (float, _Bool)", DBL_MANT_DIG, 0 },
    { test_fmin_49, "fmin", "fmin (float, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F32
    { test_fmin_50, "fmin", "fmin (_Float32, _Float16)", FLT32_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_fmin_51, "fmin", "fmin (_Float32, float)", FLT32_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_fmin_52, "fmin", "fmin (_Float32, _Float32)", FLT32_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
    { test_fmin_53, "fmin", "fmin (_Float32, _Float32x)", FLT32X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_fmin_54, "fmin", "fmin (_Float32, double)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_fmin_55, "fmin", "fmin (_Float32, long double)", LDBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F64
    { test_fmin_56, "fmin", "fmin (_Float32, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
    { test_fmin_57, "fmin", "fmin (_Float32, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F32
    { test_fmin_58, "fmin", "fmin (_Float32, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_fmin_59, "fmin", "fmin (_Float32, char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_fmin_60, "fmin", "fmin (_Float32, signed char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_fmin_61, "fmin", "fmin (_Float32, unsigned char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_fmin_62, "fmin", "fmin (_Float32, short int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_fmin_63, "fmin", "fmin (_Float32, unsigned short int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_fmin_64, "fmin", "fmin (_Float32, int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_fmin_65, "fmin", "fmin (_Float32, unsigned int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_fmin_66, "fmin", "fmin (_Float32, long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_fmin_67, "fmin", "fmin (_Float32, unsigned long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_fmin_68, "fmin", "fmin (_Float32, long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_fmin_69, "fmin", "fmin (_Float32, unsigned long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_fmin_70, "fmin", "fmin (_Float32, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_fmin_71, "fmin", "fmin (_Float32, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_fmin_72, "fmin", "fmin (_Float32, enum e)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_fmin_73, "fmin", "fmin (_Float32, _Bool)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32
    { test_fmin_74, "fmin", "fmin (_Float32, bit_field)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
    { test_fmin_75, "fmin", "fmin (_Float32x, _Float16)", FLT32X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmin_76, "fmin", "fmin (_Float32x, float)", FLT32X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
    { test_fmin_77, "fmin", "fmin (_Float32x, _Float32)", FLT32X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmin_78, "fmin", "fmin (_Float32x, _Float32x)", FLT32X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmin_79, "fmin", "fmin (_Float32x, double)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmin_80, "fmin", "fmin (_Float32x, long double)", LDBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X && defined HUGE_VAL_F64
    { test_fmin_81, "fmin", "fmin (_Float32x, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
    { test_fmin_82, "fmin", "fmin (_Float32x, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
    { test_fmin_83, "fmin", "fmin (_Float32x, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmin_84, "fmin", "fmin (_Float32x, char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmin_85, "fmin", "fmin (_Float32x, signed char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmin_86, "fmin", "fmin (_Float32x, unsigned char)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmin_87, "fmin", "fmin (_Float32x, short int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmin_88, "fmin", "fmin (_Float32x, unsigned short int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmin_89, "fmin", "fmin (_Float32x, int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmin_90, "fmin", "fmin (_Float32x, unsigned int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmin_91, "fmin", "fmin (_Float32x, long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmin_92, "fmin", "fmin (_Float32x, unsigned long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmin_93, "fmin", "fmin (_Float32x, long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmin_94, "fmin", "fmin (_Float32x, unsigned long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_fmin_95, "fmin", "fmin (_Float32x, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_fmin_96, "fmin", "fmin (_Float32x, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmin_97, "fmin", "fmin (_Float32x, enum e)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmin_98, "fmin", "fmin (_Float32x, _Bool)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmin_99, "fmin", "fmin (_Float32x, bit_field)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_fmin_100, "fmin", "fmin (double, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_fmin_101, "fmin", "fmin (double, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_fmin_102, "fmin", "fmin (double, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmin_103, "fmin", "fmin (double, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_fmin_104, "fmin", "fmin (double, double)", DBL_MANT_DIG, 0 },
    { test_fmin_105, "fmin", "fmin (double, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_fmin_106, "fmin", "fmin (double, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fmin_107, "fmin", "fmin (double, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fmin_108, "fmin", "fmin (double, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_fmin_109, "fmin", "fmin (double, char)", DBL_MANT_DIG, 0 },
    { test_fmin_110, "fmin", "fmin (double, signed char)", DBL_MANT_DIG, 0 },
    { test_fmin_111, "fmin", "fmin (double, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fmin_112, "fmin", "fmin (double, short int)", DBL_MANT_DIG, 0 },
    { test_fmin_113, "fmin", "fmin (double, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fmin_114, "fmin", "fmin (double, int)", DBL_MANT_DIG, 0 },
    { test_fmin_115, "fmin", "fmin (double, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fmin_116, "fmin", "fmin (double, long int)", DBL_MANT_DIG, 0 },
    { test_fmin_117, "fmin", "fmin (double, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fmin_118, "fmin", "fmin (double, long long int)", DBL_MANT_DIG, 0 },
    { test_fmin_119, "fmin", "fmin (double, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fmin_120, "fmin", "fmin (double, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmin_121, "fmin", "fmin (double, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fmin_122, "fmin", "fmin (double, enum e)", DBL_MANT_DIG, 0 },
    { test_fmin_123, "fmin", "fmin (double, _Bool)", DBL_MANT_DIG, 0 },
    { test_fmin_124, "fmin", "fmin (double, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_fmin_125, "fmin", "fmin (long double, _Float16)", LDBL_MANT_DIG, 0 },
#endif
    { test_fmin_126, "fmin", "fmin (long double, float)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_fmin_127, "fmin", "fmin (long double, _Float32)", LDBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmin_128, "fmin", "fmin (long double, _Float32x)", LDBL_MANT_DIG, 0 },
#endif
    { test_fmin_129, "fmin", "fmin (long double, double)", LDBL_MANT_DIG, 0 },
    { test_fmin_130, "fmin", "fmin (long double, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_fmin_131, "fmin", "fmin (long double, _Float64)", LDBL_MANT_DIG, 0 },
#endif
#if (LDBL_MANT_DIG != 106) && defined HUGE_VAL_F64X
    { test_fmin_132, "fmin", "fmin (long double, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (LDBL_MANT_DIG != 106) && defined HUGE_VAL_F128
    { test_fmin_133, "fmin", "fmin (long double, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_fmin_134, "fmin", "fmin (long double, char)", LDBL_MANT_DIG, 0 },
    { test_fmin_135, "fmin", "fmin (long double, signed char)", LDBL_MANT_DIG, 0 },
    { test_fmin_136, "fmin", "fmin (long double, unsigned char)", LDBL_MANT_DIG, 0 },
    { test_fmin_137, "fmin", "fmin (long double, short int)", LDBL_MANT_DIG, 0 },
    { test_fmin_138, "fmin", "fmin (long double, unsigned short int)", LDBL_MANT_DIG, 0 },
    { test_fmin_139, "fmin", "fmin (long double, int)", LDBL_MANT_DIG, 0 },
    { test_fmin_140, "fmin", "fmin (long double, unsigned int)", LDBL_MANT_DIG, 0 },
    { test_fmin_141, "fmin", "fmin (long double, long int)", LDBL_MANT_DIG, 0 },
    { test_fmin_142, "fmin", "fmin (long double, unsigned long int)", LDBL_MANT_DIG, 0 },
    { test_fmin_143, "fmin", "fmin (long double, long long int)", LDBL_MANT_DIG, 0 },
    { test_fmin_144, "fmin", "fmin (long double, unsigned long long int)", LDBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fmin_145, "fmin", "fmin (long double, __int128)", LDBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmin_146, "fmin", "fmin (long double, unsigned __int128)", LDBL_MANT_DIG, 0 },
#endif
    { test_fmin_147, "fmin", "fmin (long double, enum e)", LDBL_MANT_DIG, 0 },
    { test_fmin_148, "fmin", "fmin (long double, _Bool)", LDBL_MANT_DIG, 0 },
    { test_fmin_149, "fmin", "fmin (long double, bit_field)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F64
    { test_fmin_150, "fmin", "fmin (_Float64, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_fmin_151, "fmin", "fmin (_Float64, float)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F64
    { test_fmin_152, "fmin", "fmin (_Float64, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X && defined HUGE_VAL_F64
    { test_fmin_153, "fmin", "fmin (_Float64, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_fmin_154, "fmin", "fmin (_Float64, double)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_fmin_155, "fmin", "fmin (_Float64, long double)", LDBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_fmin_156, "fmin", "fmin (_Float64, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
    { test_fmin_157, "fmin", "fmin (_Float64, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F64
    { test_fmin_158, "fmin", "fmin (_Float64, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_fmin_159, "fmin", "fmin (_Float64, char)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_fmin_160, "fmin", "fmin (_Float64, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_fmin_161, "fmin", "fmin (_Float64, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_fmin_162, "fmin", "fmin (_Float64, short int)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_fmin_163, "fmin", "fmin (_Float64, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_fmin_164, "fmin", "fmin (_Float64, int)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_fmin_165, "fmin", "fmin (_Float64, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_fmin_166, "fmin", "fmin (_Float64, long int)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_fmin_167, "fmin", "fmin (_Float64, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_fmin_168, "fmin", "fmin (_Float64, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_fmin_169, "fmin", "fmin (_Float64, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_fmin_170, "fmin", "fmin (_Float64, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_fmin_171, "fmin", "fmin (_Float64, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_fmin_172, "fmin", "fmin (_Float64, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_fmin_173, "fmin", "fmin (_Float64, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64
    { test_fmin_174, "fmin", "fmin (_Float64, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
    { test_fmin_175, "fmin", "fmin (_Float64x, _Float16)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fmin_176, "fmin", "fmin (_Float64x, float)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
    { test_fmin_177, "fmin", "fmin (_Float64x, _Float32)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
    { test_fmin_178, "fmin", "fmin (_Float64x, _Float32x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fmin_179, "fmin", "fmin (_Float64x, double)", FLT64X_MANT_DIG, 0 },
#endif
#if (LDBL_MANT_DIG != 106) && defined HUGE_VAL_F64X
    { test_fmin_180, "fmin", "fmin (_Float64x, long double)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
    { test_fmin_181, "fmin", "fmin (_Float64x, _Float64)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fmin_182, "fmin", "fmin (_Float64x, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
    { test_fmin_183, "fmin", "fmin (_Float64x, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fmin_184, "fmin", "fmin (_Float64x, char)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fmin_185, "fmin", "fmin (_Float64x, signed char)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fmin_186, "fmin", "fmin (_Float64x, unsigned char)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fmin_187, "fmin", "fmin (_Float64x, short int)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fmin_188, "fmin", "fmin (_Float64x, unsigned short int)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fmin_189, "fmin", "fmin (_Float64x, int)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fmin_190, "fmin", "fmin (_Float64x, unsigned int)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fmin_191, "fmin", "fmin (_Float64x, long int)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fmin_192, "fmin", "fmin (_Float64x, unsigned long int)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fmin_193, "fmin", "fmin (_Float64x, long long int)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fmin_194, "fmin", "fmin (_Float64x, unsigned long long int)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_fmin_195, "fmin", "fmin (_Float64x, __int128)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_fmin_196, "fmin", "fmin (_Float64x, unsigned __int128)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fmin_197, "fmin", "fmin (_Float64x, enum e)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fmin_198, "fmin", "fmin (_Float64x, _Bool)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fmin_199, "fmin", "fmin (_Float64x, bit_field)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F16
    { test_fmin_200, "fmin", "fmin (_Float128, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fmin_201, "fmin", "fmin (_Float128, float)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F32
    { test_fmin_202, "fmin", "fmin (_Float128, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
    { test_fmin_203, "fmin", "fmin (_Float128, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fmin_204, "fmin", "fmin (_Float128, double)", FLT128_MANT_DIG, 0 },
#endif
#if (LDBL_MANT_DIG != 106) && defined HUGE_VAL_F128
    { test_fmin_205, "fmin", "fmin (_Float128, long double)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F64
    { test_fmin_206, "fmin", "fmin (_Float128, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
    { test_fmin_207, "fmin", "fmin (_Float128, _Float64x)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fmin_208, "fmin", "fmin (_Float128, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fmin_209, "fmin", "fmin (_Float128, char)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fmin_210, "fmin", "fmin (_Float128, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fmin_211, "fmin", "fmin (_Float128, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fmin_212, "fmin", "fmin (_Float128, short int)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fmin_213, "fmin", "fmin (_Float128, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fmin_214, "fmin", "fmin (_Float128, int)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fmin_215, "fmin", "fmin (_Float128, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fmin_216, "fmin", "fmin (_Float128, long int)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fmin_217, "fmin", "fmin (_Float128, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fmin_218, "fmin", "fmin (_Float128, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fmin_219, "fmin", "fmin (_Float128, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_fmin_220, "fmin", "fmin (_Float128, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_fmin_221, "fmin", "fmin (_Float128, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fmin_222, "fmin", "fmin (_Float128, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fmin_223, "fmin", "fmin (_Float128, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fmin_224, "fmin", "fmin (_Float128, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_fmin_225, "fmin", "fmin (char, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_fmin_226, "fmin", "fmin (char, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_fmin_227, "fmin", "fmin (char, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmin_228, "fmin", "fmin (char, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_fmin_229, "fmin", "fmin (char, double)", DBL_MANT_DIG, 0 },
    { test_fmin_230, "fmin", "fmin (char, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_fmin_231, "fmin", "fmin (char, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fmin_232, "fmin", "fmin (char, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fmin_233, "fmin", "fmin (char, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_fmin_234, "fmin", "fmin (char, char)", DBL_MANT_DIG, 0 },
    { test_fmin_235, "fmin", "fmin (char, signed char)", DBL_MANT_DIG, 0 },
    { test_fmin_236, "fmin", "fmin (char, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fmin_237, "fmin", "fmin (char, short int)", DBL_MANT_DIG, 0 },
    { test_fmin_238, "fmin", "fmin (char, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fmin_239, "fmin", "fmin (char, int)", DBL_MANT_DIG, 0 },
    { test_fmin_240, "fmin", "fmin (char, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fmin_241, "fmin", "fmin (char, long int)", DBL_MANT_DIG, 0 },
    { test_fmin_242, "fmin", "fmin (char, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fmin_243, "fmin", "fmin (char, long long int)", DBL_MANT_DIG, 0 },
    { test_fmin_244, "fmin", "fmin (char, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fmin_245, "fmin", "fmin (char, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmin_246, "fmin", "fmin (char, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fmin_247, "fmin", "fmin (char, enum e)", DBL_MANT_DIG, 0 },
    { test_fmin_248, "fmin", "fmin (char, _Bool)", DBL_MANT_DIG, 0 },
    { test_fmin_249, "fmin", "fmin (char, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_fmin_250, "fmin", "fmin (signed char, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_fmin_251, "fmin", "fmin (signed char, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_fmin_252, "fmin", "fmin (signed char, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmin_253, "fmin", "fmin (signed char, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_fmin_254, "fmin", "fmin (signed char, double)", DBL_MANT_DIG, 0 },
    { test_fmin_255, "fmin", "fmin (signed char, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_fmin_256, "fmin", "fmin (signed char, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fmin_257, "fmin", "fmin (signed char, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fmin_258, "fmin", "fmin (signed char, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_fmin_259, "fmin", "fmin (signed char, char)", DBL_MANT_DIG, 0 },
    { test_fmin_260, "fmin", "fmin (signed char, signed char)", DBL_MANT_DIG, 0 },
    { test_fmin_261, "fmin", "fmin (signed char, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fmin_262, "fmin", "fmin (signed char, short int)", DBL_MANT_DIG, 0 },
    { test_fmin_263, "fmin", "fmin (signed char, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fmin_264, "fmin", "fmin (signed char, int)", DBL_MANT_DIG, 0 },
    { test_fmin_265, "fmin", "fmin (signed char, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fmin_266, "fmin", "fmin (signed char, long int)", DBL_MANT_DIG, 0 },
    { test_fmin_267, "fmin", "fmin (signed char, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fmin_268, "fmin", "fmin (signed char, long long int)", DBL_MANT_DIG, 0 },
    { test_fmin_269, "fmin", "fmin (signed char, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fmin_270, "fmin", "fmin (signed char, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmin_271, "fmin", "fmin (signed char, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fmin_272, "fmin", "fmin (signed char, enum e)", DBL_MANT_DIG, 0 },
    { test_fmin_273, "fmin", "fmin (signed char, _Bool)", DBL_MANT_DIG, 0 },
    { test_fmin_274, "fmin", "fmin (signed char, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_fmin_275, "fmin", "fmin (unsigned char, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_fmin_276, "fmin", "fmin (unsigned char, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_fmin_277, "fmin", "fmin (unsigned char, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmin_278, "fmin", "fmin (unsigned char, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_fmin_279, "fmin", "fmin (unsigned char, double)", DBL_MANT_DIG, 0 },
    { test_fmin_280, "fmin", "fmin (unsigned char, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_fmin_281, "fmin", "fmin (unsigned char, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fmin_282, "fmin", "fmin (unsigned char, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fmin_283, "fmin", "fmin (unsigned char, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_fmin_284, "fmin", "fmin (unsigned char, char)", DBL_MANT_DIG, 0 },
    { test_fmin_285, "fmin", "fmin (unsigned char, signed char)", DBL_MANT_DIG, 0 },
    { test_fmin_286, "fmin", "fmin (unsigned char, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fmin_287, "fmin", "fmin (unsigned char, short int)", DBL_MANT_DIG, 0 },
    { test_fmin_288, "fmin", "fmin (unsigned char, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fmin_289, "fmin", "fmin (unsigned char, int)", DBL_MANT_DIG, 0 },
    { test_fmin_290, "fmin", "fmin (unsigned char, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fmin_291, "fmin", "fmin (unsigned char, long int)", DBL_MANT_DIG, 0 },
    { test_fmin_292, "fmin", "fmin (unsigned char, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fmin_293, "fmin", "fmin (unsigned char, long long int)", DBL_MANT_DIG, 0 },
    { test_fmin_294, "fmin", "fmin (unsigned char, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fmin_295, "fmin", "fmin (unsigned char, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmin_296, "fmin", "fmin (unsigned char, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fmin_297, "fmin", "fmin (unsigned char, enum e)", DBL_MANT_DIG, 0 },
    { test_fmin_298, "fmin", "fmin (unsigned char, _Bool)", DBL_MANT_DIG, 0 },
    { test_fmin_299, "fmin", "fmin (unsigned char, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_fmin_300, "fmin", "fmin (short int, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_fmin_301, "fmin", "fmin (short int, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_fmin_302, "fmin", "fmin (short int, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmin_303, "fmin", "fmin (short int, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_fmin_304, "fmin", "fmin (short int, double)", DBL_MANT_DIG, 0 },
    { test_fmin_305, "fmin", "fmin (short int, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_fmin_306, "fmin", "fmin (short int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fmin_307, "fmin", "fmin (short int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fmin_308, "fmin", "fmin (short int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_fmin_309, "fmin", "fmin (short int, char)", DBL_MANT_DIG, 0 },
    { test_fmin_310, "fmin", "fmin (short int, signed char)", DBL_MANT_DIG, 0 },
    { test_fmin_311, "fmin", "fmin (short int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fmin_312, "fmin", "fmin (short int, short int)", DBL_MANT_DIG, 0 },
    { test_fmin_313, "fmin", "fmin (short int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fmin_314, "fmin", "fmin (short int, int)", DBL_MANT_DIG, 0 },
    { test_fmin_315, "fmin", "fmin (short int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fmin_316, "fmin", "fmin (short int, long int)", DBL_MANT_DIG, 0 },
    { test_fmin_317, "fmin", "fmin (short int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fmin_318, "fmin", "fmin (short int, long long int)", DBL_MANT_DIG, 0 },
    { test_fmin_319, "fmin", "fmin (short int, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fmin_320, "fmin", "fmin (short int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmin_321, "fmin", "fmin (short int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fmin_322, "fmin", "fmin (short int, enum e)", DBL_MANT_DIG, 0 },
    { test_fmin_323, "fmin", "fmin (short int, _Bool)", DBL_MANT_DIG, 0 },
    { test_fmin_324, "fmin", "fmin (short int, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_fmin_325, "fmin", "fmin (unsigned short int, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_fmin_326, "fmin", "fmin (unsigned short int, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_fmin_327, "fmin", "fmin (unsigned short int, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmin_328, "fmin", "fmin (unsigned short int, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_fmin_329, "fmin", "fmin (unsigned short int, double)", DBL_MANT_DIG, 0 },
    { test_fmin_330, "fmin", "fmin (unsigned short int, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_fmin_331, "fmin", "fmin (unsigned short int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fmin_332, "fmin", "fmin (unsigned short int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fmin_333, "fmin", "fmin (unsigned short int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_fmin_334, "fmin", "fmin (unsigned short int, char)", DBL_MANT_DIG, 0 },
    { test_fmin_335, "fmin", "fmin (unsigned short int, signed char)", DBL_MANT_DIG, 0 },
    { test_fmin_336, "fmin", "fmin (unsigned short int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fmin_337, "fmin", "fmin (unsigned short int, short int)", DBL_MANT_DIG, 0 },
    { test_fmin_338, "fmin", "fmin (unsigned short int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fmin_339, "fmin", "fmin (unsigned short int, int)", DBL_MANT_DIG, 0 },
    { test_fmin_340, "fmin", "fmin (unsigned short int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fmin_341, "fmin", "fmin (unsigned short int, long int)", DBL_MANT_DIG, 0 },
    { test_fmin_342, "fmin", "fmin (unsigned short int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fmin_343, "fmin", "fmin (unsigned short int, long long int)", DBL_MANT_DIG, 0 },
    { test_fmin_344, "fmin", "fmin (unsigned short int, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fmin_345, "fmin", "fmin (unsigned short int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmin_346, "fmin", "fmin (unsigned short int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fmin_347, "fmin", "fmin (unsigned short int, enum e)", DBL_MANT_DIG, 0 },
    { test_fmin_348, "fmin", "fmin (unsigned short int, _Bool)", DBL_MANT_DIG, 0 },
    { test_fmin_349, "fmin", "fmin (unsigned short int, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_fmin_350, "fmin", "fmin (int, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_fmin_351, "fmin", "fmin (int, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_fmin_352, "fmin", "fmin (int, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmin_353, "fmin", "fmin (int, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_fmin_354, "fmin", "fmin (int, double)", DBL_MANT_DIG, 0 },
    { test_fmin_355, "fmin", "fmin (int, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_fmin_356, "fmin", "fmin (int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fmin_357, "fmin", "fmin (int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fmin_358, "fmin", "fmin (int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_fmin_359, "fmin", "fmin (int, char)", DBL_MANT_DIG, 0 },
    { test_fmin_360, "fmin", "fmin (int, signed char)", DBL_MANT_DIG, 0 },
    { test_fmin_361, "fmin", "fmin (int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fmin_362, "fmin", "fmin (int, short int)", DBL_MANT_DIG, 0 },
    { test_fmin_363, "fmin", "fmin (int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fmin_364, "fmin", "fmin (int, int)", DBL_MANT_DIG, 0 },
    { test_fmin_365, "fmin", "fmin (int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fmin_366, "fmin", "fmin (int, long int)", DBL_MANT_DIG, 0 },
    { test_fmin_367, "fmin", "fmin (int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fmin_368, "fmin", "fmin (int, long long int)", DBL_MANT_DIG, 0 },
    { test_fmin_369, "fmin", "fmin (int, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fmin_370, "fmin", "fmin (int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmin_371, "fmin", "fmin (int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fmin_372, "fmin", "fmin (int, enum e)", DBL_MANT_DIG, 0 },
    { test_fmin_373, "fmin", "fmin (int, _Bool)", DBL_MANT_DIG, 0 },
    { test_fmin_374, "fmin", "fmin (int, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_fmin_375, "fmin", "fmin (unsigned int, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_fmin_376, "fmin", "fmin (unsigned int, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_fmin_377, "fmin", "fmin (unsigned int, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmin_378, "fmin", "fmin (unsigned int, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_fmin_379, "fmin", "fmin (unsigned int, double)", DBL_MANT_DIG, 0 },
    { test_fmin_380, "fmin", "fmin (unsigned int, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_fmin_381, "fmin", "fmin (unsigned int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fmin_382, "fmin", "fmin (unsigned int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fmin_383, "fmin", "fmin (unsigned int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_fmin_384, "fmin", "fmin (unsigned int, char)", DBL_MANT_DIG, 0 },
    { test_fmin_385, "fmin", "fmin (unsigned int, signed char)", DBL_MANT_DIG, 0 },
    { test_fmin_386, "fmin", "fmin (unsigned int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fmin_387, "fmin", "fmin (unsigned int, short int)", DBL_MANT_DIG, 0 },
    { test_fmin_388, "fmin", "fmin (unsigned int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fmin_389, "fmin", "fmin (unsigned int, int)", DBL_MANT_DIG, 0 },
    { test_fmin_390, "fmin", "fmin (unsigned int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fmin_391, "fmin", "fmin (unsigned int, long int)", DBL_MANT_DIG, 0 },
    { test_fmin_392, "fmin", "fmin (unsigned int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fmin_393, "fmin", "fmin (unsigned int, long long int)", DBL_MANT_DIG, 0 },
    { test_fmin_394, "fmin", "fmin (unsigned int, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fmin_395, "fmin", "fmin (unsigned int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmin_396, "fmin", "fmin (unsigned int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fmin_397, "fmin", "fmin (unsigned int, enum e)", DBL_MANT_DIG, 0 },
    { test_fmin_398, "fmin", "fmin (unsigned int, _Bool)", DBL_MANT_DIG, 0 },
    { test_fmin_399, "fmin", "fmin (unsigned int, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_fmin_400, "fmin", "fmin (long int, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_fmin_401, "fmin", "fmin (long int, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_fmin_402, "fmin", "fmin (long int, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmin_403, "fmin", "fmin (long int, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_fmin_404, "fmin", "fmin (long int, double)", DBL_MANT_DIG, 0 },
    { test_fmin_405, "fmin", "fmin (long int, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_fmin_406, "fmin", "fmin (long int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fmin_407, "fmin", "fmin (long int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fmin_408, "fmin", "fmin (long int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_fmin_409, "fmin", "fmin (long int, char)", DBL_MANT_DIG, 0 },
    { test_fmin_410, "fmin", "fmin (long int, signed char)", DBL_MANT_DIG, 0 },
    { test_fmin_411, "fmin", "fmin (long int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fmin_412, "fmin", "fmin (long int, short int)", DBL_MANT_DIG, 0 },
    { test_fmin_413, "fmin", "fmin (long int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fmin_414, "fmin", "fmin (long int, int)", DBL_MANT_DIG, 0 },
    { test_fmin_415, "fmin", "fmin (long int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fmin_416, "fmin", "fmin (long int, long int)", DBL_MANT_DIG, 0 },
    { test_fmin_417, "fmin", "fmin (long int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fmin_418, "fmin", "fmin (long int, long long int)", DBL_MANT_DIG, 0 },
    { test_fmin_419, "fmin", "fmin (long int, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fmin_420, "fmin", "fmin (long int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmin_421, "fmin", "fmin (long int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fmin_422, "fmin", "fmin (long int, enum e)", DBL_MANT_DIG, 0 },
    { test_fmin_423, "fmin", "fmin (long int, _Bool)", DBL_MANT_DIG, 0 },
    { test_fmin_424, "fmin", "fmin (long int, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_fmin_425, "fmin", "fmin (unsigned long int, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_fmin_426, "fmin", "fmin (unsigned long int, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_fmin_427, "fmin", "fmin (unsigned long int, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmin_428, "fmin", "fmin (unsigned long int, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_fmin_429, "fmin", "fmin (unsigned long int, double)", DBL_MANT_DIG, 0 },
    { test_fmin_430, "fmin", "fmin (unsigned long int, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_fmin_431, "fmin", "fmin (unsigned long int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fmin_432, "fmin", "fmin (unsigned long int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fmin_433, "fmin", "fmin (unsigned long int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_fmin_434, "fmin", "fmin (unsigned long int, char)", DBL_MANT_DIG, 0 },
    { test_fmin_435, "fmin", "fmin (unsigned long int, signed char)", DBL_MANT_DIG, 0 },
    { test_fmin_436, "fmin", "fmin (unsigned long int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fmin_437, "fmin", "fmin (unsigned long int, short int)", DBL_MANT_DIG, 0 },
    { test_fmin_438, "fmin", "fmin (unsigned long int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fmin_439, "fmin", "fmin (unsigned long int, int)", DBL_MANT_DIG, 0 },
    { test_fmin_440, "fmin", "fmin (unsigned long int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fmin_441, "fmin", "fmin (unsigned long int, long int)", DBL_MANT_DIG, 0 },
    { test_fmin_442, "fmin", "fmin (unsigned long int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fmin_443, "fmin", "fmin (unsigned long int, long long int)", DBL_MANT_DIG, 0 },
    { test_fmin_444, "fmin", "fmin (unsigned long int, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fmin_445, "fmin", "fmin (unsigned long int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmin_446, "fmin", "fmin (unsigned long int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fmin_447, "fmin", "fmin (unsigned long int, enum e)", DBL_MANT_DIG, 0 },
    { test_fmin_448, "fmin", "fmin (unsigned long int, _Bool)", DBL_MANT_DIG, 0 },
    { test_fmin_449, "fmin", "fmin (unsigned long int, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_fmin_450, "fmin", "fmin (long long int, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_fmin_451, "fmin", "fmin (long long int, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_fmin_452, "fmin", "fmin (long long int, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmin_453, "fmin", "fmin (long long int, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_fmin_454, "fmin", "fmin (long long int, double)", DBL_MANT_DIG, 0 },
    { test_fmin_455, "fmin", "fmin (long long int, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_fmin_456, "fmin", "fmin (long long int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fmin_457, "fmin", "fmin (long long int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fmin_458, "fmin", "fmin (long long int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_fmin_459, "fmin", "fmin (long long int, char)", DBL_MANT_DIG, 0 },
    { test_fmin_460, "fmin", "fmin (long long int, signed char)", DBL_MANT_DIG, 0 },
    { test_fmin_461, "fmin", "fmin (long long int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fmin_462, "fmin", "fmin (long long int, short int)", DBL_MANT_DIG, 0 },
    { test_fmin_463, "fmin", "fmin (long long int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fmin_464, "fmin", "fmin (long long int, int)", DBL_MANT_DIG, 0 },
    { test_fmin_465, "fmin", "fmin (long long int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fmin_466, "fmin", "fmin (long long int, long int)", DBL_MANT_DIG, 0 },
    { test_fmin_467, "fmin", "fmin (long long int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fmin_468, "fmin", "fmin (long long int, long long int)", DBL_MANT_DIG, 0 },
    { test_fmin_469, "fmin", "fmin (long long int, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fmin_470, "fmin", "fmin (long long int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmin_471, "fmin", "fmin (long long int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fmin_472, "fmin", "fmin (long long int, enum e)", DBL_MANT_DIG, 0 },
    { test_fmin_473, "fmin", "fmin (long long int, _Bool)", DBL_MANT_DIG, 0 },
    { test_fmin_474, "fmin", "fmin (long long int, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_fmin_475, "fmin", "fmin (unsigned long long int, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_fmin_476, "fmin", "fmin (unsigned long long int, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_fmin_477, "fmin", "fmin (unsigned long long int, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmin_478, "fmin", "fmin (unsigned long long int, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_fmin_479, "fmin", "fmin (unsigned long long int, double)", DBL_MANT_DIG, 0 },
    { test_fmin_480, "fmin", "fmin (unsigned long long int, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_fmin_481, "fmin", "fmin (unsigned long long int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fmin_482, "fmin", "fmin (unsigned long long int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fmin_483, "fmin", "fmin (unsigned long long int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_fmin_484, "fmin", "fmin (unsigned long long int, char)", DBL_MANT_DIG, 0 },
    { test_fmin_485, "fmin", "fmin (unsigned long long int, signed char)", DBL_MANT_DIG, 0 },
    { test_fmin_486, "fmin", "fmin (unsigned long long int, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fmin_487, "fmin", "fmin (unsigned long long int, short int)", DBL_MANT_DIG, 0 },
    { test_fmin_488, "fmin", "fmin (unsigned long long int, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fmin_489, "fmin", "fmin (unsigned long long int, int)", DBL_MANT_DIG, 0 },
    { test_fmin_490, "fmin", "fmin (unsigned long long int, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fmin_491, "fmin", "fmin (unsigned long long int, long int)", DBL_MANT_DIG, 0 },
    { test_fmin_492, "fmin", "fmin (unsigned long long int, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fmin_493, "fmin", "fmin (unsigned long long int, long long int)", DBL_MANT_DIG, 0 },
    { test_fmin_494, "fmin", "fmin (unsigned long long int, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fmin_495, "fmin", "fmin (unsigned long long int, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmin_496, "fmin", "fmin (unsigned long long int, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fmin_497, "fmin", "fmin (unsigned long long int, enum e)", DBL_MANT_DIG, 0 },
    { test_fmin_498, "fmin", "fmin (unsigned long long int, _Bool)", DBL_MANT_DIG, 0 },
    { test_fmin_499, "fmin", "fmin (unsigned long long int, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_fmin_500, "fmin", "fmin (__int128, _Float16)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmin_501, "fmin", "fmin (__int128, float)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_fmin_502, "fmin", "fmin (__int128, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_fmin_503, "fmin", "fmin (__int128, _Float32x)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmin_504, "fmin", "fmin (__int128, double)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmin_505, "fmin", "fmin (__int128, long double)", LDBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_fmin_506, "fmin", "fmin (__int128, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_fmin_507, "fmin", "fmin (__int128, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_fmin_508, "fmin", "fmin (__int128, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmin_509, "fmin", "fmin (__int128, char)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmin_510, "fmin", "fmin (__int128, signed char)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmin_511, "fmin", "fmin (__int128, unsigned char)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmin_512, "fmin", "fmin (__int128, short int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmin_513, "fmin", "fmin (__int128, unsigned short int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmin_514, "fmin", "fmin (__int128, int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmin_515, "fmin", "fmin (__int128, unsigned int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmin_516, "fmin", "fmin (__int128, long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmin_517, "fmin", "fmin (__int128, unsigned long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmin_518, "fmin", "fmin (__int128, long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmin_519, "fmin", "fmin (__int128, unsigned long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmin_520, "fmin", "fmin (__int128, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmin_521, "fmin", "fmin (__int128, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmin_522, "fmin", "fmin (__int128, enum e)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmin_523, "fmin", "fmin (__int128, _Bool)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmin_524, "fmin", "fmin (__int128, bit_field)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_fmin_525, "fmin", "fmin (unsigned __int128, _Float16)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmin_526, "fmin", "fmin (unsigned __int128, float)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_fmin_527, "fmin", "fmin (unsigned __int128, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_fmin_528, "fmin", "fmin (unsigned __int128, _Float32x)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmin_529, "fmin", "fmin (unsigned __int128, double)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmin_530, "fmin", "fmin (unsigned __int128, long double)", LDBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_fmin_531, "fmin", "fmin (unsigned __int128, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_fmin_532, "fmin", "fmin (unsigned __int128, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_fmin_533, "fmin", "fmin (unsigned __int128, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmin_534, "fmin", "fmin (unsigned __int128, char)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmin_535, "fmin", "fmin (unsigned __int128, signed char)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmin_536, "fmin", "fmin (unsigned __int128, unsigned char)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmin_537, "fmin", "fmin (unsigned __int128, short int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmin_538, "fmin", "fmin (unsigned __int128, unsigned short int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmin_539, "fmin", "fmin (unsigned __int128, int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmin_540, "fmin", "fmin (unsigned __int128, unsigned int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmin_541, "fmin", "fmin (unsigned __int128, long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmin_542, "fmin", "fmin (unsigned __int128, unsigned long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmin_543, "fmin", "fmin (unsigned __int128, long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmin_544, "fmin", "fmin (unsigned __int128, unsigned long long int)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmin_545, "fmin", "fmin (unsigned __int128, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmin_546, "fmin", "fmin (unsigned __int128, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmin_547, "fmin", "fmin (unsigned __int128, enum e)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmin_548, "fmin", "fmin (unsigned __int128, _Bool)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmin_549, "fmin", "fmin (unsigned __int128, bit_field)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F16
    { test_fmin_550, "fmin", "fmin (enum e, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_fmin_551, "fmin", "fmin (enum e, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_fmin_552, "fmin", "fmin (enum e, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmin_553, "fmin", "fmin (enum e, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_fmin_554, "fmin", "fmin (enum e, double)", DBL_MANT_DIG, 0 },
    { test_fmin_555, "fmin", "fmin (enum e, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_fmin_556, "fmin", "fmin (enum e, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fmin_557, "fmin", "fmin (enum e, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fmin_558, "fmin", "fmin (enum e, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_fmin_559, "fmin", "fmin (enum e, char)", DBL_MANT_DIG, 0 },
    { test_fmin_560, "fmin", "fmin (enum e, signed char)", DBL_MANT_DIG, 0 },
    { test_fmin_561, "fmin", "fmin (enum e, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fmin_562, "fmin", "fmin (enum e, short int)", DBL_MANT_DIG, 0 },
    { test_fmin_563, "fmin", "fmin (enum e, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fmin_564, "fmin", "fmin (enum e, int)", DBL_MANT_DIG, 0 },
    { test_fmin_565, "fmin", "fmin (enum e, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fmin_566, "fmin", "fmin (enum e, long int)", DBL_MANT_DIG, 0 },
    { test_fmin_567, "fmin", "fmin (enum e, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fmin_568, "fmin", "fmin (enum e, long long int)", DBL_MANT_DIG, 0 },
    { test_fmin_569, "fmin", "fmin (enum e, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fmin_570, "fmin", "fmin (enum e, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmin_571, "fmin", "fmin (enum e, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fmin_572, "fmin", "fmin (enum e, enum e)", DBL_MANT_DIG, 0 },
    { test_fmin_573, "fmin", "fmin (enum e, _Bool)", DBL_MANT_DIG, 0 },
    { test_fmin_574, "fmin", "fmin (enum e, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_fmin_575, "fmin", "fmin (_Bool, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_fmin_576, "fmin", "fmin (_Bool, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_fmin_577, "fmin", "fmin (_Bool, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmin_578, "fmin", "fmin (_Bool, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_fmin_579, "fmin", "fmin (_Bool, double)", DBL_MANT_DIG, 0 },
    { test_fmin_580, "fmin", "fmin (_Bool, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_fmin_581, "fmin", "fmin (_Bool, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fmin_582, "fmin", "fmin (_Bool, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fmin_583, "fmin", "fmin (_Bool, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_fmin_584, "fmin", "fmin (_Bool, char)", DBL_MANT_DIG, 0 },
    { test_fmin_585, "fmin", "fmin (_Bool, signed char)", DBL_MANT_DIG, 0 },
    { test_fmin_586, "fmin", "fmin (_Bool, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fmin_587, "fmin", "fmin (_Bool, short int)", DBL_MANT_DIG, 0 },
    { test_fmin_588, "fmin", "fmin (_Bool, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fmin_589, "fmin", "fmin (_Bool, int)", DBL_MANT_DIG, 0 },
    { test_fmin_590, "fmin", "fmin (_Bool, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fmin_591, "fmin", "fmin (_Bool, long int)", DBL_MANT_DIG, 0 },
    { test_fmin_592, "fmin", "fmin (_Bool, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fmin_593, "fmin", "fmin (_Bool, long long int)", DBL_MANT_DIG, 0 },
    { test_fmin_594, "fmin", "fmin (_Bool, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fmin_595, "fmin", "fmin (_Bool, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmin_596, "fmin", "fmin (_Bool, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fmin_597, "fmin", "fmin (_Bool, enum e)", DBL_MANT_DIG, 0 },
    { test_fmin_598, "fmin", "fmin (_Bool, _Bool)", DBL_MANT_DIG, 0 },
    { test_fmin_599, "fmin", "fmin (_Bool, bit_field)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F16
    { test_fmin_600, "fmin", "fmin (bit_field, _Float16)", DBL_MANT_DIG, 0 },
#endif
    { test_fmin_601, "fmin", "fmin (bit_field, float)", DBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F32
    { test_fmin_602, "fmin", "fmin (bit_field, _Float32)", DBL_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F32X
    { test_fmin_603, "fmin", "fmin (bit_field, _Float32x)", DBL_MANT_DIG, 0 },
#endif
    { test_fmin_604, "fmin", "fmin (bit_field, double)", DBL_MANT_DIG, 0 },
    { test_fmin_605, "fmin", "fmin (bit_field, long double)", LDBL_MANT_DIG, 0 },
#if defined HUGE_VAL_F64
    { test_fmin_606, "fmin", "fmin (bit_field, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F64X
    { test_fmin_607, "fmin", "fmin (bit_field, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if defined HUGE_VAL_F128
    { test_fmin_608, "fmin", "fmin (bit_field, _Float128)", FLT128_MANT_DIG, 0 },
#endif
    { test_fmin_609, "fmin", "fmin (bit_field, char)", DBL_MANT_DIG, 0 },
    { test_fmin_610, "fmin", "fmin (bit_field, signed char)", DBL_MANT_DIG, 0 },
    { test_fmin_611, "fmin", "fmin (bit_field, unsigned char)", DBL_MANT_DIG, 0 },
    { test_fmin_612, "fmin", "fmin (bit_field, short int)", DBL_MANT_DIG, 0 },
    { test_fmin_613, "fmin", "fmin (bit_field, unsigned short int)", DBL_MANT_DIG, 0 },
    { test_fmin_614, "fmin", "fmin (bit_field, int)", DBL_MANT_DIG, 0 },
    { test_fmin_615, "fmin", "fmin (bit_field, unsigned int)", DBL_MANT_DIG, 0 },
    { test_fmin_616, "fmin", "fmin (bit_field, long int)", DBL_MANT_DIG, 0 },
    { test_fmin_617, "fmin", "fmin (bit_field, unsigned long int)", DBL_MANT_DIG, 0 },
    { test_fmin_618, "fmin", "fmin (bit_field, long long int)", DBL_MANT_DIG, 0 },
    { test_fmin_619, "fmin", "fmin (bit_field, unsigned long long int)", DBL_MANT_DIG, 0 },
#if defined __SIZEOF_INT128__
    { test_fmin_620, "fmin", "fmin (bit_field, __int128)", DBL_MANT_DIG, 0 },
#endif
#if defined __SIZEOF_INT128__
    { test_fmin_621, "fmin", "fmin (bit_field, unsigned __int128)", DBL_MANT_DIG, 0 },
#endif
    { test_fmin_622, "fmin", "fmin (bit_field, enum e)", DBL_MANT_DIG, 0 },
    { test_fmin_623, "fmin", "fmin (bit_field, _Bool)", DBL_MANT_DIG, 0 },
    { test_fmin_624, "fmin", "fmin (bit_field, bit_field)", DBL_MANT_DIG, 0 },
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
