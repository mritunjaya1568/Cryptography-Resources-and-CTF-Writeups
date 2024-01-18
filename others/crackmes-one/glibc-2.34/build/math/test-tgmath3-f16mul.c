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
(f16mulf32) (_Float32 arg0 __attribute__ ((unused)), _Float32 arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT32_MANT_DIG;
  called_func_name = "f16mul";
  return 0;
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
_Float16
(f16mulf32x) (_Float32x arg0 __attribute__ ((unused)), _Float32x arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT32X_MANT_DIG;
  called_func_name = "f16mul";
  return 0;
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
_Float16
(f16mulf64) (_Float64 arg0 __attribute__ ((unused)), _Float64 arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT64_MANT_DIG;
  called_func_name = "f16mul";
  return 0;
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
_Float16
(f16mulf64x) (_Float64x arg0 __attribute__ ((unused)), _Float64x arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT64X_MANT_DIG;
  called_func_name = "f16mul";
  return 0;
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
_Float16
(f16mulf128) (_Float128 arg0 __attribute__ ((unused)), _Float128 arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT128_MANT_DIG;
  called_func_name = "f16mul";
  return 0;
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f16mul_0 (void)
{
  extern typeof (f16mul (vol_var__Float16, vol_var__Float16)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Float16, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32
static void
test_f16mul_1 (void)
{
  extern typeof (f16mul (vol_var__Float16, vol_var__Float32)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Float16, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
static void
test_f16mul_2 (void)
{
  extern typeof (f16mul (vol_var__Float16, vol_var__Float32x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Float16, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64
static void
test_f16mul_3 (void)
{
  extern typeof (f16mul (vol_var__Float16, vol_var__Float64)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Float16, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
static void
test_f16mul_4 (void)
{
  extern typeof (f16mul (vol_var__Float16, vol_var__Float64x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Float16, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F16
static void
test_f16mul_5 (void)
{
  extern typeof (f16mul (vol_var__Float16, vol_var__Float128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Float16, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f16mul_6 (void)
{
  extern typeof (f16mul (vol_var__Float16, vol_var_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Float16, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f16mul_7 (void)
{
  extern typeof (f16mul (vol_var__Float16, vol_var_signed_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Float16, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f16mul_8 (void)
{
  extern typeof (f16mul (vol_var__Float16, vol_var_unsigned_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Float16, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f16mul_9 (void)
{
  extern typeof (f16mul (vol_var__Float16, vol_var_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Float16, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f16mul_10 (void)
{
  extern typeof (f16mul (vol_var__Float16, vol_var_unsigned_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Float16, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f16mul_11 (void)
{
  extern typeof (f16mul (vol_var__Float16, vol_var_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Float16, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f16mul_12 (void)
{
  extern typeof (f16mul (vol_var__Float16, vol_var_unsigned_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Float16, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f16mul_13 (void)
{
  extern typeof (f16mul (vol_var__Float16, vol_var_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Float16, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f16mul_14 (void)
{
  extern typeof (f16mul (vol_var__Float16, vol_var_unsigned_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Float16, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f16mul_15 (void)
{
  extern typeof (f16mul (vol_var__Float16, vol_var_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Float16, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f16mul_16 (void)
{
  extern typeof (f16mul (vol_var__Float16, vol_var_unsigned_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Float16, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_f16mul_17 (void)
{
  extern typeof (f16mul (vol_var__Float16, vol_var___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Float16, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_f16mul_18 (void)
{
  extern typeof (f16mul (vol_var__Float16, vol_var_unsigned___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Float16, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f16mul_19 (void)
{
  extern typeof (f16mul (vol_var__Float16, vol_var_enum_e)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Float16, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f16mul_20 (void)
{
  extern typeof (f16mul (vol_var__Float16, vol_var__Bool)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Float16, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f16mul_21 (void)
{
  extern typeof (f16mul (vol_var__Float16, vol_var_bit_field)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Float16, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32
static void
test_f16mul_22 (void)
{
  extern typeof (f16mul (vol_var__Float32, vol_var__Float16)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Float32, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f16mul_23 (void)
{
  extern typeof (f16mul (vol_var__Float32, vol_var__Float32)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Float32, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
static void
test_f16mul_24 (void)
{
  extern typeof (f16mul (vol_var__Float32, vol_var__Float32x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Float32, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64
static void
test_f16mul_25 (void)
{
  extern typeof (f16mul (vol_var__Float32, vol_var__Float64)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Float32, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
static void
test_f16mul_26 (void)
{
  extern typeof (f16mul (vol_var__Float32, vol_var__Float64x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Float32, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32
static void
test_f16mul_27 (void)
{
  extern typeof (f16mul (vol_var__Float32, vol_var__Float128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Float32, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f16mul_28 (void)
{
  extern typeof (f16mul (vol_var__Float32, vol_var_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Float32, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f16mul_29 (void)
{
  extern typeof (f16mul (vol_var__Float32, vol_var_signed_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Float32, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f16mul_30 (void)
{
  extern typeof (f16mul (vol_var__Float32, vol_var_unsigned_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Float32, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f16mul_31 (void)
{
  extern typeof (f16mul (vol_var__Float32, vol_var_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Float32, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f16mul_32 (void)
{
  extern typeof (f16mul (vol_var__Float32, vol_var_unsigned_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Float32, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f16mul_33 (void)
{
  extern typeof (f16mul (vol_var__Float32, vol_var_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Float32, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f16mul_34 (void)
{
  extern typeof (f16mul (vol_var__Float32, vol_var_unsigned_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Float32, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f16mul_35 (void)
{
  extern typeof (f16mul (vol_var__Float32, vol_var_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Float32, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f16mul_36 (void)
{
  extern typeof (f16mul (vol_var__Float32, vol_var_unsigned_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Float32, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f16mul_37 (void)
{
  extern typeof (f16mul (vol_var__Float32, vol_var_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Float32, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f16mul_38 (void)
{
  extern typeof (f16mul (vol_var__Float32, vol_var_unsigned_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Float32, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_f16mul_39 (void)
{
  extern typeof (f16mul (vol_var__Float32, vol_var___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Float32, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_f16mul_40 (void)
{
  extern typeof (f16mul (vol_var__Float32, vol_var_unsigned___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Float32, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f16mul_41 (void)
{
  extern typeof (f16mul (vol_var__Float32, vol_var_enum_e)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Float32, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f16mul_42 (void)
{
  extern typeof (f16mul (vol_var__Float32, vol_var__Bool)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Float32, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f16mul_43 (void)
{
  extern typeof (f16mul (vol_var__Float32, vol_var_bit_field)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Float32, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
static void
test_f16mul_44 (void)
{
  extern typeof (f16mul (vol_var__Float32x, vol_var__Float16)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Float32x, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
static void
test_f16mul_45 (void)
{
  extern typeof (f16mul (vol_var__Float32x, vol_var__Float32)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Float32x, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f16mul_46 (void)
{
  extern typeof (f16mul (vol_var__Float32x, vol_var__Float32x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Float32x, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64
static void
test_f16mul_47 (void)
{
  extern typeof (f16mul (vol_var__Float32x, vol_var__Float64)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Float32x, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
static void
test_f16mul_48 (void)
{
  extern typeof (f16mul (vol_var__Float32x, vol_var__Float64x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Float32x, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
static void
test_f16mul_49 (void)
{
  extern typeof (f16mul (vol_var__Float32x, vol_var__Float128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Float32x, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f16mul_50 (void)
{
  extern typeof (f16mul (vol_var__Float32x, vol_var_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Float32x, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f16mul_51 (void)
{
  extern typeof (f16mul (vol_var__Float32x, vol_var_signed_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Float32x, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f16mul_52 (void)
{
  extern typeof (f16mul (vol_var__Float32x, vol_var_unsigned_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Float32x, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f16mul_53 (void)
{
  extern typeof (f16mul (vol_var__Float32x, vol_var_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Float32x, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f16mul_54 (void)
{
  extern typeof (f16mul (vol_var__Float32x, vol_var_unsigned_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Float32x, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f16mul_55 (void)
{
  extern typeof (f16mul (vol_var__Float32x, vol_var_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Float32x, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f16mul_56 (void)
{
  extern typeof (f16mul (vol_var__Float32x, vol_var_unsigned_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Float32x, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f16mul_57 (void)
{
  extern typeof (f16mul (vol_var__Float32x, vol_var_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Float32x, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f16mul_58 (void)
{
  extern typeof (f16mul (vol_var__Float32x, vol_var_unsigned_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Float32x, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f16mul_59 (void)
{
  extern typeof (f16mul (vol_var__Float32x, vol_var_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Float32x, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f16mul_60 (void)
{
  extern typeof (f16mul (vol_var__Float32x, vol_var_unsigned_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Float32x, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_f16mul_61 (void)
{
  extern typeof (f16mul (vol_var__Float32x, vol_var___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Float32x, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_f16mul_62 (void)
{
  extern typeof (f16mul (vol_var__Float32x, vol_var_unsigned___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Float32x, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f16mul_63 (void)
{
  extern typeof (f16mul (vol_var__Float32x, vol_var_enum_e)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Float32x, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f16mul_64 (void)
{
  extern typeof (f16mul (vol_var__Float32x, vol_var__Bool)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Float32x, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f16mul_65 (void)
{
  extern typeof (f16mul (vol_var__Float32x, vol_var_bit_field)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Float32x, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64
static void
test_f16mul_66 (void)
{
  extern typeof (f16mul (vol_var__Float64, vol_var__Float16)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Float64, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64
static void
test_f16mul_67 (void)
{
  extern typeof (f16mul (vol_var__Float64, vol_var__Float32)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Float64, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64
static void
test_f16mul_68 (void)
{
  extern typeof (f16mul (vol_var__Float64, vol_var__Float32x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Float64, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f16mul_69 (void)
{
  extern typeof (f16mul (vol_var__Float64, vol_var__Float64)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Float64, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
static void
test_f16mul_70 (void)
{
  extern typeof (f16mul (vol_var__Float64, vol_var__Float64x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Float64, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64
static void
test_f16mul_71 (void)
{
  extern typeof (f16mul (vol_var__Float64, vol_var__Float128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Float64, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f16mul_72 (void)
{
  extern typeof (f16mul (vol_var__Float64, vol_var_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Float64, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f16mul_73 (void)
{
  extern typeof (f16mul (vol_var__Float64, vol_var_signed_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Float64, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f16mul_74 (void)
{
  extern typeof (f16mul (vol_var__Float64, vol_var_unsigned_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Float64, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f16mul_75 (void)
{
  extern typeof (f16mul (vol_var__Float64, vol_var_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Float64, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f16mul_76 (void)
{
  extern typeof (f16mul (vol_var__Float64, vol_var_unsigned_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Float64, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f16mul_77 (void)
{
  extern typeof (f16mul (vol_var__Float64, vol_var_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Float64, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f16mul_78 (void)
{
  extern typeof (f16mul (vol_var__Float64, vol_var_unsigned_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Float64, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f16mul_79 (void)
{
  extern typeof (f16mul (vol_var__Float64, vol_var_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Float64, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f16mul_80 (void)
{
  extern typeof (f16mul (vol_var__Float64, vol_var_unsigned_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Float64, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f16mul_81 (void)
{
  extern typeof (f16mul (vol_var__Float64, vol_var_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Float64, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f16mul_82 (void)
{
  extern typeof (f16mul (vol_var__Float64, vol_var_unsigned_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Float64, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_f16mul_83 (void)
{
  extern typeof (f16mul (vol_var__Float64, vol_var___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Float64, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_f16mul_84 (void)
{
  extern typeof (f16mul (vol_var__Float64, vol_var_unsigned___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Float64, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f16mul_85 (void)
{
  extern typeof (f16mul (vol_var__Float64, vol_var_enum_e)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Float64, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f16mul_86 (void)
{
  extern typeof (f16mul (vol_var__Float64, vol_var__Bool)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Float64, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f16mul_87 (void)
{
  extern typeof (f16mul (vol_var__Float64, vol_var_bit_field)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Float64, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
static void
test_f16mul_88 (void)
{
  extern typeof (f16mul (vol_var__Float64x, vol_var__Float16)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Float64x, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
static void
test_f16mul_89 (void)
{
  extern typeof (f16mul (vol_var__Float64x, vol_var__Float32)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Float64x, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
static void
test_f16mul_90 (void)
{
  extern typeof (f16mul (vol_var__Float64x, vol_var__Float32x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Float64x, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
static void
test_f16mul_91 (void)
{
  extern typeof (f16mul (vol_var__Float64x, vol_var__Float64)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Float64x, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f16mul_92 (void)
{
  extern typeof (f16mul (vol_var__Float64x, vol_var__Float64x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Float64x, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
static void
test_f16mul_93 (void)
{
  extern typeof (f16mul (vol_var__Float64x, vol_var__Float128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Float64x, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f16mul_94 (void)
{
  extern typeof (f16mul (vol_var__Float64x, vol_var_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Float64x, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f16mul_95 (void)
{
  extern typeof (f16mul (vol_var__Float64x, vol_var_signed_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Float64x, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f16mul_96 (void)
{
  extern typeof (f16mul (vol_var__Float64x, vol_var_unsigned_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Float64x, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f16mul_97 (void)
{
  extern typeof (f16mul (vol_var__Float64x, vol_var_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Float64x, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f16mul_98 (void)
{
  extern typeof (f16mul (vol_var__Float64x, vol_var_unsigned_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Float64x, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f16mul_99 (void)
{
  extern typeof (f16mul (vol_var__Float64x, vol_var_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Float64x, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f16mul_100 (void)
{
  extern typeof (f16mul (vol_var__Float64x, vol_var_unsigned_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Float64x, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f16mul_101 (void)
{
  extern typeof (f16mul (vol_var__Float64x, vol_var_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Float64x, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f16mul_102 (void)
{
  extern typeof (f16mul (vol_var__Float64x, vol_var_unsigned_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Float64x, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f16mul_103 (void)
{
  extern typeof (f16mul (vol_var__Float64x, vol_var_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Float64x, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f16mul_104 (void)
{
  extern typeof (f16mul (vol_var__Float64x, vol_var_unsigned_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Float64x, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_f16mul_105 (void)
{
  extern typeof (f16mul (vol_var__Float64x, vol_var___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Float64x, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_f16mul_106 (void)
{
  extern typeof (f16mul (vol_var__Float64x, vol_var_unsigned___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Float64x, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f16mul_107 (void)
{
  extern typeof (f16mul (vol_var__Float64x, vol_var_enum_e)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Float64x, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f16mul_108 (void)
{
  extern typeof (f16mul (vol_var__Float64x, vol_var__Bool)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Float64x, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f16mul_109 (void)
{
  extern typeof (f16mul (vol_var__Float64x, vol_var_bit_field)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Float64x, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F16
static void
test_f16mul_110 (void)
{
  extern typeof (f16mul (vol_var__Float128, vol_var__Float16)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Float128, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32
static void
test_f16mul_111 (void)
{
  extern typeof (f16mul (vol_var__Float128, vol_var__Float32)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Float128, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
static void
test_f16mul_112 (void)
{
  extern typeof (f16mul (vol_var__Float128, vol_var__Float32x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Float128, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64
static void
test_f16mul_113 (void)
{
  extern typeof (f16mul (vol_var__Float128, vol_var__Float64)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Float128, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
static void
test_f16mul_114 (void)
{
  extern typeof (f16mul (vol_var__Float128, vol_var__Float64x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Float128, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f16mul_115 (void)
{
  extern typeof (f16mul (vol_var__Float128, vol_var__Float128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Float128, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f16mul_116 (void)
{
  extern typeof (f16mul (vol_var__Float128, vol_var_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Float128, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f16mul_117 (void)
{
  extern typeof (f16mul (vol_var__Float128, vol_var_signed_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Float128, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f16mul_118 (void)
{
  extern typeof (f16mul (vol_var__Float128, vol_var_unsigned_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Float128, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f16mul_119 (void)
{
  extern typeof (f16mul (vol_var__Float128, vol_var_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Float128, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f16mul_120 (void)
{
  extern typeof (f16mul (vol_var__Float128, vol_var_unsigned_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Float128, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f16mul_121 (void)
{
  extern typeof (f16mul (vol_var__Float128, vol_var_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Float128, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f16mul_122 (void)
{
  extern typeof (f16mul (vol_var__Float128, vol_var_unsigned_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Float128, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f16mul_123 (void)
{
  extern typeof (f16mul (vol_var__Float128, vol_var_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Float128, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f16mul_124 (void)
{
  extern typeof (f16mul (vol_var__Float128, vol_var_unsigned_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Float128, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f16mul_125 (void)
{
  extern typeof (f16mul (vol_var__Float128, vol_var_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Float128, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f16mul_126 (void)
{
  extern typeof (f16mul (vol_var__Float128, vol_var_unsigned_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Float128, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_f16mul_127 (void)
{
  extern typeof (f16mul (vol_var__Float128, vol_var___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Float128, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_f16mul_128 (void)
{
  extern typeof (f16mul (vol_var__Float128, vol_var_unsigned___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Float128, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f16mul_129 (void)
{
  extern typeof (f16mul (vol_var__Float128, vol_var_enum_e)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Float128, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f16mul_130 (void)
{
  extern typeof (f16mul (vol_var__Float128, vol_var__Bool)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Float128, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f16mul_131 (void)
{
  extern typeof (f16mul (vol_var__Float128, vol_var_bit_field)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Float128, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f16mul_132 (void)
{
  extern typeof (f16mul (vol_var_char, vol_var__Float16)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_char, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f16mul_133 (void)
{
  extern typeof (f16mul (vol_var_char, vol_var__Float32)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_char, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f16mul_134 (void)
{
  extern typeof (f16mul (vol_var_char, vol_var__Float32x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_char, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f16mul_135 (void)
{
  extern typeof (f16mul (vol_var_char, vol_var__Float64)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_char, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f16mul_136 (void)
{
  extern typeof (f16mul (vol_var_char, vol_var__Float64x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_char, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f16mul_137 (void)
{
  extern typeof (f16mul (vol_var_char, vol_var__Float128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_char, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_138 (void)
{
  extern typeof (f16mul (vol_var_char, vol_var_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_char, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_139 (void)
{
  extern typeof (f16mul (vol_var_char, vol_var_signed_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_char, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_140 (void)
{
  extern typeof (f16mul (vol_var_char, vol_var_unsigned_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_char, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_141 (void)
{
  extern typeof (f16mul (vol_var_char, vol_var_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_char, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_142 (void)
{
  extern typeof (f16mul (vol_var_char, vol_var_unsigned_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_char, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_143 (void)
{
  extern typeof (f16mul (vol_var_char, vol_var_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_char, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_144 (void)
{
  extern typeof (f16mul (vol_var_char, vol_var_unsigned_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_char, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_145 (void)
{
  extern typeof (f16mul (vol_var_char, vol_var_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_char, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_146 (void)
{
  extern typeof (f16mul (vol_var_char, vol_var_unsigned_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_char, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_147 (void)
{
  extern typeof (f16mul (vol_var_char, vol_var_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_char, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_148 (void)
{
  extern typeof (f16mul (vol_var_char, vol_var_unsigned_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_char, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16mul_149 (void)
{
  extern typeof (f16mul (vol_var_char, vol_var___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_char, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16mul_150 (void)
{
  extern typeof (f16mul (vol_var_char, vol_var_unsigned___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_char, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_151 (void)
{
  extern typeof (f16mul (vol_var_char, vol_var_enum_e)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_char, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_152 (void)
{
  extern typeof (f16mul (vol_var_char, vol_var__Bool)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_char, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_153 (void)
{
  extern typeof (f16mul (vol_var_char, vol_var_bit_field)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_char, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f16mul_154 (void)
{
  extern typeof (f16mul (vol_var_signed_char, vol_var__Float16)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_signed_char, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f16mul_155 (void)
{
  extern typeof (f16mul (vol_var_signed_char, vol_var__Float32)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_signed_char, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f16mul_156 (void)
{
  extern typeof (f16mul (vol_var_signed_char, vol_var__Float32x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_signed_char, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f16mul_157 (void)
{
  extern typeof (f16mul (vol_var_signed_char, vol_var__Float64)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_signed_char, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f16mul_158 (void)
{
  extern typeof (f16mul (vol_var_signed_char, vol_var__Float64x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_signed_char, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f16mul_159 (void)
{
  extern typeof (f16mul (vol_var_signed_char, vol_var__Float128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_signed_char, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_160 (void)
{
  extern typeof (f16mul (vol_var_signed_char, vol_var_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_signed_char, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_161 (void)
{
  extern typeof (f16mul (vol_var_signed_char, vol_var_signed_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_signed_char, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_162 (void)
{
  extern typeof (f16mul (vol_var_signed_char, vol_var_unsigned_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_signed_char, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_163 (void)
{
  extern typeof (f16mul (vol_var_signed_char, vol_var_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_signed_char, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_164 (void)
{
  extern typeof (f16mul (vol_var_signed_char, vol_var_unsigned_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_signed_char, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_165 (void)
{
  extern typeof (f16mul (vol_var_signed_char, vol_var_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_signed_char, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_166 (void)
{
  extern typeof (f16mul (vol_var_signed_char, vol_var_unsigned_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_signed_char, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_167 (void)
{
  extern typeof (f16mul (vol_var_signed_char, vol_var_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_signed_char, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_168 (void)
{
  extern typeof (f16mul (vol_var_signed_char, vol_var_unsigned_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_signed_char, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_169 (void)
{
  extern typeof (f16mul (vol_var_signed_char, vol_var_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_signed_char, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_170 (void)
{
  extern typeof (f16mul (vol_var_signed_char, vol_var_unsigned_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_signed_char, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16mul_171 (void)
{
  extern typeof (f16mul (vol_var_signed_char, vol_var___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_signed_char, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16mul_172 (void)
{
  extern typeof (f16mul (vol_var_signed_char, vol_var_unsigned___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_signed_char, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_173 (void)
{
  extern typeof (f16mul (vol_var_signed_char, vol_var_enum_e)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_signed_char, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_174 (void)
{
  extern typeof (f16mul (vol_var_signed_char, vol_var__Bool)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_signed_char, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_175 (void)
{
  extern typeof (f16mul (vol_var_signed_char, vol_var_bit_field)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_signed_char, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f16mul_176 (void)
{
  extern typeof (f16mul (vol_var_unsigned_char, vol_var__Float16)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_unsigned_char, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f16mul_177 (void)
{
  extern typeof (f16mul (vol_var_unsigned_char, vol_var__Float32)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_unsigned_char, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f16mul_178 (void)
{
  extern typeof (f16mul (vol_var_unsigned_char, vol_var__Float32x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_unsigned_char, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f16mul_179 (void)
{
  extern typeof (f16mul (vol_var_unsigned_char, vol_var__Float64)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_unsigned_char, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f16mul_180 (void)
{
  extern typeof (f16mul (vol_var_unsigned_char, vol_var__Float64x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_unsigned_char, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f16mul_181 (void)
{
  extern typeof (f16mul (vol_var_unsigned_char, vol_var__Float128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_unsigned_char, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_182 (void)
{
  extern typeof (f16mul (vol_var_unsigned_char, vol_var_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_unsigned_char, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_183 (void)
{
  extern typeof (f16mul (vol_var_unsigned_char, vol_var_signed_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_unsigned_char, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_184 (void)
{
  extern typeof (f16mul (vol_var_unsigned_char, vol_var_unsigned_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_unsigned_char, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_185 (void)
{
  extern typeof (f16mul (vol_var_unsigned_char, vol_var_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_unsigned_char, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_186 (void)
{
  extern typeof (f16mul (vol_var_unsigned_char, vol_var_unsigned_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_unsigned_char, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_187 (void)
{
  extern typeof (f16mul (vol_var_unsigned_char, vol_var_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_unsigned_char, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_188 (void)
{
  extern typeof (f16mul (vol_var_unsigned_char, vol_var_unsigned_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_unsigned_char, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_189 (void)
{
  extern typeof (f16mul (vol_var_unsigned_char, vol_var_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_unsigned_char, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_190 (void)
{
  extern typeof (f16mul (vol_var_unsigned_char, vol_var_unsigned_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_unsigned_char, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_191 (void)
{
  extern typeof (f16mul (vol_var_unsigned_char, vol_var_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_unsigned_char, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_192 (void)
{
  extern typeof (f16mul (vol_var_unsigned_char, vol_var_unsigned_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_unsigned_char, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16mul_193 (void)
{
  extern typeof (f16mul (vol_var_unsigned_char, vol_var___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_unsigned_char, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16mul_194 (void)
{
  extern typeof (f16mul (vol_var_unsigned_char, vol_var_unsigned___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_unsigned_char, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_195 (void)
{
  extern typeof (f16mul (vol_var_unsigned_char, vol_var_enum_e)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_unsigned_char, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_196 (void)
{
  extern typeof (f16mul (vol_var_unsigned_char, vol_var__Bool)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_unsigned_char, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_197 (void)
{
  extern typeof (f16mul (vol_var_unsigned_char, vol_var_bit_field)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_unsigned_char, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f16mul_198 (void)
{
  extern typeof (f16mul (vol_var_short_int, vol_var__Float16)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_short_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f16mul_199 (void)
{
  extern typeof (f16mul (vol_var_short_int, vol_var__Float32)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_short_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f16mul_200 (void)
{
  extern typeof (f16mul (vol_var_short_int, vol_var__Float32x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_short_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f16mul_201 (void)
{
  extern typeof (f16mul (vol_var_short_int, vol_var__Float64)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_short_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f16mul_202 (void)
{
  extern typeof (f16mul (vol_var_short_int, vol_var__Float64x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_short_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f16mul_203 (void)
{
  extern typeof (f16mul (vol_var_short_int, vol_var__Float128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_short_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_204 (void)
{
  extern typeof (f16mul (vol_var_short_int, vol_var_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_short_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_205 (void)
{
  extern typeof (f16mul (vol_var_short_int, vol_var_signed_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_short_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_206 (void)
{
  extern typeof (f16mul (vol_var_short_int, vol_var_unsigned_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_short_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_207 (void)
{
  extern typeof (f16mul (vol_var_short_int, vol_var_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_short_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_208 (void)
{
  extern typeof (f16mul (vol_var_short_int, vol_var_unsigned_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_short_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_209 (void)
{
  extern typeof (f16mul (vol_var_short_int, vol_var_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_short_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_210 (void)
{
  extern typeof (f16mul (vol_var_short_int, vol_var_unsigned_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_short_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_211 (void)
{
  extern typeof (f16mul (vol_var_short_int, vol_var_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_short_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_212 (void)
{
  extern typeof (f16mul (vol_var_short_int, vol_var_unsigned_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_short_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_213 (void)
{
  extern typeof (f16mul (vol_var_short_int, vol_var_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_short_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_214 (void)
{
  extern typeof (f16mul (vol_var_short_int, vol_var_unsigned_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_short_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16mul_215 (void)
{
  extern typeof (f16mul (vol_var_short_int, vol_var___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_short_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16mul_216 (void)
{
  extern typeof (f16mul (vol_var_short_int, vol_var_unsigned___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_short_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_217 (void)
{
  extern typeof (f16mul (vol_var_short_int, vol_var_enum_e)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_short_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_218 (void)
{
  extern typeof (f16mul (vol_var_short_int, vol_var__Bool)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_short_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_219 (void)
{
  extern typeof (f16mul (vol_var_short_int, vol_var_bit_field)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_short_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f16mul_220 (void)
{
  extern typeof (f16mul (vol_var_unsigned_short_int, vol_var__Float16)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_unsigned_short_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f16mul_221 (void)
{
  extern typeof (f16mul (vol_var_unsigned_short_int, vol_var__Float32)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_unsigned_short_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f16mul_222 (void)
{
  extern typeof (f16mul (vol_var_unsigned_short_int, vol_var__Float32x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_unsigned_short_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f16mul_223 (void)
{
  extern typeof (f16mul (vol_var_unsigned_short_int, vol_var__Float64)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_unsigned_short_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f16mul_224 (void)
{
  extern typeof (f16mul (vol_var_unsigned_short_int, vol_var__Float64x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_unsigned_short_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f16mul_225 (void)
{
  extern typeof (f16mul (vol_var_unsigned_short_int, vol_var__Float128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_unsigned_short_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_226 (void)
{
  extern typeof (f16mul (vol_var_unsigned_short_int, vol_var_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_unsigned_short_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_227 (void)
{
  extern typeof (f16mul (vol_var_unsigned_short_int, vol_var_signed_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_unsigned_short_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_228 (void)
{
  extern typeof (f16mul (vol_var_unsigned_short_int, vol_var_unsigned_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_unsigned_short_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_229 (void)
{
  extern typeof (f16mul (vol_var_unsigned_short_int, vol_var_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_unsigned_short_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_230 (void)
{
  extern typeof (f16mul (vol_var_unsigned_short_int, vol_var_unsigned_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_unsigned_short_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_231 (void)
{
  extern typeof (f16mul (vol_var_unsigned_short_int, vol_var_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_unsigned_short_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_232 (void)
{
  extern typeof (f16mul (vol_var_unsigned_short_int, vol_var_unsigned_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_unsigned_short_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_233 (void)
{
  extern typeof (f16mul (vol_var_unsigned_short_int, vol_var_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_unsigned_short_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_234 (void)
{
  extern typeof (f16mul (vol_var_unsigned_short_int, vol_var_unsigned_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_unsigned_short_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_235 (void)
{
  extern typeof (f16mul (vol_var_unsigned_short_int, vol_var_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_unsigned_short_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_236 (void)
{
  extern typeof (f16mul (vol_var_unsigned_short_int, vol_var_unsigned_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_unsigned_short_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16mul_237 (void)
{
  extern typeof (f16mul (vol_var_unsigned_short_int, vol_var___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_unsigned_short_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16mul_238 (void)
{
  extern typeof (f16mul (vol_var_unsigned_short_int, vol_var_unsigned___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_unsigned_short_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_239 (void)
{
  extern typeof (f16mul (vol_var_unsigned_short_int, vol_var_enum_e)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_unsigned_short_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_240 (void)
{
  extern typeof (f16mul (vol_var_unsigned_short_int, vol_var__Bool)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_unsigned_short_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_241 (void)
{
  extern typeof (f16mul (vol_var_unsigned_short_int, vol_var_bit_field)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_unsigned_short_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f16mul_242 (void)
{
  extern typeof (f16mul (vol_var_int, vol_var__Float16)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f16mul_243 (void)
{
  extern typeof (f16mul (vol_var_int, vol_var__Float32)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f16mul_244 (void)
{
  extern typeof (f16mul (vol_var_int, vol_var__Float32x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f16mul_245 (void)
{
  extern typeof (f16mul (vol_var_int, vol_var__Float64)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f16mul_246 (void)
{
  extern typeof (f16mul (vol_var_int, vol_var__Float64x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f16mul_247 (void)
{
  extern typeof (f16mul (vol_var_int, vol_var__Float128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_248 (void)
{
  extern typeof (f16mul (vol_var_int, vol_var_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_249 (void)
{
  extern typeof (f16mul (vol_var_int, vol_var_signed_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_250 (void)
{
  extern typeof (f16mul (vol_var_int, vol_var_unsigned_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_251 (void)
{
  extern typeof (f16mul (vol_var_int, vol_var_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_252 (void)
{
  extern typeof (f16mul (vol_var_int, vol_var_unsigned_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_253 (void)
{
  extern typeof (f16mul (vol_var_int, vol_var_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_254 (void)
{
  extern typeof (f16mul (vol_var_int, vol_var_unsigned_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_255 (void)
{
  extern typeof (f16mul (vol_var_int, vol_var_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_256 (void)
{
  extern typeof (f16mul (vol_var_int, vol_var_unsigned_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_257 (void)
{
  extern typeof (f16mul (vol_var_int, vol_var_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_258 (void)
{
  extern typeof (f16mul (vol_var_int, vol_var_unsigned_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16mul_259 (void)
{
  extern typeof (f16mul (vol_var_int, vol_var___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16mul_260 (void)
{
  extern typeof (f16mul (vol_var_int, vol_var_unsigned___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_261 (void)
{
  extern typeof (f16mul (vol_var_int, vol_var_enum_e)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_262 (void)
{
  extern typeof (f16mul (vol_var_int, vol_var__Bool)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_263 (void)
{
  extern typeof (f16mul (vol_var_int, vol_var_bit_field)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f16mul_264 (void)
{
  extern typeof (f16mul (vol_var_unsigned_int, vol_var__Float16)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_unsigned_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f16mul_265 (void)
{
  extern typeof (f16mul (vol_var_unsigned_int, vol_var__Float32)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_unsigned_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f16mul_266 (void)
{
  extern typeof (f16mul (vol_var_unsigned_int, vol_var__Float32x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_unsigned_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f16mul_267 (void)
{
  extern typeof (f16mul (vol_var_unsigned_int, vol_var__Float64)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_unsigned_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f16mul_268 (void)
{
  extern typeof (f16mul (vol_var_unsigned_int, vol_var__Float64x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_unsigned_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f16mul_269 (void)
{
  extern typeof (f16mul (vol_var_unsigned_int, vol_var__Float128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_unsigned_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_270 (void)
{
  extern typeof (f16mul (vol_var_unsigned_int, vol_var_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_unsigned_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_271 (void)
{
  extern typeof (f16mul (vol_var_unsigned_int, vol_var_signed_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_unsigned_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_272 (void)
{
  extern typeof (f16mul (vol_var_unsigned_int, vol_var_unsigned_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_unsigned_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_273 (void)
{
  extern typeof (f16mul (vol_var_unsigned_int, vol_var_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_unsigned_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_274 (void)
{
  extern typeof (f16mul (vol_var_unsigned_int, vol_var_unsigned_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_unsigned_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_275 (void)
{
  extern typeof (f16mul (vol_var_unsigned_int, vol_var_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_unsigned_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_276 (void)
{
  extern typeof (f16mul (vol_var_unsigned_int, vol_var_unsigned_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_unsigned_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_277 (void)
{
  extern typeof (f16mul (vol_var_unsigned_int, vol_var_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_unsigned_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_278 (void)
{
  extern typeof (f16mul (vol_var_unsigned_int, vol_var_unsigned_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_unsigned_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_279 (void)
{
  extern typeof (f16mul (vol_var_unsigned_int, vol_var_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_unsigned_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_280 (void)
{
  extern typeof (f16mul (vol_var_unsigned_int, vol_var_unsigned_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_unsigned_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16mul_281 (void)
{
  extern typeof (f16mul (vol_var_unsigned_int, vol_var___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_unsigned_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16mul_282 (void)
{
  extern typeof (f16mul (vol_var_unsigned_int, vol_var_unsigned___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_unsigned_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_283 (void)
{
  extern typeof (f16mul (vol_var_unsigned_int, vol_var_enum_e)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_unsigned_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_284 (void)
{
  extern typeof (f16mul (vol_var_unsigned_int, vol_var__Bool)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_unsigned_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_285 (void)
{
  extern typeof (f16mul (vol_var_unsigned_int, vol_var_bit_field)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_unsigned_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f16mul_286 (void)
{
  extern typeof (f16mul (vol_var_long_int, vol_var__Float16)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_long_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f16mul_287 (void)
{
  extern typeof (f16mul (vol_var_long_int, vol_var__Float32)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_long_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f16mul_288 (void)
{
  extern typeof (f16mul (vol_var_long_int, vol_var__Float32x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_long_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f16mul_289 (void)
{
  extern typeof (f16mul (vol_var_long_int, vol_var__Float64)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_long_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f16mul_290 (void)
{
  extern typeof (f16mul (vol_var_long_int, vol_var__Float64x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_long_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f16mul_291 (void)
{
  extern typeof (f16mul (vol_var_long_int, vol_var__Float128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_long_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_292 (void)
{
  extern typeof (f16mul (vol_var_long_int, vol_var_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_long_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_293 (void)
{
  extern typeof (f16mul (vol_var_long_int, vol_var_signed_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_long_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_294 (void)
{
  extern typeof (f16mul (vol_var_long_int, vol_var_unsigned_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_long_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_295 (void)
{
  extern typeof (f16mul (vol_var_long_int, vol_var_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_long_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_296 (void)
{
  extern typeof (f16mul (vol_var_long_int, vol_var_unsigned_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_long_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_297 (void)
{
  extern typeof (f16mul (vol_var_long_int, vol_var_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_long_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_298 (void)
{
  extern typeof (f16mul (vol_var_long_int, vol_var_unsigned_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_long_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_299 (void)
{
  extern typeof (f16mul (vol_var_long_int, vol_var_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_long_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_300 (void)
{
  extern typeof (f16mul (vol_var_long_int, vol_var_unsigned_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_long_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_301 (void)
{
  extern typeof (f16mul (vol_var_long_int, vol_var_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_long_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_302 (void)
{
  extern typeof (f16mul (vol_var_long_int, vol_var_unsigned_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_long_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16mul_303 (void)
{
  extern typeof (f16mul (vol_var_long_int, vol_var___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_long_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16mul_304 (void)
{
  extern typeof (f16mul (vol_var_long_int, vol_var_unsigned___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_long_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_305 (void)
{
  extern typeof (f16mul (vol_var_long_int, vol_var_enum_e)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_long_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_306 (void)
{
  extern typeof (f16mul (vol_var_long_int, vol_var__Bool)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_long_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_307 (void)
{
  extern typeof (f16mul (vol_var_long_int, vol_var_bit_field)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_long_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f16mul_308 (void)
{
  extern typeof (f16mul (vol_var_unsigned_long_int, vol_var__Float16)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_unsigned_long_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f16mul_309 (void)
{
  extern typeof (f16mul (vol_var_unsigned_long_int, vol_var__Float32)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_unsigned_long_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f16mul_310 (void)
{
  extern typeof (f16mul (vol_var_unsigned_long_int, vol_var__Float32x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_unsigned_long_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f16mul_311 (void)
{
  extern typeof (f16mul (vol_var_unsigned_long_int, vol_var__Float64)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_unsigned_long_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f16mul_312 (void)
{
  extern typeof (f16mul (vol_var_unsigned_long_int, vol_var__Float64x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_unsigned_long_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f16mul_313 (void)
{
  extern typeof (f16mul (vol_var_unsigned_long_int, vol_var__Float128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_unsigned_long_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_314 (void)
{
  extern typeof (f16mul (vol_var_unsigned_long_int, vol_var_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_unsigned_long_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_315 (void)
{
  extern typeof (f16mul (vol_var_unsigned_long_int, vol_var_signed_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_unsigned_long_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_316 (void)
{
  extern typeof (f16mul (vol_var_unsigned_long_int, vol_var_unsigned_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_unsigned_long_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_317 (void)
{
  extern typeof (f16mul (vol_var_unsigned_long_int, vol_var_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_unsigned_long_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_318 (void)
{
  extern typeof (f16mul (vol_var_unsigned_long_int, vol_var_unsigned_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_unsigned_long_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_319 (void)
{
  extern typeof (f16mul (vol_var_unsigned_long_int, vol_var_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_unsigned_long_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_320 (void)
{
  extern typeof (f16mul (vol_var_unsigned_long_int, vol_var_unsigned_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_unsigned_long_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_321 (void)
{
  extern typeof (f16mul (vol_var_unsigned_long_int, vol_var_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_unsigned_long_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_322 (void)
{
  extern typeof (f16mul (vol_var_unsigned_long_int, vol_var_unsigned_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_unsigned_long_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_323 (void)
{
  extern typeof (f16mul (vol_var_unsigned_long_int, vol_var_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_unsigned_long_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_324 (void)
{
  extern typeof (f16mul (vol_var_unsigned_long_int, vol_var_unsigned_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_unsigned_long_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16mul_325 (void)
{
  extern typeof (f16mul (vol_var_unsigned_long_int, vol_var___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_unsigned_long_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16mul_326 (void)
{
  extern typeof (f16mul (vol_var_unsigned_long_int, vol_var_unsigned___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_unsigned_long_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_327 (void)
{
  extern typeof (f16mul (vol_var_unsigned_long_int, vol_var_enum_e)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_unsigned_long_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_328 (void)
{
  extern typeof (f16mul (vol_var_unsigned_long_int, vol_var__Bool)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_unsigned_long_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_329 (void)
{
  extern typeof (f16mul (vol_var_unsigned_long_int, vol_var_bit_field)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_unsigned_long_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f16mul_330 (void)
{
  extern typeof (f16mul (vol_var_long_long_int, vol_var__Float16)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_long_long_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f16mul_331 (void)
{
  extern typeof (f16mul (vol_var_long_long_int, vol_var__Float32)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_long_long_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f16mul_332 (void)
{
  extern typeof (f16mul (vol_var_long_long_int, vol_var__Float32x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_long_long_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f16mul_333 (void)
{
  extern typeof (f16mul (vol_var_long_long_int, vol_var__Float64)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_long_long_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f16mul_334 (void)
{
  extern typeof (f16mul (vol_var_long_long_int, vol_var__Float64x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_long_long_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f16mul_335 (void)
{
  extern typeof (f16mul (vol_var_long_long_int, vol_var__Float128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_long_long_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_336 (void)
{
  extern typeof (f16mul (vol_var_long_long_int, vol_var_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_long_long_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_337 (void)
{
  extern typeof (f16mul (vol_var_long_long_int, vol_var_signed_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_long_long_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_338 (void)
{
  extern typeof (f16mul (vol_var_long_long_int, vol_var_unsigned_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_long_long_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_339 (void)
{
  extern typeof (f16mul (vol_var_long_long_int, vol_var_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_long_long_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_340 (void)
{
  extern typeof (f16mul (vol_var_long_long_int, vol_var_unsigned_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_long_long_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_341 (void)
{
  extern typeof (f16mul (vol_var_long_long_int, vol_var_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_long_long_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_342 (void)
{
  extern typeof (f16mul (vol_var_long_long_int, vol_var_unsigned_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_long_long_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_343 (void)
{
  extern typeof (f16mul (vol_var_long_long_int, vol_var_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_long_long_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_344 (void)
{
  extern typeof (f16mul (vol_var_long_long_int, vol_var_unsigned_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_long_long_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_345 (void)
{
  extern typeof (f16mul (vol_var_long_long_int, vol_var_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_long_long_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_346 (void)
{
  extern typeof (f16mul (vol_var_long_long_int, vol_var_unsigned_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_long_long_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16mul_347 (void)
{
  extern typeof (f16mul (vol_var_long_long_int, vol_var___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_long_long_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16mul_348 (void)
{
  extern typeof (f16mul (vol_var_long_long_int, vol_var_unsigned___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_long_long_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_349 (void)
{
  extern typeof (f16mul (vol_var_long_long_int, vol_var_enum_e)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_long_long_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_350 (void)
{
  extern typeof (f16mul (vol_var_long_long_int, vol_var__Bool)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_long_long_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_351 (void)
{
  extern typeof (f16mul (vol_var_long_long_int, vol_var_bit_field)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_long_long_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f16mul_352 (void)
{
  extern typeof (f16mul (vol_var_unsigned_long_long_int, vol_var__Float16)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_unsigned_long_long_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f16mul_353 (void)
{
  extern typeof (f16mul (vol_var_unsigned_long_long_int, vol_var__Float32)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_unsigned_long_long_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f16mul_354 (void)
{
  extern typeof (f16mul (vol_var_unsigned_long_long_int, vol_var__Float32x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_unsigned_long_long_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f16mul_355 (void)
{
  extern typeof (f16mul (vol_var_unsigned_long_long_int, vol_var__Float64)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_unsigned_long_long_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f16mul_356 (void)
{
  extern typeof (f16mul (vol_var_unsigned_long_long_int, vol_var__Float64x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_unsigned_long_long_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f16mul_357 (void)
{
  extern typeof (f16mul (vol_var_unsigned_long_long_int, vol_var__Float128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_unsigned_long_long_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_358 (void)
{
  extern typeof (f16mul (vol_var_unsigned_long_long_int, vol_var_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_unsigned_long_long_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_359 (void)
{
  extern typeof (f16mul (vol_var_unsigned_long_long_int, vol_var_signed_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_unsigned_long_long_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_360 (void)
{
  extern typeof (f16mul (vol_var_unsigned_long_long_int, vol_var_unsigned_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_unsigned_long_long_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_361 (void)
{
  extern typeof (f16mul (vol_var_unsigned_long_long_int, vol_var_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_unsigned_long_long_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_362 (void)
{
  extern typeof (f16mul (vol_var_unsigned_long_long_int, vol_var_unsigned_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_unsigned_long_long_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_363 (void)
{
  extern typeof (f16mul (vol_var_unsigned_long_long_int, vol_var_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_unsigned_long_long_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_364 (void)
{
  extern typeof (f16mul (vol_var_unsigned_long_long_int, vol_var_unsigned_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_unsigned_long_long_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_365 (void)
{
  extern typeof (f16mul (vol_var_unsigned_long_long_int, vol_var_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_unsigned_long_long_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_366 (void)
{
  extern typeof (f16mul (vol_var_unsigned_long_long_int, vol_var_unsigned_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_unsigned_long_long_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_367 (void)
{
  extern typeof (f16mul (vol_var_unsigned_long_long_int, vol_var_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_unsigned_long_long_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_368 (void)
{
  extern typeof (f16mul (vol_var_unsigned_long_long_int, vol_var_unsigned_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_unsigned_long_long_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16mul_369 (void)
{
  extern typeof (f16mul (vol_var_unsigned_long_long_int, vol_var___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_unsigned_long_long_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16mul_370 (void)
{
  extern typeof (f16mul (vol_var_unsigned_long_long_int, vol_var_unsigned___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_unsigned_long_long_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_371 (void)
{
  extern typeof (f16mul (vol_var_unsigned_long_long_int, vol_var_enum_e)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_unsigned_long_long_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_372 (void)
{
  extern typeof (f16mul (vol_var_unsigned_long_long_int, vol_var__Bool)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_unsigned_long_long_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_373 (void)
{
  extern typeof (f16mul (vol_var_unsigned_long_long_int, vol_var_bit_field)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_unsigned_long_long_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_f16mul_374 (void)
{
  extern typeof (f16mul (vol_var___int128, vol_var__Float16)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var___int128, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_f16mul_375 (void)
{
  extern typeof (f16mul (vol_var___int128, vol_var__Float32)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var___int128, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_f16mul_376 (void)
{
  extern typeof (f16mul (vol_var___int128, vol_var__Float32x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var___int128, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_f16mul_377 (void)
{
  extern typeof (f16mul (vol_var___int128, vol_var__Float64)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var___int128, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_f16mul_378 (void)
{
  extern typeof (f16mul (vol_var___int128, vol_var__Float64x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var___int128, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_f16mul_379 (void)
{
  extern typeof (f16mul (vol_var___int128, vol_var__Float128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var___int128, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16mul_380 (void)
{
  extern typeof (f16mul (vol_var___int128, vol_var_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var___int128, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16mul_381 (void)
{
  extern typeof (f16mul (vol_var___int128, vol_var_signed_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var___int128, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16mul_382 (void)
{
  extern typeof (f16mul (vol_var___int128, vol_var_unsigned_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var___int128, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16mul_383 (void)
{
  extern typeof (f16mul (vol_var___int128, vol_var_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var___int128, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16mul_384 (void)
{
  extern typeof (f16mul (vol_var___int128, vol_var_unsigned_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var___int128, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16mul_385 (void)
{
  extern typeof (f16mul (vol_var___int128, vol_var_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var___int128, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16mul_386 (void)
{
  extern typeof (f16mul (vol_var___int128, vol_var_unsigned_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var___int128, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16mul_387 (void)
{
  extern typeof (f16mul (vol_var___int128, vol_var_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var___int128, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16mul_388 (void)
{
  extern typeof (f16mul (vol_var___int128, vol_var_unsigned_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var___int128, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16mul_389 (void)
{
  extern typeof (f16mul (vol_var___int128, vol_var_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var___int128, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16mul_390 (void)
{
  extern typeof (f16mul (vol_var___int128, vol_var_unsigned_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var___int128, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16mul_391 (void)
{
  extern typeof (f16mul (vol_var___int128, vol_var___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var___int128, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16mul_392 (void)
{
  extern typeof (f16mul (vol_var___int128, vol_var_unsigned___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var___int128, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16mul_393 (void)
{
  extern typeof (f16mul (vol_var___int128, vol_var_enum_e)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var___int128, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16mul_394 (void)
{
  extern typeof (f16mul (vol_var___int128, vol_var__Bool)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var___int128, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16mul_395 (void)
{
  extern typeof (f16mul (vol_var___int128, vol_var_bit_field)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var___int128, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_f16mul_396 (void)
{
  extern typeof (f16mul (vol_var_unsigned___int128, vol_var__Float16)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_unsigned___int128, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_f16mul_397 (void)
{
  extern typeof (f16mul (vol_var_unsigned___int128, vol_var__Float32)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_unsigned___int128, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_f16mul_398 (void)
{
  extern typeof (f16mul (vol_var_unsigned___int128, vol_var__Float32x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_unsigned___int128, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_f16mul_399 (void)
{
  extern typeof (f16mul (vol_var_unsigned___int128, vol_var__Float64)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_unsigned___int128, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_f16mul_400 (void)
{
  extern typeof (f16mul (vol_var_unsigned___int128, vol_var__Float64x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_unsigned___int128, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_f16mul_401 (void)
{
  extern typeof (f16mul (vol_var_unsigned___int128, vol_var__Float128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_unsigned___int128, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16mul_402 (void)
{
  extern typeof (f16mul (vol_var_unsigned___int128, vol_var_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_unsigned___int128, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16mul_403 (void)
{
  extern typeof (f16mul (vol_var_unsigned___int128, vol_var_signed_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_unsigned___int128, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16mul_404 (void)
{
  extern typeof (f16mul (vol_var_unsigned___int128, vol_var_unsigned_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_unsigned___int128, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16mul_405 (void)
{
  extern typeof (f16mul (vol_var_unsigned___int128, vol_var_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_unsigned___int128, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16mul_406 (void)
{
  extern typeof (f16mul (vol_var_unsigned___int128, vol_var_unsigned_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_unsigned___int128, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16mul_407 (void)
{
  extern typeof (f16mul (vol_var_unsigned___int128, vol_var_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_unsigned___int128, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16mul_408 (void)
{
  extern typeof (f16mul (vol_var_unsigned___int128, vol_var_unsigned_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_unsigned___int128, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16mul_409 (void)
{
  extern typeof (f16mul (vol_var_unsigned___int128, vol_var_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_unsigned___int128, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16mul_410 (void)
{
  extern typeof (f16mul (vol_var_unsigned___int128, vol_var_unsigned_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_unsigned___int128, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16mul_411 (void)
{
  extern typeof (f16mul (vol_var_unsigned___int128, vol_var_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_unsigned___int128, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16mul_412 (void)
{
  extern typeof (f16mul (vol_var_unsigned___int128, vol_var_unsigned_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_unsigned___int128, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16mul_413 (void)
{
  extern typeof (f16mul (vol_var_unsigned___int128, vol_var___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_unsigned___int128, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16mul_414 (void)
{
  extern typeof (f16mul (vol_var_unsigned___int128, vol_var_unsigned___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_unsigned___int128, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16mul_415 (void)
{
  extern typeof (f16mul (vol_var_unsigned___int128, vol_var_enum_e)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_unsigned___int128, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16mul_416 (void)
{
  extern typeof (f16mul (vol_var_unsigned___int128, vol_var__Bool)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_unsigned___int128, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16mul_417 (void)
{
  extern typeof (f16mul (vol_var_unsigned___int128, vol_var_bit_field)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_unsigned___int128, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f16mul_418 (void)
{
  extern typeof (f16mul (vol_var_enum_e, vol_var__Float16)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_enum_e, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f16mul_419 (void)
{
  extern typeof (f16mul (vol_var_enum_e, vol_var__Float32)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_enum_e, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f16mul_420 (void)
{
  extern typeof (f16mul (vol_var_enum_e, vol_var__Float32x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_enum_e, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f16mul_421 (void)
{
  extern typeof (f16mul (vol_var_enum_e, vol_var__Float64)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_enum_e, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f16mul_422 (void)
{
  extern typeof (f16mul (vol_var_enum_e, vol_var__Float64x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_enum_e, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f16mul_423 (void)
{
  extern typeof (f16mul (vol_var_enum_e, vol_var__Float128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_enum_e, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_424 (void)
{
  extern typeof (f16mul (vol_var_enum_e, vol_var_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_enum_e, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_425 (void)
{
  extern typeof (f16mul (vol_var_enum_e, vol_var_signed_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_enum_e, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_426 (void)
{
  extern typeof (f16mul (vol_var_enum_e, vol_var_unsigned_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_enum_e, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_427 (void)
{
  extern typeof (f16mul (vol_var_enum_e, vol_var_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_enum_e, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_428 (void)
{
  extern typeof (f16mul (vol_var_enum_e, vol_var_unsigned_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_enum_e, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_429 (void)
{
  extern typeof (f16mul (vol_var_enum_e, vol_var_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_enum_e, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_430 (void)
{
  extern typeof (f16mul (vol_var_enum_e, vol_var_unsigned_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_enum_e, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_431 (void)
{
  extern typeof (f16mul (vol_var_enum_e, vol_var_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_enum_e, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_432 (void)
{
  extern typeof (f16mul (vol_var_enum_e, vol_var_unsigned_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_enum_e, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_433 (void)
{
  extern typeof (f16mul (vol_var_enum_e, vol_var_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_enum_e, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_434 (void)
{
  extern typeof (f16mul (vol_var_enum_e, vol_var_unsigned_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_enum_e, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16mul_435 (void)
{
  extern typeof (f16mul (vol_var_enum_e, vol_var___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_enum_e, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16mul_436 (void)
{
  extern typeof (f16mul (vol_var_enum_e, vol_var_unsigned___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_enum_e, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_437 (void)
{
  extern typeof (f16mul (vol_var_enum_e, vol_var_enum_e)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_enum_e, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_438 (void)
{
  extern typeof (f16mul (vol_var_enum_e, vol_var__Bool)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_enum_e, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_439 (void)
{
  extern typeof (f16mul (vol_var_enum_e, vol_var_bit_field)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_enum_e, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f16mul_440 (void)
{
  extern typeof (f16mul (vol_var__Bool, vol_var__Float16)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Bool, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f16mul_441 (void)
{
  extern typeof (f16mul (vol_var__Bool, vol_var__Float32)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Bool, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f16mul_442 (void)
{
  extern typeof (f16mul (vol_var__Bool, vol_var__Float32x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Bool, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f16mul_443 (void)
{
  extern typeof (f16mul (vol_var__Bool, vol_var__Float64)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Bool, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f16mul_444 (void)
{
  extern typeof (f16mul (vol_var__Bool, vol_var__Float64x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Bool, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f16mul_445 (void)
{
  extern typeof (f16mul (vol_var__Bool, vol_var__Float128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Bool, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_446 (void)
{
  extern typeof (f16mul (vol_var__Bool, vol_var_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Bool, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_447 (void)
{
  extern typeof (f16mul (vol_var__Bool, vol_var_signed_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Bool, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_448 (void)
{
  extern typeof (f16mul (vol_var__Bool, vol_var_unsigned_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Bool, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_449 (void)
{
  extern typeof (f16mul (vol_var__Bool, vol_var_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Bool, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_450 (void)
{
  extern typeof (f16mul (vol_var__Bool, vol_var_unsigned_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Bool, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_451 (void)
{
  extern typeof (f16mul (vol_var__Bool, vol_var_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Bool, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_452 (void)
{
  extern typeof (f16mul (vol_var__Bool, vol_var_unsigned_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Bool, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_453 (void)
{
  extern typeof (f16mul (vol_var__Bool, vol_var_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Bool, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_454 (void)
{
  extern typeof (f16mul (vol_var__Bool, vol_var_unsigned_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Bool, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_455 (void)
{
  extern typeof (f16mul (vol_var__Bool, vol_var_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Bool, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_456 (void)
{
  extern typeof (f16mul (vol_var__Bool, vol_var_unsigned_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Bool, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16mul_457 (void)
{
  extern typeof (f16mul (vol_var__Bool, vol_var___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Bool, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16mul_458 (void)
{
  extern typeof (f16mul (vol_var__Bool, vol_var_unsigned___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Bool, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_459 (void)
{
  extern typeof (f16mul (vol_var__Bool, vol_var_enum_e)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Bool, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_460 (void)
{
  extern typeof (f16mul (vol_var__Bool, vol_var__Bool)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Bool, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_461 (void)
{
  extern typeof (f16mul (vol_var__Bool, vol_var_bit_field)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var__Bool, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f16mul_462 (void)
{
  extern typeof (f16mul (vol_var_bit_field, vol_var__Float16)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_bit_field, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f16mul_463 (void)
{
  extern typeof (f16mul (vol_var_bit_field, vol_var__Float32)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_bit_field, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f16mul_464 (void)
{
  extern typeof (f16mul (vol_var_bit_field, vol_var__Float32x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_bit_field, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f16mul_465 (void)
{
  extern typeof (f16mul (vol_var_bit_field, vol_var__Float64)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_bit_field, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f16mul_466 (void)
{
  extern typeof (f16mul (vol_var_bit_field, vol_var__Float64x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_bit_field, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f16mul_467 (void)
{
  extern typeof (f16mul (vol_var_bit_field, vol_var__Float128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_bit_field, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_468 (void)
{
  extern typeof (f16mul (vol_var_bit_field, vol_var_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_bit_field, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_469 (void)
{
  extern typeof (f16mul (vol_var_bit_field, vol_var_signed_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_bit_field, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_470 (void)
{
  extern typeof (f16mul (vol_var_bit_field, vol_var_unsigned_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_bit_field, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_471 (void)
{
  extern typeof (f16mul (vol_var_bit_field, vol_var_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_bit_field, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_472 (void)
{
  extern typeof (f16mul (vol_var_bit_field, vol_var_unsigned_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_bit_field, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_473 (void)
{
  extern typeof (f16mul (vol_var_bit_field, vol_var_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_bit_field, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_474 (void)
{
  extern typeof (f16mul (vol_var_bit_field, vol_var_unsigned_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_bit_field, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_475 (void)
{
  extern typeof (f16mul (vol_var_bit_field, vol_var_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_bit_field, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_476 (void)
{
  extern typeof (f16mul (vol_var_bit_field, vol_var_unsigned_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_bit_field, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_477 (void)
{
  extern typeof (f16mul (vol_var_bit_field, vol_var_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_bit_field, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_478 (void)
{
  extern typeof (f16mul (vol_var_bit_field, vol_var_unsigned_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_bit_field, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16mul_479 (void)
{
  extern typeof (f16mul (vol_var_bit_field, vol_var___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_bit_field, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16mul_480 (void)
{
  extern typeof (f16mul (vol_var_bit_field, vol_var_unsigned___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_bit_field, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_481 (void)
{
  extern typeof (f16mul (vol_var_bit_field, vol_var_enum_e)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_bit_field, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_482 (void)
{
  extern typeof (f16mul (vol_var_bit_field, vol_var__Bool)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_bit_field, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16mul_483 (void)
{
  extern typeof (f16mul (vol_var_bit_field, vol_var_bit_field)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16mul (vol_var_bit_field, vol_var_bit_field);
}
#endif
static const struct test tests[] =
  {
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f16mul_0, "f16mul", "f16mul (_Float16, _Float16)", FLT32_MANT_DIG, FLT16_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32
    { test_f16mul_1, "f16mul", "f16mul (_Float16, _Float32)", FLT32_MANT_DIG, FLT32_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
    { test_f16mul_2, "f16mul", "f16mul (_Float16, _Float32x)", FLT32X_MANT_DIG, FLT32X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64
    { test_f16mul_3, "f16mul", "f16mul (_Float16, _Float64)", FLT64_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
    { test_f16mul_4, "f16mul", "f16mul (_Float16, _Float64x)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F16
    { test_f16mul_5, "f16mul", "f16mul (_Float16, _Float128)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f16mul_6, "f16mul", "f16mul (_Float16, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f16mul_7, "f16mul", "f16mul (_Float16, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f16mul_8, "f16mul", "f16mul (_Float16, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f16mul_9, "f16mul", "f16mul (_Float16, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f16mul_10, "f16mul", "f16mul (_Float16, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f16mul_11, "f16mul", "f16mul (_Float16, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f16mul_12, "f16mul", "f16mul (_Float16, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f16mul_13, "f16mul", "f16mul (_Float16, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f16mul_14, "f16mul", "f16mul (_Float16, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f16mul_15, "f16mul", "f16mul (_Float16, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f16mul_16, "f16mul", "f16mul (_Float16, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_f16mul_17, "f16mul", "f16mul (_Float16, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_f16mul_18, "f16mul", "f16mul (_Float16, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f16mul_19, "f16mul", "f16mul (_Float16, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f16mul_20, "f16mul", "f16mul (_Float16, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f16mul_21, "f16mul", "f16mul (_Float16, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32
    { test_f16mul_22, "f16mul", "f16mul (_Float32, _Float16)", FLT32_MANT_DIG, FLT32_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f16mul_23, "f16mul", "f16mul (_Float32, _Float32)", FLT32_MANT_DIG, FLT32_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
    { test_f16mul_24, "f16mul", "f16mul (_Float32, _Float32x)", FLT32X_MANT_DIG, FLT32X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64
    { test_f16mul_25, "f16mul", "f16mul (_Float32, _Float64)", FLT64_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
    { test_f16mul_26, "f16mul", "f16mul (_Float32, _Float64x)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32
    { test_f16mul_27, "f16mul", "f16mul (_Float32, _Float128)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f16mul_28, "f16mul", "f16mul (_Float32, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f16mul_29, "f16mul", "f16mul (_Float32, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f16mul_30, "f16mul", "f16mul (_Float32, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f16mul_31, "f16mul", "f16mul (_Float32, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f16mul_32, "f16mul", "f16mul (_Float32, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f16mul_33, "f16mul", "f16mul (_Float32, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f16mul_34, "f16mul", "f16mul (_Float32, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f16mul_35, "f16mul", "f16mul (_Float32, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f16mul_36, "f16mul", "f16mul (_Float32, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f16mul_37, "f16mul", "f16mul (_Float32, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f16mul_38, "f16mul", "f16mul (_Float32, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_f16mul_39, "f16mul", "f16mul (_Float32, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_f16mul_40, "f16mul", "f16mul (_Float32, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f16mul_41, "f16mul", "f16mul (_Float32, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f16mul_42, "f16mul", "f16mul (_Float32, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f16mul_43, "f16mul", "f16mul (_Float32, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
    { test_f16mul_44, "f16mul", "f16mul (_Float32x, _Float16)", FLT32X_MANT_DIG, FLT32X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
    { test_f16mul_45, "f16mul", "f16mul (_Float32x, _Float32)", FLT32X_MANT_DIG, FLT32X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f16mul_46, "f16mul", "f16mul (_Float32x, _Float32x)", FLT32X_MANT_DIG, FLT32X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64
    { test_f16mul_47, "f16mul", "f16mul (_Float32x, _Float64)", FLT64_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
    { test_f16mul_48, "f16mul", "f16mul (_Float32x, _Float64x)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
    { test_f16mul_49, "f16mul", "f16mul (_Float32x, _Float128)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f16mul_50, "f16mul", "f16mul (_Float32x, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f16mul_51, "f16mul", "f16mul (_Float32x, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f16mul_52, "f16mul", "f16mul (_Float32x, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f16mul_53, "f16mul", "f16mul (_Float32x, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f16mul_54, "f16mul", "f16mul (_Float32x, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f16mul_55, "f16mul", "f16mul (_Float32x, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f16mul_56, "f16mul", "f16mul (_Float32x, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f16mul_57, "f16mul", "f16mul (_Float32x, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f16mul_58, "f16mul", "f16mul (_Float32x, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f16mul_59, "f16mul", "f16mul (_Float32x, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f16mul_60, "f16mul", "f16mul (_Float32x, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_f16mul_61, "f16mul", "f16mul (_Float32x, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_f16mul_62, "f16mul", "f16mul (_Float32x, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f16mul_63, "f16mul", "f16mul (_Float32x, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f16mul_64, "f16mul", "f16mul (_Float32x, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f16mul_65, "f16mul", "f16mul (_Float32x, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64
    { test_f16mul_66, "f16mul", "f16mul (_Float64, _Float16)", FLT64_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64
    { test_f16mul_67, "f16mul", "f16mul (_Float64, _Float32)", FLT64_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64
    { test_f16mul_68, "f16mul", "f16mul (_Float64, _Float32x)", FLT64_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f16mul_69, "f16mul", "f16mul (_Float64, _Float64)", FLT64_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
    { test_f16mul_70, "f16mul", "f16mul (_Float64, _Float64x)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64
    { test_f16mul_71, "f16mul", "f16mul (_Float64, _Float128)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f16mul_72, "f16mul", "f16mul (_Float64, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f16mul_73, "f16mul", "f16mul (_Float64, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f16mul_74, "f16mul", "f16mul (_Float64, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f16mul_75, "f16mul", "f16mul (_Float64, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f16mul_76, "f16mul", "f16mul (_Float64, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f16mul_77, "f16mul", "f16mul (_Float64, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f16mul_78, "f16mul", "f16mul (_Float64, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f16mul_79, "f16mul", "f16mul (_Float64, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f16mul_80, "f16mul", "f16mul (_Float64, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f16mul_81, "f16mul", "f16mul (_Float64, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f16mul_82, "f16mul", "f16mul (_Float64, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_f16mul_83, "f16mul", "f16mul (_Float64, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_f16mul_84, "f16mul", "f16mul (_Float64, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f16mul_85, "f16mul", "f16mul (_Float64, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f16mul_86, "f16mul", "f16mul (_Float64, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f16mul_87, "f16mul", "f16mul (_Float64, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
    { test_f16mul_88, "f16mul", "f16mul (_Float64x, _Float16)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
    { test_f16mul_89, "f16mul", "f16mul (_Float64x, _Float32)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
    { test_f16mul_90, "f16mul", "f16mul (_Float64x, _Float32x)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
    { test_f16mul_91, "f16mul", "f16mul (_Float64x, _Float64)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f16mul_92, "f16mul", "f16mul (_Float64x, _Float64x)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
    { test_f16mul_93, "f16mul", "f16mul (_Float64x, _Float128)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f16mul_94, "f16mul", "f16mul (_Float64x, char)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f16mul_95, "f16mul", "f16mul (_Float64x, signed char)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f16mul_96, "f16mul", "f16mul (_Float64x, unsigned char)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f16mul_97, "f16mul", "f16mul (_Float64x, short int)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f16mul_98, "f16mul", "f16mul (_Float64x, unsigned short int)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f16mul_99, "f16mul", "f16mul (_Float64x, int)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f16mul_100, "f16mul", "f16mul (_Float64x, unsigned int)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f16mul_101, "f16mul", "f16mul (_Float64x, long int)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f16mul_102, "f16mul", "f16mul (_Float64x, unsigned long int)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f16mul_103, "f16mul", "f16mul (_Float64x, long long int)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f16mul_104, "f16mul", "f16mul (_Float64x, unsigned long long int)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_f16mul_105, "f16mul", "f16mul (_Float64x, __int128)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_f16mul_106, "f16mul", "f16mul (_Float64x, unsigned __int128)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f16mul_107, "f16mul", "f16mul (_Float64x, enum e)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f16mul_108, "f16mul", "f16mul (_Float64x, _Bool)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f16mul_109, "f16mul", "f16mul (_Float64x, bit_field)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F16
    { test_f16mul_110, "f16mul", "f16mul (_Float128, _Float16)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32
    { test_f16mul_111, "f16mul", "f16mul (_Float128, _Float32)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
    { test_f16mul_112, "f16mul", "f16mul (_Float128, _Float32x)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64
    { test_f16mul_113, "f16mul", "f16mul (_Float128, _Float64)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
    { test_f16mul_114, "f16mul", "f16mul (_Float128, _Float64x)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f16mul_115, "f16mul", "f16mul (_Float128, _Float128)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f16mul_116, "f16mul", "f16mul (_Float128, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f16mul_117, "f16mul", "f16mul (_Float128, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f16mul_118, "f16mul", "f16mul (_Float128, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f16mul_119, "f16mul", "f16mul (_Float128, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f16mul_120, "f16mul", "f16mul (_Float128, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f16mul_121, "f16mul", "f16mul (_Float128, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f16mul_122, "f16mul", "f16mul (_Float128, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f16mul_123, "f16mul", "f16mul (_Float128, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f16mul_124, "f16mul", "f16mul (_Float128, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f16mul_125, "f16mul", "f16mul (_Float128, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f16mul_126, "f16mul", "f16mul (_Float128, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_f16mul_127, "f16mul", "f16mul (_Float128, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_f16mul_128, "f16mul", "f16mul (_Float128, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f16mul_129, "f16mul", "f16mul (_Float128, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f16mul_130, "f16mul", "f16mul (_Float128, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f16mul_131, "f16mul", "f16mul (_Float128, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f16mul_132, "f16mul", "f16mul (char, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f16mul_133, "f16mul", "f16mul (char, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f16mul_134, "f16mul", "f16mul (char, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f16mul_135, "f16mul", "f16mul (char, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f16mul_136, "f16mul", "f16mul (char, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f16mul_137, "f16mul", "f16mul (char, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_138, "f16mul", "f16mul (char, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_139, "f16mul", "f16mul (char, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_140, "f16mul", "f16mul (char, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_141, "f16mul", "f16mul (char, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_142, "f16mul", "f16mul (char, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_143, "f16mul", "f16mul (char, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_144, "f16mul", "f16mul (char, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_145, "f16mul", "f16mul (char, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_146, "f16mul", "f16mul (char, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_147, "f16mul", "f16mul (char, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_148, "f16mul", "f16mul (char, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16mul_149, "f16mul", "f16mul (char, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16mul_150, "f16mul", "f16mul (char, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_151, "f16mul", "f16mul (char, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_152, "f16mul", "f16mul (char, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_153, "f16mul", "f16mul (char, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f16mul_154, "f16mul", "f16mul (signed char, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f16mul_155, "f16mul", "f16mul (signed char, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f16mul_156, "f16mul", "f16mul (signed char, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f16mul_157, "f16mul", "f16mul (signed char, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f16mul_158, "f16mul", "f16mul (signed char, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f16mul_159, "f16mul", "f16mul (signed char, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_160, "f16mul", "f16mul (signed char, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_161, "f16mul", "f16mul (signed char, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_162, "f16mul", "f16mul (signed char, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_163, "f16mul", "f16mul (signed char, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_164, "f16mul", "f16mul (signed char, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_165, "f16mul", "f16mul (signed char, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_166, "f16mul", "f16mul (signed char, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_167, "f16mul", "f16mul (signed char, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_168, "f16mul", "f16mul (signed char, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_169, "f16mul", "f16mul (signed char, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_170, "f16mul", "f16mul (signed char, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16mul_171, "f16mul", "f16mul (signed char, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16mul_172, "f16mul", "f16mul (signed char, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_173, "f16mul", "f16mul (signed char, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_174, "f16mul", "f16mul (signed char, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_175, "f16mul", "f16mul (signed char, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f16mul_176, "f16mul", "f16mul (unsigned char, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f16mul_177, "f16mul", "f16mul (unsigned char, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f16mul_178, "f16mul", "f16mul (unsigned char, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f16mul_179, "f16mul", "f16mul (unsigned char, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f16mul_180, "f16mul", "f16mul (unsigned char, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f16mul_181, "f16mul", "f16mul (unsigned char, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_182, "f16mul", "f16mul (unsigned char, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_183, "f16mul", "f16mul (unsigned char, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_184, "f16mul", "f16mul (unsigned char, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_185, "f16mul", "f16mul (unsigned char, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_186, "f16mul", "f16mul (unsigned char, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_187, "f16mul", "f16mul (unsigned char, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_188, "f16mul", "f16mul (unsigned char, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_189, "f16mul", "f16mul (unsigned char, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_190, "f16mul", "f16mul (unsigned char, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_191, "f16mul", "f16mul (unsigned char, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_192, "f16mul", "f16mul (unsigned char, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16mul_193, "f16mul", "f16mul (unsigned char, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16mul_194, "f16mul", "f16mul (unsigned char, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_195, "f16mul", "f16mul (unsigned char, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_196, "f16mul", "f16mul (unsigned char, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_197, "f16mul", "f16mul (unsigned char, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f16mul_198, "f16mul", "f16mul (short int, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f16mul_199, "f16mul", "f16mul (short int, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f16mul_200, "f16mul", "f16mul (short int, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f16mul_201, "f16mul", "f16mul (short int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f16mul_202, "f16mul", "f16mul (short int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f16mul_203, "f16mul", "f16mul (short int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_204, "f16mul", "f16mul (short int, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_205, "f16mul", "f16mul (short int, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_206, "f16mul", "f16mul (short int, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_207, "f16mul", "f16mul (short int, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_208, "f16mul", "f16mul (short int, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_209, "f16mul", "f16mul (short int, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_210, "f16mul", "f16mul (short int, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_211, "f16mul", "f16mul (short int, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_212, "f16mul", "f16mul (short int, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_213, "f16mul", "f16mul (short int, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_214, "f16mul", "f16mul (short int, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16mul_215, "f16mul", "f16mul (short int, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16mul_216, "f16mul", "f16mul (short int, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_217, "f16mul", "f16mul (short int, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_218, "f16mul", "f16mul (short int, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_219, "f16mul", "f16mul (short int, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f16mul_220, "f16mul", "f16mul (unsigned short int, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f16mul_221, "f16mul", "f16mul (unsigned short int, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f16mul_222, "f16mul", "f16mul (unsigned short int, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f16mul_223, "f16mul", "f16mul (unsigned short int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f16mul_224, "f16mul", "f16mul (unsigned short int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f16mul_225, "f16mul", "f16mul (unsigned short int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_226, "f16mul", "f16mul (unsigned short int, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_227, "f16mul", "f16mul (unsigned short int, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_228, "f16mul", "f16mul (unsigned short int, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_229, "f16mul", "f16mul (unsigned short int, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_230, "f16mul", "f16mul (unsigned short int, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_231, "f16mul", "f16mul (unsigned short int, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_232, "f16mul", "f16mul (unsigned short int, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_233, "f16mul", "f16mul (unsigned short int, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_234, "f16mul", "f16mul (unsigned short int, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_235, "f16mul", "f16mul (unsigned short int, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_236, "f16mul", "f16mul (unsigned short int, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16mul_237, "f16mul", "f16mul (unsigned short int, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16mul_238, "f16mul", "f16mul (unsigned short int, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_239, "f16mul", "f16mul (unsigned short int, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_240, "f16mul", "f16mul (unsigned short int, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_241, "f16mul", "f16mul (unsigned short int, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f16mul_242, "f16mul", "f16mul (int, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f16mul_243, "f16mul", "f16mul (int, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f16mul_244, "f16mul", "f16mul (int, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f16mul_245, "f16mul", "f16mul (int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f16mul_246, "f16mul", "f16mul (int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f16mul_247, "f16mul", "f16mul (int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_248, "f16mul", "f16mul (int, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_249, "f16mul", "f16mul (int, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_250, "f16mul", "f16mul (int, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_251, "f16mul", "f16mul (int, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_252, "f16mul", "f16mul (int, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_253, "f16mul", "f16mul (int, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_254, "f16mul", "f16mul (int, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_255, "f16mul", "f16mul (int, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_256, "f16mul", "f16mul (int, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_257, "f16mul", "f16mul (int, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_258, "f16mul", "f16mul (int, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16mul_259, "f16mul", "f16mul (int, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16mul_260, "f16mul", "f16mul (int, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_261, "f16mul", "f16mul (int, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_262, "f16mul", "f16mul (int, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_263, "f16mul", "f16mul (int, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f16mul_264, "f16mul", "f16mul (unsigned int, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f16mul_265, "f16mul", "f16mul (unsigned int, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f16mul_266, "f16mul", "f16mul (unsigned int, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f16mul_267, "f16mul", "f16mul (unsigned int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f16mul_268, "f16mul", "f16mul (unsigned int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f16mul_269, "f16mul", "f16mul (unsigned int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_270, "f16mul", "f16mul (unsigned int, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_271, "f16mul", "f16mul (unsigned int, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_272, "f16mul", "f16mul (unsigned int, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_273, "f16mul", "f16mul (unsigned int, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_274, "f16mul", "f16mul (unsigned int, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_275, "f16mul", "f16mul (unsigned int, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_276, "f16mul", "f16mul (unsigned int, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_277, "f16mul", "f16mul (unsigned int, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_278, "f16mul", "f16mul (unsigned int, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_279, "f16mul", "f16mul (unsigned int, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_280, "f16mul", "f16mul (unsigned int, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16mul_281, "f16mul", "f16mul (unsigned int, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16mul_282, "f16mul", "f16mul (unsigned int, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_283, "f16mul", "f16mul (unsigned int, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_284, "f16mul", "f16mul (unsigned int, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_285, "f16mul", "f16mul (unsigned int, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f16mul_286, "f16mul", "f16mul (long int, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f16mul_287, "f16mul", "f16mul (long int, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f16mul_288, "f16mul", "f16mul (long int, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f16mul_289, "f16mul", "f16mul (long int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f16mul_290, "f16mul", "f16mul (long int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f16mul_291, "f16mul", "f16mul (long int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_292, "f16mul", "f16mul (long int, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_293, "f16mul", "f16mul (long int, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_294, "f16mul", "f16mul (long int, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_295, "f16mul", "f16mul (long int, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_296, "f16mul", "f16mul (long int, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_297, "f16mul", "f16mul (long int, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_298, "f16mul", "f16mul (long int, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_299, "f16mul", "f16mul (long int, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_300, "f16mul", "f16mul (long int, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_301, "f16mul", "f16mul (long int, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_302, "f16mul", "f16mul (long int, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16mul_303, "f16mul", "f16mul (long int, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16mul_304, "f16mul", "f16mul (long int, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_305, "f16mul", "f16mul (long int, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_306, "f16mul", "f16mul (long int, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_307, "f16mul", "f16mul (long int, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f16mul_308, "f16mul", "f16mul (unsigned long int, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f16mul_309, "f16mul", "f16mul (unsigned long int, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f16mul_310, "f16mul", "f16mul (unsigned long int, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f16mul_311, "f16mul", "f16mul (unsigned long int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f16mul_312, "f16mul", "f16mul (unsigned long int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f16mul_313, "f16mul", "f16mul (unsigned long int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_314, "f16mul", "f16mul (unsigned long int, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_315, "f16mul", "f16mul (unsigned long int, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_316, "f16mul", "f16mul (unsigned long int, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_317, "f16mul", "f16mul (unsigned long int, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_318, "f16mul", "f16mul (unsigned long int, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_319, "f16mul", "f16mul (unsigned long int, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_320, "f16mul", "f16mul (unsigned long int, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_321, "f16mul", "f16mul (unsigned long int, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_322, "f16mul", "f16mul (unsigned long int, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_323, "f16mul", "f16mul (unsigned long int, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_324, "f16mul", "f16mul (unsigned long int, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16mul_325, "f16mul", "f16mul (unsigned long int, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16mul_326, "f16mul", "f16mul (unsigned long int, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_327, "f16mul", "f16mul (unsigned long int, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_328, "f16mul", "f16mul (unsigned long int, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_329, "f16mul", "f16mul (unsigned long int, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f16mul_330, "f16mul", "f16mul (long long int, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f16mul_331, "f16mul", "f16mul (long long int, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f16mul_332, "f16mul", "f16mul (long long int, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f16mul_333, "f16mul", "f16mul (long long int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f16mul_334, "f16mul", "f16mul (long long int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f16mul_335, "f16mul", "f16mul (long long int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_336, "f16mul", "f16mul (long long int, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_337, "f16mul", "f16mul (long long int, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_338, "f16mul", "f16mul (long long int, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_339, "f16mul", "f16mul (long long int, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_340, "f16mul", "f16mul (long long int, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_341, "f16mul", "f16mul (long long int, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_342, "f16mul", "f16mul (long long int, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_343, "f16mul", "f16mul (long long int, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_344, "f16mul", "f16mul (long long int, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_345, "f16mul", "f16mul (long long int, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_346, "f16mul", "f16mul (long long int, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16mul_347, "f16mul", "f16mul (long long int, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16mul_348, "f16mul", "f16mul (long long int, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_349, "f16mul", "f16mul (long long int, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_350, "f16mul", "f16mul (long long int, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_351, "f16mul", "f16mul (long long int, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f16mul_352, "f16mul", "f16mul (unsigned long long int, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f16mul_353, "f16mul", "f16mul (unsigned long long int, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f16mul_354, "f16mul", "f16mul (unsigned long long int, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f16mul_355, "f16mul", "f16mul (unsigned long long int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f16mul_356, "f16mul", "f16mul (unsigned long long int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f16mul_357, "f16mul", "f16mul (unsigned long long int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_358, "f16mul", "f16mul (unsigned long long int, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_359, "f16mul", "f16mul (unsigned long long int, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_360, "f16mul", "f16mul (unsigned long long int, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_361, "f16mul", "f16mul (unsigned long long int, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_362, "f16mul", "f16mul (unsigned long long int, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_363, "f16mul", "f16mul (unsigned long long int, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_364, "f16mul", "f16mul (unsigned long long int, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_365, "f16mul", "f16mul (unsigned long long int, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_366, "f16mul", "f16mul (unsigned long long int, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_367, "f16mul", "f16mul (unsigned long long int, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_368, "f16mul", "f16mul (unsigned long long int, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16mul_369, "f16mul", "f16mul (unsigned long long int, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16mul_370, "f16mul", "f16mul (unsigned long long int, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_371, "f16mul", "f16mul (unsigned long long int, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_372, "f16mul", "f16mul (unsigned long long int, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_373, "f16mul", "f16mul (unsigned long long int, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_f16mul_374, "f16mul", "f16mul (__int128, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_f16mul_375, "f16mul", "f16mul (__int128, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_f16mul_376, "f16mul", "f16mul (__int128, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_f16mul_377, "f16mul", "f16mul (__int128, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_f16mul_378, "f16mul", "f16mul (__int128, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_f16mul_379, "f16mul", "f16mul (__int128, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16mul_380, "f16mul", "f16mul (__int128, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16mul_381, "f16mul", "f16mul (__int128, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16mul_382, "f16mul", "f16mul (__int128, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16mul_383, "f16mul", "f16mul (__int128, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16mul_384, "f16mul", "f16mul (__int128, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16mul_385, "f16mul", "f16mul (__int128, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16mul_386, "f16mul", "f16mul (__int128, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16mul_387, "f16mul", "f16mul (__int128, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16mul_388, "f16mul", "f16mul (__int128, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16mul_389, "f16mul", "f16mul (__int128, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16mul_390, "f16mul", "f16mul (__int128, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16mul_391, "f16mul", "f16mul (__int128, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16mul_392, "f16mul", "f16mul (__int128, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16mul_393, "f16mul", "f16mul (__int128, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16mul_394, "f16mul", "f16mul (__int128, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16mul_395, "f16mul", "f16mul (__int128, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_f16mul_396, "f16mul", "f16mul (unsigned __int128, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_f16mul_397, "f16mul", "f16mul (unsigned __int128, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_f16mul_398, "f16mul", "f16mul (unsigned __int128, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_f16mul_399, "f16mul", "f16mul (unsigned __int128, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_f16mul_400, "f16mul", "f16mul (unsigned __int128, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_f16mul_401, "f16mul", "f16mul (unsigned __int128, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16mul_402, "f16mul", "f16mul (unsigned __int128, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16mul_403, "f16mul", "f16mul (unsigned __int128, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16mul_404, "f16mul", "f16mul (unsigned __int128, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16mul_405, "f16mul", "f16mul (unsigned __int128, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16mul_406, "f16mul", "f16mul (unsigned __int128, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16mul_407, "f16mul", "f16mul (unsigned __int128, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16mul_408, "f16mul", "f16mul (unsigned __int128, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16mul_409, "f16mul", "f16mul (unsigned __int128, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16mul_410, "f16mul", "f16mul (unsigned __int128, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16mul_411, "f16mul", "f16mul (unsigned __int128, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16mul_412, "f16mul", "f16mul (unsigned __int128, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16mul_413, "f16mul", "f16mul (unsigned __int128, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16mul_414, "f16mul", "f16mul (unsigned __int128, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16mul_415, "f16mul", "f16mul (unsigned __int128, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16mul_416, "f16mul", "f16mul (unsigned __int128, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16mul_417, "f16mul", "f16mul (unsigned __int128, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f16mul_418, "f16mul", "f16mul (enum e, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f16mul_419, "f16mul", "f16mul (enum e, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f16mul_420, "f16mul", "f16mul (enum e, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f16mul_421, "f16mul", "f16mul (enum e, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f16mul_422, "f16mul", "f16mul (enum e, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f16mul_423, "f16mul", "f16mul (enum e, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_424, "f16mul", "f16mul (enum e, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_425, "f16mul", "f16mul (enum e, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_426, "f16mul", "f16mul (enum e, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_427, "f16mul", "f16mul (enum e, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_428, "f16mul", "f16mul (enum e, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_429, "f16mul", "f16mul (enum e, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_430, "f16mul", "f16mul (enum e, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_431, "f16mul", "f16mul (enum e, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_432, "f16mul", "f16mul (enum e, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_433, "f16mul", "f16mul (enum e, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_434, "f16mul", "f16mul (enum e, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16mul_435, "f16mul", "f16mul (enum e, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16mul_436, "f16mul", "f16mul (enum e, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_437, "f16mul", "f16mul (enum e, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_438, "f16mul", "f16mul (enum e, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_439, "f16mul", "f16mul (enum e, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f16mul_440, "f16mul", "f16mul (_Bool, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f16mul_441, "f16mul", "f16mul (_Bool, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f16mul_442, "f16mul", "f16mul (_Bool, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f16mul_443, "f16mul", "f16mul (_Bool, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f16mul_444, "f16mul", "f16mul (_Bool, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f16mul_445, "f16mul", "f16mul (_Bool, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_446, "f16mul", "f16mul (_Bool, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_447, "f16mul", "f16mul (_Bool, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_448, "f16mul", "f16mul (_Bool, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_449, "f16mul", "f16mul (_Bool, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_450, "f16mul", "f16mul (_Bool, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_451, "f16mul", "f16mul (_Bool, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_452, "f16mul", "f16mul (_Bool, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_453, "f16mul", "f16mul (_Bool, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_454, "f16mul", "f16mul (_Bool, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_455, "f16mul", "f16mul (_Bool, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_456, "f16mul", "f16mul (_Bool, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16mul_457, "f16mul", "f16mul (_Bool, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16mul_458, "f16mul", "f16mul (_Bool, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_459, "f16mul", "f16mul (_Bool, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_460, "f16mul", "f16mul (_Bool, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_461, "f16mul", "f16mul (_Bool, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f16mul_462, "f16mul", "f16mul (bit_field, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f16mul_463, "f16mul", "f16mul (bit_field, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f16mul_464, "f16mul", "f16mul (bit_field, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f16mul_465, "f16mul", "f16mul (bit_field, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f16mul_466, "f16mul", "f16mul (bit_field, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f16mul_467, "f16mul", "f16mul (bit_field, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_468, "f16mul", "f16mul (bit_field, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_469, "f16mul", "f16mul (bit_field, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_470, "f16mul", "f16mul (bit_field, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_471, "f16mul", "f16mul (bit_field, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_472, "f16mul", "f16mul (bit_field, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_473, "f16mul", "f16mul (bit_field, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_474, "f16mul", "f16mul (bit_field, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_475, "f16mul", "f16mul (bit_field, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_476, "f16mul", "f16mul (bit_field, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_477, "f16mul", "f16mul (bit_field, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_478, "f16mul", "f16mul (bit_field, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16mul_479, "f16mul", "f16mul (bit_field, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16mul_480, "f16mul", "f16mul (bit_field, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_481, "f16mul", "f16mul (bit_field, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_482, "f16mul", "f16mul (bit_field, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16mul_483, "f16mul", "f16mul (bit_field, bit_field)", FLT64_MANT_DIG, 0 },
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
