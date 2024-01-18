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
(f16subf32) (_Float32 arg0 __attribute__ ((unused)), _Float32 arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT32_MANT_DIG;
  called_func_name = "f16sub";
  return 0;
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
_Float16
(f16subf32x) (_Float32x arg0 __attribute__ ((unused)), _Float32x arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT32X_MANT_DIG;
  called_func_name = "f16sub";
  return 0;
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
_Float16
(f16subf64) (_Float64 arg0 __attribute__ ((unused)), _Float64 arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT64_MANT_DIG;
  called_func_name = "f16sub";
  return 0;
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
_Float16
(f16subf64x) (_Float64x arg0 __attribute__ ((unused)), _Float64x arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT64X_MANT_DIG;
  called_func_name = "f16sub";
  return 0;
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
_Float16
(f16subf128) (_Float128 arg0 __attribute__ ((unused)), _Float128 arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT128_MANT_DIG;
  called_func_name = "f16sub";
  return 0;
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f16sub_0 (void)
{
  extern typeof (f16sub (vol_var__Float16, vol_var__Float16)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Float16, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32
static void
test_f16sub_1 (void)
{
  extern typeof (f16sub (vol_var__Float16, vol_var__Float32)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Float16, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
static void
test_f16sub_2 (void)
{
  extern typeof (f16sub (vol_var__Float16, vol_var__Float32x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Float16, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64
static void
test_f16sub_3 (void)
{
  extern typeof (f16sub (vol_var__Float16, vol_var__Float64)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Float16, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
static void
test_f16sub_4 (void)
{
  extern typeof (f16sub (vol_var__Float16, vol_var__Float64x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Float16, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F16
static void
test_f16sub_5 (void)
{
  extern typeof (f16sub (vol_var__Float16, vol_var__Float128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Float16, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f16sub_6 (void)
{
  extern typeof (f16sub (vol_var__Float16, vol_var_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Float16, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f16sub_7 (void)
{
  extern typeof (f16sub (vol_var__Float16, vol_var_signed_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Float16, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f16sub_8 (void)
{
  extern typeof (f16sub (vol_var__Float16, vol_var_unsigned_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Float16, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f16sub_9 (void)
{
  extern typeof (f16sub (vol_var__Float16, vol_var_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Float16, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f16sub_10 (void)
{
  extern typeof (f16sub (vol_var__Float16, vol_var_unsigned_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Float16, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f16sub_11 (void)
{
  extern typeof (f16sub (vol_var__Float16, vol_var_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Float16, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f16sub_12 (void)
{
  extern typeof (f16sub (vol_var__Float16, vol_var_unsigned_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Float16, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f16sub_13 (void)
{
  extern typeof (f16sub (vol_var__Float16, vol_var_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Float16, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f16sub_14 (void)
{
  extern typeof (f16sub (vol_var__Float16, vol_var_unsigned_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Float16, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f16sub_15 (void)
{
  extern typeof (f16sub (vol_var__Float16, vol_var_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Float16, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f16sub_16 (void)
{
  extern typeof (f16sub (vol_var__Float16, vol_var_unsigned_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Float16, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_f16sub_17 (void)
{
  extern typeof (f16sub (vol_var__Float16, vol_var___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Float16, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_f16sub_18 (void)
{
  extern typeof (f16sub (vol_var__Float16, vol_var_unsigned___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Float16, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f16sub_19 (void)
{
  extern typeof (f16sub (vol_var__Float16, vol_var_enum_e)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Float16, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f16sub_20 (void)
{
  extern typeof (f16sub (vol_var__Float16, vol_var__Bool)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Float16, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f16sub_21 (void)
{
  extern typeof (f16sub (vol_var__Float16, vol_var_bit_field)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Float16, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32
static void
test_f16sub_22 (void)
{
  extern typeof (f16sub (vol_var__Float32, vol_var__Float16)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Float32, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f16sub_23 (void)
{
  extern typeof (f16sub (vol_var__Float32, vol_var__Float32)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Float32, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
static void
test_f16sub_24 (void)
{
  extern typeof (f16sub (vol_var__Float32, vol_var__Float32x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Float32, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64
static void
test_f16sub_25 (void)
{
  extern typeof (f16sub (vol_var__Float32, vol_var__Float64)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Float32, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
static void
test_f16sub_26 (void)
{
  extern typeof (f16sub (vol_var__Float32, vol_var__Float64x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Float32, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32
static void
test_f16sub_27 (void)
{
  extern typeof (f16sub (vol_var__Float32, vol_var__Float128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Float32, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f16sub_28 (void)
{
  extern typeof (f16sub (vol_var__Float32, vol_var_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Float32, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f16sub_29 (void)
{
  extern typeof (f16sub (vol_var__Float32, vol_var_signed_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Float32, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f16sub_30 (void)
{
  extern typeof (f16sub (vol_var__Float32, vol_var_unsigned_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Float32, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f16sub_31 (void)
{
  extern typeof (f16sub (vol_var__Float32, vol_var_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Float32, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f16sub_32 (void)
{
  extern typeof (f16sub (vol_var__Float32, vol_var_unsigned_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Float32, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f16sub_33 (void)
{
  extern typeof (f16sub (vol_var__Float32, vol_var_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Float32, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f16sub_34 (void)
{
  extern typeof (f16sub (vol_var__Float32, vol_var_unsigned_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Float32, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f16sub_35 (void)
{
  extern typeof (f16sub (vol_var__Float32, vol_var_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Float32, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f16sub_36 (void)
{
  extern typeof (f16sub (vol_var__Float32, vol_var_unsigned_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Float32, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f16sub_37 (void)
{
  extern typeof (f16sub (vol_var__Float32, vol_var_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Float32, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f16sub_38 (void)
{
  extern typeof (f16sub (vol_var__Float32, vol_var_unsigned_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Float32, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_f16sub_39 (void)
{
  extern typeof (f16sub (vol_var__Float32, vol_var___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Float32, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_f16sub_40 (void)
{
  extern typeof (f16sub (vol_var__Float32, vol_var_unsigned___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Float32, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f16sub_41 (void)
{
  extern typeof (f16sub (vol_var__Float32, vol_var_enum_e)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Float32, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f16sub_42 (void)
{
  extern typeof (f16sub (vol_var__Float32, vol_var__Bool)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Float32, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f16sub_43 (void)
{
  extern typeof (f16sub (vol_var__Float32, vol_var_bit_field)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Float32, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
static void
test_f16sub_44 (void)
{
  extern typeof (f16sub (vol_var__Float32x, vol_var__Float16)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Float32x, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
static void
test_f16sub_45 (void)
{
  extern typeof (f16sub (vol_var__Float32x, vol_var__Float32)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Float32x, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f16sub_46 (void)
{
  extern typeof (f16sub (vol_var__Float32x, vol_var__Float32x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Float32x, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64
static void
test_f16sub_47 (void)
{
  extern typeof (f16sub (vol_var__Float32x, vol_var__Float64)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Float32x, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
static void
test_f16sub_48 (void)
{
  extern typeof (f16sub (vol_var__Float32x, vol_var__Float64x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Float32x, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
static void
test_f16sub_49 (void)
{
  extern typeof (f16sub (vol_var__Float32x, vol_var__Float128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Float32x, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f16sub_50 (void)
{
  extern typeof (f16sub (vol_var__Float32x, vol_var_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Float32x, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f16sub_51 (void)
{
  extern typeof (f16sub (vol_var__Float32x, vol_var_signed_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Float32x, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f16sub_52 (void)
{
  extern typeof (f16sub (vol_var__Float32x, vol_var_unsigned_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Float32x, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f16sub_53 (void)
{
  extern typeof (f16sub (vol_var__Float32x, vol_var_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Float32x, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f16sub_54 (void)
{
  extern typeof (f16sub (vol_var__Float32x, vol_var_unsigned_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Float32x, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f16sub_55 (void)
{
  extern typeof (f16sub (vol_var__Float32x, vol_var_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Float32x, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f16sub_56 (void)
{
  extern typeof (f16sub (vol_var__Float32x, vol_var_unsigned_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Float32x, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f16sub_57 (void)
{
  extern typeof (f16sub (vol_var__Float32x, vol_var_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Float32x, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f16sub_58 (void)
{
  extern typeof (f16sub (vol_var__Float32x, vol_var_unsigned_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Float32x, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f16sub_59 (void)
{
  extern typeof (f16sub (vol_var__Float32x, vol_var_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Float32x, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f16sub_60 (void)
{
  extern typeof (f16sub (vol_var__Float32x, vol_var_unsigned_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Float32x, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_f16sub_61 (void)
{
  extern typeof (f16sub (vol_var__Float32x, vol_var___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Float32x, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_f16sub_62 (void)
{
  extern typeof (f16sub (vol_var__Float32x, vol_var_unsigned___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Float32x, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f16sub_63 (void)
{
  extern typeof (f16sub (vol_var__Float32x, vol_var_enum_e)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Float32x, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f16sub_64 (void)
{
  extern typeof (f16sub (vol_var__Float32x, vol_var__Bool)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Float32x, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f16sub_65 (void)
{
  extern typeof (f16sub (vol_var__Float32x, vol_var_bit_field)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Float32x, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64
static void
test_f16sub_66 (void)
{
  extern typeof (f16sub (vol_var__Float64, vol_var__Float16)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Float64, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64
static void
test_f16sub_67 (void)
{
  extern typeof (f16sub (vol_var__Float64, vol_var__Float32)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Float64, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64
static void
test_f16sub_68 (void)
{
  extern typeof (f16sub (vol_var__Float64, vol_var__Float32x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Float64, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f16sub_69 (void)
{
  extern typeof (f16sub (vol_var__Float64, vol_var__Float64)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Float64, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
static void
test_f16sub_70 (void)
{
  extern typeof (f16sub (vol_var__Float64, vol_var__Float64x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Float64, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64
static void
test_f16sub_71 (void)
{
  extern typeof (f16sub (vol_var__Float64, vol_var__Float128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Float64, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f16sub_72 (void)
{
  extern typeof (f16sub (vol_var__Float64, vol_var_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Float64, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f16sub_73 (void)
{
  extern typeof (f16sub (vol_var__Float64, vol_var_signed_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Float64, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f16sub_74 (void)
{
  extern typeof (f16sub (vol_var__Float64, vol_var_unsigned_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Float64, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f16sub_75 (void)
{
  extern typeof (f16sub (vol_var__Float64, vol_var_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Float64, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f16sub_76 (void)
{
  extern typeof (f16sub (vol_var__Float64, vol_var_unsigned_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Float64, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f16sub_77 (void)
{
  extern typeof (f16sub (vol_var__Float64, vol_var_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Float64, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f16sub_78 (void)
{
  extern typeof (f16sub (vol_var__Float64, vol_var_unsigned_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Float64, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f16sub_79 (void)
{
  extern typeof (f16sub (vol_var__Float64, vol_var_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Float64, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f16sub_80 (void)
{
  extern typeof (f16sub (vol_var__Float64, vol_var_unsigned_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Float64, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f16sub_81 (void)
{
  extern typeof (f16sub (vol_var__Float64, vol_var_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Float64, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f16sub_82 (void)
{
  extern typeof (f16sub (vol_var__Float64, vol_var_unsigned_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Float64, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_f16sub_83 (void)
{
  extern typeof (f16sub (vol_var__Float64, vol_var___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Float64, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_f16sub_84 (void)
{
  extern typeof (f16sub (vol_var__Float64, vol_var_unsigned___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Float64, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f16sub_85 (void)
{
  extern typeof (f16sub (vol_var__Float64, vol_var_enum_e)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Float64, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f16sub_86 (void)
{
  extern typeof (f16sub (vol_var__Float64, vol_var__Bool)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Float64, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f16sub_87 (void)
{
  extern typeof (f16sub (vol_var__Float64, vol_var_bit_field)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Float64, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
static void
test_f16sub_88 (void)
{
  extern typeof (f16sub (vol_var__Float64x, vol_var__Float16)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Float64x, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
static void
test_f16sub_89 (void)
{
  extern typeof (f16sub (vol_var__Float64x, vol_var__Float32)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Float64x, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
static void
test_f16sub_90 (void)
{
  extern typeof (f16sub (vol_var__Float64x, vol_var__Float32x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Float64x, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
static void
test_f16sub_91 (void)
{
  extern typeof (f16sub (vol_var__Float64x, vol_var__Float64)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Float64x, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f16sub_92 (void)
{
  extern typeof (f16sub (vol_var__Float64x, vol_var__Float64x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Float64x, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
static void
test_f16sub_93 (void)
{
  extern typeof (f16sub (vol_var__Float64x, vol_var__Float128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Float64x, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f16sub_94 (void)
{
  extern typeof (f16sub (vol_var__Float64x, vol_var_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Float64x, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f16sub_95 (void)
{
  extern typeof (f16sub (vol_var__Float64x, vol_var_signed_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Float64x, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f16sub_96 (void)
{
  extern typeof (f16sub (vol_var__Float64x, vol_var_unsigned_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Float64x, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f16sub_97 (void)
{
  extern typeof (f16sub (vol_var__Float64x, vol_var_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Float64x, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f16sub_98 (void)
{
  extern typeof (f16sub (vol_var__Float64x, vol_var_unsigned_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Float64x, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f16sub_99 (void)
{
  extern typeof (f16sub (vol_var__Float64x, vol_var_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Float64x, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f16sub_100 (void)
{
  extern typeof (f16sub (vol_var__Float64x, vol_var_unsigned_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Float64x, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f16sub_101 (void)
{
  extern typeof (f16sub (vol_var__Float64x, vol_var_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Float64x, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f16sub_102 (void)
{
  extern typeof (f16sub (vol_var__Float64x, vol_var_unsigned_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Float64x, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f16sub_103 (void)
{
  extern typeof (f16sub (vol_var__Float64x, vol_var_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Float64x, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f16sub_104 (void)
{
  extern typeof (f16sub (vol_var__Float64x, vol_var_unsigned_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Float64x, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_f16sub_105 (void)
{
  extern typeof (f16sub (vol_var__Float64x, vol_var___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Float64x, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_f16sub_106 (void)
{
  extern typeof (f16sub (vol_var__Float64x, vol_var_unsigned___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Float64x, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f16sub_107 (void)
{
  extern typeof (f16sub (vol_var__Float64x, vol_var_enum_e)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Float64x, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f16sub_108 (void)
{
  extern typeof (f16sub (vol_var__Float64x, vol_var__Bool)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Float64x, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f16sub_109 (void)
{
  extern typeof (f16sub (vol_var__Float64x, vol_var_bit_field)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Float64x, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F16
static void
test_f16sub_110 (void)
{
  extern typeof (f16sub (vol_var__Float128, vol_var__Float16)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Float128, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32
static void
test_f16sub_111 (void)
{
  extern typeof (f16sub (vol_var__Float128, vol_var__Float32)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Float128, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
static void
test_f16sub_112 (void)
{
  extern typeof (f16sub (vol_var__Float128, vol_var__Float32x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Float128, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64
static void
test_f16sub_113 (void)
{
  extern typeof (f16sub (vol_var__Float128, vol_var__Float64)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Float128, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
static void
test_f16sub_114 (void)
{
  extern typeof (f16sub (vol_var__Float128, vol_var__Float64x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Float128, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f16sub_115 (void)
{
  extern typeof (f16sub (vol_var__Float128, vol_var__Float128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Float128, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f16sub_116 (void)
{
  extern typeof (f16sub (vol_var__Float128, vol_var_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Float128, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f16sub_117 (void)
{
  extern typeof (f16sub (vol_var__Float128, vol_var_signed_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Float128, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f16sub_118 (void)
{
  extern typeof (f16sub (vol_var__Float128, vol_var_unsigned_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Float128, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f16sub_119 (void)
{
  extern typeof (f16sub (vol_var__Float128, vol_var_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Float128, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f16sub_120 (void)
{
  extern typeof (f16sub (vol_var__Float128, vol_var_unsigned_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Float128, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f16sub_121 (void)
{
  extern typeof (f16sub (vol_var__Float128, vol_var_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Float128, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f16sub_122 (void)
{
  extern typeof (f16sub (vol_var__Float128, vol_var_unsigned_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Float128, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f16sub_123 (void)
{
  extern typeof (f16sub (vol_var__Float128, vol_var_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Float128, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f16sub_124 (void)
{
  extern typeof (f16sub (vol_var__Float128, vol_var_unsigned_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Float128, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f16sub_125 (void)
{
  extern typeof (f16sub (vol_var__Float128, vol_var_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Float128, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f16sub_126 (void)
{
  extern typeof (f16sub (vol_var__Float128, vol_var_unsigned_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Float128, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_f16sub_127 (void)
{
  extern typeof (f16sub (vol_var__Float128, vol_var___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Float128, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_f16sub_128 (void)
{
  extern typeof (f16sub (vol_var__Float128, vol_var_unsigned___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Float128, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f16sub_129 (void)
{
  extern typeof (f16sub (vol_var__Float128, vol_var_enum_e)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Float128, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f16sub_130 (void)
{
  extern typeof (f16sub (vol_var__Float128, vol_var__Bool)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Float128, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f16sub_131 (void)
{
  extern typeof (f16sub (vol_var__Float128, vol_var_bit_field)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Float128, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f16sub_132 (void)
{
  extern typeof (f16sub (vol_var_char, vol_var__Float16)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_char, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f16sub_133 (void)
{
  extern typeof (f16sub (vol_var_char, vol_var__Float32)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_char, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f16sub_134 (void)
{
  extern typeof (f16sub (vol_var_char, vol_var__Float32x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_char, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f16sub_135 (void)
{
  extern typeof (f16sub (vol_var_char, vol_var__Float64)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_char, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f16sub_136 (void)
{
  extern typeof (f16sub (vol_var_char, vol_var__Float64x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_char, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f16sub_137 (void)
{
  extern typeof (f16sub (vol_var_char, vol_var__Float128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_char, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_138 (void)
{
  extern typeof (f16sub (vol_var_char, vol_var_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_char, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_139 (void)
{
  extern typeof (f16sub (vol_var_char, vol_var_signed_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_char, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_140 (void)
{
  extern typeof (f16sub (vol_var_char, vol_var_unsigned_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_char, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_141 (void)
{
  extern typeof (f16sub (vol_var_char, vol_var_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_char, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_142 (void)
{
  extern typeof (f16sub (vol_var_char, vol_var_unsigned_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_char, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_143 (void)
{
  extern typeof (f16sub (vol_var_char, vol_var_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_char, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_144 (void)
{
  extern typeof (f16sub (vol_var_char, vol_var_unsigned_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_char, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_145 (void)
{
  extern typeof (f16sub (vol_var_char, vol_var_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_char, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_146 (void)
{
  extern typeof (f16sub (vol_var_char, vol_var_unsigned_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_char, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_147 (void)
{
  extern typeof (f16sub (vol_var_char, vol_var_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_char, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_148 (void)
{
  extern typeof (f16sub (vol_var_char, vol_var_unsigned_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_char, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16sub_149 (void)
{
  extern typeof (f16sub (vol_var_char, vol_var___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_char, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16sub_150 (void)
{
  extern typeof (f16sub (vol_var_char, vol_var_unsigned___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_char, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_151 (void)
{
  extern typeof (f16sub (vol_var_char, vol_var_enum_e)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_char, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_152 (void)
{
  extern typeof (f16sub (vol_var_char, vol_var__Bool)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_char, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_153 (void)
{
  extern typeof (f16sub (vol_var_char, vol_var_bit_field)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_char, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f16sub_154 (void)
{
  extern typeof (f16sub (vol_var_signed_char, vol_var__Float16)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_signed_char, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f16sub_155 (void)
{
  extern typeof (f16sub (vol_var_signed_char, vol_var__Float32)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_signed_char, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f16sub_156 (void)
{
  extern typeof (f16sub (vol_var_signed_char, vol_var__Float32x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_signed_char, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f16sub_157 (void)
{
  extern typeof (f16sub (vol_var_signed_char, vol_var__Float64)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_signed_char, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f16sub_158 (void)
{
  extern typeof (f16sub (vol_var_signed_char, vol_var__Float64x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_signed_char, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f16sub_159 (void)
{
  extern typeof (f16sub (vol_var_signed_char, vol_var__Float128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_signed_char, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_160 (void)
{
  extern typeof (f16sub (vol_var_signed_char, vol_var_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_signed_char, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_161 (void)
{
  extern typeof (f16sub (vol_var_signed_char, vol_var_signed_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_signed_char, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_162 (void)
{
  extern typeof (f16sub (vol_var_signed_char, vol_var_unsigned_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_signed_char, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_163 (void)
{
  extern typeof (f16sub (vol_var_signed_char, vol_var_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_signed_char, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_164 (void)
{
  extern typeof (f16sub (vol_var_signed_char, vol_var_unsigned_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_signed_char, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_165 (void)
{
  extern typeof (f16sub (vol_var_signed_char, vol_var_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_signed_char, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_166 (void)
{
  extern typeof (f16sub (vol_var_signed_char, vol_var_unsigned_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_signed_char, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_167 (void)
{
  extern typeof (f16sub (vol_var_signed_char, vol_var_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_signed_char, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_168 (void)
{
  extern typeof (f16sub (vol_var_signed_char, vol_var_unsigned_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_signed_char, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_169 (void)
{
  extern typeof (f16sub (vol_var_signed_char, vol_var_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_signed_char, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_170 (void)
{
  extern typeof (f16sub (vol_var_signed_char, vol_var_unsigned_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_signed_char, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16sub_171 (void)
{
  extern typeof (f16sub (vol_var_signed_char, vol_var___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_signed_char, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16sub_172 (void)
{
  extern typeof (f16sub (vol_var_signed_char, vol_var_unsigned___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_signed_char, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_173 (void)
{
  extern typeof (f16sub (vol_var_signed_char, vol_var_enum_e)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_signed_char, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_174 (void)
{
  extern typeof (f16sub (vol_var_signed_char, vol_var__Bool)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_signed_char, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_175 (void)
{
  extern typeof (f16sub (vol_var_signed_char, vol_var_bit_field)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_signed_char, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f16sub_176 (void)
{
  extern typeof (f16sub (vol_var_unsigned_char, vol_var__Float16)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_unsigned_char, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f16sub_177 (void)
{
  extern typeof (f16sub (vol_var_unsigned_char, vol_var__Float32)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_unsigned_char, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f16sub_178 (void)
{
  extern typeof (f16sub (vol_var_unsigned_char, vol_var__Float32x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_unsigned_char, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f16sub_179 (void)
{
  extern typeof (f16sub (vol_var_unsigned_char, vol_var__Float64)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_unsigned_char, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f16sub_180 (void)
{
  extern typeof (f16sub (vol_var_unsigned_char, vol_var__Float64x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_unsigned_char, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f16sub_181 (void)
{
  extern typeof (f16sub (vol_var_unsigned_char, vol_var__Float128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_unsigned_char, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_182 (void)
{
  extern typeof (f16sub (vol_var_unsigned_char, vol_var_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_unsigned_char, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_183 (void)
{
  extern typeof (f16sub (vol_var_unsigned_char, vol_var_signed_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_unsigned_char, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_184 (void)
{
  extern typeof (f16sub (vol_var_unsigned_char, vol_var_unsigned_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_unsigned_char, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_185 (void)
{
  extern typeof (f16sub (vol_var_unsigned_char, vol_var_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_unsigned_char, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_186 (void)
{
  extern typeof (f16sub (vol_var_unsigned_char, vol_var_unsigned_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_unsigned_char, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_187 (void)
{
  extern typeof (f16sub (vol_var_unsigned_char, vol_var_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_unsigned_char, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_188 (void)
{
  extern typeof (f16sub (vol_var_unsigned_char, vol_var_unsigned_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_unsigned_char, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_189 (void)
{
  extern typeof (f16sub (vol_var_unsigned_char, vol_var_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_unsigned_char, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_190 (void)
{
  extern typeof (f16sub (vol_var_unsigned_char, vol_var_unsigned_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_unsigned_char, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_191 (void)
{
  extern typeof (f16sub (vol_var_unsigned_char, vol_var_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_unsigned_char, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_192 (void)
{
  extern typeof (f16sub (vol_var_unsigned_char, vol_var_unsigned_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_unsigned_char, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16sub_193 (void)
{
  extern typeof (f16sub (vol_var_unsigned_char, vol_var___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_unsigned_char, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16sub_194 (void)
{
  extern typeof (f16sub (vol_var_unsigned_char, vol_var_unsigned___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_unsigned_char, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_195 (void)
{
  extern typeof (f16sub (vol_var_unsigned_char, vol_var_enum_e)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_unsigned_char, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_196 (void)
{
  extern typeof (f16sub (vol_var_unsigned_char, vol_var__Bool)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_unsigned_char, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_197 (void)
{
  extern typeof (f16sub (vol_var_unsigned_char, vol_var_bit_field)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_unsigned_char, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f16sub_198 (void)
{
  extern typeof (f16sub (vol_var_short_int, vol_var__Float16)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_short_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f16sub_199 (void)
{
  extern typeof (f16sub (vol_var_short_int, vol_var__Float32)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_short_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f16sub_200 (void)
{
  extern typeof (f16sub (vol_var_short_int, vol_var__Float32x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_short_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f16sub_201 (void)
{
  extern typeof (f16sub (vol_var_short_int, vol_var__Float64)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_short_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f16sub_202 (void)
{
  extern typeof (f16sub (vol_var_short_int, vol_var__Float64x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_short_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f16sub_203 (void)
{
  extern typeof (f16sub (vol_var_short_int, vol_var__Float128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_short_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_204 (void)
{
  extern typeof (f16sub (vol_var_short_int, vol_var_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_short_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_205 (void)
{
  extern typeof (f16sub (vol_var_short_int, vol_var_signed_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_short_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_206 (void)
{
  extern typeof (f16sub (vol_var_short_int, vol_var_unsigned_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_short_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_207 (void)
{
  extern typeof (f16sub (vol_var_short_int, vol_var_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_short_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_208 (void)
{
  extern typeof (f16sub (vol_var_short_int, vol_var_unsigned_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_short_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_209 (void)
{
  extern typeof (f16sub (vol_var_short_int, vol_var_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_short_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_210 (void)
{
  extern typeof (f16sub (vol_var_short_int, vol_var_unsigned_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_short_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_211 (void)
{
  extern typeof (f16sub (vol_var_short_int, vol_var_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_short_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_212 (void)
{
  extern typeof (f16sub (vol_var_short_int, vol_var_unsigned_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_short_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_213 (void)
{
  extern typeof (f16sub (vol_var_short_int, vol_var_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_short_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_214 (void)
{
  extern typeof (f16sub (vol_var_short_int, vol_var_unsigned_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_short_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16sub_215 (void)
{
  extern typeof (f16sub (vol_var_short_int, vol_var___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_short_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16sub_216 (void)
{
  extern typeof (f16sub (vol_var_short_int, vol_var_unsigned___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_short_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_217 (void)
{
  extern typeof (f16sub (vol_var_short_int, vol_var_enum_e)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_short_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_218 (void)
{
  extern typeof (f16sub (vol_var_short_int, vol_var__Bool)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_short_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_219 (void)
{
  extern typeof (f16sub (vol_var_short_int, vol_var_bit_field)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_short_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f16sub_220 (void)
{
  extern typeof (f16sub (vol_var_unsigned_short_int, vol_var__Float16)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_unsigned_short_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f16sub_221 (void)
{
  extern typeof (f16sub (vol_var_unsigned_short_int, vol_var__Float32)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_unsigned_short_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f16sub_222 (void)
{
  extern typeof (f16sub (vol_var_unsigned_short_int, vol_var__Float32x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_unsigned_short_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f16sub_223 (void)
{
  extern typeof (f16sub (vol_var_unsigned_short_int, vol_var__Float64)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_unsigned_short_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f16sub_224 (void)
{
  extern typeof (f16sub (vol_var_unsigned_short_int, vol_var__Float64x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_unsigned_short_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f16sub_225 (void)
{
  extern typeof (f16sub (vol_var_unsigned_short_int, vol_var__Float128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_unsigned_short_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_226 (void)
{
  extern typeof (f16sub (vol_var_unsigned_short_int, vol_var_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_unsigned_short_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_227 (void)
{
  extern typeof (f16sub (vol_var_unsigned_short_int, vol_var_signed_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_unsigned_short_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_228 (void)
{
  extern typeof (f16sub (vol_var_unsigned_short_int, vol_var_unsigned_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_unsigned_short_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_229 (void)
{
  extern typeof (f16sub (vol_var_unsigned_short_int, vol_var_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_unsigned_short_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_230 (void)
{
  extern typeof (f16sub (vol_var_unsigned_short_int, vol_var_unsigned_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_unsigned_short_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_231 (void)
{
  extern typeof (f16sub (vol_var_unsigned_short_int, vol_var_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_unsigned_short_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_232 (void)
{
  extern typeof (f16sub (vol_var_unsigned_short_int, vol_var_unsigned_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_unsigned_short_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_233 (void)
{
  extern typeof (f16sub (vol_var_unsigned_short_int, vol_var_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_unsigned_short_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_234 (void)
{
  extern typeof (f16sub (vol_var_unsigned_short_int, vol_var_unsigned_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_unsigned_short_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_235 (void)
{
  extern typeof (f16sub (vol_var_unsigned_short_int, vol_var_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_unsigned_short_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_236 (void)
{
  extern typeof (f16sub (vol_var_unsigned_short_int, vol_var_unsigned_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_unsigned_short_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16sub_237 (void)
{
  extern typeof (f16sub (vol_var_unsigned_short_int, vol_var___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_unsigned_short_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16sub_238 (void)
{
  extern typeof (f16sub (vol_var_unsigned_short_int, vol_var_unsigned___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_unsigned_short_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_239 (void)
{
  extern typeof (f16sub (vol_var_unsigned_short_int, vol_var_enum_e)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_unsigned_short_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_240 (void)
{
  extern typeof (f16sub (vol_var_unsigned_short_int, vol_var__Bool)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_unsigned_short_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_241 (void)
{
  extern typeof (f16sub (vol_var_unsigned_short_int, vol_var_bit_field)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_unsigned_short_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f16sub_242 (void)
{
  extern typeof (f16sub (vol_var_int, vol_var__Float16)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f16sub_243 (void)
{
  extern typeof (f16sub (vol_var_int, vol_var__Float32)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f16sub_244 (void)
{
  extern typeof (f16sub (vol_var_int, vol_var__Float32x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f16sub_245 (void)
{
  extern typeof (f16sub (vol_var_int, vol_var__Float64)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f16sub_246 (void)
{
  extern typeof (f16sub (vol_var_int, vol_var__Float64x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f16sub_247 (void)
{
  extern typeof (f16sub (vol_var_int, vol_var__Float128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_248 (void)
{
  extern typeof (f16sub (vol_var_int, vol_var_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_249 (void)
{
  extern typeof (f16sub (vol_var_int, vol_var_signed_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_250 (void)
{
  extern typeof (f16sub (vol_var_int, vol_var_unsigned_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_251 (void)
{
  extern typeof (f16sub (vol_var_int, vol_var_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_252 (void)
{
  extern typeof (f16sub (vol_var_int, vol_var_unsigned_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_253 (void)
{
  extern typeof (f16sub (vol_var_int, vol_var_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_254 (void)
{
  extern typeof (f16sub (vol_var_int, vol_var_unsigned_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_255 (void)
{
  extern typeof (f16sub (vol_var_int, vol_var_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_256 (void)
{
  extern typeof (f16sub (vol_var_int, vol_var_unsigned_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_257 (void)
{
  extern typeof (f16sub (vol_var_int, vol_var_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_258 (void)
{
  extern typeof (f16sub (vol_var_int, vol_var_unsigned_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16sub_259 (void)
{
  extern typeof (f16sub (vol_var_int, vol_var___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16sub_260 (void)
{
  extern typeof (f16sub (vol_var_int, vol_var_unsigned___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_261 (void)
{
  extern typeof (f16sub (vol_var_int, vol_var_enum_e)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_262 (void)
{
  extern typeof (f16sub (vol_var_int, vol_var__Bool)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_263 (void)
{
  extern typeof (f16sub (vol_var_int, vol_var_bit_field)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f16sub_264 (void)
{
  extern typeof (f16sub (vol_var_unsigned_int, vol_var__Float16)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_unsigned_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f16sub_265 (void)
{
  extern typeof (f16sub (vol_var_unsigned_int, vol_var__Float32)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_unsigned_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f16sub_266 (void)
{
  extern typeof (f16sub (vol_var_unsigned_int, vol_var__Float32x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_unsigned_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f16sub_267 (void)
{
  extern typeof (f16sub (vol_var_unsigned_int, vol_var__Float64)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_unsigned_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f16sub_268 (void)
{
  extern typeof (f16sub (vol_var_unsigned_int, vol_var__Float64x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_unsigned_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f16sub_269 (void)
{
  extern typeof (f16sub (vol_var_unsigned_int, vol_var__Float128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_unsigned_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_270 (void)
{
  extern typeof (f16sub (vol_var_unsigned_int, vol_var_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_unsigned_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_271 (void)
{
  extern typeof (f16sub (vol_var_unsigned_int, vol_var_signed_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_unsigned_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_272 (void)
{
  extern typeof (f16sub (vol_var_unsigned_int, vol_var_unsigned_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_unsigned_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_273 (void)
{
  extern typeof (f16sub (vol_var_unsigned_int, vol_var_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_unsigned_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_274 (void)
{
  extern typeof (f16sub (vol_var_unsigned_int, vol_var_unsigned_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_unsigned_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_275 (void)
{
  extern typeof (f16sub (vol_var_unsigned_int, vol_var_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_unsigned_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_276 (void)
{
  extern typeof (f16sub (vol_var_unsigned_int, vol_var_unsigned_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_unsigned_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_277 (void)
{
  extern typeof (f16sub (vol_var_unsigned_int, vol_var_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_unsigned_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_278 (void)
{
  extern typeof (f16sub (vol_var_unsigned_int, vol_var_unsigned_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_unsigned_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_279 (void)
{
  extern typeof (f16sub (vol_var_unsigned_int, vol_var_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_unsigned_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_280 (void)
{
  extern typeof (f16sub (vol_var_unsigned_int, vol_var_unsigned_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_unsigned_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16sub_281 (void)
{
  extern typeof (f16sub (vol_var_unsigned_int, vol_var___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_unsigned_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16sub_282 (void)
{
  extern typeof (f16sub (vol_var_unsigned_int, vol_var_unsigned___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_unsigned_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_283 (void)
{
  extern typeof (f16sub (vol_var_unsigned_int, vol_var_enum_e)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_unsigned_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_284 (void)
{
  extern typeof (f16sub (vol_var_unsigned_int, vol_var__Bool)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_unsigned_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_285 (void)
{
  extern typeof (f16sub (vol_var_unsigned_int, vol_var_bit_field)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_unsigned_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f16sub_286 (void)
{
  extern typeof (f16sub (vol_var_long_int, vol_var__Float16)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_long_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f16sub_287 (void)
{
  extern typeof (f16sub (vol_var_long_int, vol_var__Float32)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_long_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f16sub_288 (void)
{
  extern typeof (f16sub (vol_var_long_int, vol_var__Float32x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_long_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f16sub_289 (void)
{
  extern typeof (f16sub (vol_var_long_int, vol_var__Float64)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_long_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f16sub_290 (void)
{
  extern typeof (f16sub (vol_var_long_int, vol_var__Float64x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_long_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f16sub_291 (void)
{
  extern typeof (f16sub (vol_var_long_int, vol_var__Float128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_long_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_292 (void)
{
  extern typeof (f16sub (vol_var_long_int, vol_var_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_long_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_293 (void)
{
  extern typeof (f16sub (vol_var_long_int, vol_var_signed_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_long_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_294 (void)
{
  extern typeof (f16sub (vol_var_long_int, vol_var_unsigned_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_long_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_295 (void)
{
  extern typeof (f16sub (vol_var_long_int, vol_var_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_long_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_296 (void)
{
  extern typeof (f16sub (vol_var_long_int, vol_var_unsigned_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_long_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_297 (void)
{
  extern typeof (f16sub (vol_var_long_int, vol_var_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_long_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_298 (void)
{
  extern typeof (f16sub (vol_var_long_int, vol_var_unsigned_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_long_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_299 (void)
{
  extern typeof (f16sub (vol_var_long_int, vol_var_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_long_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_300 (void)
{
  extern typeof (f16sub (vol_var_long_int, vol_var_unsigned_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_long_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_301 (void)
{
  extern typeof (f16sub (vol_var_long_int, vol_var_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_long_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_302 (void)
{
  extern typeof (f16sub (vol_var_long_int, vol_var_unsigned_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_long_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16sub_303 (void)
{
  extern typeof (f16sub (vol_var_long_int, vol_var___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_long_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16sub_304 (void)
{
  extern typeof (f16sub (vol_var_long_int, vol_var_unsigned___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_long_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_305 (void)
{
  extern typeof (f16sub (vol_var_long_int, vol_var_enum_e)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_long_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_306 (void)
{
  extern typeof (f16sub (vol_var_long_int, vol_var__Bool)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_long_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_307 (void)
{
  extern typeof (f16sub (vol_var_long_int, vol_var_bit_field)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_long_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f16sub_308 (void)
{
  extern typeof (f16sub (vol_var_unsigned_long_int, vol_var__Float16)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_unsigned_long_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f16sub_309 (void)
{
  extern typeof (f16sub (vol_var_unsigned_long_int, vol_var__Float32)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_unsigned_long_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f16sub_310 (void)
{
  extern typeof (f16sub (vol_var_unsigned_long_int, vol_var__Float32x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_unsigned_long_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f16sub_311 (void)
{
  extern typeof (f16sub (vol_var_unsigned_long_int, vol_var__Float64)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_unsigned_long_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f16sub_312 (void)
{
  extern typeof (f16sub (vol_var_unsigned_long_int, vol_var__Float64x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_unsigned_long_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f16sub_313 (void)
{
  extern typeof (f16sub (vol_var_unsigned_long_int, vol_var__Float128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_unsigned_long_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_314 (void)
{
  extern typeof (f16sub (vol_var_unsigned_long_int, vol_var_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_unsigned_long_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_315 (void)
{
  extern typeof (f16sub (vol_var_unsigned_long_int, vol_var_signed_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_unsigned_long_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_316 (void)
{
  extern typeof (f16sub (vol_var_unsigned_long_int, vol_var_unsigned_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_unsigned_long_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_317 (void)
{
  extern typeof (f16sub (vol_var_unsigned_long_int, vol_var_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_unsigned_long_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_318 (void)
{
  extern typeof (f16sub (vol_var_unsigned_long_int, vol_var_unsigned_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_unsigned_long_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_319 (void)
{
  extern typeof (f16sub (vol_var_unsigned_long_int, vol_var_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_unsigned_long_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_320 (void)
{
  extern typeof (f16sub (vol_var_unsigned_long_int, vol_var_unsigned_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_unsigned_long_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_321 (void)
{
  extern typeof (f16sub (vol_var_unsigned_long_int, vol_var_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_unsigned_long_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_322 (void)
{
  extern typeof (f16sub (vol_var_unsigned_long_int, vol_var_unsigned_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_unsigned_long_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_323 (void)
{
  extern typeof (f16sub (vol_var_unsigned_long_int, vol_var_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_unsigned_long_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_324 (void)
{
  extern typeof (f16sub (vol_var_unsigned_long_int, vol_var_unsigned_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_unsigned_long_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16sub_325 (void)
{
  extern typeof (f16sub (vol_var_unsigned_long_int, vol_var___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_unsigned_long_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16sub_326 (void)
{
  extern typeof (f16sub (vol_var_unsigned_long_int, vol_var_unsigned___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_unsigned_long_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_327 (void)
{
  extern typeof (f16sub (vol_var_unsigned_long_int, vol_var_enum_e)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_unsigned_long_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_328 (void)
{
  extern typeof (f16sub (vol_var_unsigned_long_int, vol_var__Bool)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_unsigned_long_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_329 (void)
{
  extern typeof (f16sub (vol_var_unsigned_long_int, vol_var_bit_field)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_unsigned_long_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f16sub_330 (void)
{
  extern typeof (f16sub (vol_var_long_long_int, vol_var__Float16)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_long_long_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f16sub_331 (void)
{
  extern typeof (f16sub (vol_var_long_long_int, vol_var__Float32)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_long_long_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f16sub_332 (void)
{
  extern typeof (f16sub (vol_var_long_long_int, vol_var__Float32x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_long_long_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f16sub_333 (void)
{
  extern typeof (f16sub (vol_var_long_long_int, vol_var__Float64)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_long_long_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f16sub_334 (void)
{
  extern typeof (f16sub (vol_var_long_long_int, vol_var__Float64x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_long_long_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f16sub_335 (void)
{
  extern typeof (f16sub (vol_var_long_long_int, vol_var__Float128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_long_long_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_336 (void)
{
  extern typeof (f16sub (vol_var_long_long_int, vol_var_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_long_long_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_337 (void)
{
  extern typeof (f16sub (vol_var_long_long_int, vol_var_signed_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_long_long_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_338 (void)
{
  extern typeof (f16sub (vol_var_long_long_int, vol_var_unsigned_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_long_long_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_339 (void)
{
  extern typeof (f16sub (vol_var_long_long_int, vol_var_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_long_long_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_340 (void)
{
  extern typeof (f16sub (vol_var_long_long_int, vol_var_unsigned_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_long_long_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_341 (void)
{
  extern typeof (f16sub (vol_var_long_long_int, vol_var_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_long_long_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_342 (void)
{
  extern typeof (f16sub (vol_var_long_long_int, vol_var_unsigned_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_long_long_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_343 (void)
{
  extern typeof (f16sub (vol_var_long_long_int, vol_var_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_long_long_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_344 (void)
{
  extern typeof (f16sub (vol_var_long_long_int, vol_var_unsigned_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_long_long_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_345 (void)
{
  extern typeof (f16sub (vol_var_long_long_int, vol_var_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_long_long_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_346 (void)
{
  extern typeof (f16sub (vol_var_long_long_int, vol_var_unsigned_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_long_long_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16sub_347 (void)
{
  extern typeof (f16sub (vol_var_long_long_int, vol_var___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_long_long_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16sub_348 (void)
{
  extern typeof (f16sub (vol_var_long_long_int, vol_var_unsigned___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_long_long_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_349 (void)
{
  extern typeof (f16sub (vol_var_long_long_int, vol_var_enum_e)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_long_long_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_350 (void)
{
  extern typeof (f16sub (vol_var_long_long_int, vol_var__Bool)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_long_long_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_351 (void)
{
  extern typeof (f16sub (vol_var_long_long_int, vol_var_bit_field)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_long_long_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f16sub_352 (void)
{
  extern typeof (f16sub (vol_var_unsigned_long_long_int, vol_var__Float16)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_unsigned_long_long_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f16sub_353 (void)
{
  extern typeof (f16sub (vol_var_unsigned_long_long_int, vol_var__Float32)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_unsigned_long_long_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f16sub_354 (void)
{
  extern typeof (f16sub (vol_var_unsigned_long_long_int, vol_var__Float32x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_unsigned_long_long_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f16sub_355 (void)
{
  extern typeof (f16sub (vol_var_unsigned_long_long_int, vol_var__Float64)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_unsigned_long_long_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f16sub_356 (void)
{
  extern typeof (f16sub (vol_var_unsigned_long_long_int, vol_var__Float64x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_unsigned_long_long_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f16sub_357 (void)
{
  extern typeof (f16sub (vol_var_unsigned_long_long_int, vol_var__Float128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_unsigned_long_long_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_358 (void)
{
  extern typeof (f16sub (vol_var_unsigned_long_long_int, vol_var_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_unsigned_long_long_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_359 (void)
{
  extern typeof (f16sub (vol_var_unsigned_long_long_int, vol_var_signed_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_unsigned_long_long_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_360 (void)
{
  extern typeof (f16sub (vol_var_unsigned_long_long_int, vol_var_unsigned_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_unsigned_long_long_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_361 (void)
{
  extern typeof (f16sub (vol_var_unsigned_long_long_int, vol_var_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_unsigned_long_long_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_362 (void)
{
  extern typeof (f16sub (vol_var_unsigned_long_long_int, vol_var_unsigned_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_unsigned_long_long_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_363 (void)
{
  extern typeof (f16sub (vol_var_unsigned_long_long_int, vol_var_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_unsigned_long_long_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_364 (void)
{
  extern typeof (f16sub (vol_var_unsigned_long_long_int, vol_var_unsigned_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_unsigned_long_long_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_365 (void)
{
  extern typeof (f16sub (vol_var_unsigned_long_long_int, vol_var_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_unsigned_long_long_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_366 (void)
{
  extern typeof (f16sub (vol_var_unsigned_long_long_int, vol_var_unsigned_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_unsigned_long_long_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_367 (void)
{
  extern typeof (f16sub (vol_var_unsigned_long_long_int, vol_var_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_unsigned_long_long_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_368 (void)
{
  extern typeof (f16sub (vol_var_unsigned_long_long_int, vol_var_unsigned_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_unsigned_long_long_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16sub_369 (void)
{
  extern typeof (f16sub (vol_var_unsigned_long_long_int, vol_var___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_unsigned_long_long_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16sub_370 (void)
{
  extern typeof (f16sub (vol_var_unsigned_long_long_int, vol_var_unsigned___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_unsigned_long_long_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_371 (void)
{
  extern typeof (f16sub (vol_var_unsigned_long_long_int, vol_var_enum_e)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_unsigned_long_long_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_372 (void)
{
  extern typeof (f16sub (vol_var_unsigned_long_long_int, vol_var__Bool)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_unsigned_long_long_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_373 (void)
{
  extern typeof (f16sub (vol_var_unsigned_long_long_int, vol_var_bit_field)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_unsigned_long_long_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_f16sub_374 (void)
{
  extern typeof (f16sub (vol_var___int128, vol_var__Float16)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var___int128, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_f16sub_375 (void)
{
  extern typeof (f16sub (vol_var___int128, vol_var__Float32)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var___int128, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_f16sub_376 (void)
{
  extern typeof (f16sub (vol_var___int128, vol_var__Float32x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var___int128, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_f16sub_377 (void)
{
  extern typeof (f16sub (vol_var___int128, vol_var__Float64)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var___int128, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_f16sub_378 (void)
{
  extern typeof (f16sub (vol_var___int128, vol_var__Float64x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var___int128, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_f16sub_379 (void)
{
  extern typeof (f16sub (vol_var___int128, vol_var__Float128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var___int128, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16sub_380 (void)
{
  extern typeof (f16sub (vol_var___int128, vol_var_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var___int128, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16sub_381 (void)
{
  extern typeof (f16sub (vol_var___int128, vol_var_signed_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var___int128, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16sub_382 (void)
{
  extern typeof (f16sub (vol_var___int128, vol_var_unsigned_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var___int128, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16sub_383 (void)
{
  extern typeof (f16sub (vol_var___int128, vol_var_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var___int128, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16sub_384 (void)
{
  extern typeof (f16sub (vol_var___int128, vol_var_unsigned_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var___int128, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16sub_385 (void)
{
  extern typeof (f16sub (vol_var___int128, vol_var_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var___int128, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16sub_386 (void)
{
  extern typeof (f16sub (vol_var___int128, vol_var_unsigned_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var___int128, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16sub_387 (void)
{
  extern typeof (f16sub (vol_var___int128, vol_var_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var___int128, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16sub_388 (void)
{
  extern typeof (f16sub (vol_var___int128, vol_var_unsigned_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var___int128, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16sub_389 (void)
{
  extern typeof (f16sub (vol_var___int128, vol_var_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var___int128, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16sub_390 (void)
{
  extern typeof (f16sub (vol_var___int128, vol_var_unsigned_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var___int128, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16sub_391 (void)
{
  extern typeof (f16sub (vol_var___int128, vol_var___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var___int128, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16sub_392 (void)
{
  extern typeof (f16sub (vol_var___int128, vol_var_unsigned___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var___int128, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16sub_393 (void)
{
  extern typeof (f16sub (vol_var___int128, vol_var_enum_e)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var___int128, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16sub_394 (void)
{
  extern typeof (f16sub (vol_var___int128, vol_var__Bool)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var___int128, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16sub_395 (void)
{
  extern typeof (f16sub (vol_var___int128, vol_var_bit_field)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var___int128, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_f16sub_396 (void)
{
  extern typeof (f16sub (vol_var_unsigned___int128, vol_var__Float16)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_unsigned___int128, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_f16sub_397 (void)
{
  extern typeof (f16sub (vol_var_unsigned___int128, vol_var__Float32)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_unsigned___int128, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_f16sub_398 (void)
{
  extern typeof (f16sub (vol_var_unsigned___int128, vol_var__Float32x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_unsigned___int128, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_f16sub_399 (void)
{
  extern typeof (f16sub (vol_var_unsigned___int128, vol_var__Float64)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_unsigned___int128, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_f16sub_400 (void)
{
  extern typeof (f16sub (vol_var_unsigned___int128, vol_var__Float64x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_unsigned___int128, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_f16sub_401 (void)
{
  extern typeof (f16sub (vol_var_unsigned___int128, vol_var__Float128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_unsigned___int128, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16sub_402 (void)
{
  extern typeof (f16sub (vol_var_unsigned___int128, vol_var_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_unsigned___int128, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16sub_403 (void)
{
  extern typeof (f16sub (vol_var_unsigned___int128, vol_var_signed_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_unsigned___int128, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16sub_404 (void)
{
  extern typeof (f16sub (vol_var_unsigned___int128, vol_var_unsigned_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_unsigned___int128, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16sub_405 (void)
{
  extern typeof (f16sub (vol_var_unsigned___int128, vol_var_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_unsigned___int128, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16sub_406 (void)
{
  extern typeof (f16sub (vol_var_unsigned___int128, vol_var_unsigned_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_unsigned___int128, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16sub_407 (void)
{
  extern typeof (f16sub (vol_var_unsigned___int128, vol_var_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_unsigned___int128, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16sub_408 (void)
{
  extern typeof (f16sub (vol_var_unsigned___int128, vol_var_unsigned_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_unsigned___int128, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16sub_409 (void)
{
  extern typeof (f16sub (vol_var_unsigned___int128, vol_var_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_unsigned___int128, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16sub_410 (void)
{
  extern typeof (f16sub (vol_var_unsigned___int128, vol_var_unsigned_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_unsigned___int128, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16sub_411 (void)
{
  extern typeof (f16sub (vol_var_unsigned___int128, vol_var_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_unsigned___int128, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16sub_412 (void)
{
  extern typeof (f16sub (vol_var_unsigned___int128, vol_var_unsigned_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_unsigned___int128, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16sub_413 (void)
{
  extern typeof (f16sub (vol_var_unsigned___int128, vol_var___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_unsigned___int128, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16sub_414 (void)
{
  extern typeof (f16sub (vol_var_unsigned___int128, vol_var_unsigned___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_unsigned___int128, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16sub_415 (void)
{
  extern typeof (f16sub (vol_var_unsigned___int128, vol_var_enum_e)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_unsigned___int128, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16sub_416 (void)
{
  extern typeof (f16sub (vol_var_unsigned___int128, vol_var__Bool)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_unsigned___int128, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16sub_417 (void)
{
  extern typeof (f16sub (vol_var_unsigned___int128, vol_var_bit_field)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_unsigned___int128, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f16sub_418 (void)
{
  extern typeof (f16sub (vol_var_enum_e, vol_var__Float16)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_enum_e, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f16sub_419 (void)
{
  extern typeof (f16sub (vol_var_enum_e, vol_var__Float32)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_enum_e, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f16sub_420 (void)
{
  extern typeof (f16sub (vol_var_enum_e, vol_var__Float32x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_enum_e, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f16sub_421 (void)
{
  extern typeof (f16sub (vol_var_enum_e, vol_var__Float64)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_enum_e, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f16sub_422 (void)
{
  extern typeof (f16sub (vol_var_enum_e, vol_var__Float64x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_enum_e, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f16sub_423 (void)
{
  extern typeof (f16sub (vol_var_enum_e, vol_var__Float128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_enum_e, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_424 (void)
{
  extern typeof (f16sub (vol_var_enum_e, vol_var_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_enum_e, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_425 (void)
{
  extern typeof (f16sub (vol_var_enum_e, vol_var_signed_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_enum_e, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_426 (void)
{
  extern typeof (f16sub (vol_var_enum_e, vol_var_unsigned_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_enum_e, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_427 (void)
{
  extern typeof (f16sub (vol_var_enum_e, vol_var_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_enum_e, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_428 (void)
{
  extern typeof (f16sub (vol_var_enum_e, vol_var_unsigned_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_enum_e, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_429 (void)
{
  extern typeof (f16sub (vol_var_enum_e, vol_var_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_enum_e, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_430 (void)
{
  extern typeof (f16sub (vol_var_enum_e, vol_var_unsigned_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_enum_e, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_431 (void)
{
  extern typeof (f16sub (vol_var_enum_e, vol_var_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_enum_e, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_432 (void)
{
  extern typeof (f16sub (vol_var_enum_e, vol_var_unsigned_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_enum_e, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_433 (void)
{
  extern typeof (f16sub (vol_var_enum_e, vol_var_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_enum_e, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_434 (void)
{
  extern typeof (f16sub (vol_var_enum_e, vol_var_unsigned_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_enum_e, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16sub_435 (void)
{
  extern typeof (f16sub (vol_var_enum_e, vol_var___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_enum_e, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16sub_436 (void)
{
  extern typeof (f16sub (vol_var_enum_e, vol_var_unsigned___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_enum_e, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_437 (void)
{
  extern typeof (f16sub (vol_var_enum_e, vol_var_enum_e)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_enum_e, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_438 (void)
{
  extern typeof (f16sub (vol_var_enum_e, vol_var__Bool)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_enum_e, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_439 (void)
{
  extern typeof (f16sub (vol_var_enum_e, vol_var_bit_field)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_enum_e, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f16sub_440 (void)
{
  extern typeof (f16sub (vol_var__Bool, vol_var__Float16)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Bool, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f16sub_441 (void)
{
  extern typeof (f16sub (vol_var__Bool, vol_var__Float32)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Bool, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f16sub_442 (void)
{
  extern typeof (f16sub (vol_var__Bool, vol_var__Float32x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Bool, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f16sub_443 (void)
{
  extern typeof (f16sub (vol_var__Bool, vol_var__Float64)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Bool, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f16sub_444 (void)
{
  extern typeof (f16sub (vol_var__Bool, vol_var__Float64x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Bool, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f16sub_445 (void)
{
  extern typeof (f16sub (vol_var__Bool, vol_var__Float128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Bool, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_446 (void)
{
  extern typeof (f16sub (vol_var__Bool, vol_var_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Bool, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_447 (void)
{
  extern typeof (f16sub (vol_var__Bool, vol_var_signed_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Bool, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_448 (void)
{
  extern typeof (f16sub (vol_var__Bool, vol_var_unsigned_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Bool, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_449 (void)
{
  extern typeof (f16sub (vol_var__Bool, vol_var_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Bool, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_450 (void)
{
  extern typeof (f16sub (vol_var__Bool, vol_var_unsigned_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Bool, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_451 (void)
{
  extern typeof (f16sub (vol_var__Bool, vol_var_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Bool, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_452 (void)
{
  extern typeof (f16sub (vol_var__Bool, vol_var_unsigned_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Bool, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_453 (void)
{
  extern typeof (f16sub (vol_var__Bool, vol_var_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Bool, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_454 (void)
{
  extern typeof (f16sub (vol_var__Bool, vol_var_unsigned_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Bool, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_455 (void)
{
  extern typeof (f16sub (vol_var__Bool, vol_var_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Bool, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_456 (void)
{
  extern typeof (f16sub (vol_var__Bool, vol_var_unsigned_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Bool, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16sub_457 (void)
{
  extern typeof (f16sub (vol_var__Bool, vol_var___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Bool, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16sub_458 (void)
{
  extern typeof (f16sub (vol_var__Bool, vol_var_unsigned___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Bool, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_459 (void)
{
  extern typeof (f16sub (vol_var__Bool, vol_var_enum_e)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Bool, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_460 (void)
{
  extern typeof (f16sub (vol_var__Bool, vol_var__Bool)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Bool, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_461 (void)
{
  extern typeof (f16sub (vol_var__Bool, vol_var_bit_field)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var__Bool, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f16sub_462 (void)
{
  extern typeof (f16sub (vol_var_bit_field, vol_var__Float16)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_bit_field, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f16sub_463 (void)
{
  extern typeof (f16sub (vol_var_bit_field, vol_var__Float32)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_bit_field, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f16sub_464 (void)
{
  extern typeof (f16sub (vol_var_bit_field, vol_var__Float32x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_bit_field, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f16sub_465 (void)
{
  extern typeof (f16sub (vol_var_bit_field, vol_var__Float64)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_bit_field, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f16sub_466 (void)
{
  extern typeof (f16sub (vol_var_bit_field, vol_var__Float64x)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_bit_field, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f16sub_467 (void)
{
  extern typeof (f16sub (vol_var_bit_field, vol_var__Float128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_bit_field, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_468 (void)
{
  extern typeof (f16sub (vol_var_bit_field, vol_var_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_bit_field, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_469 (void)
{
  extern typeof (f16sub (vol_var_bit_field, vol_var_signed_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_bit_field, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_470 (void)
{
  extern typeof (f16sub (vol_var_bit_field, vol_var_unsigned_char)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_bit_field, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_471 (void)
{
  extern typeof (f16sub (vol_var_bit_field, vol_var_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_bit_field, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_472 (void)
{
  extern typeof (f16sub (vol_var_bit_field, vol_var_unsigned_short_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_bit_field, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_473 (void)
{
  extern typeof (f16sub (vol_var_bit_field, vol_var_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_bit_field, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_474 (void)
{
  extern typeof (f16sub (vol_var_bit_field, vol_var_unsigned_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_bit_field, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_475 (void)
{
  extern typeof (f16sub (vol_var_bit_field, vol_var_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_bit_field, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_476 (void)
{
  extern typeof (f16sub (vol_var_bit_field, vol_var_unsigned_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_bit_field, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_477 (void)
{
  extern typeof (f16sub (vol_var_bit_field, vol_var_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_bit_field, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_478 (void)
{
  extern typeof (f16sub (vol_var_bit_field, vol_var_unsigned_long_long_int)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_bit_field, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16sub_479 (void)
{
  extern typeof (f16sub (vol_var_bit_field, vol_var___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_bit_field, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f16sub_480 (void)
{
  extern typeof (f16sub (vol_var_bit_field, vol_var_unsigned___int128)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_bit_field, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_481 (void)
{
  extern typeof (f16sub (vol_var_bit_field, vol_var_enum_e)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_bit_field, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_482 (void)
{
  extern typeof (f16sub (vol_var_bit_field, vol_var__Bool)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_bit_field, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f16sub_483 (void)
{
  extern typeof (f16sub (vol_var_bit_field, vol_var_bit_field)) var__Float16 __attribute__ ((unused));
  vol_var__Float16 = f16sub (vol_var_bit_field, vol_var_bit_field);
}
#endif
static const struct test tests[] =
  {
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f16sub_0, "f16sub", "f16sub (_Float16, _Float16)", FLT32_MANT_DIG, FLT16_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32
    { test_f16sub_1, "f16sub", "f16sub (_Float16, _Float32)", FLT32_MANT_DIG, FLT32_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
    { test_f16sub_2, "f16sub", "f16sub (_Float16, _Float32x)", FLT32X_MANT_DIG, FLT32X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64
    { test_f16sub_3, "f16sub", "f16sub (_Float16, _Float64)", FLT64_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
    { test_f16sub_4, "f16sub", "f16sub (_Float16, _Float64x)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F16
    { test_f16sub_5, "f16sub", "f16sub (_Float16, _Float128)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f16sub_6, "f16sub", "f16sub (_Float16, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f16sub_7, "f16sub", "f16sub (_Float16, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f16sub_8, "f16sub", "f16sub (_Float16, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f16sub_9, "f16sub", "f16sub (_Float16, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f16sub_10, "f16sub", "f16sub (_Float16, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f16sub_11, "f16sub", "f16sub (_Float16, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f16sub_12, "f16sub", "f16sub (_Float16, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f16sub_13, "f16sub", "f16sub (_Float16, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f16sub_14, "f16sub", "f16sub (_Float16, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f16sub_15, "f16sub", "f16sub (_Float16, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f16sub_16, "f16sub", "f16sub (_Float16, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_f16sub_17, "f16sub", "f16sub (_Float16, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_f16sub_18, "f16sub", "f16sub (_Float16, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f16sub_19, "f16sub", "f16sub (_Float16, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f16sub_20, "f16sub", "f16sub (_Float16, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f16sub_21, "f16sub", "f16sub (_Float16, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32
    { test_f16sub_22, "f16sub", "f16sub (_Float32, _Float16)", FLT32_MANT_DIG, FLT32_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f16sub_23, "f16sub", "f16sub (_Float32, _Float32)", FLT32_MANT_DIG, FLT32_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
    { test_f16sub_24, "f16sub", "f16sub (_Float32, _Float32x)", FLT32X_MANT_DIG, FLT32X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64
    { test_f16sub_25, "f16sub", "f16sub (_Float32, _Float64)", FLT64_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
    { test_f16sub_26, "f16sub", "f16sub (_Float32, _Float64x)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32
    { test_f16sub_27, "f16sub", "f16sub (_Float32, _Float128)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f16sub_28, "f16sub", "f16sub (_Float32, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f16sub_29, "f16sub", "f16sub (_Float32, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f16sub_30, "f16sub", "f16sub (_Float32, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f16sub_31, "f16sub", "f16sub (_Float32, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f16sub_32, "f16sub", "f16sub (_Float32, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f16sub_33, "f16sub", "f16sub (_Float32, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f16sub_34, "f16sub", "f16sub (_Float32, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f16sub_35, "f16sub", "f16sub (_Float32, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f16sub_36, "f16sub", "f16sub (_Float32, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f16sub_37, "f16sub", "f16sub (_Float32, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f16sub_38, "f16sub", "f16sub (_Float32, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_f16sub_39, "f16sub", "f16sub (_Float32, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_f16sub_40, "f16sub", "f16sub (_Float32, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f16sub_41, "f16sub", "f16sub (_Float32, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f16sub_42, "f16sub", "f16sub (_Float32, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f16sub_43, "f16sub", "f16sub (_Float32, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
    { test_f16sub_44, "f16sub", "f16sub (_Float32x, _Float16)", FLT32X_MANT_DIG, FLT32X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
    { test_f16sub_45, "f16sub", "f16sub (_Float32x, _Float32)", FLT32X_MANT_DIG, FLT32X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f16sub_46, "f16sub", "f16sub (_Float32x, _Float32x)", FLT32X_MANT_DIG, FLT32X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64
    { test_f16sub_47, "f16sub", "f16sub (_Float32x, _Float64)", FLT64_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
    { test_f16sub_48, "f16sub", "f16sub (_Float32x, _Float64x)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
    { test_f16sub_49, "f16sub", "f16sub (_Float32x, _Float128)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f16sub_50, "f16sub", "f16sub (_Float32x, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f16sub_51, "f16sub", "f16sub (_Float32x, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f16sub_52, "f16sub", "f16sub (_Float32x, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f16sub_53, "f16sub", "f16sub (_Float32x, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f16sub_54, "f16sub", "f16sub (_Float32x, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f16sub_55, "f16sub", "f16sub (_Float32x, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f16sub_56, "f16sub", "f16sub (_Float32x, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f16sub_57, "f16sub", "f16sub (_Float32x, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f16sub_58, "f16sub", "f16sub (_Float32x, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f16sub_59, "f16sub", "f16sub (_Float32x, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f16sub_60, "f16sub", "f16sub (_Float32x, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_f16sub_61, "f16sub", "f16sub (_Float32x, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_f16sub_62, "f16sub", "f16sub (_Float32x, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f16sub_63, "f16sub", "f16sub (_Float32x, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f16sub_64, "f16sub", "f16sub (_Float32x, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f16sub_65, "f16sub", "f16sub (_Float32x, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64
    { test_f16sub_66, "f16sub", "f16sub (_Float64, _Float16)", FLT64_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64
    { test_f16sub_67, "f16sub", "f16sub (_Float64, _Float32)", FLT64_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64
    { test_f16sub_68, "f16sub", "f16sub (_Float64, _Float32x)", FLT64_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f16sub_69, "f16sub", "f16sub (_Float64, _Float64)", FLT64_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
    { test_f16sub_70, "f16sub", "f16sub (_Float64, _Float64x)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64
    { test_f16sub_71, "f16sub", "f16sub (_Float64, _Float128)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f16sub_72, "f16sub", "f16sub (_Float64, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f16sub_73, "f16sub", "f16sub (_Float64, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f16sub_74, "f16sub", "f16sub (_Float64, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f16sub_75, "f16sub", "f16sub (_Float64, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f16sub_76, "f16sub", "f16sub (_Float64, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f16sub_77, "f16sub", "f16sub (_Float64, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f16sub_78, "f16sub", "f16sub (_Float64, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f16sub_79, "f16sub", "f16sub (_Float64, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f16sub_80, "f16sub", "f16sub (_Float64, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f16sub_81, "f16sub", "f16sub (_Float64, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f16sub_82, "f16sub", "f16sub (_Float64, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_f16sub_83, "f16sub", "f16sub (_Float64, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_f16sub_84, "f16sub", "f16sub (_Float64, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f16sub_85, "f16sub", "f16sub (_Float64, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f16sub_86, "f16sub", "f16sub (_Float64, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f16sub_87, "f16sub", "f16sub (_Float64, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
    { test_f16sub_88, "f16sub", "f16sub (_Float64x, _Float16)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
    { test_f16sub_89, "f16sub", "f16sub (_Float64x, _Float32)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
    { test_f16sub_90, "f16sub", "f16sub (_Float64x, _Float32x)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
    { test_f16sub_91, "f16sub", "f16sub (_Float64x, _Float64)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f16sub_92, "f16sub", "f16sub (_Float64x, _Float64x)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
    { test_f16sub_93, "f16sub", "f16sub (_Float64x, _Float128)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f16sub_94, "f16sub", "f16sub (_Float64x, char)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f16sub_95, "f16sub", "f16sub (_Float64x, signed char)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f16sub_96, "f16sub", "f16sub (_Float64x, unsigned char)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f16sub_97, "f16sub", "f16sub (_Float64x, short int)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f16sub_98, "f16sub", "f16sub (_Float64x, unsigned short int)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f16sub_99, "f16sub", "f16sub (_Float64x, int)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f16sub_100, "f16sub", "f16sub (_Float64x, unsigned int)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f16sub_101, "f16sub", "f16sub (_Float64x, long int)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f16sub_102, "f16sub", "f16sub (_Float64x, unsigned long int)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f16sub_103, "f16sub", "f16sub (_Float64x, long long int)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f16sub_104, "f16sub", "f16sub (_Float64x, unsigned long long int)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_f16sub_105, "f16sub", "f16sub (_Float64x, __int128)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_f16sub_106, "f16sub", "f16sub (_Float64x, unsigned __int128)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f16sub_107, "f16sub", "f16sub (_Float64x, enum e)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f16sub_108, "f16sub", "f16sub (_Float64x, _Bool)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f16sub_109, "f16sub", "f16sub (_Float64x, bit_field)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F16
    { test_f16sub_110, "f16sub", "f16sub (_Float128, _Float16)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32
    { test_f16sub_111, "f16sub", "f16sub (_Float128, _Float32)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
    { test_f16sub_112, "f16sub", "f16sub (_Float128, _Float32x)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64
    { test_f16sub_113, "f16sub", "f16sub (_Float128, _Float64)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
    { test_f16sub_114, "f16sub", "f16sub (_Float128, _Float64x)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f16sub_115, "f16sub", "f16sub (_Float128, _Float128)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f16sub_116, "f16sub", "f16sub (_Float128, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f16sub_117, "f16sub", "f16sub (_Float128, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f16sub_118, "f16sub", "f16sub (_Float128, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f16sub_119, "f16sub", "f16sub (_Float128, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f16sub_120, "f16sub", "f16sub (_Float128, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f16sub_121, "f16sub", "f16sub (_Float128, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f16sub_122, "f16sub", "f16sub (_Float128, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f16sub_123, "f16sub", "f16sub (_Float128, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f16sub_124, "f16sub", "f16sub (_Float128, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f16sub_125, "f16sub", "f16sub (_Float128, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f16sub_126, "f16sub", "f16sub (_Float128, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_f16sub_127, "f16sub", "f16sub (_Float128, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_f16sub_128, "f16sub", "f16sub (_Float128, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f16sub_129, "f16sub", "f16sub (_Float128, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f16sub_130, "f16sub", "f16sub (_Float128, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f16sub_131, "f16sub", "f16sub (_Float128, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f16sub_132, "f16sub", "f16sub (char, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f16sub_133, "f16sub", "f16sub (char, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f16sub_134, "f16sub", "f16sub (char, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f16sub_135, "f16sub", "f16sub (char, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f16sub_136, "f16sub", "f16sub (char, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f16sub_137, "f16sub", "f16sub (char, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_138, "f16sub", "f16sub (char, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_139, "f16sub", "f16sub (char, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_140, "f16sub", "f16sub (char, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_141, "f16sub", "f16sub (char, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_142, "f16sub", "f16sub (char, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_143, "f16sub", "f16sub (char, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_144, "f16sub", "f16sub (char, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_145, "f16sub", "f16sub (char, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_146, "f16sub", "f16sub (char, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_147, "f16sub", "f16sub (char, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_148, "f16sub", "f16sub (char, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16sub_149, "f16sub", "f16sub (char, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16sub_150, "f16sub", "f16sub (char, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_151, "f16sub", "f16sub (char, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_152, "f16sub", "f16sub (char, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_153, "f16sub", "f16sub (char, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f16sub_154, "f16sub", "f16sub (signed char, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f16sub_155, "f16sub", "f16sub (signed char, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f16sub_156, "f16sub", "f16sub (signed char, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f16sub_157, "f16sub", "f16sub (signed char, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f16sub_158, "f16sub", "f16sub (signed char, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f16sub_159, "f16sub", "f16sub (signed char, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_160, "f16sub", "f16sub (signed char, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_161, "f16sub", "f16sub (signed char, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_162, "f16sub", "f16sub (signed char, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_163, "f16sub", "f16sub (signed char, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_164, "f16sub", "f16sub (signed char, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_165, "f16sub", "f16sub (signed char, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_166, "f16sub", "f16sub (signed char, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_167, "f16sub", "f16sub (signed char, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_168, "f16sub", "f16sub (signed char, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_169, "f16sub", "f16sub (signed char, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_170, "f16sub", "f16sub (signed char, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16sub_171, "f16sub", "f16sub (signed char, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16sub_172, "f16sub", "f16sub (signed char, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_173, "f16sub", "f16sub (signed char, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_174, "f16sub", "f16sub (signed char, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_175, "f16sub", "f16sub (signed char, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f16sub_176, "f16sub", "f16sub (unsigned char, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f16sub_177, "f16sub", "f16sub (unsigned char, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f16sub_178, "f16sub", "f16sub (unsigned char, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f16sub_179, "f16sub", "f16sub (unsigned char, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f16sub_180, "f16sub", "f16sub (unsigned char, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f16sub_181, "f16sub", "f16sub (unsigned char, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_182, "f16sub", "f16sub (unsigned char, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_183, "f16sub", "f16sub (unsigned char, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_184, "f16sub", "f16sub (unsigned char, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_185, "f16sub", "f16sub (unsigned char, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_186, "f16sub", "f16sub (unsigned char, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_187, "f16sub", "f16sub (unsigned char, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_188, "f16sub", "f16sub (unsigned char, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_189, "f16sub", "f16sub (unsigned char, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_190, "f16sub", "f16sub (unsigned char, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_191, "f16sub", "f16sub (unsigned char, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_192, "f16sub", "f16sub (unsigned char, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16sub_193, "f16sub", "f16sub (unsigned char, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16sub_194, "f16sub", "f16sub (unsigned char, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_195, "f16sub", "f16sub (unsigned char, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_196, "f16sub", "f16sub (unsigned char, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_197, "f16sub", "f16sub (unsigned char, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f16sub_198, "f16sub", "f16sub (short int, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f16sub_199, "f16sub", "f16sub (short int, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f16sub_200, "f16sub", "f16sub (short int, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f16sub_201, "f16sub", "f16sub (short int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f16sub_202, "f16sub", "f16sub (short int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f16sub_203, "f16sub", "f16sub (short int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_204, "f16sub", "f16sub (short int, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_205, "f16sub", "f16sub (short int, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_206, "f16sub", "f16sub (short int, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_207, "f16sub", "f16sub (short int, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_208, "f16sub", "f16sub (short int, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_209, "f16sub", "f16sub (short int, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_210, "f16sub", "f16sub (short int, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_211, "f16sub", "f16sub (short int, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_212, "f16sub", "f16sub (short int, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_213, "f16sub", "f16sub (short int, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_214, "f16sub", "f16sub (short int, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16sub_215, "f16sub", "f16sub (short int, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16sub_216, "f16sub", "f16sub (short int, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_217, "f16sub", "f16sub (short int, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_218, "f16sub", "f16sub (short int, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_219, "f16sub", "f16sub (short int, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f16sub_220, "f16sub", "f16sub (unsigned short int, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f16sub_221, "f16sub", "f16sub (unsigned short int, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f16sub_222, "f16sub", "f16sub (unsigned short int, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f16sub_223, "f16sub", "f16sub (unsigned short int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f16sub_224, "f16sub", "f16sub (unsigned short int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f16sub_225, "f16sub", "f16sub (unsigned short int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_226, "f16sub", "f16sub (unsigned short int, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_227, "f16sub", "f16sub (unsigned short int, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_228, "f16sub", "f16sub (unsigned short int, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_229, "f16sub", "f16sub (unsigned short int, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_230, "f16sub", "f16sub (unsigned short int, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_231, "f16sub", "f16sub (unsigned short int, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_232, "f16sub", "f16sub (unsigned short int, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_233, "f16sub", "f16sub (unsigned short int, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_234, "f16sub", "f16sub (unsigned short int, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_235, "f16sub", "f16sub (unsigned short int, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_236, "f16sub", "f16sub (unsigned short int, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16sub_237, "f16sub", "f16sub (unsigned short int, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16sub_238, "f16sub", "f16sub (unsigned short int, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_239, "f16sub", "f16sub (unsigned short int, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_240, "f16sub", "f16sub (unsigned short int, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_241, "f16sub", "f16sub (unsigned short int, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f16sub_242, "f16sub", "f16sub (int, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f16sub_243, "f16sub", "f16sub (int, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f16sub_244, "f16sub", "f16sub (int, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f16sub_245, "f16sub", "f16sub (int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f16sub_246, "f16sub", "f16sub (int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f16sub_247, "f16sub", "f16sub (int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_248, "f16sub", "f16sub (int, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_249, "f16sub", "f16sub (int, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_250, "f16sub", "f16sub (int, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_251, "f16sub", "f16sub (int, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_252, "f16sub", "f16sub (int, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_253, "f16sub", "f16sub (int, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_254, "f16sub", "f16sub (int, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_255, "f16sub", "f16sub (int, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_256, "f16sub", "f16sub (int, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_257, "f16sub", "f16sub (int, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_258, "f16sub", "f16sub (int, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16sub_259, "f16sub", "f16sub (int, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16sub_260, "f16sub", "f16sub (int, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_261, "f16sub", "f16sub (int, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_262, "f16sub", "f16sub (int, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_263, "f16sub", "f16sub (int, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f16sub_264, "f16sub", "f16sub (unsigned int, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f16sub_265, "f16sub", "f16sub (unsigned int, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f16sub_266, "f16sub", "f16sub (unsigned int, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f16sub_267, "f16sub", "f16sub (unsigned int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f16sub_268, "f16sub", "f16sub (unsigned int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f16sub_269, "f16sub", "f16sub (unsigned int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_270, "f16sub", "f16sub (unsigned int, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_271, "f16sub", "f16sub (unsigned int, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_272, "f16sub", "f16sub (unsigned int, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_273, "f16sub", "f16sub (unsigned int, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_274, "f16sub", "f16sub (unsigned int, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_275, "f16sub", "f16sub (unsigned int, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_276, "f16sub", "f16sub (unsigned int, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_277, "f16sub", "f16sub (unsigned int, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_278, "f16sub", "f16sub (unsigned int, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_279, "f16sub", "f16sub (unsigned int, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_280, "f16sub", "f16sub (unsigned int, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16sub_281, "f16sub", "f16sub (unsigned int, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16sub_282, "f16sub", "f16sub (unsigned int, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_283, "f16sub", "f16sub (unsigned int, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_284, "f16sub", "f16sub (unsigned int, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_285, "f16sub", "f16sub (unsigned int, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f16sub_286, "f16sub", "f16sub (long int, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f16sub_287, "f16sub", "f16sub (long int, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f16sub_288, "f16sub", "f16sub (long int, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f16sub_289, "f16sub", "f16sub (long int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f16sub_290, "f16sub", "f16sub (long int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f16sub_291, "f16sub", "f16sub (long int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_292, "f16sub", "f16sub (long int, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_293, "f16sub", "f16sub (long int, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_294, "f16sub", "f16sub (long int, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_295, "f16sub", "f16sub (long int, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_296, "f16sub", "f16sub (long int, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_297, "f16sub", "f16sub (long int, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_298, "f16sub", "f16sub (long int, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_299, "f16sub", "f16sub (long int, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_300, "f16sub", "f16sub (long int, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_301, "f16sub", "f16sub (long int, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_302, "f16sub", "f16sub (long int, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16sub_303, "f16sub", "f16sub (long int, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16sub_304, "f16sub", "f16sub (long int, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_305, "f16sub", "f16sub (long int, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_306, "f16sub", "f16sub (long int, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_307, "f16sub", "f16sub (long int, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f16sub_308, "f16sub", "f16sub (unsigned long int, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f16sub_309, "f16sub", "f16sub (unsigned long int, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f16sub_310, "f16sub", "f16sub (unsigned long int, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f16sub_311, "f16sub", "f16sub (unsigned long int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f16sub_312, "f16sub", "f16sub (unsigned long int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f16sub_313, "f16sub", "f16sub (unsigned long int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_314, "f16sub", "f16sub (unsigned long int, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_315, "f16sub", "f16sub (unsigned long int, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_316, "f16sub", "f16sub (unsigned long int, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_317, "f16sub", "f16sub (unsigned long int, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_318, "f16sub", "f16sub (unsigned long int, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_319, "f16sub", "f16sub (unsigned long int, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_320, "f16sub", "f16sub (unsigned long int, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_321, "f16sub", "f16sub (unsigned long int, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_322, "f16sub", "f16sub (unsigned long int, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_323, "f16sub", "f16sub (unsigned long int, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_324, "f16sub", "f16sub (unsigned long int, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16sub_325, "f16sub", "f16sub (unsigned long int, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16sub_326, "f16sub", "f16sub (unsigned long int, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_327, "f16sub", "f16sub (unsigned long int, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_328, "f16sub", "f16sub (unsigned long int, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_329, "f16sub", "f16sub (unsigned long int, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f16sub_330, "f16sub", "f16sub (long long int, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f16sub_331, "f16sub", "f16sub (long long int, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f16sub_332, "f16sub", "f16sub (long long int, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f16sub_333, "f16sub", "f16sub (long long int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f16sub_334, "f16sub", "f16sub (long long int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f16sub_335, "f16sub", "f16sub (long long int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_336, "f16sub", "f16sub (long long int, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_337, "f16sub", "f16sub (long long int, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_338, "f16sub", "f16sub (long long int, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_339, "f16sub", "f16sub (long long int, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_340, "f16sub", "f16sub (long long int, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_341, "f16sub", "f16sub (long long int, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_342, "f16sub", "f16sub (long long int, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_343, "f16sub", "f16sub (long long int, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_344, "f16sub", "f16sub (long long int, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_345, "f16sub", "f16sub (long long int, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_346, "f16sub", "f16sub (long long int, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16sub_347, "f16sub", "f16sub (long long int, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16sub_348, "f16sub", "f16sub (long long int, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_349, "f16sub", "f16sub (long long int, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_350, "f16sub", "f16sub (long long int, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_351, "f16sub", "f16sub (long long int, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f16sub_352, "f16sub", "f16sub (unsigned long long int, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f16sub_353, "f16sub", "f16sub (unsigned long long int, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f16sub_354, "f16sub", "f16sub (unsigned long long int, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f16sub_355, "f16sub", "f16sub (unsigned long long int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f16sub_356, "f16sub", "f16sub (unsigned long long int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f16sub_357, "f16sub", "f16sub (unsigned long long int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_358, "f16sub", "f16sub (unsigned long long int, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_359, "f16sub", "f16sub (unsigned long long int, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_360, "f16sub", "f16sub (unsigned long long int, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_361, "f16sub", "f16sub (unsigned long long int, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_362, "f16sub", "f16sub (unsigned long long int, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_363, "f16sub", "f16sub (unsigned long long int, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_364, "f16sub", "f16sub (unsigned long long int, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_365, "f16sub", "f16sub (unsigned long long int, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_366, "f16sub", "f16sub (unsigned long long int, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_367, "f16sub", "f16sub (unsigned long long int, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_368, "f16sub", "f16sub (unsigned long long int, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16sub_369, "f16sub", "f16sub (unsigned long long int, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16sub_370, "f16sub", "f16sub (unsigned long long int, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_371, "f16sub", "f16sub (unsigned long long int, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_372, "f16sub", "f16sub (unsigned long long int, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_373, "f16sub", "f16sub (unsigned long long int, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_f16sub_374, "f16sub", "f16sub (__int128, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_f16sub_375, "f16sub", "f16sub (__int128, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_f16sub_376, "f16sub", "f16sub (__int128, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_f16sub_377, "f16sub", "f16sub (__int128, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_f16sub_378, "f16sub", "f16sub (__int128, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_f16sub_379, "f16sub", "f16sub (__int128, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16sub_380, "f16sub", "f16sub (__int128, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16sub_381, "f16sub", "f16sub (__int128, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16sub_382, "f16sub", "f16sub (__int128, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16sub_383, "f16sub", "f16sub (__int128, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16sub_384, "f16sub", "f16sub (__int128, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16sub_385, "f16sub", "f16sub (__int128, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16sub_386, "f16sub", "f16sub (__int128, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16sub_387, "f16sub", "f16sub (__int128, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16sub_388, "f16sub", "f16sub (__int128, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16sub_389, "f16sub", "f16sub (__int128, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16sub_390, "f16sub", "f16sub (__int128, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16sub_391, "f16sub", "f16sub (__int128, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16sub_392, "f16sub", "f16sub (__int128, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16sub_393, "f16sub", "f16sub (__int128, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16sub_394, "f16sub", "f16sub (__int128, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16sub_395, "f16sub", "f16sub (__int128, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_f16sub_396, "f16sub", "f16sub (unsigned __int128, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_f16sub_397, "f16sub", "f16sub (unsigned __int128, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_f16sub_398, "f16sub", "f16sub (unsigned __int128, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_f16sub_399, "f16sub", "f16sub (unsigned __int128, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_f16sub_400, "f16sub", "f16sub (unsigned __int128, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_f16sub_401, "f16sub", "f16sub (unsigned __int128, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16sub_402, "f16sub", "f16sub (unsigned __int128, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16sub_403, "f16sub", "f16sub (unsigned __int128, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16sub_404, "f16sub", "f16sub (unsigned __int128, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16sub_405, "f16sub", "f16sub (unsigned __int128, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16sub_406, "f16sub", "f16sub (unsigned __int128, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16sub_407, "f16sub", "f16sub (unsigned __int128, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16sub_408, "f16sub", "f16sub (unsigned __int128, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16sub_409, "f16sub", "f16sub (unsigned __int128, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16sub_410, "f16sub", "f16sub (unsigned __int128, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16sub_411, "f16sub", "f16sub (unsigned __int128, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16sub_412, "f16sub", "f16sub (unsigned __int128, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16sub_413, "f16sub", "f16sub (unsigned __int128, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16sub_414, "f16sub", "f16sub (unsigned __int128, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16sub_415, "f16sub", "f16sub (unsigned __int128, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16sub_416, "f16sub", "f16sub (unsigned __int128, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16sub_417, "f16sub", "f16sub (unsigned __int128, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f16sub_418, "f16sub", "f16sub (enum e, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f16sub_419, "f16sub", "f16sub (enum e, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f16sub_420, "f16sub", "f16sub (enum e, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f16sub_421, "f16sub", "f16sub (enum e, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f16sub_422, "f16sub", "f16sub (enum e, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f16sub_423, "f16sub", "f16sub (enum e, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_424, "f16sub", "f16sub (enum e, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_425, "f16sub", "f16sub (enum e, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_426, "f16sub", "f16sub (enum e, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_427, "f16sub", "f16sub (enum e, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_428, "f16sub", "f16sub (enum e, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_429, "f16sub", "f16sub (enum e, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_430, "f16sub", "f16sub (enum e, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_431, "f16sub", "f16sub (enum e, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_432, "f16sub", "f16sub (enum e, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_433, "f16sub", "f16sub (enum e, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_434, "f16sub", "f16sub (enum e, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16sub_435, "f16sub", "f16sub (enum e, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16sub_436, "f16sub", "f16sub (enum e, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_437, "f16sub", "f16sub (enum e, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_438, "f16sub", "f16sub (enum e, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_439, "f16sub", "f16sub (enum e, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f16sub_440, "f16sub", "f16sub (_Bool, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f16sub_441, "f16sub", "f16sub (_Bool, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f16sub_442, "f16sub", "f16sub (_Bool, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f16sub_443, "f16sub", "f16sub (_Bool, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f16sub_444, "f16sub", "f16sub (_Bool, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f16sub_445, "f16sub", "f16sub (_Bool, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_446, "f16sub", "f16sub (_Bool, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_447, "f16sub", "f16sub (_Bool, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_448, "f16sub", "f16sub (_Bool, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_449, "f16sub", "f16sub (_Bool, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_450, "f16sub", "f16sub (_Bool, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_451, "f16sub", "f16sub (_Bool, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_452, "f16sub", "f16sub (_Bool, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_453, "f16sub", "f16sub (_Bool, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_454, "f16sub", "f16sub (_Bool, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_455, "f16sub", "f16sub (_Bool, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_456, "f16sub", "f16sub (_Bool, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16sub_457, "f16sub", "f16sub (_Bool, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16sub_458, "f16sub", "f16sub (_Bool, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_459, "f16sub", "f16sub (_Bool, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_460, "f16sub", "f16sub (_Bool, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_461, "f16sub", "f16sub (_Bool, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f16sub_462, "f16sub", "f16sub (bit_field, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f16sub_463, "f16sub", "f16sub (bit_field, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f16sub_464, "f16sub", "f16sub (bit_field, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f16sub_465, "f16sub", "f16sub (bit_field, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f16sub_466, "f16sub", "f16sub (bit_field, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f16sub_467, "f16sub", "f16sub (bit_field, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_468, "f16sub", "f16sub (bit_field, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_469, "f16sub", "f16sub (bit_field, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_470, "f16sub", "f16sub (bit_field, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_471, "f16sub", "f16sub (bit_field, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_472, "f16sub", "f16sub (bit_field, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_473, "f16sub", "f16sub (bit_field, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_474, "f16sub", "f16sub (bit_field, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_475, "f16sub", "f16sub (bit_field, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_476, "f16sub", "f16sub (bit_field, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_477, "f16sub", "f16sub (bit_field, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_478, "f16sub", "f16sub (bit_field, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16sub_479, "f16sub", "f16sub (bit_field, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f16sub_480, "f16sub", "f16sub (bit_field, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_481, "f16sub", "f16sub (bit_field, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_482, "f16sub", "f16sub (bit_field, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F16 && (defined HUGE_VAL_F32 || defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f16sub_483, "f16sub", "f16sub (bit_field, bit_field)", FLT64_MANT_DIG, 0 },
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
