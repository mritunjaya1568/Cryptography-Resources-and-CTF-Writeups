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
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
_Float16
(f16divf32) (_Float32 arg0 __attribute__ ((unused)), _Float32 arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT32_MANT_DIG;
  called_func_name = "f16div";
  return 0;
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
_Float16
(f16divf32x) (_Float32x arg0 __attribute__ ((unused)), _Float32x arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT32X_MANT_DIG;
  called_func_name = "f16div";
  return 0;
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
_Float16
(f16divf64) (_Float64 arg0 __attribute__ ((unused)), _Float64 arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT64_MANT_DIG;
  called_func_name = "f16div";
  return 0;
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
_Float16
(f16divf64x) (_Float64x arg0 __attribute__ ((unused)), _Float64x arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT64X_MANT_DIG;
  called_func_name = "f16div";
  return 0;
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
_Float16
(f16divf128) (_Float128 arg0 __attribute__ ((unused)), _Float128 arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT128_MANT_DIG;
  called_func_name = "f16div";
  return 0;
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f16div_0 (void)
{
  extern typeof (f16div (vol_var__Float16, vol_var__Float16)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Float16, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32
static void
test_f16div_1 (void)
{
  extern typeof (f16div (vol_var__Float16, vol_var__Float32)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Float16, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
static void
test_f16div_2 (void)
{
  extern typeof (f16div (vol_var__Float16, vol_var__Float32x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Float16, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64
static void
test_f16div_3 (void)
{
  extern typeof (f16div (vol_var__Float16, vol_var__Float64)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Float16, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
static void
test_f16div_4 (void)
{
  extern typeof (f16div (vol_var__Float16, vol_var__Float64x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Float16, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F16
static void
test_f16div_5 (void)
{
  extern typeof (f16div (vol_var__Float16, vol_var__Float128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Float16, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f16div_6 (void)
{
  extern typeof (f16div (vol_var__Float16, vol_var_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Float16, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f16div_7 (void)
{
  extern typeof (f16div (vol_var__Float16, vol_var_signed_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Float16, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f16div_8 (void)
{
  extern typeof (f16div (vol_var__Float16, vol_var_unsigned_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Float16, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f16div_9 (void)
{
  extern typeof (f16div (vol_var__Float16, vol_var_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Float16, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f16div_10 (void)
{
  extern typeof (f16div (vol_var__Float16, vol_var_unsigned_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Float16, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f16div_11 (void)
{
  extern typeof (f16div (vol_var__Float16, vol_var_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Float16, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f16div_12 (void)
{
  extern typeof (f16div (vol_var__Float16, vol_var_unsigned_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Float16, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f16div_13 (void)
{
  extern typeof (f16div (vol_var__Float16, vol_var_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Float16, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f16div_14 (void)
{
  extern typeof (f16div (vol_var__Float16, vol_var_unsigned_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Float16, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f16div_15 (void)
{
  extern typeof (f16div (vol_var__Float16, vol_var_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Float16, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f16div_16 (void)
{
  extern typeof (f16div (vol_var__Float16, vol_var_unsigned_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Float16, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_f16div_17 (void)
{
  extern typeof (f16div (vol_var__Float16, vol_var___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Float16, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_f16div_18 (void)
{
  extern typeof (f16div (vol_var__Float16, vol_var_unsigned___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Float16, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f16div_19 (void)
{
  extern typeof (f16div (vol_var__Float16, vol_var_enum_e)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Float16, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f16div_20 (void)
{
  extern typeof (f16div (vol_var__Float16, vol_var__Bool)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Float16, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f16div_21 (void)
{
  extern typeof (f16div (vol_var__Float16, vol_var_bit_field)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Float16, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32
static void
test_f16div_22 (void)
{
  extern typeof (f16div (vol_var__Float32, vol_var__Float16)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Float32, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f16div_23 (void)
{
  extern typeof (f16div (vol_var__Float32, vol_var__Float32)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Float32, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
static void
test_f16div_24 (void)
{
  extern typeof (f16div (vol_var__Float32, vol_var__Float32x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Float32, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64
static void
test_f16div_25 (void)
{
  extern typeof (f16div (vol_var__Float32, vol_var__Float64)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Float32, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
static void
test_f16div_26 (void)
{
  extern typeof (f16div (vol_var__Float32, vol_var__Float64x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Float32, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32
static void
test_f16div_27 (void)
{
  extern typeof (f16div (vol_var__Float32, vol_var__Float128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Float32, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f16div_28 (void)
{
  extern typeof (f16div (vol_var__Float32, vol_var_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Float32, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f16div_29 (void)
{
  extern typeof (f16div (vol_var__Float32, vol_var_signed_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Float32, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f16div_30 (void)
{
  extern typeof (f16div (vol_var__Float32, vol_var_unsigned_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Float32, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f16div_31 (void)
{
  extern typeof (f16div (vol_var__Float32, vol_var_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Float32, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f16div_32 (void)
{
  extern typeof (f16div (vol_var__Float32, vol_var_unsigned_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Float32, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f16div_33 (void)
{
  extern typeof (f16div (vol_var__Float32, vol_var_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Float32, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f16div_34 (void)
{
  extern typeof (f16div (vol_var__Float32, vol_var_unsigned_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Float32, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f16div_35 (void)
{
  extern typeof (f16div (vol_var__Float32, vol_var_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Float32, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f16div_36 (void)
{
  extern typeof (f16div (vol_var__Float32, vol_var_unsigned_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Float32, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f16div_37 (void)
{
  extern typeof (f16div (vol_var__Float32, vol_var_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Float32, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f16div_38 (void)
{
  extern typeof (f16div (vol_var__Float32, vol_var_unsigned_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Float32, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_f16div_39 (void)
{
  extern typeof (f16div (vol_var__Float32, vol_var___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Float32, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_f16div_40 (void)
{
  extern typeof (f16div (vol_var__Float32, vol_var_unsigned___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Float32, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f16div_41 (void)
{
  extern typeof (f16div (vol_var__Float32, vol_var_enum_e)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Float32, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f16div_42 (void)
{
  extern typeof (f16div (vol_var__Float32, vol_var__Bool)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Float32, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f16div_43 (void)
{
  extern typeof (f16div (vol_var__Float32, vol_var_bit_field)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Float32, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
static void
test_f16div_44 (void)
{
  extern typeof (f16div (vol_var__Float32x, vol_var__Float16)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Float32x, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
static void
test_f16div_45 (void)
{
  extern typeof (f16div (vol_var__Float32x, vol_var__Float32)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Float32x, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f16div_46 (void)
{
  extern typeof (f16div (vol_var__Float32x, vol_var__Float32x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Float32x, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64
static void
test_f16div_47 (void)
{
  extern typeof (f16div (vol_var__Float32x, vol_var__Float64)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Float32x, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
static void
test_f16div_48 (void)
{
  extern typeof (f16div (vol_var__Float32x, vol_var__Float64x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Float32x, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
static void
test_f16div_49 (void)
{
  extern typeof (f16div (vol_var__Float32x, vol_var__Float128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Float32x, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f16div_50 (void)
{
  extern typeof (f16div (vol_var__Float32x, vol_var_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Float32x, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f16div_51 (void)
{
  extern typeof (f16div (vol_var__Float32x, vol_var_signed_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Float32x, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f16div_52 (void)
{
  extern typeof (f16div (vol_var__Float32x, vol_var_unsigned_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Float32x, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f16div_53 (void)
{
  extern typeof (f16div (vol_var__Float32x, vol_var_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Float32x, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f16div_54 (void)
{
  extern typeof (f16div (vol_var__Float32x, vol_var_unsigned_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Float32x, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f16div_55 (void)
{
  extern typeof (f16div (vol_var__Float32x, vol_var_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Float32x, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f16div_56 (void)
{
  extern typeof (f16div (vol_var__Float32x, vol_var_unsigned_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Float32x, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f16div_57 (void)
{
  extern typeof (f16div (vol_var__Float32x, vol_var_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Float32x, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f16div_58 (void)
{
  extern typeof (f16div (vol_var__Float32x, vol_var_unsigned_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Float32x, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f16div_59 (void)
{
  extern typeof (f16div (vol_var__Float32x, vol_var_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Float32x, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f16div_60 (void)
{
  extern typeof (f16div (vol_var__Float32x, vol_var_unsigned_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Float32x, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_f16div_61 (void)
{
  extern typeof (f16div (vol_var__Float32x, vol_var___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Float32x, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_f16div_62 (void)
{
  extern typeof (f16div (vol_var__Float32x, vol_var_unsigned___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Float32x, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f16div_63 (void)
{
  extern typeof (f16div (vol_var__Float32x, vol_var_enum_e)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Float32x, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f16div_64 (void)
{
  extern typeof (f16div (vol_var__Float32x, vol_var__Bool)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Float32x, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f16div_65 (void)
{
  extern typeof (f16div (vol_var__Float32x, vol_var_bit_field)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Float32x, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64
static void
test_f16div_66 (void)
{
  extern typeof (f16div (vol_var__Float64, vol_var__Float16)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Float64, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64
static void
test_f16div_67 (void)
{
  extern typeof (f16div (vol_var__Float64, vol_var__Float32)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Float64, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64
static void
test_f16div_68 (void)
{
  extern typeof (f16div (vol_var__Float64, vol_var__Float32x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Float64, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f16div_69 (void)
{
  extern typeof (f16div (vol_var__Float64, vol_var__Float64)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Float64, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
static void
test_f16div_70 (void)
{
  extern typeof (f16div (vol_var__Float64, vol_var__Float64x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Float64, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64
static void
test_f16div_71 (void)
{
  extern typeof (f16div (vol_var__Float64, vol_var__Float128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Float64, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f16div_72 (void)
{
  extern typeof (f16div (vol_var__Float64, vol_var_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Float64, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f16div_73 (void)
{
  extern typeof (f16div (vol_var__Float64, vol_var_signed_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Float64, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f16div_74 (void)
{
  extern typeof (f16div (vol_var__Float64, vol_var_unsigned_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Float64, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f16div_75 (void)
{
  extern typeof (f16div (vol_var__Float64, vol_var_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Float64, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f16div_76 (void)
{
  extern typeof (f16div (vol_var__Float64, vol_var_unsigned_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Float64, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f16div_77 (void)
{
  extern typeof (f16div (vol_var__Float64, vol_var_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Float64, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f16div_78 (void)
{
  extern typeof (f16div (vol_var__Float64, vol_var_unsigned_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Float64, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f16div_79 (void)
{
  extern typeof (f16div (vol_var__Float64, vol_var_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Float64, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f16div_80 (void)
{
  extern typeof (f16div (vol_var__Float64, vol_var_unsigned_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Float64, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f16div_81 (void)
{
  extern typeof (f16div (vol_var__Float64, vol_var_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Float64, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f16div_82 (void)
{
  extern typeof (f16div (vol_var__Float64, vol_var_unsigned_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Float64, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_f16div_83 (void)
{
  extern typeof (f16div (vol_var__Float64, vol_var___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Float64, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_f16div_84 (void)
{
  extern typeof (f16div (vol_var__Float64, vol_var_unsigned___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Float64, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f16div_85 (void)
{
  extern typeof (f16div (vol_var__Float64, vol_var_enum_e)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Float64, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f16div_86 (void)
{
  extern typeof (f16div (vol_var__Float64, vol_var__Bool)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Float64, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f16div_87 (void)
{
  extern typeof (f16div (vol_var__Float64, vol_var_bit_field)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Float64, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
static void
test_f16div_88 (void)
{
  extern typeof (f16div (vol_var__Float64x, vol_var__Float16)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Float64x, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
static void
test_f16div_89 (void)
{
  extern typeof (f16div (vol_var__Float64x, vol_var__Float32)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Float64x, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
static void
test_f16div_90 (void)
{
  extern typeof (f16div (vol_var__Float64x, vol_var__Float32x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Float64x, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
static void
test_f16div_91 (void)
{
  extern typeof (f16div (vol_var__Float64x, vol_var__Float64)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Float64x, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f16div_92 (void)
{
  extern typeof (f16div (vol_var__Float64x, vol_var__Float64x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Float64x, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
static void
test_f16div_93 (void)
{
  extern typeof (f16div (vol_var__Float64x, vol_var__Float128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Float64x, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f16div_94 (void)
{
  extern typeof (f16div (vol_var__Float64x, vol_var_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Float64x, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f16div_95 (void)
{
  extern typeof (f16div (vol_var__Float64x, vol_var_signed_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Float64x, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f16div_96 (void)
{
  extern typeof (f16div (vol_var__Float64x, vol_var_unsigned_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Float64x, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f16div_97 (void)
{
  extern typeof (f16div (vol_var__Float64x, vol_var_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Float64x, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f16div_98 (void)
{
  extern typeof (f16div (vol_var__Float64x, vol_var_unsigned_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Float64x, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f16div_99 (void)
{
  extern typeof (f16div (vol_var__Float64x, vol_var_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Float64x, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f16div_100 (void)
{
  extern typeof (f16div (vol_var__Float64x, vol_var_unsigned_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Float64x, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f16div_101 (void)
{
  extern typeof (f16div (vol_var__Float64x, vol_var_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Float64x, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f16div_102 (void)
{
  extern typeof (f16div (vol_var__Float64x, vol_var_unsigned_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Float64x, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f16div_103 (void)
{
  extern typeof (f16div (vol_var__Float64x, vol_var_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Float64x, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f16div_104 (void)
{
  extern typeof (f16div (vol_var__Float64x, vol_var_unsigned_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Float64x, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_f16div_105 (void)
{
  extern typeof (f16div (vol_var__Float64x, vol_var___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Float64x, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_f16div_106 (void)
{
  extern typeof (f16div (vol_var__Float64x, vol_var_unsigned___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Float64x, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f16div_107 (void)
{
  extern typeof (f16div (vol_var__Float64x, vol_var_enum_e)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Float64x, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f16div_108 (void)
{
  extern typeof (f16div (vol_var__Float64x, vol_var__Bool)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Float64x, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f16div_109 (void)
{
  extern typeof (f16div (vol_var__Float64x, vol_var_bit_field)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Float64x, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F16
static void
test_f16div_110 (void)
{
  extern typeof (f16div (vol_var__Float128, vol_var__Float16)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Float128, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32
static void
test_f16div_111 (void)
{
  extern typeof (f16div (vol_var__Float128, vol_var__Float32)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Float128, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
static void
test_f16div_112 (void)
{
  extern typeof (f16div (vol_var__Float128, vol_var__Float32x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Float128, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64
static void
test_f16div_113 (void)
{
  extern typeof (f16div (vol_var__Float128, vol_var__Float64)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Float128, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
static void
test_f16div_114 (void)
{
  extern typeof (f16div (vol_var__Float128, vol_var__Float64x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Float128, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f16div_115 (void)
{
  extern typeof (f16div (vol_var__Float128, vol_var__Float128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Float128, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f16div_116 (void)
{
  extern typeof (f16div (vol_var__Float128, vol_var_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Float128, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f16div_117 (void)
{
  extern typeof (f16div (vol_var__Float128, vol_var_signed_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Float128, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f16div_118 (void)
{
  extern typeof (f16div (vol_var__Float128, vol_var_unsigned_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Float128, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f16div_119 (void)
{
  extern typeof (f16div (vol_var__Float128, vol_var_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Float128, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f16div_120 (void)
{
  extern typeof (f16div (vol_var__Float128, vol_var_unsigned_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Float128, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f16div_121 (void)
{
  extern typeof (f16div (vol_var__Float128, vol_var_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Float128, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f16div_122 (void)
{
  extern typeof (f16div (vol_var__Float128, vol_var_unsigned_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Float128, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f16div_123 (void)
{
  extern typeof (f16div (vol_var__Float128, vol_var_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Float128, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f16div_124 (void)
{
  extern typeof (f16div (vol_var__Float128, vol_var_unsigned_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Float128, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f16div_125 (void)
{
  extern typeof (f16div (vol_var__Float128, vol_var_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Float128, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f16div_126 (void)
{
  extern typeof (f16div (vol_var__Float128, vol_var_unsigned_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Float128, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_f16div_127 (void)
{
  extern typeof (f16div (vol_var__Float128, vol_var___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Float128, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_f16div_128 (void)
{
  extern typeof (f16div (vol_var__Float128, vol_var_unsigned___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Float128, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f16div_129 (void)
{
  extern typeof (f16div (vol_var__Float128, vol_var_enum_e)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Float128, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f16div_130 (void)
{
  extern typeof (f16div (vol_var__Float128, vol_var__Bool)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Float128, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f16div_131 (void)
{
  extern typeof (f16div (vol_var__Float128, vol_var_bit_field)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Float128, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f16div_132 (void)
{
  extern typeof (f16div (vol_var_char, vol_var__Float16)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_char, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f16div_133 (void)
{
  extern typeof (f16div (vol_var_char, vol_var__Float32)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_char, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f16div_134 (void)
{
  extern typeof (f16div (vol_var_char, vol_var__Float32x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_char, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f16div_135 (void)
{
  extern typeof (f16div (vol_var_char, vol_var__Float64)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_char, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f16div_136 (void)
{
  extern typeof (f16div (vol_var_char, vol_var__Float64x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_char, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f16div_137 (void)
{
  extern typeof (f16div (vol_var_char, vol_var__Float128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_char, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_138 (void)
{
  extern typeof (f16div (vol_var_char, vol_var_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_char, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_139 (void)
{
  extern typeof (f16div (vol_var_char, vol_var_signed_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_char, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_140 (void)
{
  extern typeof (f16div (vol_var_char, vol_var_unsigned_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_char, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_141 (void)
{
  extern typeof (f16div (vol_var_char, vol_var_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_char, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_142 (void)
{
  extern typeof (f16div (vol_var_char, vol_var_unsigned_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_char, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_143 (void)
{
  extern typeof (f16div (vol_var_char, vol_var_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_char, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_144 (void)
{
  extern typeof (f16div (vol_var_char, vol_var_unsigned_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_char, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_145 (void)
{
  extern typeof (f16div (vol_var_char, vol_var_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_char, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_146 (void)
{
  extern typeof (f16div (vol_var_char, vol_var_unsigned_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_char, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_147 (void)
{
  extern typeof (f16div (vol_var_char, vol_var_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_char, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_148 (void)
{
  extern typeof (f16div (vol_var_char, vol_var_unsigned_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_char, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16div_149 (void)
{
  extern typeof (f16div (vol_var_char, vol_var___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_char, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16div_150 (void)
{
  extern typeof (f16div (vol_var_char, vol_var_unsigned___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_char, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_151 (void)
{
  extern typeof (f16div (vol_var_char, vol_var_enum_e)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_char, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_152 (void)
{
  extern typeof (f16div (vol_var_char, vol_var__Bool)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_char, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_153 (void)
{
  extern typeof (f16div (vol_var_char, vol_var_bit_field)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_char, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f16div_154 (void)
{
  extern typeof (f16div (vol_var_signed_char, vol_var__Float16)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_signed_char, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f16div_155 (void)
{
  extern typeof (f16div (vol_var_signed_char, vol_var__Float32)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_signed_char, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f16div_156 (void)
{
  extern typeof (f16div (vol_var_signed_char, vol_var__Float32x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_signed_char, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f16div_157 (void)
{
  extern typeof (f16div (vol_var_signed_char, vol_var__Float64)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_signed_char, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f16div_158 (void)
{
  extern typeof (f16div (vol_var_signed_char, vol_var__Float64x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_signed_char, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f16div_159 (void)
{
  extern typeof (f16div (vol_var_signed_char, vol_var__Float128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_signed_char, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_160 (void)
{
  extern typeof (f16div (vol_var_signed_char, vol_var_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_signed_char, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_161 (void)
{
  extern typeof (f16div (vol_var_signed_char, vol_var_signed_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_signed_char, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_162 (void)
{
  extern typeof (f16div (vol_var_signed_char, vol_var_unsigned_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_signed_char, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_163 (void)
{
  extern typeof (f16div (vol_var_signed_char, vol_var_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_signed_char, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_164 (void)
{
  extern typeof (f16div (vol_var_signed_char, vol_var_unsigned_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_signed_char, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_165 (void)
{
  extern typeof (f16div (vol_var_signed_char, vol_var_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_signed_char, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_166 (void)
{
  extern typeof (f16div (vol_var_signed_char, vol_var_unsigned_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_signed_char, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_167 (void)
{
  extern typeof (f16div (vol_var_signed_char, vol_var_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_signed_char, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_168 (void)
{
  extern typeof (f16div (vol_var_signed_char, vol_var_unsigned_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_signed_char, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_169 (void)
{
  extern typeof (f16div (vol_var_signed_char, vol_var_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_signed_char, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_170 (void)
{
  extern typeof (f16div (vol_var_signed_char, vol_var_unsigned_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_signed_char, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16div_171 (void)
{
  extern typeof (f16div (vol_var_signed_char, vol_var___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_signed_char, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16div_172 (void)
{
  extern typeof (f16div (vol_var_signed_char, vol_var_unsigned___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_signed_char, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_173 (void)
{
  extern typeof (f16div (vol_var_signed_char, vol_var_enum_e)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_signed_char, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_174 (void)
{
  extern typeof (f16div (vol_var_signed_char, vol_var__Bool)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_signed_char, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_175 (void)
{
  extern typeof (f16div (vol_var_signed_char, vol_var_bit_field)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_signed_char, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f16div_176 (void)
{
  extern typeof (f16div (vol_var_unsigned_char, vol_var__Float16)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_unsigned_char, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f16div_177 (void)
{
  extern typeof (f16div (vol_var_unsigned_char, vol_var__Float32)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_unsigned_char, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f16div_178 (void)
{
  extern typeof (f16div (vol_var_unsigned_char, vol_var__Float32x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_unsigned_char, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f16div_179 (void)
{
  extern typeof (f16div (vol_var_unsigned_char, vol_var__Float64)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_unsigned_char, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f16div_180 (void)
{
  extern typeof (f16div (vol_var_unsigned_char, vol_var__Float64x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_unsigned_char, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f16div_181 (void)
{
  extern typeof (f16div (vol_var_unsigned_char, vol_var__Float128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_unsigned_char, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_182 (void)
{
  extern typeof (f16div (vol_var_unsigned_char, vol_var_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_unsigned_char, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_183 (void)
{
  extern typeof (f16div (vol_var_unsigned_char, vol_var_signed_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_unsigned_char, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_184 (void)
{
  extern typeof (f16div (vol_var_unsigned_char, vol_var_unsigned_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_unsigned_char, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_185 (void)
{
  extern typeof (f16div (vol_var_unsigned_char, vol_var_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_unsigned_char, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_186 (void)
{
  extern typeof (f16div (vol_var_unsigned_char, vol_var_unsigned_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_unsigned_char, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_187 (void)
{
  extern typeof (f16div (vol_var_unsigned_char, vol_var_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_unsigned_char, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_188 (void)
{
  extern typeof (f16div (vol_var_unsigned_char, vol_var_unsigned_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_unsigned_char, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_189 (void)
{
  extern typeof (f16div (vol_var_unsigned_char, vol_var_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_unsigned_char, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_190 (void)
{
  extern typeof (f16div (vol_var_unsigned_char, vol_var_unsigned_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_unsigned_char, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_191 (void)
{
  extern typeof (f16div (vol_var_unsigned_char, vol_var_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_unsigned_char, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_192 (void)
{
  extern typeof (f16div (vol_var_unsigned_char, vol_var_unsigned_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_unsigned_char, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16div_193 (void)
{
  extern typeof (f16div (vol_var_unsigned_char, vol_var___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_unsigned_char, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16div_194 (void)
{
  extern typeof (f16div (vol_var_unsigned_char, vol_var_unsigned___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_unsigned_char, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_195 (void)
{
  extern typeof (f16div (vol_var_unsigned_char, vol_var_enum_e)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_unsigned_char, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_196 (void)
{
  extern typeof (f16div (vol_var_unsigned_char, vol_var__Bool)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_unsigned_char, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_197 (void)
{
  extern typeof (f16div (vol_var_unsigned_char, vol_var_bit_field)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_unsigned_char, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f16div_198 (void)
{
  extern typeof (f16div (vol_var_short_int, vol_var__Float16)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_short_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f16div_199 (void)
{
  extern typeof (f16div (vol_var_short_int, vol_var__Float32)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_short_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f16div_200 (void)
{
  extern typeof (f16div (vol_var_short_int, vol_var__Float32x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_short_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f16div_201 (void)
{
  extern typeof (f16div (vol_var_short_int, vol_var__Float64)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_short_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f16div_202 (void)
{
  extern typeof (f16div (vol_var_short_int, vol_var__Float64x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_short_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f16div_203 (void)
{
  extern typeof (f16div (vol_var_short_int, vol_var__Float128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_short_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_204 (void)
{
  extern typeof (f16div (vol_var_short_int, vol_var_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_short_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_205 (void)
{
  extern typeof (f16div (vol_var_short_int, vol_var_signed_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_short_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_206 (void)
{
  extern typeof (f16div (vol_var_short_int, vol_var_unsigned_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_short_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_207 (void)
{
  extern typeof (f16div (vol_var_short_int, vol_var_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_short_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_208 (void)
{
  extern typeof (f16div (vol_var_short_int, vol_var_unsigned_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_short_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_209 (void)
{
  extern typeof (f16div (vol_var_short_int, vol_var_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_short_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_210 (void)
{
  extern typeof (f16div (vol_var_short_int, vol_var_unsigned_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_short_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_211 (void)
{
  extern typeof (f16div (vol_var_short_int, vol_var_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_short_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_212 (void)
{
  extern typeof (f16div (vol_var_short_int, vol_var_unsigned_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_short_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_213 (void)
{
  extern typeof (f16div (vol_var_short_int, vol_var_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_short_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_214 (void)
{
  extern typeof (f16div (vol_var_short_int, vol_var_unsigned_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_short_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16div_215 (void)
{
  extern typeof (f16div (vol_var_short_int, vol_var___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_short_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16div_216 (void)
{
  extern typeof (f16div (vol_var_short_int, vol_var_unsigned___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_short_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_217 (void)
{
  extern typeof (f16div (vol_var_short_int, vol_var_enum_e)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_short_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_218 (void)
{
  extern typeof (f16div (vol_var_short_int, vol_var__Bool)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_short_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_219 (void)
{
  extern typeof (f16div (vol_var_short_int, vol_var_bit_field)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_short_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f16div_220 (void)
{
  extern typeof (f16div (vol_var_unsigned_short_int, vol_var__Float16)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_unsigned_short_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f16div_221 (void)
{
  extern typeof (f16div (vol_var_unsigned_short_int, vol_var__Float32)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_unsigned_short_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f16div_222 (void)
{
  extern typeof (f16div (vol_var_unsigned_short_int, vol_var__Float32x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_unsigned_short_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f16div_223 (void)
{
  extern typeof (f16div (vol_var_unsigned_short_int, vol_var__Float64)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_unsigned_short_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f16div_224 (void)
{
  extern typeof (f16div (vol_var_unsigned_short_int, vol_var__Float64x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_unsigned_short_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f16div_225 (void)
{
  extern typeof (f16div (vol_var_unsigned_short_int, vol_var__Float128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_unsigned_short_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_226 (void)
{
  extern typeof (f16div (vol_var_unsigned_short_int, vol_var_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_unsigned_short_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_227 (void)
{
  extern typeof (f16div (vol_var_unsigned_short_int, vol_var_signed_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_unsigned_short_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_228 (void)
{
  extern typeof (f16div (vol_var_unsigned_short_int, vol_var_unsigned_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_unsigned_short_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_229 (void)
{
  extern typeof (f16div (vol_var_unsigned_short_int, vol_var_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_unsigned_short_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_230 (void)
{
  extern typeof (f16div (vol_var_unsigned_short_int, vol_var_unsigned_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_unsigned_short_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_231 (void)
{
  extern typeof (f16div (vol_var_unsigned_short_int, vol_var_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_unsigned_short_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_232 (void)
{
  extern typeof (f16div (vol_var_unsigned_short_int, vol_var_unsigned_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_unsigned_short_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_233 (void)
{
  extern typeof (f16div (vol_var_unsigned_short_int, vol_var_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_unsigned_short_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_234 (void)
{
  extern typeof (f16div (vol_var_unsigned_short_int, vol_var_unsigned_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_unsigned_short_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_235 (void)
{
  extern typeof (f16div (vol_var_unsigned_short_int, vol_var_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_unsigned_short_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_236 (void)
{
  extern typeof (f16div (vol_var_unsigned_short_int, vol_var_unsigned_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_unsigned_short_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16div_237 (void)
{
  extern typeof (f16div (vol_var_unsigned_short_int, vol_var___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_unsigned_short_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16div_238 (void)
{
  extern typeof (f16div (vol_var_unsigned_short_int, vol_var_unsigned___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_unsigned_short_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_239 (void)
{
  extern typeof (f16div (vol_var_unsigned_short_int, vol_var_enum_e)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_unsigned_short_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_240 (void)
{
  extern typeof (f16div (vol_var_unsigned_short_int, vol_var__Bool)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_unsigned_short_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_241 (void)
{
  extern typeof (f16div (vol_var_unsigned_short_int, vol_var_bit_field)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_unsigned_short_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f16div_242 (void)
{
  extern typeof (f16div (vol_var_int, vol_var__Float16)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f16div_243 (void)
{
  extern typeof (f16div (vol_var_int, vol_var__Float32)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f16div_244 (void)
{
  extern typeof (f16div (vol_var_int, vol_var__Float32x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f16div_245 (void)
{
  extern typeof (f16div (vol_var_int, vol_var__Float64)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f16div_246 (void)
{
  extern typeof (f16div (vol_var_int, vol_var__Float64x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f16div_247 (void)
{
  extern typeof (f16div (vol_var_int, vol_var__Float128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_248 (void)
{
  extern typeof (f16div (vol_var_int, vol_var_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_249 (void)
{
  extern typeof (f16div (vol_var_int, vol_var_signed_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_250 (void)
{
  extern typeof (f16div (vol_var_int, vol_var_unsigned_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_251 (void)
{
  extern typeof (f16div (vol_var_int, vol_var_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_252 (void)
{
  extern typeof (f16div (vol_var_int, vol_var_unsigned_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_253 (void)
{
  extern typeof (f16div (vol_var_int, vol_var_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_254 (void)
{
  extern typeof (f16div (vol_var_int, vol_var_unsigned_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_255 (void)
{
  extern typeof (f16div (vol_var_int, vol_var_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_256 (void)
{
  extern typeof (f16div (vol_var_int, vol_var_unsigned_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_257 (void)
{
  extern typeof (f16div (vol_var_int, vol_var_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_258 (void)
{
  extern typeof (f16div (vol_var_int, vol_var_unsigned_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16div_259 (void)
{
  extern typeof (f16div (vol_var_int, vol_var___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16div_260 (void)
{
  extern typeof (f16div (vol_var_int, vol_var_unsigned___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_261 (void)
{
  extern typeof (f16div (vol_var_int, vol_var_enum_e)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_262 (void)
{
  extern typeof (f16div (vol_var_int, vol_var__Bool)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_263 (void)
{
  extern typeof (f16div (vol_var_int, vol_var_bit_field)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f16div_264 (void)
{
  extern typeof (f16div (vol_var_unsigned_int, vol_var__Float16)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_unsigned_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f16div_265 (void)
{
  extern typeof (f16div (vol_var_unsigned_int, vol_var__Float32)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_unsigned_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f16div_266 (void)
{
  extern typeof (f16div (vol_var_unsigned_int, vol_var__Float32x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_unsigned_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f16div_267 (void)
{
  extern typeof (f16div (vol_var_unsigned_int, vol_var__Float64)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_unsigned_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f16div_268 (void)
{
  extern typeof (f16div (vol_var_unsigned_int, vol_var__Float64x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_unsigned_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f16div_269 (void)
{
  extern typeof (f16div (vol_var_unsigned_int, vol_var__Float128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_unsigned_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_270 (void)
{
  extern typeof (f16div (vol_var_unsigned_int, vol_var_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_unsigned_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_271 (void)
{
  extern typeof (f16div (vol_var_unsigned_int, vol_var_signed_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_unsigned_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_272 (void)
{
  extern typeof (f16div (vol_var_unsigned_int, vol_var_unsigned_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_unsigned_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_273 (void)
{
  extern typeof (f16div (vol_var_unsigned_int, vol_var_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_unsigned_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_274 (void)
{
  extern typeof (f16div (vol_var_unsigned_int, vol_var_unsigned_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_unsigned_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_275 (void)
{
  extern typeof (f16div (vol_var_unsigned_int, vol_var_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_unsigned_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_276 (void)
{
  extern typeof (f16div (vol_var_unsigned_int, vol_var_unsigned_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_unsigned_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_277 (void)
{
  extern typeof (f16div (vol_var_unsigned_int, vol_var_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_unsigned_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_278 (void)
{
  extern typeof (f16div (vol_var_unsigned_int, vol_var_unsigned_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_unsigned_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_279 (void)
{
  extern typeof (f16div (vol_var_unsigned_int, vol_var_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_unsigned_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_280 (void)
{
  extern typeof (f16div (vol_var_unsigned_int, vol_var_unsigned_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_unsigned_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16div_281 (void)
{
  extern typeof (f16div (vol_var_unsigned_int, vol_var___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_unsigned_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16div_282 (void)
{
  extern typeof (f16div (vol_var_unsigned_int, vol_var_unsigned___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_unsigned_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_283 (void)
{
  extern typeof (f16div (vol_var_unsigned_int, vol_var_enum_e)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_unsigned_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_284 (void)
{
  extern typeof (f16div (vol_var_unsigned_int, vol_var__Bool)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_unsigned_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_285 (void)
{
  extern typeof (f16div (vol_var_unsigned_int, vol_var_bit_field)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_unsigned_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f16div_286 (void)
{
  extern typeof (f16div (vol_var_long_int, vol_var__Float16)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_long_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f16div_287 (void)
{
  extern typeof (f16div (vol_var_long_int, vol_var__Float32)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_long_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f16div_288 (void)
{
  extern typeof (f16div (vol_var_long_int, vol_var__Float32x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_long_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f16div_289 (void)
{
  extern typeof (f16div (vol_var_long_int, vol_var__Float64)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_long_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f16div_290 (void)
{
  extern typeof (f16div (vol_var_long_int, vol_var__Float64x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_long_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f16div_291 (void)
{
  extern typeof (f16div (vol_var_long_int, vol_var__Float128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_long_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_292 (void)
{
  extern typeof (f16div (vol_var_long_int, vol_var_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_long_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_293 (void)
{
  extern typeof (f16div (vol_var_long_int, vol_var_signed_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_long_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_294 (void)
{
  extern typeof (f16div (vol_var_long_int, vol_var_unsigned_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_long_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_295 (void)
{
  extern typeof (f16div (vol_var_long_int, vol_var_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_long_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_296 (void)
{
  extern typeof (f16div (vol_var_long_int, vol_var_unsigned_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_long_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_297 (void)
{
  extern typeof (f16div (vol_var_long_int, vol_var_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_long_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_298 (void)
{
  extern typeof (f16div (vol_var_long_int, vol_var_unsigned_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_long_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_299 (void)
{
  extern typeof (f16div (vol_var_long_int, vol_var_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_long_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_300 (void)
{
  extern typeof (f16div (vol_var_long_int, vol_var_unsigned_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_long_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_301 (void)
{
  extern typeof (f16div (vol_var_long_int, vol_var_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_long_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_302 (void)
{
  extern typeof (f16div (vol_var_long_int, vol_var_unsigned_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_long_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16div_303 (void)
{
  extern typeof (f16div (vol_var_long_int, vol_var___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_long_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16div_304 (void)
{
  extern typeof (f16div (vol_var_long_int, vol_var_unsigned___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_long_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_305 (void)
{
  extern typeof (f16div (vol_var_long_int, vol_var_enum_e)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_long_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_306 (void)
{
  extern typeof (f16div (vol_var_long_int, vol_var__Bool)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_long_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_307 (void)
{
  extern typeof (f16div (vol_var_long_int, vol_var_bit_field)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_long_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f16div_308 (void)
{
  extern typeof (f16div (vol_var_unsigned_long_int, vol_var__Float16)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_unsigned_long_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f16div_309 (void)
{
  extern typeof (f16div (vol_var_unsigned_long_int, vol_var__Float32)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_unsigned_long_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f16div_310 (void)
{
  extern typeof (f16div (vol_var_unsigned_long_int, vol_var__Float32x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_unsigned_long_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f16div_311 (void)
{
  extern typeof (f16div (vol_var_unsigned_long_int, vol_var__Float64)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_unsigned_long_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f16div_312 (void)
{
  extern typeof (f16div (vol_var_unsigned_long_int, vol_var__Float64x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_unsigned_long_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f16div_313 (void)
{
  extern typeof (f16div (vol_var_unsigned_long_int, vol_var__Float128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_unsigned_long_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_314 (void)
{
  extern typeof (f16div (vol_var_unsigned_long_int, vol_var_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_unsigned_long_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_315 (void)
{
  extern typeof (f16div (vol_var_unsigned_long_int, vol_var_signed_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_unsigned_long_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_316 (void)
{
  extern typeof (f16div (vol_var_unsigned_long_int, vol_var_unsigned_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_unsigned_long_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_317 (void)
{
  extern typeof (f16div (vol_var_unsigned_long_int, vol_var_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_unsigned_long_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_318 (void)
{
  extern typeof (f16div (vol_var_unsigned_long_int, vol_var_unsigned_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_unsigned_long_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_319 (void)
{
  extern typeof (f16div (vol_var_unsigned_long_int, vol_var_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_unsigned_long_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_320 (void)
{
  extern typeof (f16div (vol_var_unsigned_long_int, vol_var_unsigned_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_unsigned_long_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_321 (void)
{
  extern typeof (f16div (vol_var_unsigned_long_int, vol_var_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_unsigned_long_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_322 (void)
{
  extern typeof (f16div (vol_var_unsigned_long_int, vol_var_unsigned_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_unsigned_long_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_323 (void)
{
  extern typeof (f16div (vol_var_unsigned_long_int, vol_var_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_unsigned_long_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_324 (void)
{
  extern typeof (f16div (vol_var_unsigned_long_int, vol_var_unsigned_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_unsigned_long_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16div_325 (void)
{
  extern typeof (f16div (vol_var_unsigned_long_int, vol_var___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_unsigned_long_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16div_326 (void)
{
  extern typeof (f16div (vol_var_unsigned_long_int, vol_var_unsigned___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_unsigned_long_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_327 (void)
{
  extern typeof (f16div (vol_var_unsigned_long_int, vol_var_enum_e)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_unsigned_long_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_328 (void)
{
  extern typeof (f16div (vol_var_unsigned_long_int, vol_var__Bool)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_unsigned_long_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_329 (void)
{
  extern typeof (f16div (vol_var_unsigned_long_int, vol_var_bit_field)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_unsigned_long_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f16div_330 (void)
{
  extern typeof (f16div (vol_var_long_long_int, vol_var__Float16)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_long_long_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f16div_331 (void)
{
  extern typeof (f16div (vol_var_long_long_int, vol_var__Float32)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_long_long_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f16div_332 (void)
{
  extern typeof (f16div (vol_var_long_long_int, vol_var__Float32x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_long_long_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f16div_333 (void)
{
  extern typeof (f16div (vol_var_long_long_int, vol_var__Float64)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_long_long_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f16div_334 (void)
{
  extern typeof (f16div (vol_var_long_long_int, vol_var__Float64x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_long_long_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f16div_335 (void)
{
  extern typeof (f16div (vol_var_long_long_int, vol_var__Float128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_long_long_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_336 (void)
{
  extern typeof (f16div (vol_var_long_long_int, vol_var_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_long_long_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_337 (void)
{
  extern typeof (f16div (vol_var_long_long_int, vol_var_signed_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_long_long_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_338 (void)
{
  extern typeof (f16div (vol_var_long_long_int, vol_var_unsigned_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_long_long_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_339 (void)
{
  extern typeof (f16div (vol_var_long_long_int, vol_var_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_long_long_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_340 (void)
{
  extern typeof (f16div (vol_var_long_long_int, vol_var_unsigned_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_long_long_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_341 (void)
{
  extern typeof (f16div (vol_var_long_long_int, vol_var_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_long_long_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_342 (void)
{
  extern typeof (f16div (vol_var_long_long_int, vol_var_unsigned_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_long_long_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_343 (void)
{
  extern typeof (f16div (vol_var_long_long_int, vol_var_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_long_long_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_344 (void)
{
  extern typeof (f16div (vol_var_long_long_int, vol_var_unsigned_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_long_long_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_345 (void)
{
  extern typeof (f16div (vol_var_long_long_int, vol_var_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_long_long_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_346 (void)
{
  extern typeof (f16div (vol_var_long_long_int, vol_var_unsigned_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_long_long_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16div_347 (void)
{
  extern typeof (f16div (vol_var_long_long_int, vol_var___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_long_long_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16div_348 (void)
{
  extern typeof (f16div (vol_var_long_long_int, vol_var_unsigned___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_long_long_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_349 (void)
{
  extern typeof (f16div (vol_var_long_long_int, vol_var_enum_e)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_long_long_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_350 (void)
{
  extern typeof (f16div (vol_var_long_long_int, vol_var__Bool)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_long_long_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_351 (void)
{
  extern typeof (f16div (vol_var_long_long_int, vol_var_bit_field)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_long_long_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f16div_352 (void)
{
  extern typeof (f16div (vol_var_unsigned_long_long_int, vol_var__Float16)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_unsigned_long_long_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f16div_353 (void)
{
  extern typeof (f16div (vol_var_unsigned_long_long_int, vol_var__Float32)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_unsigned_long_long_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f16div_354 (void)
{
  extern typeof (f16div (vol_var_unsigned_long_long_int, vol_var__Float32x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_unsigned_long_long_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f16div_355 (void)
{
  extern typeof (f16div (vol_var_unsigned_long_long_int, vol_var__Float64)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_unsigned_long_long_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f16div_356 (void)
{
  extern typeof (f16div (vol_var_unsigned_long_long_int, vol_var__Float64x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_unsigned_long_long_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f16div_357 (void)
{
  extern typeof (f16div (vol_var_unsigned_long_long_int, vol_var__Float128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_unsigned_long_long_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_358 (void)
{
  extern typeof (f16div (vol_var_unsigned_long_long_int, vol_var_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_unsigned_long_long_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_359 (void)
{
  extern typeof (f16div (vol_var_unsigned_long_long_int, vol_var_signed_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_unsigned_long_long_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_360 (void)
{
  extern typeof (f16div (vol_var_unsigned_long_long_int, vol_var_unsigned_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_unsigned_long_long_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_361 (void)
{
  extern typeof (f16div (vol_var_unsigned_long_long_int, vol_var_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_unsigned_long_long_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_362 (void)
{
  extern typeof (f16div (vol_var_unsigned_long_long_int, vol_var_unsigned_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_unsigned_long_long_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_363 (void)
{
  extern typeof (f16div (vol_var_unsigned_long_long_int, vol_var_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_unsigned_long_long_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_364 (void)
{
  extern typeof (f16div (vol_var_unsigned_long_long_int, vol_var_unsigned_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_unsigned_long_long_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_365 (void)
{
  extern typeof (f16div (vol_var_unsigned_long_long_int, vol_var_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_unsigned_long_long_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_366 (void)
{
  extern typeof (f16div (vol_var_unsigned_long_long_int, vol_var_unsigned_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_unsigned_long_long_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_367 (void)
{
  extern typeof (f16div (vol_var_unsigned_long_long_int, vol_var_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_unsigned_long_long_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_368 (void)
{
  extern typeof (f16div (vol_var_unsigned_long_long_int, vol_var_unsigned_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_unsigned_long_long_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16div_369 (void)
{
  extern typeof (f16div (vol_var_unsigned_long_long_int, vol_var___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_unsigned_long_long_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16div_370 (void)
{
  extern typeof (f16div (vol_var_unsigned_long_long_int, vol_var_unsigned___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_unsigned_long_long_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_371 (void)
{
  extern typeof (f16div (vol_var_unsigned_long_long_int, vol_var_enum_e)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_unsigned_long_long_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_372 (void)
{
  extern typeof (f16div (vol_var_unsigned_long_long_int, vol_var__Bool)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_unsigned_long_long_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_373 (void)
{
  extern typeof (f16div (vol_var_unsigned_long_long_int, vol_var_bit_field)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_unsigned_long_long_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_f16div_374 (void)
{
  extern typeof (f16div (vol_var___int128, vol_var__Float16)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var___int128, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_f16div_375 (void)
{
  extern typeof (f16div (vol_var___int128, vol_var__Float32)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var___int128, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_f16div_376 (void)
{
  extern typeof (f16div (vol_var___int128, vol_var__Float32x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var___int128, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_f16div_377 (void)
{
  extern typeof (f16div (vol_var___int128, vol_var__Float64)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var___int128, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_f16div_378 (void)
{
  extern typeof (f16div (vol_var___int128, vol_var__Float64x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var___int128, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_f16div_379 (void)
{
  extern typeof (f16div (vol_var___int128, vol_var__Float128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var___int128, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16div_380 (void)
{
  extern typeof (f16div (vol_var___int128, vol_var_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var___int128, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16div_381 (void)
{
  extern typeof (f16div (vol_var___int128, vol_var_signed_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var___int128, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16div_382 (void)
{
  extern typeof (f16div (vol_var___int128, vol_var_unsigned_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var___int128, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16div_383 (void)
{
  extern typeof (f16div (vol_var___int128, vol_var_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var___int128, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16div_384 (void)
{
  extern typeof (f16div (vol_var___int128, vol_var_unsigned_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var___int128, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16div_385 (void)
{
  extern typeof (f16div (vol_var___int128, vol_var_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var___int128, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16div_386 (void)
{
  extern typeof (f16div (vol_var___int128, vol_var_unsigned_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var___int128, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16div_387 (void)
{
  extern typeof (f16div (vol_var___int128, vol_var_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var___int128, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16div_388 (void)
{
  extern typeof (f16div (vol_var___int128, vol_var_unsigned_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var___int128, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16div_389 (void)
{
  extern typeof (f16div (vol_var___int128, vol_var_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var___int128, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16div_390 (void)
{
  extern typeof (f16div (vol_var___int128, vol_var_unsigned_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var___int128, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16div_391 (void)
{
  extern typeof (f16div (vol_var___int128, vol_var___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var___int128, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16div_392 (void)
{
  extern typeof (f16div (vol_var___int128, vol_var_unsigned___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var___int128, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16div_393 (void)
{
  extern typeof (f16div (vol_var___int128, vol_var_enum_e)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var___int128, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16div_394 (void)
{
  extern typeof (f16div (vol_var___int128, vol_var__Bool)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var___int128, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16div_395 (void)
{
  extern typeof (f16div (vol_var___int128, vol_var_bit_field)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var___int128, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_f16div_396 (void)
{
  extern typeof (f16div (vol_var_unsigned___int128, vol_var__Float16)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_unsigned___int128, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_f16div_397 (void)
{
  extern typeof (f16div (vol_var_unsigned___int128, vol_var__Float32)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_unsigned___int128, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_f16div_398 (void)
{
  extern typeof (f16div (vol_var_unsigned___int128, vol_var__Float32x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_unsigned___int128, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_f16div_399 (void)
{
  extern typeof (f16div (vol_var_unsigned___int128, vol_var__Float64)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_unsigned___int128, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_f16div_400 (void)
{
  extern typeof (f16div (vol_var_unsigned___int128, vol_var__Float64x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_unsigned___int128, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_f16div_401 (void)
{
  extern typeof (f16div (vol_var_unsigned___int128, vol_var__Float128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_unsigned___int128, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16div_402 (void)
{
  extern typeof (f16div (vol_var_unsigned___int128, vol_var_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_unsigned___int128, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16div_403 (void)
{
  extern typeof (f16div (vol_var_unsigned___int128, vol_var_signed_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_unsigned___int128, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16div_404 (void)
{
  extern typeof (f16div (vol_var_unsigned___int128, vol_var_unsigned_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_unsigned___int128, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16div_405 (void)
{
  extern typeof (f16div (vol_var_unsigned___int128, vol_var_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_unsigned___int128, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16div_406 (void)
{
  extern typeof (f16div (vol_var_unsigned___int128, vol_var_unsigned_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_unsigned___int128, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16div_407 (void)
{
  extern typeof (f16div (vol_var_unsigned___int128, vol_var_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_unsigned___int128, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16div_408 (void)
{
  extern typeof (f16div (vol_var_unsigned___int128, vol_var_unsigned_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_unsigned___int128, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16div_409 (void)
{
  extern typeof (f16div (vol_var_unsigned___int128, vol_var_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_unsigned___int128, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16div_410 (void)
{
  extern typeof (f16div (vol_var_unsigned___int128, vol_var_unsigned_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_unsigned___int128, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16div_411 (void)
{
  extern typeof (f16div (vol_var_unsigned___int128, vol_var_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_unsigned___int128, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16div_412 (void)
{
  extern typeof (f16div (vol_var_unsigned___int128, vol_var_unsigned_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_unsigned___int128, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16div_413 (void)
{
  extern typeof (f16div (vol_var_unsigned___int128, vol_var___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_unsigned___int128, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16div_414 (void)
{
  extern typeof (f16div (vol_var_unsigned___int128, vol_var_unsigned___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_unsigned___int128, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16div_415 (void)
{
  extern typeof (f16div (vol_var_unsigned___int128, vol_var_enum_e)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_unsigned___int128, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16div_416 (void)
{
  extern typeof (f16div (vol_var_unsigned___int128, vol_var__Bool)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_unsigned___int128, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16div_417 (void)
{
  extern typeof (f16div (vol_var_unsigned___int128, vol_var_bit_field)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_unsigned___int128, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f16div_418 (void)
{
  extern typeof (f16div (vol_var_enum_e, vol_var__Float16)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_enum_e, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f16div_419 (void)
{
  extern typeof (f16div (vol_var_enum_e, vol_var__Float32)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_enum_e, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f16div_420 (void)
{
  extern typeof (f16div (vol_var_enum_e, vol_var__Float32x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_enum_e, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f16div_421 (void)
{
  extern typeof (f16div (vol_var_enum_e, vol_var__Float64)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_enum_e, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f16div_422 (void)
{
  extern typeof (f16div (vol_var_enum_e, vol_var__Float64x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_enum_e, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f16div_423 (void)
{
  extern typeof (f16div (vol_var_enum_e, vol_var__Float128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_enum_e, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_424 (void)
{
  extern typeof (f16div (vol_var_enum_e, vol_var_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_enum_e, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_425 (void)
{
  extern typeof (f16div (vol_var_enum_e, vol_var_signed_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_enum_e, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_426 (void)
{
  extern typeof (f16div (vol_var_enum_e, vol_var_unsigned_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_enum_e, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_427 (void)
{
  extern typeof (f16div (vol_var_enum_e, vol_var_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_enum_e, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_428 (void)
{
  extern typeof (f16div (vol_var_enum_e, vol_var_unsigned_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_enum_e, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_429 (void)
{
  extern typeof (f16div (vol_var_enum_e, vol_var_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_enum_e, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_430 (void)
{
  extern typeof (f16div (vol_var_enum_e, vol_var_unsigned_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_enum_e, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_431 (void)
{
  extern typeof (f16div (vol_var_enum_e, vol_var_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_enum_e, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_432 (void)
{
  extern typeof (f16div (vol_var_enum_e, vol_var_unsigned_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_enum_e, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_433 (void)
{
  extern typeof (f16div (vol_var_enum_e, vol_var_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_enum_e, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_434 (void)
{
  extern typeof (f16div (vol_var_enum_e, vol_var_unsigned_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_enum_e, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16div_435 (void)
{
  extern typeof (f16div (vol_var_enum_e, vol_var___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_enum_e, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16div_436 (void)
{
  extern typeof (f16div (vol_var_enum_e, vol_var_unsigned___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_enum_e, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_437 (void)
{
  extern typeof (f16div (vol_var_enum_e, vol_var_enum_e)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_enum_e, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_438 (void)
{
  extern typeof (f16div (vol_var_enum_e, vol_var__Bool)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_enum_e, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_439 (void)
{
  extern typeof (f16div (vol_var_enum_e, vol_var_bit_field)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_enum_e, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f16div_440 (void)
{
  extern typeof (f16div (vol_var__Bool, vol_var__Float16)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Bool, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f16div_441 (void)
{
  extern typeof (f16div (vol_var__Bool, vol_var__Float32)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Bool, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f16div_442 (void)
{
  extern typeof (f16div (vol_var__Bool, vol_var__Float32x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Bool, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f16div_443 (void)
{
  extern typeof (f16div (vol_var__Bool, vol_var__Float64)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Bool, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f16div_444 (void)
{
  extern typeof (f16div (vol_var__Bool, vol_var__Float64x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Bool, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f16div_445 (void)
{
  extern typeof (f16div (vol_var__Bool, vol_var__Float128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Bool, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_446 (void)
{
  extern typeof (f16div (vol_var__Bool, vol_var_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Bool, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_447 (void)
{
  extern typeof (f16div (vol_var__Bool, vol_var_signed_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Bool, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_448 (void)
{
  extern typeof (f16div (vol_var__Bool, vol_var_unsigned_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Bool, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_449 (void)
{
  extern typeof (f16div (vol_var__Bool, vol_var_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Bool, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_450 (void)
{
  extern typeof (f16div (vol_var__Bool, vol_var_unsigned_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Bool, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_451 (void)
{
  extern typeof (f16div (vol_var__Bool, vol_var_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Bool, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_452 (void)
{
  extern typeof (f16div (vol_var__Bool, vol_var_unsigned_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Bool, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_453 (void)
{
  extern typeof (f16div (vol_var__Bool, vol_var_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Bool, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_454 (void)
{
  extern typeof (f16div (vol_var__Bool, vol_var_unsigned_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Bool, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_455 (void)
{
  extern typeof (f16div (vol_var__Bool, vol_var_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Bool, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_456 (void)
{
  extern typeof (f16div (vol_var__Bool, vol_var_unsigned_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Bool, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16div_457 (void)
{
  extern typeof (f16div (vol_var__Bool, vol_var___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Bool, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16div_458 (void)
{
  extern typeof (f16div (vol_var__Bool, vol_var_unsigned___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Bool, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_459 (void)
{
  extern typeof (f16div (vol_var__Bool, vol_var_enum_e)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Bool, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_460 (void)
{
  extern typeof (f16div (vol_var__Bool, vol_var__Bool)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Bool, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_461 (void)
{
  extern typeof (f16div (vol_var__Bool, vol_var_bit_field)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var__Bool, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f16div_462 (void)
{
  extern typeof (f16div (vol_var_bit_field, vol_var__Float16)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_bit_field, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f16div_463 (void)
{
  extern typeof (f16div (vol_var_bit_field, vol_var__Float32)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_bit_field, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f16div_464 (void)
{
  extern typeof (f16div (vol_var_bit_field, vol_var__Float32x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_bit_field, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f16div_465 (void)
{
  extern typeof (f16div (vol_var_bit_field, vol_var__Float64)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_bit_field, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f16div_466 (void)
{
  extern typeof (f16div (vol_var_bit_field, vol_var__Float64x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_bit_field, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f16div_467 (void)
{
  extern typeof (f16div (vol_var_bit_field, vol_var__Float128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_bit_field, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_468 (void)
{
  extern typeof (f16div (vol_var_bit_field, vol_var_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_bit_field, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_469 (void)
{
  extern typeof (f16div (vol_var_bit_field, vol_var_signed_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_bit_field, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_470 (void)
{
  extern typeof (f16div (vol_var_bit_field, vol_var_unsigned_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_bit_field, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_471 (void)
{
  extern typeof (f16div (vol_var_bit_field, vol_var_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_bit_field, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_472 (void)
{
  extern typeof (f16div (vol_var_bit_field, vol_var_unsigned_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_bit_field, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_473 (void)
{
  extern typeof (f16div (vol_var_bit_field, vol_var_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_bit_field, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_474 (void)
{
  extern typeof (f16div (vol_var_bit_field, vol_var_unsigned_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_bit_field, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_475 (void)
{
  extern typeof (f16div (vol_var_bit_field, vol_var_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_bit_field, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_476 (void)
{
  extern typeof (f16div (vol_var_bit_field, vol_var_unsigned_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_bit_field, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_477 (void)
{
  extern typeof (f16div (vol_var_bit_field, vol_var_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_bit_field, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_478 (void)
{
  extern typeof (f16div (vol_var_bit_field, vol_var_unsigned_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_bit_field, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16div_479 (void)
{
  extern typeof (f16div (vol_var_bit_field, vol_var___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_bit_field, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16div_480 (void)
{
  extern typeof (f16div (vol_var_bit_field, vol_var_unsigned___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_bit_field, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_481 (void)
{
  extern typeof (f16div (vol_var_bit_field, vol_var_enum_e)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_bit_field, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_482 (void)
{
  extern typeof (f16div (vol_var_bit_field, vol_var__Bool)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_bit_field, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16div_483 (void)
{
  extern typeof (f16div (vol_var_bit_field, vol_var_bit_field)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16div (vol_var_bit_field, vol_var_bit_field);
}
#endif
static const struct test tests[] =
  {
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f16div_0, "f16div", "f16div (_Float16, _Float16)", FLT32_MANT_DIG, FLT16_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32
    { test_f16div_1, "f16div", "f16div (_Float16, _Float32)", FLT32_MANT_DIG, FLT32_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
    { test_f16div_2, "f16div", "f16div (_Float16, _Float32x)", FLT32X_MANT_DIG, FLT32X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64
    { test_f16div_3, "f16div", "f16div (_Float16, _Float64)", FLT64_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
    { test_f16div_4, "f16div", "f16div (_Float16, _Float64x)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F16
    { test_f16div_5, "f16div", "f16div (_Float16, _Float128)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f16div_6, "f16div", "f16div (_Float16, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f16div_7, "f16div", "f16div (_Float16, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f16div_8, "f16div", "f16div (_Float16, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f16div_9, "f16div", "f16div (_Float16, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f16div_10, "f16div", "f16div (_Float16, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f16div_11, "f16div", "f16div (_Float16, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f16div_12, "f16div", "f16div (_Float16, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f16div_13, "f16div", "f16div (_Float16, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f16div_14, "f16div", "f16div (_Float16, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f16div_15, "f16div", "f16div (_Float16, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f16div_16, "f16div", "f16div (_Float16, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_f16div_17, "f16div", "f16div (_Float16, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_f16div_18, "f16div", "f16div (_Float16, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f16div_19, "f16div", "f16div (_Float16, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f16div_20, "f16div", "f16div (_Float16, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f16div_21, "f16div", "f16div (_Float16, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32
    { test_f16div_22, "f16div", "f16div (_Float32, _Float16)", FLT32_MANT_DIG, FLT32_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f16div_23, "f16div", "f16div (_Float32, _Float32)", FLT32_MANT_DIG, FLT32_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
    { test_f16div_24, "f16div", "f16div (_Float32, _Float32x)", FLT32X_MANT_DIG, FLT32X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64
    { test_f16div_25, "f16div", "f16div (_Float32, _Float64)", FLT64_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
    { test_f16div_26, "f16div", "f16div (_Float32, _Float64x)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32
    { test_f16div_27, "f16div", "f16div (_Float32, _Float128)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f16div_28, "f16div", "f16div (_Float32, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f16div_29, "f16div", "f16div (_Float32, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f16div_30, "f16div", "f16div (_Float32, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f16div_31, "f16div", "f16div (_Float32, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f16div_32, "f16div", "f16div (_Float32, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f16div_33, "f16div", "f16div (_Float32, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f16div_34, "f16div", "f16div (_Float32, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f16div_35, "f16div", "f16div (_Float32, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f16div_36, "f16div", "f16div (_Float32, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f16div_37, "f16div", "f16div (_Float32, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f16div_38, "f16div", "f16div (_Float32, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_f16div_39, "f16div", "f16div (_Float32, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_f16div_40, "f16div", "f16div (_Float32, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f16div_41, "f16div", "f16div (_Float32, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f16div_42, "f16div", "f16div (_Float32, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f16div_43, "f16div", "f16div (_Float32, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
    { test_f16div_44, "f16div", "f16div (_Float32x, _Float16)", FLT32X_MANT_DIG, FLT32X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
    { test_f16div_45, "f16div", "f16div (_Float32x, _Float32)", FLT32X_MANT_DIG, FLT32X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f16div_46, "f16div", "f16div (_Float32x, _Float32x)", FLT32X_MANT_DIG, FLT32X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64
    { test_f16div_47, "f16div", "f16div (_Float32x, _Float64)", FLT64_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
    { test_f16div_48, "f16div", "f16div (_Float32x, _Float64x)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
    { test_f16div_49, "f16div", "f16div (_Float32x, _Float128)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f16div_50, "f16div", "f16div (_Float32x, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f16div_51, "f16div", "f16div (_Float32x, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f16div_52, "f16div", "f16div (_Float32x, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f16div_53, "f16div", "f16div (_Float32x, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f16div_54, "f16div", "f16div (_Float32x, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f16div_55, "f16div", "f16div (_Float32x, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f16div_56, "f16div", "f16div (_Float32x, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f16div_57, "f16div", "f16div (_Float32x, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f16div_58, "f16div", "f16div (_Float32x, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f16div_59, "f16div", "f16div (_Float32x, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f16div_60, "f16div", "f16div (_Float32x, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_f16div_61, "f16div", "f16div (_Float32x, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_f16div_62, "f16div", "f16div (_Float32x, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f16div_63, "f16div", "f16div (_Float32x, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f16div_64, "f16div", "f16div (_Float32x, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f16div_65, "f16div", "f16div (_Float32x, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64
    { test_f16div_66, "f16div", "f16div (_Float64, _Float16)", FLT64_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64
    { test_f16div_67, "f16div", "f16div (_Float64, _Float32)", FLT64_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64
    { test_f16div_68, "f16div", "f16div (_Float64, _Float32x)", FLT64_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f16div_69, "f16div", "f16div (_Float64, _Float64)", FLT64_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
    { test_f16div_70, "f16div", "f16div (_Float64, _Float64x)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64
    { test_f16div_71, "f16div", "f16div (_Float64, _Float128)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f16div_72, "f16div", "f16div (_Float64, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f16div_73, "f16div", "f16div (_Float64, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f16div_74, "f16div", "f16div (_Float64, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f16div_75, "f16div", "f16div (_Float64, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f16div_76, "f16div", "f16div (_Float64, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f16div_77, "f16div", "f16div (_Float64, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f16div_78, "f16div", "f16div (_Float64, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f16div_79, "f16div", "f16div (_Float64, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f16div_80, "f16div", "f16div (_Float64, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f16div_81, "f16div", "f16div (_Float64, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f16div_82, "f16div", "f16div (_Float64, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_f16div_83, "f16div", "f16div (_Float64, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_f16div_84, "f16div", "f16div (_Float64, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f16div_85, "f16div", "f16div (_Float64, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f16div_86, "f16div", "f16div (_Float64, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f16div_87, "f16div", "f16div (_Float64, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
    { test_f16div_88, "f16div", "f16div (_Float64x, _Float16)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
    { test_f16div_89, "f16div", "f16div (_Float64x, _Float32)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
    { test_f16div_90, "f16div", "f16div (_Float64x, _Float32x)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
    { test_f16div_91, "f16div", "f16div (_Float64x, _Float64)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f16div_92, "f16div", "f16div (_Float64x, _Float64x)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
    { test_f16div_93, "f16div", "f16div (_Float64x, _Float128)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f16div_94, "f16div", "f16div (_Float64x, char)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f16div_95, "f16div", "f16div (_Float64x, signed char)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f16div_96, "f16div", "f16div (_Float64x, unsigned char)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f16div_97, "f16div", "f16div (_Float64x, short int)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f16div_98, "f16div", "f16div (_Float64x, unsigned short int)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f16div_99, "f16div", "f16div (_Float64x, int)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f16div_100, "f16div", "f16div (_Float64x, unsigned int)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f16div_101, "f16div", "f16div (_Float64x, long int)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f16div_102, "f16div", "f16div (_Float64x, unsigned long int)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f16div_103, "f16div", "f16div (_Float64x, long long int)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f16div_104, "f16div", "f16div (_Float64x, unsigned long long int)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_f16div_105, "f16div", "f16div (_Float64x, __int128)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_f16div_106, "f16div", "f16div (_Float64x, unsigned __int128)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f16div_107, "f16div", "f16div (_Float64x, enum e)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f16div_108, "f16div", "f16div (_Float64x, _Bool)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f16div_109, "f16div", "f16div (_Float64x, bit_field)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F16
    { test_f16div_110, "f16div", "f16div (_Float128, _Float16)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32
    { test_f16div_111, "f16div", "f16div (_Float128, _Float32)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
    { test_f16div_112, "f16div", "f16div (_Float128, _Float32x)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64
    { test_f16div_113, "f16div", "f16div (_Float128, _Float64)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
    { test_f16div_114, "f16div", "f16div (_Float128, _Float64x)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f16div_115, "f16div", "f16div (_Float128, _Float128)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f16div_116, "f16div", "f16div (_Float128, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f16div_117, "f16div", "f16div (_Float128, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f16div_118, "f16div", "f16div (_Float128, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f16div_119, "f16div", "f16div (_Float128, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f16div_120, "f16div", "f16div (_Float128, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f16div_121, "f16div", "f16div (_Float128, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f16div_122, "f16div", "f16div (_Float128, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f16div_123, "f16div", "f16div (_Float128, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f16div_124, "f16div", "f16div (_Float128, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f16div_125, "f16div", "f16div (_Float128, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f16div_126, "f16div", "f16div (_Float128, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_f16div_127, "f16div", "f16div (_Float128, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_f16div_128, "f16div", "f16div (_Float128, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f16div_129, "f16div", "f16div (_Float128, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f16div_130, "f16div", "f16div (_Float128, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f16div_131, "f16div", "f16div (_Float128, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f16div_132, "f16div", "f16div (char, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f16div_133, "f16div", "f16div (char, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f16div_134, "f16div", "f16div (char, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f16div_135, "f16div", "f16div (char, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f16div_136, "f16div", "f16div (char, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f16div_137, "f16div", "f16div (char, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_138, "f16div", "f16div (char, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_139, "f16div", "f16div (char, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_140, "f16div", "f16div (char, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_141, "f16div", "f16div (char, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_142, "f16div", "f16div (char, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_143, "f16div", "f16div (char, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_144, "f16div", "f16div (char, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_145, "f16div", "f16div (char, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_146, "f16div", "f16div (char, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_147, "f16div", "f16div (char, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_148, "f16div", "f16div (char, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16div_149, "f16div", "f16div (char, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16div_150, "f16div", "f16div (char, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_151, "f16div", "f16div (char, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_152, "f16div", "f16div (char, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_153, "f16div", "f16div (char, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f16div_154, "f16div", "f16div (signed char, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f16div_155, "f16div", "f16div (signed char, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f16div_156, "f16div", "f16div (signed char, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f16div_157, "f16div", "f16div (signed char, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f16div_158, "f16div", "f16div (signed char, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f16div_159, "f16div", "f16div (signed char, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_160, "f16div", "f16div (signed char, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_161, "f16div", "f16div (signed char, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_162, "f16div", "f16div (signed char, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_163, "f16div", "f16div (signed char, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_164, "f16div", "f16div (signed char, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_165, "f16div", "f16div (signed char, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_166, "f16div", "f16div (signed char, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_167, "f16div", "f16div (signed char, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_168, "f16div", "f16div (signed char, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_169, "f16div", "f16div (signed char, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_170, "f16div", "f16div (signed char, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16div_171, "f16div", "f16div (signed char, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16div_172, "f16div", "f16div (signed char, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_173, "f16div", "f16div (signed char, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_174, "f16div", "f16div (signed char, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_175, "f16div", "f16div (signed char, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f16div_176, "f16div", "f16div (unsigned char, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f16div_177, "f16div", "f16div (unsigned char, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f16div_178, "f16div", "f16div (unsigned char, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f16div_179, "f16div", "f16div (unsigned char, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f16div_180, "f16div", "f16div (unsigned char, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f16div_181, "f16div", "f16div (unsigned char, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_182, "f16div", "f16div (unsigned char, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_183, "f16div", "f16div (unsigned char, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_184, "f16div", "f16div (unsigned char, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_185, "f16div", "f16div (unsigned char, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_186, "f16div", "f16div (unsigned char, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_187, "f16div", "f16div (unsigned char, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_188, "f16div", "f16div (unsigned char, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_189, "f16div", "f16div (unsigned char, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_190, "f16div", "f16div (unsigned char, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_191, "f16div", "f16div (unsigned char, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_192, "f16div", "f16div (unsigned char, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16div_193, "f16div", "f16div (unsigned char, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16div_194, "f16div", "f16div (unsigned char, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_195, "f16div", "f16div (unsigned char, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_196, "f16div", "f16div (unsigned char, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_197, "f16div", "f16div (unsigned char, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f16div_198, "f16div", "f16div (short int, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f16div_199, "f16div", "f16div (short int, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f16div_200, "f16div", "f16div (short int, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f16div_201, "f16div", "f16div (short int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f16div_202, "f16div", "f16div (short int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f16div_203, "f16div", "f16div (short int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_204, "f16div", "f16div (short int, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_205, "f16div", "f16div (short int, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_206, "f16div", "f16div (short int, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_207, "f16div", "f16div (short int, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_208, "f16div", "f16div (short int, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_209, "f16div", "f16div (short int, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_210, "f16div", "f16div (short int, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_211, "f16div", "f16div (short int, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_212, "f16div", "f16div (short int, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_213, "f16div", "f16div (short int, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_214, "f16div", "f16div (short int, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16div_215, "f16div", "f16div (short int, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16div_216, "f16div", "f16div (short int, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_217, "f16div", "f16div (short int, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_218, "f16div", "f16div (short int, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_219, "f16div", "f16div (short int, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f16div_220, "f16div", "f16div (unsigned short int, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f16div_221, "f16div", "f16div (unsigned short int, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f16div_222, "f16div", "f16div (unsigned short int, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f16div_223, "f16div", "f16div (unsigned short int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f16div_224, "f16div", "f16div (unsigned short int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f16div_225, "f16div", "f16div (unsigned short int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_226, "f16div", "f16div (unsigned short int, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_227, "f16div", "f16div (unsigned short int, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_228, "f16div", "f16div (unsigned short int, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_229, "f16div", "f16div (unsigned short int, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_230, "f16div", "f16div (unsigned short int, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_231, "f16div", "f16div (unsigned short int, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_232, "f16div", "f16div (unsigned short int, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_233, "f16div", "f16div (unsigned short int, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_234, "f16div", "f16div (unsigned short int, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_235, "f16div", "f16div (unsigned short int, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_236, "f16div", "f16div (unsigned short int, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16div_237, "f16div", "f16div (unsigned short int, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16div_238, "f16div", "f16div (unsigned short int, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_239, "f16div", "f16div (unsigned short int, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_240, "f16div", "f16div (unsigned short int, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_241, "f16div", "f16div (unsigned short int, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f16div_242, "f16div", "f16div (int, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f16div_243, "f16div", "f16div (int, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f16div_244, "f16div", "f16div (int, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f16div_245, "f16div", "f16div (int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f16div_246, "f16div", "f16div (int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f16div_247, "f16div", "f16div (int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_248, "f16div", "f16div (int, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_249, "f16div", "f16div (int, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_250, "f16div", "f16div (int, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_251, "f16div", "f16div (int, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_252, "f16div", "f16div (int, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_253, "f16div", "f16div (int, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_254, "f16div", "f16div (int, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_255, "f16div", "f16div (int, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_256, "f16div", "f16div (int, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_257, "f16div", "f16div (int, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_258, "f16div", "f16div (int, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16div_259, "f16div", "f16div (int, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16div_260, "f16div", "f16div (int, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_261, "f16div", "f16div (int, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_262, "f16div", "f16div (int, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_263, "f16div", "f16div (int, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f16div_264, "f16div", "f16div (unsigned int, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f16div_265, "f16div", "f16div (unsigned int, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f16div_266, "f16div", "f16div (unsigned int, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f16div_267, "f16div", "f16div (unsigned int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f16div_268, "f16div", "f16div (unsigned int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f16div_269, "f16div", "f16div (unsigned int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_270, "f16div", "f16div (unsigned int, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_271, "f16div", "f16div (unsigned int, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_272, "f16div", "f16div (unsigned int, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_273, "f16div", "f16div (unsigned int, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_274, "f16div", "f16div (unsigned int, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_275, "f16div", "f16div (unsigned int, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_276, "f16div", "f16div (unsigned int, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_277, "f16div", "f16div (unsigned int, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_278, "f16div", "f16div (unsigned int, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_279, "f16div", "f16div (unsigned int, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_280, "f16div", "f16div (unsigned int, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16div_281, "f16div", "f16div (unsigned int, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16div_282, "f16div", "f16div (unsigned int, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_283, "f16div", "f16div (unsigned int, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_284, "f16div", "f16div (unsigned int, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_285, "f16div", "f16div (unsigned int, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f16div_286, "f16div", "f16div (long int, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f16div_287, "f16div", "f16div (long int, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f16div_288, "f16div", "f16div (long int, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f16div_289, "f16div", "f16div (long int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f16div_290, "f16div", "f16div (long int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f16div_291, "f16div", "f16div (long int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_292, "f16div", "f16div (long int, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_293, "f16div", "f16div (long int, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_294, "f16div", "f16div (long int, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_295, "f16div", "f16div (long int, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_296, "f16div", "f16div (long int, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_297, "f16div", "f16div (long int, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_298, "f16div", "f16div (long int, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_299, "f16div", "f16div (long int, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_300, "f16div", "f16div (long int, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_301, "f16div", "f16div (long int, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_302, "f16div", "f16div (long int, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16div_303, "f16div", "f16div (long int, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16div_304, "f16div", "f16div (long int, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_305, "f16div", "f16div (long int, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_306, "f16div", "f16div (long int, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_307, "f16div", "f16div (long int, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f16div_308, "f16div", "f16div (unsigned long int, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f16div_309, "f16div", "f16div (unsigned long int, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f16div_310, "f16div", "f16div (unsigned long int, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f16div_311, "f16div", "f16div (unsigned long int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f16div_312, "f16div", "f16div (unsigned long int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f16div_313, "f16div", "f16div (unsigned long int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_314, "f16div", "f16div (unsigned long int, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_315, "f16div", "f16div (unsigned long int, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_316, "f16div", "f16div (unsigned long int, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_317, "f16div", "f16div (unsigned long int, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_318, "f16div", "f16div (unsigned long int, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_319, "f16div", "f16div (unsigned long int, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_320, "f16div", "f16div (unsigned long int, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_321, "f16div", "f16div (unsigned long int, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_322, "f16div", "f16div (unsigned long int, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_323, "f16div", "f16div (unsigned long int, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_324, "f16div", "f16div (unsigned long int, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16div_325, "f16div", "f16div (unsigned long int, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16div_326, "f16div", "f16div (unsigned long int, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_327, "f16div", "f16div (unsigned long int, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_328, "f16div", "f16div (unsigned long int, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_329, "f16div", "f16div (unsigned long int, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f16div_330, "f16div", "f16div (long long int, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f16div_331, "f16div", "f16div (long long int, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f16div_332, "f16div", "f16div (long long int, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f16div_333, "f16div", "f16div (long long int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f16div_334, "f16div", "f16div (long long int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f16div_335, "f16div", "f16div (long long int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_336, "f16div", "f16div (long long int, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_337, "f16div", "f16div (long long int, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_338, "f16div", "f16div (long long int, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_339, "f16div", "f16div (long long int, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_340, "f16div", "f16div (long long int, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_341, "f16div", "f16div (long long int, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_342, "f16div", "f16div (long long int, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_343, "f16div", "f16div (long long int, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_344, "f16div", "f16div (long long int, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_345, "f16div", "f16div (long long int, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_346, "f16div", "f16div (long long int, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16div_347, "f16div", "f16div (long long int, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16div_348, "f16div", "f16div (long long int, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_349, "f16div", "f16div (long long int, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_350, "f16div", "f16div (long long int, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_351, "f16div", "f16div (long long int, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f16div_352, "f16div", "f16div (unsigned long long int, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f16div_353, "f16div", "f16div (unsigned long long int, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f16div_354, "f16div", "f16div (unsigned long long int, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f16div_355, "f16div", "f16div (unsigned long long int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f16div_356, "f16div", "f16div (unsigned long long int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f16div_357, "f16div", "f16div (unsigned long long int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_358, "f16div", "f16div (unsigned long long int, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_359, "f16div", "f16div (unsigned long long int, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_360, "f16div", "f16div (unsigned long long int, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_361, "f16div", "f16div (unsigned long long int, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_362, "f16div", "f16div (unsigned long long int, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_363, "f16div", "f16div (unsigned long long int, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_364, "f16div", "f16div (unsigned long long int, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_365, "f16div", "f16div (unsigned long long int, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_366, "f16div", "f16div (unsigned long long int, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_367, "f16div", "f16div (unsigned long long int, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_368, "f16div", "f16div (unsigned long long int, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16div_369, "f16div", "f16div (unsigned long long int, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16div_370, "f16div", "f16div (unsigned long long int, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_371, "f16div", "f16div (unsigned long long int, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_372, "f16div", "f16div (unsigned long long int, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_373, "f16div", "f16div (unsigned long long int, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_f16div_374, "f16div", "f16div (__int128, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_f16div_375, "f16div", "f16div (__int128, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_f16div_376, "f16div", "f16div (__int128, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_f16div_377, "f16div", "f16div (__int128, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_f16div_378, "f16div", "f16div (__int128, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_f16div_379, "f16div", "f16div (__int128, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16div_380, "f16div", "f16div (__int128, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16div_381, "f16div", "f16div (__int128, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16div_382, "f16div", "f16div (__int128, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16div_383, "f16div", "f16div (__int128, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16div_384, "f16div", "f16div (__int128, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16div_385, "f16div", "f16div (__int128, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16div_386, "f16div", "f16div (__int128, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16div_387, "f16div", "f16div (__int128, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16div_388, "f16div", "f16div (__int128, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16div_389, "f16div", "f16div (__int128, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16div_390, "f16div", "f16div (__int128, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16div_391, "f16div", "f16div (__int128, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16div_392, "f16div", "f16div (__int128, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16div_393, "f16div", "f16div (__int128, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16div_394, "f16div", "f16div (__int128, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16div_395, "f16div", "f16div (__int128, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_f16div_396, "f16div", "f16div (unsigned __int128, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_f16div_397, "f16div", "f16div (unsigned __int128, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_f16div_398, "f16div", "f16div (unsigned __int128, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_f16div_399, "f16div", "f16div (unsigned __int128, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_f16div_400, "f16div", "f16div (unsigned __int128, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_f16div_401, "f16div", "f16div (unsigned __int128, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16div_402, "f16div", "f16div (unsigned __int128, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16div_403, "f16div", "f16div (unsigned __int128, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16div_404, "f16div", "f16div (unsigned __int128, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16div_405, "f16div", "f16div (unsigned __int128, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16div_406, "f16div", "f16div (unsigned __int128, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16div_407, "f16div", "f16div (unsigned __int128, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16div_408, "f16div", "f16div (unsigned __int128, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16div_409, "f16div", "f16div (unsigned __int128, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16div_410, "f16div", "f16div (unsigned __int128, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16div_411, "f16div", "f16div (unsigned __int128, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16div_412, "f16div", "f16div (unsigned __int128, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16div_413, "f16div", "f16div (unsigned __int128, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16div_414, "f16div", "f16div (unsigned __int128, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16div_415, "f16div", "f16div (unsigned __int128, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16div_416, "f16div", "f16div (unsigned __int128, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16div_417, "f16div", "f16div (unsigned __int128, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f16div_418, "f16div", "f16div (enum e, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f16div_419, "f16div", "f16div (enum e, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f16div_420, "f16div", "f16div (enum e, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f16div_421, "f16div", "f16div (enum e, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f16div_422, "f16div", "f16div (enum e, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f16div_423, "f16div", "f16div (enum e, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_424, "f16div", "f16div (enum e, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_425, "f16div", "f16div (enum e, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_426, "f16div", "f16div (enum e, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_427, "f16div", "f16div (enum e, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_428, "f16div", "f16div (enum e, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_429, "f16div", "f16div (enum e, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_430, "f16div", "f16div (enum e, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_431, "f16div", "f16div (enum e, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_432, "f16div", "f16div (enum e, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_433, "f16div", "f16div (enum e, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_434, "f16div", "f16div (enum e, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16div_435, "f16div", "f16div (enum e, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16div_436, "f16div", "f16div (enum e, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_437, "f16div", "f16div (enum e, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_438, "f16div", "f16div (enum e, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_439, "f16div", "f16div (enum e, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f16div_440, "f16div", "f16div (_Bool, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f16div_441, "f16div", "f16div (_Bool, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f16div_442, "f16div", "f16div (_Bool, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f16div_443, "f16div", "f16div (_Bool, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f16div_444, "f16div", "f16div (_Bool, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f16div_445, "f16div", "f16div (_Bool, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_446, "f16div", "f16div (_Bool, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_447, "f16div", "f16div (_Bool, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_448, "f16div", "f16div (_Bool, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_449, "f16div", "f16div (_Bool, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_450, "f16div", "f16div (_Bool, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_451, "f16div", "f16div (_Bool, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_452, "f16div", "f16div (_Bool, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_453, "f16div", "f16div (_Bool, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_454, "f16div", "f16div (_Bool, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_455, "f16div", "f16div (_Bool, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_456, "f16div", "f16div (_Bool, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16div_457, "f16div", "f16div (_Bool, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16div_458, "f16div", "f16div (_Bool, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_459, "f16div", "f16div (_Bool, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_460, "f16div", "f16div (_Bool, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_461, "f16div", "f16div (_Bool, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f16div_462, "f16div", "f16div (bit_field, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f16div_463, "f16div", "f16div (bit_field, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f16div_464, "f16div", "f16div (bit_field, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f16div_465, "f16div", "f16div (bit_field, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f16div_466, "f16div", "f16div (bit_field, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f16div_467, "f16div", "f16div (bit_field, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_468, "f16div", "f16div (bit_field, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_469, "f16div", "f16div (bit_field, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_470, "f16div", "f16div (bit_field, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_471, "f16div", "f16div (bit_field, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_472, "f16div", "f16div (bit_field, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_473, "f16div", "f16div (bit_field, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_474, "f16div", "f16div (bit_field, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_475, "f16div", "f16div (bit_field, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_476, "f16div", "f16div (bit_field, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_477, "f16div", "f16div (bit_field, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_478, "f16div", "f16div (bit_field, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16div_479, "f16div", "f16div (bit_field, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16div_480, "f16div", "f16div (bit_field, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_481, "f16div", "f16div (bit_field, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_482, "f16div", "f16div (bit_field, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16div_483, "f16div", "f16div (bit_field, bit_field)", FLT64_MANT_DIG, 0 },
#endif
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
