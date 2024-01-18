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
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
_Float32x
(f32xsubf64) (_Float64 arg0 __attribute__ ((unused)), _Float64 arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT64_MANT_DIG;
  called_func_name = "f32xsub";
  return 0;
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
_Float32x
(f32xsubf64x) (_Float64x arg0 __attribute__ ((unused)), _Float64x arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT64X_MANT_DIG;
  called_func_name = "f32xsub";
  return 0;
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
_Float32x
(f32xsubf128) (_Float128 arg0 __attribute__ ((unused)), _Float128 arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT128_MANT_DIG;
  called_func_name = "f32xsub";
  return 0;
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32xsub_0 (void)
{
  extern typeof (f32xsub (vol_var__Float16, vol_var__Float16)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Float16, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32
static void
test_f32xsub_1 (void)
{
  extern typeof (f32xsub (vol_var__Float16, vol_var__Float32)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Float16, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
static void
test_f32xsub_2 (void)
{
  extern typeof (f32xsub (vol_var__Float16, vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Float16, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64
static void
test_f32xsub_3 (void)
{
  extern typeof (f32xsub (vol_var__Float16, vol_var__Float64)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Float16, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
static void
test_f32xsub_4 (void)
{
  extern typeof (f32xsub (vol_var__Float16, vol_var__Float64x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Float16, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F16
static void
test_f32xsub_5 (void)
{
  extern typeof (f32xsub (vol_var__Float16, vol_var__Float128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Float16, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32xsub_6 (void)
{
  extern typeof (f32xsub (vol_var__Float16, vol_var_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Float16, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32xsub_7 (void)
{
  extern typeof (f32xsub (vol_var__Float16, vol_var_signed_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Float16, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32xsub_8 (void)
{
  extern typeof (f32xsub (vol_var__Float16, vol_var_unsigned_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Float16, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32xsub_9 (void)
{
  extern typeof (f32xsub (vol_var__Float16, vol_var_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Float16, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32xsub_10 (void)
{
  extern typeof (f32xsub (vol_var__Float16, vol_var_unsigned_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Float16, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32xsub_11 (void)
{
  extern typeof (f32xsub (vol_var__Float16, vol_var_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Float16, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32xsub_12 (void)
{
  extern typeof (f32xsub (vol_var__Float16, vol_var_unsigned_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Float16, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32xsub_13 (void)
{
  extern typeof (f32xsub (vol_var__Float16, vol_var_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Float16, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32xsub_14 (void)
{
  extern typeof (f32xsub (vol_var__Float16, vol_var_unsigned_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Float16, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32xsub_15 (void)
{
  extern typeof (f32xsub (vol_var__Float16, vol_var_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Float16, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32xsub_16 (void)
{
  extern typeof (f32xsub (vol_var__Float16, vol_var_unsigned_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Float16, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_f32xsub_17 (void)
{
  extern typeof (f32xsub (vol_var__Float16, vol_var___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Float16, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_f32xsub_18 (void)
{
  extern typeof (f32xsub (vol_var__Float16, vol_var_unsigned___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Float16, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32xsub_19 (void)
{
  extern typeof (f32xsub (vol_var__Float16, vol_var_enum_e)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Float16, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32xsub_20 (void)
{
  extern typeof (f32xsub (vol_var__Float16, vol_var__Bool)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Float16, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32xsub_21 (void)
{
  extern typeof (f32xsub (vol_var__Float16, vol_var_bit_field)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Float16, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32
static void
test_f32xsub_22 (void)
{
  extern typeof (f32xsub (vol_var__Float32, vol_var__Float16)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Float32, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32xsub_23 (void)
{
  extern typeof (f32xsub (vol_var__Float32, vol_var__Float32)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Float32, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
static void
test_f32xsub_24 (void)
{
  extern typeof (f32xsub (vol_var__Float32, vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Float32, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64
static void
test_f32xsub_25 (void)
{
  extern typeof (f32xsub (vol_var__Float32, vol_var__Float64)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Float32, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
static void
test_f32xsub_26 (void)
{
  extern typeof (f32xsub (vol_var__Float32, vol_var__Float64x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Float32, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32
static void
test_f32xsub_27 (void)
{
  extern typeof (f32xsub (vol_var__Float32, vol_var__Float128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Float32, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32xsub_28 (void)
{
  extern typeof (f32xsub (vol_var__Float32, vol_var_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Float32, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32xsub_29 (void)
{
  extern typeof (f32xsub (vol_var__Float32, vol_var_signed_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Float32, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32xsub_30 (void)
{
  extern typeof (f32xsub (vol_var__Float32, vol_var_unsigned_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Float32, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32xsub_31 (void)
{
  extern typeof (f32xsub (vol_var__Float32, vol_var_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Float32, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32xsub_32 (void)
{
  extern typeof (f32xsub (vol_var__Float32, vol_var_unsigned_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Float32, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32xsub_33 (void)
{
  extern typeof (f32xsub (vol_var__Float32, vol_var_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Float32, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32xsub_34 (void)
{
  extern typeof (f32xsub (vol_var__Float32, vol_var_unsigned_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Float32, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32xsub_35 (void)
{
  extern typeof (f32xsub (vol_var__Float32, vol_var_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Float32, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32xsub_36 (void)
{
  extern typeof (f32xsub (vol_var__Float32, vol_var_unsigned_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Float32, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32xsub_37 (void)
{
  extern typeof (f32xsub (vol_var__Float32, vol_var_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Float32, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32xsub_38 (void)
{
  extern typeof (f32xsub (vol_var__Float32, vol_var_unsigned_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Float32, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_f32xsub_39 (void)
{
  extern typeof (f32xsub (vol_var__Float32, vol_var___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Float32, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_f32xsub_40 (void)
{
  extern typeof (f32xsub (vol_var__Float32, vol_var_unsigned___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Float32, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32xsub_41 (void)
{
  extern typeof (f32xsub (vol_var__Float32, vol_var_enum_e)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Float32, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32xsub_42 (void)
{
  extern typeof (f32xsub (vol_var__Float32, vol_var__Bool)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Float32, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32xsub_43 (void)
{
  extern typeof (f32xsub (vol_var__Float32, vol_var_bit_field)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Float32, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
static void
test_f32xsub_44 (void)
{
  extern typeof (f32xsub (vol_var__Float32x, vol_var__Float16)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Float32x, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
static void
test_f32xsub_45 (void)
{
  extern typeof (f32xsub (vol_var__Float32x, vol_var__Float32)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Float32x, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32xsub_46 (void)
{
  extern typeof (f32xsub (vol_var__Float32x, vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Float32x, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64
static void
test_f32xsub_47 (void)
{
  extern typeof (f32xsub (vol_var__Float32x, vol_var__Float64)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Float32x, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
static void
test_f32xsub_48 (void)
{
  extern typeof (f32xsub (vol_var__Float32x, vol_var__Float64x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Float32x, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
static void
test_f32xsub_49 (void)
{
  extern typeof (f32xsub (vol_var__Float32x, vol_var__Float128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Float32x, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32xsub_50 (void)
{
  extern typeof (f32xsub (vol_var__Float32x, vol_var_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Float32x, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32xsub_51 (void)
{
  extern typeof (f32xsub (vol_var__Float32x, vol_var_signed_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Float32x, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32xsub_52 (void)
{
  extern typeof (f32xsub (vol_var__Float32x, vol_var_unsigned_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Float32x, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32xsub_53 (void)
{
  extern typeof (f32xsub (vol_var__Float32x, vol_var_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Float32x, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32xsub_54 (void)
{
  extern typeof (f32xsub (vol_var__Float32x, vol_var_unsigned_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Float32x, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32xsub_55 (void)
{
  extern typeof (f32xsub (vol_var__Float32x, vol_var_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Float32x, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32xsub_56 (void)
{
  extern typeof (f32xsub (vol_var__Float32x, vol_var_unsigned_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Float32x, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32xsub_57 (void)
{
  extern typeof (f32xsub (vol_var__Float32x, vol_var_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Float32x, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32xsub_58 (void)
{
  extern typeof (f32xsub (vol_var__Float32x, vol_var_unsigned_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Float32x, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32xsub_59 (void)
{
  extern typeof (f32xsub (vol_var__Float32x, vol_var_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Float32x, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32xsub_60 (void)
{
  extern typeof (f32xsub (vol_var__Float32x, vol_var_unsigned_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Float32x, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_f32xsub_61 (void)
{
  extern typeof (f32xsub (vol_var__Float32x, vol_var___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Float32x, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_f32xsub_62 (void)
{
  extern typeof (f32xsub (vol_var__Float32x, vol_var_unsigned___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Float32x, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32xsub_63 (void)
{
  extern typeof (f32xsub (vol_var__Float32x, vol_var_enum_e)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Float32x, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32xsub_64 (void)
{
  extern typeof (f32xsub (vol_var__Float32x, vol_var__Bool)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Float32x, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32xsub_65 (void)
{
  extern typeof (f32xsub (vol_var__Float32x, vol_var_bit_field)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Float32x, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64
static void
test_f32xsub_66 (void)
{
  extern typeof (f32xsub (vol_var__Float64, vol_var__Float16)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Float64, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64
static void
test_f32xsub_67 (void)
{
  extern typeof (f32xsub (vol_var__Float64, vol_var__Float32)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Float64, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64
static void
test_f32xsub_68 (void)
{
  extern typeof (f32xsub (vol_var__Float64, vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Float64, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32xsub_69 (void)
{
  extern typeof (f32xsub (vol_var__Float64, vol_var__Float64)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Float64, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
static void
test_f32xsub_70 (void)
{
  extern typeof (f32xsub (vol_var__Float64, vol_var__Float64x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Float64, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64
static void
test_f32xsub_71 (void)
{
  extern typeof (f32xsub (vol_var__Float64, vol_var__Float128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Float64, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32xsub_72 (void)
{
  extern typeof (f32xsub (vol_var__Float64, vol_var_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Float64, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32xsub_73 (void)
{
  extern typeof (f32xsub (vol_var__Float64, vol_var_signed_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Float64, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32xsub_74 (void)
{
  extern typeof (f32xsub (vol_var__Float64, vol_var_unsigned_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Float64, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32xsub_75 (void)
{
  extern typeof (f32xsub (vol_var__Float64, vol_var_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Float64, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32xsub_76 (void)
{
  extern typeof (f32xsub (vol_var__Float64, vol_var_unsigned_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Float64, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32xsub_77 (void)
{
  extern typeof (f32xsub (vol_var__Float64, vol_var_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Float64, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32xsub_78 (void)
{
  extern typeof (f32xsub (vol_var__Float64, vol_var_unsigned_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Float64, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32xsub_79 (void)
{
  extern typeof (f32xsub (vol_var__Float64, vol_var_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Float64, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32xsub_80 (void)
{
  extern typeof (f32xsub (vol_var__Float64, vol_var_unsigned_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Float64, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32xsub_81 (void)
{
  extern typeof (f32xsub (vol_var__Float64, vol_var_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Float64, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32xsub_82 (void)
{
  extern typeof (f32xsub (vol_var__Float64, vol_var_unsigned_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Float64, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_f32xsub_83 (void)
{
  extern typeof (f32xsub (vol_var__Float64, vol_var___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Float64, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_f32xsub_84 (void)
{
  extern typeof (f32xsub (vol_var__Float64, vol_var_unsigned___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Float64, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32xsub_85 (void)
{
  extern typeof (f32xsub (vol_var__Float64, vol_var_enum_e)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Float64, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32xsub_86 (void)
{
  extern typeof (f32xsub (vol_var__Float64, vol_var__Bool)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Float64, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32xsub_87 (void)
{
  extern typeof (f32xsub (vol_var__Float64, vol_var_bit_field)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Float64, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
static void
test_f32xsub_88 (void)
{
  extern typeof (f32xsub (vol_var__Float64x, vol_var__Float16)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Float64x, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
static void
test_f32xsub_89 (void)
{
  extern typeof (f32xsub (vol_var__Float64x, vol_var__Float32)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Float64x, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
static void
test_f32xsub_90 (void)
{
  extern typeof (f32xsub (vol_var__Float64x, vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Float64x, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
static void
test_f32xsub_91 (void)
{
  extern typeof (f32xsub (vol_var__Float64x, vol_var__Float64)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Float64x, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32xsub_92 (void)
{
  extern typeof (f32xsub (vol_var__Float64x, vol_var__Float64x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Float64x, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
static void
test_f32xsub_93 (void)
{
  extern typeof (f32xsub (vol_var__Float64x, vol_var__Float128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Float64x, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32xsub_94 (void)
{
  extern typeof (f32xsub (vol_var__Float64x, vol_var_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Float64x, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32xsub_95 (void)
{
  extern typeof (f32xsub (vol_var__Float64x, vol_var_signed_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Float64x, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32xsub_96 (void)
{
  extern typeof (f32xsub (vol_var__Float64x, vol_var_unsigned_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Float64x, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32xsub_97 (void)
{
  extern typeof (f32xsub (vol_var__Float64x, vol_var_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Float64x, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32xsub_98 (void)
{
  extern typeof (f32xsub (vol_var__Float64x, vol_var_unsigned_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Float64x, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32xsub_99 (void)
{
  extern typeof (f32xsub (vol_var__Float64x, vol_var_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Float64x, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32xsub_100 (void)
{
  extern typeof (f32xsub (vol_var__Float64x, vol_var_unsigned_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Float64x, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32xsub_101 (void)
{
  extern typeof (f32xsub (vol_var__Float64x, vol_var_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Float64x, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32xsub_102 (void)
{
  extern typeof (f32xsub (vol_var__Float64x, vol_var_unsigned_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Float64x, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32xsub_103 (void)
{
  extern typeof (f32xsub (vol_var__Float64x, vol_var_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Float64x, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32xsub_104 (void)
{
  extern typeof (f32xsub (vol_var__Float64x, vol_var_unsigned_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Float64x, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_f32xsub_105 (void)
{
  extern typeof (f32xsub (vol_var__Float64x, vol_var___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Float64x, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_f32xsub_106 (void)
{
  extern typeof (f32xsub (vol_var__Float64x, vol_var_unsigned___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Float64x, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32xsub_107 (void)
{
  extern typeof (f32xsub (vol_var__Float64x, vol_var_enum_e)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Float64x, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32xsub_108 (void)
{
  extern typeof (f32xsub (vol_var__Float64x, vol_var__Bool)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Float64x, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32xsub_109 (void)
{
  extern typeof (f32xsub (vol_var__Float64x, vol_var_bit_field)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Float64x, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F16
static void
test_f32xsub_110 (void)
{
  extern typeof (f32xsub (vol_var__Float128, vol_var__Float16)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Float128, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32
static void
test_f32xsub_111 (void)
{
  extern typeof (f32xsub (vol_var__Float128, vol_var__Float32)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Float128, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
static void
test_f32xsub_112 (void)
{
  extern typeof (f32xsub (vol_var__Float128, vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Float128, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64
static void
test_f32xsub_113 (void)
{
  extern typeof (f32xsub (vol_var__Float128, vol_var__Float64)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Float128, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
static void
test_f32xsub_114 (void)
{
  extern typeof (f32xsub (vol_var__Float128, vol_var__Float64x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Float128, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32xsub_115 (void)
{
  extern typeof (f32xsub (vol_var__Float128, vol_var__Float128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Float128, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32xsub_116 (void)
{
  extern typeof (f32xsub (vol_var__Float128, vol_var_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Float128, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32xsub_117 (void)
{
  extern typeof (f32xsub (vol_var__Float128, vol_var_signed_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Float128, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32xsub_118 (void)
{
  extern typeof (f32xsub (vol_var__Float128, vol_var_unsigned_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Float128, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32xsub_119 (void)
{
  extern typeof (f32xsub (vol_var__Float128, vol_var_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Float128, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32xsub_120 (void)
{
  extern typeof (f32xsub (vol_var__Float128, vol_var_unsigned_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Float128, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32xsub_121 (void)
{
  extern typeof (f32xsub (vol_var__Float128, vol_var_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Float128, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32xsub_122 (void)
{
  extern typeof (f32xsub (vol_var__Float128, vol_var_unsigned_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Float128, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32xsub_123 (void)
{
  extern typeof (f32xsub (vol_var__Float128, vol_var_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Float128, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32xsub_124 (void)
{
  extern typeof (f32xsub (vol_var__Float128, vol_var_unsigned_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Float128, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32xsub_125 (void)
{
  extern typeof (f32xsub (vol_var__Float128, vol_var_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Float128, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32xsub_126 (void)
{
  extern typeof (f32xsub (vol_var__Float128, vol_var_unsigned_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Float128, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_f32xsub_127 (void)
{
  extern typeof (f32xsub (vol_var__Float128, vol_var___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Float128, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_f32xsub_128 (void)
{
  extern typeof (f32xsub (vol_var__Float128, vol_var_unsigned___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Float128, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32xsub_129 (void)
{
  extern typeof (f32xsub (vol_var__Float128, vol_var_enum_e)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Float128, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32xsub_130 (void)
{
  extern typeof (f32xsub (vol_var__Float128, vol_var__Bool)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Float128, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32xsub_131 (void)
{
  extern typeof (f32xsub (vol_var__Float128, vol_var_bit_field)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Float128, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32xsub_132 (void)
{
  extern typeof (f32xsub (vol_var_char, vol_var__Float16)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_char, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32xsub_133 (void)
{
  extern typeof (f32xsub (vol_var_char, vol_var__Float32)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_char, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32xsub_134 (void)
{
  extern typeof (f32xsub (vol_var_char, vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_char, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32xsub_135 (void)
{
  extern typeof (f32xsub (vol_var_char, vol_var__Float64)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_char, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32xsub_136 (void)
{
  extern typeof (f32xsub (vol_var_char, vol_var__Float64x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_char, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32xsub_137 (void)
{
  extern typeof (f32xsub (vol_var_char, vol_var__Float128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_char, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_138 (void)
{
  extern typeof (f32xsub (vol_var_char, vol_var_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_char, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_139 (void)
{
  extern typeof (f32xsub (vol_var_char, vol_var_signed_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_char, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_140 (void)
{
  extern typeof (f32xsub (vol_var_char, vol_var_unsigned_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_char, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_141 (void)
{
  extern typeof (f32xsub (vol_var_char, vol_var_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_char, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_142 (void)
{
  extern typeof (f32xsub (vol_var_char, vol_var_unsigned_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_char, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_143 (void)
{
  extern typeof (f32xsub (vol_var_char, vol_var_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_char, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_144 (void)
{
  extern typeof (f32xsub (vol_var_char, vol_var_unsigned_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_char, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_145 (void)
{
  extern typeof (f32xsub (vol_var_char, vol_var_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_char, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_146 (void)
{
  extern typeof (f32xsub (vol_var_char, vol_var_unsigned_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_char, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_147 (void)
{
  extern typeof (f32xsub (vol_var_char, vol_var_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_char, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_148 (void)
{
  extern typeof (f32xsub (vol_var_char, vol_var_unsigned_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_char, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xsub_149 (void)
{
  extern typeof (f32xsub (vol_var_char, vol_var___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_char, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xsub_150 (void)
{
  extern typeof (f32xsub (vol_var_char, vol_var_unsigned___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_char, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_151 (void)
{
  extern typeof (f32xsub (vol_var_char, vol_var_enum_e)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_char, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_152 (void)
{
  extern typeof (f32xsub (vol_var_char, vol_var__Bool)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_char, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_153 (void)
{
  extern typeof (f32xsub (vol_var_char, vol_var_bit_field)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_char, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32xsub_154 (void)
{
  extern typeof (f32xsub (vol_var_signed_char, vol_var__Float16)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_signed_char, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32xsub_155 (void)
{
  extern typeof (f32xsub (vol_var_signed_char, vol_var__Float32)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_signed_char, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32xsub_156 (void)
{
  extern typeof (f32xsub (vol_var_signed_char, vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_signed_char, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32xsub_157 (void)
{
  extern typeof (f32xsub (vol_var_signed_char, vol_var__Float64)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_signed_char, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32xsub_158 (void)
{
  extern typeof (f32xsub (vol_var_signed_char, vol_var__Float64x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_signed_char, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32xsub_159 (void)
{
  extern typeof (f32xsub (vol_var_signed_char, vol_var__Float128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_signed_char, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_160 (void)
{
  extern typeof (f32xsub (vol_var_signed_char, vol_var_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_signed_char, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_161 (void)
{
  extern typeof (f32xsub (vol_var_signed_char, vol_var_signed_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_signed_char, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_162 (void)
{
  extern typeof (f32xsub (vol_var_signed_char, vol_var_unsigned_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_signed_char, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_163 (void)
{
  extern typeof (f32xsub (vol_var_signed_char, vol_var_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_signed_char, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_164 (void)
{
  extern typeof (f32xsub (vol_var_signed_char, vol_var_unsigned_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_signed_char, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_165 (void)
{
  extern typeof (f32xsub (vol_var_signed_char, vol_var_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_signed_char, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_166 (void)
{
  extern typeof (f32xsub (vol_var_signed_char, vol_var_unsigned_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_signed_char, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_167 (void)
{
  extern typeof (f32xsub (vol_var_signed_char, vol_var_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_signed_char, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_168 (void)
{
  extern typeof (f32xsub (vol_var_signed_char, vol_var_unsigned_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_signed_char, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_169 (void)
{
  extern typeof (f32xsub (vol_var_signed_char, vol_var_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_signed_char, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_170 (void)
{
  extern typeof (f32xsub (vol_var_signed_char, vol_var_unsigned_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_signed_char, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xsub_171 (void)
{
  extern typeof (f32xsub (vol_var_signed_char, vol_var___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_signed_char, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xsub_172 (void)
{
  extern typeof (f32xsub (vol_var_signed_char, vol_var_unsigned___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_signed_char, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_173 (void)
{
  extern typeof (f32xsub (vol_var_signed_char, vol_var_enum_e)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_signed_char, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_174 (void)
{
  extern typeof (f32xsub (vol_var_signed_char, vol_var__Bool)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_signed_char, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_175 (void)
{
  extern typeof (f32xsub (vol_var_signed_char, vol_var_bit_field)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_signed_char, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32xsub_176 (void)
{
  extern typeof (f32xsub (vol_var_unsigned_char, vol_var__Float16)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_unsigned_char, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32xsub_177 (void)
{
  extern typeof (f32xsub (vol_var_unsigned_char, vol_var__Float32)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_unsigned_char, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32xsub_178 (void)
{
  extern typeof (f32xsub (vol_var_unsigned_char, vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_unsigned_char, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32xsub_179 (void)
{
  extern typeof (f32xsub (vol_var_unsigned_char, vol_var__Float64)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_unsigned_char, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32xsub_180 (void)
{
  extern typeof (f32xsub (vol_var_unsigned_char, vol_var__Float64x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_unsigned_char, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32xsub_181 (void)
{
  extern typeof (f32xsub (vol_var_unsigned_char, vol_var__Float128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_unsigned_char, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_182 (void)
{
  extern typeof (f32xsub (vol_var_unsigned_char, vol_var_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_unsigned_char, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_183 (void)
{
  extern typeof (f32xsub (vol_var_unsigned_char, vol_var_signed_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_unsigned_char, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_184 (void)
{
  extern typeof (f32xsub (vol_var_unsigned_char, vol_var_unsigned_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_unsigned_char, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_185 (void)
{
  extern typeof (f32xsub (vol_var_unsigned_char, vol_var_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_unsigned_char, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_186 (void)
{
  extern typeof (f32xsub (vol_var_unsigned_char, vol_var_unsigned_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_unsigned_char, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_187 (void)
{
  extern typeof (f32xsub (vol_var_unsigned_char, vol_var_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_unsigned_char, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_188 (void)
{
  extern typeof (f32xsub (vol_var_unsigned_char, vol_var_unsigned_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_unsigned_char, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_189 (void)
{
  extern typeof (f32xsub (vol_var_unsigned_char, vol_var_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_unsigned_char, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_190 (void)
{
  extern typeof (f32xsub (vol_var_unsigned_char, vol_var_unsigned_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_unsigned_char, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_191 (void)
{
  extern typeof (f32xsub (vol_var_unsigned_char, vol_var_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_unsigned_char, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_192 (void)
{
  extern typeof (f32xsub (vol_var_unsigned_char, vol_var_unsigned_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_unsigned_char, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xsub_193 (void)
{
  extern typeof (f32xsub (vol_var_unsigned_char, vol_var___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_unsigned_char, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xsub_194 (void)
{
  extern typeof (f32xsub (vol_var_unsigned_char, vol_var_unsigned___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_unsigned_char, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_195 (void)
{
  extern typeof (f32xsub (vol_var_unsigned_char, vol_var_enum_e)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_unsigned_char, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_196 (void)
{
  extern typeof (f32xsub (vol_var_unsigned_char, vol_var__Bool)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_unsigned_char, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_197 (void)
{
  extern typeof (f32xsub (vol_var_unsigned_char, vol_var_bit_field)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_unsigned_char, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32xsub_198 (void)
{
  extern typeof (f32xsub (vol_var_short_int, vol_var__Float16)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_short_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32xsub_199 (void)
{
  extern typeof (f32xsub (vol_var_short_int, vol_var__Float32)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_short_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32xsub_200 (void)
{
  extern typeof (f32xsub (vol_var_short_int, vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_short_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32xsub_201 (void)
{
  extern typeof (f32xsub (vol_var_short_int, vol_var__Float64)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_short_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32xsub_202 (void)
{
  extern typeof (f32xsub (vol_var_short_int, vol_var__Float64x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_short_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32xsub_203 (void)
{
  extern typeof (f32xsub (vol_var_short_int, vol_var__Float128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_short_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_204 (void)
{
  extern typeof (f32xsub (vol_var_short_int, vol_var_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_short_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_205 (void)
{
  extern typeof (f32xsub (vol_var_short_int, vol_var_signed_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_short_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_206 (void)
{
  extern typeof (f32xsub (vol_var_short_int, vol_var_unsigned_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_short_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_207 (void)
{
  extern typeof (f32xsub (vol_var_short_int, vol_var_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_short_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_208 (void)
{
  extern typeof (f32xsub (vol_var_short_int, vol_var_unsigned_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_short_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_209 (void)
{
  extern typeof (f32xsub (vol_var_short_int, vol_var_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_short_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_210 (void)
{
  extern typeof (f32xsub (vol_var_short_int, vol_var_unsigned_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_short_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_211 (void)
{
  extern typeof (f32xsub (vol_var_short_int, vol_var_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_short_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_212 (void)
{
  extern typeof (f32xsub (vol_var_short_int, vol_var_unsigned_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_short_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_213 (void)
{
  extern typeof (f32xsub (vol_var_short_int, vol_var_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_short_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_214 (void)
{
  extern typeof (f32xsub (vol_var_short_int, vol_var_unsigned_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_short_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xsub_215 (void)
{
  extern typeof (f32xsub (vol_var_short_int, vol_var___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_short_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xsub_216 (void)
{
  extern typeof (f32xsub (vol_var_short_int, vol_var_unsigned___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_short_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_217 (void)
{
  extern typeof (f32xsub (vol_var_short_int, vol_var_enum_e)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_short_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_218 (void)
{
  extern typeof (f32xsub (vol_var_short_int, vol_var__Bool)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_short_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_219 (void)
{
  extern typeof (f32xsub (vol_var_short_int, vol_var_bit_field)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_short_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32xsub_220 (void)
{
  extern typeof (f32xsub (vol_var_unsigned_short_int, vol_var__Float16)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_unsigned_short_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32xsub_221 (void)
{
  extern typeof (f32xsub (vol_var_unsigned_short_int, vol_var__Float32)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_unsigned_short_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32xsub_222 (void)
{
  extern typeof (f32xsub (vol_var_unsigned_short_int, vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_unsigned_short_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32xsub_223 (void)
{
  extern typeof (f32xsub (vol_var_unsigned_short_int, vol_var__Float64)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_unsigned_short_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32xsub_224 (void)
{
  extern typeof (f32xsub (vol_var_unsigned_short_int, vol_var__Float64x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_unsigned_short_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32xsub_225 (void)
{
  extern typeof (f32xsub (vol_var_unsigned_short_int, vol_var__Float128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_unsigned_short_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_226 (void)
{
  extern typeof (f32xsub (vol_var_unsigned_short_int, vol_var_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_unsigned_short_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_227 (void)
{
  extern typeof (f32xsub (vol_var_unsigned_short_int, vol_var_signed_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_unsigned_short_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_228 (void)
{
  extern typeof (f32xsub (vol_var_unsigned_short_int, vol_var_unsigned_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_unsigned_short_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_229 (void)
{
  extern typeof (f32xsub (vol_var_unsigned_short_int, vol_var_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_unsigned_short_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_230 (void)
{
  extern typeof (f32xsub (vol_var_unsigned_short_int, vol_var_unsigned_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_unsigned_short_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_231 (void)
{
  extern typeof (f32xsub (vol_var_unsigned_short_int, vol_var_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_unsigned_short_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_232 (void)
{
  extern typeof (f32xsub (vol_var_unsigned_short_int, vol_var_unsigned_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_unsigned_short_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_233 (void)
{
  extern typeof (f32xsub (vol_var_unsigned_short_int, vol_var_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_unsigned_short_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_234 (void)
{
  extern typeof (f32xsub (vol_var_unsigned_short_int, vol_var_unsigned_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_unsigned_short_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_235 (void)
{
  extern typeof (f32xsub (vol_var_unsigned_short_int, vol_var_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_unsigned_short_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_236 (void)
{
  extern typeof (f32xsub (vol_var_unsigned_short_int, vol_var_unsigned_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_unsigned_short_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xsub_237 (void)
{
  extern typeof (f32xsub (vol_var_unsigned_short_int, vol_var___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_unsigned_short_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xsub_238 (void)
{
  extern typeof (f32xsub (vol_var_unsigned_short_int, vol_var_unsigned___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_unsigned_short_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_239 (void)
{
  extern typeof (f32xsub (vol_var_unsigned_short_int, vol_var_enum_e)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_unsigned_short_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_240 (void)
{
  extern typeof (f32xsub (vol_var_unsigned_short_int, vol_var__Bool)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_unsigned_short_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_241 (void)
{
  extern typeof (f32xsub (vol_var_unsigned_short_int, vol_var_bit_field)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_unsigned_short_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32xsub_242 (void)
{
  extern typeof (f32xsub (vol_var_int, vol_var__Float16)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32xsub_243 (void)
{
  extern typeof (f32xsub (vol_var_int, vol_var__Float32)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32xsub_244 (void)
{
  extern typeof (f32xsub (vol_var_int, vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32xsub_245 (void)
{
  extern typeof (f32xsub (vol_var_int, vol_var__Float64)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32xsub_246 (void)
{
  extern typeof (f32xsub (vol_var_int, vol_var__Float64x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32xsub_247 (void)
{
  extern typeof (f32xsub (vol_var_int, vol_var__Float128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_248 (void)
{
  extern typeof (f32xsub (vol_var_int, vol_var_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_249 (void)
{
  extern typeof (f32xsub (vol_var_int, vol_var_signed_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_250 (void)
{
  extern typeof (f32xsub (vol_var_int, vol_var_unsigned_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_251 (void)
{
  extern typeof (f32xsub (vol_var_int, vol_var_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_252 (void)
{
  extern typeof (f32xsub (vol_var_int, vol_var_unsigned_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_253 (void)
{
  extern typeof (f32xsub (vol_var_int, vol_var_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_254 (void)
{
  extern typeof (f32xsub (vol_var_int, vol_var_unsigned_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_255 (void)
{
  extern typeof (f32xsub (vol_var_int, vol_var_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_256 (void)
{
  extern typeof (f32xsub (vol_var_int, vol_var_unsigned_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_257 (void)
{
  extern typeof (f32xsub (vol_var_int, vol_var_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_258 (void)
{
  extern typeof (f32xsub (vol_var_int, vol_var_unsigned_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xsub_259 (void)
{
  extern typeof (f32xsub (vol_var_int, vol_var___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xsub_260 (void)
{
  extern typeof (f32xsub (vol_var_int, vol_var_unsigned___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_261 (void)
{
  extern typeof (f32xsub (vol_var_int, vol_var_enum_e)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_262 (void)
{
  extern typeof (f32xsub (vol_var_int, vol_var__Bool)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_263 (void)
{
  extern typeof (f32xsub (vol_var_int, vol_var_bit_field)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32xsub_264 (void)
{
  extern typeof (f32xsub (vol_var_unsigned_int, vol_var__Float16)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_unsigned_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32xsub_265 (void)
{
  extern typeof (f32xsub (vol_var_unsigned_int, vol_var__Float32)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_unsigned_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32xsub_266 (void)
{
  extern typeof (f32xsub (vol_var_unsigned_int, vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_unsigned_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32xsub_267 (void)
{
  extern typeof (f32xsub (vol_var_unsigned_int, vol_var__Float64)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_unsigned_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32xsub_268 (void)
{
  extern typeof (f32xsub (vol_var_unsigned_int, vol_var__Float64x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_unsigned_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32xsub_269 (void)
{
  extern typeof (f32xsub (vol_var_unsigned_int, vol_var__Float128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_unsigned_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_270 (void)
{
  extern typeof (f32xsub (vol_var_unsigned_int, vol_var_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_unsigned_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_271 (void)
{
  extern typeof (f32xsub (vol_var_unsigned_int, vol_var_signed_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_unsigned_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_272 (void)
{
  extern typeof (f32xsub (vol_var_unsigned_int, vol_var_unsigned_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_unsigned_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_273 (void)
{
  extern typeof (f32xsub (vol_var_unsigned_int, vol_var_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_unsigned_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_274 (void)
{
  extern typeof (f32xsub (vol_var_unsigned_int, vol_var_unsigned_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_unsigned_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_275 (void)
{
  extern typeof (f32xsub (vol_var_unsigned_int, vol_var_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_unsigned_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_276 (void)
{
  extern typeof (f32xsub (vol_var_unsigned_int, vol_var_unsigned_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_unsigned_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_277 (void)
{
  extern typeof (f32xsub (vol_var_unsigned_int, vol_var_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_unsigned_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_278 (void)
{
  extern typeof (f32xsub (vol_var_unsigned_int, vol_var_unsigned_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_unsigned_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_279 (void)
{
  extern typeof (f32xsub (vol_var_unsigned_int, vol_var_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_unsigned_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_280 (void)
{
  extern typeof (f32xsub (vol_var_unsigned_int, vol_var_unsigned_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_unsigned_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xsub_281 (void)
{
  extern typeof (f32xsub (vol_var_unsigned_int, vol_var___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_unsigned_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xsub_282 (void)
{
  extern typeof (f32xsub (vol_var_unsigned_int, vol_var_unsigned___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_unsigned_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_283 (void)
{
  extern typeof (f32xsub (vol_var_unsigned_int, vol_var_enum_e)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_unsigned_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_284 (void)
{
  extern typeof (f32xsub (vol_var_unsigned_int, vol_var__Bool)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_unsigned_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_285 (void)
{
  extern typeof (f32xsub (vol_var_unsigned_int, vol_var_bit_field)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_unsigned_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32xsub_286 (void)
{
  extern typeof (f32xsub (vol_var_long_int, vol_var__Float16)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_long_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32xsub_287 (void)
{
  extern typeof (f32xsub (vol_var_long_int, vol_var__Float32)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_long_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32xsub_288 (void)
{
  extern typeof (f32xsub (vol_var_long_int, vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_long_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32xsub_289 (void)
{
  extern typeof (f32xsub (vol_var_long_int, vol_var__Float64)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_long_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32xsub_290 (void)
{
  extern typeof (f32xsub (vol_var_long_int, vol_var__Float64x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_long_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32xsub_291 (void)
{
  extern typeof (f32xsub (vol_var_long_int, vol_var__Float128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_long_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_292 (void)
{
  extern typeof (f32xsub (vol_var_long_int, vol_var_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_long_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_293 (void)
{
  extern typeof (f32xsub (vol_var_long_int, vol_var_signed_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_long_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_294 (void)
{
  extern typeof (f32xsub (vol_var_long_int, vol_var_unsigned_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_long_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_295 (void)
{
  extern typeof (f32xsub (vol_var_long_int, vol_var_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_long_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_296 (void)
{
  extern typeof (f32xsub (vol_var_long_int, vol_var_unsigned_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_long_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_297 (void)
{
  extern typeof (f32xsub (vol_var_long_int, vol_var_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_long_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_298 (void)
{
  extern typeof (f32xsub (vol_var_long_int, vol_var_unsigned_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_long_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_299 (void)
{
  extern typeof (f32xsub (vol_var_long_int, vol_var_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_long_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_300 (void)
{
  extern typeof (f32xsub (vol_var_long_int, vol_var_unsigned_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_long_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_301 (void)
{
  extern typeof (f32xsub (vol_var_long_int, vol_var_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_long_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_302 (void)
{
  extern typeof (f32xsub (vol_var_long_int, vol_var_unsigned_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_long_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xsub_303 (void)
{
  extern typeof (f32xsub (vol_var_long_int, vol_var___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_long_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xsub_304 (void)
{
  extern typeof (f32xsub (vol_var_long_int, vol_var_unsigned___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_long_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_305 (void)
{
  extern typeof (f32xsub (vol_var_long_int, vol_var_enum_e)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_long_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_306 (void)
{
  extern typeof (f32xsub (vol_var_long_int, vol_var__Bool)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_long_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_307 (void)
{
  extern typeof (f32xsub (vol_var_long_int, vol_var_bit_field)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_long_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32xsub_308 (void)
{
  extern typeof (f32xsub (vol_var_unsigned_long_int, vol_var__Float16)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_unsigned_long_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32xsub_309 (void)
{
  extern typeof (f32xsub (vol_var_unsigned_long_int, vol_var__Float32)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_unsigned_long_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32xsub_310 (void)
{
  extern typeof (f32xsub (vol_var_unsigned_long_int, vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_unsigned_long_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32xsub_311 (void)
{
  extern typeof (f32xsub (vol_var_unsigned_long_int, vol_var__Float64)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_unsigned_long_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32xsub_312 (void)
{
  extern typeof (f32xsub (vol_var_unsigned_long_int, vol_var__Float64x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_unsigned_long_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32xsub_313 (void)
{
  extern typeof (f32xsub (vol_var_unsigned_long_int, vol_var__Float128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_unsigned_long_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_314 (void)
{
  extern typeof (f32xsub (vol_var_unsigned_long_int, vol_var_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_unsigned_long_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_315 (void)
{
  extern typeof (f32xsub (vol_var_unsigned_long_int, vol_var_signed_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_unsigned_long_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_316 (void)
{
  extern typeof (f32xsub (vol_var_unsigned_long_int, vol_var_unsigned_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_unsigned_long_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_317 (void)
{
  extern typeof (f32xsub (vol_var_unsigned_long_int, vol_var_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_unsigned_long_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_318 (void)
{
  extern typeof (f32xsub (vol_var_unsigned_long_int, vol_var_unsigned_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_unsigned_long_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_319 (void)
{
  extern typeof (f32xsub (vol_var_unsigned_long_int, vol_var_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_unsigned_long_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_320 (void)
{
  extern typeof (f32xsub (vol_var_unsigned_long_int, vol_var_unsigned_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_unsigned_long_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_321 (void)
{
  extern typeof (f32xsub (vol_var_unsigned_long_int, vol_var_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_unsigned_long_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_322 (void)
{
  extern typeof (f32xsub (vol_var_unsigned_long_int, vol_var_unsigned_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_unsigned_long_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_323 (void)
{
  extern typeof (f32xsub (vol_var_unsigned_long_int, vol_var_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_unsigned_long_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_324 (void)
{
  extern typeof (f32xsub (vol_var_unsigned_long_int, vol_var_unsigned_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_unsigned_long_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xsub_325 (void)
{
  extern typeof (f32xsub (vol_var_unsigned_long_int, vol_var___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_unsigned_long_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xsub_326 (void)
{
  extern typeof (f32xsub (vol_var_unsigned_long_int, vol_var_unsigned___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_unsigned_long_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_327 (void)
{
  extern typeof (f32xsub (vol_var_unsigned_long_int, vol_var_enum_e)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_unsigned_long_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_328 (void)
{
  extern typeof (f32xsub (vol_var_unsigned_long_int, vol_var__Bool)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_unsigned_long_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_329 (void)
{
  extern typeof (f32xsub (vol_var_unsigned_long_int, vol_var_bit_field)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_unsigned_long_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32xsub_330 (void)
{
  extern typeof (f32xsub (vol_var_long_long_int, vol_var__Float16)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_long_long_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32xsub_331 (void)
{
  extern typeof (f32xsub (vol_var_long_long_int, vol_var__Float32)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_long_long_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32xsub_332 (void)
{
  extern typeof (f32xsub (vol_var_long_long_int, vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_long_long_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32xsub_333 (void)
{
  extern typeof (f32xsub (vol_var_long_long_int, vol_var__Float64)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_long_long_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32xsub_334 (void)
{
  extern typeof (f32xsub (vol_var_long_long_int, vol_var__Float64x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_long_long_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32xsub_335 (void)
{
  extern typeof (f32xsub (vol_var_long_long_int, vol_var__Float128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_long_long_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_336 (void)
{
  extern typeof (f32xsub (vol_var_long_long_int, vol_var_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_long_long_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_337 (void)
{
  extern typeof (f32xsub (vol_var_long_long_int, vol_var_signed_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_long_long_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_338 (void)
{
  extern typeof (f32xsub (vol_var_long_long_int, vol_var_unsigned_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_long_long_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_339 (void)
{
  extern typeof (f32xsub (vol_var_long_long_int, vol_var_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_long_long_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_340 (void)
{
  extern typeof (f32xsub (vol_var_long_long_int, vol_var_unsigned_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_long_long_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_341 (void)
{
  extern typeof (f32xsub (vol_var_long_long_int, vol_var_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_long_long_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_342 (void)
{
  extern typeof (f32xsub (vol_var_long_long_int, vol_var_unsigned_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_long_long_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_343 (void)
{
  extern typeof (f32xsub (vol_var_long_long_int, vol_var_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_long_long_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_344 (void)
{
  extern typeof (f32xsub (vol_var_long_long_int, vol_var_unsigned_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_long_long_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_345 (void)
{
  extern typeof (f32xsub (vol_var_long_long_int, vol_var_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_long_long_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_346 (void)
{
  extern typeof (f32xsub (vol_var_long_long_int, vol_var_unsigned_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_long_long_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xsub_347 (void)
{
  extern typeof (f32xsub (vol_var_long_long_int, vol_var___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_long_long_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xsub_348 (void)
{
  extern typeof (f32xsub (vol_var_long_long_int, vol_var_unsigned___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_long_long_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_349 (void)
{
  extern typeof (f32xsub (vol_var_long_long_int, vol_var_enum_e)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_long_long_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_350 (void)
{
  extern typeof (f32xsub (vol_var_long_long_int, vol_var__Bool)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_long_long_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_351 (void)
{
  extern typeof (f32xsub (vol_var_long_long_int, vol_var_bit_field)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_long_long_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32xsub_352 (void)
{
  extern typeof (f32xsub (vol_var_unsigned_long_long_int, vol_var__Float16)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_unsigned_long_long_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32xsub_353 (void)
{
  extern typeof (f32xsub (vol_var_unsigned_long_long_int, vol_var__Float32)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_unsigned_long_long_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32xsub_354 (void)
{
  extern typeof (f32xsub (vol_var_unsigned_long_long_int, vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_unsigned_long_long_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32xsub_355 (void)
{
  extern typeof (f32xsub (vol_var_unsigned_long_long_int, vol_var__Float64)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_unsigned_long_long_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32xsub_356 (void)
{
  extern typeof (f32xsub (vol_var_unsigned_long_long_int, vol_var__Float64x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_unsigned_long_long_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32xsub_357 (void)
{
  extern typeof (f32xsub (vol_var_unsigned_long_long_int, vol_var__Float128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_unsigned_long_long_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_358 (void)
{
  extern typeof (f32xsub (vol_var_unsigned_long_long_int, vol_var_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_unsigned_long_long_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_359 (void)
{
  extern typeof (f32xsub (vol_var_unsigned_long_long_int, vol_var_signed_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_unsigned_long_long_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_360 (void)
{
  extern typeof (f32xsub (vol_var_unsigned_long_long_int, vol_var_unsigned_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_unsigned_long_long_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_361 (void)
{
  extern typeof (f32xsub (vol_var_unsigned_long_long_int, vol_var_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_unsigned_long_long_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_362 (void)
{
  extern typeof (f32xsub (vol_var_unsigned_long_long_int, vol_var_unsigned_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_unsigned_long_long_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_363 (void)
{
  extern typeof (f32xsub (vol_var_unsigned_long_long_int, vol_var_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_unsigned_long_long_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_364 (void)
{
  extern typeof (f32xsub (vol_var_unsigned_long_long_int, vol_var_unsigned_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_unsigned_long_long_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_365 (void)
{
  extern typeof (f32xsub (vol_var_unsigned_long_long_int, vol_var_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_unsigned_long_long_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_366 (void)
{
  extern typeof (f32xsub (vol_var_unsigned_long_long_int, vol_var_unsigned_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_unsigned_long_long_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_367 (void)
{
  extern typeof (f32xsub (vol_var_unsigned_long_long_int, vol_var_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_unsigned_long_long_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_368 (void)
{
  extern typeof (f32xsub (vol_var_unsigned_long_long_int, vol_var_unsigned_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_unsigned_long_long_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xsub_369 (void)
{
  extern typeof (f32xsub (vol_var_unsigned_long_long_int, vol_var___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_unsigned_long_long_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xsub_370 (void)
{
  extern typeof (f32xsub (vol_var_unsigned_long_long_int, vol_var_unsigned___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_unsigned_long_long_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_371 (void)
{
  extern typeof (f32xsub (vol_var_unsigned_long_long_int, vol_var_enum_e)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_unsigned_long_long_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_372 (void)
{
  extern typeof (f32xsub (vol_var_unsigned_long_long_int, vol_var__Bool)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_unsigned_long_long_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_373 (void)
{
  extern typeof (f32xsub (vol_var_unsigned_long_long_int, vol_var_bit_field)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_unsigned_long_long_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_f32xsub_374 (void)
{
  extern typeof (f32xsub (vol_var___int128, vol_var__Float16)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var___int128, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_f32xsub_375 (void)
{
  extern typeof (f32xsub (vol_var___int128, vol_var__Float32)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var___int128, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_f32xsub_376 (void)
{
  extern typeof (f32xsub (vol_var___int128, vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var___int128, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_f32xsub_377 (void)
{
  extern typeof (f32xsub (vol_var___int128, vol_var__Float64)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var___int128, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_f32xsub_378 (void)
{
  extern typeof (f32xsub (vol_var___int128, vol_var__Float64x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var___int128, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_f32xsub_379 (void)
{
  extern typeof (f32xsub (vol_var___int128, vol_var__Float128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var___int128, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xsub_380 (void)
{
  extern typeof (f32xsub (vol_var___int128, vol_var_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var___int128, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xsub_381 (void)
{
  extern typeof (f32xsub (vol_var___int128, vol_var_signed_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var___int128, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xsub_382 (void)
{
  extern typeof (f32xsub (vol_var___int128, vol_var_unsigned_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var___int128, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xsub_383 (void)
{
  extern typeof (f32xsub (vol_var___int128, vol_var_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var___int128, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xsub_384 (void)
{
  extern typeof (f32xsub (vol_var___int128, vol_var_unsigned_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var___int128, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xsub_385 (void)
{
  extern typeof (f32xsub (vol_var___int128, vol_var_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var___int128, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xsub_386 (void)
{
  extern typeof (f32xsub (vol_var___int128, vol_var_unsigned_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var___int128, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xsub_387 (void)
{
  extern typeof (f32xsub (vol_var___int128, vol_var_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var___int128, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xsub_388 (void)
{
  extern typeof (f32xsub (vol_var___int128, vol_var_unsigned_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var___int128, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xsub_389 (void)
{
  extern typeof (f32xsub (vol_var___int128, vol_var_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var___int128, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xsub_390 (void)
{
  extern typeof (f32xsub (vol_var___int128, vol_var_unsigned_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var___int128, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xsub_391 (void)
{
  extern typeof (f32xsub (vol_var___int128, vol_var___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var___int128, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xsub_392 (void)
{
  extern typeof (f32xsub (vol_var___int128, vol_var_unsigned___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var___int128, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xsub_393 (void)
{
  extern typeof (f32xsub (vol_var___int128, vol_var_enum_e)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var___int128, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xsub_394 (void)
{
  extern typeof (f32xsub (vol_var___int128, vol_var__Bool)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var___int128, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xsub_395 (void)
{
  extern typeof (f32xsub (vol_var___int128, vol_var_bit_field)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var___int128, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_f32xsub_396 (void)
{
  extern typeof (f32xsub (vol_var_unsigned___int128, vol_var__Float16)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_unsigned___int128, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_f32xsub_397 (void)
{
  extern typeof (f32xsub (vol_var_unsigned___int128, vol_var__Float32)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_unsigned___int128, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_f32xsub_398 (void)
{
  extern typeof (f32xsub (vol_var_unsigned___int128, vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_unsigned___int128, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_f32xsub_399 (void)
{
  extern typeof (f32xsub (vol_var_unsigned___int128, vol_var__Float64)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_unsigned___int128, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_f32xsub_400 (void)
{
  extern typeof (f32xsub (vol_var_unsigned___int128, vol_var__Float64x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_unsigned___int128, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_f32xsub_401 (void)
{
  extern typeof (f32xsub (vol_var_unsigned___int128, vol_var__Float128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_unsigned___int128, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xsub_402 (void)
{
  extern typeof (f32xsub (vol_var_unsigned___int128, vol_var_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_unsigned___int128, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xsub_403 (void)
{
  extern typeof (f32xsub (vol_var_unsigned___int128, vol_var_signed_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_unsigned___int128, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xsub_404 (void)
{
  extern typeof (f32xsub (vol_var_unsigned___int128, vol_var_unsigned_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_unsigned___int128, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xsub_405 (void)
{
  extern typeof (f32xsub (vol_var_unsigned___int128, vol_var_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_unsigned___int128, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xsub_406 (void)
{
  extern typeof (f32xsub (vol_var_unsigned___int128, vol_var_unsigned_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_unsigned___int128, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xsub_407 (void)
{
  extern typeof (f32xsub (vol_var_unsigned___int128, vol_var_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_unsigned___int128, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xsub_408 (void)
{
  extern typeof (f32xsub (vol_var_unsigned___int128, vol_var_unsigned_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_unsigned___int128, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xsub_409 (void)
{
  extern typeof (f32xsub (vol_var_unsigned___int128, vol_var_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_unsigned___int128, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xsub_410 (void)
{
  extern typeof (f32xsub (vol_var_unsigned___int128, vol_var_unsigned_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_unsigned___int128, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xsub_411 (void)
{
  extern typeof (f32xsub (vol_var_unsigned___int128, vol_var_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_unsigned___int128, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xsub_412 (void)
{
  extern typeof (f32xsub (vol_var_unsigned___int128, vol_var_unsigned_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_unsigned___int128, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xsub_413 (void)
{
  extern typeof (f32xsub (vol_var_unsigned___int128, vol_var___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_unsigned___int128, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xsub_414 (void)
{
  extern typeof (f32xsub (vol_var_unsigned___int128, vol_var_unsigned___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_unsigned___int128, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xsub_415 (void)
{
  extern typeof (f32xsub (vol_var_unsigned___int128, vol_var_enum_e)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_unsigned___int128, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xsub_416 (void)
{
  extern typeof (f32xsub (vol_var_unsigned___int128, vol_var__Bool)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_unsigned___int128, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xsub_417 (void)
{
  extern typeof (f32xsub (vol_var_unsigned___int128, vol_var_bit_field)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_unsigned___int128, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32xsub_418 (void)
{
  extern typeof (f32xsub (vol_var_enum_e, vol_var__Float16)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_enum_e, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32xsub_419 (void)
{
  extern typeof (f32xsub (vol_var_enum_e, vol_var__Float32)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_enum_e, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32xsub_420 (void)
{
  extern typeof (f32xsub (vol_var_enum_e, vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_enum_e, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32xsub_421 (void)
{
  extern typeof (f32xsub (vol_var_enum_e, vol_var__Float64)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_enum_e, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32xsub_422 (void)
{
  extern typeof (f32xsub (vol_var_enum_e, vol_var__Float64x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_enum_e, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32xsub_423 (void)
{
  extern typeof (f32xsub (vol_var_enum_e, vol_var__Float128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_enum_e, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_424 (void)
{
  extern typeof (f32xsub (vol_var_enum_e, vol_var_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_enum_e, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_425 (void)
{
  extern typeof (f32xsub (vol_var_enum_e, vol_var_signed_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_enum_e, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_426 (void)
{
  extern typeof (f32xsub (vol_var_enum_e, vol_var_unsigned_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_enum_e, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_427 (void)
{
  extern typeof (f32xsub (vol_var_enum_e, vol_var_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_enum_e, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_428 (void)
{
  extern typeof (f32xsub (vol_var_enum_e, vol_var_unsigned_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_enum_e, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_429 (void)
{
  extern typeof (f32xsub (vol_var_enum_e, vol_var_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_enum_e, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_430 (void)
{
  extern typeof (f32xsub (vol_var_enum_e, vol_var_unsigned_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_enum_e, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_431 (void)
{
  extern typeof (f32xsub (vol_var_enum_e, vol_var_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_enum_e, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_432 (void)
{
  extern typeof (f32xsub (vol_var_enum_e, vol_var_unsigned_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_enum_e, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_433 (void)
{
  extern typeof (f32xsub (vol_var_enum_e, vol_var_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_enum_e, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_434 (void)
{
  extern typeof (f32xsub (vol_var_enum_e, vol_var_unsigned_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_enum_e, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xsub_435 (void)
{
  extern typeof (f32xsub (vol_var_enum_e, vol_var___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_enum_e, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xsub_436 (void)
{
  extern typeof (f32xsub (vol_var_enum_e, vol_var_unsigned___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_enum_e, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_437 (void)
{
  extern typeof (f32xsub (vol_var_enum_e, vol_var_enum_e)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_enum_e, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_438 (void)
{
  extern typeof (f32xsub (vol_var_enum_e, vol_var__Bool)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_enum_e, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_439 (void)
{
  extern typeof (f32xsub (vol_var_enum_e, vol_var_bit_field)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_enum_e, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32xsub_440 (void)
{
  extern typeof (f32xsub (vol_var__Bool, vol_var__Float16)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Bool, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32xsub_441 (void)
{
  extern typeof (f32xsub (vol_var__Bool, vol_var__Float32)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Bool, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32xsub_442 (void)
{
  extern typeof (f32xsub (vol_var__Bool, vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Bool, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32xsub_443 (void)
{
  extern typeof (f32xsub (vol_var__Bool, vol_var__Float64)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Bool, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32xsub_444 (void)
{
  extern typeof (f32xsub (vol_var__Bool, vol_var__Float64x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Bool, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32xsub_445 (void)
{
  extern typeof (f32xsub (vol_var__Bool, vol_var__Float128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Bool, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_446 (void)
{
  extern typeof (f32xsub (vol_var__Bool, vol_var_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Bool, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_447 (void)
{
  extern typeof (f32xsub (vol_var__Bool, vol_var_signed_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Bool, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_448 (void)
{
  extern typeof (f32xsub (vol_var__Bool, vol_var_unsigned_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Bool, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_449 (void)
{
  extern typeof (f32xsub (vol_var__Bool, vol_var_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Bool, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_450 (void)
{
  extern typeof (f32xsub (vol_var__Bool, vol_var_unsigned_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Bool, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_451 (void)
{
  extern typeof (f32xsub (vol_var__Bool, vol_var_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Bool, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_452 (void)
{
  extern typeof (f32xsub (vol_var__Bool, vol_var_unsigned_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Bool, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_453 (void)
{
  extern typeof (f32xsub (vol_var__Bool, vol_var_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Bool, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_454 (void)
{
  extern typeof (f32xsub (vol_var__Bool, vol_var_unsigned_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Bool, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_455 (void)
{
  extern typeof (f32xsub (vol_var__Bool, vol_var_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Bool, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_456 (void)
{
  extern typeof (f32xsub (vol_var__Bool, vol_var_unsigned_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Bool, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xsub_457 (void)
{
  extern typeof (f32xsub (vol_var__Bool, vol_var___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Bool, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xsub_458 (void)
{
  extern typeof (f32xsub (vol_var__Bool, vol_var_unsigned___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Bool, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_459 (void)
{
  extern typeof (f32xsub (vol_var__Bool, vol_var_enum_e)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Bool, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_460 (void)
{
  extern typeof (f32xsub (vol_var__Bool, vol_var__Bool)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Bool, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_461 (void)
{
  extern typeof (f32xsub (vol_var__Bool, vol_var_bit_field)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var__Bool, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32xsub_462 (void)
{
  extern typeof (f32xsub (vol_var_bit_field, vol_var__Float16)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_bit_field, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32xsub_463 (void)
{
  extern typeof (f32xsub (vol_var_bit_field, vol_var__Float32)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_bit_field, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32xsub_464 (void)
{
  extern typeof (f32xsub (vol_var_bit_field, vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_bit_field, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32xsub_465 (void)
{
  extern typeof (f32xsub (vol_var_bit_field, vol_var__Float64)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_bit_field, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32xsub_466 (void)
{
  extern typeof (f32xsub (vol_var_bit_field, vol_var__Float64x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_bit_field, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32xsub_467 (void)
{
  extern typeof (f32xsub (vol_var_bit_field, vol_var__Float128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_bit_field, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_468 (void)
{
  extern typeof (f32xsub (vol_var_bit_field, vol_var_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_bit_field, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_469 (void)
{
  extern typeof (f32xsub (vol_var_bit_field, vol_var_signed_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_bit_field, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_470 (void)
{
  extern typeof (f32xsub (vol_var_bit_field, vol_var_unsigned_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_bit_field, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_471 (void)
{
  extern typeof (f32xsub (vol_var_bit_field, vol_var_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_bit_field, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_472 (void)
{
  extern typeof (f32xsub (vol_var_bit_field, vol_var_unsigned_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_bit_field, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_473 (void)
{
  extern typeof (f32xsub (vol_var_bit_field, vol_var_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_bit_field, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_474 (void)
{
  extern typeof (f32xsub (vol_var_bit_field, vol_var_unsigned_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_bit_field, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_475 (void)
{
  extern typeof (f32xsub (vol_var_bit_field, vol_var_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_bit_field, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_476 (void)
{
  extern typeof (f32xsub (vol_var_bit_field, vol_var_unsigned_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_bit_field, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_477 (void)
{
  extern typeof (f32xsub (vol_var_bit_field, vol_var_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_bit_field, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_478 (void)
{
  extern typeof (f32xsub (vol_var_bit_field, vol_var_unsigned_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_bit_field, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xsub_479 (void)
{
  extern typeof (f32xsub (vol_var_bit_field, vol_var___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_bit_field, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xsub_480 (void)
{
  extern typeof (f32xsub (vol_var_bit_field, vol_var_unsigned___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_bit_field, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_481 (void)
{
  extern typeof (f32xsub (vol_var_bit_field, vol_var_enum_e)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_bit_field, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_482 (void)
{
  extern typeof (f32xsub (vol_var_bit_field, vol_var__Bool)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_bit_field, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xsub_483 (void)
{
  extern typeof (f32xsub (vol_var_bit_field, vol_var_bit_field)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xsub (vol_var_bit_field, vol_var_bit_field);
}
#endif
static const struct test tests[] =
  {
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32xsub_0, "f32xsub", "f32xsub (_Float16, _Float16)", FLT32X_EXT_MANT_DIG, FLT16_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32
    { test_f32xsub_1, "f32xsub", "f32xsub (_Float16, _Float32)", FLT32X_EXT_MANT_DIG, FLT32_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
    { test_f32xsub_2, "f32xsub", "f32xsub (_Float16, _Float32x)", FLT32X_EXT_MANT_DIG, FLT32X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64
    { test_f32xsub_3, "f32xsub", "f32xsub (_Float16, _Float64)", FLT64_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
    { test_f32xsub_4, "f32xsub", "f32xsub (_Float16, _Float64x)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F16
    { test_f32xsub_5, "f32xsub", "f32xsub (_Float16, _Float128)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32xsub_6, "f32xsub", "f32xsub (_Float16, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32xsub_7, "f32xsub", "f32xsub (_Float16, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32xsub_8, "f32xsub", "f32xsub (_Float16, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32xsub_9, "f32xsub", "f32xsub (_Float16, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32xsub_10, "f32xsub", "f32xsub (_Float16, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32xsub_11, "f32xsub", "f32xsub (_Float16, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32xsub_12, "f32xsub", "f32xsub (_Float16, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32xsub_13, "f32xsub", "f32xsub (_Float16, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32xsub_14, "f32xsub", "f32xsub (_Float16, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32xsub_15, "f32xsub", "f32xsub (_Float16, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32xsub_16, "f32xsub", "f32xsub (_Float16, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_f32xsub_17, "f32xsub", "f32xsub (_Float16, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_f32xsub_18, "f32xsub", "f32xsub (_Float16, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32xsub_19, "f32xsub", "f32xsub (_Float16, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32xsub_20, "f32xsub", "f32xsub (_Float16, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32xsub_21, "f32xsub", "f32xsub (_Float16, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32
    { test_f32xsub_22, "f32xsub", "f32xsub (_Float32, _Float16)", FLT32X_EXT_MANT_DIG, FLT32_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32xsub_23, "f32xsub", "f32xsub (_Float32, _Float32)", FLT32X_EXT_MANT_DIG, FLT32_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
    { test_f32xsub_24, "f32xsub", "f32xsub (_Float32, _Float32x)", FLT32X_EXT_MANT_DIG, FLT32X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64
    { test_f32xsub_25, "f32xsub", "f32xsub (_Float32, _Float64)", FLT64_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
    { test_f32xsub_26, "f32xsub", "f32xsub (_Float32, _Float64x)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32
    { test_f32xsub_27, "f32xsub", "f32xsub (_Float32, _Float128)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32xsub_28, "f32xsub", "f32xsub (_Float32, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32xsub_29, "f32xsub", "f32xsub (_Float32, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32xsub_30, "f32xsub", "f32xsub (_Float32, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32xsub_31, "f32xsub", "f32xsub (_Float32, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32xsub_32, "f32xsub", "f32xsub (_Float32, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32xsub_33, "f32xsub", "f32xsub (_Float32, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32xsub_34, "f32xsub", "f32xsub (_Float32, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32xsub_35, "f32xsub", "f32xsub (_Float32, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32xsub_36, "f32xsub", "f32xsub (_Float32, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32xsub_37, "f32xsub", "f32xsub (_Float32, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32xsub_38, "f32xsub", "f32xsub (_Float32, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_f32xsub_39, "f32xsub", "f32xsub (_Float32, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_f32xsub_40, "f32xsub", "f32xsub (_Float32, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32xsub_41, "f32xsub", "f32xsub (_Float32, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32xsub_42, "f32xsub", "f32xsub (_Float32, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32xsub_43, "f32xsub", "f32xsub (_Float32, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
    { test_f32xsub_44, "f32xsub", "f32xsub (_Float32x, _Float16)", FLT32X_EXT_MANT_DIG, FLT32X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
    { test_f32xsub_45, "f32xsub", "f32xsub (_Float32x, _Float32)", FLT32X_EXT_MANT_DIG, FLT32X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32xsub_46, "f32xsub", "f32xsub (_Float32x, _Float32x)", FLT32X_EXT_MANT_DIG, FLT32X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64
    { test_f32xsub_47, "f32xsub", "f32xsub (_Float32x, _Float64)", FLT64_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
    { test_f32xsub_48, "f32xsub", "f32xsub (_Float32x, _Float64x)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
    { test_f32xsub_49, "f32xsub", "f32xsub (_Float32x, _Float128)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32xsub_50, "f32xsub", "f32xsub (_Float32x, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32xsub_51, "f32xsub", "f32xsub (_Float32x, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32xsub_52, "f32xsub", "f32xsub (_Float32x, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32xsub_53, "f32xsub", "f32xsub (_Float32x, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32xsub_54, "f32xsub", "f32xsub (_Float32x, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32xsub_55, "f32xsub", "f32xsub (_Float32x, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32xsub_56, "f32xsub", "f32xsub (_Float32x, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32xsub_57, "f32xsub", "f32xsub (_Float32x, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32xsub_58, "f32xsub", "f32xsub (_Float32x, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32xsub_59, "f32xsub", "f32xsub (_Float32x, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32xsub_60, "f32xsub", "f32xsub (_Float32x, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_f32xsub_61, "f32xsub", "f32xsub (_Float32x, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_f32xsub_62, "f32xsub", "f32xsub (_Float32x, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32xsub_63, "f32xsub", "f32xsub (_Float32x, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32xsub_64, "f32xsub", "f32xsub (_Float32x, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32xsub_65, "f32xsub", "f32xsub (_Float32x, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64
    { test_f32xsub_66, "f32xsub", "f32xsub (_Float64, _Float16)", FLT64_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64
    { test_f32xsub_67, "f32xsub", "f32xsub (_Float64, _Float32)", FLT64_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64
    { test_f32xsub_68, "f32xsub", "f32xsub (_Float64, _Float32x)", FLT64_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32xsub_69, "f32xsub", "f32xsub (_Float64, _Float64)", FLT64_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
    { test_f32xsub_70, "f32xsub", "f32xsub (_Float64, _Float64x)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64
    { test_f32xsub_71, "f32xsub", "f32xsub (_Float64, _Float128)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32xsub_72, "f32xsub", "f32xsub (_Float64, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32xsub_73, "f32xsub", "f32xsub (_Float64, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32xsub_74, "f32xsub", "f32xsub (_Float64, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32xsub_75, "f32xsub", "f32xsub (_Float64, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32xsub_76, "f32xsub", "f32xsub (_Float64, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32xsub_77, "f32xsub", "f32xsub (_Float64, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32xsub_78, "f32xsub", "f32xsub (_Float64, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32xsub_79, "f32xsub", "f32xsub (_Float64, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32xsub_80, "f32xsub", "f32xsub (_Float64, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32xsub_81, "f32xsub", "f32xsub (_Float64, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32xsub_82, "f32xsub", "f32xsub (_Float64, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_f32xsub_83, "f32xsub", "f32xsub (_Float64, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_f32xsub_84, "f32xsub", "f32xsub (_Float64, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32xsub_85, "f32xsub", "f32xsub (_Float64, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32xsub_86, "f32xsub", "f32xsub (_Float64, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32xsub_87, "f32xsub", "f32xsub (_Float64, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
    { test_f32xsub_88, "f32xsub", "f32xsub (_Float64x, _Float16)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
    { test_f32xsub_89, "f32xsub", "f32xsub (_Float64x, _Float32)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
    { test_f32xsub_90, "f32xsub", "f32xsub (_Float64x, _Float32x)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
    { test_f32xsub_91, "f32xsub", "f32xsub (_Float64x, _Float64)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32xsub_92, "f32xsub", "f32xsub (_Float64x, _Float64x)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
    { test_f32xsub_93, "f32xsub", "f32xsub (_Float64x, _Float128)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32xsub_94, "f32xsub", "f32xsub (_Float64x, char)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32xsub_95, "f32xsub", "f32xsub (_Float64x, signed char)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32xsub_96, "f32xsub", "f32xsub (_Float64x, unsigned char)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32xsub_97, "f32xsub", "f32xsub (_Float64x, short int)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32xsub_98, "f32xsub", "f32xsub (_Float64x, unsigned short int)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32xsub_99, "f32xsub", "f32xsub (_Float64x, int)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32xsub_100, "f32xsub", "f32xsub (_Float64x, unsigned int)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32xsub_101, "f32xsub", "f32xsub (_Float64x, long int)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32xsub_102, "f32xsub", "f32xsub (_Float64x, unsigned long int)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32xsub_103, "f32xsub", "f32xsub (_Float64x, long long int)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32xsub_104, "f32xsub", "f32xsub (_Float64x, unsigned long long int)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_f32xsub_105, "f32xsub", "f32xsub (_Float64x, __int128)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_f32xsub_106, "f32xsub", "f32xsub (_Float64x, unsigned __int128)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32xsub_107, "f32xsub", "f32xsub (_Float64x, enum e)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32xsub_108, "f32xsub", "f32xsub (_Float64x, _Bool)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32xsub_109, "f32xsub", "f32xsub (_Float64x, bit_field)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F16
    { test_f32xsub_110, "f32xsub", "f32xsub (_Float128, _Float16)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32
    { test_f32xsub_111, "f32xsub", "f32xsub (_Float128, _Float32)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
    { test_f32xsub_112, "f32xsub", "f32xsub (_Float128, _Float32x)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64
    { test_f32xsub_113, "f32xsub", "f32xsub (_Float128, _Float64)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
    { test_f32xsub_114, "f32xsub", "f32xsub (_Float128, _Float64x)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32xsub_115, "f32xsub", "f32xsub (_Float128, _Float128)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32xsub_116, "f32xsub", "f32xsub (_Float128, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32xsub_117, "f32xsub", "f32xsub (_Float128, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32xsub_118, "f32xsub", "f32xsub (_Float128, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32xsub_119, "f32xsub", "f32xsub (_Float128, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32xsub_120, "f32xsub", "f32xsub (_Float128, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32xsub_121, "f32xsub", "f32xsub (_Float128, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32xsub_122, "f32xsub", "f32xsub (_Float128, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32xsub_123, "f32xsub", "f32xsub (_Float128, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32xsub_124, "f32xsub", "f32xsub (_Float128, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32xsub_125, "f32xsub", "f32xsub (_Float128, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32xsub_126, "f32xsub", "f32xsub (_Float128, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_f32xsub_127, "f32xsub", "f32xsub (_Float128, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_f32xsub_128, "f32xsub", "f32xsub (_Float128, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32xsub_129, "f32xsub", "f32xsub (_Float128, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32xsub_130, "f32xsub", "f32xsub (_Float128, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32xsub_131, "f32xsub", "f32xsub (_Float128, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32xsub_132, "f32xsub", "f32xsub (char, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32xsub_133, "f32xsub", "f32xsub (char, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32xsub_134, "f32xsub", "f32xsub (char, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32xsub_135, "f32xsub", "f32xsub (char, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32xsub_136, "f32xsub", "f32xsub (char, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32xsub_137, "f32xsub", "f32xsub (char, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_138, "f32xsub", "f32xsub (char, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_139, "f32xsub", "f32xsub (char, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_140, "f32xsub", "f32xsub (char, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_141, "f32xsub", "f32xsub (char, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_142, "f32xsub", "f32xsub (char, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_143, "f32xsub", "f32xsub (char, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_144, "f32xsub", "f32xsub (char, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_145, "f32xsub", "f32xsub (char, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_146, "f32xsub", "f32xsub (char, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_147, "f32xsub", "f32xsub (char, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_148, "f32xsub", "f32xsub (char, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xsub_149, "f32xsub", "f32xsub (char, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xsub_150, "f32xsub", "f32xsub (char, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_151, "f32xsub", "f32xsub (char, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_152, "f32xsub", "f32xsub (char, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_153, "f32xsub", "f32xsub (char, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32xsub_154, "f32xsub", "f32xsub (signed char, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32xsub_155, "f32xsub", "f32xsub (signed char, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32xsub_156, "f32xsub", "f32xsub (signed char, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32xsub_157, "f32xsub", "f32xsub (signed char, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32xsub_158, "f32xsub", "f32xsub (signed char, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32xsub_159, "f32xsub", "f32xsub (signed char, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_160, "f32xsub", "f32xsub (signed char, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_161, "f32xsub", "f32xsub (signed char, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_162, "f32xsub", "f32xsub (signed char, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_163, "f32xsub", "f32xsub (signed char, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_164, "f32xsub", "f32xsub (signed char, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_165, "f32xsub", "f32xsub (signed char, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_166, "f32xsub", "f32xsub (signed char, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_167, "f32xsub", "f32xsub (signed char, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_168, "f32xsub", "f32xsub (signed char, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_169, "f32xsub", "f32xsub (signed char, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_170, "f32xsub", "f32xsub (signed char, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xsub_171, "f32xsub", "f32xsub (signed char, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xsub_172, "f32xsub", "f32xsub (signed char, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_173, "f32xsub", "f32xsub (signed char, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_174, "f32xsub", "f32xsub (signed char, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_175, "f32xsub", "f32xsub (signed char, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32xsub_176, "f32xsub", "f32xsub (unsigned char, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32xsub_177, "f32xsub", "f32xsub (unsigned char, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32xsub_178, "f32xsub", "f32xsub (unsigned char, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32xsub_179, "f32xsub", "f32xsub (unsigned char, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32xsub_180, "f32xsub", "f32xsub (unsigned char, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32xsub_181, "f32xsub", "f32xsub (unsigned char, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_182, "f32xsub", "f32xsub (unsigned char, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_183, "f32xsub", "f32xsub (unsigned char, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_184, "f32xsub", "f32xsub (unsigned char, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_185, "f32xsub", "f32xsub (unsigned char, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_186, "f32xsub", "f32xsub (unsigned char, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_187, "f32xsub", "f32xsub (unsigned char, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_188, "f32xsub", "f32xsub (unsigned char, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_189, "f32xsub", "f32xsub (unsigned char, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_190, "f32xsub", "f32xsub (unsigned char, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_191, "f32xsub", "f32xsub (unsigned char, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_192, "f32xsub", "f32xsub (unsigned char, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xsub_193, "f32xsub", "f32xsub (unsigned char, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xsub_194, "f32xsub", "f32xsub (unsigned char, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_195, "f32xsub", "f32xsub (unsigned char, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_196, "f32xsub", "f32xsub (unsigned char, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_197, "f32xsub", "f32xsub (unsigned char, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32xsub_198, "f32xsub", "f32xsub (short int, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32xsub_199, "f32xsub", "f32xsub (short int, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32xsub_200, "f32xsub", "f32xsub (short int, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32xsub_201, "f32xsub", "f32xsub (short int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32xsub_202, "f32xsub", "f32xsub (short int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32xsub_203, "f32xsub", "f32xsub (short int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_204, "f32xsub", "f32xsub (short int, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_205, "f32xsub", "f32xsub (short int, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_206, "f32xsub", "f32xsub (short int, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_207, "f32xsub", "f32xsub (short int, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_208, "f32xsub", "f32xsub (short int, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_209, "f32xsub", "f32xsub (short int, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_210, "f32xsub", "f32xsub (short int, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_211, "f32xsub", "f32xsub (short int, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_212, "f32xsub", "f32xsub (short int, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_213, "f32xsub", "f32xsub (short int, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_214, "f32xsub", "f32xsub (short int, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xsub_215, "f32xsub", "f32xsub (short int, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xsub_216, "f32xsub", "f32xsub (short int, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_217, "f32xsub", "f32xsub (short int, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_218, "f32xsub", "f32xsub (short int, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_219, "f32xsub", "f32xsub (short int, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32xsub_220, "f32xsub", "f32xsub (unsigned short int, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32xsub_221, "f32xsub", "f32xsub (unsigned short int, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32xsub_222, "f32xsub", "f32xsub (unsigned short int, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32xsub_223, "f32xsub", "f32xsub (unsigned short int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32xsub_224, "f32xsub", "f32xsub (unsigned short int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32xsub_225, "f32xsub", "f32xsub (unsigned short int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_226, "f32xsub", "f32xsub (unsigned short int, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_227, "f32xsub", "f32xsub (unsigned short int, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_228, "f32xsub", "f32xsub (unsigned short int, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_229, "f32xsub", "f32xsub (unsigned short int, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_230, "f32xsub", "f32xsub (unsigned short int, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_231, "f32xsub", "f32xsub (unsigned short int, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_232, "f32xsub", "f32xsub (unsigned short int, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_233, "f32xsub", "f32xsub (unsigned short int, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_234, "f32xsub", "f32xsub (unsigned short int, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_235, "f32xsub", "f32xsub (unsigned short int, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_236, "f32xsub", "f32xsub (unsigned short int, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xsub_237, "f32xsub", "f32xsub (unsigned short int, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xsub_238, "f32xsub", "f32xsub (unsigned short int, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_239, "f32xsub", "f32xsub (unsigned short int, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_240, "f32xsub", "f32xsub (unsigned short int, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_241, "f32xsub", "f32xsub (unsigned short int, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32xsub_242, "f32xsub", "f32xsub (int, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32xsub_243, "f32xsub", "f32xsub (int, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32xsub_244, "f32xsub", "f32xsub (int, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32xsub_245, "f32xsub", "f32xsub (int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32xsub_246, "f32xsub", "f32xsub (int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32xsub_247, "f32xsub", "f32xsub (int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_248, "f32xsub", "f32xsub (int, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_249, "f32xsub", "f32xsub (int, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_250, "f32xsub", "f32xsub (int, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_251, "f32xsub", "f32xsub (int, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_252, "f32xsub", "f32xsub (int, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_253, "f32xsub", "f32xsub (int, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_254, "f32xsub", "f32xsub (int, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_255, "f32xsub", "f32xsub (int, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_256, "f32xsub", "f32xsub (int, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_257, "f32xsub", "f32xsub (int, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_258, "f32xsub", "f32xsub (int, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xsub_259, "f32xsub", "f32xsub (int, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xsub_260, "f32xsub", "f32xsub (int, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_261, "f32xsub", "f32xsub (int, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_262, "f32xsub", "f32xsub (int, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_263, "f32xsub", "f32xsub (int, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32xsub_264, "f32xsub", "f32xsub (unsigned int, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32xsub_265, "f32xsub", "f32xsub (unsigned int, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32xsub_266, "f32xsub", "f32xsub (unsigned int, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32xsub_267, "f32xsub", "f32xsub (unsigned int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32xsub_268, "f32xsub", "f32xsub (unsigned int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32xsub_269, "f32xsub", "f32xsub (unsigned int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_270, "f32xsub", "f32xsub (unsigned int, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_271, "f32xsub", "f32xsub (unsigned int, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_272, "f32xsub", "f32xsub (unsigned int, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_273, "f32xsub", "f32xsub (unsigned int, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_274, "f32xsub", "f32xsub (unsigned int, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_275, "f32xsub", "f32xsub (unsigned int, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_276, "f32xsub", "f32xsub (unsigned int, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_277, "f32xsub", "f32xsub (unsigned int, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_278, "f32xsub", "f32xsub (unsigned int, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_279, "f32xsub", "f32xsub (unsigned int, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_280, "f32xsub", "f32xsub (unsigned int, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xsub_281, "f32xsub", "f32xsub (unsigned int, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xsub_282, "f32xsub", "f32xsub (unsigned int, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_283, "f32xsub", "f32xsub (unsigned int, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_284, "f32xsub", "f32xsub (unsigned int, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_285, "f32xsub", "f32xsub (unsigned int, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32xsub_286, "f32xsub", "f32xsub (long int, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32xsub_287, "f32xsub", "f32xsub (long int, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32xsub_288, "f32xsub", "f32xsub (long int, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32xsub_289, "f32xsub", "f32xsub (long int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32xsub_290, "f32xsub", "f32xsub (long int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32xsub_291, "f32xsub", "f32xsub (long int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_292, "f32xsub", "f32xsub (long int, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_293, "f32xsub", "f32xsub (long int, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_294, "f32xsub", "f32xsub (long int, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_295, "f32xsub", "f32xsub (long int, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_296, "f32xsub", "f32xsub (long int, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_297, "f32xsub", "f32xsub (long int, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_298, "f32xsub", "f32xsub (long int, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_299, "f32xsub", "f32xsub (long int, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_300, "f32xsub", "f32xsub (long int, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_301, "f32xsub", "f32xsub (long int, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_302, "f32xsub", "f32xsub (long int, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xsub_303, "f32xsub", "f32xsub (long int, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xsub_304, "f32xsub", "f32xsub (long int, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_305, "f32xsub", "f32xsub (long int, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_306, "f32xsub", "f32xsub (long int, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_307, "f32xsub", "f32xsub (long int, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32xsub_308, "f32xsub", "f32xsub (unsigned long int, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32xsub_309, "f32xsub", "f32xsub (unsigned long int, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32xsub_310, "f32xsub", "f32xsub (unsigned long int, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32xsub_311, "f32xsub", "f32xsub (unsigned long int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32xsub_312, "f32xsub", "f32xsub (unsigned long int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32xsub_313, "f32xsub", "f32xsub (unsigned long int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_314, "f32xsub", "f32xsub (unsigned long int, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_315, "f32xsub", "f32xsub (unsigned long int, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_316, "f32xsub", "f32xsub (unsigned long int, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_317, "f32xsub", "f32xsub (unsigned long int, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_318, "f32xsub", "f32xsub (unsigned long int, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_319, "f32xsub", "f32xsub (unsigned long int, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_320, "f32xsub", "f32xsub (unsigned long int, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_321, "f32xsub", "f32xsub (unsigned long int, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_322, "f32xsub", "f32xsub (unsigned long int, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_323, "f32xsub", "f32xsub (unsigned long int, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_324, "f32xsub", "f32xsub (unsigned long int, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xsub_325, "f32xsub", "f32xsub (unsigned long int, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xsub_326, "f32xsub", "f32xsub (unsigned long int, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_327, "f32xsub", "f32xsub (unsigned long int, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_328, "f32xsub", "f32xsub (unsigned long int, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_329, "f32xsub", "f32xsub (unsigned long int, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32xsub_330, "f32xsub", "f32xsub (long long int, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32xsub_331, "f32xsub", "f32xsub (long long int, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32xsub_332, "f32xsub", "f32xsub (long long int, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32xsub_333, "f32xsub", "f32xsub (long long int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32xsub_334, "f32xsub", "f32xsub (long long int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32xsub_335, "f32xsub", "f32xsub (long long int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_336, "f32xsub", "f32xsub (long long int, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_337, "f32xsub", "f32xsub (long long int, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_338, "f32xsub", "f32xsub (long long int, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_339, "f32xsub", "f32xsub (long long int, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_340, "f32xsub", "f32xsub (long long int, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_341, "f32xsub", "f32xsub (long long int, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_342, "f32xsub", "f32xsub (long long int, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_343, "f32xsub", "f32xsub (long long int, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_344, "f32xsub", "f32xsub (long long int, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_345, "f32xsub", "f32xsub (long long int, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_346, "f32xsub", "f32xsub (long long int, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xsub_347, "f32xsub", "f32xsub (long long int, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xsub_348, "f32xsub", "f32xsub (long long int, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_349, "f32xsub", "f32xsub (long long int, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_350, "f32xsub", "f32xsub (long long int, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_351, "f32xsub", "f32xsub (long long int, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32xsub_352, "f32xsub", "f32xsub (unsigned long long int, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32xsub_353, "f32xsub", "f32xsub (unsigned long long int, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32xsub_354, "f32xsub", "f32xsub (unsigned long long int, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32xsub_355, "f32xsub", "f32xsub (unsigned long long int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32xsub_356, "f32xsub", "f32xsub (unsigned long long int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32xsub_357, "f32xsub", "f32xsub (unsigned long long int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_358, "f32xsub", "f32xsub (unsigned long long int, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_359, "f32xsub", "f32xsub (unsigned long long int, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_360, "f32xsub", "f32xsub (unsigned long long int, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_361, "f32xsub", "f32xsub (unsigned long long int, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_362, "f32xsub", "f32xsub (unsigned long long int, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_363, "f32xsub", "f32xsub (unsigned long long int, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_364, "f32xsub", "f32xsub (unsigned long long int, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_365, "f32xsub", "f32xsub (unsigned long long int, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_366, "f32xsub", "f32xsub (unsigned long long int, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_367, "f32xsub", "f32xsub (unsigned long long int, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_368, "f32xsub", "f32xsub (unsigned long long int, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xsub_369, "f32xsub", "f32xsub (unsigned long long int, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xsub_370, "f32xsub", "f32xsub (unsigned long long int, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_371, "f32xsub", "f32xsub (unsigned long long int, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_372, "f32xsub", "f32xsub (unsigned long long int, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_373, "f32xsub", "f32xsub (unsigned long long int, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_f32xsub_374, "f32xsub", "f32xsub (__int128, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_f32xsub_375, "f32xsub", "f32xsub (__int128, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_f32xsub_376, "f32xsub", "f32xsub (__int128, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_f32xsub_377, "f32xsub", "f32xsub (__int128, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_f32xsub_378, "f32xsub", "f32xsub (__int128, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_f32xsub_379, "f32xsub", "f32xsub (__int128, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xsub_380, "f32xsub", "f32xsub (__int128, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xsub_381, "f32xsub", "f32xsub (__int128, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xsub_382, "f32xsub", "f32xsub (__int128, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xsub_383, "f32xsub", "f32xsub (__int128, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xsub_384, "f32xsub", "f32xsub (__int128, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xsub_385, "f32xsub", "f32xsub (__int128, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xsub_386, "f32xsub", "f32xsub (__int128, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xsub_387, "f32xsub", "f32xsub (__int128, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xsub_388, "f32xsub", "f32xsub (__int128, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xsub_389, "f32xsub", "f32xsub (__int128, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xsub_390, "f32xsub", "f32xsub (__int128, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xsub_391, "f32xsub", "f32xsub (__int128, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xsub_392, "f32xsub", "f32xsub (__int128, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xsub_393, "f32xsub", "f32xsub (__int128, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xsub_394, "f32xsub", "f32xsub (__int128, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xsub_395, "f32xsub", "f32xsub (__int128, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_f32xsub_396, "f32xsub", "f32xsub (unsigned __int128, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_f32xsub_397, "f32xsub", "f32xsub (unsigned __int128, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_f32xsub_398, "f32xsub", "f32xsub (unsigned __int128, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_f32xsub_399, "f32xsub", "f32xsub (unsigned __int128, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_f32xsub_400, "f32xsub", "f32xsub (unsigned __int128, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_f32xsub_401, "f32xsub", "f32xsub (unsigned __int128, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xsub_402, "f32xsub", "f32xsub (unsigned __int128, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xsub_403, "f32xsub", "f32xsub (unsigned __int128, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xsub_404, "f32xsub", "f32xsub (unsigned __int128, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xsub_405, "f32xsub", "f32xsub (unsigned __int128, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xsub_406, "f32xsub", "f32xsub (unsigned __int128, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xsub_407, "f32xsub", "f32xsub (unsigned __int128, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xsub_408, "f32xsub", "f32xsub (unsigned __int128, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xsub_409, "f32xsub", "f32xsub (unsigned __int128, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xsub_410, "f32xsub", "f32xsub (unsigned __int128, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xsub_411, "f32xsub", "f32xsub (unsigned __int128, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xsub_412, "f32xsub", "f32xsub (unsigned __int128, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xsub_413, "f32xsub", "f32xsub (unsigned __int128, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xsub_414, "f32xsub", "f32xsub (unsigned __int128, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xsub_415, "f32xsub", "f32xsub (unsigned __int128, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xsub_416, "f32xsub", "f32xsub (unsigned __int128, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xsub_417, "f32xsub", "f32xsub (unsigned __int128, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32xsub_418, "f32xsub", "f32xsub (enum e, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32xsub_419, "f32xsub", "f32xsub (enum e, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32xsub_420, "f32xsub", "f32xsub (enum e, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32xsub_421, "f32xsub", "f32xsub (enum e, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32xsub_422, "f32xsub", "f32xsub (enum e, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32xsub_423, "f32xsub", "f32xsub (enum e, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_424, "f32xsub", "f32xsub (enum e, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_425, "f32xsub", "f32xsub (enum e, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_426, "f32xsub", "f32xsub (enum e, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_427, "f32xsub", "f32xsub (enum e, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_428, "f32xsub", "f32xsub (enum e, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_429, "f32xsub", "f32xsub (enum e, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_430, "f32xsub", "f32xsub (enum e, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_431, "f32xsub", "f32xsub (enum e, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_432, "f32xsub", "f32xsub (enum e, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_433, "f32xsub", "f32xsub (enum e, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_434, "f32xsub", "f32xsub (enum e, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xsub_435, "f32xsub", "f32xsub (enum e, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xsub_436, "f32xsub", "f32xsub (enum e, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_437, "f32xsub", "f32xsub (enum e, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_438, "f32xsub", "f32xsub (enum e, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_439, "f32xsub", "f32xsub (enum e, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32xsub_440, "f32xsub", "f32xsub (_Bool, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32xsub_441, "f32xsub", "f32xsub (_Bool, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32xsub_442, "f32xsub", "f32xsub (_Bool, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32xsub_443, "f32xsub", "f32xsub (_Bool, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32xsub_444, "f32xsub", "f32xsub (_Bool, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32xsub_445, "f32xsub", "f32xsub (_Bool, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_446, "f32xsub", "f32xsub (_Bool, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_447, "f32xsub", "f32xsub (_Bool, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_448, "f32xsub", "f32xsub (_Bool, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_449, "f32xsub", "f32xsub (_Bool, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_450, "f32xsub", "f32xsub (_Bool, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_451, "f32xsub", "f32xsub (_Bool, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_452, "f32xsub", "f32xsub (_Bool, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_453, "f32xsub", "f32xsub (_Bool, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_454, "f32xsub", "f32xsub (_Bool, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_455, "f32xsub", "f32xsub (_Bool, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_456, "f32xsub", "f32xsub (_Bool, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xsub_457, "f32xsub", "f32xsub (_Bool, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xsub_458, "f32xsub", "f32xsub (_Bool, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_459, "f32xsub", "f32xsub (_Bool, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_460, "f32xsub", "f32xsub (_Bool, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_461, "f32xsub", "f32xsub (_Bool, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32xsub_462, "f32xsub", "f32xsub (bit_field, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32xsub_463, "f32xsub", "f32xsub (bit_field, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32xsub_464, "f32xsub", "f32xsub (bit_field, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32xsub_465, "f32xsub", "f32xsub (bit_field, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32xsub_466, "f32xsub", "f32xsub (bit_field, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32xsub_467, "f32xsub", "f32xsub (bit_field, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_468, "f32xsub", "f32xsub (bit_field, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_469, "f32xsub", "f32xsub (bit_field, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_470, "f32xsub", "f32xsub (bit_field, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_471, "f32xsub", "f32xsub (bit_field, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_472, "f32xsub", "f32xsub (bit_field, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_473, "f32xsub", "f32xsub (bit_field, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_474, "f32xsub", "f32xsub (bit_field, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_475, "f32xsub", "f32xsub (bit_field, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_476, "f32xsub", "f32xsub (bit_field, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_477, "f32xsub", "f32xsub (bit_field, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_478, "f32xsub", "f32xsub (bit_field, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xsub_479, "f32xsub", "f32xsub (bit_field, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xsub_480, "f32xsub", "f32xsub (bit_field, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_481, "f32xsub", "f32xsub (bit_field, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_482, "f32xsub", "f32xsub (bit_field, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xsub_483, "f32xsub", "f32xsub (bit_field, bit_field)", FLT64_MANT_DIG, 0 },
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
