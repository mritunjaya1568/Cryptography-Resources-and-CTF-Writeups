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
(f32subf32x) (_Float32x arg0 __attribute__ ((unused)), _Float32x arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT32X_MANT_DIG;
  called_func_name = "f32sub";
  return 0;
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
_Float32
(f32subf64) (_Float64 arg0 __attribute__ ((unused)), _Float64 arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT64_MANT_DIG;
  called_func_name = "f32sub";
  return 0;
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
_Float32
(f32subf64x) (_Float64x arg0 __attribute__ ((unused)), _Float64x arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT64X_MANT_DIG;
  called_func_name = "f32sub";
  return 0;
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
_Float32
(f32subf128) (_Float128 arg0 __attribute__ ((unused)), _Float128 arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT128_MANT_DIG;
  called_func_name = "f32sub";
  return 0;
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32sub_0 (void)
{
  extern typeof (f32sub (vol_var__Float16, vol_var__Float16)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Float16, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32
static void
test_f32sub_1 (void)
{
  extern typeof (f32sub (vol_var__Float16, vol_var__Float32)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Float16, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
static void
test_f32sub_2 (void)
{
  extern typeof (f32sub (vol_var__Float16, vol_var__Float32x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Float16, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64
static void
test_f32sub_3 (void)
{
  extern typeof (f32sub (vol_var__Float16, vol_var__Float64)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Float16, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
static void
test_f32sub_4 (void)
{
  extern typeof (f32sub (vol_var__Float16, vol_var__Float64x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Float16, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F16
static void
test_f32sub_5 (void)
{
  extern typeof (f32sub (vol_var__Float16, vol_var__Float128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Float16, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32sub_6 (void)
{
  extern typeof (f32sub (vol_var__Float16, vol_var_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Float16, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32sub_7 (void)
{
  extern typeof (f32sub (vol_var__Float16, vol_var_signed_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Float16, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32sub_8 (void)
{
  extern typeof (f32sub (vol_var__Float16, vol_var_unsigned_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Float16, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32sub_9 (void)
{
  extern typeof (f32sub (vol_var__Float16, vol_var_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Float16, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32sub_10 (void)
{
  extern typeof (f32sub (vol_var__Float16, vol_var_unsigned_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Float16, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32sub_11 (void)
{
  extern typeof (f32sub (vol_var__Float16, vol_var_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Float16, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32sub_12 (void)
{
  extern typeof (f32sub (vol_var__Float16, vol_var_unsigned_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Float16, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32sub_13 (void)
{
  extern typeof (f32sub (vol_var__Float16, vol_var_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Float16, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32sub_14 (void)
{
  extern typeof (f32sub (vol_var__Float16, vol_var_unsigned_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Float16, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32sub_15 (void)
{
  extern typeof (f32sub (vol_var__Float16, vol_var_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Float16, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32sub_16 (void)
{
  extern typeof (f32sub (vol_var__Float16, vol_var_unsigned_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Float16, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_f32sub_17 (void)
{
  extern typeof (f32sub (vol_var__Float16, vol_var___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Float16, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_f32sub_18 (void)
{
  extern typeof (f32sub (vol_var__Float16, vol_var_unsigned___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Float16, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32sub_19 (void)
{
  extern typeof (f32sub (vol_var__Float16, vol_var_enum_e)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Float16, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32sub_20 (void)
{
  extern typeof (f32sub (vol_var__Float16, vol_var__Bool)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Float16, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32sub_21 (void)
{
  extern typeof (f32sub (vol_var__Float16, vol_var_bit_field)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Float16, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32
static void
test_f32sub_22 (void)
{
  extern typeof (f32sub (vol_var__Float32, vol_var__Float16)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Float32, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32sub_23 (void)
{
  extern typeof (f32sub (vol_var__Float32, vol_var__Float32)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Float32, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
static void
test_f32sub_24 (void)
{
  extern typeof (f32sub (vol_var__Float32, vol_var__Float32x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Float32, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64
static void
test_f32sub_25 (void)
{
  extern typeof (f32sub (vol_var__Float32, vol_var__Float64)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Float32, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
static void
test_f32sub_26 (void)
{
  extern typeof (f32sub (vol_var__Float32, vol_var__Float64x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Float32, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32
static void
test_f32sub_27 (void)
{
  extern typeof (f32sub (vol_var__Float32, vol_var__Float128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Float32, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32sub_28 (void)
{
  extern typeof (f32sub (vol_var__Float32, vol_var_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Float32, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32sub_29 (void)
{
  extern typeof (f32sub (vol_var__Float32, vol_var_signed_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Float32, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32sub_30 (void)
{
  extern typeof (f32sub (vol_var__Float32, vol_var_unsigned_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Float32, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32sub_31 (void)
{
  extern typeof (f32sub (vol_var__Float32, vol_var_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Float32, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32sub_32 (void)
{
  extern typeof (f32sub (vol_var__Float32, vol_var_unsigned_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Float32, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32sub_33 (void)
{
  extern typeof (f32sub (vol_var__Float32, vol_var_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Float32, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32sub_34 (void)
{
  extern typeof (f32sub (vol_var__Float32, vol_var_unsigned_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Float32, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32sub_35 (void)
{
  extern typeof (f32sub (vol_var__Float32, vol_var_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Float32, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32sub_36 (void)
{
  extern typeof (f32sub (vol_var__Float32, vol_var_unsigned_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Float32, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32sub_37 (void)
{
  extern typeof (f32sub (vol_var__Float32, vol_var_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Float32, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32sub_38 (void)
{
  extern typeof (f32sub (vol_var__Float32, vol_var_unsigned_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Float32, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_f32sub_39 (void)
{
  extern typeof (f32sub (vol_var__Float32, vol_var___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Float32, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_f32sub_40 (void)
{
  extern typeof (f32sub (vol_var__Float32, vol_var_unsigned___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Float32, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32sub_41 (void)
{
  extern typeof (f32sub (vol_var__Float32, vol_var_enum_e)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Float32, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32sub_42 (void)
{
  extern typeof (f32sub (vol_var__Float32, vol_var__Bool)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Float32, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32sub_43 (void)
{
  extern typeof (f32sub (vol_var__Float32, vol_var_bit_field)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Float32, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
static void
test_f32sub_44 (void)
{
  extern typeof (f32sub (vol_var__Float32x, vol_var__Float16)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Float32x, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
static void
test_f32sub_45 (void)
{
  extern typeof (f32sub (vol_var__Float32x, vol_var__Float32)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Float32x, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32sub_46 (void)
{
  extern typeof (f32sub (vol_var__Float32x, vol_var__Float32x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Float32x, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64
static void
test_f32sub_47 (void)
{
  extern typeof (f32sub (vol_var__Float32x, vol_var__Float64)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Float32x, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
static void
test_f32sub_48 (void)
{
  extern typeof (f32sub (vol_var__Float32x, vol_var__Float64x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Float32x, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
static void
test_f32sub_49 (void)
{
  extern typeof (f32sub (vol_var__Float32x, vol_var__Float128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Float32x, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32sub_50 (void)
{
  extern typeof (f32sub (vol_var__Float32x, vol_var_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Float32x, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32sub_51 (void)
{
  extern typeof (f32sub (vol_var__Float32x, vol_var_signed_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Float32x, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32sub_52 (void)
{
  extern typeof (f32sub (vol_var__Float32x, vol_var_unsigned_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Float32x, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32sub_53 (void)
{
  extern typeof (f32sub (vol_var__Float32x, vol_var_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Float32x, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32sub_54 (void)
{
  extern typeof (f32sub (vol_var__Float32x, vol_var_unsigned_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Float32x, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32sub_55 (void)
{
  extern typeof (f32sub (vol_var__Float32x, vol_var_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Float32x, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32sub_56 (void)
{
  extern typeof (f32sub (vol_var__Float32x, vol_var_unsigned_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Float32x, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32sub_57 (void)
{
  extern typeof (f32sub (vol_var__Float32x, vol_var_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Float32x, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32sub_58 (void)
{
  extern typeof (f32sub (vol_var__Float32x, vol_var_unsigned_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Float32x, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32sub_59 (void)
{
  extern typeof (f32sub (vol_var__Float32x, vol_var_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Float32x, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32sub_60 (void)
{
  extern typeof (f32sub (vol_var__Float32x, vol_var_unsigned_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Float32x, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_f32sub_61 (void)
{
  extern typeof (f32sub (vol_var__Float32x, vol_var___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Float32x, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_f32sub_62 (void)
{
  extern typeof (f32sub (vol_var__Float32x, vol_var_unsigned___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Float32x, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32sub_63 (void)
{
  extern typeof (f32sub (vol_var__Float32x, vol_var_enum_e)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Float32x, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32sub_64 (void)
{
  extern typeof (f32sub (vol_var__Float32x, vol_var__Bool)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Float32x, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32sub_65 (void)
{
  extern typeof (f32sub (vol_var__Float32x, vol_var_bit_field)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Float32x, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64
static void
test_f32sub_66 (void)
{
  extern typeof (f32sub (vol_var__Float64, vol_var__Float16)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Float64, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64
static void
test_f32sub_67 (void)
{
  extern typeof (f32sub (vol_var__Float64, vol_var__Float32)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Float64, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64
static void
test_f32sub_68 (void)
{
  extern typeof (f32sub (vol_var__Float64, vol_var__Float32x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Float64, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32sub_69 (void)
{
  extern typeof (f32sub (vol_var__Float64, vol_var__Float64)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Float64, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
static void
test_f32sub_70 (void)
{
  extern typeof (f32sub (vol_var__Float64, vol_var__Float64x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Float64, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64
static void
test_f32sub_71 (void)
{
  extern typeof (f32sub (vol_var__Float64, vol_var__Float128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Float64, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32sub_72 (void)
{
  extern typeof (f32sub (vol_var__Float64, vol_var_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Float64, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32sub_73 (void)
{
  extern typeof (f32sub (vol_var__Float64, vol_var_signed_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Float64, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32sub_74 (void)
{
  extern typeof (f32sub (vol_var__Float64, vol_var_unsigned_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Float64, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32sub_75 (void)
{
  extern typeof (f32sub (vol_var__Float64, vol_var_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Float64, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32sub_76 (void)
{
  extern typeof (f32sub (vol_var__Float64, vol_var_unsigned_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Float64, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32sub_77 (void)
{
  extern typeof (f32sub (vol_var__Float64, vol_var_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Float64, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32sub_78 (void)
{
  extern typeof (f32sub (vol_var__Float64, vol_var_unsigned_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Float64, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32sub_79 (void)
{
  extern typeof (f32sub (vol_var__Float64, vol_var_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Float64, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32sub_80 (void)
{
  extern typeof (f32sub (vol_var__Float64, vol_var_unsigned_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Float64, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32sub_81 (void)
{
  extern typeof (f32sub (vol_var__Float64, vol_var_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Float64, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32sub_82 (void)
{
  extern typeof (f32sub (vol_var__Float64, vol_var_unsigned_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Float64, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_f32sub_83 (void)
{
  extern typeof (f32sub (vol_var__Float64, vol_var___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Float64, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_f32sub_84 (void)
{
  extern typeof (f32sub (vol_var__Float64, vol_var_unsigned___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Float64, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32sub_85 (void)
{
  extern typeof (f32sub (vol_var__Float64, vol_var_enum_e)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Float64, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32sub_86 (void)
{
  extern typeof (f32sub (vol_var__Float64, vol_var__Bool)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Float64, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32sub_87 (void)
{
  extern typeof (f32sub (vol_var__Float64, vol_var_bit_field)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Float64, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
static void
test_f32sub_88 (void)
{
  extern typeof (f32sub (vol_var__Float64x, vol_var__Float16)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Float64x, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
static void
test_f32sub_89 (void)
{
  extern typeof (f32sub (vol_var__Float64x, vol_var__Float32)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Float64x, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
static void
test_f32sub_90 (void)
{
  extern typeof (f32sub (vol_var__Float64x, vol_var__Float32x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Float64x, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
static void
test_f32sub_91 (void)
{
  extern typeof (f32sub (vol_var__Float64x, vol_var__Float64)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Float64x, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32sub_92 (void)
{
  extern typeof (f32sub (vol_var__Float64x, vol_var__Float64x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Float64x, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
static void
test_f32sub_93 (void)
{
  extern typeof (f32sub (vol_var__Float64x, vol_var__Float128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Float64x, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32sub_94 (void)
{
  extern typeof (f32sub (vol_var__Float64x, vol_var_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Float64x, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32sub_95 (void)
{
  extern typeof (f32sub (vol_var__Float64x, vol_var_signed_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Float64x, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32sub_96 (void)
{
  extern typeof (f32sub (vol_var__Float64x, vol_var_unsigned_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Float64x, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32sub_97 (void)
{
  extern typeof (f32sub (vol_var__Float64x, vol_var_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Float64x, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32sub_98 (void)
{
  extern typeof (f32sub (vol_var__Float64x, vol_var_unsigned_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Float64x, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32sub_99 (void)
{
  extern typeof (f32sub (vol_var__Float64x, vol_var_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Float64x, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32sub_100 (void)
{
  extern typeof (f32sub (vol_var__Float64x, vol_var_unsigned_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Float64x, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32sub_101 (void)
{
  extern typeof (f32sub (vol_var__Float64x, vol_var_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Float64x, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32sub_102 (void)
{
  extern typeof (f32sub (vol_var__Float64x, vol_var_unsigned_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Float64x, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32sub_103 (void)
{
  extern typeof (f32sub (vol_var__Float64x, vol_var_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Float64x, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32sub_104 (void)
{
  extern typeof (f32sub (vol_var__Float64x, vol_var_unsigned_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Float64x, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_f32sub_105 (void)
{
  extern typeof (f32sub (vol_var__Float64x, vol_var___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Float64x, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_f32sub_106 (void)
{
  extern typeof (f32sub (vol_var__Float64x, vol_var_unsigned___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Float64x, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32sub_107 (void)
{
  extern typeof (f32sub (vol_var__Float64x, vol_var_enum_e)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Float64x, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32sub_108 (void)
{
  extern typeof (f32sub (vol_var__Float64x, vol_var__Bool)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Float64x, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32sub_109 (void)
{
  extern typeof (f32sub (vol_var__Float64x, vol_var_bit_field)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Float64x, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F16
static void
test_f32sub_110 (void)
{
  extern typeof (f32sub (vol_var__Float128, vol_var__Float16)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Float128, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32
static void
test_f32sub_111 (void)
{
  extern typeof (f32sub (vol_var__Float128, vol_var__Float32)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Float128, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
static void
test_f32sub_112 (void)
{
  extern typeof (f32sub (vol_var__Float128, vol_var__Float32x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Float128, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64
static void
test_f32sub_113 (void)
{
  extern typeof (f32sub (vol_var__Float128, vol_var__Float64)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Float128, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
static void
test_f32sub_114 (void)
{
  extern typeof (f32sub (vol_var__Float128, vol_var__Float64x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Float128, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32sub_115 (void)
{
  extern typeof (f32sub (vol_var__Float128, vol_var__Float128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Float128, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32sub_116 (void)
{
  extern typeof (f32sub (vol_var__Float128, vol_var_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Float128, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32sub_117 (void)
{
  extern typeof (f32sub (vol_var__Float128, vol_var_signed_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Float128, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32sub_118 (void)
{
  extern typeof (f32sub (vol_var__Float128, vol_var_unsigned_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Float128, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32sub_119 (void)
{
  extern typeof (f32sub (vol_var__Float128, vol_var_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Float128, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32sub_120 (void)
{
  extern typeof (f32sub (vol_var__Float128, vol_var_unsigned_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Float128, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32sub_121 (void)
{
  extern typeof (f32sub (vol_var__Float128, vol_var_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Float128, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32sub_122 (void)
{
  extern typeof (f32sub (vol_var__Float128, vol_var_unsigned_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Float128, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32sub_123 (void)
{
  extern typeof (f32sub (vol_var__Float128, vol_var_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Float128, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32sub_124 (void)
{
  extern typeof (f32sub (vol_var__Float128, vol_var_unsigned_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Float128, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32sub_125 (void)
{
  extern typeof (f32sub (vol_var__Float128, vol_var_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Float128, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32sub_126 (void)
{
  extern typeof (f32sub (vol_var__Float128, vol_var_unsigned_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Float128, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_f32sub_127 (void)
{
  extern typeof (f32sub (vol_var__Float128, vol_var___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Float128, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_f32sub_128 (void)
{
  extern typeof (f32sub (vol_var__Float128, vol_var_unsigned___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Float128, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32sub_129 (void)
{
  extern typeof (f32sub (vol_var__Float128, vol_var_enum_e)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Float128, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32sub_130 (void)
{
  extern typeof (f32sub (vol_var__Float128, vol_var__Bool)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Float128, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32sub_131 (void)
{
  extern typeof (f32sub (vol_var__Float128, vol_var_bit_field)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Float128, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32sub_132 (void)
{
  extern typeof (f32sub (vol_var_char, vol_var__Float16)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_char, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32sub_133 (void)
{
  extern typeof (f32sub (vol_var_char, vol_var__Float32)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_char, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32sub_134 (void)
{
  extern typeof (f32sub (vol_var_char, vol_var__Float32x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_char, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32sub_135 (void)
{
  extern typeof (f32sub (vol_var_char, vol_var__Float64)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_char, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32sub_136 (void)
{
  extern typeof (f32sub (vol_var_char, vol_var__Float64x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_char, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32sub_137 (void)
{
  extern typeof (f32sub (vol_var_char, vol_var__Float128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_char, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_138 (void)
{
  extern typeof (f32sub (vol_var_char, vol_var_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_char, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_139 (void)
{
  extern typeof (f32sub (vol_var_char, vol_var_signed_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_char, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_140 (void)
{
  extern typeof (f32sub (vol_var_char, vol_var_unsigned_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_char, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_141 (void)
{
  extern typeof (f32sub (vol_var_char, vol_var_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_char, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_142 (void)
{
  extern typeof (f32sub (vol_var_char, vol_var_unsigned_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_char, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_143 (void)
{
  extern typeof (f32sub (vol_var_char, vol_var_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_char, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_144 (void)
{
  extern typeof (f32sub (vol_var_char, vol_var_unsigned_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_char, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_145 (void)
{
  extern typeof (f32sub (vol_var_char, vol_var_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_char, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_146 (void)
{
  extern typeof (f32sub (vol_var_char, vol_var_unsigned_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_char, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_147 (void)
{
  extern typeof (f32sub (vol_var_char, vol_var_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_char, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_148 (void)
{
  extern typeof (f32sub (vol_var_char, vol_var_unsigned_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_char, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32sub_149 (void)
{
  extern typeof (f32sub (vol_var_char, vol_var___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_char, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32sub_150 (void)
{
  extern typeof (f32sub (vol_var_char, vol_var_unsigned___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_char, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_151 (void)
{
  extern typeof (f32sub (vol_var_char, vol_var_enum_e)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_char, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_152 (void)
{
  extern typeof (f32sub (vol_var_char, vol_var__Bool)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_char, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_153 (void)
{
  extern typeof (f32sub (vol_var_char, vol_var_bit_field)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_char, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32sub_154 (void)
{
  extern typeof (f32sub (vol_var_signed_char, vol_var__Float16)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_signed_char, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32sub_155 (void)
{
  extern typeof (f32sub (vol_var_signed_char, vol_var__Float32)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_signed_char, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32sub_156 (void)
{
  extern typeof (f32sub (vol_var_signed_char, vol_var__Float32x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_signed_char, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32sub_157 (void)
{
  extern typeof (f32sub (vol_var_signed_char, vol_var__Float64)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_signed_char, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32sub_158 (void)
{
  extern typeof (f32sub (vol_var_signed_char, vol_var__Float64x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_signed_char, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32sub_159 (void)
{
  extern typeof (f32sub (vol_var_signed_char, vol_var__Float128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_signed_char, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_160 (void)
{
  extern typeof (f32sub (vol_var_signed_char, vol_var_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_signed_char, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_161 (void)
{
  extern typeof (f32sub (vol_var_signed_char, vol_var_signed_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_signed_char, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_162 (void)
{
  extern typeof (f32sub (vol_var_signed_char, vol_var_unsigned_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_signed_char, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_163 (void)
{
  extern typeof (f32sub (vol_var_signed_char, vol_var_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_signed_char, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_164 (void)
{
  extern typeof (f32sub (vol_var_signed_char, vol_var_unsigned_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_signed_char, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_165 (void)
{
  extern typeof (f32sub (vol_var_signed_char, vol_var_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_signed_char, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_166 (void)
{
  extern typeof (f32sub (vol_var_signed_char, vol_var_unsigned_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_signed_char, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_167 (void)
{
  extern typeof (f32sub (vol_var_signed_char, vol_var_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_signed_char, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_168 (void)
{
  extern typeof (f32sub (vol_var_signed_char, vol_var_unsigned_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_signed_char, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_169 (void)
{
  extern typeof (f32sub (vol_var_signed_char, vol_var_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_signed_char, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_170 (void)
{
  extern typeof (f32sub (vol_var_signed_char, vol_var_unsigned_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_signed_char, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32sub_171 (void)
{
  extern typeof (f32sub (vol_var_signed_char, vol_var___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_signed_char, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32sub_172 (void)
{
  extern typeof (f32sub (vol_var_signed_char, vol_var_unsigned___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_signed_char, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_173 (void)
{
  extern typeof (f32sub (vol_var_signed_char, vol_var_enum_e)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_signed_char, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_174 (void)
{
  extern typeof (f32sub (vol_var_signed_char, vol_var__Bool)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_signed_char, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_175 (void)
{
  extern typeof (f32sub (vol_var_signed_char, vol_var_bit_field)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_signed_char, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32sub_176 (void)
{
  extern typeof (f32sub (vol_var_unsigned_char, vol_var__Float16)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_unsigned_char, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32sub_177 (void)
{
  extern typeof (f32sub (vol_var_unsigned_char, vol_var__Float32)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_unsigned_char, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32sub_178 (void)
{
  extern typeof (f32sub (vol_var_unsigned_char, vol_var__Float32x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_unsigned_char, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32sub_179 (void)
{
  extern typeof (f32sub (vol_var_unsigned_char, vol_var__Float64)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_unsigned_char, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32sub_180 (void)
{
  extern typeof (f32sub (vol_var_unsigned_char, vol_var__Float64x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_unsigned_char, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32sub_181 (void)
{
  extern typeof (f32sub (vol_var_unsigned_char, vol_var__Float128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_unsigned_char, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_182 (void)
{
  extern typeof (f32sub (vol_var_unsigned_char, vol_var_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_unsigned_char, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_183 (void)
{
  extern typeof (f32sub (vol_var_unsigned_char, vol_var_signed_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_unsigned_char, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_184 (void)
{
  extern typeof (f32sub (vol_var_unsigned_char, vol_var_unsigned_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_unsigned_char, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_185 (void)
{
  extern typeof (f32sub (vol_var_unsigned_char, vol_var_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_unsigned_char, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_186 (void)
{
  extern typeof (f32sub (vol_var_unsigned_char, vol_var_unsigned_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_unsigned_char, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_187 (void)
{
  extern typeof (f32sub (vol_var_unsigned_char, vol_var_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_unsigned_char, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_188 (void)
{
  extern typeof (f32sub (vol_var_unsigned_char, vol_var_unsigned_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_unsigned_char, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_189 (void)
{
  extern typeof (f32sub (vol_var_unsigned_char, vol_var_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_unsigned_char, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_190 (void)
{
  extern typeof (f32sub (vol_var_unsigned_char, vol_var_unsigned_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_unsigned_char, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_191 (void)
{
  extern typeof (f32sub (vol_var_unsigned_char, vol_var_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_unsigned_char, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_192 (void)
{
  extern typeof (f32sub (vol_var_unsigned_char, vol_var_unsigned_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_unsigned_char, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32sub_193 (void)
{
  extern typeof (f32sub (vol_var_unsigned_char, vol_var___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_unsigned_char, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32sub_194 (void)
{
  extern typeof (f32sub (vol_var_unsigned_char, vol_var_unsigned___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_unsigned_char, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_195 (void)
{
  extern typeof (f32sub (vol_var_unsigned_char, vol_var_enum_e)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_unsigned_char, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_196 (void)
{
  extern typeof (f32sub (vol_var_unsigned_char, vol_var__Bool)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_unsigned_char, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_197 (void)
{
  extern typeof (f32sub (vol_var_unsigned_char, vol_var_bit_field)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_unsigned_char, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32sub_198 (void)
{
  extern typeof (f32sub (vol_var_short_int, vol_var__Float16)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_short_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32sub_199 (void)
{
  extern typeof (f32sub (vol_var_short_int, vol_var__Float32)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_short_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32sub_200 (void)
{
  extern typeof (f32sub (vol_var_short_int, vol_var__Float32x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_short_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32sub_201 (void)
{
  extern typeof (f32sub (vol_var_short_int, vol_var__Float64)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_short_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32sub_202 (void)
{
  extern typeof (f32sub (vol_var_short_int, vol_var__Float64x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_short_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32sub_203 (void)
{
  extern typeof (f32sub (vol_var_short_int, vol_var__Float128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_short_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_204 (void)
{
  extern typeof (f32sub (vol_var_short_int, vol_var_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_short_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_205 (void)
{
  extern typeof (f32sub (vol_var_short_int, vol_var_signed_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_short_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_206 (void)
{
  extern typeof (f32sub (vol_var_short_int, vol_var_unsigned_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_short_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_207 (void)
{
  extern typeof (f32sub (vol_var_short_int, vol_var_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_short_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_208 (void)
{
  extern typeof (f32sub (vol_var_short_int, vol_var_unsigned_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_short_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_209 (void)
{
  extern typeof (f32sub (vol_var_short_int, vol_var_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_short_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_210 (void)
{
  extern typeof (f32sub (vol_var_short_int, vol_var_unsigned_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_short_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_211 (void)
{
  extern typeof (f32sub (vol_var_short_int, vol_var_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_short_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_212 (void)
{
  extern typeof (f32sub (vol_var_short_int, vol_var_unsigned_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_short_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_213 (void)
{
  extern typeof (f32sub (vol_var_short_int, vol_var_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_short_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_214 (void)
{
  extern typeof (f32sub (vol_var_short_int, vol_var_unsigned_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_short_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32sub_215 (void)
{
  extern typeof (f32sub (vol_var_short_int, vol_var___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_short_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32sub_216 (void)
{
  extern typeof (f32sub (vol_var_short_int, vol_var_unsigned___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_short_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_217 (void)
{
  extern typeof (f32sub (vol_var_short_int, vol_var_enum_e)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_short_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_218 (void)
{
  extern typeof (f32sub (vol_var_short_int, vol_var__Bool)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_short_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_219 (void)
{
  extern typeof (f32sub (vol_var_short_int, vol_var_bit_field)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_short_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32sub_220 (void)
{
  extern typeof (f32sub (vol_var_unsigned_short_int, vol_var__Float16)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_unsigned_short_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32sub_221 (void)
{
  extern typeof (f32sub (vol_var_unsigned_short_int, vol_var__Float32)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_unsigned_short_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32sub_222 (void)
{
  extern typeof (f32sub (vol_var_unsigned_short_int, vol_var__Float32x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_unsigned_short_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32sub_223 (void)
{
  extern typeof (f32sub (vol_var_unsigned_short_int, vol_var__Float64)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_unsigned_short_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32sub_224 (void)
{
  extern typeof (f32sub (vol_var_unsigned_short_int, vol_var__Float64x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_unsigned_short_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32sub_225 (void)
{
  extern typeof (f32sub (vol_var_unsigned_short_int, vol_var__Float128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_unsigned_short_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_226 (void)
{
  extern typeof (f32sub (vol_var_unsigned_short_int, vol_var_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_unsigned_short_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_227 (void)
{
  extern typeof (f32sub (vol_var_unsigned_short_int, vol_var_signed_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_unsigned_short_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_228 (void)
{
  extern typeof (f32sub (vol_var_unsigned_short_int, vol_var_unsigned_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_unsigned_short_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_229 (void)
{
  extern typeof (f32sub (vol_var_unsigned_short_int, vol_var_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_unsigned_short_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_230 (void)
{
  extern typeof (f32sub (vol_var_unsigned_short_int, vol_var_unsigned_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_unsigned_short_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_231 (void)
{
  extern typeof (f32sub (vol_var_unsigned_short_int, vol_var_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_unsigned_short_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_232 (void)
{
  extern typeof (f32sub (vol_var_unsigned_short_int, vol_var_unsigned_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_unsigned_short_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_233 (void)
{
  extern typeof (f32sub (vol_var_unsigned_short_int, vol_var_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_unsigned_short_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_234 (void)
{
  extern typeof (f32sub (vol_var_unsigned_short_int, vol_var_unsigned_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_unsigned_short_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_235 (void)
{
  extern typeof (f32sub (vol_var_unsigned_short_int, vol_var_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_unsigned_short_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_236 (void)
{
  extern typeof (f32sub (vol_var_unsigned_short_int, vol_var_unsigned_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_unsigned_short_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32sub_237 (void)
{
  extern typeof (f32sub (vol_var_unsigned_short_int, vol_var___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_unsigned_short_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32sub_238 (void)
{
  extern typeof (f32sub (vol_var_unsigned_short_int, vol_var_unsigned___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_unsigned_short_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_239 (void)
{
  extern typeof (f32sub (vol_var_unsigned_short_int, vol_var_enum_e)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_unsigned_short_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_240 (void)
{
  extern typeof (f32sub (vol_var_unsigned_short_int, vol_var__Bool)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_unsigned_short_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_241 (void)
{
  extern typeof (f32sub (vol_var_unsigned_short_int, vol_var_bit_field)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_unsigned_short_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32sub_242 (void)
{
  extern typeof (f32sub (vol_var_int, vol_var__Float16)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32sub_243 (void)
{
  extern typeof (f32sub (vol_var_int, vol_var__Float32)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32sub_244 (void)
{
  extern typeof (f32sub (vol_var_int, vol_var__Float32x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32sub_245 (void)
{
  extern typeof (f32sub (vol_var_int, vol_var__Float64)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32sub_246 (void)
{
  extern typeof (f32sub (vol_var_int, vol_var__Float64x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32sub_247 (void)
{
  extern typeof (f32sub (vol_var_int, vol_var__Float128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_248 (void)
{
  extern typeof (f32sub (vol_var_int, vol_var_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_249 (void)
{
  extern typeof (f32sub (vol_var_int, vol_var_signed_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_250 (void)
{
  extern typeof (f32sub (vol_var_int, vol_var_unsigned_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_251 (void)
{
  extern typeof (f32sub (vol_var_int, vol_var_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_252 (void)
{
  extern typeof (f32sub (vol_var_int, vol_var_unsigned_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_253 (void)
{
  extern typeof (f32sub (vol_var_int, vol_var_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_254 (void)
{
  extern typeof (f32sub (vol_var_int, vol_var_unsigned_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_255 (void)
{
  extern typeof (f32sub (vol_var_int, vol_var_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_256 (void)
{
  extern typeof (f32sub (vol_var_int, vol_var_unsigned_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_257 (void)
{
  extern typeof (f32sub (vol_var_int, vol_var_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_258 (void)
{
  extern typeof (f32sub (vol_var_int, vol_var_unsigned_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32sub_259 (void)
{
  extern typeof (f32sub (vol_var_int, vol_var___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32sub_260 (void)
{
  extern typeof (f32sub (vol_var_int, vol_var_unsigned___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_261 (void)
{
  extern typeof (f32sub (vol_var_int, vol_var_enum_e)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_262 (void)
{
  extern typeof (f32sub (vol_var_int, vol_var__Bool)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_263 (void)
{
  extern typeof (f32sub (vol_var_int, vol_var_bit_field)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32sub_264 (void)
{
  extern typeof (f32sub (vol_var_unsigned_int, vol_var__Float16)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_unsigned_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32sub_265 (void)
{
  extern typeof (f32sub (vol_var_unsigned_int, vol_var__Float32)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_unsigned_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32sub_266 (void)
{
  extern typeof (f32sub (vol_var_unsigned_int, vol_var__Float32x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_unsigned_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32sub_267 (void)
{
  extern typeof (f32sub (vol_var_unsigned_int, vol_var__Float64)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_unsigned_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32sub_268 (void)
{
  extern typeof (f32sub (vol_var_unsigned_int, vol_var__Float64x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_unsigned_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32sub_269 (void)
{
  extern typeof (f32sub (vol_var_unsigned_int, vol_var__Float128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_unsigned_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_270 (void)
{
  extern typeof (f32sub (vol_var_unsigned_int, vol_var_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_unsigned_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_271 (void)
{
  extern typeof (f32sub (vol_var_unsigned_int, vol_var_signed_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_unsigned_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_272 (void)
{
  extern typeof (f32sub (vol_var_unsigned_int, vol_var_unsigned_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_unsigned_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_273 (void)
{
  extern typeof (f32sub (vol_var_unsigned_int, vol_var_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_unsigned_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_274 (void)
{
  extern typeof (f32sub (vol_var_unsigned_int, vol_var_unsigned_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_unsigned_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_275 (void)
{
  extern typeof (f32sub (vol_var_unsigned_int, vol_var_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_unsigned_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_276 (void)
{
  extern typeof (f32sub (vol_var_unsigned_int, vol_var_unsigned_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_unsigned_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_277 (void)
{
  extern typeof (f32sub (vol_var_unsigned_int, vol_var_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_unsigned_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_278 (void)
{
  extern typeof (f32sub (vol_var_unsigned_int, vol_var_unsigned_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_unsigned_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_279 (void)
{
  extern typeof (f32sub (vol_var_unsigned_int, vol_var_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_unsigned_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_280 (void)
{
  extern typeof (f32sub (vol_var_unsigned_int, vol_var_unsigned_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_unsigned_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32sub_281 (void)
{
  extern typeof (f32sub (vol_var_unsigned_int, vol_var___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_unsigned_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32sub_282 (void)
{
  extern typeof (f32sub (vol_var_unsigned_int, vol_var_unsigned___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_unsigned_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_283 (void)
{
  extern typeof (f32sub (vol_var_unsigned_int, vol_var_enum_e)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_unsigned_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_284 (void)
{
  extern typeof (f32sub (vol_var_unsigned_int, vol_var__Bool)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_unsigned_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_285 (void)
{
  extern typeof (f32sub (vol_var_unsigned_int, vol_var_bit_field)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_unsigned_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32sub_286 (void)
{
  extern typeof (f32sub (vol_var_long_int, vol_var__Float16)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_long_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32sub_287 (void)
{
  extern typeof (f32sub (vol_var_long_int, vol_var__Float32)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_long_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32sub_288 (void)
{
  extern typeof (f32sub (vol_var_long_int, vol_var__Float32x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_long_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32sub_289 (void)
{
  extern typeof (f32sub (vol_var_long_int, vol_var__Float64)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_long_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32sub_290 (void)
{
  extern typeof (f32sub (vol_var_long_int, vol_var__Float64x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_long_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32sub_291 (void)
{
  extern typeof (f32sub (vol_var_long_int, vol_var__Float128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_long_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_292 (void)
{
  extern typeof (f32sub (vol_var_long_int, vol_var_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_long_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_293 (void)
{
  extern typeof (f32sub (vol_var_long_int, vol_var_signed_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_long_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_294 (void)
{
  extern typeof (f32sub (vol_var_long_int, vol_var_unsigned_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_long_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_295 (void)
{
  extern typeof (f32sub (vol_var_long_int, vol_var_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_long_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_296 (void)
{
  extern typeof (f32sub (vol_var_long_int, vol_var_unsigned_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_long_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_297 (void)
{
  extern typeof (f32sub (vol_var_long_int, vol_var_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_long_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_298 (void)
{
  extern typeof (f32sub (vol_var_long_int, vol_var_unsigned_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_long_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_299 (void)
{
  extern typeof (f32sub (vol_var_long_int, vol_var_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_long_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_300 (void)
{
  extern typeof (f32sub (vol_var_long_int, vol_var_unsigned_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_long_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_301 (void)
{
  extern typeof (f32sub (vol_var_long_int, vol_var_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_long_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_302 (void)
{
  extern typeof (f32sub (vol_var_long_int, vol_var_unsigned_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_long_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32sub_303 (void)
{
  extern typeof (f32sub (vol_var_long_int, vol_var___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_long_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32sub_304 (void)
{
  extern typeof (f32sub (vol_var_long_int, vol_var_unsigned___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_long_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_305 (void)
{
  extern typeof (f32sub (vol_var_long_int, vol_var_enum_e)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_long_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_306 (void)
{
  extern typeof (f32sub (vol_var_long_int, vol_var__Bool)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_long_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_307 (void)
{
  extern typeof (f32sub (vol_var_long_int, vol_var_bit_field)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_long_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32sub_308 (void)
{
  extern typeof (f32sub (vol_var_unsigned_long_int, vol_var__Float16)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_unsigned_long_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32sub_309 (void)
{
  extern typeof (f32sub (vol_var_unsigned_long_int, vol_var__Float32)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_unsigned_long_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32sub_310 (void)
{
  extern typeof (f32sub (vol_var_unsigned_long_int, vol_var__Float32x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_unsigned_long_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32sub_311 (void)
{
  extern typeof (f32sub (vol_var_unsigned_long_int, vol_var__Float64)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_unsigned_long_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32sub_312 (void)
{
  extern typeof (f32sub (vol_var_unsigned_long_int, vol_var__Float64x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_unsigned_long_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32sub_313 (void)
{
  extern typeof (f32sub (vol_var_unsigned_long_int, vol_var__Float128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_unsigned_long_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_314 (void)
{
  extern typeof (f32sub (vol_var_unsigned_long_int, vol_var_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_unsigned_long_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_315 (void)
{
  extern typeof (f32sub (vol_var_unsigned_long_int, vol_var_signed_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_unsigned_long_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_316 (void)
{
  extern typeof (f32sub (vol_var_unsigned_long_int, vol_var_unsigned_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_unsigned_long_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_317 (void)
{
  extern typeof (f32sub (vol_var_unsigned_long_int, vol_var_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_unsigned_long_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_318 (void)
{
  extern typeof (f32sub (vol_var_unsigned_long_int, vol_var_unsigned_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_unsigned_long_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_319 (void)
{
  extern typeof (f32sub (vol_var_unsigned_long_int, vol_var_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_unsigned_long_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_320 (void)
{
  extern typeof (f32sub (vol_var_unsigned_long_int, vol_var_unsigned_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_unsigned_long_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_321 (void)
{
  extern typeof (f32sub (vol_var_unsigned_long_int, vol_var_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_unsigned_long_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_322 (void)
{
  extern typeof (f32sub (vol_var_unsigned_long_int, vol_var_unsigned_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_unsigned_long_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_323 (void)
{
  extern typeof (f32sub (vol_var_unsigned_long_int, vol_var_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_unsigned_long_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_324 (void)
{
  extern typeof (f32sub (vol_var_unsigned_long_int, vol_var_unsigned_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_unsigned_long_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32sub_325 (void)
{
  extern typeof (f32sub (vol_var_unsigned_long_int, vol_var___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_unsigned_long_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32sub_326 (void)
{
  extern typeof (f32sub (vol_var_unsigned_long_int, vol_var_unsigned___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_unsigned_long_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_327 (void)
{
  extern typeof (f32sub (vol_var_unsigned_long_int, vol_var_enum_e)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_unsigned_long_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_328 (void)
{
  extern typeof (f32sub (vol_var_unsigned_long_int, vol_var__Bool)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_unsigned_long_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_329 (void)
{
  extern typeof (f32sub (vol_var_unsigned_long_int, vol_var_bit_field)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_unsigned_long_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32sub_330 (void)
{
  extern typeof (f32sub (vol_var_long_long_int, vol_var__Float16)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_long_long_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32sub_331 (void)
{
  extern typeof (f32sub (vol_var_long_long_int, vol_var__Float32)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_long_long_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32sub_332 (void)
{
  extern typeof (f32sub (vol_var_long_long_int, vol_var__Float32x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_long_long_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32sub_333 (void)
{
  extern typeof (f32sub (vol_var_long_long_int, vol_var__Float64)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_long_long_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32sub_334 (void)
{
  extern typeof (f32sub (vol_var_long_long_int, vol_var__Float64x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_long_long_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32sub_335 (void)
{
  extern typeof (f32sub (vol_var_long_long_int, vol_var__Float128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_long_long_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_336 (void)
{
  extern typeof (f32sub (vol_var_long_long_int, vol_var_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_long_long_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_337 (void)
{
  extern typeof (f32sub (vol_var_long_long_int, vol_var_signed_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_long_long_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_338 (void)
{
  extern typeof (f32sub (vol_var_long_long_int, vol_var_unsigned_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_long_long_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_339 (void)
{
  extern typeof (f32sub (vol_var_long_long_int, vol_var_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_long_long_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_340 (void)
{
  extern typeof (f32sub (vol_var_long_long_int, vol_var_unsigned_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_long_long_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_341 (void)
{
  extern typeof (f32sub (vol_var_long_long_int, vol_var_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_long_long_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_342 (void)
{
  extern typeof (f32sub (vol_var_long_long_int, vol_var_unsigned_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_long_long_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_343 (void)
{
  extern typeof (f32sub (vol_var_long_long_int, vol_var_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_long_long_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_344 (void)
{
  extern typeof (f32sub (vol_var_long_long_int, vol_var_unsigned_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_long_long_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_345 (void)
{
  extern typeof (f32sub (vol_var_long_long_int, vol_var_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_long_long_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_346 (void)
{
  extern typeof (f32sub (vol_var_long_long_int, vol_var_unsigned_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_long_long_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32sub_347 (void)
{
  extern typeof (f32sub (vol_var_long_long_int, vol_var___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_long_long_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32sub_348 (void)
{
  extern typeof (f32sub (vol_var_long_long_int, vol_var_unsigned___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_long_long_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_349 (void)
{
  extern typeof (f32sub (vol_var_long_long_int, vol_var_enum_e)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_long_long_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_350 (void)
{
  extern typeof (f32sub (vol_var_long_long_int, vol_var__Bool)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_long_long_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_351 (void)
{
  extern typeof (f32sub (vol_var_long_long_int, vol_var_bit_field)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_long_long_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32sub_352 (void)
{
  extern typeof (f32sub (vol_var_unsigned_long_long_int, vol_var__Float16)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_unsigned_long_long_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32sub_353 (void)
{
  extern typeof (f32sub (vol_var_unsigned_long_long_int, vol_var__Float32)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_unsigned_long_long_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32sub_354 (void)
{
  extern typeof (f32sub (vol_var_unsigned_long_long_int, vol_var__Float32x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_unsigned_long_long_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32sub_355 (void)
{
  extern typeof (f32sub (vol_var_unsigned_long_long_int, vol_var__Float64)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_unsigned_long_long_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32sub_356 (void)
{
  extern typeof (f32sub (vol_var_unsigned_long_long_int, vol_var__Float64x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_unsigned_long_long_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32sub_357 (void)
{
  extern typeof (f32sub (vol_var_unsigned_long_long_int, vol_var__Float128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_unsigned_long_long_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_358 (void)
{
  extern typeof (f32sub (vol_var_unsigned_long_long_int, vol_var_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_unsigned_long_long_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_359 (void)
{
  extern typeof (f32sub (vol_var_unsigned_long_long_int, vol_var_signed_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_unsigned_long_long_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_360 (void)
{
  extern typeof (f32sub (vol_var_unsigned_long_long_int, vol_var_unsigned_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_unsigned_long_long_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_361 (void)
{
  extern typeof (f32sub (vol_var_unsigned_long_long_int, vol_var_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_unsigned_long_long_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_362 (void)
{
  extern typeof (f32sub (vol_var_unsigned_long_long_int, vol_var_unsigned_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_unsigned_long_long_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_363 (void)
{
  extern typeof (f32sub (vol_var_unsigned_long_long_int, vol_var_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_unsigned_long_long_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_364 (void)
{
  extern typeof (f32sub (vol_var_unsigned_long_long_int, vol_var_unsigned_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_unsigned_long_long_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_365 (void)
{
  extern typeof (f32sub (vol_var_unsigned_long_long_int, vol_var_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_unsigned_long_long_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_366 (void)
{
  extern typeof (f32sub (vol_var_unsigned_long_long_int, vol_var_unsigned_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_unsigned_long_long_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_367 (void)
{
  extern typeof (f32sub (vol_var_unsigned_long_long_int, vol_var_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_unsigned_long_long_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_368 (void)
{
  extern typeof (f32sub (vol_var_unsigned_long_long_int, vol_var_unsigned_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_unsigned_long_long_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32sub_369 (void)
{
  extern typeof (f32sub (vol_var_unsigned_long_long_int, vol_var___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_unsigned_long_long_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32sub_370 (void)
{
  extern typeof (f32sub (vol_var_unsigned_long_long_int, vol_var_unsigned___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_unsigned_long_long_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_371 (void)
{
  extern typeof (f32sub (vol_var_unsigned_long_long_int, vol_var_enum_e)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_unsigned_long_long_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_372 (void)
{
  extern typeof (f32sub (vol_var_unsigned_long_long_int, vol_var__Bool)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_unsigned_long_long_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_373 (void)
{
  extern typeof (f32sub (vol_var_unsigned_long_long_int, vol_var_bit_field)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_unsigned_long_long_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_f32sub_374 (void)
{
  extern typeof (f32sub (vol_var___int128, vol_var__Float16)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var___int128, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_f32sub_375 (void)
{
  extern typeof (f32sub (vol_var___int128, vol_var__Float32)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var___int128, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_f32sub_376 (void)
{
  extern typeof (f32sub (vol_var___int128, vol_var__Float32x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var___int128, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_f32sub_377 (void)
{
  extern typeof (f32sub (vol_var___int128, vol_var__Float64)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var___int128, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_f32sub_378 (void)
{
  extern typeof (f32sub (vol_var___int128, vol_var__Float64x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var___int128, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_f32sub_379 (void)
{
  extern typeof (f32sub (vol_var___int128, vol_var__Float128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var___int128, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32sub_380 (void)
{
  extern typeof (f32sub (vol_var___int128, vol_var_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var___int128, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32sub_381 (void)
{
  extern typeof (f32sub (vol_var___int128, vol_var_signed_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var___int128, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32sub_382 (void)
{
  extern typeof (f32sub (vol_var___int128, vol_var_unsigned_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var___int128, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32sub_383 (void)
{
  extern typeof (f32sub (vol_var___int128, vol_var_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var___int128, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32sub_384 (void)
{
  extern typeof (f32sub (vol_var___int128, vol_var_unsigned_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var___int128, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32sub_385 (void)
{
  extern typeof (f32sub (vol_var___int128, vol_var_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var___int128, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32sub_386 (void)
{
  extern typeof (f32sub (vol_var___int128, vol_var_unsigned_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var___int128, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32sub_387 (void)
{
  extern typeof (f32sub (vol_var___int128, vol_var_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var___int128, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32sub_388 (void)
{
  extern typeof (f32sub (vol_var___int128, vol_var_unsigned_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var___int128, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32sub_389 (void)
{
  extern typeof (f32sub (vol_var___int128, vol_var_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var___int128, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32sub_390 (void)
{
  extern typeof (f32sub (vol_var___int128, vol_var_unsigned_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var___int128, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32sub_391 (void)
{
  extern typeof (f32sub (vol_var___int128, vol_var___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var___int128, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32sub_392 (void)
{
  extern typeof (f32sub (vol_var___int128, vol_var_unsigned___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var___int128, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32sub_393 (void)
{
  extern typeof (f32sub (vol_var___int128, vol_var_enum_e)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var___int128, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32sub_394 (void)
{
  extern typeof (f32sub (vol_var___int128, vol_var__Bool)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var___int128, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32sub_395 (void)
{
  extern typeof (f32sub (vol_var___int128, vol_var_bit_field)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var___int128, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_f32sub_396 (void)
{
  extern typeof (f32sub (vol_var_unsigned___int128, vol_var__Float16)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_unsigned___int128, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_f32sub_397 (void)
{
  extern typeof (f32sub (vol_var_unsigned___int128, vol_var__Float32)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_unsigned___int128, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_f32sub_398 (void)
{
  extern typeof (f32sub (vol_var_unsigned___int128, vol_var__Float32x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_unsigned___int128, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_f32sub_399 (void)
{
  extern typeof (f32sub (vol_var_unsigned___int128, vol_var__Float64)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_unsigned___int128, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_f32sub_400 (void)
{
  extern typeof (f32sub (vol_var_unsigned___int128, vol_var__Float64x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_unsigned___int128, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_f32sub_401 (void)
{
  extern typeof (f32sub (vol_var_unsigned___int128, vol_var__Float128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_unsigned___int128, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32sub_402 (void)
{
  extern typeof (f32sub (vol_var_unsigned___int128, vol_var_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_unsigned___int128, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32sub_403 (void)
{
  extern typeof (f32sub (vol_var_unsigned___int128, vol_var_signed_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_unsigned___int128, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32sub_404 (void)
{
  extern typeof (f32sub (vol_var_unsigned___int128, vol_var_unsigned_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_unsigned___int128, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32sub_405 (void)
{
  extern typeof (f32sub (vol_var_unsigned___int128, vol_var_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_unsigned___int128, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32sub_406 (void)
{
  extern typeof (f32sub (vol_var_unsigned___int128, vol_var_unsigned_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_unsigned___int128, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32sub_407 (void)
{
  extern typeof (f32sub (vol_var_unsigned___int128, vol_var_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_unsigned___int128, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32sub_408 (void)
{
  extern typeof (f32sub (vol_var_unsigned___int128, vol_var_unsigned_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_unsigned___int128, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32sub_409 (void)
{
  extern typeof (f32sub (vol_var_unsigned___int128, vol_var_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_unsigned___int128, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32sub_410 (void)
{
  extern typeof (f32sub (vol_var_unsigned___int128, vol_var_unsigned_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_unsigned___int128, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32sub_411 (void)
{
  extern typeof (f32sub (vol_var_unsigned___int128, vol_var_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_unsigned___int128, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32sub_412 (void)
{
  extern typeof (f32sub (vol_var_unsigned___int128, vol_var_unsigned_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_unsigned___int128, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32sub_413 (void)
{
  extern typeof (f32sub (vol_var_unsigned___int128, vol_var___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_unsigned___int128, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32sub_414 (void)
{
  extern typeof (f32sub (vol_var_unsigned___int128, vol_var_unsigned___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_unsigned___int128, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32sub_415 (void)
{
  extern typeof (f32sub (vol_var_unsigned___int128, vol_var_enum_e)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_unsigned___int128, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32sub_416 (void)
{
  extern typeof (f32sub (vol_var_unsigned___int128, vol_var__Bool)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_unsigned___int128, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32sub_417 (void)
{
  extern typeof (f32sub (vol_var_unsigned___int128, vol_var_bit_field)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_unsigned___int128, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32sub_418 (void)
{
  extern typeof (f32sub (vol_var_enum_e, vol_var__Float16)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_enum_e, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32sub_419 (void)
{
  extern typeof (f32sub (vol_var_enum_e, vol_var__Float32)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_enum_e, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32sub_420 (void)
{
  extern typeof (f32sub (vol_var_enum_e, vol_var__Float32x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_enum_e, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32sub_421 (void)
{
  extern typeof (f32sub (vol_var_enum_e, vol_var__Float64)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_enum_e, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32sub_422 (void)
{
  extern typeof (f32sub (vol_var_enum_e, vol_var__Float64x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_enum_e, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32sub_423 (void)
{
  extern typeof (f32sub (vol_var_enum_e, vol_var__Float128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_enum_e, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_424 (void)
{
  extern typeof (f32sub (vol_var_enum_e, vol_var_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_enum_e, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_425 (void)
{
  extern typeof (f32sub (vol_var_enum_e, vol_var_signed_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_enum_e, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_426 (void)
{
  extern typeof (f32sub (vol_var_enum_e, vol_var_unsigned_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_enum_e, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_427 (void)
{
  extern typeof (f32sub (vol_var_enum_e, vol_var_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_enum_e, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_428 (void)
{
  extern typeof (f32sub (vol_var_enum_e, vol_var_unsigned_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_enum_e, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_429 (void)
{
  extern typeof (f32sub (vol_var_enum_e, vol_var_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_enum_e, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_430 (void)
{
  extern typeof (f32sub (vol_var_enum_e, vol_var_unsigned_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_enum_e, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_431 (void)
{
  extern typeof (f32sub (vol_var_enum_e, vol_var_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_enum_e, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_432 (void)
{
  extern typeof (f32sub (vol_var_enum_e, vol_var_unsigned_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_enum_e, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_433 (void)
{
  extern typeof (f32sub (vol_var_enum_e, vol_var_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_enum_e, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_434 (void)
{
  extern typeof (f32sub (vol_var_enum_e, vol_var_unsigned_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_enum_e, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32sub_435 (void)
{
  extern typeof (f32sub (vol_var_enum_e, vol_var___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_enum_e, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32sub_436 (void)
{
  extern typeof (f32sub (vol_var_enum_e, vol_var_unsigned___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_enum_e, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_437 (void)
{
  extern typeof (f32sub (vol_var_enum_e, vol_var_enum_e)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_enum_e, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_438 (void)
{
  extern typeof (f32sub (vol_var_enum_e, vol_var__Bool)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_enum_e, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_439 (void)
{
  extern typeof (f32sub (vol_var_enum_e, vol_var_bit_field)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_enum_e, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32sub_440 (void)
{
  extern typeof (f32sub (vol_var__Bool, vol_var__Float16)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Bool, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32sub_441 (void)
{
  extern typeof (f32sub (vol_var__Bool, vol_var__Float32)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Bool, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32sub_442 (void)
{
  extern typeof (f32sub (vol_var__Bool, vol_var__Float32x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Bool, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32sub_443 (void)
{
  extern typeof (f32sub (vol_var__Bool, vol_var__Float64)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Bool, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32sub_444 (void)
{
  extern typeof (f32sub (vol_var__Bool, vol_var__Float64x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Bool, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32sub_445 (void)
{
  extern typeof (f32sub (vol_var__Bool, vol_var__Float128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Bool, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_446 (void)
{
  extern typeof (f32sub (vol_var__Bool, vol_var_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Bool, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_447 (void)
{
  extern typeof (f32sub (vol_var__Bool, vol_var_signed_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Bool, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_448 (void)
{
  extern typeof (f32sub (vol_var__Bool, vol_var_unsigned_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Bool, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_449 (void)
{
  extern typeof (f32sub (vol_var__Bool, vol_var_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Bool, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_450 (void)
{
  extern typeof (f32sub (vol_var__Bool, vol_var_unsigned_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Bool, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_451 (void)
{
  extern typeof (f32sub (vol_var__Bool, vol_var_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Bool, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_452 (void)
{
  extern typeof (f32sub (vol_var__Bool, vol_var_unsigned_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Bool, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_453 (void)
{
  extern typeof (f32sub (vol_var__Bool, vol_var_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Bool, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_454 (void)
{
  extern typeof (f32sub (vol_var__Bool, vol_var_unsigned_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Bool, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_455 (void)
{
  extern typeof (f32sub (vol_var__Bool, vol_var_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Bool, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_456 (void)
{
  extern typeof (f32sub (vol_var__Bool, vol_var_unsigned_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Bool, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32sub_457 (void)
{
  extern typeof (f32sub (vol_var__Bool, vol_var___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Bool, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32sub_458 (void)
{
  extern typeof (f32sub (vol_var__Bool, vol_var_unsigned___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Bool, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_459 (void)
{
  extern typeof (f32sub (vol_var__Bool, vol_var_enum_e)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Bool, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_460 (void)
{
  extern typeof (f32sub (vol_var__Bool, vol_var__Bool)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Bool, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_461 (void)
{
  extern typeof (f32sub (vol_var__Bool, vol_var_bit_field)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var__Bool, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32sub_462 (void)
{
  extern typeof (f32sub (vol_var_bit_field, vol_var__Float16)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_bit_field, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32sub_463 (void)
{
  extern typeof (f32sub (vol_var_bit_field, vol_var__Float32)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_bit_field, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32sub_464 (void)
{
  extern typeof (f32sub (vol_var_bit_field, vol_var__Float32x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_bit_field, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32sub_465 (void)
{
  extern typeof (f32sub (vol_var_bit_field, vol_var__Float64)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_bit_field, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32sub_466 (void)
{
  extern typeof (f32sub (vol_var_bit_field, vol_var__Float64x)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_bit_field, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32sub_467 (void)
{
  extern typeof (f32sub (vol_var_bit_field, vol_var__Float128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_bit_field, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_468 (void)
{
  extern typeof (f32sub (vol_var_bit_field, vol_var_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_bit_field, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_469 (void)
{
  extern typeof (f32sub (vol_var_bit_field, vol_var_signed_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_bit_field, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_470 (void)
{
  extern typeof (f32sub (vol_var_bit_field, vol_var_unsigned_char)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_bit_field, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_471 (void)
{
  extern typeof (f32sub (vol_var_bit_field, vol_var_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_bit_field, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_472 (void)
{
  extern typeof (f32sub (vol_var_bit_field, vol_var_unsigned_short_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_bit_field, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_473 (void)
{
  extern typeof (f32sub (vol_var_bit_field, vol_var_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_bit_field, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_474 (void)
{
  extern typeof (f32sub (vol_var_bit_field, vol_var_unsigned_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_bit_field, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_475 (void)
{
  extern typeof (f32sub (vol_var_bit_field, vol_var_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_bit_field, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_476 (void)
{
  extern typeof (f32sub (vol_var_bit_field, vol_var_unsigned_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_bit_field, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_477 (void)
{
  extern typeof (f32sub (vol_var_bit_field, vol_var_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_bit_field, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_478 (void)
{
  extern typeof (f32sub (vol_var_bit_field, vol_var_unsigned_long_long_int)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_bit_field, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32sub_479 (void)
{
  extern typeof (f32sub (vol_var_bit_field, vol_var___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_bit_field, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32sub_480 (void)
{
  extern typeof (f32sub (vol_var_bit_field, vol_var_unsigned___int128)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_bit_field, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_481 (void)
{
  extern typeof (f32sub (vol_var_bit_field, vol_var_enum_e)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_bit_field, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_482 (void)
{
  extern typeof (f32sub (vol_var_bit_field, vol_var__Bool)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_bit_field, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32sub_483 (void)
{
  extern typeof (f32sub (vol_var_bit_field, vol_var_bit_field)) var__Float32 __attribute__ ((unused));
  vol_var__Float32 = f32sub (vol_var_bit_field, vol_var_bit_field);
}
#endif
static const struct test tests[] =
  {
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32sub_0, "f32sub", "f32sub (_Float16, _Float16)", FLT64_MANT_DIG, FLT16_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32
    { test_f32sub_1, "f32sub", "f32sub (_Float16, _Float32)", FLT64_MANT_DIG, FLT32_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
    { test_f32sub_2, "f32sub", "f32sub (_Float16, _Float32x)", FLT32X_MANT_DIG, FLT32X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64
    { test_f32sub_3, "f32sub", "f32sub (_Float16, _Float64)", FLT64_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
    { test_f32sub_4, "f32sub", "f32sub (_Float16, _Float64x)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F16
    { test_f32sub_5, "f32sub", "f32sub (_Float16, _Float128)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32sub_6, "f32sub", "f32sub (_Float16, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32sub_7, "f32sub", "f32sub (_Float16, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32sub_8, "f32sub", "f32sub (_Float16, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32sub_9, "f32sub", "f32sub (_Float16, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32sub_10, "f32sub", "f32sub (_Float16, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32sub_11, "f32sub", "f32sub (_Float16, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32sub_12, "f32sub", "f32sub (_Float16, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32sub_13, "f32sub", "f32sub (_Float16, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32sub_14, "f32sub", "f32sub (_Float16, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32sub_15, "f32sub", "f32sub (_Float16, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32sub_16, "f32sub", "f32sub (_Float16, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_f32sub_17, "f32sub", "f32sub (_Float16, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_f32sub_18, "f32sub", "f32sub (_Float16, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32sub_19, "f32sub", "f32sub (_Float16, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32sub_20, "f32sub", "f32sub (_Float16, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32sub_21, "f32sub", "f32sub (_Float16, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32
    { test_f32sub_22, "f32sub", "f32sub (_Float32, _Float16)", FLT64_MANT_DIG, FLT32_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32sub_23, "f32sub", "f32sub (_Float32, _Float32)", FLT64_MANT_DIG, FLT32_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
    { test_f32sub_24, "f32sub", "f32sub (_Float32, _Float32x)", FLT32X_MANT_DIG, FLT32X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64
    { test_f32sub_25, "f32sub", "f32sub (_Float32, _Float64)", FLT64_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
    { test_f32sub_26, "f32sub", "f32sub (_Float32, _Float64x)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32
    { test_f32sub_27, "f32sub", "f32sub (_Float32, _Float128)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32sub_28, "f32sub", "f32sub (_Float32, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32sub_29, "f32sub", "f32sub (_Float32, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32sub_30, "f32sub", "f32sub (_Float32, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32sub_31, "f32sub", "f32sub (_Float32, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32sub_32, "f32sub", "f32sub (_Float32, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32sub_33, "f32sub", "f32sub (_Float32, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32sub_34, "f32sub", "f32sub (_Float32, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32sub_35, "f32sub", "f32sub (_Float32, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32sub_36, "f32sub", "f32sub (_Float32, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32sub_37, "f32sub", "f32sub (_Float32, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32sub_38, "f32sub", "f32sub (_Float32, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_f32sub_39, "f32sub", "f32sub (_Float32, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_f32sub_40, "f32sub", "f32sub (_Float32, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32sub_41, "f32sub", "f32sub (_Float32, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32sub_42, "f32sub", "f32sub (_Float32, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32sub_43, "f32sub", "f32sub (_Float32, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
    { test_f32sub_44, "f32sub", "f32sub (_Float32x, _Float16)", FLT32X_MANT_DIG, FLT32X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
    { test_f32sub_45, "f32sub", "f32sub (_Float32x, _Float32)", FLT32X_MANT_DIG, FLT32X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32sub_46, "f32sub", "f32sub (_Float32x, _Float32x)", FLT32X_MANT_DIG, FLT32X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64
    { test_f32sub_47, "f32sub", "f32sub (_Float32x, _Float64)", FLT64_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
    { test_f32sub_48, "f32sub", "f32sub (_Float32x, _Float64x)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
    { test_f32sub_49, "f32sub", "f32sub (_Float32x, _Float128)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32sub_50, "f32sub", "f32sub (_Float32x, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32sub_51, "f32sub", "f32sub (_Float32x, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32sub_52, "f32sub", "f32sub (_Float32x, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32sub_53, "f32sub", "f32sub (_Float32x, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32sub_54, "f32sub", "f32sub (_Float32x, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32sub_55, "f32sub", "f32sub (_Float32x, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32sub_56, "f32sub", "f32sub (_Float32x, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32sub_57, "f32sub", "f32sub (_Float32x, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32sub_58, "f32sub", "f32sub (_Float32x, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32sub_59, "f32sub", "f32sub (_Float32x, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32sub_60, "f32sub", "f32sub (_Float32x, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_f32sub_61, "f32sub", "f32sub (_Float32x, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_f32sub_62, "f32sub", "f32sub (_Float32x, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32sub_63, "f32sub", "f32sub (_Float32x, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32sub_64, "f32sub", "f32sub (_Float32x, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32sub_65, "f32sub", "f32sub (_Float32x, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64
    { test_f32sub_66, "f32sub", "f32sub (_Float64, _Float16)", FLT64_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64
    { test_f32sub_67, "f32sub", "f32sub (_Float64, _Float32)", FLT64_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64
    { test_f32sub_68, "f32sub", "f32sub (_Float64, _Float32x)", FLT64_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32sub_69, "f32sub", "f32sub (_Float64, _Float64)", FLT64_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
    { test_f32sub_70, "f32sub", "f32sub (_Float64, _Float64x)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64
    { test_f32sub_71, "f32sub", "f32sub (_Float64, _Float128)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32sub_72, "f32sub", "f32sub (_Float64, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32sub_73, "f32sub", "f32sub (_Float64, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32sub_74, "f32sub", "f32sub (_Float64, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32sub_75, "f32sub", "f32sub (_Float64, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32sub_76, "f32sub", "f32sub (_Float64, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32sub_77, "f32sub", "f32sub (_Float64, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32sub_78, "f32sub", "f32sub (_Float64, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32sub_79, "f32sub", "f32sub (_Float64, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32sub_80, "f32sub", "f32sub (_Float64, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32sub_81, "f32sub", "f32sub (_Float64, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32sub_82, "f32sub", "f32sub (_Float64, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_f32sub_83, "f32sub", "f32sub (_Float64, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_f32sub_84, "f32sub", "f32sub (_Float64, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32sub_85, "f32sub", "f32sub (_Float64, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32sub_86, "f32sub", "f32sub (_Float64, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32sub_87, "f32sub", "f32sub (_Float64, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
    { test_f32sub_88, "f32sub", "f32sub (_Float64x, _Float16)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
    { test_f32sub_89, "f32sub", "f32sub (_Float64x, _Float32)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
    { test_f32sub_90, "f32sub", "f32sub (_Float64x, _Float32x)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
    { test_f32sub_91, "f32sub", "f32sub (_Float64x, _Float64)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32sub_92, "f32sub", "f32sub (_Float64x, _Float64x)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
    { test_f32sub_93, "f32sub", "f32sub (_Float64x, _Float128)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32sub_94, "f32sub", "f32sub (_Float64x, char)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32sub_95, "f32sub", "f32sub (_Float64x, signed char)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32sub_96, "f32sub", "f32sub (_Float64x, unsigned char)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32sub_97, "f32sub", "f32sub (_Float64x, short int)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32sub_98, "f32sub", "f32sub (_Float64x, unsigned short int)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32sub_99, "f32sub", "f32sub (_Float64x, int)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32sub_100, "f32sub", "f32sub (_Float64x, unsigned int)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32sub_101, "f32sub", "f32sub (_Float64x, long int)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32sub_102, "f32sub", "f32sub (_Float64x, unsigned long int)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32sub_103, "f32sub", "f32sub (_Float64x, long long int)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32sub_104, "f32sub", "f32sub (_Float64x, unsigned long long int)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_f32sub_105, "f32sub", "f32sub (_Float64x, __int128)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_f32sub_106, "f32sub", "f32sub (_Float64x, unsigned __int128)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32sub_107, "f32sub", "f32sub (_Float64x, enum e)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32sub_108, "f32sub", "f32sub (_Float64x, _Bool)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32sub_109, "f32sub", "f32sub (_Float64x, bit_field)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F16
    { test_f32sub_110, "f32sub", "f32sub (_Float128, _Float16)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32
    { test_f32sub_111, "f32sub", "f32sub (_Float128, _Float32)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
    { test_f32sub_112, "f32sub", "f32sub (_Float128, _Float32x)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64
    { test_f32sub_113, "f32sub", "f32sub (_Float128, _Float64)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
    { test_f32sub_114, "f32sub", "f32sub (_Float128, _Float64x)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32sub_115, "f32sub", "f32sub (_Float128, _Float128)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32sub_116, "f32sub", "f32sub (_Float128, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32sub_117, "f32sub", "f32sub (_Float128, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32sub_118, "f32sub", "f32sub (_Float128, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32sub_119, "f32sub", "f32sub (_Float128, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32sub_120, "f32sub", "f32sub (_Float128, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32sub_121, "f32sub", "f32sub (_Float128, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32sub_122, "f32sub", "f32sub (_Float128, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32sub_123, "f32sub", "f32sub (_Float128, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32sub_124, "f32sub", "f32sub (_Float128, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32sub_125, "f32sub", "f32sub (_Float128, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32sub_126, "f32sub", "f32sub (_Float128, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_f32sub_127, "f32sub", "f32sub (_Float128, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_f32sub_128, "f32sub", "f32sub (_Float128, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32sub_129, "f32sub", "f32sub (_Float128, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32sub_130, "f32sub", "f32sub (_Float128, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32sub_131, "f32sub", "f32sub (_Float128, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32sub_132, "f32sub", "f32sub (char, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32sub_133, "f32sub", "f32sub (char, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32sub_134, "f32sub", "f32sub (char, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32sub_135, "f32sub", "f32sub (char, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32sub_136, "f32sub", "f32sub (char, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32sub_137, "f32sub", "f32sub (char, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_138, "f32sub", "f32sub (char, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_139, "f32sub", "f32sub (char, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_140, "f32sub", "f32sub (char, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_141, "f32sub", "f32sub (char, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_142, "f32sub", "f32sub (char, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_143, "f32sub", "f32sub (char, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_144, "f32sub", "f32sub (char, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_145, "f32sub", "f32sub (char, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_146, "f32sub", "f32sub (char, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_147, "f32sub", "f32sub (char, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_148, "f32sub", "f32sub (char, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32sub_149, "f32sub", "f32sub (char, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32sub_150, "f32sub", "f32sub (char, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_151, "f32sub", "f32sub (char, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_152, "f32sub", "f32sub (char, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_153, "f32sub", "f32sub (char, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32sub_154, "f32sub", "f32sub (signed char, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32sub_155, "f32sub", "f32sub (signed char, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32sub_156, "f32sub", "f32sub (signed char, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32sub_157, "f32sub", "f32sub (signed char, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32sub_158, "f32sub", "f32sub (signed char, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32sub_159, "f32sub", "f32sub (signed char, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_160, "f32sub", "f32sub (signed char, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_161, "f32sub", "f32sub (signed char, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_162, "f32sub", "f32sub (signed char, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_163, "f32sub", "f32sub (signed char, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_164, "f32sub", "f32sub (signed char, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_165, "f32sub", "f32sub (signed char, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_166, "f32sub", "f32sub (signed char, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_167, "f32sub", "f32sub (signed char, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_168, "f32sub", "f32sub (signed char, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_169, "f32sub", "f32sub (signed char, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_170, "f32sub", "f32sub (signed char, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32sub_171, "f32sub", "f32sub (signed char, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32sub_172, "f32sub", "f32sub (signed char, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_173, "f32sub", "f32sub (signed char, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_174, "f32sub", "f32sub (signed char, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_175, "f32sub", "f32sub (signed char, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32sub_176, "f32sub", "f32sub (unsigned char, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32sub_177, "f32sub", "f32sub (unsigned char, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32sub_178, "f32sub", "f32sub (unsigned char, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32sub_179, "f32sub", "f32sub (unsigned char, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32sub_180, "f32sub", "f32sub (unsigned char, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32sub_181, "f32sub", "f32sub (unsigned char, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_182, "f32sub", "f32sub (unsigned char, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_183, "f32sub", "f32sub (unsigned char, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_184, "f32sub", "f32sub (unsigned char, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_185, "f32sub", "f32sub (unsigned char, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_186, "f32sub", "f32sub (unsigned char, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_187, "f32sub", "f32sub (unsigned char, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_188, "f32sub", "f32sub (unsigned char, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_189, "f32sub", "f32sub (unsigned char, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_190, "f32sub", "f32sub (unsigned char, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_191, "f32sub", "f32sub (unsigned char, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_192, "f32sub", "f32sub (unsigned char, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32sub_193, "f32sub", "f32sub (unsigned char, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32sub_194, "f32sub", "f32sub (unsigned char, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_195, "f32sub", "f32sub (unsigned char, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_196, "f32sub", "f32sub (unsigned char, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_197, "f32sub", "f32sub (unsigned char, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32sub_198, "f32sub", "f32sub (short int, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32sub_199, "f32sub", "f32sub (short int, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32sub_200, "f32sub", "f32sub (short int, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32sub_201, "f32sub", "f32sub (short int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32sub_202, "f32sub", "f32sub (short int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32sub_203, "f32sub", "f32sub (short int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_204, "f32sub", "f32sub (short int, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_205, "f32sub", "f32sub (short int, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_206, "f32sub", "f32sub (short int, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_207, "f32sub", "f32sub (short int, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_208, "f32sub", "f32sub (short int, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_209, "f32sub", "f32sub (short int, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_210, "f32sub", "f32sub (short int, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_211, "f32sub", "f32sub (short int, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_212, "f32sub", "f32sub (short int, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_213, "f32sub", "f32sub (short int, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_214, "f32sub", "f32sub (short int, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32sub_215, "f32sub", "f32sub (short int, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32sub_216, "f32sub", "f32sub (short int, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_217, "f32sub", "f32sub (short int, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_218, "f32sub", "f32sub (short int, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_219, "f32sub", "f32sub (short int, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32sub_220, "f32sub", "f32sub (unsigned short int, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32sub_221, "f32sub", "f32sub (unsigned short int, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32sub_222, "f32sub", "f32sub (unsigned short int, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32sub_223, "f32sub", "f32sub (unsigned short int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32sub_224, "f32sub", "f32sub (unsigned short int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32sub_225, "f32sub", "f32sub (unsigned short int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_226, "f32sub", "f32sub (unsigned short int, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_227, "f32sub", "f32sub (unsigned short int, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_228, "f32sub", "f32sub (unsigned short int, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_229, "f32sub", "f32sub (unsigned short int, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_230, "f32sub", "f32sub (unsigned short int, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_231, "f32sub", "f32sub (unsigned short int, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_232, "f32sub", "f32sub (unsigned short int, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_233, "f32sub", "f32sub (unsigned short int, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_234, "f32sub", "f32sub (unsigned short int, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_235, "f32sub", "f32sub (unsigned short int, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_236, "f32sub", "f32sub (unsigned short int, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32sub_237, "f32sub", "f32sub (unsigned short int, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32sub_238, "f32sub", "f32sub (unsigned short int, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_239, "f32sub", "f32sub (unsigned short int, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_240, "f32sub", "f32sub (unsigned short int, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_241, "f32sub", "f32sub (unsigned short int, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32sub_242, "f32sub", "f32sub (int, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32sub_243, "f32sub", "f32sub (int, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32sub_244, "f32sub", "f32sub (int, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32sub_245, "f32sub", "f32sub (int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32sub_246, "f32sub", "f32sub (int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32sub_247, "f32sub", "f32sub (int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_248, "f32sub", "f32sub (int, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_249, "f32sub", "f32sub (int, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_250, "f32sub", "f32sub (int, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_251, "f32sub", "f32sub (int, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_252, "f32sub", "f32sub (int, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_253, "f32sub", "f32sub (int, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_254, "f32sub", "f32sub (int, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_255, "f32sub", "f32sub (int, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_256, "f32sub", "f32sub (int, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_257, "f32sub", "f32sub (int, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_258, "f32sub", "f32sub (int, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32sub_259, "f32sub", "f32sub (int, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32sub_260, "f32sub", "f32sub (int, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_261, "f32sub", "f32sub (int, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_262, "f32sub", "f32sub (int, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_263, "f32sub", "f32sub (int, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32sub_264, "f32sub", "f32sub (unsigned int, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32sub_265, "f32sub", "f32sub (unsigned int, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32sub_266, "f32sub", "f32sub (unsigned int, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32sub_267, "f32sub", "f32sub (unsigned int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32sub_268, "f32sub", "f32sub (unsigned int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32sub_269, "f32sub", "f32sub (unsigned int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_270, "f32sub", "f32sub (unsigned int, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_271, "f32sub", "f32sub (unsigned int, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_272, "f32sub", "f32sub (unsigned int, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_273, "f32sub", "f32sub (unsigned int, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_274, "f32sub", "f32sub (unsigned int, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_275, "f32sub", "f32sub (unsigned int, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_276, "f32sub", "f32sub (unsigned int, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_277, "f32sub", "f32sub (unsigned int, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_278, "f32sub", "f32sub (unsigned int, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_279, "f32sub", "f32sub (unsigned int, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_280, "f32sub", "f32sub (unsigned int, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32sub_281, "f32sub", "f32sub (unsigned int, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32sub_282, "f32sub", "f32sub (unsigned int, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_283, "f32sub", "f32sub (unsigned int, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_284, "f32sub", "f32sub (unsigned int, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_285, "f32sub", "f32sub (unsigned int, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32sub_286, "f32sub", "f32sub (long int, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32sub_287, "f32sub", "f32sub (long int, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32sub_288, "f32sub", "f32sub (long int, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32sub_289, "f32sub", "f32sub (long int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32sub_290, "f32sub", "f32sub (long int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32sub_291, "f32sub", "f32sub (long int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_292, "f32sub", "f32sub (long int, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_293, "f32sub", "f32sub (long int, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_294, "f32sub", "f32sub (long int, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_295, "f32sub", "f32sub (long int, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_296, "f32sub", "f32sub (long int, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_297, "f32sub", "f32sub (long int, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_298, "f32sub", "f32sub (long int, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_299, "f32sub", "f32sub (long int, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_300, "f32sub", "f32sub (long int, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_301, "f32sub", "f32sub (long int, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_302, "f32sub", "f32sub (long int, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32sub_303, "f32sub", "f32sub (long int, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32sub_304, "f32sub", "f32sub (long int, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_305, "f32sub", "f32sub (long int, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_306, "f32sub", "f32sub (long int, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_307, "f32sub", "f32sub (long int, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32sub_308, "f32sub", "f32sub (unsigned long int, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32sub_309, "f32sub", "f32sub (unsigned long int, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32sub_310, "f32sub", "f32sub (unsigned long int, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32sub_311, "f32sub", "f32sub (unsigned long int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32sub_312, "f32sub", "f32sub (unsigned long int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32sub_313, "f32sub", "f32sub (unsigned long int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_314, "f32sub", "f32sub (unsigned long int, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_315, "f32sub", "f32sub (unsigned long int, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_316, "f32sub", "f32sub (unsigned long int, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_317, "f32sub", "f32sub (unsigned long int, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_318, "f32sub", "f32sub (unsigned long int, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_319, "f32sub", "f32sub (unsigned long int, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_320, "f32sub", "f32sub (unsigned long int, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_321, "f32sub", "f32sub (unsigned long int, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_322, "f32sub", "f32sub (unsigned long int, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_323, "f32sub", "f32sub (unsigned long int, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_324, "f32sub", "f32sub (unsigned long int, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32sub_325, "f32sub", "f32sub (unsigned long int, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32sub_326, "f32sub", "f32sub (unsigned long int, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_327, "f32sub", "f32sub (unsigned long int, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_328, "f32sub", "f32sub (unsigned long int, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_329, "f32sub", "f32sub (unsigned long int, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32sub_330, "f32sub", "f32sub (long long int, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32sub_331, "f32sub", "f32sub (long long int, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32sub_332, "f32sub", "f32sub (long long int, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32sub_333, "f32sub", "f32sub (long long int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32sub_334, "f32sub", "f32sub (long long int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32sub_335, "f32sub", "f32sub (long long int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_336, "f32sub", "f32sub (long long int, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_337, "f32sub", "f32sub (long long int, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_338, "f32sub", "f32sub (long long int, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_339, "f32sub", "f32sub (long long int, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_340, "f32sub", "f32sub (long long int, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_341, "f32sub", "f32sub (long long int, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_342, "f32sub", "f32sub (long long int, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_343, "f32sub", "f32sub (long long int, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_344, "f32sub", "f32sub (long long int, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_345, "f32sub", "f32sub (long long int, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_346, "f32sub", "f32sub (long long int, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32sub_347, "f32sub", "f32sub (long long int, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32sub_348, "f32sub", "f32sub (long long int, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_349, "f32sub", "f32sub (long long int, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_350, "f32sub", "f32sub (long long int, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_351, "f32sub", "f32sub (long long int, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32sub_352, "f32sub", "f32sub (unsigned long long int, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32sub_353, "f32sub", "f32sub (unsigned long long int, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32sub_354, "f32sub", "f32sub (unsigned long long int, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32sub_355, "f32sub", "f32sub (unsigned long long int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32sub_356, "f32sub", "f32sub (unsigned long long int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32sub_357, "f32sub", "f32sub (unsigned long long int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_358, "f32sub", "f32sub (unsigned long long int, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_359, "f32sub", "f32sub (unsigned long long int, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_360, "f32sub", "f32sub (unsigned long long int, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_361, "f32sub", "f32sub (unsigned long long int, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_362, "f32sub", "f32sub (unsigned long long int, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_363, "f32sub", "f32sub (unsigned long long int, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_364, "f32sub", "f32sub (unsigned long long int, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_365, "f32sub", "f32sub (unsigned long long int, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_366, "f32sub", "f32sub (unsigned long long int, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_367, "f32sub", "f32sub (unsigned long long int, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_368, "f32sub", "f32sub (unsigned long long int, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32sub_369, "f32sub", "f32sub (unsigned long long int, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32sub_370, "f32sub", "f32sub (unsigned long long int, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_371, "f32sub", "f32sub (unsigned long long int, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_372, "f32sub", "f32sub (unsigned long long int, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_373, "f32sub", "f32sub (unsigned long long int, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_f32sub_374, "f32sub", "f32sub (__int128, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_f32sub_375, "f32sub", "f32sub (__int128, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_f32sub_376, "f32sub", "f32sub (__int128, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_f32sub_377, "f32sub", "f32sub (__int128, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_f32sub_378, "f32sub", "f32sub (__int128, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_f32sub_379, "f32sub", "f32sub (__int128, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32sub_380, "f32sub", "f32sub (__int128, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32sub_381, "f32sub", "f32sub (__int128, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32sub_382, "f32sub", "f32sub (__int128, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32sub_383, "f32sub", "f32sub (__int128, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32sub_384, "f32sub", "f32sub (__int128, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32sub_385, "f32sub", "f32sub (__int128, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32sub_386, "f32sub", "f32sub (__int128, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32sub_387, "f32sub", "f32sub (__int128, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32sub_388, "f32sub", "f32sub (__int128, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32sub_389, "f32sub", "f32sub (__int128, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32sub_390, "f32sub", "f32sub (__int128, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32sub_391, "f32sub", "f32sub (__int128, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32sub_392, "f32sub", "f32sub (__int128, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32sub_393, "f32sub", "f32sub (__int128, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32sub_394, "f32sub", "f32sub (__int128, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32sub_395, "f32sub", "f32sub (__int128, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_f32sub_396, "f32sub", "f32sub (unsigned __int128, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_f32sub_397, "f32sub", "f32sub (unsigned __int128, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_f32sub_398, "f32sub", "f32sub (unsigned __int128, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_f32sub_399, "f32sub", "f32sub (unsigned __int128, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_f32sub_400, "f32sub", "f32sub (unsigned __int128, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_f32sub_401, "f32sub", "f32sub (unsigned __int128, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32sub_402, "f32sub", "f32sub (unsigned __int128, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32sub_403, "f32sub", "f32sub (unsigned __int128, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32sub_404, "f32sub", "f32sub (unsigned __int128, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32sub_405, "f32sub", "f32sub (unsigned __int128, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32sub_406, "f32sub", "f32sub (unsigned __int128, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32sub_407, "f32sub", "f32sub (unsigned __int128, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32sub_408, "f32sub", "f32sub (unsigned __int128, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32sub_409, "f32sub", "f32sub (unsigned __int128, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32sub_410, "f32sub", "f32sub (unsigned __int128, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32sub_411, "f32sub", "f32sub (unsigned __int128, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32sub_412, "f32sub", "f32sub (unsigned __int128, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32sub_413, "f32sub", "f32sub (unsigned __int128, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32sub_414, "f32sub", "f32sub (unsigned __int128, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32sub_415, "f32sub", "f32sub (unsigned __int128, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32sub_416, "f32sub", "f32sub (unsigned __int128, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32sub_417, "f32sub", "f32sub (unsigned __int128, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32sub_418, "f32sub", "f32sub (enum e, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32sub_419, "f32sub", "f32sub (enum e, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32sub_420, "f32sub", "f32sub (enum e, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32sub_421, "f32sub", "f32sub (enum e, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32sub_422, "f32sub", "f32sub (enum e, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32sub_423, "f32sub", "f32sub (enum e, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_424, "f32sub", "f32sub (enum e, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_425, "f32sub", "f32sub (enum e, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_426, "f32sub", "f32sub (enum e, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_427, "f32sub", "f32sub (enum e, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_428, "f32sub", "f32sub (enum e, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_429, "f32sub", "f32sub (enum e, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_430, "f32sub", "f32sub (enum e, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_431, "f32sub", "f32sub (enum e, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_432, "f32sub", "f32sub (enum e, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_433, "f32sub", "f32sub (enum e, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_434, "f32sub", "f32sub (enum e, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32sub_435, "f32sub", "f32sub (enum e, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32sub_436, "f32sub", "f32sub (enum e, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_437, "f32sub", "f32sub (enum e, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_438, "f32sub", "f32sub (enum e, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_439, "f32sub", "f32sub (enum e, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32sub_440, "f32sub", "f32sub (_Bool, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32sub_441, "f32sub", "f32sub (_Bool, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32sub_442, "f32sub", "f32sub (_Bool, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32sub_443, "f32sub", "f32sub (_Bool, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32sub_444, "f32sub", "f32sub (_Bool, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32sub_445, "f32sub", "f32sub (_Bool, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_446, "f32sub", "f32sub (_Bool, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_447, "f32sub", "f32sub (_Bool, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_448, "f32sub", "f32sub (_Bool, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_449, "f32sub", "f32sub (_Bool, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_450, "f32sub", "f32sub (_Bool, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_451, "f32sub", "f32sub (_Bool, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_452, "f32sub", "f32sub (_Bool, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_453, "f32sub", "f32sub (_Bool, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_454, "f32sub", "f32sub (_Bool, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_455, "f32sub", "f32sub (_Bool, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_456, "f32sub", "f32sub (_Bool, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32sub_457, "f32sub", "f32sub (_Bool, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32sub_458, "f32sub", "f32sub (_Bool, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_459, "f32sub", "f32sub (_Bool, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_460, "f32sub", "f32sub (_Bool, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_461, "f32sub", "f32sub (_Bool, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32sub_462, "f32sub", "f32sub (bit_field, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32sub_463, "f32sub", "f32sub (bit_field, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32sub_464, "f32sub", "f32sub (bit_field, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32sub_465, "f32sub", "f32sub (bit_field, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32sub_466, "f32sub", "f32sub (bit_field, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32sub_467, "f32sub", "f32sub (bit_field, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_468, "f32sub", "f32sub (bit_field, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_469, "f32sub", "f32sub (bit_field, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_470, "f32sub", "f32sub (bit_field, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_471, "f32sub", "f32sub (bit_field, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_472, "f32sub", "f32sub (bit_field, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_473, "f32sub", "f32sub (bit_field, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_474, "f32sub", "f32sub (bit_field, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_475, "f32sub", "f32sub (bit_field, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_476, "f32sub", "f32sub (bit_field, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_477, "f32sub", "f32sub (bit_field, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_478, "f32sub", "f32sub (bit_field, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32sub_479, "f32sub", "f32sub (bit_field, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32sub_480, "f32sub", "f32sub (bit_field, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_481, "f32sub", "f32sub (bit_field, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_482, "f32sub", "f32sub (bit_field, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32 && (defined HUGE_VAL_F32X || defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32sub_483, "f32sub", "f32sub (bit_field, bit_field)", FLT64_MANT_DIG, 0 },
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
