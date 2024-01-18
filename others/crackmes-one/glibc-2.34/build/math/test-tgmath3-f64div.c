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
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
_Float64
(f64divf64x) (_Float64x arg0 __attribute__ ((unused)), _Float64x arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT64X_MANT_DIG;
  called_func_name = "f64div";
  return 0;
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
_Float64
(f64divf128) (_Float128 arg0 __attribute__ ((unused)), _Float128 arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT128_MANT_DIG;
  called_func_name = "f64div";
  return 0;
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64div_0 (void)
{
  extern typeof (f64div (vol_var__Float16, vol_var__Float16)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Float16, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32
static void
test_f64div_1 (void)
{
  extern typeof (f64div (vol_var__Float16, vol_var__Float32)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Float16, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
static void
test_f64div_2 (void)
{
  extern typeof (f64div (vol_var__Float16, vol_var__Float32x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Float16, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64
static void
test_f64div_3 (void)
{
  extern typeof (f64div (vol_var__Float16, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Float16, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
static void
test_f64div_4 (void)
{
  extern typeof (f64div (vol_var__Float16, vol_var__Float64x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Float16, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F16
static void
test_f64div_5 (void)
{
  extern typeof (f64div (vol_var__Float16, vol_var__Float128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Float16, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64div_6 (void)
{
  extern typeof (f64div (vol_var__Float16, vol_var_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Float16, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64div_7 (void)
{
  extern typeof (f64div (vol_var__Float16, vol_var_signed_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Float16, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64div_8 (void)
{
  extern typeof (f64div (vol_var__Float16, vol_var_unsigned_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Float16, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64div_9 (void)
{
  extern typeof (f64div (vol_var__Float16, vol_var_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Float16, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64div_10 (void)
{
  extern typeof (f64div (vol_var__Float16, vol_var_unsigned_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Float16, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64div_11 (void)
{
  extern typeof (f64div (vol_var__Float16, vol_var_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Float16, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64div_12 (void)
{
  extern typeof (f64div (vol_var__Float16, vol_var_unsigned_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Float16, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64div_13 (void)
{
  extern typeof (f64div (vol_var__Float16, vol_var_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Float16, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64div_14 (void)
{
  extern typeof (f64div (vol_var__Float16, vol_var_unsigned_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Float16, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64div_15 (void)
{
  extern typeof (f64div (vol_var__Float16, vol_var_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Float16, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64div_16 (void)
{
  extern typeof (f64div (vol_var__Float16, vol_var_unsigned_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Float16, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_f64div_17 (void)
{
  extern typeof (f64div (vol_var__Float16, vol_var___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Float16, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_f64div_18 (void)
{
  extern typeof (f64div (vol_var__Float16, vol_var_unsigned___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Float16, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64div_19 (void)
{
  extern typeof (f64div (vol_var__Float16, vol_var_enum_e)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Float16, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64div_20 (void)
{
  extern typeof (f64div (vol_var__Float16, vol_var__Bool)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Float16, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64div_21 (void)
{
  extern typeof (f64div (vol_var__Float16, vol_var_bit_field)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Float16, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32
static void
test_f64div_22 (void)
{
  extern typeof (f64div (vol_var__Float32, vol_var__Float16)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Float32, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64div_23 (void)
{
  extern typeof (f64div (vol_var__Float32, vol_var__Float32)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Float32, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
static void
test_f64div_24 (void)
{
  extern typeof (f64div (vol_var__Float32, vol_var__Float32x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Float32, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64
static void
test_f64div_25 (void)
{
  extern typeof (f64div (vol_var__Float32, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Float32, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
static void
test_f64div_26 (void)
{
  extern typeof (f64div (vol_var__Float32, vol_var__Float64x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Float32, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32
static void
test_f64div_27 (void)
{
  extern typeof (f64div (vol_var__Float32, vol_var__Float128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Float32, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64div_28 (void)
{
  extern typeof (f64div (vol_var__Float32, vol_var_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Float32, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64div_29 (void)
{
  extern typeof (f64div (vol_var__Float32, vol_var_signed_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Float32, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64div_30 (void)
{
  extern typeof (f64div (vol_var__Float32, vol_var_unsigned_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Float32, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64div_31 (void)
{
  extern typeof (f64div (vol_var__Float32, vol_var_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Float32, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64div_32 (void)
{
  extern typeof (f64div (vol_var__Float32, vol_var_unsigned_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Float32, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64div_33 (void)
{
  extern typeof (f64div (vol_var__Float32, vol_var_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Float32, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64div_34 (void)
{
  extern typeof (f64div (vol_var__Float32, vol_var_unsigned_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Float32, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64div_35 (void)
{
  extern typeof (f64div (vol_var__Float32, vol_var_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Float32, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64div_36 (void)
{
  extern typeof (f64div (vol_var__Float32, vol_var_unsigned_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Float32, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64div_37 (void)
{
  extern typeof (f64div (vol_var__Float32, vol_var_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Float32, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64div_38 (void)
{
  extern typeof (f64div (vol_var__Float32, vol_var_unsigned_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Float32, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_f64div_39 (void)
{
  extern typeof (f64div (vol_var__Float32, vol_var___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Float32, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_f64div_40 (void)
{
  extern typeof (f64div (vol_var__Float32, vol_var_unsigned___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Float32, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64div_41 (void)
{
  extern typeof (f64div (vol_var__Float32, vol_var_enum_e)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Float32, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64div_42 (void)
{
  extern typeof (f64div (vol_var__Float32, vol_var__Bool)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Float32, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64div_43 (void)
{
  extern typeof (f64div (vol_var__Float32, vol_var_bit_field)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Float32, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
static void
test_f64div_44 (void)
{
  extern typeof (f64div (vol_var__Float32x, vol_var__Float16)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Float32x, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
static void
test_f64div_45 (void)
{
  extern typeof (f64div (vol_var__Float32x, vol_var__Float32)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Float32x, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64div_46 (void)
{
  extern typeof (f64div (vol_var__Float32x, vol_var__Float32x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Float32x, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64
static void
test_f64div_47 (void)
{
  extern typeof (f64div (vol_var__Float32x, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Float32x, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
static void
test_f64div_48 (void)
{
  extern typeof (f64div (vol_var__Float32x, vol_var__Float64x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Float32x, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
static void
test_f64div_49 (void)
{
  extern typeof (f64div (vol_var__Float32x, vol_var__Float128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Float32x, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64div_50 (void)
{
  extern typeof (f64div (vol_var__Float32x, vol_var_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Float32x, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64div_51 (void)
{
  extern typeof (f64div (vol_var__Float32x, vol_var_signed_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Float32x, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64div_52 (void)
{
  extern typeof (f64div (vol_var__Float32x, vol_var_unsigned_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Float32x, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64div_53 (void)
{
  extern typeof (f64div (vol_var__Float32x, vol_var_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Float32x, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64div_54 (void)
{
  extern typeof (f64div (vol_var__Float32x, vol_var_unsigned_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Float32x, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64div_55 (void)
{
  extern typeof (f64div (vol_var__Float32x, vol_var_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Float32x, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64div_56 (void)
{
  extern typeof (f64div (vol_var__Float32x, vol_var_unsigned_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Float32x, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64div_57 (void)
{
  extern typeof (f64div (vol_var__Float32x, vol_var_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Float32x, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64div_58 (void)
{
  extern typeof (f64div (vol_var__Float32x, vol_var_unsigned_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Float32x, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64div_59 (void)
{
  extern typeof (f64div (vol_var__Float32x, vol_var_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Float32x, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64div_60 (void)
{
  extern typeof (f64div (vol_var__Float32x, vol_var_unsigned_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Float32x, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_f64div_61 (void)
{
  extern typeof (f64div (vol_var__Float32x, vol_var___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Float32x, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_f64div_62 (void)
{
  extern typeof (f64div (vol_var__Float32x, vol_var_unsigned___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Float32x, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64div_63 (void)
{
  extern typeof (f64div (vol_var__Float32x, vol_var_enum_e)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Float32x, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64div_64 (void)
{
  extern typeof (f64div (vol_var__Float32x, vol_var__Bool)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Float32x, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64div_65 (void)
{
  extern typeof (f64div (vol_var__Float32x, vol_var_bit_field)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Float32x, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64
static void
test_f64div_66 (void)
{
  extern typeof (f64div (vol_var__Float64, vol_var__Float16)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Float64, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64
static void
test_f64div_67 (void)
{
  extern typeof (f64div (vol_var__Float64, vol_var__Float32)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Float64, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64
static void
test_f64div_68 (void)
{
  extern typeof (f64div (vol_var__Float64, vol_var__Float32x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Float64, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64div_69 (void)
{
  extern typeof (f64div (vol_var__Float64, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Float64, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
static void
test_f64div_70 (void)
{
  extern typeof (f64div (vol_var__Float64, vol_var__Float64x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Float64, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64
static void
test_f64div_71 (void)
{
  extern typeof (f64div (vol_var__Float64, vol_var__Float128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Float64, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64div_72 (void)
{
  extern typeof (f64div (vol_var__Float64, vol_var_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Float64, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64div_73 (void)
{
  extern typeof (f64div (vol_var__Float64, vol_var_signed_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Float64, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64div_74 (void)
{
  extern typeof (f64div (vol_var__Float64, vol_var_unsigned_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Float64, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64div_75 (void)
{
  extern typeof (f64div (vol_var__Float64, vol_var_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Float64, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64div_76 (void)
{
  extern typeof (f64div (vol_var__Float64, vol_var_unsigned_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Float64, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64div_77 (void)
{
  extern typeof (f64div (vol_var__Float64, vol_var_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Float64, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64div_78 (void)
{
  extern typeof (f64div (vol_var__Float64, vol_var_unsigned_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Float64, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64div_79 (void)
{
  extern typeof (f64div (vol_var__Float64, vol_var_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Float64, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64div_80 (void)
{
  extern typeof (f64div (vol_var__Float64, vol_var_unsigned_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Float64, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64div_81 (void)
{
  extern typeof (f64div (vol_var__Float64, vol_var_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Float64, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64div_82 (void)
{
  extern typeof (f64div (vol_var__Float64, vol_var_unsigned_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Float64, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_f64div_83 (void)
{
  extern typeof (f64div (vol_var__Float64, vol_var___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Float64, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_f64div_84 (void)
{
  extern typeof (f64div (vol_var__Float64, vol_var_unsigned___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Float64, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64div_85 (void)
{
  extern typeof (f64div (vol_var__Float64, vol_var_enum_e)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Float64, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64div_86 (void)
{
  extern typeof (f64div (vol_var__Float64, vol_var__Bool)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Float64, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64div_87 (void)
{
  extern typeof (f64div (vol_var__Float64, vol_var_bit_field)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Float64, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
static void
test_f64div_88 (void)
{
  extern typeof (f64div (vol_var__Float64x, vol_var__Float16)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Float64x, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
static void
test_f64div_89 (void)
{
  extern typeof (f64div (vol_var__Float64x, vol_var__Float32)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Float64x, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
static void
test_f64div_90 (void)
{
  extern typeof (f64div (vol_var__Float64x, vol_var__Float32x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Float64x, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
static void
test_f64div_91 (void)
{
  extern typeof (f64div (vol_var__Float64x, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Float64x, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64div_92 (void)
{
  extern typeof (f64div (vol_var__Float64x, vol_var__Float64x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Float64x, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
static void
test_f64div_93 (void)
{
  extern typeof (f64div (vol_var__Float64x, vol_var__Float128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Float64x, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64div_94 (void)
{
  extern typeof (f64div (vol_var__Float64x, vol_var_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Float64x, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64div_95 (void)
{
  extern typeof (f64div (vol_var__Float64x, vol_var_signed_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Float64x, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64div_96 (void)
{
  extern typeof (f64div (vol_var__Float64x, vol_var_unsigned_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Float64x, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64div_97 (void)
{
  extern typeof (f64div (vol_var__Float64x, vol_var_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Float64x, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64div_98 (void)
{
  extern typeof (f64div (vol_var__Float64x, vol_var_unsigned_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Float64x, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64div_99 (void)
{
  extern typeof (f64div (vol_var__Float64x, vol_var_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Float64x, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64div_100 (void)
{
  extern typeof (f64div (vol_var__Float64x, vol_var_unsigned_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Float64x, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64div_101 (void)
{
  extern typeof (f64div (vol_var__Float64x, vol_var_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Float64x, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64div_102 (void)
{
  extern typeof (f64div (vol_var__Float64x, vol_var_unsigned_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Float64x, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64div_103 (void)
{
  extern typeof (f64div (vol_var__Float64x, vol_var_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Float64x, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64div_104 (void)
{
  extern typeof (f64div (vol_var__Float64x, vol_var_unsigned_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Float64x, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_f64div_105 (void)
{
  extern typeof (f64div (vol_var__Float64x, vol_var___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Float64x, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_f64div_106 (void)
{
  extern typeof (f64div (vol_var__Float64x, vol_var_unsigned___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Float64x, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64div_107 (void)
{
  extern typeof (f64div (vol_var__Float64x, vol_var_enum_e)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Float64x, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64div_108 (void)
{
  extern typeof (f64div (vol_var__Float64x, vol_var__Bool)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Float64x, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64div_109 (void)
{
  extern typeof (f64div (vol_var__Float64x, vol_var_bit_field)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Float64x, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F16
static void
test_f64div_110 (void)
{
  extern typeof (f64div (vol_var__Float128, vol_var__Float16)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Float128, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32
static void
test_f64div_111 (void)
{
  extern typeof (f64div (vol_var__Float128, vol_var__Float32)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Float128, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
static void
test_f64div_112 (void)
{
  extern typeof (f64div (vol_var__Float128, vol_var__Float32x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Float128, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64
static void
test_f64div_113 (void)
{
  extern typeof (f64div (vol_var__Float128, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Float128, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
static void
test_f64div_114 (void)
{
  extern typeof (f64div (vol_var__Float128, vol_var__Float64x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Float128, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64div_115 (void)
{
  extern typeof (f64div (vol_var__Float128, vol_var__Float128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Float128, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64div_116 (void)
{
  extern typeof (f64div (vol_var__Float128, vol_var_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Float128, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64div_117 (void)
{
  extern typeof (f64div (vol_var__Float128, vol_var_signed_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Float128, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64div_118 (void)
{
  extern typeof (f64div (vol_var__Float128, vol_var_unsigned_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Float128, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64div_119 (void)
{
  extern typeof (f64div (vol_var__Float128, vol_var_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Float128, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64div_120 (void)
{
  extern typeof (f64div (vol_var__Float128, vol_var_unsigned_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Float128, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64div_121 (void)
{
  extern typeof (f64div (vol_var__Float128, vol_var_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Float128, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64div_122 (void)
{
  extern typeof (f64div (vol_var__Float128, vol_var_unsigned_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Float128, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64div_123 (void)
{
  extern typeof (f64div (vol_var__Float128, vol_var_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Float128, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64div_124 (void)
{
  extern typeof (f64div (vol_var__Float128, vol_var_unsigned_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Float128, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64div_125 (void)
{
  extern typeof (f64div (vol_var__Float128, vol_var_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Float128, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64div_126 (void)
{
  extern typeof (f64div (vol_var__Float128, vol_var_unsigned_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Float128, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_f64div_127 (void)
{
  extern typeof (f64div (vol_var__Float128, vol_var___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Float128, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_f64div_128 (void)
{
  extern typeof (f64div (vol_var__Float128, vol_var_unsigned___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Float128, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64div_129 (void)
{
  extern typeof (f64div (vol_var__Float128, vol_var_enum_e)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Float128, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64div_130 (void)
{
  extern typeof (f64div (vol_var__Float128, vol_var__Bool)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Float128, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64div_131 (void)
{
  extern typeof (f64div (vol_var__Float128, vol_var_bit_field)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Float128, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64div_132 (void)
{
  extern typeof (f64div (vol_var_char, vol_var__Float16)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_char, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64div_133 (void)
{
  extern typeof (f64div (vol_var_char, vol_var__Float32)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_char, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64div_134 (void)
{
  extern typeof (f64div (vol_var_char, vol_var__Float32x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_char, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64div_135 (void)
{
  extern typeof (f64div (vol_var_char, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_char, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64div_136 (void)
{
  extern typeof (f64div (vol_var_char, vol_var__Float64x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_char, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64div_137 (void)
{
  extern typeof (f64div (vol_var_char, vol_var__Float128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_char, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_138 (void)
{
  extern typeof (f64div (vol_var_char, vol_var_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_char, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_139 (void)
{
  extern typeof (f64div (vol_var_char, vol_var_signed_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_char, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_140 (void)
{
  extern typeof (f64div (vol_var_char, vol_var_unsigned_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_char, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_141 (void)
{
  extern typeof (f64div (vol_var_char, vol_var_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_char, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_142 (void)
{
  extern typeof (f64div (vol_var_char, vol_var_unsigned_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_char, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_143 (void)
{
  extern typeof (f64div (vol_var_char, vol_var_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_char, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_144 (void)
{
  extern typeof (f64div (vol_var_char, vol_var_unsigned_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_char, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_145 (void)
{
  extern typeof (f64div (vol_var_char, vol_var_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_char, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_146 (void)
{
  extern typeof (f64div (vol_var_char, vol_var_unsigned_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_char, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_147 (void)
{
  extern typeof (f64div (vol_var_char, vol_var_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_char, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_148 (void)
{
  extern typeof (f64div (vol_var_char, vol_var_unsigned_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_char, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64div_149 (void)
{
  extern typeof (f64div (vol_var_char, vol_var___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_char, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64div_150 (void)
{
  extern typeof (f64div (vol_var_char, vol_var_unsigned___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_char, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_151 (void)
{
  extern typeof (f64div (vol_var_char, vol_var_enum_e)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_char, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_152 (void)
{
  extern typeof (f64div (vol_var_char, vol_var__Bool)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_char, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_153 (void)
{
  extern typeof (f64div (vol_var_char, vol_var_bit_field)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_char, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64div_154 (void)
{
  extern typeof (f64div (vol_var_signed_char, vol_var__Float16)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_signed_char, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64div_155 (void)
{
  extern typeof (f64div (vol_var_signed_char, vol_var__Float32)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_signed_char, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64div_156 (void)
{
  extern typeof (f64div (vol_var_signed_char, vol_var__Float32x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_signed_char, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64div_157 (void)
{
  extern typeof (f64div (vol_var_signed_char, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_signed_char, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64div_158 (void)
{
  extern typeof (f64div (vol_var_signed_char, vol_var__Float64x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_signed_char, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64div_159 (void)
{
  extern typeof (f64div (vol_var_signed_char, vol_var__Float128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_signed_char, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_160 (void)
{
  extern typeof (f64div (vol_var_signed_char, vol_var_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_signed_char, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_161 (void)
{
  extern typeof (f64div (vol_var_signed_char, vol_var_signed_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_signed_char, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_162 (void)
{
  extern typeof (f64div (vol_var_signed_char, vol_var_unsigned_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_signed_char, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_163 (void)
{
  extern typeof (f64div (vol_var_signed_char, vol_var_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_signed_char, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_164 (void)
{
  extern typeof (f64div (vol_var_signed_char, vol_var_unsigned_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_signed_char, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_165 (void)
{
  extern typeof (f64div (vol_var_signed_char, vol_var_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_signed_char, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_166 (void)
{
  extern typeof (f64div (vol_var_signed_char, vol_var_unsigned_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_signed_char, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_167 (void)
{
  extern typeof (f64div (vol_var_signed_char, vol_var_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_signed_char, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_168 (void)
{
  extern typeof (f64div (vol_var_signed_char, vol_var_unsigned_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_signed_char, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_169 (void)
{
  extern typeof (f64div (vol_var_signed_char, vol_var_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_signed_char, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_170 (void)
{
  extern typeof (f64div (vol_var_signed_char, vol_var_unsigned_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_signed_char, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64div_171 (void)
{
  extern typeof (f64div (vol_var_signed_char, vol_var___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_signed_char, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64div_172 (void)
{
  extern typeof (f64div (vol_var_signed_char, vol_var_unsigned___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_signed_char, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_173 (void)
{
  extern typeof (f64div (vol_var_signed_char, vol_var_enum_e)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_signed_char, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_174 (void)
{
  extern typeof (f64div (vol_var_signed_char, vol_var__Bool)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_signed_char, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_175 (void)
{
  extern typeof (f64div (vol_var_signed_char, vol_var_bit_field)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_signed_char, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64div_176 (void)
{
  extern typeof (f64div (vol_var_unsigned_char, vol_var__Float16)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_unsigned_char, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64div_177 (void)
{
  extern typeof (f64div (vol_var_unsigned_char, vol_var__Float32)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_unsigned_char, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64div_178 (void)
{
  extern typeof (f64div (vol_var_unsigned_char, vol_var__Float32x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_unsigned_char, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64div_179 (void)
{
  extern typeof (f64div (vol_var_unsigned_char, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_unsigned_char, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64div_180 (void)
{
  extern typeof (f64div (vol_var_unsigned_char, vol_var__Float64x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_unsigned_char, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64div_181 (void)
{
  extern typeof (f64div (vol_var_unsigned_char, vol_var__Float128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_unsigned_char, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_182 (void)
{
  extern typeof (f64div (vol_var_unsigned_char, vol_var_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_unsigned_char, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_183 (void)
{
  extern typeof (f64div (vol_var_unsigned_char, vol_var_signed_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_unsigned_char, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_184 (void)
{
  extern typeof (f64div (vol_var_unsigned_char, vol_var_unsigned_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_unsigned_char, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_185 (void)
{
  extern typeof (f64div (vol_var_unsigned_char, vol_var_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_unsigned_char, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_186 (void)
{
  extern typeof (f64div (vol_var_unsigned_char, vol_var_unsigned_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_unsigned_char, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_187 (void)
{
  extern typeof (f64div (vol_var_unsigned_char, vol_var_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_unsigned_char, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_188 (void)
{
  extern typeof (f64div (vol_var_unsigned_char, vol_var_unsigned_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_unsigned_char, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_189 (void)
{
  extern typeof (f64div (vol_var_unsigned_char, vol_var_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_unsigned_char, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_190 (void)
{
  extern typeof (f64div (vol_var_unsigned_char, vol_var_unsigned_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_unsigned_char, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_191 (void)
{
  extern typeof (f64div (vol_var_unsigned_char, vol_var_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_unsigned_char, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_192 (void)
{
  extern typeof (f64div (vol_var_unsigned_char, vol_var_unsigned_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_unsigned_char, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64div_193 (void)
{
  extern typeof (f64div (vol_var_unsigned_char, vol_var___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_unsigned_char, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64div_194 (void)
{
  extern typeof (f64div (vol_var_unsigned_char, vol_var_unsigned___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_unsigned_char, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_195 (void)
{
  extern typeof (f64div (vol_var_unsigned_char, vol_var_enum_e)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_unsigned_char, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_196 (void)
{
  extern typeof (f64div (vol_var_unsigned_char, vol_var__Bool)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_unsigned_char, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_197 (void)
{
  extern typeof (f64div (vol_var_unsigned_char, vol_var_bit_field)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_unsigned_char, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64div_198 (void)
{
  extern typeof (f64div (vol_var_short_int, vol_var__Float16)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_short_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64div_199 (void)
{
  extern typeof (f64div (vol_var_short_int, vol_var__Float32)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_short_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64div_200 (void)
{
  extern typeof (f64div (vol_var_short_int, vol_var__Float32x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_short_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64div_201 (void)
{
  extern typeof (f64div (vol_var_short_int, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_short_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64div_202 (void)
{
  extern typeof (f64div (vol_var_short_int, vol_var__Float64x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_short_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64div_203 (void)
{
  extern typeof (f64div (vol_var_short_int, vol_var__Float128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_short_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_204 (void)
{
  extern typeof (f64div (vol_var_short_int, vol_var_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_short_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_205 (void)
{
  extern typeof (f64div (vol_var_short_int, vol_var_signed_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_short_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_206 (void)
{
  extern typeof (f64div (vol_var_short_int, vol_var_unsigned_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_short_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_207 (void)
{
  extern typeof (f64div (vol_var_short_int, vol_var_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_short_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_208 (void)
{
  extern typeof (f64div (vol_var_short_int, vol_var_unsigned_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_short_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_209 (void)
{
  extern typeof (f64div (vol_var_short_int, vol_var_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_short_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_210 (void)
{
  extern typeof (f64div (vol_var_short_int, vol_var_unsigned_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_short_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_211 (void)
{
  extern typeof (f64div (vol_var_short_int, vol_var_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_short_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_212 (void)
{
  extern typeof (f64div (vol_var_short_int, vol_var_unsigned_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_short_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_213 (void)
{
  extern typeof (f64div (vol_var_short_int, vol_var_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_short_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_214 (void)
{
  extern typeof (f64div (vol_var_short_int, vol_var_unsigned_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_short_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64div_215 (void)
{
  extern typeof (f64div (vol_var_short_int, vol_var___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_short_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64div_216 (void)
{
  extern typeof (f64div (vol_var_short_int, vol_var_unsigned___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_short_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_217 (void)
{
  extern typeof (f64div (vol_var_short_int, vol_var_enum_e)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_short_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_218 (void)
{
  extern typeof (f64div (vol_var_short_int, vol_var__Bool)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_short_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_219 (void)
{
  extern typeof (f64div (vol_var_short_int, vol_var_bit_field)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_short_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64div_220 (void)
{
  extern typeof (f64div (vol_var_unsigned_short_int, vol_var__Float16)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_unsigned_short_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64div_221 (void)
{
  extern typeof (f64div (vol_var_unsigned_short_int, vol_var__Float32)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_unsigned_short_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64div_222 (void)
{
  extern typeof (f64div (vol_var_unsigned_short_int, vol_var__Float32x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_unsigned_short_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64div_223 (void)
{
  extern typeof (f64div (vol_var_unsigned_short_int, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_unsigned_short_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64div_224 (void)
{
  extern typeof (f64div (vol_var_unsigned_short_int, vol_var__Float64x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_unsigned_short_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64div_225 (void)
{
  extern typeof (f64div (vol_var_unsigned_short_int, vol_var__Float128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_unsigned_short_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_226 (void)
{
  extern typeof (f64div (vol_var_unsigned_short_int, vol_var_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_unsigned_short_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_227 (void)
{
  extern typeof (f64div (vol_var_unsigned_short_int, vol_var_signed_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_unsigned_short_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_228 (void)
{
  extern typeof (f64div (vol_var_unsigned_short_int, vol_var_unsigned_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_unsigned_short_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_229 (void)
{
  extern typeof (f64div (vol_var_unsigned_short_int, vol_var_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_unsigned_short_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_230 (void)
{
  extern typeof (f64div (vol_var_unsigned_short_int, vol_var_unsigned_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_unsigned_short_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_231 (void)
{
  extern typeof (f64div (vol_var_unsigned_short_int, vol_var_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_unsigned_short_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_232 (void)
{
  extern typeof (f64div (vol_var_unsigned_short_int, vol_var_unsigned_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_unsigned_short_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_233 (void)
{
  extern typeof (f64div (vol_var_unsigned_short_int, vol_var_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_unsigned_short_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_234 (void)
{
  extern typeof (f64div (vol_var_unsigned_short_int, vol_var_unsigned_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_unsigned_short_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_235 (void)
{
  extern typeof (f64div (vol_var_unsigned_short_int, vol_var_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_unsigned_short_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_236 (void)
{
  extern typeof (f64div (vol_var_unsigned_short_int, vol_var_unsigned_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_unsigned_short_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64div_237 (void)
{
  extern typeof (f64div (vol_var_unsigned_short_int, vol_var___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_unsigned_short_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64div_238 (void)
{
  extern typeof (f64div (vol_var_unsigned_short_int, vol_var_unsigned___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_unsigned_short_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_239 (void)
{
  extern typeof (f64div (vol_var_unsigned_short_int, vol_var_enum_e)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_unsigned_short_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_240 (void)
{
  extern typeof (f64div (vol_var_unsigned_short_int, vol_var__Bool)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_unsigned_short_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_241 (void)
{
  extern typeof (f64div (vol_var_unsigned_short_int, vol_var_bit_field)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_unsigned_short_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64div_242 (void)
{
  extern typeof (f64div (vol_var_int, vol_var__Float16)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64div_243 (void)
{
  extern typeof (f64div (vol_var_int, vol_var__Float32)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64div_244 (void)
{
  extern typeof (f64div (vol_var_int, vol_var__Float32x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64div_245 (void)
{
  extern typeof (f64div (vol_var_int, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64div_246 (void)
{
  extern typeof (f64div (vol_var_int, vol_var__Float64x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64div_247 (void)
{
  extern typeof (f64div (vol_var_int, vol_var__Float128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_248 (void)
{
  extern typeof (f64div (vol_var_int, vol_var_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_249 (void)
{
  extern typeof (f64div (vol_var_int, vol_var_signed_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_250 (void)
{
  extern typeof (f64div (vol_var_int, vol_var_unsigned_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_251 (void)
{
  extern typeof (f64div (vol_var_int, vol_var_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_252 (void)
{
  extern typeof (f64div (vol_var_int, vol_var_unsigned_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_253 (void)
{
  extern typeof (f64div (vol_var_int, vol_var_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_254 (void)
{
  extern typeof (f64div (vol_var_int, vol_var_unsigned_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_255 (void)
{
  extern typeof (f64div (vol_var_int, vol_var_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_256 (void)
{
  extern typeof (f64div (vol_var_int, vol_var_unsigned_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_257 (void)
{
  extern typeof (f64div (vol_var_int, vol_var_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_258 (void)
{
  extern typeof (f64div (vol_var_int, vol_var_unsigned_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64div_259 (void)
{
  extern typeof (f64div (vol_var_int, vol_var___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64div_260 (void)
{
  extern typeof (f64div (vol_var_int, vol_var_unsigned___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_261 (void)
{
  extern typeof (f64div (vol_var_int, vol_var_enum_e)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_262 (void)
{
  extern typeof (f64div (vol_var_int, vol_var__Bool)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_263 (void)
{
  extern typeof (f64div (vol_var_int, vol_var_bit_field)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64div_264 (void)
{
  extern typeof (f64div (vol_var_unsigned_int, vol_var__Float16)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_unsigned_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64div_265 (void)
{
  extern typeof (f64div (vol_var_unsigned_int, vol_var__Float32)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_unsigned_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64div_266 (void)
{
  extern typeof (f64div (vol_var_unsigned_int, vol_var__Float32x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_unsigned_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64div_267 (void)
{
  extern typeof (f64div (vol_var_unsigned_int, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_unsigned_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64div_268 (void)
{
  extern typeof (f64div (vol_var_unsigned_int, vol_var__Float64x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_unsigned_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64div_269 (void)
{
  extern typeof (f64div (vol_var_unsigned_int, vol_var__Float128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_unsigned_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_270 (void)
{
  extern typeof (f64div (vol_var_unsigned_int, vol_var_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_unsigned_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_271 (void)
{
  extern typeof (f64div (vol_var_unsigned_int, vol_var_signed_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_unsigned_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_272 (void)
{
  extern typeof (f64div (vol_var_unsigned_int, vol_var_unsigned_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_unsigned_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_273 (void)
{
  extern typeof (f64div (vol_var_unsigned_int, vol_var_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_unsigned_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_274 (void)
{
  extern typeof (f64div (vol_var_unsigned_int, vol_var_unsigned_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_unsigned_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_275 (void)
{
  extern typeof (f64div (vol_var_unsigned_int, vol_var_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_unsigned_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_276 (void)
{
  extern typeof (f64div (vol_var_unsigned_int, vol_var_unsigned_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_unsigned_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_277 (void)
{
  extern typeof (f64div (vol_var_unsigned_int, vol_var_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_unsigned_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_278 (void)
{
  extern typeof (f64div (vol_var_unsigned_int, vol_var_unsigned_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_unsigned_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_279 (void)
{
  extern typeof (f64div (vol_var_unsigned_int, vol_var_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_unsigned_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_280 (void)
{
  extern typeof (f64div (vol_var_unsigned_int, vol_var_unsigned_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_unsigned_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64div_281 (void)
{
  extern typeof (f64div (vol_var_unsigned_int, vol_var___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_unsigned_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64div_282 (void)
{
  extern typeof (f64div (vol_var_unsigned_int, vol_var_unsigned___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_unsigned_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_283 (void)
{
  extern typeof (f64div (vol_var_unsigned_int, vol_var_enum_e)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_unsigned_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_284 (void)
{
  extern typeof (f64div (vol_var_unsigned_int, vol_var__Bool)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_unsigned_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_285 (void)
{
  extern typeof (f64div (vol_var_unsigned_int, vol_var_bit_field)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_unsigned_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64div_286 (void)
{
  extern typeof (f64div (vol_var_long_int, vol_var__Float16)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_long_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64div_287 (void)
{
  extern typeof (f64div (vol_var_long_int, vol_var__Float32)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_long_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64div_288 (void)
{
  extern typeof (f64div (vol_var_long_int, vol_var__Float32x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_long_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64div_289 (void)
{
  extern typeof (f64div (vol_var_long_int, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_long_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64div_290 (void)
{
  extern typeof (f64div (vol_var_long_int, vol_var__Float64x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_long_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64div_291 (void)
{
  extern typeof (f64div (vol_var_long_int, vol_var__Float128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_long_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_292 (void)
{
  extern typeof (f64div (vol_var_long_int, vol_var_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_long_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_293 (void)
{
  extern typeof (f64div (vol_var_long_int, vol_var_signed_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_long_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_294 (void)
{
  extern typeof (f64div (vol_var_long_int, vol_var_unsigned_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_long_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_295 (void)
{
  extern typeof (f64div (vol_var_long_int, vol_var_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_long_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_296 (void)
{
  extern typeof (f64div (vol_var_long_int, vol_var_unsigned_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_long_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_297 (void)
{
  extern typeof (f64div (vol_var_long_int, vol_var_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_long_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_298 (void)
{
  extern typeof (f64div (vol_var_long_int, vol_var_unsigned_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_long_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_299 (void)
{
  extern typeof (f64div (vol_var_long_int, vol_var_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_long_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_300 (void)
{
  extern typeof (f64div (vol_var_long_int, vol_var_unsigned_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_long_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_301 (void)
{
  extern typeof (f64div (vol_var_long_int, vol_var_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_long_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_302 (void)
{
  extern typeof (f64div (vol_var_long_int, vol_var_unsigned_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_long_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64div_303 (void)
{
  extern typeof (f64div (vol_var_long_int, vol_var___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_long_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64div_304 (void)
{
  extern typeof (f64div (vol_var_long_int, vol_var_unsigned___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_long_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_305 (void)
{
  extern typeof (f64div (vol_var_long_int, vol_var_enum_e)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_long_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_306 (void)
{
  extern typeof (f64div (vol_var_long_int, vol_var__Bool)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_long_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_307 (void)
{
  extern typeof (f64div (vol_var_long_int, vol_var_bit_field)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_long_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64div_308 (void)
{
  extern typeof (f64div (vol_var_unsigned_long_int, vol_var__Float16)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_unsigned_long_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64div_309 (void)
{
  extern typeof (f64div (vol_var_unsigned_long_int, vol_var__Float32)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_unsigned_long_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64div_310 (void)
{
  extern typeof (f64div (vol_var_unsigned_long_int, vol_var__Float32x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_unsigned_long_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64div_311 (void)
{
  extern typeof (f64div (vol_var_unsigned_long_int, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_unsigned_long_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64div_312 (void)
{
  extern typeof (f64div (vol_var_unsigned_long_int, vol_var__Float64x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_unsigned_long_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64div_313 (void)
{
  extern typeof (f64div (vol_var_unsigned_long_int, vol_var__Float128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_unsigned_long_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_314 (void)
{
  extern typeof (f64div (vol_var_unsigned_long_int, vol_var_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_unsigned_long_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_315 (void)
{
  extern typeof (f64div (vol_var_unsigned_long_int, vol_var_signed_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_unsigned_long_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_316 (void)
{
  extern typeof (f64div (vol_var_unsigned_long_int, vol_var_unsigned_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_unsigned_long_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_317 (void)
{
  extern typeof (f64div (vol_var_unsigned_long_int, vol_var_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_unsigned_long_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_318 (void)
{
  extern typeof (f64div (vol_var_unsigned_long_int, vol_var_unsigned_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_unsigned_long_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_319 (void)
{
  extern typeof (f64div (vol_var_unsigned_long_int, vol_var_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_unsigned_long_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_320 (void)
{
  extern typeof (f64div (vol_var_unsigned_long_int, vol_var_unsigned_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_unsigned_long_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_321 (void)
{
  extern typeof (f64div (vol_var_unsigned_long_int, vol_var_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_unsigned_long_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_322 (void)
{
  extern typeof (f64div (vol_var_unsigned_long_int, vol_var_unsigned_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_unsigned_long_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_323 (void)
{
  extern typeof (f64div (vol_var_unsigned_long_int, vol_var_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_unsigned_long_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_324 (void)
{
  extern typeof (f64div (vol_var_unsigned_long_int, vol_var_unsigned_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_unsigned_long_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64div_325 (void)
{
  extern typeof (f64div (vol_var_unsigned_long_int, vol_var___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_unsigned_long_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64div_326 (void)
{
  extern typeof (f64div (vol_var_unsigned_long_int, vol_var_unsigned___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_unsigned_long_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_327 (void)
{
  extern typeof (f64div (vol_var_unsigned_long_int, vol_var_enum_e)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_unsigned_long_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_328 (void)
{
  extern typeof (f64div (vol_var_unsigned_long_int, vol_var__Bool)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_unsigned_long_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_329 (void)
{
  extern typeof (f64div (vol_var_unsigned_long_int, vol_var_bit_field)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_unsigned_long_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64div_330 (void)
{
  extern typeof (f64div (vol_var_long_long_int, vol_var__Float16)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_long_long_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64div_331 (void)
{
  extern typeof (f64div (vol_var_long_long_int, vol_var__Float32)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_long_long_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64div_332 (void)
{
  extern typeof (f64div (vol_var_long_long_int, vol_var__Float32x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_long_long_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64div_333 (void)
{
  extern typeof (f64div (vol_var_long_long_int, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_long_long_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64div_334 (void)
{
  extern typeof (f64div (vol_var_long_long_int, vol_var__Float64x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_long_long_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64div_335 (void)
{
  extern typeof (f64div (vol_var_long_long_int, vol_var__Float128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_long_long_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_336 (void)
{
  extern typeof (f64div (vol_var_long_long_int, vol_var_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_long_long_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_337 (void)
{
  extern typeof (f64div (vol_var_long_long_int, vol_var_signed_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_long_long_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_338 (void)
{
  extern typeof (f64div (vol_var_long_long_int, vol_var_unsigned_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_long_long_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_339 (void)
{
  extern typeof (f64div (vol_var_long_long_int, vol_var_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_long_long_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_340 (void)
{
  extern typeof (f64div (vol_var_long_long_int, vol_var_unsigned_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_long_long_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_341 (void)
{
  extern typeof (f64div (vol_var_long_long_int, vol_var_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_long_long_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_342 (void)
{
  extern typeof (f64div (vol_var_long_long_int, vol_var_unsigned_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_long_long_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_343 (void)
{
  extern typeof (f64div (vol_var_long_long_int, vol_var_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_long_long_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_344 (void)
{
  extern typeof (f64div (vol_var_long_long_int, vol_var_unsigned_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_long_long_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_345 (void)
{
  extern typeof (f64div (vol_var_long_long_int, vol_var_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_long_long_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_346 (void)
{
  extern typeof (f64div (vol_var_long_long_int, vol_var_unsigned_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_long_long_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64div_347 (void)
{
  extern typeof (f64div (vol_var_long_long_int, vol_var___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_long_long_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64div_348 (void)
{
  extern typeof (f64div (vol_var_long_long_int, vol_var_unsigned___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_long_long_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_349 (void)
{
  extern typeof (f64div (vol_var_long_long_int, vol_var_enum_e)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_long_long_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_350 (void)
{
  extern typeof (f64div (vol_var_long_long_int, vol_var__Bool)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_long_long_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_351 (void)
{
  extern typeof (f64div (vol_var_long_long_int, vol_var_bit_field)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_long_long_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64div_352 (void)
{
  extern typeof (f64div (vol_var_unsigned_long_long_int, vol_var__Float16)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_unsigned_long_long_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64div_353 (void)
{
  extern typeof (f64div (vol_var_unsigned_long_long_int, vol_var__Float32)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_unsigned_long_long_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64div_354 (void)
{
  extern typeof (f64div (vol_var_unsigned_long_long_int, vol_var__Float32x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_unsigned_long_long_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64div_355 (void)
{
  extern typeof (f64div (vol_var_unsigned_long_long_int, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_unsigned_long_long_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64div_356 (void)
{
  extern typeof (f64div (vol_var_unsigned_long_long_int, vol_var__Float64x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_unsigned_long_long_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64div_357 (void)
{
  extern typeof (f64div (vol_var_unsigned_long_long_int, vol_var__Float128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_unsigned_long_long_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_358 (void)
{
  extern typeof (f64div (vol_var_unsigned_long_long_int, vol_var_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_unsigned_long_long_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_359 (void)
{
  extern typeof (f64div (vol_var_unsigned_long_long_int, vol_var_signed_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_unsigned_long_long_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_360 (void)
{
  extern typeof (f64div (vol_var_unsigned_long_long_int, vol_var_unsigned_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_unsigned_long_long_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_361 (void)
{
  extern typeof (f64div (vol_var_unsigned_long_long_int, vol_var_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_unsigned_long_long_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_362 (void)
{
  extern typeof (f64div (vol_var_unsigned_long_long_int, vol_var_unsigned_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_unsigned_long_long_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_363 (void)
{
  extern typeof (f64div (vol_var_unsigned_long_long_int, vol_var_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_unsigned_long_long_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_364 (void)
{
  extern typeof (f64div (vol_var_unsigned_long_long_int, vol_var_unsigned_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_unsigned_long_long_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_365 (void)
{
  extern typeof (f64div (vol_var_unsigned_long_long_int, vol_var_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_unsigned_long_long_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_366 (void)
{
  extern typeof (f64div (vol_var_unsigned_long_long_int, vol_var_unsigned_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_unsigned_long_long_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_367 (void)
{
  extern typeof (f64div (vol_var_unsigned_long_long_int, vol_var_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_unsigned_long_long_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_368 (void)
{
  extern typeof (f64div (vol_var_unsigned_long_long_int, vol_var_unsigned_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_unsigned_long_long_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64div_369 (void)
{
  extern typeof (f64div (vol_var_unsigned_long_long_int, vol_var___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_unsigned_long_long_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64div_370 (void)
{
  extern typeof (f64div (vol_var_unsigned_long_long_int, vol_var_unsigned___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_unsigned_long_long_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_371 (void)
{
  extern typeof (f64div (vol_var_unsigned_long_long_int, vol_var_enum_e)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_unsigned_long_long_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_372 (void)
{
  extern typeof (f64div (vol_var_unsigned_long_long_int, vol_var__Bool)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_unsigned_long_long_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_373 (void)
{
  extern typeof (f64div (vol_var_unsigned_long_long_int, vol_var_bit_field)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_unsigned_long_long_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_f64div_374 (void)
{
  extern typeof (f64div (vol_var___int128, vol_var__Float16)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var___int128, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_f64div_375 (void)
{
  extern typeof (f64div (vol_var___int128, vol_var__Float32)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var___int128, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_f64div_376 (void)
{
  extern typeof (f64div (vol_var___int128, vol_var__Float32x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var___int128, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_f64div_377 (void)
{
  extern typeof (f64div (vol_var___int128, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var___int128, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_f64div_378 (void)
{
  extern typeof (f64div (vol_var___int128, vol_var__Float64x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var___int128, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_f64div_379 (void)
{
  extern typeof (f64div (vol_var___int128, vol_var__Float128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var___int128, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64div_380 (void)
{
  extern typeof (f64div (vol_var___int128, vol_var_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var___int128, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64div_381 (void)
{
  extern typeof (f64div (vol_var___int128, vol_var_signed_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var___int128, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64div_382 (void)
{
  extern typeof (f64div (vol_var___int128, vol_var_unsigned_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var___int128, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64div_383 (void)
{
  extern typeof (f64div (vol_var___int128, vol_var_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var___int128, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64div_384 (void)
{
  extern typeof (f64div (vol_var___int128, vol_var_unsigned_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var___int128, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64div_385 (void)
{
  extern typeof (f64div (vol_var___int128, vol_var_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var___int128, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64div_386 (void)
{
  extern typeof (f64div (vol_var___int128, vol_var_unsigned_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var___int128, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64div_387 (void)
{
  extern typeof (f64div (vol_var___int128, vol_var_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var___int128, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64div_388 (void)
{
  extern typeof (f64div (vol_var___int128, vol_var_unsigned_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var___int128, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64div_389 (void)
{
  extern typeof (f64div (vol_var___int128, vol_var_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var___int128, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64div_390 (void)
{
  extern typeof (f64div (vol_var___int128, vol_var_unsigned_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var___int128, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64div_391 (void)
{
  extern typeof (f64div (vol_var___int128, vol_var___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var___int128, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64div_392 (void)
{
  extern typeof (f64div (vol_var___int128, vol_var_unsigned___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var___int128, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64div_393 (void)
{
  extern typeof (f64div (vol_var___int128, vol_var_enum_e)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var___int128, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64div_394 (void)
{
  extern typeof (f64div (vol_var___int128, vol_var__Bool)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var___int128, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64div_395 (void)
{
  extern typeof (f64div (vol_var___int128, vol_var_bit_field)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var___int128, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_f64div_396 (void)
{
  extern typeof (f64div (vol_var_unsigned___int128, vol_var__Float16)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_unsigned___int128, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_f64div_397 (void)
{
  extern typeof (f64div (vol_var_unsigned___int128, vol_var__Float32)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_unsigned___int128, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_f64div_398 (void)
{
  extern typeof (f64div (vol_var_unsigned___int128, vol_var__Float32x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_unsigned___int128, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_f64div_399 (void)
{
  extern typeof (f64div (vol_var_unsigned___int128, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_unsigned___int128, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_f64div_400 (void)
{
  extern typeof (f64div (vol_var_unsigned___int128, vol_var__Float64x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_unsigned___int128, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_f64div_401 (void)
{
  extern typeof (f64div (vol_var_unsigned___int128, vol_var__Float128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_unsigned___int128, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64div_402 (void)
{
  extern typeof (f64div (vol_var_unsigned___int128, vol_var_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_unsigned___int128, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64div_403 (void)
{
  extern typeof (f64div (vol_var_unsigned___int128, vol_var_signed_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_unsigned___int128, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64div_404 (void)
{
  extern typeof (f64div (vol_var_unsigned___int128, vol_var_unsigned_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_unsigned___int128, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64div_405 (void)
{
  extern typeof (f64div (vol_var_unsigned___int128, vol_var_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_unsigned___int128, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64div_406 (void)
{
  extern typeof (f64div (vol_var_unsigned___int128, vol_var_unsigned_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_unsigned___int128, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64div_407 (void)
{
  extern typeof (f64div (vol_var_unsigned___int128, vol_var_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_unsigned___int128, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64div_408 (void)
{
  extern typeof (f64div (vol_var_unsigned___int128, vol_var_unsigned_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_unsigned___int128, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64div_409 (void)
{
  extern typeof (f64div (vol_var_unsigned___int128, vol_var_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_unsigned___int128, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64div_410 (void)
{
  extern typeof (f64div (vol_var_unsigned___int128, vol_var_unsigned_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_unsigned___int128, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64div_411 (void)
{
  extern typeof (f64div (vol_var_unsigned___int128, vol_var_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_unsigned___int128, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64div_412 (void)
{
  extern typeof (f64div (vol_var_unsigned___int128, vol_var_unsigned_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_unsigned___int128, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64div_413 (void)
{
  extern typeof (f64div (vol_var_unsigned___int128, vol_var___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_unsigned___int128, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64div_414 (void)
{
  extern typeof (f64div (vol_var_unsigned___int128, vol_var_unsigned___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_unsigned___int128, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64div_415 (void)
{
  extern typeof (f64div (vol_var_unsigned___int128, vol_var_enum_e)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_unsigned___int128, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64div_416 (void)
{
  extern typeof (f64div (vol_var_unsigned___int128, vol_var__Bool)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_unsigned___int128, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64div_417 (void)
{
  extern typeof (f64div (vol_var_unsigned___int128, vol_var_bit_field)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_unsigned___int128, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64div_418 (void)
{
  extern typeof (f64div (vol_var_enum_e, vol_var__Float16)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_enum_e, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64div_419 (void)
{
  extern typeof (f64div (vol_var_enum_e, vol_var__Float32)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_enum_e, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64div_420 (void)
{
  extern typeof (f64div (vol_var_enum_e, vol_var__Float32x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_enum_e, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64div_421 (void)
{
  extern typeof (f64div (vol_var_enum_e, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_enum_e, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64div_422 (void)
{
  extern typeof (f64div (vol_var_enum_e, vol_var__Float64x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_enum_e, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64div_423 (void)
{
  extern typeof (f64div (vol_var_enum_e, vol_var__Float128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_enum_e, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_424 (void)
{
  extern typeof (f64div (vol_var_enum_e, vol_var_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_enum_e, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_425 (void)
{
  extern typeof (f64div (vol_var_enum_e, vol_var_signed_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_enum_e, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_426 (void)
{
  extern typeof (f64div (vol_var_enum_e, vol_var_unsigned_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_enum_e, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_427 (void)
{
  extern typeof (f64div (vol_var_enum_e, vol_var_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_enum_e, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_428 (void)
{
  extern typeof (f64div (vol_var_enum_e, vol_var_unsigned_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_enum_e, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_429 (void)
{
  extern typeof (f64div (vol_var_enum_e, vol_var_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_enum_e, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_430 (void)
{
  extern typeof (f64div (vol_var_enum_e, vol_var_unsigned_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_enum_e, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_431 (void)
{
  extern typeof (f64div (vol_var_enum_e, vol_var_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_enum_e, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_432 (void)
{
  extern typeof (f64div (vol_var_enum_e, vol_var_unsigned_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_enum_e, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_433 (void)
{
  extern typeof (f64div (vol_var_enum_e, vol_var_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_enum_e, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_434 (void)
{
  extern typeof (f64div (vol_var_enum_e, vol_var_unsigned_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_enum_e, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64div_435 (void)
{
  extern typeof (f64div (vol_var_enum_e, vol_var___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_enum_e, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64div_436 (void)
{
  extern typeof (f64div (vol_var_enum_e, vol_var_unsigned___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_enum_e, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_437 (void)
{
  extern typeof (f64div (vol_var_enum_e, vol_var_enum_e)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_enum_e, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_438 (void)
{
  extern typeof (f64div (vol_var_enum_e, vol_var__Bool)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_enum_e, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_439 (void)
{
  extern typeof (f64div (vol_var_enum_e, vol_var_bit_field)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_enum_e, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64div_440 (void)
{
  extern typeof (f64div (vol_var__Bool, vol_var__Float16)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Bool, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64div_441 (void)
{
  extern typeof (f64div (vol_var__Bool, vol_var__Float32)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Bool, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64div_442 (void)
{
  extern typeof (f64div (vol_var__Bool, vol_var__Float32x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Bool, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64div_443 (void)
{
  extern typeof (f64div (vol_var__Bool, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Bool, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64div_444 (void)
{
  extern typeof (f64div (vol_var__Bool, vol_var__Float64x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Bool, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64div_445 (void)
{
  extern typeof (f64div (vol_var__Bool, vol_var__Float128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Bool, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_446 (void)
{
  extern typeof (f64div (vol_var__Bool, vol_var_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Bool, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_447 (void)
{
  extern typeof (f64div (vol_var__Bool, vol_var_signed_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Bool, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_448 (void)
{
  extern typeof (f64div (vol_var__Bool, vol_var_unsigned_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Bool, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_449 (void)
{
  extern typeof (f64div (vol_var__Bool, vol_var_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Bool, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_450 (void)
{
  extern typeof (f64div (vol_var__Bool, vol_var_unsigned_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Bool, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_451 (void)
{
  extern typeof (f64div (vol_var__Bool, vol_var_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Bool, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_452 (void)
{
  extern typeof (f64div (vol_var__Bool, vol_var_unsigned_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Bool, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_453 (void)
{
  extern typeof (f64div (vol_var__Bool, vol_var_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Bool, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_454 (void)
{
  extern typeof (f64div (vol_var__Bool, vol_var_unsigned_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Bool, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_455 (void)
{
  extern typeof (f64div (vol_var__Bool, vol_var_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Bool, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_456 (void)
{
  extern typeof (f64div (vol_var__Bool, vol_var_unsigned_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Bool, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64div_457 (void)
{
  extern typeof (f64div (vol_var__Bool, vol_var___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Bool, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64div_458 (void)
{
  extern typeof (f64div (vol_var__Bool, vol_var_unsigned___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Bool, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_459 (void)
{
  extern typeof (f64div (vol_var__Bool, vol_var_enum_e)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Bool, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_460 (void)
{
  extern typeof (f64div (vol_var__Bool, vol_var__Bool)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Bool, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_461 (void)
{
  extern typeof (f64div (vol_var__Bool, vol_var_bit_field)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var__Bool, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f64div_462 (void)
{
  extern typeof (f64div (vol_var_bit_field, vol_var__Float16)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_bit_field, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f64div_463 (void)
{
  extern typeof (f64div (vol_var_bit_field, vol_var__Float32)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_bit_field, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f64div_464 (void)
{
  extern typeof (f64div (vol_var_bit_field, vol_var__Float32x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_bit_field, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f64div_465 (void)
{
  extern typeof (f64div (vol_var_bit_field, vol_var__Float64)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_bit_field, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f64div_466 (void)
{
  extern typeof (f64div (vol_var_bit_field, vol_var__Float64x)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_bit_field, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f64div_467 (void)
{
  extern typeof (f64div (vol_var_bit_field, vol_var__Float128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_bit_field, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_468 (void)
{
  extern typeof (f64div (vol_var_bit_field, vol_var_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_bit_field, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_469 (void)
{
  extern typeof (f64div (vol_var_bit_field, vol_var_signed_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_bit_field, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_470 (void)
{
  extern typeof (f64div (vol_var_bit_field, vol_var_unsigned_char)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_bit_field, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_471 (void)
{
  extern typeof (f64div (vol_var_bit_field, vol_var_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_bit_field, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_472 (void)
{
  extern typeof (f64div (vol_var_bit_field, vol_var_unsigned_short_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_bit_field, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_473 (void)
{
  extern typeof (f64div (vol_var_bit_field, vol_var_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_bit_field, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_474 (void)
{
  extern typeof (f64div (vol_var_bit_field, vol_var_unsigned_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_bit_field, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_475 (void)
{
  extern typeof (f64div (vol_var_bit_field, vol_var_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_bit_field, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_476 (void)
{
  extern typeof (f64div (vol_var_bit_field, vol_var_unsigned_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_bit_field, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_477 (void)
{
  extern typeof (f64div (vol_var_bit_field, vol_var_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_bit_field, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_478 (void)
{
  extern typeof (f64div (vol_var_bit_field, vol_var_unsigned_long_long_int)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_bit_field, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64div_479 (void)
{
  extern typeof (f64div (vol_var_bit_field, vol_var___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_bit_field, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f64div_480 (void)
{
  extern typeof (f64div (vol_var_bit_field, vol_var_unsigned___int128)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_bit_field, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_481 (void)
{
  extern typeof (f64div (vol_var_bit_field, vol_var_enum_e)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_bit_field, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_482 (void)
{
  extern typeof (f64div (vol_var_bit_field, vol_var__Bool)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_bit_field, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f64div_483 (void)
{
  extern typeof (f64div (vol_var_bit_field, vol_var_bit_field)) var__Float64 __attribute__ ((unused));
  vol_var__Float64 = f64div (vol_var_bit_field, vol_var_bit_field);
}
#endif
static const struct test tests[] =
  {
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64div_0, "f64div", "f64div (_Float16, _Float16)", FLT128_MANT_DIG, FLT16_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32
    { test_f64div_1, "f64div", "f64div (_Float16, _Float32)", FLT128_MANT_DIG, FLT32_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
    { test_f64div_2, "f64div", "f64div (_Float16, _Float32x)", FLT128_MANT_DIG, FLT32X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64
    { test_f64div_3, "f64div", "f64div (_Float16, _Float64)", FLT128_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
    { test_f64div_4, "f64div", "f64div (_Float16, _Float64x)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F16
    { test_f64div_5, "f64div", "f64div (_Float16, _Float128)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64div_6, "f64div", "f64div (_Float16, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64div_7, "f64div", "f64div (_Float16, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64div_8, "f64div", "f64div (_Float16, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64div_9, "f64div", "f64div (_Float16, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64div_10, "f64div", "f64div (_Float16, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64div_11, "f64div", "f64div (_Float16, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64div_12, "f64div", "f64div (_Float16, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64div_13, "f64div", "f64div (_Float16, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64div_14, "f64div", "f64div (_Float16, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64div_15, "f64div", "f64div (_Float16, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64div_16, "f64div", "f64div (_Float16, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_f64div_17, "f64div", "f64div (_Float16, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_f64div_18, "f64div", "f64div (_Float16, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64div_19, "f64div", "f64div (_Float16, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64div_20, "f64div", "f64div (_Float16, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64div_21, "f64div", "f64div (_Float16, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32
    { test_f64div_22, "f64div", "f64div (_Float32, _Float16)", FLT128_MANT_DIG, FLT32_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64div_23, "f64div", "f64div (_Float32, _Float32)", FLT128_MANT_DIG, FLT32_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
    { test_f64div_24, "f64div", "f64div (_Float32, _Float32x)", FLT128_MANT_DIG, FLT32X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64
    { test_f64div_25, "f64div", "f64div (_Float32, _Float64)", FLT128_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
    { test_f64div_26, "f64div", "f64div (_Float32, _Float64x)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32
    { test_f64div_27, "f64div", "f64div (_Float32, _Float128)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64div_28, "f64div", "f64div (_Float32, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64div_29, "f64div", "f64div (_Float32, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64div_30, "f64div", "f64div (_Float32, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64div_31, "f64div", "f64div (_Float32, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64div_32, "f64div", "f64div (_Float32, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64div_33, "f64div", "f64div (_Float32, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64div_34, "f64div", "f64div (_Float32, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64div_35, "f64div", "f64div (_Float32, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64div_36, "f64div", "f64div (_Float32, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64div_37, "f64div", "f64div (_Float32, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64div_38, "f64div", "f64div (_Float32, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_f64div_39, "f64div", "f64div (_Float32, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_f64div_40, "f64div", "f64div (_Float32, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64div_41, "f64div", "f64div (_Float32, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64div_42, "f64div", "f64div (_Float32, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64div_43, "f64div", "f64div (_Float32, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
    { test_f64div_44, "f64div", "f64div (_Float32x, _Float16)", FLT128_MANT_DIG, FLT32X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
    { test_f64div_45, "f64div", "f64div (_Float32x, _Float32)", FLT128_MANT_DIG, FLT32X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64div_46, "f64div", "f64div (_Float32x, _Float32x)", FLT128_MANT_DIG, FLT32X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64
    { test_f64div_47, "f64div", "f64div (_Float32x, _Float64)", FLT128_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
    { test_f64div_48, "f64div", "f64div (_Float32x, _Float64x)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
    { test_f64div_49, "f64div", "f64div (_Float32x, _Float128)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64div_50, "f64div", "f64div (_Float32x, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64div_51, "f64div", "f64div (_Float32x, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64div_52, "f64div", "f64div (_Float32x, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64div_53, "f64div", "f64div (_Float32x, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64div_54, "f64div", "f64div (_Float32x, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64div_55, "f64div", "f64div (_Float32x, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64div_56, "f64div", "f64div (_Float32x, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64div_57, "f64div", "f64div (_Float32x, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64div_58, "f64div", "f64div (_Float32x, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64div_59, "f64div", "f64div (_Float32x, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64div_60, "f64div", "f64div (_Float32x, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_f64div_61, "f64div", "f64div (_Float32x, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_f64div_62, "f64div", "f64div (_Float32x, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64div_63, "f64div", "f64div (_Float32x, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64div_64, "f64div", "f64div (_Float32x, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64div_65, "f64div", "f64div (_Float32x, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64
    { test_f64div_66, "f64div", "f64div (_Float64, _Float16)", FLT128_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64
    { test_f64div_67, "f64div", "f64div (_Float64, _Float32)", FLT128_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64
    { test_f64div_68, "f64div", "f64div (_Float64, _Float32x)", FLT128_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64div_69, "f64div", "f64div (_Float64, _Float64)", FLT128_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
    { test_f64div_70, "f64div", "f64div (_Float64, _Float64x)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64
    { test_f64div_71, "f64div", "f64div (_Float64, _Float128)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64div_72, "f64div", "f64div (_Float64, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64div_73, "f64div", "f64div (_Float64, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64div_74, "f64div", "f64div (_Float64, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64div_75, "f64div", "f64div (_Float64, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64div_76, "f64div", "f64div (_Float64, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64div_77, "f64div", "f64div (_Float64, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64div_78, "f64div", "f64div (_Float64, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64div_79, "f64div", "f64div (_Float64, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64div_80, "f64div", "f64div (_Float64, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64div_81, "f64div", "f64div (_Float64, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64div_82, "f64div", "f64div (_Float64, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_f64div_83, "f64div", "f64div (_Float64, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_f64div_84, "f64div", "f64div (_Float64, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64div_85, "f64div", "f64div (_Float64, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64div_86, "f64div", "f64div (_Float64, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64div_87, "f64div", "f64div (_Float64, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
    { test_f64div_88, "f64div", "f64div (_Float64x, _Float16)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
    { test_f64div_89, "f64div", "f64div (_Float64x, _Float32)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
    { test_f64div_90, "f64div", "f64div (_Float64x, _Float32x)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
    { test_f64div_91, "f64div", "f64div (_Float64x, _Float64)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64div_92, "f64div", "f64div (_Float64x, _Float64x)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
    { test_f64div_93, "f64div", "f64div (_Float64x, _Float128)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64div_94, "f64div", "f64div (_Float64x, char)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64div_95, "f64div", "f64div (_Float64x, signed char)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64div_96, "f64div", "f64div (_Float64x, unsigned char)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64div_97, "f64div", "f64div (_Float64x, short int)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64div_98, "f64div", "f64div (_Float64x, unsigned short int)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64div_99, "f64div", "f64div (_Float64x, int)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64div_100, "f64div", "f64div (_Float64x, unsigned int)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64div_101, "f64div", "f64div (_Float64x, long int)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64div_102, "f64div", "f64div (_Float64x, unsigned long int)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64div_103, "f64div", "f64div (_Float64x, long long int)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64div_104, "f64div", "f64div (_Float64x, unsigned long long int)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_f64div_105, "f64div", "f64div (_Float64x, __int128)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_f64div_106, "f64div", "f64div (_Float64x, unsigned __int128)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64div_107, "f64div", "f64div (_Float64x, enum e)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64div_108, "f64div", "f64div (_Float64x, _Bool)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64div_109, "f64div", "f64div (_Float64x, bit_field)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F16
    { test_f64div_110, "f64div", "f64div (_Float128, _Float16)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32
    { test_f64div_111, "f64div", "f64div (_Float128, _Float32)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
    { test_f64div_112, "f64div", "f64div (_Float128, _Float32x)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64
    { test_f64div_113, "f64div", "f64div (_Float128, _Float64)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
    { test_f64div_114, "f64div", "f64div (_Float128, _Float64x)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64div_115, "f64div", "f64div (_Float128, _Float128)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64div_116, "f64div", "f64div (_Float128, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64div_117, "f64div", "f64div (_Float128, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64div_118, "f64div", "f64div (_Float128, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64div_119, "f64div", "f64div (_Float128, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64div_120, "f64div", "f64div (_Float128, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64div_121, "f64div", "f64div (_Float128, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64div_122, "f64div", "f64div (_Float128, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64div_123, "f64div", "f64div (_Float128, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64div_124, "f64div", "f64div (_Float128, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64div_125, "f64div", "f64div (_Float128, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64div_126, "f64div", "f64div (_Float128, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_f64div_127, "f64div", "f64div (_Float128, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_f64div_128, "f64div", "f64div (_Float128, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64div_129, "f64div", "f64div (_Float128, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64div_130, "f64div", "f64div (_Float128, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64div_131, "f64div", "f64div (_Float128, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64div_132, "f64div", "f64div (char, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64div_133, "f64div", "f64div (char, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64div_134, "f64div", "f64div (char, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64div_135, "f64div", "f64div (char, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64div_136, "f64div", "f64div (char, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64div_137, "f64div", "f64div (char, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_138, "f64div", "f64div (char, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_139, "f64div", "f64div (char, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_140, "f64div", "f64div (char, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_141, "f64div", "f64div (char, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_142, "f64div", "f64div (char, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_143, "f64div", "f64div (char, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_144, "f64div", "f64div (char, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_145, "f64div", "f64div (char, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_146, "f64div", "f64div (char, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_147, "f64div", "f64div (char, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_148, "f64div", "f64div (char, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64div_149, "f64div", "f64div (char, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64div_150, "f64div", "f64div (char, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_151, "f64div", "f64div (char, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_152, "f64div", "f64div (char, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_153, "f64div", "f64div (char, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64div_154, "f64div", "f64div (signed char, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64div_155, "f64div", "f64div (signed char, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64div_156, "f64div", "f64div (signed char, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64div_157, "f64div", "f64div (signed char, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64div_158, "f64div", "f64div (signed char, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64div_159, "f64div", "f64div (signed char, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_160, "f64div", "f64div (signed char, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_161, "f64div", "f64div (signed char, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_162, "f64div", "f64div (signed char, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_163, "f64div", "f64div (signed char, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_164, "f64div", "f64div (signed char, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_165, "f64div", "f64div (signed char, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_166, "f64div", "f64div (signed char, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_167, "f64div", "f64div (signed char, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_168, "f64div", "f64div (signed char, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_169, "f64div", "f64div (signed char, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_170, "f64div", "f64div (signed char, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64div_171, "f64div", "f64div (signed char, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64div_172, "f64div", "f64div (signed char, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_173, "f64div", "f64div (signed char, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_174, "f64div", "f64div (signed char, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_175, "f64div", "f64div (signed char, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64div_176, "f64div", "f64div (unsigned char, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64div_177, "f64div", "f64div (unsigned char, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64div_178, "f64div", "f64div (unsigned char, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64div_179, "f64div", "f64div (unsigned char, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64div_180, "f64div", "f64div (unsigned char, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64div_181, "f64div", "f64div (unsigned char, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_182, "f64div", "f64div (unsigned char, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_183, "f64div", "f64div (unsigned char, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_184, "f64div", "f64div (unsigned char, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_185, "f64div", "f64div (unsigned char, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_186, "f64div", "f64div (unsigned char, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_187, "f64div", "f64div (unsigned char, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_188, "f64div", "f64div (unsigned char, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_189, "f64div", "f64div (unsigned char, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_190, "f64div", "f64div (unsigned char, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_191, "f64div", "f64div (unsigned char, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_192, "f64div", "f64div (unsigned char, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64div_193, "f64div", "f64div (unsigned char, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64div_194, "f64div", "f64div (unsigned char, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_195, "f64div", "f64div (unsigned char, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_196, "f64div", "f64div (unsigned char, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_197, "f64div", "f64div (unsigned char, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64div_198, "f64div", "f64div (short int, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64div_199, "f64div", "f64div (short int, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64div_200, "f64div", "f64div (short int, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64div_201, "f64div", "f64div (short int, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64div_202, "f64div", "f64div (short int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64div_203, "f64div", "f64div (short int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_204, "f64div", "f64div (short int, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_205, "f64div", "f64div (short int, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_206, "f64div", "f64div (short int, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_207, "f64div", "f64div (short int, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_208, "f64div", "f64div (short int, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_209, "f64div", "f64div (short int, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_210, "f64div", "f64div (short int, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_211, "f64div", "f64div (short int, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_212, "f64div", "f64div (short int, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_213, "f64div", "f64div (short int, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_214, "f64div", "f64div (short int, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64div_215, "f64div", "f64div (short int, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64div_216, "f64div", "f64div (short int, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_217, "f64div", "f64div (short int, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_218, "f64div", "f64div (short int, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_219, "f64div", "f64div (short int, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64div_220, "f64div", "f64div (unsigned short int, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64div_221, "f64div", "f64div (unsigned short int, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64div_222, "f64div", "f64div (unsigned short int, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64div_223, "f64div", "f64div (unsigned short int, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64div_224, "f64div", "f64div (unsigned short int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64div_225, "f64div", "f64div (unsigned short int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_226, "f64div", "f64div (unsigned short int, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_227, "f64div", "f64div (unsigned short int, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_228, "f64div", "f64div (unsigned short int, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_229, "f64div", "f64div (unsigned short int, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_230, "f64div", "f64div (unsigned short int, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_231, "f64div", "f64div (unsigned short int, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_232, "f64div", "f64div (unsigned short int, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_233, "f64div", "f64div (unsigned short int, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_234, "f64div", "f64div (unsigned short int, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_235, "f64div", "f64div (unsigned short int, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_236, "f64div", "f64div (unsigned short int, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64div_237, "f64div", "f64div (unsigned short int, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64div_238, "f64div", "f64div (unsigned short int, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_239, "f64div", "f64div (unsigned short int, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_240, "f64div", "f64div (unsigned short int, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_241, "f64div", "f64div (unsigned short int, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64div_242, "f64div", "f64div (int, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64div_243, "f64div", "f64div (int, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64div_244, "f64div", "f64div (int, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64div_245, "f64div", "f64div (int, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64div_246, "f64div", "f64div (int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64div_247, "f64div", "f64div (int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_248, "f64div", "f64div (int, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_249, "f64div", "f64div (int, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_250, "f64div", "f64div (int, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_251, "f64div", "f64div (int, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_252, "f64div", "f64div (int, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_253, "f64div", "f64div (int, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_254, "f64div", "f64div (int, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_255, "f64div", "f64div (int, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_256, "f64div", "f64div (int, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_257, "f64div", "f64div (int, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_258, "f64div", "f64div (int, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64div_259, "f64div", "f64div (int, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64div_260, "f64div", "f64div (int, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_261, "f64div", "f64div (int, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_262, "f64div", "f64div (int, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_263, "f64div", "f64div (int, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64div_264, "f64div", "f64div (unsigned int, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64div_265, "f64div", "f64div (unsigned int, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64div_266, "f64div", "f64div (unsigned int, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64div_267, "f64div", "f64div (unsigned int, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64div_268, "f64div", "f64div (unsigned int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64div_269, "f64div", "f64div (unsigned int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_270, "f64div", "f64div (unsigned int, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_271, "f64div", "f64div (unsigned int, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_272, "f64div", "f64div (unsigned int, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_273, "f64div", "f64div (unsigned int, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_274, "f64div", "f64div (unsigned int, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_275, "f64div", "f64div (unsigned int, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_276, "f64div", "f64div (unsigned int, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_277, "f64div", "f64div (unsigned int, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_278, "f64div", "f64div (unsigned int, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_279, "f64div", "f64div (unsigned int, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_280, "f64div", "f64div (unsigned int, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64div_281, "f64div", "f64div (unsigned int, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64div_282, "f64div", "f64div (unsigned int, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_283, "f64div", "f64div (unsigned int, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_284, "f64div", "f64div (unsigned int, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_285, "f64div", "f64div (unsigned int, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64div_286, "f64div", "f64div (long int, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64div_287, "f64div", "f64div (long int, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64div_288, "f64div", "f64div (long int, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64div_289, "f64div", "f64div (long int, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64div_290, "f64div", "f64div (long int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64div_291, "f64div", "f64div (long int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_292, "f64div", "f64div (long int, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_293, "f64div", "f64div (long int, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_294, "f64div", "f64div (long int, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_295, "f64div", "f64div (long int, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_296, "f64div", "f64div (long int, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_297, "f64div", "f64div (long int, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_298, "f64div", "f64div (long int, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_299, "f64div", "f64div (long int, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_300, "f64div", "f64div (long int, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_301, "f64div", "f64div (long int, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_302, "f64div", "f64div (long int, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64div_303, "f64div", "f64div (long int, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64div_304, "f64div", "f64div (long int, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_305, "f64div", "f64div (long int, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_306, "f64div", "f64div (long int, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_307, "f64div", "f64div (long int, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64div_308, "f64div", "f64div (unsigned long int, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64div_309, "f64div", "f64div (unsigned long int, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64div_310, "f64div", "f64div (unsigned long int, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64div_311, "f64div", "f64div (unsigned long int, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64div_312, "f64div", "f64div (unsigned long int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64div_313, "f64div", "f64div (unsigned long int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_314, "f64div", "f64div (unsigned long int, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_315, "f64div", "f64div (unsigned long int, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_316, "f64div", "f64div (unsigned long int, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_317, "f64div", "f64div (unsigned long int, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_318, "f64div", "f64div (unsigned long int, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_319, "f64div", "f64div (unsigned long int, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_320, "f64div", "f64div (unsigned long int, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_321, "f64div", "f64div (unsigned long int, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_322, "f64div", "f64div (unsigned long int, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_323, "f64div", "f64div (unsigned long int, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_324, "f64div", "f64div (unsigned long int, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64div_325, "f64div", "f64div (unsigned long int, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64div_326, "f64div", "f64div (unsigned long int, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_327, "f64div", "f64div (unsigned long int, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_328, "f64div", "f64div (unsigned long int, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_329, "f64div", "f64div (unsigned long int, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64div_330, "f64div", "f64div (long long int, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64div_331, "f64div", "f64div (long long int, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64div_332, "f64div", "f64div (long long int, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64div_333, "f64div", "f64div (long long int, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64div_334, "f64div", "f64div (long long int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64div_335, "f64div", "f64div (long long int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_336, "f64div", "f64div (long long int, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_337, "f64div", "f64div (long long int, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_338, "f64div", "f64div (long long int, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_339, "f64div", "f64div (long long int, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_340, "f64div", "f64div (long long int, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_341, "f64div", "f64div (long long int, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_342, "f64div", "f64div (long long int, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_343, "f64div", "f64div (long long int, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_344, "f64div", "f64div (long long int, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_345, "f64div", "f64div (long long int, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_346, "f64div", "f64div (long long int, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64div_347, "f64div", "f64div (long long int, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64div_348, "f64div", "f64div (long long int, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_349, "f64div", "f64div (long long int, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_350, "f64div", "f64div (long long int, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_351, "f64div", "f64div (long long int, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64div_352, "f64div", "f64div (unsigned long long int, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64div_353, "f64div", "f64div (unsigned long long int, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64div_354, "f64div", "f64div (unsigned long long int, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64div_355, "f64div", "f64div (unsigned long long int, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64div_356, "f64div", "f64div (unsigned long long int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64div_357, "f64div", "f64div (unsigned long long int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_358, "f64div", "f64div (unsigned long long int, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_359, "f64div", "f64div (unsigned long long int, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_360, "f64div", "f64div (unsigned long long int, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_361, "f64div", "f64div (unsigned long long int, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_362, "f64div", "f64div (unsigned long long int, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_363, "f64div", "f64div (unsigned long long int, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_364, "f64div", "f64div (unsigned long long int, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_365, "f64div", "f64div (unsigned long long int, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_366, "f64div", "f64div (unsigned long long int, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_367, "f64div", "f64div (unsigned long long int, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_368, "f64div", "f64div (unsigned long long int, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64div_369, "f64div", "f64div (unsigned long long int, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64div_370, "f64div", "f64div (unsigned long long int, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_371, "f64div", "f64div (unsigned long long int, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_372, "f64div", "f64div (unsigned long long int, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_373, "f64div", "f64div (unsigned long long int, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_f64div_374, "f64div", "f64div (__int128, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_f64div_375, "f64div", "f64div (__int128, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_f64div_376, "f64div", "f64div (__int128, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_f64div_377, "f64div", "f64div (__int128, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_f64div_378, "f64div", "f64div (__int128, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_f64div_379, "f64div", "f64div (__int128, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64div_380, "f64div", "f64div (__int128, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64div_381, "f64div", "f64div (__int128, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64div_382, "f64div", "f64div (__int128, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64div_383, "f64div", "f64div (__int128, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64div_384, "f64div", "f64div (__int128, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64div_385, "f64div", "f64div (__int128, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64div_386, "f64div", "f64div (__int128, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64div_387, "f64div", "f64div (__int128, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64div_388, "f64div", "f64div (__int128, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64div_389, "f64div", "f64div (__int128, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64div_390, "f64div", "f64div (__int128, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64div_391, "f64div", "f64div (__int128, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64div_392, "f64div", "f64div (__int128, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64div_393, "f64div", "f64div (__int128, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64div_394, "f64div", "f64div (__int128, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64div_395, "f64div", "f64div (__int128, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_f64div_396, "f64div", "f64div (unsigned __int128, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_f64div_397, "f64div", "f64div (unsigned __int128, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_f64div_398, "f64div", "f64div (unsigned __int128, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_f64div_399, "f64div", "f64div (unsigned __int128, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_f64div_400, "f64div", "f64div (unsigned __int128, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_f64div_401, "f64div", "f64div (unsigned __int128, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64div_402, "f64div", "f64div (unsigned __int128, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64div_403, "f64div", "f64div (unsigned __int128, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64div_404, "f64div", "f64div (unsigned __int128, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64div_405, "f64div", "f64div (unsigned __int128, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64div_406, "f64div", "f64div (unsigned __int128, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64div_407, "f64div", "f64div (unsigned __int128, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64div_408, "f64div", "f64div (unsigned __int128, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64div_409, "f64div", "f64div (unsigned __int128, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64div_410, "f64div", "f64div (unsigned __int128, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64div_411, "f64div", "f64div (unsigned __int128, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64div_412, "f64div", "f64div (unsigned __int128, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64div_413, "f64div", "f64div (unsigned __int128, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64div_414, "f64div", "f64div (unsigned __int128, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64div_415, "f64div", "f64div (unsigned __int128, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64div_416, "f64div", "f64div (unsigned __int128, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64div_417, "f64div", "f64div (unsigned __int128, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64div_418, "f64div", "f64div (enum e, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64div_419, "f64div", "f64div (enum e, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64div_420, "f64div", "f64div (enum e, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64div_421, "f64div", "f64div (enum e, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64div_422, "f64div", "f64div (enum e, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64div_423, "f64div", "f64div (enum e, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_424, "f64div", "f64div (enum e, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_425, "f64div", "f64div (enum e, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_426, "f64div", "f64div (enum e, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_427, "f64div", "f64div (enum e, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_428, "f64div", "f64div (enum e, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_429, "f64div", "f64div (enum e, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_430, "f64div", "f64div (enum e, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_431, "f64div", "f64div (enum e, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_432, "f64div", "f64div (enum e, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_433, "f64div", "f64div (enum e, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_434, "f64div", "f64div (enum e, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64div_435, "f64div", "f64div (enum e, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64div_436, "f64div", "f64div (enum e, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_437, "f64div", "f64div (enum e, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_438, "f64div", "f64div (enum e, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_439, "f64div", "f64div (enum e, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64div_440, "f64div", "f64div (_Bool, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64div_441, "f64div", "f64div (_Bool, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64div_442, "f64div", "f64div (_Bool, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64div_443, "f64div", "f64div (_Bool, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64div_444, "f64div", "f64div (_Bool, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64div_445, "f64div", "f64div (_Bool, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_446, "f64div", "f64div (_Bool, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_447, "f64div", "f64div (_Bool, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_448, "f64div", "f64div (_Bool, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_449, "f64div", "f64div (_Bool, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_450, "f64div", "f64div (_Bool, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_451, "f64div", "f64div (_Bool, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_452, "f64div", "f64div (_Bool, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_453, "f64div", "f64div (_Bool, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_454, "f64div", "f64div (_Bool, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_455, "f64div", "f64div (_Bool, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_456, "f64div", "f64div (_Bool, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64div_457, "f64div", "f64div (_Bool, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64div_458, "f64div", "f64div (_Bool, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_459, "f64div", "f64div (_Bool, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_460, "f64div", "f64div (_Bool, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_461, "f64div", "f64div (_Bool, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f64div_462, "f64div", "f64div (bit_field, _Float16)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f64div_463, "f64div", "f64div (bit_field, _Float32)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f64div_464, "f64div", "f64div (bit_field, _Float32x)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f64div_465, "f64div", "f64div (bit_field, _Float64)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f64div_466, "f64div", "f64div (bit_field, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f64div_467, "f64div", "f64div (bit_field, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_468, "f64div", "f64div (bit_field, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_469, "f64div", "f64div (bit_field, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_470, "f64div", "f64div (bit_field, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_471, "f64div", "f64div (bit_field, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_472, "f64div", "f64div (bit_field, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_473, "f64div", "f64div (bit_field, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_474, "f64div", "f64div (bit_field, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_475, "f64div", "f64div (bit_field, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_476, "f64div", "f64div (bit_field, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_477, "f64div", "f64div (bit_field, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_478, "f64div", "f64div (bit_field, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64div_479, "f64div", "f64div (bit_field, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f64div_480, "f64div", "f64div (bit_field, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_481, "f64div", "f64div (bit_field, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_482, "f64div", "f64div (bit_field, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F64 && (defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f64div_483, "f64div", "f64div (bit_field, bit_field)", FLT128_MANT_DIG, 0 },
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
