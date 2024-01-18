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
(f32mulf32x) (_Float32x arg0 __attribute__ ((unused)), _Float32x arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT32X_MANT_DIG;
  called_func_name = "f32mul";
  return 0;
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
_Float32
(f32mulf64) (_Float64 arg0 __attribute__ ((unused)), _Float64 arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT64_MANT_DIG;
  called_func_name = "f32mul";
  return 0;
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
_Float32
(f32mulf64x) (_Float64x arg0 __attribute__ ((unused)), _Float64x arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT64X_MANT_DIG;
  called_func_name = "f32mul";
  return 0;
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
_Float32
(f32mulf128) (_Float128 arg0 __attribute__ ((unused)), _Float128 arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT128_MANT_DIG;
  called_func_name = "f32mul";
  return 0;
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32mul_0 (void)
{
  extern typeof (f32mul (vol_var__Float16, vol_var__Float16)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Float16, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32
static void
test_f32mul_1 (void)
{
  extern typeof (f32mul (vol_var__Float16, vol_var__Float32)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Float16, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
static void
test_f32mul_2 (void)
{
  extern typeof (f32mul (vol_var__Float16, vol_var__Float32x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Float16, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64
static void
test_f32mul_3 (void)
{
  extern typeof (f32mul (vol_var__Float16, vol_var__Float64)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Float16, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
static void
test_f32mul_4 (void)
{
  extern typeof (f32mul (vol_var__Float16, vol_var__Float64x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Float16, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F16
static void
test_f32mul_5 (void)
{
  extern typeof (f32mul (vol_var__Float16, vol_var__Float128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Float16, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32mul_6 (void)
{
  extern typeof (f32mul (vol_var__Float16, vol_var_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Float16, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32mul_7 (void)
{
  extern typeof (f32mul (vol_var__Float16, vol_var_signed_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Float16, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32mul_8 (void)
{
  extern typeof (f32mul (vol_var__Float16, vol_var_unsigned_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Float16, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32mul_9 (void)
{
  extern typeof (f32mul (vol_var__Float16, vol_var_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Float16, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32mul_10 (void)
{
  extern typeof (f32mul (vol_var__Float16, vol_var_unsigned_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Float16, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32mul_11 (void)
{
  extern typeof (f32mul (vol_var__Float16, vol_var_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Float16, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32mul_12 (void)
{
  extern typeof (f32mul (vol_var__Float16, vol_var_unsigned_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Float16, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32mul_13 (void)
{
  extern typeof (f32mul (vol_var__Float16, vol_var_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Float16, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32mul_14 (void)
{
  extern typeof (f32mul (vol_var__Float16, vol_var_unsigned_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Float16, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32mul_15 (void)
{
  extern typeof (f32mul (vol_var__Float16, vol_var_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Float16, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32mul_16 (void)
{
  extern typeof (f32mul (vol_var__Float16, vol_var_unsigned_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Float16, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_f32mul_17 (void)
{
  extern typeof (f32mul (vol_var__Float16, vol_var___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Float16, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_f32mul_18 (void)
{
  extern typeof (f32mul (vol_var__Float16, vol_var_unsigned___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Float16, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32mul_19 (void)
{
  extern typeof (f32mul (vol_var__Float16, vol_var_enum_e)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Float16, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32mul_20 (void)
{
  extern typeof (f32mul (vol_var__Float16, vol_var__Bool)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Float16, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32mul_21 (void)
{
  extern typeof (f32mul (vol_var__Float16, vol_var_bit_field)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Float16, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32
static void
test_f32mul_22 (void)
{
  extern typeof (f32mul (vol_var__Float32, vol_var__Float16)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Float32, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32mul_23 (void)
{
  extern typeof (f32mul (vol_var__Float32, vol_var__Float32)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Float32, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
static void
test_f32mul_24 (void)
{
  extern typeof (f32mul (vol_var__Float32, vol_var__Float32x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Float32, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64
static void
test_f32mul_25 (void)
{
  extern typeof (f32mul (vol_var__Float32, vol_var__Float64)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Float32, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
static void
test_f32mul_26 (void)
{
  extern typeof (f32mul (vol_var__Float32, vol_var__Float64x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Float32, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32
static void
test_f32mul_27 (void)
{
  extern typeof (f32mul (vol_var__Float32, vol_var__Float128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Float32, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32mul_28 (void)
{
  extern typeof (f32mul (vol_var__Float32, vol_var_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Float32, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32mul_29 (void)
{
  extern typeof (f32mul (vol_var__Float32, vol_var_signed_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Float32, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32mul_30 (void)
{
  extern typeof (f32mul (vol_var__Float32, vol_var_unsigned_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Float32, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32mul_31 (void)
{
  extern typeof (f32mul (vol_var__Float32, vol_var_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Float32, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32mul_32 (void)
{
  extern typeof (f32mul (vol_var__Float32, vol_var_unsigned_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Float32, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32mul_33 (void)
{
  extern typeof (f32mul (vol_var__Float32, vol_var_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Float32, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32mul_34 (void)
{
  extern typeof (f32mul (vol_var__Float32, vol_var_unsigned_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Float32, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32mul_35 (void)
{
  extern typeof (f32mul (vol_var__Float32, vol_var_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Float32, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32mul_36 (void)
{
  extern typeof (f32mul (vol_var__Float32, vol_var_unsigned_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Float32, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32mul_37 (void)
{
  extern typeof (f32mul (vol_var__Float32, vol_var_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Float32, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32mul_38 (void)
{
  extern typeof (f32mul (vol_var__Float32, vol_var_unsigned_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Float32, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_f32mul_39 (void)
{
  extern typeof (f32mul (vol_var__Float32, vol_var___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Float32, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_f32mul_40 (void)
{
  extern typeof (f32mul (vol_var__Float32, vol_var_unsigned___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Float32, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32mul_41 (void)
{
  extern typeof (f32mul (vol_var__Float32, vol_var_enum_e)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Float32, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32mul_42 (void)
{
  extern typeof (f32mul (vol_var__Float32, vol_var__Bool)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Float32, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32mul_43 (void)
{
  extern typeof (f32mul (vol_var__Float32, vol_var_bit_field)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Float32, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
static void
test_f32mul_44 (void)
{
  extern typeof (f32mul (vol_var__Float32x, vol_var__Float16)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Float32x, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
static void
test_f32mul_45 (void)
{
  extern typeof (f32mul (vol_var__Float32x, vol_var__Float32)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Float32x, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32mul_46 (void)
{
  extern typeof (f32mul (vol_var__Float32x, vol_var__Float32x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Float32x, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64
static void
test_f32mul_47 (void)
{
  extern typeof (f32mul (vol_var__Float32x, vol_var__Float64)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Float32x, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
static void
test_f32mul_48 (void)
{
  extern typeof (f32mul (vol_var__Float32x, vol_var__Float64x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Float32x, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
static void
test_f32mul_49 (void)
{
  extern typeof (f32mul (vol_var__Float32x, vol_var__Float128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Float32x, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32mul_50 (void)
{
  extern typeof (f32mul (vol_var__Float32x, vol_var_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Float32x, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32mul_51 (void)
{
  extern typeof (f32mul (vol_var__Float32x, vol_var_signed_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Float32x, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32mul_52 (void)
{
  extern typeof (f32mul (vol_var__Float32x, vol_var_unsigned_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Float32x, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32mul_53 (void)
{
  extern typeof (f32mul (vol_var__Float32x, vol_var_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Float32x, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32mul_54 (void)
{
  extern typeof (f32mul (vol_var__Float32x, vol_var_unsigned_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Float32x, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32mul_55 (void)
{
  extern typeof (f32mul (vol_var__Float32x, vol_var_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Float32x, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32mul_56 (void)
{
  extern typeof (f32mul (vol_var__Float32x, vol_var_unsigned_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Float32x, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32mul_57 (void)
{
  extern typeof (f32mul (vol_var__Float32x, vol_var_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Float32x, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32mul_58 (void)
{
  extern typeof (f32mul (vol_var__Float32x, vol_var_unsigned_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Float32x, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32mul_59 (void)
{
  extern typeof (f32mul (vol_var__Float32x, vol_var_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Float32x, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32mul_60 (void)
{
  extern typeof (f32mul (vol_var__Float32x, vol_var_unsigned_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Float32x, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_f32mul_61 (void)
{
  extern typeof (f32mul (vol_var__Float32x, vol_var___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Float32x, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_f32mul_62 (void)
{
  extern typeof (f32mul (vol_var__Float32x, vol_var_unsigned___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Float32x, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32mul_63 (void)
{
  extern typeof (f32mul (vol_var__Float32x, vol_var_enum_e)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Float32x, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32mul_64 (void)
{
  extern typeof (f32mul (vol_var__Float32x, vol_var__Bool)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Float32x, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32mul_65 (void)
{
  extern typeof (f32mul (vol_var__Float32x, vol_var_bit_field)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Float32x, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64
static void
test_f32mul_66 (void)
{
  extern typeof (f32mul (vol_var__Float64, vol_var__Float16)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Float64, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64
static void
test_f32mul_67 (void)
{
  extern typeof (f32mul (vol_var__Float64, vol_var__Float32)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Float64, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64
static void
test_f32mul_68 (void)
{
  extern typeof (f32mul (vol_var__Float64, vol_var__Float32x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Float64, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32mul_69 (void)
{
  extern typeof (f32mul (vol_var__Float64, vol_var__Float64)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Float64, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
static void
test_f32mul_70 (void)
{
  extern typeof (f32mul (vol_var__Float64, vol_var__Float64x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Float64, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64
static void
test_f32mul_71 (void)
{
  extern typeof (f32mul (vol_var__Float64, vol_var__Float128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Float64, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32mul_72 (void)
{
  extern typeof (f32mul (vol_var__Float64, vol_var_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Float64, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32mul_73 (void)
{
  extern typeof (f32mul (vol_var__Float64, vol_var_signed_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Float64, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32mul_74 (void)
{
  extern typeof (f32mul (vol_var__Float64, vol_var_unsigned_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Float64, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32mul_75 (void)
{
  extern typeof (f32mul (vol_var__Float64, vol_var_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Float64, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32mul_76 (void)
{
  extern typeof (f32mul (vol_var__Float64, vol_var_unsigned_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Float64, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32mul_77 (void)
{
  extern typeof (f32mul (vol_var__Float64, vol_var_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Float64, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32mul_78 (void)
{
  extern typeof (f32mul (vol_var__Float64, vol_var_unsigned_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Float64, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32mul_79 (void)
{
  extern typeof (f32mul (vol_var__Float64, vol_var_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Float64, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32mul_80 (void)
{
  extern typeof (f32mul (vol_var__Float64, vol_var_unsigned_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Float64, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32mul_81 (void)
{
  extern typeof (f32mul (vol_var__Float64, vol_var_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Float64, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32mul_82 (void)
{
  extern typeof (f32mul (vol_var__Float64, vol_var_unsigned_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Float64, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_f32mul_83 (void)
{
  extern typeof (f32mul (vol_var__Float64, vol_var___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Float64, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_f32mul_84 (void)
{
  extern typeof (f32mul (vol_var__Float64, vol_var_unsigned___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Float64, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32mul_85 (void)
{
  extern typeof (f32mul (vol_var__Float64, vol_var_enum_e)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Float64, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32mul_86 (void)
{
  extern typeof (f32mul (vol_var__Float64, vol_var__Bool)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Float64, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32mul_87 (void)
{
  extern typeof (f32mul (vol_var__Float64, vol_var_bit_field)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Float64, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
static void
test_f32mul_88 (void)
{
  extern typeof (f32mul (vol_var__Float64x, vol_var__Float16)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Float64x, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
static void
test_f32mul_89 (void)
{
  extern typeof (f32mul (vol_var__Float64x, vol_var__Float32)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Float64x, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
static void
test_f32mul_90 (void)
{
  extern typeof (f32mul (vol_var__Float64x, vol_var__Float32x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Float64x, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
static void
test_f32mul_91 (void)
{
  extern typeof (f32mul (vol_var__Float64x, vol_var__Float64)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Float64x, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32mul_92 (void)
{
  extern typeof (f32mul (vol_var__Float64x, vol_var__Float64x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Float64x, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
static void
test_f32mul_93 (void)
{
  extern typeof (f32mul (vol_var__Float64x, vol_var__Float128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Float64x, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32mul_94 (void)
{
  extern typeof (f32mul (vol_var__Float64x, vol_var_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Float64x, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32mul_95 (void)
{
  extern typeof (f32mul (vol_var__Float64x, vol_var_signed_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Float64x, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32mul_96 (void)
{
  extern typeof (f32mul (vol_var__Float64x, vol_var_unsigned_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Float64x, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32mul_97 (void)
{
  extern typeof (f32mul (vol_var__Float64x, vol_var_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Float64x, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32mul_98 (void)
{
  extern typeof (f32mul (vol_var__Float64x, vol_var_unsigned_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Float64x, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32mul_99 (void)
{
  extern typeof (f32mul (vol_var__Float64x, vol_var_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Float64x, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32mul_100 (void)
{
  extern typeof (f32mul (vol_var__Float64x, vol_var_unsigned_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Float64x, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32mul_101 (void)
{
  extern typeof (f32mul (vol_var__Float64x, vol_var_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Float64x, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32mul_102 (void)
{
  extern typeof (f32mul (vol_var__Float64x, vol_var_unsigned_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Float64x, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32mul_103 (void)
{
  extern typeof (f32mul (vol_var__Float64x, vol_var_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Float64x, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32mul_104 (void)
{
  extern typeof (f32mul (vol_var__Float64x, vol_var_unsigned_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Float64x, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_f32mul_105 (void)
{
  extern typeof (f32mul (vol_var__Float64x, vol_var___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Float64x, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_f32mul_106 (void)
{
  extern typeof (f32mul (vol_var__Float64x, vol_var_unsigned___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Float64x, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32mul_107 (void)
{
  extern typeof (f32mul (vol_var__Float64x, vol_var_enum_e)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Float64x, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32mul_108 (void)
{
  extern typeof (f32mul (vol_var__Float64x, vol_var__Bool)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Float64x, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32mul_109 (void)
{
  extern typeof (f32mul (vol_var__Float64x, vol_var_bit_field)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Float64x, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F16
static void
test_f32mul_110 (void)
{
  extern typeof (f32mul (vol_var__Float128, vol_var__Float16)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Float128, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32
static void
test_f32mul_111 (void)
{
  extern typeof (f32mul (vol_var__Float128, vol_var__Float32)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Float128, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
static void
test_f32mul_112 (void)
{
  extern typeof (f32mul (vol_var__Float128, vol_var__Float32x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Float128, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64
static void
test_f32mul_113 (void)
{
  extern typeof (f32mul (vol_var__Float128, vol_var__Float64)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Float128, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
static void
test_f32mul_114 (void)
{
  extern typeof (f32mul (vol_var__Float128, vol_var__Float64x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Float128, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32mul_115 (void)
{
  extern typeof (f32mul (vol_var__Float128, vol_var__Float128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Float128, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32mul_116 (void)
{
  extern typeof (f32mul (vol_var__Float128, vol_var_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Float128, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32mul_117 (void)
{
  extern typeof (f32mul (vol_var__Float128, vol_var_signed_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Float128, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32mul_118 (void)
{
  extern typeof (f32mul (vol_var__Float128, vol_var_unsigned_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Float128, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32mul_119 (void)
{
  extern typeof (f32mul (vol_var__Float128, vol_var_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Float128, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32mul_120 (void)
{
  extern typeof (f32mul (vol_var__Float128, vol_var_unsigned_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Float128, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32mul_121 (void)
{
  extern typeof (f32mul (vol_var__Float128, vol_var_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Float128, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32mul_122 (void)
{
  extern typeof (f32mul (vol_var__Float128, vol_var_unsigned_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Float128, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32mul_123 (void)
{
  extern typeof (f32mul (vol_var__Float128, vol_var_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Float128, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32mul_124 (void)
{
  extern typeof (f32mul (vol_var__Float128, vol_var_unsigned_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Float128, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32mul_125 (void)
{
  extern typeof (f32mul (vol_var__Float128, vol_var_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Float128, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32mul_126 (void)
{
  extern typeof (f32mul (vol_var__Float128, vol_var_unsigned_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Float128, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_f32mul_127 (void)
{
  extern typeof (f32mul (vol_var__Float128, vol_var___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Float128, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_f32mul_128 (void)
{
  extern typeof (f32mul (vol_var__Float128, vol_var_unsigned___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Float128, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32mul_129 (void)
{
  extern typeof (f32mul (vol_var__Float128, vol_var_enum_e)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Float128, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32mul_130 (void)
{
  extern typeof (f32mul (vol_var__Float128, vol_var__Bool)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Float128, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32mul_131 (void)
{
  extern typeof (f32mul (vol_var__Float128, vol_var_bit_field)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Float128, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32mul_132 (void)
{
  extern typeof (f32mul (vol_var_char, vol_var__Float16)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_char, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32mul_133 (void)
{
  extern typeof (f32mul (vol_var_char, vol_var__Float32)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_char, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32mul_134 (void)
{
  extern typeof (f32mul (vol_var_char, vol_var__Float32x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_char, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32mul_135 (void)
{
  extern typeof (f32mul (vol_var_char, vol_var__Float64)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_char, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32mul_136 (void)
{
  extern typeof (f32mul (vol_var_char, vol_var__Float64x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_char, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32mul_137 (void)
{
  extern typeof (f32mul (vol_var_char, vol_var__Float128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_char, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_138 (void)
{
  extern typeof (f32mul (vol_var_char, vol_var_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_char, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_139 (void)
{
  extern typeof (f32mul (vol_var_char, vol_var_signed_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_char, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_140 (void)
{
  extern typeof (f32mul (vol_var_char, vol_var_unsigned_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_char, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_141 (void)
{
  extern typeof (f32mul (vol_var_char, vol_var_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_char, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_142 (void)
{
  extern typeof (f32mul (vol_var_char, vol_var_unsigned_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_char, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_143 (void)
{
  extern typeof (f32mul (vol_var_char, vol_var_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_char, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_144 (void)
{
  extern typeof (f32mul (vol_var_char, vol_var_unsigned_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_char, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_145 (void)
{
  extern typeof (f32mul (vol_var_char, vol_var_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_char, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_146 (void)
{
  extern typeof (f32mul (vol_var_char, vol_var_unsigned_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_char, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_147 (void)
{
  extern typeof (f32mul (vol_var_char, vol_var_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_char, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_148 (void)
{
  extern typeof (f32mul (vol_var_char, vol_var_unsigned_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_char, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32mul_149 (void)
{
  extern typeof (f32mul (vol_var_char, vol_var___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_char, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32mul_150 (void)
{
  extern typeof (f32mul (vol_var_char, vol_var_unsigned___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_char, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_151 (void)
{
  extern typeof (f32mul (vol_var_char, vol_var_enum_e)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_char, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_152 (void)
{
  extern typeof (f32mul (vol_var_char, vol_var__Bool)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_char, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_153 (void)
{
  extern typeof (f32mul (vol_var_char, vol_var_bit_field)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_char, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32mul_154 (void)
{
  extern typeof (f32mul (vol_var_signed_char, vol_var__Float16)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_signed_char, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32mul_155 (void)
{
  extern typeof (f32mul (vol_var_signed_char, vol_var__Float32)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_signed_char, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32mul_156 (void)
{
  extern typeof (f32mul (vol_var_signed_char, vol_var__Float32x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_signed_char, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32mul_157 (void)
{
  extern typeof (f32mul (vol_var_signed_char, vol_var__Float64)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_signed_char, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32mul_158 (void)
{
  extern typeof (f32mul (vol_var_signed_char, vol_var__Float64x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_signed_char, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32mul_159 (void)
{
  extern typeof (f32mul (vol_var_signed_char, vol_var__Float128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_signed_char, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_160 (void)
{
  extern typeof (f32mul (vol_var_signed_char, vol_var_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_signed_char, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_161 (void)
{
  extern typeof (f32mul (vol_var_signed_char, vol_var_signed_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_signed_char, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_162 (void)
{
  extern typeof (f32mul (vol_var_signed_char, vol_var_unsigned_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_signed_char, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_163 (void)
{
  extern typeof (f32mul (vol_var_signed_char, vol_var_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_signed_char, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_164 (void)
{
  extern typeof (f32mul (vol_var_signed_char, vol_var_unsigned_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_signed_char, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_165 (void)
{
  extern typeof (f32mul (vol_var_signed_char, vol_var_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_signed_char, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_166 (void)
{
  extern typeof (f32mul (vol_var_signed_char, vol_var_unsigned_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_signed_char, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_167 (void)
{
  extern typeof (f32mul (vol_var_signed_char, vol_var_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_signed_char, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_168 (void)
{
  extern typeof (f32mul (vol_var_signed_char, vol_var_unsigned_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_signed_char, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_169 (void)
{
  extern typeof (f32mul (vol_var_signed_char, vol_var_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_signed_char, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_170 (void)
{
  extern typeof (f32mul (vol_var_signed_char, vol_var_unsigned_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_signed_char, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32mul_171 (void)
{
  extern typeof (f32mul (vol_var_signed_char, vol_var___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_signed_char, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32mul_172 (void)
{
  extern typeof (f32mul (vol_var_signed_char, vol_var_unsigned___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_signed_char, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_173 (void)
{
  extern typeof (f32mul (vol_var_signed_char, vol_var_enum_e)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_signed_char, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_174 (void)
{
  extern typeof (f32mul (vol_var_signed_char, vol_var__Bool)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_signed_char, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_175 (void)
{
  extern typeof (f32mul (vol_var_signed_char, vol_var_bit_field)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_signed_char, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32mul_176 (void)
{
  extern typeof (f32mul (vol_var_unsigned_char, vol_var__Float16)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_unsigned_char, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32mul_177 (void)
{
  extern typeof (f32mul (vol_var_unsigned_char, vol_var__Float32)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_unsigned_char, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32mul_178 (void)
{
  extern typeof (f32mul (vol_var_unsigned_char, vol_var__Float32x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_unsigned_char, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32mul_179 (void)
{
  extern typeof (f32mul (vol_var_unsigned_char, vol_var__Float64)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_unsigned_char, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32mul_180 (void)
{
  extern typeof (f32mul (vol_var_unsigned_char, vol_var__Float64x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_unsigned_char, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32mul_181 (void)
{
  extern typeof (f32mul (vol_var_unsigned_char, vol_var__Float128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_unsigned_char, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_182 (void)
{
  extern typeof (f32mul (vol_var_unsigned_char, vol_var_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_unsigned_char, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_183 (void)
{
  extern typeof (f32mul (vol_var_unsigned_char, vol_var_signed_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_unsigned_char, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_184 (void)
{
  extern typeof (f32mul (vol_var_unsigned_char, vol_var_unsigned_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_unsigned_char, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_185 (void)
{
  extern typeof (f32mul (vol_var_unsigned_char, vol_var_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_unsigned_char, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_186 (void)
{
  extern typeof (f32mul (vol_var_unsigned_char, vol_var_unsigned_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_unsigned_char, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_187 (void)
{
  extern typeof (f32mul (vol_var_unsigned_char, vol_var_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_unsigned_char, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_188 (void)
{
  extern typeof (f32mul (vol_var_unsigned_char, vol_var_unsigned_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_unsigned_char, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_189 (void)
{
  extern typeof (f32mul (vol_var_unsigned_char, vol_var_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_unsigned_char, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_190 (void)
{
  extern typeof (f32mul (vol_var_unsigned_char, vol_var_unsigned_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_unsigned_char, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_191 (void)
{
  extern typeof (f32mul (vol_var_unsigned_char, vol_var_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_unsigned_char, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_192 (void)
{
  extern typeof (f32mul (vol_var_unsigned_char, vol_var_unsigned_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_unsigned_char, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32mul_193 (void)
{
  extern typeof (f32mul (vol_var_unsigned_char, vol_var___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_unsigned_char, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32mul_194 (void)
{
  extern typeof (f32mul (vol_var_unsigned_char, vol_var_unsigned___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_unsigned_char, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_195 (void)
{
  extern typeof (f32mul (vol_var_unsigned_char, vol_var_enum_e)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_unsigned_char, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_196 (void)
{
  extern typeof (f32mul (vol_var_unsigned_char, vol_var__Bool)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_unsigned_char, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_197 (void)
{
  extern typeof (f32mul (vol_var_unsigned_char, vol_var_bit_field)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_unsigned_char, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32mul_198 (void)
{
  extern typeof (f32mul (vol_var_short_int, vol_var__Float16)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_short_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32mul_199 (void)
{
  extern typeof (f32mul (vol_var_short_int, vol_var__Float32)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_short_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32mul_200 (void)
{
  extern typeof (f32mul (vol_var_short_int, vol_var__Float32x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_short_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32mul_201 (void)
{
  extern typeof (f32mul (vol_var_short_int, vol_var__Float64)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_short_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32mul_202 (void)
{
  extern typeof (f32mul (vol_var_short_int, vol_var__Float64x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_short_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32mul_203 (void)
{
  extern typeof (f32mul (vol_var_short_int, vol_var__Float128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_short_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_204 (void)
{
  extern typeof (f32mul (vol_var_short_int, vol_var_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_short_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_205 (void)
{
  extern typeof (f32mul (vol_var_short_int, vol_var_signed_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_short_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_206 (void)
{
  extern typeof (f32mul (vol_var_short_int, vol_var_unsigned_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_short_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_207 (void)
{
  extern typeof (f32mul (vol_var_short_int, vol_var_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_short_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_208 (void)
{
  extern typeof (f32mul (vol_var_short_int, vol_var_unsigned_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_short_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_209 (void)
{
  extern typeof (f32mul (vol_var_short_int, vol_var_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_short_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_210 (void)
{
  extern typeof (f32mul (vol_var_short_int, vol_var_unsigned_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_short_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_211 (void)
{
  extern typeof (f32mul (vol_var_short_int, vol_var_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_short_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_212 (void)
{
  extern typeof (f32mul (vol_var_short_int, vol_var_unsigned_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_short_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_213 (void)
{
  extern typeof (f32mul (vol_var_short_int, vol_var_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_short_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_214 (void)
{
  extern typeof (f32mul (vol_var_short_int, vol_var_unsigned_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_short_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32mul_215 (void)
{
  extern typeof (f32mul (vol_var_short_int, vol_var___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_short_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32mul_216 (void)
{
  extern typeof (f32mul (vol_var_short_int, vol_var_unsigned___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_short_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_217 (void)
{
  extern typeof (f32mul (vol_var_short_int, vol_var_enum_e)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_short_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_218 (void)
{
  extern typeof (f32mul (vol_var_short_int, vol_var__Bool)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_short_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_219 (void)
{
  extern typeof (f32mul (vol_var_short_int, vol_var_bit_field)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_short_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32mul_220 (void)
{
  extern typeof (f32mul (vol_var_unsigned_short_int, vol_var__Float16)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_unsigned_short_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32mul_221 (void)
{
  extern typeof (f32mul (vol_var_unsigned_short_int, vol_var__Float32)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_unsigned_short_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32mul_222 (void)
{
  extern typeof (f32mul (vol_var_unsigned_short_int, vol_var__Float32x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_unsigned_short_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32mul_223 (void)
{
  extern typeof (f32mul (vol_var_unsigned_short_int, vol_var__Float64)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_unsigned_short_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32mul_224 (void)
{
  extern typeof (f32mul (vol_var_unsigned_short_int, vol_var__Float64x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_unsigned_short_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32mul_225 (void)
{
  extern typeof (f32mul (vol_var_unsigned_short_int, vol_var__Float128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_unsigned_short_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_226 (void)
{
  extern typeof (f32mul (vol_var_unsigned_short_int, vol_var_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_unsigned_short_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_227 (void)
{
  extern typeof (f32mul (vol_var_unsigned_short_int, vol_var_signed_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_unsigned_short_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_228 (void)
{
  extern typeof (f32mul (vol_var_unsigned_short_int, vol_var_unsigned_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_unsigned_short_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_229 (void)
{
  extern typeof (f32mul (vol_var_unsigned_short_int, vol_var_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_unsigned_short_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_230 (void)
{
  extern typeof (f32mul (vol_var_unsigned_short_int, vol_var_unsigned_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_unsigned_short_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_231 (void)
{
  extern typeof (f32mul (vol_var_unsigned_short_int, vol_var_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_unsigned_short_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_232 (void)
{
  extern typeof (f32mul (vol_var_unsigned_short_int, vol_var_unsigned_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_unsigned_short_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_233 (void)
{
  extern typeof (f32mul (vol_var_unsigned_short_int, vol_var_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_unsigned_short_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_234 (void)
{
  extern typeof (f32mul (vol_var_unsigned_short_int, vol_var_unsigned_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_unsigned_short_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_235 (void)
{
  extern typeof (f32mul (vol_var_unsigned_short_int, vol_var_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_unsigned_short_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_236 (void)
{
  extern typeof (f32mul (vol_var_unsigned_short_int, vol_var_unsigned_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_unsigned_short_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32mul_237 (void)
{
  extern typeof (f32mul (vol_var_unsigned_short_int, vol_var___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_unsigned_short_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32mul_238 (void)
{
  extern typeof (f32mul (vol_var_unsigned_short_int, vol_var_unsigned___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_unsigned_short_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_239 (void)
{
  extern typeof (f32mul (vol_var_unsigned_short_int, vol_var_enum_e)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_unsigned_short_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_240 (void)
{
  extern typeof (f32mul (vol_var_unsigned_short_int, vol_var__Bool)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_unsigned_short_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_241 (void)
{
  extern typeof (f32mul (vol_var_unsigned_short_int, vol_var_bit_field)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_unsigned_short_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32mul_242 (void)
{
  extern typeof (f32mul (vol_var_int, vol_var__Float16)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32mul_243 (void)
{
  extern typeof (f32mul (vol_var_int, vol_var__Float32)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32mul_244 (void)
{
  extern typeof (f32mul (vol_var_int, vol_var__Float32x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32mul_245 (void)
{
  extern typeof (f32mul (vol_var_int, vol_var__Float64)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32mul_246 (void)
{
  extern typeof (f32mul (vol_var_int, vol_var__Float64x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32mul_247 (void)
{
  extern typeof (f32mul (vol_var_int, vol_var__Float128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_248 (void)
{
  extern typeof (f32mul (vol_var_int, vol_var_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_249 (void)
{
  extern typeof (f32mul (vol_var_int, vol_var_signed_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_250 (void)
{
  extern typeof (f32mul (vol_var_int, vol_var_unsigned_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_251 (void)
{
  extern typeof (f32mul (vol_var_int, vol_var_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_252 (void)
{
  extern typeof (f32mul (vol_var_int, vol_var_unsigned_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_253 (void)
{
  extern typeof (f32mul (vol_var_int, vol_var_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_254 (void)
{
  extern typeof (f32mul (vol_var_int, vol_var_unsigned_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_255 (void)
{
  extern typeof (f32mul (vol_var_int, vol_var_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_256 (void)
{
  extern typeof (f32mul (vol_var_int, vol_var_unsigned_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_257 (void)
{
  extern typeof (f32mul (vol_var_int, vol_var_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_258 (void)
{
  extern typeof (f32mul (vol_var_int, vol_var_unsigned_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32mul_259 (void)
{
  extern typeof (f32mul (vol_var_int, vol_var___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32mul_260 (void)
{
  extern typeof (f32mul (vol_var_int, vol_var_unsigned___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_261 (void)
{
  extern typeof (f32mul (vol_var_int, vol_var_enum_e)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_262 (void)
{
  extern typeof (f32mul (vol_var_int, vol_var__Bool)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_263 (void)
{
  extern typeof (f32mul (vol_var_int, vol_var_bit_field)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32mul_264 (void)
{
  extern typeof (f32mul (vol_var_unsigned_int, vol_var__Float16)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_unsigned_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32mul_265 (void)
{
  extern typeof (f32mul (vol_var_unsigned_int, vol_var__Float32)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_unsigned_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32mul_266 (void)
{
  extern typeof (f32mul (vol_var_unsigned_int, vol_var__Float32x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_unsigned_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32mul_267 (void)
{
  extern typeof (f32mul (vol_var_unsigned_int, vol_var__Float64)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_unsigned_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32mul_268 (void)
{
  extern typeof (f32mul (vol_var_unsigned_int, vol_var__Float64x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_unsigned_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32mul_269 (void)
{
  extern typeof (f32mul (vol_var_unsigned_int, vol_var__Float128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_unsigned_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_270 (void)
{
  extern typeof (f32mul (vol_var_unsigned_int, vol_var_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_unsigned_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_271 (void)
{
  extern typeof (f32mul (vol_var_unsigned_int, vol_var_signed_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_unsigned_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_272 (void)
{
  extern typeof (f32mul (vol_var_unsigned_int, vol_var_unsigned_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_unsigned_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_273 (void)
{
  extern typeof (f32mul (vol_var_unsigned_int, vol_var_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_unsigned_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_274 (void)
{
  extern typeof (f32mul (vol_var_unsigned_int, vol_var_unsigned_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_unsigned_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_275 (void)
{
  extern typeof (f32mul (vol_var_unsigned_int, vol_var_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_unsigned_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_276 (void)
{
  extern typeof (f32mul (vol_var_unsigned_int, vol_var_unsigned_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_unsigned_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_277 (void)
{
  extern typeof (f32mul (vol_var_unsigned_int, vol_var_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_unsigned_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_278 (void)
{
  extern typeof (f32mul (vol_var_unsigned_int, vol_var_unsigned_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_unsigned_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_279 (void)
{
  extern typeof (f32mul (vol_var_unsigned_int, vol_var_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_unsigned_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_280 (void)
{
  extern typeof (f32mul (vol_var_unsigned_int, vol_var_unsigned_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_unsigned_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32mul_281 (void)
{
  extern typeof (f32mul (vol_var_unsigned_int, vol_var___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_unsigned_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32mul_282 (void)
{
  extern typeof (f32mul (vol_var_unsigned_int, vol_var_unsigned___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_unsigned_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_283 (void)
{
  extern typeof (f32mul (vol_var_unsigned_int, vol_var_enum_e)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_unsigned_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_284 (void)
{
  extern typeof (f32mul (vol_var_unsigned_int, vol_var__Bool)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_unsigned_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_285 (void)
{
  extern typeof (f32mul (vol_var_unsigned_int, vol_var_bit_field)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_unsigned_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32mul_286 (void)
{
  extern typeof (f32mul (vol_var_long_int, vol_var__Float16)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_long_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32mul_287 (void)
{
  extern typeof (f32mul (vol_var_long_int, vol_var__Float32)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_long_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32mul_288 (void)
{
  extern typeof (f32mul (vol_var_long_int, vol_var__Float32x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_long_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32mul_289 (void)
{
  extern typeof (f32mul (vol_var_long_int, vol_var__Float64)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_long_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32mul_290 (void)
{
  extern typeof (f32mul (vol_var_long_int, vol_var__Float64x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_long_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32mul_291 (void)
{
  extern typeof (f32mul (vol_var_long_int, vol_var__Float128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_long_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_292 (void)
{
  extern typeof (f32mul (vol_var_long_int, vol_var_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_long_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_293 (void)
{
  extern typeof (f32mul (vol_var_long_int, vol_var_signed_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_long_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_294 (void)
{
  extern typeof (f32mul (vol_var_long_int, vol_var_unsigned_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_long_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_295 (void)
{
  extern typeof (f32mul (vol_var_long_int, vol_var_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_long_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_296 (void)
{
  extern typeof (f32mul (vol_var_long_int, vol_var_unsigned_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_long_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_297 (void)
{
  extern typeof (f32mul (vol_var_long_int, vol_var_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_long_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_298 (void)
{
  extern typeof (f32mul (vol_var_long_int, vol_var_unsigned_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_long_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_299 (void)
{
  extern typeof (f32mul (vol_var_long_int, vol_var_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_long_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_300 (void)
{
  extern typeof (f32mul (vol_var_long_int, vol_var_unsigned_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_long_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_301 (void)
{
  extern typeof (f32mul (vol_var_long_int, vol_var_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_long_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_302 (void)
{
  extern typeof (f32mul (vol_var_long_int, vol_var_unsigned_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_long_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32mul_303 (void)
{
  extern typeof (f32mul (vol_var_long_int, vol_var___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_long_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32mul_304 (void)
{
  extern typeof (f32mul (vol_var_long_int, vol_var_unsigned___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_long_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_305 (void)
{
  extern typeof (f32mul (vol_var_long_int, vol_var_enum_e)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_long_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_306 (void)
{
  extern typeof (f32mul (vol_var_long_int, vol_var__Bool)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_long_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_307 (void)
{
  extern typeof (f32mul (vol_var_long_int, vol_var_bit_field)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_long_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32mul_308 (void)
{
  extern typeof (f32mul (vol_var_unsigned_long_int, vol_var__Float16)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_unsigned_long_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32mul_309 (void)
{
  extern typeof (f32mul (vol_var_unsigned_long_int, vol_var__Float32)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_unsigned_long_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32mul_310 (void)
{
  extern typeof (f32mul (vol_var_unsigned_long_int, vol_var__Float32x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_unsigned_long_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32mul_311 (void)
{
  extern typeof (f32mul (vol_var_unsigned_long_int, vol_var__Float64)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_unsigned_long_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32mul_312 (void)
{
  extern typeof (f32mul (vol_var_unsigned_long_int, vol_var__Float64x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_unsigned_long_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32mul_313 (void)
{
  extern typeof (f32mul (vol_var_unsigned_long_int, vol_var__Float128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_unsigned_long_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_314 (void)
{
  extern typeof (f32mul (vol_var_unsigned_long_int, vol_var_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_unsigned_long_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_315 (void)
{
  extern typeof (f32mul (vol_var_unsigned_long_int, vol_var_signed_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_unsigned_long_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_316 (void)
{
  extern typeof (f32mul (vol_var_unsigned_long_int, vol_var_unsigned_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_unsigned_long_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_317 (void)
{
  extern typeof (f32mul (vol_var_unsigned_long_int, vol_var_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_unsigned_long_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_318 (void)
{
  extern typeof (f32mul (vol_var_unsigned_long_int, vol_var_unsigned_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_unsigned_long_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_319 (void)
{
  extern typeof (f32mul (vol_var_unsigned_long_int, vol_var_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_unsigned_long_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_320 (void)
{
  extern typeof (f32mul (vol_var_unsigned_long_int, vol_var_unsigned_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_unsigned_long_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_321 (void)
{
  extern typeof (f32mul (vol_var_unsigned_long_int, vol_var_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_unsigned_long_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_322 (void)
{
  extern typeof (f32mul (vol_var_unsigned_long_int, vol_var_unsigned_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_unsigned_long_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_323 (void)
{
  extern typeof (f32mul (vol_var_unsigned_long_int, vol_var_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_unsigned_long_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_324 (void)
{
  extern typeof (f32mul (vol_var_unsigned_long_int, vol_var_unsigned_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_unsigned_long_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32mul_325 (void)
{
  extern typeof (f32mul (vol_var_unsigned_long_int, vol_var___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_unsigned_long_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32mul_326 (void)
{
  extern typeof (f32mul (vol_var_unsigned_long_int, vol_var_unsigned___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_unsigned_long_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_327 (void)
{
  extern typeof (f32mul (vol_var_unsigned_long_int, vol_var_enum_e)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_unsigned_long_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_328 (void)
{
  extern typeof (f32mul (vol_var_unsigned_long_int, vol_var__Bool)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_unsigned_long_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_329 (void)
{
  extern typeof (f32mul (vol_var_unsigned_long_int, vol_var_bit_field)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_unsigned_long_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32mul_330 (void)
{
  extern typeof (f32mul (vol_var_long_long_int, vol_var__Float16)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_long_long_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32mul_331 (void)
{
  extern typeof (f32mul (vol_var_long_long_int, vol_var__Float32)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_long_long_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32mul_332 (void)
{
  extern typeof (f32mul (vol_var_long_long_int, vol_var__Float32x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_long_long_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32mul_333 (void)
{
  extern typeof (f32mul (vol_var_long_long_int, vol_var__Float64)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_long_long_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32mul_334 (void)
{
  extern typeof (f32mul (vol_var_long_long_int, vol_var__Float64x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_long_long_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32mul_335 (void)
{
  extern typeof (f32mul (vol_var_long_long_int, vol_var__Float128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_long_long_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_336 (void)
{
  extern typeof (f32mul (vol_var_long_long_int, vol_var_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_long_long_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_337 (void)
{
  extern typeof (f32mul (vol_var_long_long_int, vol_var_signed_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_long_long_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_338 (void)
{
  extern typeof (f32mul (vol_var_long_long_int, vol_var_unsigned_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_long_long_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_339 (void)
{
  extern typeof (f32mul (vol_var_long_long_int, vol_var_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_long_long_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_340 (void)
{
  extern typeof (f32mul (vol_var_long_long_int, vol_var_unsigned_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_long_long_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_341 (void)
{
  extern typeof (f32mul (vol_var_long_long_int, vol_var_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_long_long_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_342 (void)
{
  extern typeof (f32mul (vol_var_long_long_int, vol_var_unsigned_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_long_long_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_343 (void)
{
  extern typeof (f32mul (vol_var_long_long_int, vol_var_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_long_long_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_344 (void)
{
  extern typeof (f32mul (vol_var_long_long_int, vol_var_unsigned_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_long_long_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_345 (void)
{
  extern typeof (f32mul (vol_var_long_long_int, vol_var_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_long_long_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_346 (void)
{
  extern typeof (f32mul (vol_var_long_long_int, vol_var_unsigned_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_long_long_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32mul_347 (void)
{
  extern typeof (f32mul (vol_var_long_long_int, vol_var___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_long_long_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32mul_348 (void)
{
  extern typeof (f32mul (vol_var_long_long_int, vol_var_unsigned___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_long_long_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_349 (void)
{
  extern typeof (f32mul (vol_var_long_long_int, vol_var_enum_e)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_long_long_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_350 (void)
{
  extern typeof (f32mul (vol_var_long_long_int, vol_var__Bool)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_long_long_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_351 (void)
{
  extern typeof (f32mul (vol_var_long_long_int, vol_var_bit_field)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_long_long_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32mul_352 (void)
{
  extern typeof (f32mul (vol_var_unsigned_long_long_int, vol_var__Float16)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_unsigned_long_long_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32mul_353 (void)
{
  extern typeof (f32mul (vol_var_unsigned_long_long_int, vol_var__Float32)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_unsigned_long_long_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32mul_354 (void)
{
  extern typeof (f32mul (vol_var_unsigned_long_long_int, vol_var__Float32x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_unsigned_long_long_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32mul_355 (void)
{
  extern typeof (f32mul (vol_var_unsigned_long_long_int, vol_var__Float64)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_unsigned_long_long_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32mul_356 (void)
{
  extern typeof (f32mul (vol_var_unsigned_long_long_int, vol_var__Float64x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_unsigned_long_long_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32mul_357 (void)
{
  extern typeof (f32mul (vol_var_unsigned_long_long_int, vol_var__Float128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_unsigned_long_long_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_358 (void)
{
  extern typeof (f32mul (vol_var_unsigned_long_long_int, vol_var_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_unsigned_long_long_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_359 (void)
{
  extern typeof (f32mul (vol_var_unsigned_long_long_int, vol_var_signed_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_unsigned_long_long_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_360 (void)
{
  extern typeof (f32mul (vol_var_unsigned_long_long_int, vol_var_unsigned_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_unsigned_long_long_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_361 (void)
{
  extern typeof (f32mul (vol_var_unsigned_long_long_int, vol_var_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_unsigned_long_long_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_362 (void)
{
  extern typeof (f32mul (vol_var_unsigned_long_long_int, vol_var_unsigned_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_unsigned_long_long_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_363 (void)
{
  extern typeof (f32mul (vol_var_unsigned_long_long_int, vol_var_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_unsigned_long_long_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_364 (void)
{
  extern typeof (f32mul (vol_var_unsigned_long_long_int, vol_var_unsigned_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_unsigned_long_long_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_365 (void)
{
  extern typeof (f32mul (vol_var_unsigned_long_long_int, vol_var_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_unsigned_long_long_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_366 (void)
{
  extern typeof (f32mul (vol_var_unsigned_long_long_int, vol_var_unsigned_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_unsigned_long_long_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_367 (void)
{
  extern typeof (f32mul (vol_var_unsigned_long_long_int, vol_var_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_unsigned_long_long_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_368 (void)
{
  extern typeof (f32mul (vol_var_unsigned_long_long_int, vol_var_unsigned_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_unsigned_long_long_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32mul_369 (void)
{
  extern typeof (f32mul (vol_var_unsigned_long_long_int, vol_var___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_unsigned_long_long_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32mul_370 (void)
{
  extern typeof (f32mul (vol_var_unsigned_long_long_int, vol_var_unsigned___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_unsigned_long_long_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_371 (void)
{
  extern typeof (f32mul (vol_var_unsigned_long_long_int, vol_var_enum_e)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_unsigned_long_long_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_372 (void)
{
  extern typeof (f32mul (vol_var_unsigned_long_long_int, vol_var__Bool)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_unsigned_long_long_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_373 (void)
{
  extern typeof (f32mul (vol_var_unsigned_long_long_int, vol_var_bit_field)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_unsigned_long_long_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_f32mul_374 (void)
{
  extern typeof (f32mul (vol_var___int128, vol_var__Float16)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var___int128, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_f32mul_375 (void)
{
  extern typeof (f32mul (vol_var___int128, vol_var__Float32)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var___int128, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_f32mul_376 (void)
{
  extern typeof (f32mul (vol_var___int128, vol_var__Float32x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var___int128, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_f32mul_377 (void)
{
  extern typeof (f32mul (vol_var___int128, vol_var__Float64)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var___int128, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_f32mul_378 (void)
{
  extern typeof (f32mul (vol_var___int128, vol_var__Float64x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var___int128, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_f32mul_379 (void)
{
  extern typeof (f32mul (vol_var___int128, vol_var__Float128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var___int128, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32mul_380 (void)
{
  extern typeof (f32mul (vol_var___int128, vol_var_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var___int128, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32mul_381 (void)
{
  extern typeof (f32mul (vol_var___int128, vol_var_signed_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var___int128, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32mul_382 (void)
{
  extern typeof (f32mul (vol_var___int128, vol_var_unsigned_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var___int128, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32mul_383 (void)
{
  extern typeof (f32mul (vol_var___int128, vol_var_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var___int128, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32mul_384 (void)
{
  extern typeof (f32mul (vol_var___int128, vol_var_unsigned_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var___int128, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32mul_385 (void)
{
  extern typeof (f32mul (vol_var___int128, vol_var_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var___int128, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32mul_386 (void)
{
  extern typeof (f32mul (vol_var___int128, vol_var_unsigned_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var___int128, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32mul_387 (void)
{
  extern typeof (f32mul (vol_var___int128, vol_var_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var___int128, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32mul_388 (void)
{
  extern typeof (f32mul (vol_var___int128, vol_var_unsigned_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var___int128, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32mul_389 (void)
{
  extern typeof (f32mul (vol_var___int128, vol_var_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var___int128, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32mul_390 (void)
{
  extern typeof (f32mul (vol_var___int128, vol_var_unsigned_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var___int128, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32mul_391 (void)
{
  extern typeof (f32mul (vol_var___int128, vol_var___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var___int128, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32mul_392 (void)
{
  extern typeof (f32mul (vol_var___int128, vol_var_unsigned___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var___int128, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32mul_393 (void)
{
  extern typeof (f32mul (vol_var___int128, vol_var_enum_e)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var___int128, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32mul_394 (void)
{
  extern typeof (f32mul (vol_var___int128, vol_var__Bool)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var___int128, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32mul_395 (void)
{
  extern typeof (f32mul (vol_var___int128, vol_var_bit_field)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var___int128, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_f32mul_396 (void)
{
  extern typeof (f32mul (vol_var_unsigned___int128, vol_var__Float16)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_unsigned___int128, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_f32mul_397 (void)
{
  extern typeof (f32mul (vol_var_unsigned___int128, vol_var__Float32)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_unsigned___int128, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_f32mul_398 (void)
{
  extern typeof (f32mul (vol_var_unsigned___int128, vol_var__Float32x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_unsigned___int128, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_f32mul_399 (void)
{
  extern typeof (f32mul (vol_var_unsigned___int128, vol_var__Float64)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_unsigned___int128, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_f32mul_400 (void)
{
  extern typeof (f32mul (vol_var_unsigned___int128, vol_var__Float64x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_unsigned___int128, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_f32mul_401 (void)
{
  extern typeof (f32mul (vol_var_unsigned___int128, vol_var__Float128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_unsigned___int128, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32mul_402 (void)
{
  extern typeof (f32mul (vol_var_unsigned___int128, vol_var_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_unsigned___int128, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32mul_403 (void)
{
  extern typeof (f32mul (vol_var_unsigned___int128, vol_var_signed_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_unsigned___int128, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32mul_404 (void)
{
  extern typeof (f32mul (vol_var_unsigned___int128, vol_var_unsigned_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_unsigned___int128, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32mul_405 (void)
{
  extern typeof (f32mul (vol_var_unsigned___int128, vol_var_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_unsigned___int128, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32mul_406 (void)
{
  extern typeof (f32mul (vol_var_unsigned___int128, vol_var_unsigned_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_unsigned___int128, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32mul_407 (void)
{
  extern typeof (f32mul (vol_var_unsigned___int128, vol_var_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_unsigned___int128, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32mul_408 (void)
{
  extern typeof (f32mul (vol_var_unsigned___int128, vol_var_unsigned_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_unsigned___int128, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32mul_409 (void)
{
  extern typeof (f32mul (vol_var_unsigned___int128, vol_var_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_unsigned___int128, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32mul_410 (void)
{
  extern typeof (f32mul (vol_var_unsigned___int128, vol_var_unsigned_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_unsigned___int128, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32mul_411 (void)
{
  extern typeof (f32mul (vol_var_unsigned___int128, vol_var_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_unsigned___int128, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32mul_412 (void)
{
  extern typeof (f32mul (vol_var_unsigned___int128, vol_var_unsigned_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_unsigned___int128, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32mul_413 (void)
{
  extern typeof (f32mul (vol_var_unsigned___int128, vol_var___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_unsigned___int128, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32mul_414 (void)
{
  extern typeof (f32mul (vol_var_unsigned___int128, vol_var_unsigned___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_unsigned___int128, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32mul_415 (void)
{
  extern typeof (f32mul (vol_var_unsigned___int128, vol_var_enum_e)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_unsigned___int128, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32mul_416 (void)
{
  extern typeof (f32mul (vol_var_unsigned___int128, vol_var__Bool)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_unsigned___int128, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32mul_417 (void)
{
  extern typeof (f32mul (vol_var_unsigned___int128, vol_var_bit_field)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_unsigned___int128, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32mul_418 (void)
{
  extern typeof (f32mul (vol_var_enum_e, vol_var__Float16)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_enum_e, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32mul_419 (void)
{
  extern typeof (f32mul (vol_var_enum_e, vol_var__Float32)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_enum_e, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32mul_420 (void)
{
  extern typeof (f32mul (vol_var_enum_e, vol_var__Float32x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_enum_e, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32mul_421 (void)
{
  extern typeof (f32mul (vol_var_enum_e, vol_var__Float64)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_enum_e, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32mul_422 (void)
{
  extern typeof (f32mul (vol_var_enum_e, vol_var__Float64x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_enum_e, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32mul_423 (void)
{
  extern typeof (f32mul (vol_var_enum_e, vol_var__Float128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_enum_e, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_424 (void)
{
  extern typeof (f32mul (vol_var_enum_e, vol_var_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_enum_e, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_425 (void)
{
  extern typeof (f32mul (vol_var_enum_e, vol_var_signed_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_enum_e, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_426 (void)
{
  extern typeof (f32mul (vol_var_enum_e, vol_var_unsigned_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_enum_e, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_427 (void)
{
  extern typeof (f32mul (vol_var_enum_e, vol_var_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_enum_e, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_428 (void)
{
  extern typeof (f32mul (vol_var_enum_e, vol_var_unsigned_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_enum_e, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_429 (void)
{
  extern typeof (f32mul (vol_var_enum_e, vol_var_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_enum_e, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_430 (void)
{
  extern typeof (f32mul (vol_var_enum_e, vol_var_unsigned_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_enum_e, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_431 (void)
{
  extern typeof (f32mul (vol_var_enum_e, vol_var_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_enum_e, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_432 (void)
{
  extern typeof (f32mul (vol_var_enum_e, vol_var_unsigned_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_enum_e, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_433 (void)
{
  extern typeof (f32mul (vol_var_enum_e, vol_var_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_enum_e, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_434 (void)
{
  extern typeof (f32mul (vol_var_enum_e, vol_var_unsigned_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_enum_e, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32mul_435 (void)
{
  extern typeof (f32mul (vol_var_enum_e, vol_var___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_enum_e, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32mul_436 (void)
{
  extern typeof (f32mul (vol_var_enum_e, vol_var_unsigned___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_enum_e, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_437 (void)
{
  extern typeof (f32mul (vol_var_enum_e, vol_var_enum_e)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_enum_e, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_438 (void)
{
  extern typeof (f32mul (vol_var_enum_e, vol_var__Bool)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_enum_e, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_439 (void)
{
  extern typeof (f32mul (vol_var_enum_e, vol_var_bit_field)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_enum_e, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32mul_440 (void)
{
  extern typeof (f32mul (vol_var__Bool, vol_var__Float16)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Bool, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32mul_441 (void)
{
  extern typeof (f32mul (vol_var__Bool, vol_var__Float32)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Bool, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32mul_442 (void)
{
  extern typeof (f32mul (vol_var__Bool, vol_var__Float32x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Bool, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32mul_443 (void)
{
  extern typeof (f32mul (vol_var__Bool, vol_var__Float64)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Bool, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32mul_444 (void)
{
  extern typeof (f32mul (vol_var__Bool, vol_var__Float64x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Bool, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32mul_445 (void)
{
  extern typeof (f32mul (vol_var__Bool, vol_var__Float128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Bool, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_446 (void)
{
  extern typeof (f32mul (vol_var__Bool, vol_var_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Bool, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_447 (void)
{
  extern typeof (f32mul (vol_var__Bool, vol_var_signed_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Bool, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_448 (void)
{
  extern typeof (f32mul (vol_var__Bool, vol_var_unsigned_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Bool, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_449 (void)
{
  extern typeof (f32mul (vol_var__Bool, vol_var_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Bool, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_450 (void)
{
  extern typeof (f32mul (vol_var__Bool, vol_var_unsigned_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Bool, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_451 (void)
{
  extern typeof (f32mul (vol_var__Bool, vol_var_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Bool, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_452 (void)
{
  extern typeof (f32mul (vol_var__Bool, vol_var_unsigned_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Bool, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_453 (void)
{
  extern typeof (f32mul (vol_var__Bool, vol_var_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Bool, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_454 (void)
{
  extern typeof (f32mul (vol_var__Bool, vol_var_unsigned_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Bool, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_455 (void)
{
  extern typeof (f32mul (vol_var__Bool, vol_var_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Bool, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_456 (void)
{
  extern typeof (f32mul (vol_var__Bool, vol_var_unsigned_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Bool, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32mul_457 (void)
{
  extern typeof (f32mul (vol_var__Bool, vol_var___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Bool, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32mul_458 (void)
{
  extern typeof (f32mul (vol_var__Bool, vol_var_unsigned___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Bool, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_459 (void)
{
  extern typeof (f32mul (vol_var__Bool, vol_var_enum_e)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Bool, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_460 (void)
{
  extern typeof (f32mul (vol_var__Bool, vol_var__Bool)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Bool, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_461 (void)
{
  extern typeof (f32mul (vol_var__Bool, vol_var_bit_field)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var__Bool, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32mul_462 (void)
{
  extern typeof (f32mul (vol_var_bit_field, vol_var__Float16)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_bit_field, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32mul_463 (void)
{
  extern typeof (f32mul (vol_var_bit_field, vol_var__Float32)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_bit_field, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32mul_464 (void)
{
  extern typeof (f32mul (vol_var_bit_field, vol_var__Float32x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_bit_field, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32mul_465 (void)
{
  extern typeof (f32mul (vol_var_bit_field, vol_var__Float64)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_bit_field, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32mul_466 (void)
{
  extern typeof (f32mul (vol_var_bit_field, vol_var__Float64x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_bit_field, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32mul_467 (void)
{
  extern typeof (f32mul (vol_var_bit_field, vol_var__Float128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_bit_field, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_468 (void)
{
  extern typeof (f32mul (vol_var_bit_field, vol_var_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_bit_field, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_469 (void)
{
  extern typeof (f32mul (vol_var_bit_field, vol_var_signed_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_bit_field, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_470 (void)
{
  extern typeof (f32mul (vol_var_bit_field, vol_var_unsigned_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_bit_field, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_471 (void)
{
  extern typeof (f32mul (vol_var_bit_field, vol_var_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_bit_field, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_472 (void)
{
  extern typeof (f32mul (vol_var_bit_field, vol_var_unsigned_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_bit_field, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_473 (void)
{
  extern typeof (f32mul (vol_var_bit_field, vol_var_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_bit_field, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_474 (void)
{
  extern typeof (f32mul (vol_var_bit_field, vol_var_unsigned_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_bit_field, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_475 (void)
{
  extern typeof (f32mul (vol_var_bit_field, vol_var_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_bit_field, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_476 (void)
{
  extern typeof (f32mul (vol_var_bit_field, vol_var_unsigned_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_bit_field, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_477 (void)
{
  extern typeof (f32mul (vol_var_bit_field, vol_var_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_bit_field, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_478 (void)
{
  extern typeof (f32mul (vol_var_bit_field, vol_var_unsigned_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_bit_field, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32mul_479 (void)
{
  extern typeof (f32mul (vol_var_bit_field, vol_var___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_bit_field, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32mul_480 (void)
{
  extern typeof (f32mul (vol_var_bit_field, vol_var_unsigned___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_bit_field, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_481 (void)
{
  extern typeof (f32mul (vol_var_bit_field, vol_var_enum_e)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_bit_field, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_482 (void)
{
  extern typeof (f32mul (vol_var_bit_field, vol_var__Bool)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_bit_field, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32mul_483 (void)
{
  extern typeof (f32mul (vol_var_bit_field, vol_var_bit_field)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32mul (vol_var_bit_field, vol_var_bit_field);
}
#endif
static const struct test tests[] =
  {
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32mul_0, "f32mul", "f32mul (_Float16, _Float16)", FLT64_MANT_DIG, FLT16_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32
    { test_f32mul_1, "f32mul", "f32mul (_Float16, _Float32)", FLT64_MANT_DIG, FLT32_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
    { test_f32mul_2, "f32mul", "f32mul (_Float16, _Float32x)", FLT32X_MANT_DIG, FLT32X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64
    { test_f32mul_3, "f32mul", "f32mul (_Float16, _Float64)", FLT64_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
    { test_f32mul_4, "f32mul", "f32mul (_Float16, _Float64x)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F16
    { test_f32mul_5, "f32mul", "f32mul (_Float16, _Float128)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32mul_6, "f32mul", "f32mul (_Float16, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32mul_7, "f32mul", "f32mul (_Float16, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32mul_8, "f32mul", "f32mul (_Float16, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32mul_9, "f32mul", "f32mul (_Float16, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32mul_10, "f32mul", "f32mul (_Float16, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32mul_11, "f32mul", "f32mul (_Float16, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32mul_12, "f32mul", "f32mul (_Float16, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32mul_13, "f32mul", "f32mul (_Float16, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32mul_14, "f32mul", "f32mul (_Float16, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32mul_15, "f32mul", "f32mul (_Float16, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32mul_16, "f32mul", "f32mul (_Float16, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_f32mul_17, "f32mul", "f32mul (_Float16, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_f32mul_18, "f32mul", "f32mul (_Float16, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32mul_19, "f32mul", "f32mul (_Float16, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32mul_20, "f32mul", "f32mul (_Float16, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32mul_21, "f32mul", "f32mul (_Float16, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32
    { test_f32mul_22, "f32mul", "f32mul (_Float32, _Float16)", FLT64_MANT_DIG, FLT32_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32mul_23, "f32mul", "f32mul (_Float32, _Float32)", FLT64_MANT_DIG, FLT32_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
    { test_f32mul_24, "f32mul", "f32mul (_Float32, _Float32x)", FLT32X_MANT_DIG, FLT32X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64
    { test_f32mul_25, "f32mul", "f32mul (_Float32, _Float64)", FLT64_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
    { test_f32mul_26, "f32mul", "f32mul (_Float32, _Float64x)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32
    { test_f32mul_27, "f32mul", "f32mul (_Float32, _Float128)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32mul_28, "f32mul", "f32mul (_Float32, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32mul_29, "f32mul", "f32mul (_Float32, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32mul_30, "f32mul", "f32mul (_Float32, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32mul_31, "f32mul", "f32mul (_Float32, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32mul_32, "f32mul", "f32mul (_Float32, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32mul_33, "f32mul", "f32mul (_Float32, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32mul_34, "f32mul", "f32mul (_Float32, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32mul_35, "f32mul", "f32mul (_Float32, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32mul_36, "f32mul", "f32mul (_Float32, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32mul_37, "f32mul", "f32mul (_Float32, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32mul_38, "f32mul", "f32mul (_Float32, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_f32mul_39, "f32mul", "f32mul (_Float32, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_f32mul_40, "f32mul", "f32mul (_Float32, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32mul_41, "f32mul", "f32mul (_Float32, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32mul_42, "f32mul", "f32mul (_Float32, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32mul_43, "f32mul", "f32mul (_Float32, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
    { test_f32mul_44, "f32mul", "f32mul (_Float32x, _Float16)", FLT32X_MANT_DIG, FLT32X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
    { test_f32mul_45, "f32mul", "f32mul (_Float32x, _Float32)", FLT32X_MANT_DIG, FLT32X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32mul_46, "f32mul", "f32mul (_Float32x, _Float32x)", FLT32X_MANT_DIG, FLT32X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64
    { test_f32mul_47, "f32mul", "f32mul (_Float32x, _Float64)", FLT64_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
    { test_f32mul_48, "f32mul", "f32mul (_Float32x, _Float64x)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
    { test_f32mul_49, "f32mul", "f32mul (_Float32x, _Float128)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32mul_50, "f32mul", "f32mul (_Float32x, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32mul_51, "f32mul", "f32mul (_Float32x, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32mul_52, "f32mul", "f32mul (_Float32x, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32mul_53, "f32mul", "f32mul (_Float32x, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32mul_54, "f32mul", "f32mul (_Float32x, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32mul_55, "f32mul", "f32mul (_Float32x, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32mul_56, "f32mul", "f32mul (_Float32x, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32mul_57, "f32mul", "f32mul (_Float32x, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32mul_58, "f32mul", "f32mul (_Float32x, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32mul_59, "f32mul", "f32mul (_Float32x, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32mul_60, "f32mul", "f32mul (_Float32x, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_f32mul_61, "f32mul", "f32mul (_Float32x, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_f32mul_62, "f32mul", "f32mul (_Float32x, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32mul_63, "f32mul", "f32mul (_Float32x, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32mul_64, "f32mul", "f32mul (_Float32x, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32mul_65, "f32mul", "f32mul (_Float32x, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64
    { test_f32mul_66, "f32mul", "f32mul (_Float64, _Float16)", FLT64_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64
    { test_f32mul_67, "f32mul", "f32mul (_Float64, _Float32)", FLT64_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64
    { test_f32mul_68, "f32mul", "f32mul (_Float64, _Float32x)", FLT64_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32mul_69, "f32mul", "f32mul (_Float64, _Float64)", FLT64_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
    { test_f32mul_70, "f32mul", "f32mul (_Float64, _Float64x)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64
    { test_f32mul_71, "f32mul", "f32mul (_Float64, _Float128)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32mul_72, "f32mul", "f32mul (_Float64, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32mul_73, "f32mul", "f32mul (_Float64, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32mul_74, "f32mul", "f32mul (_Float64, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32mul_75, "f32mul", "f32mul (_Float64, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32mul_76, "f32mul", "f32mul (_Float64, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32mul_77, "f32mul", "f32mul (_Float64, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32mul_78, "f32mul", "f32mul (_Float64, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32mul_79, "f32mul", "f32mul (_Float64, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32mul_80, "f32mul", "f32mul (_Float64, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32mul_81, "f32mul", "f32mul (_Float64, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32mul_82, "f32mul", "f32mul (_Float64, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_f32mul_83, "f32mul", "f32mul (_Float64, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_f32mul_84, "f32mul", "f32mul (_Float64, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32mul_85, "f32mul", "f32mul (_Float64, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32mul_86, "f32mul", "f32mul (_Float64, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32mul_87, "f32mul", "f32mul (_Float64, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
    { test_f32mul_88, "f32mul", "f32mul (_Float64x, _Float16)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
    { test_f32mul_89, "f32mul", "f32mul (_Float64x, _Float32)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
    { test_f32mul_90, "f32mul", "f32mul (_Float64x, _Float32x)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
    { test_f32mul_91, "f32mul", "f32mul (_Float64x, _Float64)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32mul_92, "f32mul", "f32mul (_Float64x, _Float64x)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
    { test_f32mul_93, "f32mul", "f32mul (_Float64x, _Float128)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32mul_94, "f32mul", "f32mul (_Float64x, char)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32mul_95, "f32mul", "f32mul (_Float64x, signed char)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32mul_96, "f32mul", "f32mul (_Float64x, unsigned char)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32mul_97, "f32mul", "f32mul (_Float64x, short int)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32mul_98, "f32mul", "f32mul (_Float64x, unsigned short int)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32mul_99, "f32mul", "f32mul (_Float64x, int)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32mul_100, "f32mul", "f32mul (_Float64x, unsigned int)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32mul_101, "f32mul", "f32mul (_Float64x, long int)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32mul_102, "f32mul", "f32mul (_Float64x, unsigned long int)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32mul_103, "f32mul", "f32mul (_Float64x, long long int)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32mul_104, "f32mul", "f32mul (_Float64x, unsigned long long int)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_f32mul_105, "f32mul", "f32mul (_Float64x, __int128)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_f32mul_106, "f32mul", "f32mul (_Float64x, unsigned __int128)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32mul_107, "f32mul", "f32mul (_Float64x, enum e)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32mul_108, "f32mul", "f32mul (_Float64x, _Bool)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32mul_109, "f32mul", "f32mul (_Float64x, bit_field)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F16
    { test_f32mul_110, "f32mul", "f32mul (_Float128, _Float16)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32
    { test_f32mul_111, "f32mul", "f32mul (_Float128, _Float32)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
    { test_f32mul_112, "f32mul", "f32mul (_Float128, _Float32x)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64
    { test_f32mul_113, "f32mul", "f32mul (_Float128, _Float64)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
    { test_f32mul_114, "f32mul", "f32mul (_Float128, _Float64x)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32mul_115, "f32mul", "f32mul (_Float128, _Float128)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32mul_116, "f32mul", "f32mul (_Float128, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32mul_117, "f32mul", "f32mul (_Float128, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32mul_118, "f32mul", "f32mul (_Float128, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32mul_119, "f32mul", "f32mul (_Float128, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32mul_120, "f32mul", "f32mul (_Float128, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32mul_121, "f32mul", "f32mul (_Float128, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32mul_122, "f32mul", "f32mul (_Float128, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32mul_123, "f32mul", "f32mul (_Float128, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32mul_124, "f32mul", "f32mul (_Float128, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32mul_125, "f32mul", "f32mul (_Float128, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32mul_126, "f32mul", "f32mul (_Float128, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_f32mul_127, "f32mul", "f32mul (_Float128, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_f32mul_128, "f32mul", "f32mul (_Float128, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32mul_129, "f32mul", "f32mul (_Float128, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32mul_130, "f32mul", "f32mul (_Float128, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32mul_131, "f32mul", "f32mul (_Float128, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32mul_132, "f32mul", "f32mul (char, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32mul_133, "f32mul", "f32mul (char, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32mul_134, "f32mul", "f32mul (char, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32mul_135, "f32mul", "f32mul (char, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32mul_136, "f32mul", "f32mul (char, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32mul_137, "f32mul", "f32mul (char, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_138, "f32mul", "f32mul (char, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_139, "f32mul", "f32mul (char, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_140, "f32mul", "f32mul (char, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_141, "f32mul", "f32mul (char, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_142, "f32mul", "f32mul (char, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_143, "f32mul", "f32mul (char, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_144, "f32mul", "f32mul (char, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_145, "f32mul", "f32mul (char, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_146, "f32mul", "f32mul (char, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_147, "f32mul", "f32mul (char, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_148, "f32mul", "f32mul (char, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32mul_149, "f32mul", "f32mul (char, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32mul_150, "f32mul", "f32mul (char, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_151, "f32mul", "f32mul (char, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_152, "f32mul", "f32mul (char, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_153, "f32mul", "f32mul (char, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32mul_154, "f32mul", "f32mul (signed char, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32mul_155, "f32mul", "f32mul (signed char, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32mul_156, "f32mul", "f32mul (signed char, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32mul_157, "f32mul", "f32mul (signed char, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32mul_158, "f32mul", "f32mul (signed char, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32mul_159, "f32mul", "f32mul (signed char, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_160, "f32mul", "f32mul (signed char, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_161, "f32mul", "f32mul (signed char, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_162, "f32mul", "f32mul (signed char, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_163, "f32mul", "f32mul (signed char, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_164, "f32mul", "f32mul (signed char, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_165, "f32mul", "f32mul (signed char, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_166, "f32mul", "f32mul (signed char, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_167, "f32mul", "f32mul (signed char, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_168, "f32mul", "f32mul (signed char, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_169, "f32mul", "f32mul (signed char, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_170, "f32mul", "f32mul (signed char, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32mul_171, "f32mul", "f32mul (signed char, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32mul_172, "f32mul", "f32mul (signed char, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_173, "f32mul", "f32mul (signed char, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_174, "f32mul", "f32mul (signed char, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_175, "f32mul", "f32mul (signed char, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32mul_176, "f32mul", "f32mul (unsigned char, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32mul_177, "f32mul", "f32mul (unsigned char, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32mul_178, "f32mul", "f32mul (unsigned char, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32mul_179, "f32mul", "f32mul (unsigned char, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32mul_180, "f32mul", "f32mul (unsigned char, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32mul_181, "f32mul", "f32mul (unsigned char, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_182, "f32mul", "f32mul (unsigned char, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_183, "f32mul", "f32mul (unsigned char, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_184, "f32mul", "f32mul (unsigned char, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_185, "f32mul", "f32mul (unsigned char, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_186, "f32mul", "f32mul (unsigned char, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_187, "f32mul", "f32mul (unsigned char, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_188, "f32mul", "f32mul (unsigned char, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_189, "f32mul", "f32mul (unsigned char, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_190, "f32mul", "f32mul (unsigned char, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_191, "f32mul", "f32mul (unsigned char, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_192, "f32mul", "f32mul (unsigned char, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32mul_193, "f32mul", "f32mul (unsigned char, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32mul_194, "f32mul", "f32mul (unsigned char, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_195, "f32mul", "f32mul (unsigned char, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_196, "f32mul", "f32mul (unsigned char, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_197, "f32mul", "f32mul (unsigned char, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32mul_198, "f32mul", "f32mul (short int, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32mul_199, "f32mul", "f32mul (short int, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32mul_200, "f32mul", "f32mul (short int, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32mul_201, "f32mul", "f32mul (short int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32mul_202, "f32mul", "f32mul (short int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32mul_203, "f32mul", "f32mul (short int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_204, "f32mul", "f32mul (short int, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_205, "f32mul", "f32mul (short int, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_206, "f32mul", "f32mul (short int, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_207, "f32mul", "f32mul (short int, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_208, "f32mul", "f32mul (short int, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_209, "f32mul", "f32mul (short int, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_210, "f32mul", "f32mul (short int, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_211, "f32mul", "f32mul (short int, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_212, "f32mul", "f32mul (short int, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_213, "f32mul", "f32mul (short int, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_214, "f32mul", "f32mul (short int, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32mul_215, "f32mul", "f32mul (short int, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32mul_216, "f32mul", "f32mul (short int, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_217, "f32mul", "f32mul (short int, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_218, "f32mul", "f32mul (short int, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_219, "f32mul", "f32mul (short int, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32mul_220, "f32mul", "f32mul (unsigned short int, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32mul_221, "f32mul", "f32mul (unsigned short int, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32mul_222, "f32mul", "f32mul (unsigned short int, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32mul_223, "f32mul", "f32mul (unsigned short int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32mul_224, "f32mul", "f32mul (unsigned short int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32mul_225, "f32mul", "f32mul (unsigned short int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_226, "f32mul", "f32mul (unsigned short int, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_227, "f32mul", "f32mul (unsigned short int, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_228, "f32mul", "f32mul (unsigned short int, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_229, "f32mul", "f32mul (unsigned short int, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_230, "f32mul", "f32mul (unsigned short int, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_231, "f32mul", "f32mul (unsigned short int, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_232, "f32mul", "f32mul (unsigned short int, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_233, "f32mul", "f32mul (unsigned short int, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_234, "f32mul", "f32mul (unsigned short int, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_235, "f32mul", "f32mul (unsigned short int, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_236, "f32mul", "f32mul (unsigned short int, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32mul_237, "f32mul", "f32mul (unsigned short int, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32mul_238, "f32mul", "f32mul (unsigned short int, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_239, "f32mul", "f32mul (unsigned short int, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_240, "f32mul", "f32mul (unsigned short int, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_241, "f32mul", "f32mul (unsigned short int, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32mul_242, "f32mul", "f32mul (int, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32mul_243, "f32mul", "f32mul (int, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32mul_244, "f32mul", "f32mul (int, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32mul_245, "f32mul", "f32mul (int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32mul_246, "f32mul", "f32mul (int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32mul_247, "f32mul", "f32mul (int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_248, "f32mul", "f32mul (int, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_249, "f32mul", "f32mul (int, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_250, "f32mul", "f32mul (int, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_251, "f32mul", "f32mul (int, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_252, "f32mul", "f32mul (int, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_253, "f32mul", "f32mul (int, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_254, "f32mul", "f32mul (int, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_255, "f32mul", "f32mul (int, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_256, "f32mul", "f32mul (int, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_257, "f32mul", "f32mul (int, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_258, "f32mul", "f32mul (int, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32mul_259, "f32mul", "f32mul (int, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32mul_260, "f32mul", "f32mul (int, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_261, "f32mul", "f32mul (int, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_262, "f32mul", "f32mul (int, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_263, "f32mul", "f32mul (int, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32mul_264, "f32mul", "f32mul (unsigned int, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32mul_265, "f32mul", "f32mul (unsigned int, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32mul_266, "f32mul", "f32mul (unsigned int, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32mul_267, "f32mul", "f32mul (unsigned int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32mul_268, "f32mul", "f32mul (unsigned int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32mul_269, "f32mul", "f32mul (unsigned int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_270, "f32mul", "f32mul (unsigned int, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_271, "f32mul", "f32mul (unsigned int, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_272, "f32mul", "f32mul (unsigned int, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_273, "f32mul", "f32mul (unsigned int, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_274, "f32mul", "f32mul (unsigned int, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_275, "f32mul", "f32mul (unsigned int, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_276, "f32mul", "f32mul (unsigned int, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_277, "f32mul", "f32mul (unsigned int, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_278, "f32mul", "f32mul (unsigned int, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_279, "f32mul", "f32mul (unsigned int, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_280, "f32mul", "f32mul (unsigned int, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32mul_281, "f32mul", "f32mul (unsigned int, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32mul_282, "f32mul", "f32mul (unsigned int, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_283, "f32mul", "f32mul (unsigned int, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_284, "f32mul", "f32mul (unsigned int, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_285, "f32mul", "f32mul (unsigned int, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32mul_286, "f32mul", "f32mul (long int, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32mul_287, "f32mul", "f32mul (long int, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32mul_288, "f32mul", "f32mul (long int, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32mul_289, "f32mul", "f32mul (long int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32mul_290, "f32mul", "f32mul (long int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32mul_291, "f32mul", "f32mul (long int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_292, "f32mul", "f32mul (long int, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_293, "f32mul", "f32mul (long int, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_294, "f32mul", "f32mul (long int, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_295, "f32mul", "f32mul (long int, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_296, "f32mul", "f32mul (long int, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_297, "f32mul", "f32mul (long int, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_298, "f32mul", "f32mul (long int, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_299, "f32mul", "f32mul (long int, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_300, "f32mul", "f32mul (long int, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_301, "f32mul", "f32mul (long int, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_302, "f32mul", "f32mul (long int, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32mul_303, "f32mul", "f32mul (long int, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32mul_304, "f32mul", "f32mul (long int, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_305, "f32mul", "f32mul (long int, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_306, "f32mul", "f32mul (long int, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_307, "f32mul", "f32mul (long int, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32mul_308, "f32mul", "f32mul (unsigned long int, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32mul_309, "f32mul", "f32mul (unsigned long int, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32mul_310, "f32mul", "f32mul (unsigned long int, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32mul_311, "f32mul", "f32mul (unsigned long int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32mul_312, "f32mul", "f32mul (unsigned long int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32mul_313, "f32mul", "f32mul (unsigned long int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_314, "f32mul", "f32mul (unsigned long int, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_315, "f32mul", "f32mul (unsigned long int, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_316, "f32mul", "f32mul (unsigned long int, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_317, "f32mul", "f32mul (unsigned long int, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_318, "f32mul", "f32mul (unsigned long int, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_319, "f32mul", "f32mul (unsigned long int, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_320, "f32mul", "f32mul (unsigned long int, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_321, "f32mul", "f32mul (unsigned long int, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_322, "f32mul", "f32mul (unsigned long int, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_323, "f32mul", "f32mul (unsigned long int, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_324, "f32mul", "f32mul (unsigned long int, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32mul_325, "f32mul", "f32mul (unsigned long int, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32mul_326, "f32mul", "f32mul (unsigned long int, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_327, "f32mul", "f32mul (unsigned long int, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_328, "f32mul", "f32mul (unsigned long int, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_329, "f32mul", "f32mul (unsigned long int, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32mul_330, "f32mul", "f32mul (long long int, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32mul_331, "f32mul", "f32mul (long long int, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32mul_332, "f32mul", "f32mul (long long int, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32mul_333, "f32mul", "f32mul (long long int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32mul_334, "f32mul", "f32mul (long long int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32mul_335, "f32mul", "f32mul (long long int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_336, "f32mul", "f32mul (long long int, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_337, "f32mul", "f32mul (long long int, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_338, "f32mul", "f32mul (long long int, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_339, "f32mul", "f32mul (long long int, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_340, "f32mul", "f32mul (long long int, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_341, "f32mul", "f32mul (long long int, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_342, "f32mul", "f32mul (long long int, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_343, "f32mul", "f32mul (long long int, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_344, "f32mul", "f32mul (long long int, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_345, "f32mul", "f32mul (long long int, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_346, "f32mul", "f32mul (long long int, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32mul_347, "f32mul", "f32mul (long long int, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32mul_348, "f32mul", "f32mul (long long int, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_349, "f32mul", "f32mul (long long int, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_350, "f32mul", "f32mul (long long int, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_351, "f32mul", "f32mul (long long int, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32mul_352, "f32mul", "f32mul (unsigned long long int, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32mul_353, "f32mul", "f32mul (unsigned long long int, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32mul_354, "f32mul", "f32mul (unsigned long long int, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32mul_355, "f32mul", "f32mul (unsigned long long int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32mul_356, "f32mul", "f32mul (unsigned long long int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32mul_357, "f32mul", "f32mul (unsigned long long int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_358, "f32mul", "f32mul (unsigned long long int, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_359, "f32mul", "f32mul (unsigned long long int, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_360, "f32mul", "f32mul (unsigned long long int, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_361, "f32mul", "f32mul (unsigned long long int, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_362, "f32mul", "f32mul (unsigned long long int, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_363, "f32mul", "f32mul (unsigned long long int, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_364, "f32mul", "f32mul (unsigned long long int, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_365, "f32mul", "f32mul (unsigned long long int, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_366, "f32mul", "f32mul (unsigned long long int, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_367, "f32mul", "f32mul (unsigned long long int, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_368, "f32mul", "f32mul (unsigned long long int, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32mul_369, "f32mul", "f32mul (unsigned long long int, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32mul_370, "f32mul", "f32mul (unsigned long long int, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_371, "f32mul", "f32mul (unsigned long long int, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_372, "f32mul", "f32mul (unsigned long long int, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_373, "f32mul", "f32mul (unsigned long long int, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_f32mul_374, "f32mul", "f32mul (__int128, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_f32mul_375, "f32mul", "f32mul (__int128, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_f32mul_376, "f32mul", "f32mul (__int128, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_f32mul_377, "f32mul", "f32mul (__int128, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_f32mul_378, "f32mul", "f32mul (__int128, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_f32mul_379, "f32mul", "f32mul (__int128, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32mul_380, "f32mul", "f32mul (__int128, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32mul_381, "f32mul", "f32mul (__int128, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32mul_382, "f32mul", "f32mul (__int128, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32mul_383, "f32mul", "f32mul (__int128, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32mul_384, "f32mul", "f32mul (__int128, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32mul_385, "f32mul", "f32mul (__int128, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32mul_386, "f32mul", "f32mul (__int128, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32mul_387, "f32mul", "f32mul (__int128, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32mul_388, "f32mul", "f32mul (__int128, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32mul_389, "f32mul", "f32mul (__int128, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32mul_390, "f32mul", "f32mul (__int128, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32mul_391, "f32mul", "f32mul (__int128, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32mul_392, "f32mul", "f32mul (__int128, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32mul_393, "f32mul", "f32mul (__int128, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32mul_394, "f32mul", "f32mul (__int128, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32mul_395, "f32mul", "f32mul (__int128, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_f32mul_396, "f32mul", "f32mul (unsigned __int128, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_f32mul_397, "f32mul", "f32mul (unsigned __int128, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_f32mul_398, "f32mul", "f32mul (unsigned __int128, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_f32mul_399, "f32mul", "f32mul (unsigned __int128, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_f32mul_400, "f32mul", "f32mul (unsigned __int128, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_f32mul_401, "f32mul", "f32mul (unsigned __int128, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32mul_402, "f32mul", "f32mul (unsigned __int128, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32mul_403, "f32mul", "f32mul (unsigned __int128, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32mul_404, "f32mul", "f32mul (unsigned __int128, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32mul_405, "f32mul", "f32mul (unsigned __int128, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32mul_406, "f32mul", "f32mul (unsigned __int128, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32mul_407, "f32mul", "f32mul (unsigned __int128, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32mul_408, "f32mul", "f32mul (unsigned __int128, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32mul_409, "f32mul", "f32mul (unsigned __int128, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32mul_410, "f32mul", "f32mul (unsigned __int128, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32mul_411, "f32mul", "f32mul (unsigned __int128, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32mul_412, "f32mul", "f32mul (unsigned __int128, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32mul_413, "f32mul", "f32mul (unsigned __int128, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32mul_414, "f32mul", "f32mul (unsigned __int128, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32mul_415, "f32mul", "f32mul (unsigned __int128, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32mul_416, "f32mul", "f32mul (unsigned __int128, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32mul_417, "f32mul", "f32mul (unsigned __int128, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32mul_418, "f32mul", "f32mul (enum e, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32mul_419, "f32mul", "f32mul (enum e, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32mul_420, "f32mul", "f32mul (enum e, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32mul_421, "f32mul", "f32mul (enum e, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32mul_422, "f32mul", "f32mul (enum e, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32mul_423, "f32mul", "f32mul (enum e, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_424, "f32mul", "f32mul (enum e, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_425, "f32mul", "f32mul (enum e, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_426, "f32mul", "f32mul (enum e, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_427, "f32mul", "f32mul (enum e, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_428, "f32mul", "f32mul (enum e, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_429, "f32mul", "f32mul (enum e, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_430, "f32mul", "f32mul (enum e, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_431, "f32mul", "f32mul (enum e, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_432, "f32mul", "f32mul (enum e, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_433, "f32mul", "f32mul (enum e, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_434, "f32mul", "f32mul (enum e, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32mul_435, "f32mul", "f32mul (enum e, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32mul_436, "f32mul", "f32mul (enum e, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_437, "f32mul", "f32mul (enum e, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_438, "f32mul", "f32mul (enum e, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_439, "f32mul", "f32mul (enum e, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32mul_440, "f32mul", "f32mul (_Bool, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32mul_441, "f32mul", "f32mul (_Bool, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32mul_442, "f32mul", "f32mul (_Bool, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32mul_443, "f32mul", "f32mul (_Bool, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32mul_444, "f32mul", "f32mul (_Bool, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32mul_445, "f32mul", "f32mul (_Bool, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_446, "f32mul", "f32mul (_Bool, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_447, "f32mul", "f32mul (_Bool, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_448, "f32mul", "f32mul (_Bool, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_449, "f32mul", "f32mul (_Bool, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_450, "f32mul", "f32mul (_Bool, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_451, "f32mul", "f32mul (_Bool, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_452, "f32mul", "f32mul (_Bool, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_453, "f32mul", "f32mul (_Bool, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_454, "f32mul", "f32mul (_Bool, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_455, "f32mul", "f32mul (_Bool, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_456, "f32mul", "f32mul (_Bool, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32mul_457, "f32mul", "f32mul (_Bool, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32mul_458, "f32mul", "f32mul (_Bool, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_459, "f32mul", "f32mul (_Bool, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_460, "f32mul", "f32mul (_Bool, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_461, "f32mul", "f32mul (_Bool, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32mul_462, "f32mul", "f32mul (bit_field, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32mul_463, "f32mul", "f32mul (bit_field, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32mul_464, "f32mul", "f32mul (bit_field, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32mul_465, "f32mul", "f32mul (bit_field, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32mul_466, "f32mul", "f32mul (bit_field, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32mul_467, "f32mul", "f32mul (bit_field, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_468, "f32mul", "f32mul (bit_field, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_469, "f32mul", "f32mul (bit_field, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_470, "f32mul", "f32mul (bit_field, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_471, "f32mul", "f32mul (bit_field, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_472, "f32mul", "f32mul (bit_field, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_473, "f32mul", "f32mul (bit_field, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_474, "f32mul", "f32mul (bit_field, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_475, "f32mul", "f32mul (bit_field, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_476, "f32mul", "f32mul (bit_field, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_477, "f32mul", "f32mul (bit_field, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_478, "f32mul", "f32mul (bit_field, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32mul_479, "f32mul", "f32mul (bit_field, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32mul_480, "f32mul", "f32mul (bit_field, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_481, "f32mul", "f32mul (bit_field, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_482, "f32mul", "f32mul (bit_field, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32mul_483, "f32mul", "f32mul (bit_field, bit_field)", FLT64_MANT_DIG, 0 },
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
