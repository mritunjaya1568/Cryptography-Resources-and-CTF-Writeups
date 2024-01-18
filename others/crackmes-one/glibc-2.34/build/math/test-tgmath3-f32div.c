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
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
_Float32
(f32divf32x) (_Float32x arg0 __attribute__ ((unused)), _Float32x arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT32X_MANT_DIG;
  called_func_name = "f32div";
  return 0;
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
_Float32
(f32divf64) (_Float64 arg0 __attribute__ ((unused)), _Float64 arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT64_MANT_DIG;
  called_func_name = "f32div";
  return 0;
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
_Float32
(f32divf64x) (_Float64x arg0 __attribute__ ((unused)), _Float64x arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT64X_MANT_DIG;
  called_func_name = "f32div";
  return 0;
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
_Float32
(f32divf128) (_Float128 arg0 __attribute__ ((unused)), _Float128 arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT128_MANT_DIG;
  called_func_name = "f32div";
  return 0;
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32div_0 (void)
{
  extern typeof (f32div (vol_var__Float16, vol_var__Float16)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Float16, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32
static void
test_f32div_1 (void)
{
  extern typeof (f32div (vol_var__Float16, vol_var__Float32)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Float16, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
static void
test_f32div_2 (void)
{
  extern typeof (f32div (vol_var__Float16, vol_var__Float32x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Float16, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64
static void
test_f32div_3 (void)
{
  extern typeof (f32div (vol_var__Float16, vol_var__Float64)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Float16, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
static void
test_f32div_4 (void)
{
  extern typeof (f32div (vol_var__Float16, vol_var__Float64x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Float16, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F16
static void
test_f32div_5 (void)
{
  extern typeof (f32div (vol_var__Float16, vol_var__Float128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Float16, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32div_6 (void)
{
  extern typeof (f32div (vol_var__Float16, vol_var_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Float16, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32div_7 (void)
{
  extern typeof (f32div (vol_var__Float16, vol_var_signed_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Float16, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32div_8 (void)
{
  extern typeof (f32div (vol_var__Float16, vol_var_unsigned_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Float16, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32div_9 (void)
{
  extern typeof (f32div (vol_var__Float16, vol_var_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Float16, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32div_10 (void)
{
  extern typeof (f32div (vol_var__Float16, vol_var_unsigned_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Float16, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32div_11 (void)
{
  extern typeof (f32div (vol_var__Float16, vol_var_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Float16, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32div_12 (void)
{
  extern typeof (f32div (vol_var__Float16, vol_var_unsigned_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Float16, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32div_13 (void)
{
  extern typeof (f32div (vol_var__Float16, vol_var_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Float16, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32div_14 (void)
{
  extern typeof (f32div (vol_var__Float16, vol_var_unsigned_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Float16, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32div_15 (void)
{
  extern typeof (f32div (vol_var__Float16, vol_var_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Float16, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32div_16 (void)
{
  extern typeof (f32div (vol_var__Float16, vol_var_unsigned_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Float16, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_f32div_17 (void)
{
  extern typeof (f32div (vol_var__Float16, vol_var___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Float16, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_f32div_18 (void)
{
  extern typeof (f32div (vol_var__Float16, vol_var_unsigned___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Float16, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32div_19 (void)
{
  extern typeof (f32div (vol_var__Float16, vol_var_enum_e)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Float16, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32div_20 (void)
{
  extern typeof (f32div (vol_var__Float16, vol_var__Bool)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Float16, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32div_21 (void)
{
  extern typeof (f32div (vol_var__Float16, vol_var_bit_field)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Float16, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32
static void
test_f32div_22 (void)
{
  extern typeof (f32div (vol_var__Float32, vol_var__Float16)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Float32, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32div_23 (void)
{
  extern typeof (f32div (vol_var__Float32, vol_var__Float32)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Float32, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
static void
test_f32div_24 (void)
{
  extern typeof (f32div (vol_var__Float32, vol_var__Float32x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Float32, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64
static void
test_f32div_25 (void)
{
  extern typeof (f32div (vol_var__Float32, vol_var__Float64)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Float32, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
static void
test_f32div_26 (void)
{
  extern typeof (f32div (vol_var__Float32, vol_var__Float64x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Float32, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32
static void
test_f32div_27 (void)
{
  extern typeof (f32div (vol_var__Float32, vol_var__Float128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Float32, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32div_28 (void)
{
  extern typeof (f32div (vol_var__Float32, vol_var_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Float32, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32div_29 (void)
{
  extern typeof (f32div (vol_var__Float32, vol_var_signed_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Float32, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32div_30 (void)
{
  extern typeof (f32div (vol_var__Float32, vol_var_unsigned_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Float32, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32div_31 (void)
{
  extern typeof (f32div (vol_var__Float32, vol_var_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Float32, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32div_32 (void)
{
  extern typeof (f32div (vol_var__Float32, vol_var_unsigned_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Float32, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32div_33 (void)
{
  extern typeof (f32div (vol_var__Float32, vol_var_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Float32, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32div_34 (void)
{
  extern typeof (f32div (vol_var__Float32, vol_var_unsigned_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Float32, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32div_35 (void)
{
  extern typeof (f32div (vol_var__Float32, vol_var_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Float32, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32div_36 (void)
{
  extern typeof (f32div (vol_var__Float32, vol_var_unsigned_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Float32, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32div_37 (void)
{
  extern typeof (f32div (vol_var__Float32, vol_var_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Float32, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32div_38 (void)
{
  extern typeof (f32div (vol_var__Float32, vol_var_unsigned_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Float32, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_f32div_39 (void)
{
  extern typeof (f32div (vol_var__Float32, vol_var___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Float32, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_f32div_40 (void)
{
  extern typeof (f32div (vol_var__Float32, vol_var_unsigned___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Float32, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32div_41 (void)
{
  extern typeof (f32div (vol_var__Float32, vol_var_enum_e)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Float32, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32div_42 (void)
{
  extern typeof (f32div (vol_var__Float32, vol_var__Bool)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Float32, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32div_43 (void)
{
  extern typeof (f32div (vol_var__Float32, vol_var_bit_field)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Float32, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
static void
test_f32div_44 (void)
{
  extern typeof (f32div (vol_var__Float32x, vol_var__Float16)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Float32x, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
static void
test_f32div_45 (void)
{
  extern typeof (f32div (vol_var__Float32x, vol_var__Float32)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Float32x, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32div_46 (void)
{
  extern typeof (f32div (vol_var__Float32x, vol_var__Float32x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Float32x, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64
static void
test_f32div_47 (void)
{
  extern typeof (f32div (vol_var__Float32x, vol_var__Float64)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Float32x, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
static void
test_f32div_48 (void)
{
  extern typeof (f32div (vol_var__Float32x, vol_var__Float64x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Float32x, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
static void
test_f32div_49 (void)
{
  extern typeof (f32div (vol_var__Float32x, vol_var__Float128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Float32x, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32div_50 (void)
{
  extern typeof (f32div (vol_var__Float32x, vol_var_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Float32x, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32div_51 (void)
{
  extern typeof (f32div (vol_var__Float32x, vol_var_signed_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Float32x, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32div_52 (void)
{
  extern typeof (f32div (vol_var__Float32x, vol_var_unsigned_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Float32x, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32div_53 (void)
{
  extern typeof (f32div (vol_var__Float32x, vol_var_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Float32x, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32div_54 (void)
{
  extern typeof (f32div (vol_var__Float32x, vol_var_unsigned_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Float32x, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32div_55 (void)
{
  extern typeof (f32div (vol_var__Float32x, vol_var_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Float32x, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32div_56 (void)
{
  extern typeof (f32div (vol_var__Float32x, vol_var_unsigned_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Float32x, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32div_57 (void)
{
  extern typeof (f32div (vol_var__Float32x, vol_var_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Float32x, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32div_58 (void)
{
  extern typeof (f32div (vol_var__Float32x, vol_var_unsigned_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Float32x, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32div_59 (void)
{
  extern typeof (f32div (vol_var__Float32x, vol_var_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Float32x, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32div_60 (void)
{
  extern typeof (f32div (vol_var__Float32x, vol_var_unsigned_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Float32x, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_f32div_61 (void)
{
  extern typeof (f32div (vol_var__Float32x, vol_var___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Float32x, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_f32div_62 (void)
{
  extern typeof (f32div (vol_var__Float32x, vol_var_unsigned___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Float32x, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32div_63 (void)
{
  extern typeof (f32div (vol_var__Float32x, vol_var_enum_e)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Float32x, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32div_64 (void)
{
  extern typeof (f32div (vol_var__Float32x, vol_var__Bool)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Float32x, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32div_65 (void)
{
  extern typeof (f32div (vol_var__Float32x, vol_var_bit_field)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Float32x, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64
static void
test_f32div_66 (void)
{
  extern typeof (f32div (vol_var__Float64, vol_var__Float16)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Float64, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64
static void
test_f32div_67 (void)
{
  extern typeof (f32div (vol_var__Float64, vol_var__Float32)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Float64, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64
static void
test_f32div_68 (void)
{
  extern typeof (f32div (vol_var__Float64, vol_var__Float32x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Float64, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32div_69 (void)
{
  extern typeof (f32div (vol_var__Float64, vol_var__Float64)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Float64, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
static void
test_f32div_70 (void)
{
  extern typeof (f32div (vol_var__Float64, vol_var__Float64x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Float64, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64
static void
test_f32div_71 (void)
{
  extern typeof (f32div (vol_var__Float64, vol_var__Float128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Float64, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32div_72 (void)
{
  extern typeof (f32div (vol_var__Float64, vol_var_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Float64, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32div_73 (void)
{
  extern typeof (f32div (vol_var__Float64, vol_var_signed_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Float64, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32div_74 (void)
{
  extern typeof (f32div (vol_var__Float64, vol_var_unsigned_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Float64, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32div_75 (void)
{
  extern typeof (f32div (vol_var__Float64, vol_var_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Float64, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32div_76 (void)
{
  extern typeof (f32div (vol_var__Float64, vol_var_unsigned_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Float64, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32div_77 (void)
{
  extern typeof (f32div (vol_var__Float64, vol_var_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Float64, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32div_78 (void)
{
  extern typeof (f32div (vol_var__Float64, vol_var_unsigned_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Float64, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32div_79 (void)
{
  extern typeof (f32div (vol_var__Float64, vol_var_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Float64, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32div_80 (void)
{
  extern typeof (f32div (vol_var__Float64, vol_var_unsigned_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Float64, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32div_81 (void)
{
  extern typeof (f32div (vol_var__Float64, vol_var_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Float64, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32div_82 (void)
{
  extern typeof (f32div (vol_var__Float64, vol_var_unsigned_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Float64, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_f32div_83 (void)
{
  extern typeof (f32div (vol_var__Float64, vol_var___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Float64, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_f32div_84 (void)
{
  extern typeof (f32div (vol_var__Float64, vol_var_unsigned___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Float64, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32div_85 (void)
{
  extern typeof (f32div (vol_var__Float64, vol_var_enum_e)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Float64, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32div_86 (void)
{
  extern typeof (f32div (vol_var__Float64, vol_var__Bool)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Float64, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32div_87 (void)
{
  extern typeof (f32div (vol_var__Float64, vol_var_bit_field)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Float64, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
static void
test_f32div_88 (void)
{
  extern typeof (f32div (vol_var__Float64x, vol_var__Float16)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Float64x, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
static void
test_f32div_89 (void)
{
  extern typeof (f32div (vol_var__Float64x, vol_var__Float32)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Float64x, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
static void
test_f32div_90 (void)
{
  extern typeof (f32div (vol_var__Float64x, vol_var__Float32x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Float64x, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
static void
test_f32div_91 (void)
{
  extern typeof (f32div (vol_var__Float64x, vol_var__Float64)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Float64x, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32div_92 (void)
{
  extern typeof (f32div (vol_var__Float64x, vol_var__Float64x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Float64x, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
static void
test_f32div_93 (void)
{
  extern typeof (f32div (vol_var__Float64x, vol_var__Float128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Float64x, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32div_94 (void)
{
  extern typeof (f32div (vol_var__Float64x, vol_var_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Float64x, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32div_95 (void)
{
  extern typeof (f32div (vol_var__Float64x, vol_var_signed_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Float64x, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32div_96 (void)
{
  extern typeof (f32div (vol_var__Float64x, vol_var_unsigned_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Float64x, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32div_97 (void)
{
  extern typeof (f32div (vol_var__Float64x, vol_var_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Float64x, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32div_98 (void)
{
  extern typeof (f32div (vol_var__Float64x, vol_var_unsigned_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Float64x, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32div_99 (void)
{
  extern typeof (f32div (vol_var__Float64x, vol_var_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Float64x, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32div_100 (void)
{
  extern typeof (f32div (vol_var__Float64x, vol_var_unsigned_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Float64x, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32div_101 (void)
{
  extern typeof (f32div (vol_var__Float64x, vol_var_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Float64x, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32div_102 (void)
{
  extern typeof (f32div (vol_var__Float64x, vol_var_unsigned_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Float64x, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32div_103 (void)
{
  extern typeof (f32div (vol_var__Float64x, vol_var_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Float64x, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32div_104 (void)
{
  extern typeof (f32div (vol_var__Float64x, vol_var_unsigned_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Float64x, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_f32div_105 (void)
{
  extern typeof (f32div (vol_var__Float64x, vol_var___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Float64x, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_f32div_106 (void)
{
  extern typeof (f32div (vol_var__Float64x, vol_var_unsigned___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Float64x, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32div_107 (void)
{
  extern typeof (f32div (vol_var__Float64x, vol_var_enum_e)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Float64x, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32div_108 (void)
{
  extern typeof (f32div (vol_var__Float64x, vol_var__Bool)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Float64x, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32div_109 (void)
{
  extern typeof (f32div (vol_var__Float64x, vol_var_bit_field)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Float64x, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F16
static void
test_f32div_110 (void)
{
  extern typeof (f32div (vol_var__Float128, vol_var__Float16)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Float128, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32
static void
test_f32div_111 (void)
{
  extern typeof (f32div (vol_var__Float128, vol_var__Float32)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Float128, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
static void
test_f32div_112 (void)
{
  extern typeof (f32div (vol_var__Float128, vol_var__Float32x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Float128, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64
static void
test_f32div_113 (void)
{
  extern typeof (f32div (vol_var__Float128, vol_var__Float64)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Float128, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
static void
test_f32div_114 (void)
{
  extern typeof (f32div (vol_var__Float128, vol_var__Float64x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Float128, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32div_115 (void)
{
  extern typeof (f32div (vol_var__Float128, vol_var__Float128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Float128, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32div_116 (void)
{
  extern typeof (f32div (vol_var__Float128, vol_var_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Float128, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32div_117 (void)
{
  extern typeof (f32div (vol_var__Float128, vol_var_signed_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Float128, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32div_118 (void)
{
  extern typeof (f32div (vol_var__Float128, vol_var_unsigned_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Float128, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32div_119 (void)
{
  extern typeof (f32div (vol_var__Float128, vol_var_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Float128, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32div_120 (void)
{
  extern typeof (f32div (vol_var__Float128, vol_var_unsigned_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Float128, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32div_121 (void)
{
  extern typeof (f32div (vol_var__Float128, vol_var_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Float128, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32div_122 (void)
{
  extern typeof (f32div (vol_var__Float128, vol_var_unsigned_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Float128, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32div_123 (void)
{
  extern typeof (f32div (vol_var__Float128, vol_var_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Float128, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32div_124 (void)
{
  extern typeof (f32div (vol_var__Float128, vol_var_unsigned_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Float128, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32div_125 (void)
{
  extern typeof (f32div (vol_var__Float128, vol_var_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Float128, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32div_126 (void)
{
  extern typeof (f32div (vol_var__Float128, vol_var_unsigned_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Float128, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_f32div_127 (void)
{
  extern typeof (f32div (vol_var__Float128, vol_var___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Float128, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_f32div_128 (void)
{
  extern typeof (f32div (vol_var__Float128, vol_var_unsigned___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Float128, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32div_129 (void)
{
  extern typeof (f32div (vol_var__Float128, vol_var_enum_e)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Float128, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32div_130 (void)
{
  extern typeof (f32div (vol_var__Float128, vol_var__Bool)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Float128, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32div_131 (void)
{
  extern typeof (f32div (vol_var__Float128, vol_var_bit_field)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Float128, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32div_132 (void)
{
  extern typeof (f32div (vol_var_char, vol_var__Float16)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_char, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32div_133 (void)
{
  extern typeof (f32div (vol_var_char, vol_var__Float32)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_char, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32div_134 (void)
{
  extern typeof (f32div (vol_var_char, vol_var__Float32x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_char, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32div_135 (void)
{
  extern typeof (f32div (vol_var_char, vol_var__Float64)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_char, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32div_136 (void)
{
  extern typeof (f32div (vol_var_char, vol_var__Float64x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_char, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32div_137 (void)
{
  extern typeof (f32div (vol_var_char, vol_var__Float128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_char, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_138 (void)
{
  extern typeof (f32div (vol_var_char, vol_var_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_char, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_139 (void)
{
  extern typeof (f32div (vol_var_char, vol_var_signed_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_char, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_140 (void)
{
  extern typeof (f32div (vol_var_char, vol_var_unsigned_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_char, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_141 (void)
{
  extern typeof (f32div (vol_var_char, vol_var_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_char, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_142 (void)
{
  extern typeof (f32div (vol_var_char, vol_var_unsigned_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_char, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_143 (void)
{
  extern typeof (f32div (vol_var_char, vol_var_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_char, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_144 (void)
{
  extern typeof (f32div (vol_var_char, vol_var_unsigned_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_char, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_145 (void)
{
  extern typeof (f32div (vol_var_char, vol_var_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_char, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_146 (void)
{
  extern typeof (f32div (vol_var_char, vol_var_unsigned_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_char, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_147 (void)
{
  extern typeof (f32div (vol_var_char, vol_var_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_char, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_148 (void)
{
  extern typeof (f32div (vol_var_char, vol_var_unsigned_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_char, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32div_149 (void)
{
  extern typeof (f32div (vol_var_char, vol_var___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_char, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32div_150 (void)
{
  extern typeof (f32div (vol_var_char, vol_var_unsigned___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_char, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_151 (void)
{
  extern typeof (f32div (vol_var_char, vol_var_enum_e)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_char, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_152 (void)
{
  extern typeof (f32div (vol_var_char, vol_var__Bool)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_char, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_153 (void)
{
  extern typeof (f32div (vol_var_char, vol_var_bit_field)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_char, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32div_154 (void)
{
  extern typeof (f32div (vol_var_signed_char, vol_var__Float16)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_signed_char, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32div_155 (void)
{
  extern typeof (f32div (vol_var_signed_char, vol_var__Float32)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_signed_char, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32div_156 (void)
{
  extern typeof (f32div (vol_var_signed_char, vol_var__Float32x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_signed_char, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32div_157 (void)
{
  extern typeof (f32div (vol_var_signed_char, vol_var__Float64)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_signed_char, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32div_158 (void)
{
  extern typeof (f32div (vol_var_signed_char, vol_var__Float64x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_signed_char, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32div_159 (void)
{
  extern typeof (f32div (vol_var_signed_char, vol_var__Float128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_signed_char, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_160 (void)
{
  extern typeof (f32div (vol_var_signed_char, vol_var_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_signed_char, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_161 (void)
{
  extern typeof (f32div (vol_var_signed_char, vol_var_signed_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_signed_char, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_162 (void)
{
  extern typeof (f32div (vol_var_signed_char, vol_var_unsigned_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_signed_char, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_163 (void)
{
  extern typeof (f32div (vol_var_signed_char, vol_var_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_signed_char, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_164 (void)
{
  extern typeof (f32div (vol_var_signed_char, vol_var_unsigned_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_signed_char, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_165 (void)
{
  extern typeof (f32div (vol_var_signed_char, vol_var_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_signed_char, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_166 (void)
{
  extern typeof (f32div (vol_var_signed_char, vol_var_unsigned_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_signed_char, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_167 (void)
{
  extern typeof (f32div (vol_var_signed_char, vol_var_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_signed_char, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_168 (void)
{
  extern typeof (f32div (vol_var_signed_char, vol_var_unsigned_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_signed_char, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_169 (void)
{
  extern typeof (f32div (vol_var_signed_char, vol_var_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_signed_char, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_170 (void)
{
  extern typeof (f32div (vol_var_signed_char, vol_var_unsigned_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_signed_char, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32div_171 (void)
{
  extern typeof (f32div (vol_var_signed_char, vol_var___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_signed_char, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32div_172 (void)
{
  extern typeof (f32div (vol_var_signed_char, vol_var_unsigned___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_signed_char, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_173 (void)
{
  extern typeof (f32div (vol_var_signed_char, vol_var_enum_e)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_signed_char, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_174 (void)
{
  extern typeof (f32div (vol_var_signed_char, vol_var__Bool)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_signed_char, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_175 (void)
{
  extern typeof (f32div (vol_var_signed_char, vol_var_bit_field)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_signed_char, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32div_176 (void)
{
  extern typeof (f32div (vol_var_unsigned_char, vol_var__Float16)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_unsigned_char, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32div_177 (void)
{
  extern typeof (f32div (vol_var_unsigned_char, vol_var__Float32)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_unsigned_char, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32div_178 (void)
{
  extern typeof (f32div (vol_var_unsigned_char, vol_var__Float32x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_unsigned_char, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32div_179 (void)
{
  extern typeof (f32div (vol_var_unsigned_char, vol_var__Float64)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_unsigned_char, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32div_180 (void)
{
  extern typeof (f32div (vol_var_unsigned_char, vol_var__Float64x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_unsigned_char, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32div_181 (void)
{
  extern typeof (f32div (vol_var_unsigned_char, vol_var__Float128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_unsigned_char, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_182 (void)
{
  extern typeof (f32div (vol_var_unsigned_char, vol_var_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_unsigned_char, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_183 (void)
{
  extern typeof (f32div (vol_var_unsigned_char, vol_var_signed_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_unsigned_char, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_184 (void)
{
  extern typeof (f32div (vol_var_unsigned_char, vol_var_unsigned_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_unsigned_char, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_185 (void)
{
  extern typeof (f32div (vol_var_unsigned_char, vol_var_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_unsigned_char, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_186 (void)
{
  extern typeof (f32div (vol_var_unsigned_char, vol_var_unsigned_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_unsigned_char, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_187 (void)
{
  extern typeof (f32div (vol_var_unsigned_char, vol_var_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_unsigned_char, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_188 (void)
{
  extern typeof (f32div (vol_var_unsigned_char, vol_var_unsigned_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_unsigned_char, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_189 (void)
{
  extern typeof (f32div (vol_var_unsigned_char, vol_var_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_unsigned_char, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_190 (void)
{
  extern typeof (f32div (vol_var_unsigned_char, vol_var_unsigned_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_unsigned_char, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_191 (void)
{
  extern typeof (f32div (vol_var_unsigned_char, vol_var_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_unsigned_char, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_192 (void)
{
  extern typeof (f32div (vol_var_unsigned_char, vol_var_unsigned_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_unsigned_char, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32div_193 (void)
{
  extern typeof (f32div (vol_var_unsigned_char, vol_var___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_unsigned_char, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32div_194 (void)
{
  extern typeof (f32div (vol_var_unsigned_char, vol_var_unsigned___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_unsigned_char, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_195 (void)
{
  extern typeof (f32div (vol_var_unsigned_char, vol_var_enum_e)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_unsigned_char, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_196 (void)
{
  extern typeof (f32div (vol_var_unsigned_char, vol_var__Bool)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_unsigned_char, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_197 (void)
{
  extern typeof (f32div (vol_var_unsigned_char, vol_var_bit_field)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_unsigned_char, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32div_198 (void)
{
  extern typeof (f32div (vol_var_short_int, vol_var__Float16)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_short_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32div_199 (void)
{
  extern typeof (f32div (vol_var_short_int, vol_var__Float32)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_short_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32div_200 (void)
{
  extern typeof (f32div (vol_var_short_int, vol_var__Float32x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_short_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32div_201 (void)
{
  extern typeof (f32div (vol_var_short_int, vol_var__Float64)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_short_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32div_202 (void)
{
  extern typeof (f32div (vol_var_short_int, vol_var__Float64x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_short_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32div_203 (void)
{
  extern typeof (f32div (vol_var_short_int, vol_var__Float128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_short_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_204 (void)
{
  extern typeof (f32div (vol_var_short_int, vol_var_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_short_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_205 (void)
{
  extern typeof (f32div (vol_var_short_int, vol_var_signed_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_short_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_206 (void)
{
  extern typeof (f32div (vol_var_short_int, vol_var_unsigned_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_short_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_207 (void)
{
  extern typeof (f32div (vol_var_short_int, vol_var_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_short_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_208 (void)
{
  extern typeof (f32div (vol_var_short_int, vol_var_unsigned_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_short_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_209 (void)
{
  extern typeof (f32div (vol_var_short_int, vol_var_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_short_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_210 (void)
{
  extern typeof (f32div (vol_var_short_int, vol_var_unsigned_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_short_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_211 (void)
{
  extern typeof (f32div (vol_var_short_int, vol_var_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_short_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_212 (void)
{
  extern typeof (f32div (vol_var_short_int, vol_var_unsigned_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_short_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_213 (void)
{
  extern typeof (f32div (vol_var_short_int, vol_var_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_short_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_214 (void)
{
  extern typeof (f32div (vol_var_short_int, vol_var_unsigned_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_short_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32div_215 (void)
{
  extern typeof (f32div (vol_var_short_int, vol_var___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_short_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32div_216 (void)
{
  extern typeof (f32div (vol_var_short_int, vol_var_unsigned___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_short_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_217 (void)
{
  extern typeof (f32div (vol_var_short_int, vol_var_enum_e)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_short_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_218 (void)
{
  extern typeof (f32div (vol_var_short_int, vol_var__Bool)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_short_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_219 (void)
{
  extern typeof (f32div (vol_var_short_int, vol_var_bit_field)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_short_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32div_220 (void)
{
  extern typeof (f32div (vol_var_unsigned_short_int, vol_var__Float16)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_unsigned_short_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32div_221 (void)
{
  extern typeof (f32div (vol_var_unsigned_short_int, vol_var__Float32)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_unsigned_short_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32div_222 (void)
{
  extern typeof (f32div (vol_var_unsigned_short_int, vol_var__Float32x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_unsigned_short_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32div_223 (void)
{
  extern typeof (f32div (vol_var_unsigned_short_int, vol_var__Float64)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_unsigned_short_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32div_224 (void)
{
  extern typeof (f32div (vol_var_unsigned_short_int, vol_var__Float64x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_unsigned_short_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32div_225 (void)
{
  extern typeof (f32div (vol_var_unsigned_short_int, vol_var__Float128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_unsigned_short_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_226 (void)
{
  extern typeof (f32div (vol_var_unsigned_short_int, vol_var_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_unsigned_short_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_227 (void)
{
  extern typeof (f32div (vol_var_unsigned_short_int, vol_var_signed_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_unsigned_short_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_228 (void)
{
  extern typeof (f32div (vol_var_unsigned_short_int, vol_var_unsigned_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_unsigned_short_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_229 (void)
{
  extern typeof (f32div (vol_var_unsigned_short_int, vol_var_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_unsigned_short_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_230 (void)
{
  extern typeof (f32div (vol_var_unsigned_short_int, vol_var_unsigned_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_unsigned_short_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_231 (void)
{
  extern typeof (f32div (vol_var_unsigned_short_int, vol_var_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_unsigned_short_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_232 (void)
{
  extern typeof (f32div (vol_var_unsigned_short_int, vol_var_unsigned_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_unsigned_short_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_233 (void)
{
  extern typeof (f32div (vol_var_unsigned_short_int, vol_var_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_unsigned_short_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_234 (void)
{
  extern typeof (f32div (vol_var_unsigned_short_int, vol_var_unsigned_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_unsigned_short_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_235 (void)
{
  extern typeof (f32div (vol_var_unsigned_short_int, vol_var_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_unsigned_short_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_236 (void)
{
  extern typeof (f32div (vol_var_unsigned_short_int, vol_var_unsigned_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_unsigned_short_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32div_237 (void)
{
  extern typeof (f32div (vol_var_unsigned_short_int, vol_var___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_unsigned_short_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32div_238 (void)
{
  extern typeof (f32div (vol_var_unsigned_short_int, vol_var_unsigned___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_unsigned_short_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_239 (void)
{
  extern typeof (f32div (vol_var_unsigned_short_int, vol_var_enum_e)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_unsigned_short_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_240 (void)
{
  extern typeof (f32div (vol_var_unsigned_short_int, vol_var__Bool)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_unsigned_short_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_241 (void)
{
  extern typeof (f32div (vol_var_unsigned_short_int, vol_var_bit_field)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_unsigned_short_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32div_242 (void)
{
  extern typeof (f32div (vol_var_int, vol_var__Float16)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32div_243 (void)
{
  extern typeof (f32div (vol_var_int, vol_var__Float32)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32div_244 (void)
{
  extern typeof (f32div (vol_var_int, vol_var__Float32x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32div_245 (void)
{
  extern typeof (f32div (vol_var_int, vol_var__Float64)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32div_246 (void)
{
  extern typeof (f32div (vol_var_int, vol_var__Float64x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32div_247 (void)
{
  extern typeof (f32div (vol_var_int, vol_var__Float128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_248 (void)
{
  extern typeof (f32div (vol_var_int, vol_var_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_249 (void)
{
  extern typeof (f32div (vol_var_int, vol_var_signed_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_250 (void)
{
  extern typeof (f32div (vol_var_int, vol_var_unsigned_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_251 (void)
{
  extern typeof (f32div (vol_var_int, vol_var_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_252 (void)
{
  extern typeof (f32div (vol_var_int, vol_var_unsigned_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_253 (void)
{
  extern typeof (f32div (vol_var_int, vol_var_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_254 (void)
{
  extern typeof (f32div (vol_var_int, vol_var_unsigned_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_255 (void)
{
  extern typeof (f32div (vol_var_int, vol_var_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_256 (void)
{
  extern typeof (f32div (vol_var_int, vol_var_unsigned_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_257 (void)
{
  extern typeof (f32div (vol_var_int, vol_var_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_258 (void)
{
  extern typeof (f32div (vol_var_int, vol_var_unsigned_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32div_259 (void)
{
  extern typeof (f32div (vol_var_int, vol_var___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32div_260 (void)
{
  extern typeof (f32div (vol_var_int, vol_var_unsigned___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_261 (void)
{
  extern typeof (f32div (vol_var_int, vol_var_enum_e)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_262 (void)
{
  extern typeof (f32div (vol_var_int, vol_var__Bool)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_263 (void)
{
  extern typeof (f32div (vol_var_int, vol_var_bit_field)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32div_264 (void)
{
  extern typeof (f32div (vol_var_unsigned_int, vol_var__Float16)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_unsigned_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32div_265 (void)
{
  extern typeof (f32div (vol_var_unsigned_int, vol_var__Float32)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_unsigned_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32div_266 (void)
{
  extern typeof (f32div (vol_var_unsigned_int, vol_var__Float32x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_unsigned_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32div_267 (void)
{
  extern typeof (f32div (vol_var_unsigned_int, vol_var__Float64)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_unsigned_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32div_268 (void)
{
  extern typeof (f32div (vol_var_unsigned_int, vol_var__Float64x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_unsigned_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32div_269 (void)
{
  extern typeof (f32div (vol_var_unsigned_int, vol_var__Float128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_unsigned_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_270 (void)
{
  extern typeof (f32div (vol_var_unsigned_int, vol_var_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_unsigned_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_271 (void)
{
  extern typeof (f32div (vol_var_unsigned_int, vol_var_signed_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_unsigned_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_272 (void)
{
  extern typeof (f32div (vol_var_unsigned_int, vol_var_unsigned_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_unsigned_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_273 (void)
{
  extern typeof (f32div (vol_var_unsigned_int, vol_var_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_unsigned_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_274 (void)
{
  extern typeof (f32div (vol_var_unsigned_int, vol_var_unsigned_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_unsigned_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_275 (void)
{
  extern typeof (f32div (vol_var_unsigned_int, vol_var_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_unsigned_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_276 (void)
{
  extern typeof (f32div (vol_var_unsigned_int, vol_var_unsigned_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_unsigned_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_277 (void)
{
  extern typeof (f32div (vol_var_unsigned_int, vol_var_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_unsigned_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_278 (void)
{
  extern typeof (f32div (vol_var_unsigned_int, vol_var_unsigned_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_unsigned_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_279 (void)
{
  extern typeof (f32div (vol_var_unsigned_int, vol_var_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_unsigned_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_280 (void)
{
  extern typeof (f32div (vol_var_unsigned_int, vol_var_unsigned_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_unsigned_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32div_281 (void)
{
  extern typeof (f32div (vol_var_unsigned_int, vol_var___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_unsigned_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32div_282 (void)
{
  extern typeof (f32div (vol_var_unsigned_int, vol_var_unsigned___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_unsigned_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_283 (void)
{
  extern typeof (f32div (vol_var_unsigned_int, vol_var_enum_e)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_unsigned_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_284 (void)
{
  extern typeof (f32div (vol_var_unsigned_int, vol_var__Bool)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_unsigned_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_285 (void)
{
  extern typeof (f32div (vol_var_unsigned_int, vol_var_bit_field)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_unsigned_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32div_286 (void)
{
  extern typeof (f32div (vol_var_long_int, vol_var__Float16)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_long_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32div_287 (void)
{
  extern typeof (f32div (vol_var_long_int, vol_var__Float32)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_long_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32div_288 (void)
{
  extern typeof (f32div (vol_var_long_int, vol_var__Float32x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_long_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32div_289 (void)
{
  extern typeof (f32div (vol_var_long_int, vol_var__Float64)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_long_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32div_290 (void)
{
  extern typeof (f32div (vol_var_long_int, vol_var__Float64x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_long_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32div_291 (void)
{
  extern typeof (f32div (vol_var_long_int, vol_var__Float128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_long_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_292 (void)
{
  extern typeof (f32div (vol_var_long_int, vol_var_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_long_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_293 (void)
{
  extern typeof (f32div (vol_var_long_int, vol_var_signed_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_long_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_294 (void)
{
  extern typeof (f32div (vol_var_long_int, vol_var_unsigned_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_long_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_295 (void)
{
  extern typeof (f32div (vol_var_long_int, vol_var_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_long_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_296 (void)
{
  extern typeof (f32div (vol_var_long_int, vol_var_unsigned_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_long_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_297 (void)
{
  extern typeof (f32div (vol_var_long_int, vol_var_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_long_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_298 (void)
{
  extern typeof (f32div (vol_var_long_int, vol_var_unsigned_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_long_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_299 (void)
{
  extern typeof (f32div (vol_var_long_int, vol_var_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_long_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_300 (void)
{
  extern typeof (f32div (vol_var_long_int, vol_var_unsigned_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_long_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_301 (void)
{
  extern typeof (f32div (vol_var_long_int, vol_var_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_long_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_302 (void)
{
  extern typeof (f32div (vol_var_long_int, vol_var_unsigned_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_long_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32div_303 (void)
{
  extern typeof (f32div (vol_var_long_int, vol_var___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_long_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32div_304 (void)
{
  extern typeof (f32div (vol_var_long_int, vol_var_unsigned___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_long_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_305 (void)
{
  extern typeof (f32div (vol_var_long_int, vol_var_enum_e)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_long_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_306 (void)
{
  extern typeof (f32div (vol_var_long_int, vol_var__Bool)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_long_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_307 (void)
{
  extern typeof (f32div (vol_var_long_int, vol_var_bit_field)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_long_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32div_308 (void)
{
  extern typeof (f32div (vol_var_unsigned_long_int, vol_var__Float16)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_unsigned_long_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32div_309 (void)
{
  extern typeof (f32div (vol_var_unsigned_long_int, vol_var__Float32)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_unsigned_long_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32div_310 (void)
{
  extern typeof (f32div (vol_var_unsigned_long_int, vol_var__Float32x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_unsigned_long_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32div_311 (void)
{
  extern typeof (f32div (vol_var_unsigned_long_int, vol_var__Float64)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_unsigned_long_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32div_312 (void)
{
  extern typeof (f32div (vol_var_unsigned_long_int, vol_var__Float64x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_unsigned_long_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32div_313 (void)
{
  extern typeof (f32div (vol_var_unsigned_long_int, vol_var__Float128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_unsigned_long_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_314 (void)
{
  extern typeof (f32div (vol_var_unsigned_long_int, vol_var_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_unsigned_long_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_315 (void)
{
  extern typeof (f32div (vol_var_unsigned_long_int, vol_var_signed_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_unsigned_long_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_316 (void)
{
  extern typeof (f32div (vol_var_unsigned_long_int, vol_var_unsigned_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_unsigned_long_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_317 (void)
{
  extern typeof (f32div (vol_var_unsigned_long_int, vol_var_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_unsigned_long_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_318 (void)
{
  extern typeof (f32div (vol_var_unsigned_long_int, vol_var_unsigned_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_unsigned_long_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_319 (void)
{
  extern typeof (f32div (vol_var_unsigned_long_int, vol_var_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_unsigned_long_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_320 (void)
{
  extern typeof (f32div (vol_var_unsigned_long_int, vol_var_unsigned_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_unsigned_long_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_321 (void)
{
  extern typeof (f32div (vol_var_unsigned_long_int, vol_var_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_unsigned_long_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_322 (void)
{
  extern typeof (f32div (vol_var_unsigned_long_int, vol_var_unsigned_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_unsigned_long_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_323 (void)
{
  extern typeof (f32div (vol_var_unsigned_long_int, vol_var_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_unsigned_long_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_324 (void)
{
  extern typeof (f32div (vol_var_unsigned_long_int, vol_var_unsigned_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_unsigned_long_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32div_325 (void)
{
  extern typeof (f32div (vol_var_unsigned_long_int, vol_var___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_unsigned_long_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32div_326 (void)
{
  extern typeof (f32div (vol_var_unsigned_long_int, vol_var_unsigned___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_unsigned_long_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_327 (void)
{
  extern typeof (f32div (vol_var_unsigned_long_int, vol_var_enum_e)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_unsigned_long_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_328 (void)
{
  extern typeof (f32div (vol_var_unsigned_long_int, vol_var__Bool)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_unsigned_long_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_329 (void)
{
  extern typeof (f32div (vol_var_unsigned_long_int, vol_var_bit_field)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_unsigned_long_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32div_330 (void)
{
  extern typeof (f32div (vol_var_long_long_int, vol_var__Float16)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_long_long_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32div_331 (void)
{
  extern typeof (f32div (vol_var_long_long_int, vol_var__Float32)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_long_long_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32div_332 (void)
{
  extern typeof (f32div (vol_var_long_long_int, vol_var__Float32x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_long_long_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32div_333 (void)
{
  extern typeof (f32div (vol_var_long_long_int, vol_var__Float64)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_long_long_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32div_334 (void)
{
  extern typeof (f32div (vol_var_long_long_int, vol_var__Float64x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_long_long_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32div_335 (void)
{
  extern typeof (f32div (vol_var_long_long_int, vol_var__Float128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_long_long_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_336 (void)
{
  extern typeof (f32div (vol_var_long_long_int, vol_var_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_long_long_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_337 (void)
{
  extern typeof (f32div (vol_var_long_long_int, vol_var_signed_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_long_long_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_338 (void)
{
  extern typeof (f32div (vol_var_long_long_int, vol_var_unsigned_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_long_long_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_339 (void)
{
  extern typeof (f32div (vol_var_long_long_int, vol_var_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_long_long_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_340 (void)
{
  extern typeof (f32div (vol_var_long_long_int, vol_var_unsigned_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_long_long_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_341 (void)
{
  extern typeof (f32div (vol_var_long_long_int, vol_var_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_long_long_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_342 (void)
{
  extern typeof (f32div (vol_var_long_long_int, vol_var_unsigned_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_long_long_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_343 (void)
{
  extern typeof (f32div (vol_var_long_long_int, vol_var_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_long_long_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_344 (void)
{
  extern typeof (f32div (vol_var_long_long_int, vol_var_unsigned_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_long_long_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_345 (void)
{
  extern typeof (f32div (vol_var_long_long_int, vol_var_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_long_long_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_346 (void)
{
  extern typeof (f32div (vol_var_long_long_int, vol_var_unsigned_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_long_long_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32div_347 (void)
{
  extern typeof (f32div (vol_var_long_long_int, vol_var___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_long_long_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32div_348 (void)
{
  extern typeof (f32div (vol_var_long_long_int, vol_var_unsigned___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_long_long_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_349 (void)
{
  extern typeof (f32div (vol_var_long_long_int, vol_var_enum_e)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_long_long_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_350 (void)
{
  extern typeof (f32div (vol_var_long_long_int, vol_var__Bool)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_long_long_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_351 (void)
{
  extern typeof (f32div (vol_var_long_long_int, vol_var_bit_field)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_long_long_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32div_352 (void)
{
  extern typeof (f32div (vol_var_unsigned_long_long_int, vol_var__Float16)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_unsigned_long_long_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32div_353 (void)
{
  extern typeof (f32div (vol_var_unsigned_long_long_int, vol_var__Float32)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_unsigned_long_long_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32div_354 (void)
{
  extern typeof (f32div (vol_var_unsigned_long_long_int, vol_var__Float32x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_unsigned_long_long_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32div_355 (void)
{
  extern typeof (f32div (vol_var_unsigned_long_long_int, vol_var__Float64)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_unsigned_long_long_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32div_356 (void)
{
  extern typeof (f32div (vol_var_unsigned_long_long_int, vol_var__Float64x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_unsigned_long_long_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32div_357 (void)
{
  extern typeof (f32div (vol_var_unsigned_long_long_int, vol_var__Float128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_unsigned_long_long_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_358 (void)
{
  extern typeof (f32div (vol_var_unsigned_long_long_int, vol_var_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_unsigned_long_long_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_359 (void)
{
  extern typeof (f32div (vol_var_unsigned_long_long_int, vol_var_signed_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_unsigned_long_long_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_360 (void)
{
  extern typeof (f32div (vol_var_unsigned_long_long_int, vol_var_unsigned_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_unsigned_long_long_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_361 (void)
{
  extern typeof (f32div (vol_var_unsigned_long_long_int, vol_var_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_unsigned_long_long_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_362 (void)
{
  extern typeof (f32div (vol_var_unsigned_long_long_int, vol_var_unsigned_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_unsigned_long_long_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_363 (void)
{
  extern typeof (f32div (vol_var_unsigned_long_long_int, vol_var_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_unsigned_long_long_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_364 (void)
{
  extern typeof (f32div (vol_var_unsigned_long_long_int, vol_var_unsigned_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_unsigned_long_long_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_365 (void)
{
  extern typeof (f32div (vol_var_unsigned_long_long_int, vol_var_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_unsigned_long_long_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_366 (void)
{
  extern typeof (f32div (vol_var_unsigned_long_long_int, vol_var_unsigned_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_unsigned_long_long_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_367 (void)
{
  extern typeof (f32div (vol_var_unsigned_long_long_int, vol_var_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_unsigned_long_long_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_368 (void)
{
  extern typeof (f32div (vol_var_unsigned_long_long_int, vol_var_unsigned_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_unsigned_long_long_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32div_369 (void)
{
  extern typeof (f32div (vol_var_unsigned_long_long_int, vol_var___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_unsigned_long_long_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32div_370 (void)
{
  extern typeof (f32div (vol_var_unsigned_long_long_int, vol_var_unsigned___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_unsigned_long_long_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_371 (void)
{
  extern typeof (f32div (vol_var_unsigned_long_long_int, vol_var_enum_e)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_unsigned_long_long_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_372 (void)
{
  extern typeof (f32div (vol_var_unsigned_long_long_int, vol_var__Bool)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_unsigned_long_long_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_373 (void)
{
  extern typeof (f32div (vol_var_unsigned_long_long_int, vol_var_bit_field)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_unsigned_long_long_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_f32div_374 (void)
{
  extern typeof (f32div (vol_var___int128, vol_var__Float16)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var___int128, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_f32div_375 (void)
{
  extern typeof (f32div (vol_var___int128, vol_var__Float32)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var___int128, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_f32div_376 (void)
{
  extern typeof (f32div (vol_var___int128, vol_var__Float32x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var___int128, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_f32div_377 (void)
{
  extern typeof (f32div (vol_var___int128, vol_var__Float64)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var___int128, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_f32div_378 (void)
{
  extern typeof (f32div (vol_var___int128, vol_var__Float64x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var___int128, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_f32div_379 (void)
{
  extern typeof (f32div (vol_var___int128, vol_var__Float128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var___int128, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32div_380 (void)
{
  extern typeof (f32div (vol_var___int128, vol_var_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var___int128, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32div_381 (void)
{
  extern typeof (f32div (vol_var___int128, vol_var_signed_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var___int128, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32div_382 (void)
{
  extern typeof (f32div (vol_var___int128, vol_var_unsigned_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var___int128, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32div_383 (void)
{
  extern typeof (f32div (vol_var___int128, vol_var_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var___int128, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32div_384 (void)
{
  extern typeof (f32div (vol_var___int128, vol_var_unsigned_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var___int128, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32div_385 (void)
{
  extern typeof (f32div (vol_var___int128, vol_var_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var___int128, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32div_386 (void)
{
  extern typeof (f32div (vol_var___int128, vol_var_unsigned_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var___int128, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32div_387 (void)
{
  extern typeof (f32div (vol_var___int128, vol_var_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var___int128, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32div_388 (void)
{
  extern typeof (f32div (vol_var___int128, vol_var_unsigned_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var___int128, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32div_389 (void)
{
  extern typeof (f32div (vol_var___int128, vol_var_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var___int128, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32div_390 (void)
{
  extern typeof (f32div (vol_var___int128, vol_var_unsigned_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var___int128, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32div_391 (void)
{
  extern typeof (f32div (vol_var___int128, vol_var___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var___int128, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32div_392 (void)
{
  extern typeof (f32div (vol_var___int128, vol_var_unsigned___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var___int128, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32div_393 (void)
{
  extern typeof (f32div (vol_var___int128, vol_var_enum_e)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var___int128, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32div_394 (void)
{
  extern typeof (f32div (vol_var___int128, vol_var__Bool)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var___int128, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32div_395 (void)
{
  extern typeof (f32div (vol_var___int128, vol_var_bit_field)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var___int128, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_f32div_396 (void)
{
  extern typeof (f32div (vol_var_unsigned___int128, vol_var__Float16)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_unsigned___int128, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_f32div_397 (void)
{
  extern typeof (f32div (vol_var_unsigned___int128, vol_var__Float32)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_unsigned___int128, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_f32div_398 (void)
{
  extern typeof (f32div (vol_var_unsigned___int128, vol_var__Float32x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_unsigned___int128, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_f32div_399 (void)
{
  extern typeof (f32div (vol_var_unsigned___int128, vol_var__Float64)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_unsigned___int128, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_f32div_400 (void)
{
  extern typeof (f32div (vol_var_unsigned___int128, vol_var__Float64x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_unsigned___int128, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_f32div_401 (void)
{
  extern typeof (f32div (vol_var_unsigned___int128, vol_var__Float128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_unsigned___int128, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32div_402 (void)
{
  extern typeof (f32div (vol_var_unsigned___int128, vol_var_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_unsigned___int128, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32div_403 (void)
{
  extern typeof (f32div (vol_var_unsigned___int128, vol_var_signed_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_unsigned___int128, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32div_404 (void)
{
  extern typeof (f32div (vol_var_unsigned___int128, vol_var_unsigned_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_unsigned___int128, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32div_405 (void)
{
  extern typeof (f32div (vol_var_unsigned___int128, vol_var_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_unsigned___int128, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32div_406 (void)
{
  extern typeof (f32div (vol_var_unsigned___int128, vol_var_unsigned_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_unsigned___int128, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32div_407 (void)
{
  extern typeof (f32div (vol_var_unsigned___int128, vol_var_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_unsigned___int128, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32div_408 (void)
{
  extern typeof (f32div (vol_var_unsigned___int128, vol_var_unsigned_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_unsigned___int128, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32div_409 (void)
{
  extern typeof (f32div (vol_var_unsigned___int128, vol_var_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_unsigned___int128, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32div_410 (void)
{
  extern typeof (f32div (vol_var_unsigned___int128, vol_var_unsigned_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_unsigned___int128, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32div_411 (void)
{
  extern typeof (f32div (vol_var_unsigned___int128, vol_var_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_unsigned___int128, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32div_412 (void)
{
  extern typeof (f32div (vol_var_unsigned___int128, vol_var_unsigned_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_unsigned___int128, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32div_413 (void)
{
  extern typeof (f32div (vol_var_unsigned___int128, vol_var___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_unsigned___int128, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32div_414 (void)
{
  extern typeof (f32div (vol_var_unsigned___int128, vol_var_unsigned___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_unsigned___int128, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32div_415 (void)
{
  extern typeof (f32div (vol_var_unsigned___int128, vol_var_enum_e)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_unsigned___int128, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32div_416 (void)
{
  extern typeof (f32div (vol_var_unsigned___int128, vol_var__Bool)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_unsigned___int128, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32div_417 (void)
{
  extern typeof (f32div (vol_var_unsigned___int128, vol_var_bit_field)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_unsigned___int128, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32div_418 (void)
{
  extern typeof (f32div (vol_var_enum_e, vol_var__Float16)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_enum_e, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32div_419 (void)
{
  extern typeof (f32div (vol_var_enum_e, vol_var__Float32)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_enum_e, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32div_420 (void)
{
  extern typeof (f32div (vol_var_enum_e, vol_var__Float32x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_enum_e, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32div_421 (void)
{
  extern typeof (f32div (vol_var_enum_e, vol_var__Float64)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_enum_e, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32div_422 (void)
{
  extern typeof (f32div (vol_var_enum_e, vol_var__Float64x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_enum_e, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32div_423 (void)
{
  extern typeof (f32div (vol_var_enum_e, vol_var__Float128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_enum_e, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_424 (void)
{
  extern typeof (f32div (vol_var_enum_e, vol_var_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_enum_e, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_425 (void)
{
  extern typeof (f32div (vol_var_enum_e, vol_var_signed_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_enum_e, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_426 (void)
{
  extern typeof (f32div (vol_var_enum_e, vol_var_unsigned_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_enum_e, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_427 (void)
{
  extern typeof (f32div (vol_var_enum_e, vol_var_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_enum_e, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_428 (void)
{
  extern typeof (f32div (vol_var_enum_e, vol_var_unsigned_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_enum_e, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_429 (void)
{
  extern typeof (f32div (vol_var_enum_e, vol_var_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_enum_e, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_430 (void)
{
  extern typeof (f32div (vol_var_enum_e, vol_var_unsigned_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_enum_e, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_431 (void)
{
  extern typeof (f32div (vol_var_enum_e, vol_var_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_enum_e, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_432 (void)
{
  extern typeof (f32div (vol_var_enum_e, vol_var_unsigned_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_enum_e, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_433 (void)
{
  extern typeof (f32div (vol_var_enum_e, vol_var_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_enum_e, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_434 (void)
{
  extern typeof (f32div (vol_var_enum_e, vol_var_unsigned_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_enum_e, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32div_435 (void)
{
  extern typeof (f32div (vol_var_enum_e, vol_var___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_enum_e, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32div_436 (void)
{
  extern typeof (f32div (vol_var_enum_e, vol_var_unsigned___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_enum_e, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_437 (void)
{
  extern typeof (f32div (vol_var_enum_e, vol_var_enum_e)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_enum_e, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_438 (void)
{
  extern typeof (f32div (vol_var_enum_e, vol_var__Bool)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_enum_e, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_439 (void)
{
  extern typeof (f32div (vol_var_enum_e, vol_var_bit_field)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_enum_e, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32div_440 (void)
{
  extern typeof (f32div (vol_var__Bool, vol_var__Float16)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Bool, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32div_441 (void)
{
  extern typeof (f32div (vol_var__Bool, vol_var__Float32)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Bool, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32div_442 (void)
{
  extern typeof (f32div (vol_var__Bool, vol_var__Float32x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Bool, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32div_443 (void)
{
  extern typeof (f32div (vol_var__Bool, vol_var__Float64)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Bool, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32div_444 (void)
{
  extern typeof (f32div (vol_var__Bool, vol_var__Float64x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Bool, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32div_445 (void)
{
  extern typeof (f32div (vol_var__Bool, vol_var__Float128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Bool, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_446 (void)
{
  extern typeof (f32div (vol_var__Bool, vol_var_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Bool, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_447 (void)
{
  extern typeof (f32div (vol_var__Bool, vol_var_signed_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Bool, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_448 (void)
{
  extern typeof (f32div (vol_var__Bool, vol_var_unsigned_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Bool, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_449 (void)
{
  extern typeof (f32div (vol_var__Bool, vol_var_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Bool, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_450 (void)
{
  extern typeof (f32div (vol_var__Bool, vol_var_unsigned_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Bool, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_451 (void)
{
  extern typeof (f32div (vol_var__Bool, vol_var_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Bool, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_452 (void)
{
  extern typeof (f32div (vol_var__Bool, vol_var_unsigned_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Bool, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_453 (void)
{
  extern typeof (f32div (vol_var__Bool, vol_var_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Bool, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_454 (void)
{
  extern typeof (f32div (vol_var__Bool, vol_var_unsigned_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Bool, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_455 (void)
{
  extern typeof (f32div (vol_var__Bool, vol_var_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Bool, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_456 (void)
{
  extern typeof (f32div (vol_var__Bool, vol_var_unsigned_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Bool, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32div_457 (void)
{
  extern typeof (f32div (vol_var__Bool, vol_var___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Bool, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32div_458 (void)
{
  extern typeof (f32div (vol_var__Bool, vol_var_unsigned___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Bool, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_459 (void)
{
  extern typeof (f32div (vol_var__Bool, vol_var_enum_e)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Bool, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_460 (void)
{
  extern typeof (f32div (vol_var__Bool, vol_var__Bool)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Bool, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_461 (void)
{
  extern typeof (f32div (vol_var__Bool, vol_var_bit_field)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var__Bool, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32div_462 (void)
{
  extern typeof (f32div (vol_var_bit_field, vol_var__Float16)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_bit_field, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32div_463 (void)
{
  extern typeof (f32div (vol_var_bit_field, vol_var__Float32)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_bit_field, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32div_464 (void)
{
  extern typeof (f32div (vol_var_bit_field, vol_var__Float32x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_bit_field, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32div_465 (void)
{
  extern typeof (f32div (vol_var_bit_field, vol_var__Float64)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_bit_field, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32div_466 (void)
{
  extern typeof (f32div (vol_var_bit_field, vol_var__Float64x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_bit_field, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32div_467 (void)
{
  extern typeof (f32div (vol_var_bit_field, vol_var__Float128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_bit_field, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_468 (void)
{
  extern typeof (f32div (vol_var_bit_field, vol_var_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_bit_field, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_469 (void)
{
  extern typeof (f32div (vol_var_bit_field, vol_var_signed_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_bit_field, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_470 (void)
{
  extern typeof (f32div (vol_var_bit_field, vol_var_unsigned_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_bit_field, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_471 (void)
{
  extern typeof (f32div (vol_var_bit_field, vol_var_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_bit_field, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_472 (void)
{
  extern typeof (f32div (vol_var_bit_field, vol_var_unsigned_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_bit_field, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_473 (void)
{
  extern typeof (f32div (vol_var_bit_field, vol_var_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_bit_field, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_474 (void)
{
  extern typeof (f32div (vol_var_bit_field, vol_var_unsigned_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_bit_field, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_475 (void)
{
  extern typeof (f32div (vol_var_bit_field, vol_var_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_bit_field, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_476 (void)
{
  extern typeof (f32div (vol_var_bit_field, vol_var_unsigned_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_bit_field, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_477 (void)
{
  extern typeof (f32div (vol_var_bit_field, vol_var_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_bit_field, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_478 (void)
{
  extern typeof (f32div (vol_var_bit_field, vol_var_unsigned_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_bit_field, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32div_479 (void)
{
  extern typeof (f32div (vol_var_bit_field, vol_var___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_bit_field, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32div_480 (void)
{
  extern typeof (f32div (vol_var_bit_field, vol_var_unsigned___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_bit_field, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_481 (void)
{
  extern typeof (f32div (vol_var_bit_field, vol_var_enum_e)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_bit_field, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_482 (void)
{
  extern typeof (f32div (vol_var_bit_field, vol_var__Bool)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_bit_field, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32div_483 (void)
{
  extern typeof (f32div (vol_var_bit_field, vol_var_bit_field)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32div (vol_var_bit_field, vol_var_bit_field);
}
#endif
static const struct test tests[] =
  {
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32div_0, "f32div", "f32div (_Float16, _Float16)", FLT64_MANT_DIG, FLT16_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32
    { test_f32div_1, "f32div", "f32div (_Float16, _Float32)", FLT64_MANT_DIG, FLT32_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
    { test_f32div_2, "f32div", "f32div (_Float16, _Float32x)", FLT32X_MANT_DIG, FLT32X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64
    { test_f32div_3, "f32div", "f32div (_Float16, _Float64)", FLT64_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
    { test_f32div_4, "f32div", "f32div (_Float16, _Float64x)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F16
    { test_f32div_5, "f32div", "f32div (_Float16, _Float128)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32div_6, "f32div", "f32div (_Float16, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32div_7, "f32div", "f32div (_Float16, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32div_8, "f32div", "f32div (_Float16, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32div_9, "f32div", "f32div (_Float16, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32div_10, "f32div", "f32div (_Float16, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32div_11, "f32div", "f32div (_Float16, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32div_12, "f32div", "f32div (_Float16, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32div_13, "f32div", "f32div (_Float16, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32div_14, "f32div", "f32div (_Float16, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32div_15, "f32div", "f32div (_Float16, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32div_16, "f32div", "f32div (_Float16, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_f32div_17, "f32div", "f32div (_Float16, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_f32div_18, "f32div", "f32div (_Float16, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32div_19, "f32div", "f32div (_Float16, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32div_20, "f32div", "f32div (_Float16, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32div_21, "f32div", "f32div (_Float16, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32
    { test_f32div_22, "f32div", "f32div (_Float32, _Float16)", FLT64_MANT_DIG, FLT32_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32div_23, "f32div", "f32div (_Float32, _Float32)", FLT64_MANT_DIG, FLT32_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
    { test_f32div_24, "f32div", "f32div (_Float32, _Float32x)", FLT32X_MANT_DIG, FLT32X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64
    { test_f32div_25, "f32div", "f32div (_Float32, _Float64)", FLT64_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
    { test_f32div_26, "f32div", "f32div (_Float32, _Float64x)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32
    { test_f32div_27, "f32div", "f32div (_Float32, _Float128)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32div_28, "f32div", "f32div (_Float32, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32div_29, "f32div", "f32div (_Float32, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32div_30, "f32div", "f32div (_Float32, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32div_31, "f32div", "f32div (_Float32, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32div_32, "f32div", "f32div (_Float32, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32div_33, "f32div", "f32div (_Float32, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32div_34, "f32div", "f32div (_Float32, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32div_35, "f32div", "f32div (_Float32, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32div_36, "f32div", "f32div (_Float32, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32div_37, "f32div", "f32div (_Float32, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32div_38, "f32div", "f32div (_Float32, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_f32div_39, "f32div", "f32div (_Float32, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_f32div_40, "f32div", "f32div (_Float32, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32div_41, "f32div", "f32div (_Float32, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32div_42, "f32div", "f32div (_Float32, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32div_43, "f32div", "f32div (_Float32, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
    { test_f32div_44, "f32div", "f32div (_Float32x, _Float16)", FLT32X_MANT_DIG, FLT32X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
    { test_f32div_45, "f32div", "f32div (_Float32x, _Float32)", FLT32X_MANT_DIG, FLT32X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32div_46, "f32div", "f32div (_Float32x, _Float32x)", FLT32X_MANT_DIG, FLT32X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64
    { test_f32div_47, "f32div", "f32div (_Float32x, _Float64)", FLT64_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
    { test_f32div_48, "f32div", "f32div (_Float32x, _Float64x)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
    { test_f32div_49, "f32div", "f32div (_Float32x, _Float128)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32div_50, "f32div", "f32div (_Float32x, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32div_51, "f32div", "f32div (_Float32x, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32div_52, "f32div", "f32div (_Float32x, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32div_53, "f32div", "f32div (_Float32x, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32div_54, "f32div", "f32div (_Float32x, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32div_55, "f32div", "f32div (_Float32x, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32div_56, "f32div", "f32div (_Float32x, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32div_57, "f32div", "f32div (_Float32x, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32div_58, "f32div", "f32div (_Float32x, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32div_59, "f32div", "f32div (_Float32x, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32div_60, "f32div", "f32div (_Float32x, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_f32div_61, "f32div", "f32div (_Float32x, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_f32div_62, "f32div", "f32div (_Float32x, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32div_63, "f32div", "f32div (_Float32x, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32div_64, "f32div", "f32div (_Float32x, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32div_65, "f32div", "f32div (_Float32x, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64
    { test_f32div_66, "f32div", "f32div (_Float64, _Float16)", FLT64_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64
    { test_f32div_67, "f32div", "f32div (_Float64, _Float32)", FLT64_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64
    { test_f32div_68, "f32div", "f32div (_Float64, _Float32x)", FLT64_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32div_69, "f32div", "f32div (_Float64, _Float64)", FLT64_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
    { test_f32div_70, "f32div", "f32div (_Float64, _Float64x)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64
    { test_f32div_71, "f32div", "f32div (_Float64, _Float128)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32div_72, "f32div", "f32div (_Float64, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32div_73, "f32div", "f32div (_Float64, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32div_74, "f32div", "f32div (_Float64, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32div_75, "f32div", "f32div (_Float64, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32div_76, "f32div", "f32div (_Float64, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32div_77, "f32div", "f32div (_Float64, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32div_78, "f32div", "f32div (_Float64, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32div_79, "f32div", "f32div (_Float64, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32div_80, "f32div", "f32div (_Float64, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32div_81, "f32div", "f32div (_Float64, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32div_82, "f32div", "f32div (_Float64, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_f32div_83, "f32div", "f32div (_Float64, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_f32div_84, "f32div", "f32div (_Float64, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32div_85, "f32div", "f32div (_Float64, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32div_86, "f32div", "f32div (_Float64, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32div_87, "f32div", "f32div (_Float64, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
    { test_f32div_88, "f32div", "f32div (_Float64x, _Float16)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
    { test_f32div_89, "f32div", "f32div (_Float64x, _Float32)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
    { test_f32div_90, "f32div", "f32div (_Float64x, _Float32x)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
    { test_f32div_91, "f32div", "f32div (_Float64x, _Float64)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32div_92, "f32div", "f32div (_Float64x, _Float64x)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
    { test_f32div_93, "f32div", "f32div (_Float64x, _Float128)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32div_94, "f32div", "f32div (_Float64x, char)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32div_95, "f32div", "f32div (_Float64x, signed char)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32div_96, "f32div", "f32div (_Float64x, unsigned char)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32div_97, "f32div", "f32div (_Float64x, short int)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32div_98, "f32div", "f32div (_Float64x, unsigned short int)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32div_99, "f32div", "f32div (_Float64x, int)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32div_100, "f32div", "f32div (_Float64x, unsigned int)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32div_101, "f32div", "f32div (_Float64x, long int)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32div_102, "f32div", "f32div (_Float64x, unsigned long int)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32div_103, "f32div", "f32div (_Float64x, long long int)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32div_104, "f32div", "f32div (_Float64x, unsigned long long int)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_f32div_105, "f32div", "f32div (_Float64x, __int128)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_f32div_106, "f32div", "f32div (_Float64x, unsigned __int128)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32div_107, "f32div", "f32div (_Float64x, enum e)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32div_108, "f32div", "f32div (_Float64x, _Bool)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32div_109, "f32div", "f32div (_Float64x, bit_field)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F16
    { test_f32div_110, "f32div", "f32div (_Float128, _Float16)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32
    { test_f32div_111, "f32div", "f32div (_Float128, _Float32)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
    { test_f32div_112, "f32div", "f32div (_Float128, _Float32x)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64
    { test_f32div_113, "f32div", "f32div (_Float128, _Float64)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
    { test_f32div_114, "f32div", "f32div (_Float128, _Float64x)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32div_115, "f32div", "f32div (_Float128, _Float128)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32div_116, "f32div", "f32div (_Float128, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32div_117, "f32div", "f32div (_Float128, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32div_118, "f32div", "f32div (_Float128, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32div_119, "f32div", "f32div (_Float128, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32div_120, "f32div", "f32div (_Float128, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32div_121, "f32div", "f32div (_Float128, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32div_122, "f32div", "f32div (_Float128, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32div_123, "f32div", "f32div (_Float128, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32div_124, "f32div", "f32div (_Float128, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32div_125, "f32div", "f32div (_Float128, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32div_126, "f32div", "f32div (_Float128, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_f32div_127, "f32div", "f32div (_Float128, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_f32div_128, "f32div", "f32div (_Float128, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32div_129, "f32div", "f32div (_Float128, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32div_130, "f32div", "f32div (_Float128, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32div_131, "f32div", "f32div (_Float128, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32div_132, "f32div", "f32div (char, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32div_133, "f32div", "f32div (char, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32div_134, "f32div", "f32div (char, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32div_135, "f32div", "f32div (char, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32div_136, "f32div", "f32div (char, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32div_137, "f32div", "f32div (char, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_138, "f32div", "f32div (char, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_139, "f32div", "f32div (char, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_140, "f32div", "f32div (char, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_141, "f32div", "f32div (char, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_142, "f32div", "f32div (char, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_143, "f32div", "f32div (char, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_144, "f32div", "f32div (char, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_145, "f32div", "f32div (char, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_146, "f32div", "f32div (char, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_147, "f32div", "f32div (char, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_148, "f32div", "f32div (char, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32div_149, "f32div", "f32div (char, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32div_150, "f32div", "f32div (char, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_151, "f32div", "f32div (char, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_152, "f32div", "f32div (char, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_153, "f32div", "f32div (char, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32div_154, "f32div", "f32div (signed char, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32div_155, "f32div", "f32div (signed char, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32div_156, "f32div", "f32div (signed char, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32div_157, "f32div", "f32div (signed char, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32div_158, "f32div", "f32div (signed char, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32div_159, "f32div", "f32div (signed char, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_160, "f32div", "f32div (signed char, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_161, "f32div", "f32div (signed char, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_162, "f32div", "f32div (signed char, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_163, "f32div", "f32div (signed char, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_164, "f32div", "f32div (signed char, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_165, "f32div", "f32div (signed char, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_166, "f32div", "f32div (signed char, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_167, "f32div", "f32div (signed char, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_168, "f32div", "f32div (signed char, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_169, "f32div", "f32div (signed char, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_170, "f32div", "f32div (signed char, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32div_171, "f32div", "f32div (signed char, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32div_172, "f32div", "f32div (signed char, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_173, "f32div", "f32div (signed char, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_174, "f32div", "f32div (signed char, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_175, "f32div", "f32div (signed char, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32div_176, "f32div", "f32div (unsigned char, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32div_177, "f32div", "f32div (unsigned char, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32div_178, "f32div", "f32div (unsigned char, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32div_179, "f32div", "f32div (unsigned char, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32div_180, "f32div", "f32div (unsigned char, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32div_181, "f32div", "f32div (unsigned char, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_182, "f32div", "f32div (unsigned char, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_183, "f32div", "f32div (unsigned char, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_184, "f32div", "f32div (unsigned char, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_185, "f32div", "f32div (unsigned char, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_186, "f32div", "f32div (unsigned char, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_187, "f32div", "f32div (unsigned char, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_188, "f32div", "f32div (unsigned char, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_189, "f32div", "f32div (unsigned char, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_190, "f32div", "f32div (unsigned char, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_191, "f32div", "f32div (unsigned char, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_192, "f32div", "f32div (unsigned char, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32div_193, "f32div", "f32div (unsigned char, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32div_194, "f32div", "f32div (unsigned char, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_195, "f32div", "f32div (unsigned char, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_196, "f32div", "f32div (unsigned char, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_197, "f32div", "f32div (unsigned char, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32div_198, "f32div", "f32div (short int, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32div_199, "f32div", "f32div (short int, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32div_200, "f32div", "f32div (short int, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32div_201, "f32div", "f32div (short int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32div_202, "f32div", "f32div (short int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32div_203, "f32div", "f32div (short int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_204, "f32div", "f32div (short int, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_205, "f32div", "f32div (short int, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_206, "f32div", "f32div (short int, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_207, "f32div", "f32div (short int, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_208, "f32div", "f32div (short int, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_209, "f32div", "f32div (short int, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_210, "f32div", "f32div (short int, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_211, "f32div", "f32div (short int, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_212, "f32div", "f32div (short int, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_213, "f32div", "f32div (short int, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_214, "f32div", "f32div (short int, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32div_215, "f32div", "f32div (short int, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32div_216, "f32div", "f32div (short int, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_217, "f32div", "f32div (short int, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_218, "f32div", "f32div (short int, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_219, "f32div", "f32div (short int, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32div_220, "f32div", "f32div (unsigned short int, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32div_221, "f32div", "f32div (unsigned short int, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32div_222, "f32div", "f32div (unsigned short int, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32div_223, "f32div", "f32div (unsigned short int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32div_224, "f32div", "f32div (unsigned short int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32div_225, "f32div", "f32div (unsigned short int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_226, "f32div", "f32div (unsigned short int, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_227, "f32div", "f32div (unsigned short int, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_228, "f32div", "f32div (unsigned short int, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_229, "f32div", "f32div (unsigned short int, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_230, "f32div", "f32div (unsigned short int, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_231, "f32div", "f32div (unsigned short int, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_232, "f32div", "f32div (unsigned short int, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_233, "f32div", "f32div (unsigned short int, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_234, "f32div", "f32div (unsigned short int, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_235, "f32div", "f32div (unsigned short int, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_236, "f32div", "f32div (unsigned short int, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32div_237, "f32div", "f32div (unsigned short int, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32div_238, "f32div", "f32div (unsigned short int, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_239, "f32div", "f32div (unsigned short int, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_240, "f32div", "f32div (unsigned short int, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_241, "f32div", "f32div (unsigned short int, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32div_242, "f32div", "f32div (int, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32div_243, "f32div", "f32div (int, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32div_244, "f32div", "f32div (int, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32div_245, "f32div", "f32div (int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32div_246, "f32div", "f32div (int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32div_247, "f32div", "f32div (int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_248, "f32div", "f32div (int, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_249, "f32div", "f32div (int, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_250, "f32div", "f32div (int, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_251, "f32div", "f32div (int, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_252, "f32div", "f32div (int, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_253, "f32div", "f32div (int, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_254, "f32div", "f32div (int, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_255, "f32div", "f32div (int, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_256, "f32div", "f32div (int, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_257, "f32div", "f32div (int, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_258, "f32div", "f32div (int, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32div_259, "f32div", "f32div (int, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32div_260, "f32div", "f32div (int, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_261, "f32div", "f32div (int, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_262, "f32div", "f32div (int, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_263, "f32div", "f32div (int, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32div_264, "f32div", "f32div (unsigned int, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32div_265, "f32div", "f32div (unsigned int, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32div_266, "f32div", "f32div (unsigned int, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32div_267, "f32div", "f32div (unsigned int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32div_268, "f32div", "f32div (unsigned int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32div_269, "f32div", "f32div (unsigned int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_270, "f32div", "f32div (unsigned int, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_271, "f32div", "f32div (unsigned int, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_272, "f32div", "f32div (unsigned int, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_273, "f32div", "f32div (unsigned int, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_274, "f32div", "f32div (unsigned int, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_275, "f32div", "f32div (unsigned int, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_276, "f32div", "f32div (unsigned int, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_277, "f32div", "f32div (unsigned int, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_278, "f32div", "f32div (unsigned int, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_279, "f32div", "f32div (unsigned int, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_280, "f32div", "f32div (unsigned int, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32div_281, "f32div", "f32div (unsigned int, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32div_282, "f32div", "f32div (unsigned int, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_283, "f32div", "f32div (unsigned int, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_284, "f32div", "f32div (unsigned int, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_285, "f32div", "f32div (unsigned int, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32div_286, "f32div", "f32div (long int, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32div_287, "f32div", "f32div (long int, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32div_288, "f32div", "f32div (long int, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32div_289, "f32div", "f32div (long int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32div_290, "f32div", "f32div (long int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32div_291, "f32div", "f32div (long int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_292, "f32div", "f32div (long int, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_293, "f32div", "f32div (long int, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_294, "f32div", "f32div (long int, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_295, "f32div", "f32div (long int, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_296, "f32div", "f32div (long int, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_297, "f32div", "f32div (long int, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_298, "f32div", "f32div (long int, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_299, "f32div", "f32div (long int, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_300, "f32div", "f32div (long int, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_301, "f32div", "f32div (long int, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_302, "f32div", "f32div (long int, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32div_303, "f32div", "f32div (long int, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32div_304, "f32div", "f32div (long int, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_305, "f32div", "f32div (long int, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_306, "f32div", "f32div (long int, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_307, "f32div", "f32div (long int, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32div_308, "f32div", "f32div (unsigned long int, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32div_309, "f32div", "f32div (unsigned long int, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32div_310, "f32div", "f32div (unsigned long int, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32div_311, "f32div", "f32div (unsigned long int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32div_312, "f32div", "f32div (unsigned long int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32div_313, "f32div", "f32div (unsigned long int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_314, "f32div", "f32div (unsigned long int, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_315, "f32div", "f32div (unsigned long int, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_316, "f32div", "f32div (unsigned long int, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_317, "f32div", "f32div (unsigned long int, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_318, "f32div", "f32div (unsigned long int, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_319, "f32div", "f32div (unsigned long int, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_320, "f32div", "f32div (unsigned long int, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_321, "f32div", "f32div (unsigned long int, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_322, "f32div", "f32div (unsigned long int, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_323, "f32div", "f32div (unsigned long int, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_324, "f32div", "f32div (unsigned long int, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32div_325, "f32div", "f32div (unsigned long int, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32div_326, "f32div", "f32div (unsigned long int, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_327, "f32div", "f32div (unsigned long int, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_328, "f32div", "f32div (unsigned long int, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_329, "f32div", "f32div (unsigned long int, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32div_330, "f32div", "f32div (long long int, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32div_331, "f32div", "f32div (long long int, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32div_332, "f32div", "f32div (long long int, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32div_333, "f32div", "f32div (long long int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32div_334, "f32div", "f32div (long long int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32div_335, "f32div", "f32div (long long int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_336, "f32div", "f32div (long long int, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_337, "f32div", "f32div (long long int, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_338, "f32div", "f32div (long long int, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_339, "f32div", "f32div (long long int, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_340, "f32div", "f32div (long long int, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_341, "f32div", "f32div (long long int, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_342, "f32div", "f32div (long long int, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_343, "f32div", "f32div (long long int, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_344, "f32div", "f32div (long long int, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_345, "f32div", "f32div (long long int, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_346, "f32div", "f32div (long long int, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32div_347, "f32div", "f32div (long long int, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32div_348, "f32div", "f32div (long long int, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_349, "f32div", "f32div (long long int, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_350, "f32div", "f32div (long long int, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_351, "f32div", "f32div (long long int, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32div_352, "f32div", "f32div (unsigned long long int, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32div_353, "f32div", "f32div (unsigned long long int, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32div_354, "f32div", "f32div (unsigned long long int, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32div_355, "f32div", "f32div (unsigned long long int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32div_356, "f32div", "f32div (unsigned long long int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32div_357, "f32div", "f32div (unsigned long long int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_358, "f32div", "f32div (unsigned long long int, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_359, "f32div", "f32div (unsigned long long int, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_360, "f32div", "f32div (unsigned long long int, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_361, "f32div", "f32div (unsigned long long int, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_362, "f32div", "f32div (unsigned long long int, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_363, "f32div", "f32div (unsigned long long int, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_364, "f32div", "f32div (unsigned long long int, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_365, "f32div", "f32div (unsigned long long int, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_366, "f32div", "f32div (unsigned long long int, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_367, "f32div", "f32div (unsigned long long int, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_368, "f32div", "f32div (unsigned long long int, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32div_369, "f32div", "f32div (unsigned long long int, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32div_370, "f32div", "f32div (unsigned long long int, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_371, "f32div", "f32div (unsigned long long int, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_372, "f32div", "f32div (unsigned long long int, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_373, "f32div", "f32div (unsigned long long int, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_f32div_374, "f32div", "f32div (__int128, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_f32div_375, "f32div", "f32div (__int128, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_f32div_376, "f32div", "f32div (__int128, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_f32div_377, "f32div", "f32div (__int128, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_f32div_378, "f32div", "f32div (__int128, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_f32div_379, "f32div", "f32div (__int128, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32div_380, "f32div", "f32div (__int128, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32div_381, "f32div", "f32div (__int128, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32div_382, "f32div", "f32div (__int128, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32div_383, "f32div", "f32div (__int128, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32div_384, "f32div", "f32div (__int128, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32div_385, "f32div", "f32div (__int128, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32div_386, "f32div", "f32div (__int128, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32div_387, "f32div", "f32div (__int128, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32div_388, "f32div", "f32div (__int128, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32div_389, "f32div", "f32div (__int128, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32div_390, "f32div", "f32div (__int128, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32div_391, "f32div", "f32div (__int128, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32div_392, "f32div", "f32div (__int128, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32div_393, "f32div", "f32div (__int128, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32div_394, "f32div", "f32div (__int128, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32div_395, "f32div", "f32div (__int128, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_f32div_396, "f32div", "f32div (unsigned __int128, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_f32div_397, "f32div", "f32div (unsigned __int128, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_f32div_398, "f32div", "f32div (unsigned __int128, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_f32div_399, "f32div", "f32div (unsigned __int128, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_f32div_400, "f32div", "f32div (unsigned __int128, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_f32div_401, "f32div", "f32div (unsigned __int128, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32div_402, "f32div", "f32div (unsigned __int128, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32div_403, "f32div", "f32div (unsigned __int128, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32div_404, "f32div", "f32div (unsigned __int128, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32div_405, "f32div", "f32div (unsigned __int128, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32div_406, "f32div", "f32div (unsigned __int128, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32div_407, "f32div", "f32div (unsigned __int128, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32div_408, "f32div", "f32div (unsigned __int128, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32div_409, "f32div", "f32div (unsigned __int128, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32div_410, "f32div", "f32div (unsigned __int128, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32div_411, "f32div", "f32div (unsigned __int128, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32div_412, "f32div", "f32div (unsigned __int128, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32div_413, "f32div", "f32div (unsigned __int128, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32div_414, "f32div", "f32div (unsigned __int128, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32div_415, "f32div", "f32div (unsigned __int128, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32div_416, "f32div", "f32div (unsigned __int128, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32div_417, "f32div", "f32div (unsigned __int128, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32div_418, "f32div", "f32div (enum e, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32div_419, "f32div", "f32div (enum e, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32div_420, "f32div", "f32div (enum e, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32div_421, "f32div", "f32div (enum e, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32div_422, "f32div", "f32div (enum e, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32div_423, "f32div", "f32div (enum e, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_424, "f32div", "f32div (enum e, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_425, "f32div", "f32div (enum e, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_426, "f32div", "f32div (enum e, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_427, "f32div", "f32div (enum e, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_428, "f32div", "f32div (enum e, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_429, "f32div", "f32div (enum e, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_430, "f32div", "f32div (enum e, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_431, "f32div", "f32div (enum e, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_432, "f32div", "f32div (enum e, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_433, "f32div", "f32div (enum e, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_434, "f32div", "f32div (enum e, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32div_435, "f32div", "f32div (enum e, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32div_436, "f32div", "f32div (enum e, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_437, "f32div", "f32div (enum e, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_438, "f32div", "f32div (enum e, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_439, "f32div", "f32div (enum e, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32div_440, "f32div", "f32div (_Bool, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32div_441, "f32div", "f32div (_Bool, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32div_442, "f32div", "f32div (_Bool, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32div_443, "f32div", "f32div (_Bool, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32div_444, "f32div", "f32div (_Bool, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32div_445, "f32div", "f32div (_Bool, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_446, "f32div", "f32div (_Bool, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_447, "f32div", "f32div (_Bool, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_448, "f32div", "f32div (_Bool, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_449, "f32div", "f32div (_Bool, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_450, "f32div", "f32div (_Bool, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_451, "f32div", "f32div (_Bool, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_452, "f32div", "f32div (_Bool, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_453, "f32div", "f32div (_Bool, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_454, "f32div", "f32div (_Bool, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_455, "f32div", "f32div (_Bool, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_456, "f32div", "f32div (_Bool, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32div_457, "f32div", "f32div (_Bool, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32div_458, "f32div", "f32div (_Bool, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_459, "f32div", "f32div (_Bool, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_460, "f32div", "f32div (_Bool, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_461, "f32div", "f32div (_Bool, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32div_462, "f32div", "f32div (bit_field, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32div_463, "f32div", "f32div (bit_field, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32div_464, "f32div", "f32div (bit_field, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32div_465, "f32div", "f32div (bit_field, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32div_466, "f32div", "f32div (bit_field, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32div_467, "f32div", "f32div (bit_field, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_468, "f32div", "f32div (bit_field, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_469, "f32div", "f32div (bit_field, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_470, "f32div", "f32div (bit_field, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_471, "f32div", "f32div (bit_field, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_472, "f32div", "f32div (bit_field, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_473, "f32div", "f32div (bit_field, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_474, "f32div", "f32div (bit_field, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_475, "f32div", "f32div (bit_field, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_476, "f32div", "f32div (bit_field, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_477, "f32div", "f32div (bit_field, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_478, "f32div", "f32div (bit_field, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32div_479, "f32div", "f32div (bit_field, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32div_480, "f32div", "f32div (bit_field, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_481, "f32div", "f32div (bit_field, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_482, "f32div", "f32div (bit_field, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32div_483, "f32div", "f32div (bit_field, bit_field)", FLT64_MANT_DIG, 0 },
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
