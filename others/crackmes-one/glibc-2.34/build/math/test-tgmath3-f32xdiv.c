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
(f32xdivf64) (_Float64 arg0 __attribute__ ((unused)), _Float64 arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT64_MANT_DIG;
  called_func_name = "f32xdiv";
  return 0;
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
_Float32x
(f32xdivf64x) (_Float64x arg0 __attribute__ ((unused)), _Float64x arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT64X_MANT_DIG;
  called_func_name = "f32xdiv";
  return 0;
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
_Float32x
(f32xdivf128) (_Float128 arg0 __attribute__ ((unused)), _Float128 arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT128_MANT_DIG;
  called_func_name = "f32xdiv";
  return 0;
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32xdiv_0 (void)
{
  extern typeof (f32xdiv (vol_var__Float16, vol_var__Float16)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Float16, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32
static void
test_f32xdiv_1 (void)
{
  extern typeof (f32xdiv (vol_var__Float16, vol_var__Float32)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Float16, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
static void
test_f32xdiv_2 (void)
{
  extern typeof (f32xdiv (vol_var__Float16, vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Float16, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64
static void
test_f32xdiv_3 (void)
{
  extern typeof (f32xdiv (vol_var__Float16, vol_var__Float64)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Float16, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
static void
test_f32xdiv_4 (void)
{
  extern typeof (f32xdiv (vol_var__Float16, vol_var__Float64x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Float16, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F16
static void
test_f32xdiv_5 (void)
{
  extern typeof (f32xdiv (vol_var__Float16, vol_var__Float128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Float16, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32xdiv_6 (void)
{
  extern typeof (f32xdiv (vol_var__Float16, vol_var_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Float16, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32xdiv_7 (void)
{
  extern typeof (f32xdiv (vol_var__Float16, vol_var_signed_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Float16, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32xdiv_8 (void)
{
  extern typeof (f32xdiv (vol_var__Float16, vol_var_unsigned_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Float16, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32xdiv_9 (void)
{
  extern typeof (f32xdiv (vol_var__Float16, vol_var_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Float16, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32xdiv_10 (void)
{
  extern typeof (f32xdiv (vol_var__Float16, vol_var_unsigned_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Float16, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32xdiv_11 (void)
{
  extern typeof (f32xdiv (vol_var__Float16, vol_var_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Float16, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32xdiv_12 (void)
{
  extern typeof (f32xdiv (vol_var__Float16, vol_var_unsigned_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Float16, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32xdiv_13 (void)
{
  extern typeof (f32xdiv (vol_var__Float16, vol_var_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Float16, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32xdiv_14 (void)
{
  extern typeof (f32xdiv (vol_var__Float16, vol_var_unsigned_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Float16, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32xdiv_15 (void)
{
  extern typeof (f32xdiv (vol_var__Float16, vol_var_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Float16, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32xdiv_16 (void)
{
  extern typeof (f32xdiv (vol_var__Float16, vol_var_unsigned_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Float16, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_f32xdiv_17 (void)
{
  extern typeof (f32xdiv (vol_var__Float16, vol_var___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Float16, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_f32xdiv_18 (void)
{
  extern typeof (f32xdiv (vol_var__Float16, vol_var_unsigned___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Float16, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32xdiv_19 (void)
{
  extern typeof (f32xdiv (vol_var__Float16, vol_var_enum_e)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Float16, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32xdiv_20 (void)
{
  extern typeof (f32xdiv (vol_var__Float16, vol_var__Bool)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Float16, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32xdiv_21 (void)
{
  extern typeof (f32xdiv (vol_var__Float16, vol_var_bit_field)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Float16, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32
static void
test_f32xdiv_22 (void)
{
  extern typeof (f32xdiv (vol_var__Float32, vol_var__Float16)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Float32, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32xdiv_23 (void)
{
  extern typeof (f32xdiv (vol_var__Float32, vol_var__Float32)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Float32, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
static void
test_f32xdiv_24 (void)
{
  extern typeof (f32xdiv (vol_var__Float32, vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Float32, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64
static void
test_f32xdiv_25 (void)
{
  extern typeof (f32xdiv (vol_var__Float32, vol_var__Float64)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Float32, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
static void
test_f32xdiv_26 (void)
{
  extern typeof (f32xdiv (vol_var__Float32, vol_var__Float64x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Float32, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32
static void
test_f32xdiv_27 (void)
{
  extern typeof (f32xdiv (vol_var__Float32, vol_var__Float128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Float32, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32xdiv_28 (void)
{
  extern typeof (f32xdiv (vol_var__Float32, vol_var_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Float32, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32xdiv_29 (void)
{
  extern typeof (f32xdiv (vol_var__Float32, vol_var_signed_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Float32, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32xdiv_30 (void)
{
  extern typeof (f32xdiv (vol_var__Float32, vol_var_unsigned_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Float32, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32xdiv_31 (void)
{
  extern typeof (f32xdiv (vol_var__Float32, vol_var_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Float32, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32xdiv_32 (void)
{
  extern typeof (f32xdiv (vol_var__Float32, vol_var_unsigned_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Float32, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32xdiv_33 (void)
{
  extern typeof (f32xdiv (vol_var__Float32, vol_var_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Float32, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32xdiv_34 (void)
{
  extern typeof (f32xdiv (vol_var__Float32, vol_var_unsigned_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Float32, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32xdiv_35 (void)
{
  extern typeof (f32xdiv (vol_var__Float32, vol_var_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Float32, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32xdiv_36 (void)
{
  extern typeof (f32xdiv (vol_var__Float32, vol_var_unsigned_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Float32, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32xdiv_37 (void)
{
  extern typeof (f32xdiv (vol_var__Float32, vol_var_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Float32, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32xdiv_38 (void)
{
  extern typeof (f32xdiv (vol_var__Float32, vol_var_unsigned_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Float32, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_f32xdiv_39 (void)
{
  extern typeof (f32xdiv (vol_var__Float32, vol_var___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Float32, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_f32xdiv_40 (void)
{
  extern typeof (f32xdiv (vol_var__Float32, vol_var_unsigned___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Float32, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32xdiv_41 (void)
{
  extern typeof (f32xdiv (vol_var__Float32, vol_var_enum_e)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Float32, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32xdiv_42 (void)
{
  extern typeof (f32xdiv (vol_var__Float32, vol_var__Bool)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Float32, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32xdiv_43 (void)
{
  extern typeof (f32xdiv (vol_var__Float32, vol_var_bit_field)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Float32, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
static void
test_f32xdiv_44 (void)
{
  extern typeof (f32xdiv (vol_var__Float32x, vol_var__Float16)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Float32x, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
static void
test_f32xdiv_45 (void)
{
  extern typeof (f32xdiv (vol_var__Float32x, vol_var__Float32)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Float32x, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32xdiv_46 (void)
{
  extern typeof (f32xdiv (vol_var__Float32x, vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Float32x, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64
static void
test_f32xdiv_47 (void)
{
  extern typeof (f32xdiv (vol_var__Float32x, vol_var__Float64)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Float32x, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
static void
test_f32xdiv_48 (void)
{
  extern typeof (f32xdiv (vol_var__Float32x, vol_var__Float64x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Float32x, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
static void
test_f32xdiv_49 (void)
{
  extern typeof (f32xdiv (vol_var__Float32x, vol_var__Float128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Float32x, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32xdiv_50 (void)
{
  extern typeof (f32xdiv (vol_var__Float32x, vol_var_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Float32x, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32xdiv_51 (void)
{
  extern typeof (f32xdiv (vol_var__Float32x, vol_var_signed_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Float32x, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32xdiv_52 (void)
{
  extern typeof (f32xdiv (vol_var__Float32x, vol_var_unsigned_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Float32x, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32xdiv_53 (void)
{
  extern typeof (f32xdiv (vol_var__Float32x, vol_var_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Float32x, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32xdiv_54 (void)
{
  extern typeof (f32xdiv (vol_var__Float32x, vol_var_unsigned_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Float32x, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32xdiv_55 (void)
{
  extern typeof (f32xdiv (vol_var__Float32x, vol_var_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Float32x, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32xdiv_56 (void)
{
  extern typeof (f32xdiv (vol_var__Float32x, vol_var_unsigned_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Float32x, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32xdiv_57 (void)
{
  extern typeof (f32xdiv (vol_var__Float32x, vol_var_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Float32x, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32xdiv_58 (void)
{
  extern typeof (f32xdiv (vol_var__Float32x, vol_var_unsigned_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Float32x, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32xdiv_59 (void)
{
  extern typeof (f32xdiv (vol_var__Float32x, vol_var_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Float32x, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32xdiv_60 (void)
{
  extern typeof (f32xdiv (vol_var__Float32x, vol_var_unsigned_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Float32x, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_f32xdiv_61 (void)
{
  extern typeof (f32xdiv (vol_var__Float32x, vol_var___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Float32x, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_f32xdiv_62 (void)
{
  extern typeof (f32xdiv (vol_var__Float32x, vol_var_unsigned___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Float32x, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32xdiv_63 (void)
{
  extern typeof (f32xdiv (vol_var__Float32x, vol_var_enum_e)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Float32x, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32xdiv_64 (void)
{
  extern typeof (f32xdiv (vol_var__Float32x, vol_var__Bool)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Float32x, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32xdiv_65 (void)
{
  extern typeof (f32xdiv (vol_var__Float32x, vol_var_bit_field)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Float32x, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64
static void
test_f32xdiv_66 (void)
{
  extern typeof (f32xdiv (vol_var__Float64, vol_var__Float16)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Float64, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64
static void
test_f32xdiv_67 (void)
{
  extern typeof (f32xdiv (vol_var__Float64, vol_var__Float32)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Float64, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64
static void
test_f32xdiv_68 (void)
{
  extern typeof (f32xdiv (vol_var__Float64, vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Float64, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32xdiv_69 (void)
{
  extern typeof (f32xdiv (vol_var__Float64, vol_var__Float64)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Float64, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
static void
test_f32xdiv_70 (void)
{
  extern typeof (f32xdiv (vol_var__Float64, vol_var__Float64x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Float64, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64
static void
test_f32xdiv_71 (void)
{
  extern typeof (f32xdiv (vol_var__Float64, vol_var__Float128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Float64, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32xdiv_72 (void)
{
  extern typeof (f32xdiv (vol_var__Float64, vol_var_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Float64, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32xdiv_73 (void)
{
  extern typeof (f32xdiv (vol_var__Float64, vol_var_signed_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Float64, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32xdiv_74 (void)
{
  extern typeof (f32xdiv (vol_var__Float64, vol_var_unsigned_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Float64, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32xdiv_75 (void)
{
  extern typeof (f32xdiv (vol_var__Float64, vol_var_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Float64, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32xdiv_76 (void)
{
  extern typeof (f32xdiv (vol_var__Float64, vol_var_unsigned_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Float64, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32xdiv_77 (void)
{
  extern typeof (f32xdiv (vol_var__Float64, vol_var_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Float64, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32xdiv_78 (void)
{
  extern typeof (f32xdiv (vol_var__Float64, vol_var_unsigned_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Float64, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32xdiv_79 (void)
{
  extern typeof (f32xdiv (vol_var__Float64, vol_var_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Float64, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32xdiv_80 (void)
{
  extern typeof (f32xdiv (vol_var__Float64, vol_var_unsigned_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Float64, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32xdiv_81 (void)
{
  extern typeof (f32xdiv (vol_var__Float64, vol_var_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Float64, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32xdiv_82 (void)
{
  extern typeof (f32xdiv (vol_var__Float64, vol_var_unsigned_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Float64, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_f32xdiv_83 (void)
{
  extern typeof (f32xdiv (vol_var__Float64, vol_var___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Float64, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_f32xdiv_84 (void)
{
  extern typeof (f32xdiv (vol_var__Float64, vol_var_unsigned___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Float64, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32xdiv_85 (void)
{
  extern typeof (f32xdiv (vol_var__Float64, vol_var_enum_e)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Float64, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32xdiv_86 (void)
{
  extern typeof (f32xdiv (vol_var__Float64, vol_var__Bool)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Float64, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32xdiv_87 (void)
{
  extern typeof (f32xdiv (vol_var__Float64, vol_var_bit_field)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Float64, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
static void
test_f32xdiv_88 (void)
{
  extern typeof (f32xdiv (vol_var__Float64x, vol_var__Float16)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Float64x, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
static void
test_f32xdiv_89 (void)
{
  extern typeof (f32xdiv (vol_var__Float64x, vol_var__Float32)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Float64x, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
static void
test_f32xdiv_90 (void)
{
  extern typeof (f32xdiv (vol_var__Float64x, vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Float64x, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
static void
test_f32xdiv_91 (void)
{
  extern typeof (f32xdiv (vol_var__Float64x, vol_var__Float64)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Float64x, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32xdiv_92 (void)
{
  extern typeof (f32xdiv (vol_var__Float64x, vol_var__Float64x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Float64x, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
static void
test_f32xdiv_93 (void)
{
  extern typeof (f32xdiv (vol_var__Float64x, vol_var__Float128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Float64x, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32xdiv_94 (void)
{
  extern typeof (f32xdiv (vol_var__Float64x, vol_var_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Float64x, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32xdiv_95 (void)
{
  extern typeof (f32xdiv (vol_var__Float64x, vol_var_signed_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Float64x, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32xdiv_96 (void)
{
  extern typeof (f32xdiv (vol_var__Float64x, vol_var_unsigned_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Float64x, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32xdiv_97 (void)
{
  extern typeof (f32xdiv (vol_var__Float64x, vol_var_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Float64x, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32xdiv_98 (void)
{
  extern typeof (f32xdiv (vol_var__Float64x, vol_var_unsigned_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Float64x, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32xdiv_99 (void)
{
  extern typeof (f32xdiv (vol_var__Float64x, vol_var_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Float64x, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32xdiv_100 (void)
{
  extern typeof (f32xdiv (vol_var__Float64x, vol_var_unsigned_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Float64x, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32xdiv_101 (void)
{
  extern typeof (f32xdiv (vol_var__Float64x, vol_var_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Float64x, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32xdiv_102 (void)
{
  extern typeof (f32xdiv (vol_var__Float64x, vol_var_unsigned_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Float64x, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32xdiv_103 (void)
{
  extern typeof (f32xdiv (vol_var__Float64x, vol_var_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Float64x, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32xdiv_104 (void)
{
  extern typeof (f32xdiv (vol_var__Float64x, vol_var_unsigned_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Float64x, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_f32xdiv_105 (void)
{
  extern typeof (f32xdiv (vol_var__Float64x, vol_var___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Float64x, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_f32xdiv_106 (void)
{
  extern typeof (f32xdiv (vol_var__Float64x, vol_var_unsigned___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Float64x, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32xdiv_107 (void)
{
  extern typeof (f32xdiv (vol_var__Float64x, vol_var_enum_e)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Float64x, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32xdiv_108 (void)
{
  extern typeof (f32xdiv (vol_var__Float64x, vol_var__Bool)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Float64x, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32xdiv_109 (void)
{
  extern typeof (f32xdiv (vol_var__Float64x, vol_var_bit_field)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Float64x, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F16
static void
test_f32xdiv_110 (void)
{
  extern typeof (f32xdiv (vol_var__Float128, vol_var__Float16)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Float128, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32
static void
test_f32xdiv_111 (void)
{
  extern typeof (f32xdiv (vol_var__Float128, vol_var__Float32)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Float128, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
static void
test_f32xdiv_112 (void)
{
  extern typeof (f32xdiv (vol_var__Float128, vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Float128, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64
static void
test_f32xdiv_113 (void)
{
  extern typeof (f32xdiv (vol_var__Float128, vol_var__Float64)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Float128, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
static void
test_f32xdiv_114 (void)
{
  extern typeof (f32xdiv (vol_var__Float128, vol_var__Float64x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Float128, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32xdiv_115 (void)
{
  extern typeof (f32xdiv (vol_var__Float128, vol_var__Float128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Float128, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32xdiv_116 (void)
{
  extern typeof (f32xdiv (vol_var__Float128, vol_var_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Float128, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32xdiv_117 (void)
{
  extern typeof (f32xdiv (vol_var__Float128, vol_var_signed_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Float128, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32xdiv_118 (void)
{
  extern typeof (f32xdiv (vol_var__Float128, vol_var_unsigned_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Float128, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32xdiv_119 (void)
{
  extern typeof (f32xdiv (vol_var__Float128, vol_var_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Float128, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32xdiv_120 (void)
{
  extern typeof (f32xdiv (vol_var__Float128, vol_var_unsigned_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Float128, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32xdiv_121 (void)
{
  extern typeof (f32xdiv (vol_var__Float128, vol_var_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Float128, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32xdiv_122 (void)
{
  extern typeof (f32xdiv (vol_var__Float128, vol_var_unsigned_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Float128, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32xdiv_123 (void)
{
  extern typeof (f32xdiv (vol_var__Float128, vol_var_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Float128, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32xdiv_124 (void)
{
  extern typeof (f32xdiv (vol_var__Float128, vol_var_unsigned_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Float128, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32xdiv_125 (void)
{
  extern typeof (f32xdiv (vol_var__Float128, vol_var_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Float128, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32xdiv_126 (void)
{
  extern typeof (f32xdiv (vol_var__Float128, vol_var_unsigned_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Float128, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_f32xdiv_127 (void)
{
  extern typeof (f32xdiv (vol_var__Float128, vol_var___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Float128, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_f32xdiv_128 (void)
{
  extern typeof (f32xdiv (vol_var__Float128, vol_var_unsigned___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Float128, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32xdiv_129 (void)
{
  extern typeof (f32xdiv (vol_var__Float128, vol_var_enum_e)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Float128, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32xdiv_130 (void)
{
  extern typeof (f32xdiv (vol_var__Float128, vol_var__Bool)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Float128, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32xdiv_131 (void)
{
  extern typeof (f32xdiv (vol_var__Float128, vol_var_bit_field)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Float128, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32xdiv_132 (void)
{
  extern typeof (f32xdiv (vol_var_char, vol_var__Float16)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_char, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32xdiv_133 (void)
{
  extern typeof (f32xdiv (vol_var_char, vol_var__Float32)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_char, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32xdiv_134 (void)
{
  extern typeof (f32xdiv (vol_var_char, vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_char, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32xdiv_135 (void)
{
  extern typeof (f32xdiv (vol_var_char, vol_var__Float64)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_char, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32xdiv_136 (void)
{
  extern typeof (f32xdiv (vol_var_char, vol_var__Float64x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_char, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32xdiv_137 (void)
{
  extern typeof (f32xdiv (vol_var_char, vol_var__Float128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_char, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_138 (void)
{
  extern typeof (f32xdiv (vol_var_char, vol_var_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_char, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_139 (void)
{
  extern typeof (f32xdiv (vol_var_char, vol_var_signed_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_char, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_140 (void)
{
  extern typeof (f32xdiv (vol_var_char, vol_var_unsigned_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_char, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_141 (void)
{
  extern typeof (f32xdiv (vol_var_char, vol_var_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_char, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_142 (void)
{
  extern typeof (f32xdiv (vol_var_char, vol_var_unsigned_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_char, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_143 (void)
{
  extern typeof (f32xdiv (vol_var_char, vol_var_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_char, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_144 (void)
{
  extern typeof (f32xdiv (vol_var_char, vol_var_unsigned_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_char, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_145 (void)
{
  extern typeof (f32xdiv (vol_var_char, vol_var_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_char, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_146 (void)
{
  extern typeof (f32xdiv (vol_var_char, vol_var_unsigned_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_char, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_147 (void)
{
  extern typeof (f32xdiv (vol_var_char, vol_var_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_char, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_148 (void)
{
  extern typeof (f32xdiv (vol_var_char, vol_var_unsigned_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_char, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xdiv_149 (void)
{
  extern typeof (f32xdiv (vol_var_char, vol_var___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_char, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xdiv_150 (void)
{
  extern typeof (f32xdiv (vol_var_char, vol_var_unsigned___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_char, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_151 (void)
{
  extern typeof (f32xdiv (vol_var_char, vol_var_enum_e)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_char, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_152 (void)
{
  extern typeof (f32xdiv (vol_var_char, vol_var__Bool)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_char, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_153 (void)
{
  extern typeof (f32xdiv (vol_var_char, vol_var_bit_field)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_char, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32xdiv_154 (void)
{
  extern typeof (f32xdiv (vol_var_signed_char, vol_var__Float16)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_signed_char, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32xdiv_155 (void)
{
  extern typeof (f32xdiv (vol_var_signed_char, vol_var__Float32)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_signed_char, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32xdiv_156 (void)
{
  extern typeof (f32xdiv (vol_var_signed_char, vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_signed_char, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32xdiv_157 (void)
{
  extern typeof (f32xdiv (vol_var_signed_char, vol_var__Float64)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_signed_char, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32xdiv_158 (void)
{
  extern typeof (f32xdiv (vol_var_signed_char, vol_var__Float64x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_signed_char, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32xdiv_159 (void)
{
  extern typeof (f32xdiv (vol_var_signed_char, vol_var__Float128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_signed_char, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_160 (void)
{
  extern typeof (f32xdiv (vol_var_signed_char, vol_var_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_signed_char, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_161 (void)
{
  extern typeof (f32xdiv (vol_var_signed_char, vol_var_signed_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_signed_char, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_162 (void)
{
  extern typeof (f32xdiv (vol_var_signed_char, vol_var_unsigned_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_signed_char, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_163 (void)
{
  extern typeof (f32xdiv (vol_var_signed_char, vol_var_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_signed_char, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_164 (void)
{
  extern typeof (f32xdiv (vol_var_signed_char, vol_var_unsigned_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_signed_char, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_165 (void)
{
  extern typeof (f32xdiv (vol_var_signed_char, vol_var_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_signed_char, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_166 (void)
{
  extern typeof (f32xdiv (vol_var_signed_char, vol_var_unsigned_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_signed_char, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_167 (void)
{
  extern typeof (f32xdiv (vol_var_signed_char, vol_var_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_signed_char, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_168 (void)
{
  extern typeof (f32xdiv (vol_var_signed_char, vol_var_unsigned_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_signed_char, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_169 (void)
{
  extern typeof (f32xdiv (vol_var_signed_char, vol_var_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_signed_char, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_170 (void)
{
  extern typeof (f32xdiv (vol_var_signed_char, vol_var_unsigned_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_signed_char, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xdiv_171 (void)
{
  extern typeof (f32xdiv (vol_var_signed_char, vol_var___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_signed_char, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xdiv_172 (void)
{
  extern typeof (f32xdiv (vol_var_signed_char, vol_var_unsigned___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_signed_char, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_173 (void)
{
  extern typeof (f32xdiv (vol_var_signed_char, vol_var_enum_e)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_signed_char, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_174 (void)
{
  extern typeof (f32xdiv (vol_var_signed_char, vol_var__Bool)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_signed_char, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_175 (void)
{
  extern typeof (f32xdiv (vol_var_signed_char, vol_var_bit_field)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_signed_char, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32xdiv_176 (void)
{
  extern typeof (f32xdiv (vol_var_unsigned_char, vol_var__Float16)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_unsigned_char, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32xdiv_177 (void)
{
  extern typeof (f32xdiv (vol_var_unsigned_char, vol_var__Float32)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_unsigned_char, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32xdiv_178 (void)
{
  extern typeof (f32xdiv (vol_var_unsigned_char, vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_unsigned_char, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32xdiv_179 (void)
{
  extern typeof (f32xdiv (vol_var_unsigned_char, vol_var__Float64)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_unsigned_char, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32xdiv_180 (void)
{
  extern typeof (f32xdiv (vol_var_unsigned_char, vol_var__Float64x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_unsigned_char, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32xdiv_181 (void)
{
  extern typeof (f32xdiv (vol_var_unsigned_char, vol_var__Float128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_unsigned_char, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_182 (void)
{
  extern typeof (f32xdiv (vol_var_unsigned_char, vol_var_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_unsigned_char, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_183 (void)
{
  extern typeof (f32xdiv (vol_var_unsigned_char, vol_var_signed_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_unsigned_char, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_184 (void)
{
  extern typeof (f32xdiv (vol_var_unsigned_char, vol_var_unsigned_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_unsigned_char, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_185 (void)
{
  extern typeof (f32xdiv (vol_var_unsigned_char, vol_var_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_unsigned_char, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_186 (void)
{
  extern typeof (f32xdiv (vol_var_unsigned_char, vol_var_unsigned_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_unsigned_char, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_187 (void)
{
  extern typeof (f32xdiv (vol_var_unsigned_char, vol_var_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_unsigned_char, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_188 (void)
{
  extern typeof (f32xdiv (vol_var_unsigned_char, vol_var_unsigned_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_unsigned_char, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_189 (void)
{
  extern typeof (f32xdiv (vol_var_unsigned_char, vol_var_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_unsigned_char, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_190 (void)
{
  extern typeof (f32xdiv (vol_var_unsigned_char, vol_var_unsigned_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_unsigned_char, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_191 (void)
{
  extern typeof (f32xdiv (vol_var_unsigned_char, vol_var_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_unsigned_char, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_192 (void)
{
  extern typeof (f32xdiv (vol_var_unsigned_char, vol_var_unsigned_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_unsigned_char, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xdiv_193 (void)
{
  extern typeof (f32xdiv (vol_var_unsigned_char, vol_var___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_unsigned_char, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xdiv_194 (void)
{
  extern typeof (f32xdiv (vol_var_unsigned_char, vol_var_unsigned___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_unsigned_char, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_195 (void)
{
  extern typeof (f32xdiv (vol_var_unsigned_char, vol_var_enum_e)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_unsigned_char, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_196 (void)
{
  extern typeof (f32xdiv (vol_var_unsigned_char, vol_var__Bool)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_unsigned_char, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_197 (void)
{
  extern typeof (f32xdiv (vol_var_unsigned_char, vol_var_bit_field)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_unsigned_char, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32xdiv_198 (void)
{
  extern typeof (f32xdiv (vol_var_short_int, vol_var__Float16)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_short_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32xdiv_199 (void)
{
  extern typeof (f32xdiv (vol_var_short_int, vol_var__Float32)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_short_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32xdiv_200 (void)
{
  extern typeof (f32xdiv (vol_var_short_int, vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_short_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32xdiv_201 (void)
{
  extern typeof (f32xdiv (vol_var_short_int, vol_var__Float64)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_short_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32xdiv_202 (void)
{
  extern typeof (f32xdiv (vol_var_short_int, vol_var__Float64x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_short_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32xdiv_203 (void)
{
  extern typeof (f32xdiv (vol_var_short_int, vol_var__Float128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_short_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_204 (void)
{
  extern typeof (f32xdiv (vol_var_short_int, vol_var_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_short_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_205 (void)
{
  extern typeof (f32xdiv (vol_var_short_int, vol_var_signed_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_short_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_206 (void)
{
  extern typeof (f32xdiv (vol_var_short_int, vol_var_unsigned_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_short_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_207 (void)
{
  extern typeof (f32xdiv (vol_var_short_int, vol_var_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_short_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_208 (void)
{
  extern typeof (f32xdiv (vol_var_short_int, vol_var_unsigned_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_short_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_209 (void)
{
  extern typeof (f32xdiv (vol_var_short_int, vol_var_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_short_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_210 (void)
{
  extern typeof (f32xdiv (vol_var_short_int, vol_var_unsigned_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_short_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_211 (void)
{
  extern typeof (f32xdiv (vol_var_short_int, vol_var_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_short_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_212 (void)
{
  extern typeof (f32xdiv (vol_var_short_int, vol_var_unsigned_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_short_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_213 (void)
{
  extern typeof (f32xdiv (vol_var_short_int, vol_var_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_short_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_214 (void)
{
  extern typeof (f32xdiv (vol_var_short_int, vol_var_unsigned_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_short_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xdiv_215 (void)
{
  extern typeof (f32xdiv (vol_var_short_int, vol_var___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_short_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xdiv_216 (void)
{
  extern typeof (f32xdiv (vol_var_short_int, vol_var_unsigned___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_short_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_217 (void)
{
  extern typeof (f32xdiv (vol_var_short_int, vol_var_enum_e)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_short_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_218 (void)
{
  extern typeof (f32xdiv (vol_var_short_int, vol_var__Bool)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_short_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_219 (void)
{
  extern typeof (f32xdiv (vol_var_short_int, vol_var_bit_field)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_short_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32xdiv_220 (void)
{
  extern typeof (f32xdiv (vol_var_unsigned_short_int, vol_var__Float16)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_unsigned_short_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32xdiv_221 (void)
{
  extern typeof (f32xdiv (vol_var_unsigned_short_int, vol_var__Float32)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_unsigned_short_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32xdiv_222 (void)
{
  extern typeof (f32xdiv (vol_var_unsigned_short_int, vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_unsigned_short_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32xdiv_223 (void)
{
  extern typeof (f32xdiv (vol_var_unsigned_short_int, vol_var__Float64)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_unsigned_short_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32xdiv_224 (void)
{
  extern typeof (f32xdiv (vol_var_unsigned_short_int, vol_var__Float64x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_unsigned_short_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32xdiv_225 (void)
{
  extern typeof (f32xdiv (vol_var_unsigned_short_int, vol_var__Float128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_unsigned_short_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_226 (void)
{
  extern typeof (f32xdiv (vol_var_unsigned_short_int, vol_var_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_unsigned_short_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_227 (void)
{
  extern typeof (f32xdiv (vol_var_unsigned_short_int, vol_var_signed_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_unsigned_short_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_228 (void)
{
  extern typeof (f32xdiv (vol_var_unsigned_short_int, vol_var_unsigned_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_unsigned_short_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_229 (void)
{
  extern typeof (f32xdiv (vol_var_unsigned_short_int, vol_var_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_unsigned_short_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_230 (void)
{
  extern typeof (f32xdiv (vol_var_unsigned_short_int, vol_var_unsigned_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_unsigned_short_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_231 (void)
{
  extern typeof (f32xdiv (vol_var_unsigned_short_int, vol_var_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_unsigned_short_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_232 (void)
{
  extern typeof (f32xdiv (vol_var_unsigned_short_int, vol_var_unsigned_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_unsigned_short_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_233 (void)
{
  extern typeof (f32xdiv (vol_var_unsigned_short_int, vol_var_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_unsigned_short_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_234 (void)
{
  extern typeof (f32xdiv (vol_var_unsigned_short_int, vol_var_unsigned_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_unsigned_short_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_235 (void)
{
  extern typeof (f32xdiv (vol_var_unsigned_short_int, vol_var_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_unsigned_short_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_236 (void)
{
  extern typeof (f32xdiv (vol_var_unsigned_short_int, vol_var_unsigned_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_unsigned_short_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xdiv_237 (void)
{
  extern typeof (f32xdiv (vol_var_unsigned_short_int, vol_var___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_unsigned_short_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xdiv_238 (void)
{
  extern typeof (f32xdiv (vol_var_unsigned_short_int, vol_var_unsigned___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_unsigned_short_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_239 (void)
{
  extern typeof (f32xdiv (vol_var_unsigned_short_int, vol_var_enum_e)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_unsigned_short_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_240 (void)
{
  extern typeof (f32xdiv (vol_var_unsigned_short_int, vol_var__Bool)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_unsigned_short_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_241 (void)
{
  extern typeof (f32xdiv (vol_var_unsigned_short_int, vol_var_bit_field)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_unsigned_short_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32xdiv_242 (void)
{
  extern typeof (f32xdiv (vol_var_int, vol_var__Float16)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32xdiv_243 (void)
{
  extern typeof (f32xdiv (vol_var_int, vol_var__Float32)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32xdiv_244 (void)
{
  extern typeof (f32xdiv (vol_var_int, vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32xdiv_245 (void)
{
  extern typeof (f32xdiv (vol_var_int, vol_var__Float64)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32xdiv_246 (void)
{
  extern typeof (f32xdiv (vol_var_int, vol_var__Float64x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32xdiv_247 (void)
{
  extern typeof (f32xdiv (vol_var_int, vol_var__Float128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_248 (void)
{
  extern typeof (f32xdiv (vol_var_int, vol_var_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_249 (void)
{
  extern typeof (f32xdiv (vol_var_int, vol_var_signed_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_250 (void)
{
  extern typeof (f32xdiv (vol_var_int, vol_var_unsigned_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_251 (void)
{
  extern typeof (f32xdiv (vol_var_int, vol_var_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_252 (void)
{
  extern typeof (f32xdiv (vol_var_int, vol_var_unsigned_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_253 (void)
{
  extern typeof (f32xdiv (vol_var_int, vol_var_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_254 (void)
{
  extern typeof (f32xdiv (vol_var_int, vol_var_unsigned_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_255 (void)
{
  extern typeof (f32xdiv (vol_var_int, vol_var_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_256 (void)
{
  extern typeof (f32xdiv (vol_var_int, vol_var_unsigned_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_257 (void)
{
  extern typeof (f32xdiv (vol_var_int, vol_var_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_258 (void)
{
  extern typeof (f32xdiv (vol_var_int, vol_var_unsigned_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xdiv_259 (void)
{
  extern typeof (f32xdiv (vol_var_int, vol_var___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xdiv_260 (void)
{
  extern typeof (f32xdiv (vol_var_int, vol_var_unsigned___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_261 (void)
{
  extern typeof (f32xdiv (vol_var_int, vol_var_enum_e)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_262 (void)
{
  extern typeof (f32xdiv (vol_var_int, vol_var__Bool)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_263 (void)
{
  extern typeof (f32xdiv (vol_var_int, vol_var_bit_field)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32xdiv_264 (void)
{
  extern typeof (f32xdiv (vol_var_unsigned_int, vol_var__Float16)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_unsigned_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32xdiv_265 (void)
{
  extern typeof (f32xdiv (vol_var_unsigned_int, vol_var__Float32)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_unsigned_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32xdiv_266 (void)
{
  extern typeof (f32xdiv (vol_var_unsigned_int, vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_unsigned_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32xdiv_267 (void)
{
  extern typeof (f32xdiv (vol_var_unsigned_int, vol_var__Float64)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_unsigned_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32xdiv_268 (void)
{
  extern typeof (f32xdiv (vol_var_unsigned_int, vol_var__Float64x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_unsigned_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32xdiv_269 (void)
{
  extern typeof (f32xdiv (vol_var_unsigned_int, vol_var__Float128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_unsigned_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_270 (void)
{
  extern typeof (f32xdiv (vol_var_unsigned_int, vol_var_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_unsigned_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_271 (void)
{
  extern typeof (f32xdiv (vol_var_unsigned_int, vol_var_signed_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_unsigned_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_272 (void)
{
  extern typeof (f32xdiv (vol_var_unsigned_int, vol_var_unsigned_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_unsigned_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_273 (void)
{
  extern typeof (f32xdiv (vol_var_unsigned_int, vol_var_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_unsigned_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_274 (void)
{
  extern typeof (f32xdiv (vol_var_unsigned_int, vol_var_unsigned_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_unsigned_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_275 (void)
{
  extern typeof (f32xdiv (vol_var_unsigned_int, vol_var_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_unsigned_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_276 (void)
{
  extern typeof (f32xdiv (vol_var_unsigned_int, vol_var_unsigned_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_unsigned_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_277 (void)
{
  extern typeof (f32xdiv (vol_var_unsigned_int, vol_var_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_unsigned_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_278 (void)
{
  extern typeof (f32xdiv (vol_var_unsigned_int, vol_var_unsigned_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_unsigned_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_279 (void)
{
  extern typeof (f32xdiv (vol_var_unsigned_int, vol_var_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_unsigned_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_280 (void)
{
  extern typeof (f32xdiv (vol_var_unsigned_int, vol_var_unsigned_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_unsigned_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xdiv_281 (void)
{
  extern typeof (f32xdiv (vol_var_unsigned_int, vol_var___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_unsigned_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xdiv_282 (void)
{
  extern typeof (f32xdiv (vol_var_unsigned_int, vol_var_unsigned___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_unsigned_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_283 (void)
{
  extern typeof (f32xdiv (vol_var_unsigned_int, vol_var_enum_e)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_unsigned_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_284 (void)
{
  extern typeof (f32xdiv (vol_var_unsigned_int, vol_var__Bool)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_unsigned_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_285 (void)
{
  extern typeof (f32xdiv (vol_var_unsigned_int, vol_var_bit_field)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_unsigned_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32xdiv_286 (void)
{
  extern typeof (f32xdiv (vol_var_long_int, vol_var__Float16)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_long_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32xdiv_287 (void)
{
  extern typeof (f32xdiv (vol_var_long_int, vol_var__Float32)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_long_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32xdiv_288 (void)
{
  extern typeof (f32xdiv (vol_var_long_int, vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_long_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32xdiv_289 (void)
{
  extern typeof (f32xdiv (vol_var_long_int, vol_var__Float64)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_long_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32xdiv_290 (void)
{
  extern typeof (f32xdiv (vol_var_long_int, vol_var__Float64x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_long_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32xdiv_291 (void)
{
  extern typeof (f32xdiv (vol_var_long_int, vol_var__Float128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_long_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_292 (void)
{
  extern typeof (f32xdiv (vol_var_long_int, vol_var_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_long_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_293 (void)
{
  extern typeof (f32xdiv (vol_var_long_int, vol_var_signed_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_long_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_294 (void)
{
  extern typeof (f32xdiv (vol_var_long_int, vol_var_unsigned_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_long_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_295 (void)
{
  extern typeof (f32xdiv (vol_var_long_int, vol_var_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_long_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_296 (void)
{
  extern typeof (f32xdiv (vol_var_long_int, vol_var_unsigned_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_long_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_297 (void)
{
  extern typeof (f32xdiv (vol_var_long_int, vol_var_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_long_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_298 (void)
{
  extern typeof (f32xdiv (vol_var_long_int, vol_var_unsigned_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_long_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_299 (void)
{
  extern typeof (f32xdiv (vol_var_long_int, vol_var_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_long_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_300 (void)
{
  extern typeof (f32xdiv (vol_var_long_int, vol_var_unsigned_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_long_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_301 (void)
{
  extern typeof (f32xdiv (vol_var_long_int, vol_var_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_long_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_302 (void)
{
  extern typeof (f32xdiv (vol_var_long_int, vol_var_unsigned_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_long_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xdiv_303 (void)
{
  extern typeof (f32xdiv (vol_var_long_int, vol_var___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_long_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xdiv_304 (void)
{
  extern typeof (f32xdiv (vol_var_long_int, vol_var_unsigned___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_long_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_305 (void)
{
  extern typeof (f32xdiv (vol_var_long_int, vol_var_enum_e)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_long_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_306 (void)
{
  extern typeof (f32xdiv (vol_var_long_int, vol_var__Bool)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_long_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_307 (void)
{
  extern typeof (f32xdiv (vol_var_long_int, vol_var_bit_field)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_long_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32xdiv_308 (void)
{
  extern typeof (f32xdiv (vol_var_unsigned_long_int, vol_var__Float16)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_unsigned_long_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32xdiv_309 (void)
{
  extern typeof (f32xdiv (vol_var_unsigned_long_int, vol_var__Float32)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_unsigned_long_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32xdiv_310 (void)
{
  extern typeof (f32xdiv (vol_var_unsigned_long_int, vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_unsigned_long_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32xdiv_311 (void)
{
  extern typeof (f32xdiv (vol_var_unsigned_long_int, vol_var__Float64)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_unsigned_long_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32xdiv_312 (void)
{
  extern typeof (f32xdiv (vol_var_unsigned_long_int, vol_var__Float64x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_unsigned_long_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32xdiv_313 (void)
{
  extern typeof (f32xdiv (vol_var_unsigned_long_int, vol_var__Float128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_unsigned_long_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_314 (void)
{
  extern typeof (f32xdiv (vol_var_unsigned_long_int, vol_var_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_unsigned_long_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_315 (void)
{
  extern typeof (f32xdiv (vol_var_unsigned_long_int, vol_var_signed_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_unsigned_long_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_316 (void)
{
  extern typeof (f32xdiv (vol_var_unsigned_long_int, vol_var_unsigned_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_unsigned_long_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_317 (void)
{
  extern typeof (f32xdiv (vol_var_unsigned_long_int, vol_var_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_unsigned_long_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_318 (void)
{
  extern typeof (f32xdiv (vol_var_unsigned_long_int, vol_var_unsigned_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_unsigned_long_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_319 (void)
{
  extern typeof (f32xdiv (vol_var_unsigned_long_int, vol_var_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_unsigned_long_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_320 (void)
{
  extern typeof (f32xdiv (vol_var_unsigned_long_int, vol_var_unsigned_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_unsigned_long_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_321 (void)
{
  extern typeof (f32xdiv (vol_var_unsigned_long_int, vol_var_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_unsigned_long_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_322 (void)
{
  extern typeof (f32xdiv (vol_var_unsigned_long_int, vol_var_unsigned_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_unsigned_long_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_323 (void)
{
  extern typeof (f32xdiv (vol_var_unsigned_long_int, vol_var_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_unsigned_long_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_324 (void)
{
  extern typeof (f32xdiv (vol_var_unsigned_long_int, vol_var_unsigned_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_unsigned_long_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xdiv_325 (void)
{
  extern typeof (f32xdiv (vol_var_unsigned_long_int, vol_var___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_unsigned_long_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xdiv_326 (void)
{
  extern typeof (f32xdiv (vol_var_unsigned_long_int, vol_var_unsigned___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_unsigned_long_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_327 (void)
{
  extern typeof (f32xdiv (vol_var_unsigned_long_int, vol_var_enum_e)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_unsigned_long_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_328 (void)
{
  extern typeof (f32xdiv (vol_var_unsigned_long_int, vol_var__Bool)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_unsigned_long_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_329 (void)
{
  extern typeof (f32xdiv (vol_var_unsigned_long_int, vol_var_bit_field)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_unsigned_long_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32xdiv_330 (void)
{
  extern typeof (f32xdiv (vol_var_long_long_int, vol_var__Float16)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_long_long_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32xdiv_331 (void)
{
  extern typeof (f32xdiv (vol_var_long_long_int, vol_var__Float32)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_long_long_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32xdiv_332 (void)
{
  extern typeof (f32xdiv (vol_var_long_long_int, vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_long_long_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32xdiv_333 (void)
{
  extern typeof (f32xdiv (vol_var_long_long_int, vol_var__Float64)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_long_long_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32xdiv_334 (void)
{
  extern typeof (f32xdiv (vol_var_long_long_int, vol_var__Float64x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_long_long_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32xdiv_335 (void)
{
  extern typeof (f32xdiv (vol_var_long_long_int, vol_var__Float128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_long_long_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_336 (void)
{
  extern typeof (f32xdiv (vol_var_long_long_int, vol_var_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_long_long_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_337 (void)
{
  extern typeof (f32xdiv (vol_var_long_long_int, vol_var_signed_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_long_long_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_338 (void)
{
  extern typeof (f32xdiv (vol_var_long_long_int, vol_var_unsigned_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_long_long_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_339 (void)
{
  extern typeof (f32xdiv (vol_var_long_long_int, vol_var_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_long_long_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_340 (void)
{
  extern typeof (f32xdiv (vol_var_long_long_int, vol_var_unsigned_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_long_long_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_341 (void)
{
  extern typeof (f32xdiv (vol_var_long_long_int, vol_var_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_long_long_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_342 (void)
{
  extern typeof (f32xdiv (vol_var_long_long_int, vol_var_unsigned_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_long_long_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_343 (void)
{
  extern typeof (f32xdiv (vol_var_long_long_int, vol_var_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_long_long_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_344 (void)
{
  extern typeof (f32xdiv (vol_var_long_long_int, vol_var_unsigned_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_long_long_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_345 (void)
{
  extern typeof (f32xdiv (vol_var_long_long_int, vol_var_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_long_long_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_346 (void)
{
  extern typeof (f32xdiv (vol_var_long_long_int, vol_var_unsigned_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_long_long_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xdiv_347 (void)
{
  extern typeof (f32xdiv (vol_var_long_long_int, vol_var___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_long_long_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xdiv_348 (void)
{
  extern typeof (f32xdiv (vol_var_long_long_int, vol_var_unsigned___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_long_long_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_349 (void)
{
  extern typeof (f32xdiv (vol_var_long_long_int, vol_var_enum_e)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_long_long_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_350 (void)
{
  extern typeof (f32xdiv (vol_var_long_long_int, vol_var__Bool)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_long_long_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_351 (void)
{
  extern typeof (f32xdiv (vol_var_long_long_int, vol_var_bit_field)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_long_long_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32xdiv_352 (void)
{
  extern typeof (f32xdiv (vol_var_unsigned_long_long_int, vol_var__Float16)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_unsigned_long_long_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32xdiv_353 (void)
{
  extern typeof (f32xdiv (vol_var_unsigned_long_long_int, vol_var__Float32)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_unsigned_long_long_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32xdiv_354 (void)
{
  extern typeof (f32xdiv (vol_var_unsigned_long_long_int, vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_unsigned_long_long_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32xdiv_355 (void)
{
  extern typeof (f32xdiv (vol_var_unsigned_long_long_int, vol_var__Float64)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_unsigned_long_long_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32xdiv_356 (void)
{
  extern typeof (f32xdiv (vol_var_unsigned_long_long_int, vol_var__Float64x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_unsigned_long_long_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32xdiv_357 (void)
{
  extern typeof (f32xdiv (vol_var_unsigned_long_long_int, vol_var__Float128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_unsigned_long_long_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_358 (void)
{
  extern typeof (f32xdiv (vol_var_unsigned_long_long_int, vol_var_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_unsigned_long_long_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_359 (void)
{
  extern typeof (f32xdiv (vol_var_unsigned_long_long_int, vol_var_signed_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_unsigned_long_long_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_360 (void)
{
  extern typeof (f32xdiv (vol_var_unsigned_long_long_int, vol_var_unsigned_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_unsigned_long_long_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_361 (void)
{
  extern typeof (f32xdiv (vol_var_unsigned_long_long_int, vol_var_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_unsigned_long_long_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_362 (void)
{
  extern typeof (f32xdiv (vol_var_unsigned_long_long_int, vol_var_unsigned_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_unsigned_long_long_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_363 (void)
{
  extern typeof (f32xdiv (vol_var_unsigned_long_long_int, vol_var_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_unsigned_long_long_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_364 (void)
{
  extern typeof (f32xdiv (vol_var_unsigned_long_long_int, vol_var_unsigned_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_unsigned_long_long_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_365 (void)
{
  extern typeof (f32xdiv (vol_var_unsigned_long_long_int, vol_var_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_unsigned_long_long_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_366 (void)
{
  extern typeof (f32xdiv (vol_var_unsigned_long_long_int, vol_var_unsigned_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_unsigned_long_long_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_367 (void)
{
  extern typeof (f32xdiv (vol_var_unsigned_long_long_int, vol_var_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_unsigned_long_long_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_368 (void)
{
  extern typeof (f32xdiv (vol_var_unsigned_long_long_int, vol_var_unsigned_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_unsigned_long_long_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xdiv_369 (void)
{
  extern typeof (f32xdiv (vol_var_unsigned_long_long_int, vol_var___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_unsigned_long_long_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xdiv_370 (void)
{
  extern typeof (f32xdiv (vol_var_unsigned_long_long_int, vol_var_unsigned___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_unsigned_long_long_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_371 (void)
{
  extern typeof (f32xdiv (vol_var_unsigned_long_long_int, vol_var_enum_e)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_unsigned_long_long_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_372 (void)
{
  extern typeof (f32xdiv (vol_var_unsigned_long_long_int, vol_var__Bool)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_unsigned_long_long_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_373 (void)
{
  extern typeof (f32xdiv (vol_var_unsigned_long_long_int, vol_var_bit_field)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_unsigned_long_long_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_f32xdiv_374 (void)
{
  extern typeof (f32xdiv (vol_var___int128, vol_var__Float16)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var___int128, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_f32xdiv_375 (void)
{
  extern typeof (f32xdiv (vol_var___int128, vol_var__Float32)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var___int128, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_f32xdiv_376 (void)
{
  extern typeof (f32xdiv (vol_var___int128, vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var___int128, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_f32xdiv_377 (void)
{
  extern typeof (f32xdiv (vol_var___int128, vol_var__Float64)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var___int128, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_f32xdiv_378 (void)
{
  extern typeof (f32xdiv (vol_var___int128, vol_var__Float64x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var___int128, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_f32xdiv_379 (void)
{
  extern typeof (f32xdiv (vol_var___int128, vol_var__Float128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var___int128, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xdiv_380 (void)
{
  extern typeof (f32xdiv (vol_var___int128, vol_var_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var___int128, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xdiv_381 (void)
{
  extern typeof (f32xdiv (vol_var___int128, vol_var_signed_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var___int128, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xdiv_382 (void)
{
  extern typeof (f32xdiv (vol_var___int128, vol_var_unsigned_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var___int128, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xdiv_383 (void)
{
  extern typeof (f32xdiv (vol_var___int128, vol_var_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var___int128, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xdiv_384 (void)
{
  extern typeof (f32xdiv (vol_var___int128, vol_var_unsigned_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var___int128, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xdiv_385 (void)
{
  extern typeof (f32xdiv (vol_var___int128, vol_var_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var___int128, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xdiv_386 (void)
{
  extern typeof (f32xdiv (vol_var___int128, vol_var_unsigned_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var___int128, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xdiv_387 (void)
{
  extern typeof (f32xdiv (vol_var___int128, vol_var_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var___int128, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xdiv_388 (void)
{
  extern typeof (f32xdiv (vol_var___int128, vol_var_unsigned_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var___int128, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xdiv_389 (void)
{
  extern typeof (f32xdiv (vol_var___int128, vol_var_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var___int128, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xdiv_390 (void)
{
  extern typeof (f32xdiv (vol_var___int128, vol_var_unsigned_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var___int128, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xdiv_391 (void)
{
  extern typeof (f32xdiv (vol_var___int128, vol_var___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var___int128, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xdiv_392 (void)
{
  extern typeof (f32xdiv (vol_var___int128, vol_var_unsigned___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var___int128, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xdiv_393 (void)
{
  extern typeof (f32xdiv (vol_var___int128, vol_var_enum_e)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var___int128, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xdiv_394 (void)
{
  extern typeof (f32xdiv (vol_var___int128, vol_var__Bool)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var___int128, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xdiv_395 (void)
{
  extern typeof (f32xdiv (vol_var___int128, vol_var_bit_field)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var___int128, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_f32xdiv_396 (void)
{
  extern typeof (f32xdiv (vol_var_unsigned___int128, vol_var__Float16)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_unsigned___int128, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_f32xdiv_397 (void)
{
  extern typeof (f32xdiv (vol_var_unsigned___int128, vol_var__Float32)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_unsigned___int128, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_f32xdiv_398 (void)
{
  extern typeof (f32xdiv (vol_var_unsigned___int128, vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_unsigned___int128, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_f32xdiv_399 (void)
{
  extern typeof (f32xdiv (vol_var_unsigned___int128, vol_var__Float64)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_unsigned___int128, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_f32xdiv_400 (void)
{
  extern typeof (f32xdiv (vol_var_unsigned___int128, vol_var__Float64x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_unsigned___int128, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_f32xdiv_401 (void)
{
  extern typeof (f32xdiv (vol_var_unsigned___int128, vol_var__Float128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_unsigned___int128, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xdiv_402 (void)
{
  extern typeof (f32xdiv (vol_var_unsigned___int128, vol_var_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_unsigned___int128, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xdiv_403 (void)
{
  extern typeof (f32xdiv (vol_var_unsigned___int128, vol_var_signed_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_unsigned___int128, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xdiv_404 (void)
{
  extern typeof (f32xdiv (vol_var_unsigned___int128, vol_var_unsigned_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_unsigned___int128, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xdiv_405 (void)
{
  extern typeof (f32xdiv (vol_var_unsigned___int128, vol_var_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_unsigned___int128, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xdiv_406 (void)
{
  extern typeof (f32xdiv (vol_var_unsigned___int128, vol_var_unsigned_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_unsigned___int128, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xdiv_407 (void)
{
  extern typeof (f32xdiv (vol_var_unsigned___int128, vol_var_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_unsigned___int128, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xdiv_408 (void)
{
  extern typeof (f32xdiv (vol_var_unsigned___int128, vol_var_unsigned_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_unsigned___int128, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xdiv_409 (void)
{
  extern typeof (f32xdiv (vol_var_unsigned___int128, vol_var_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_unsigned___int128, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xdiv_410 (void)
{
  extern typeof (f32xdiv (vol_var_unsigned___int128, vol_var_unsigned_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_unsigned___int128, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xdiv_411 (void)
{
  extern typeof (f32xdiv (vol_var_unsigned___int128, vol_var_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_unsigned___int128, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xdiv_412 (void)
{
  extern typeof (f32xdiv (vol_var_unsigned___int128, vol_var_unsigned_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_unsigned___int128, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xdiv_413 (void)
{
  extern typeof (f32xdiv (vol_var_unsigned___int128, vol_var___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_unsigned___int128, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xdiv_414 (void)
{
  extern typeof (f32xdiv (vol_var_unsigned___int128, vol_var_unsigned___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_unsigned___int128, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xdiv_415 (void)
{
  extern typeof (f32xdiv (vol_var_unsigned___int128, vol_var_enum_e)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_unsigned___int128, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xdiv_416 (void)
{
  extern typeof (f32xdiv (vol_var_unsigned___int128, vol_var__Bool)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_unsigned___int128, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xdiv_417 (void)
{
  extern typeof (f32xdiv (vol_var_unsigned___int128, vol_var_bit_field)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_unsigned___int128, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32xdiv_418 (void)
{
  extern typeof (f32xdiv (vol_var_enum_e, vol_var__Float16)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_enum_e, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32xdiv_419 (void)
{
  extern typeof (f32xdiv (vol_var_enum_e, vol_var__Float32)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_enum_e, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32xdiv_420 (void)
{
  extern typeof (f32xdiv (vol_var_enum_e, vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_enum_e, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32xdiv_421 (void)
{
  extern typeof (f32xdiv (vol_var_enum_e, vol_var__Float64)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_enum_e, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32xdiv_422 (void)
{
  extern typeof (f32xdiv (vol_var_enum_e, vol_var__Float64x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_enum_e, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32xdiv_423 (void)
{
  extern typeof (f32xdiv (vol_var_enum_e, vol_var__Float128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_enum_e, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_424 (void)
{
  extern typeof (f32xdiv (vol_var_enum_e, vol_var_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_enum_e, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_425 (void)
{
  extern typeof (f32xdiv (vol_var_enum_e, vol_var_signed_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_enum_e, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_426 (void)
{
  extern typeof (f32xdiv (vol_var_enum_e, vol_var_unsigned_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_enum_e, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_427 (void)
{
  extern typeof (f32xdiv (vol_var_enum_e, vol_var_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_enum_e, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_428 (void)
{
  extern typeof (f32xdiv (vol_var_enum_e, vol_var_unsigned_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_enum_e, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_429 (void)
{
  extern typeof (f32xdiv (vol_var_enum_e, vol_var_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_enum_e, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_430 (void)
{
  extern typeof (f32xdiv (vol_var_enum_e, vol_var_unsigned_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_enum_e, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_431 (void)
{
  extern typeof (f32xdiv (vol_var_enum_e, vol_var_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_enum_e, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_432 (void)
{
  extern typeof (f32xdiv (vol_var_enum_e, vol_var_unsigned_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_enum_e, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_433 (void)
{
  extern typeof (f32xdiv (vol_var_enum_e, vol_var_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_enum_e, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_434 (void)
{
  extern typeof (f32xdiv (vol_var_enum_e, vol_var_unsigned_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_enum_e, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xdiv_435 (void)
{
  extern typeof (f32xdiv (vol_var_enum_e, vol_var___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_enum_e, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xdiv_436 (void)
{
  extern typeof (f32xdiv (vol_var_enum_e, vol_var_unsigned___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_enum_e, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_437 (void)
{
  extern typeof (f32xdiv (vol_var_enum_e, vol_var_enum_e)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_enum_e, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_438 (void)
{
  extern typeof (f32xdiv (vol_var_enum_e, vol_var__Bool)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_enum_e, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_439 (void)
{
  extern typeof (f32xdiv (vol_var_enum_e, vol_var_bit_field)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_enum_e, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32xdiv_440 (void)
{
  extern typeof (f32xdiv (vol_var__Bool, vol_var__Float16)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Bool, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32xdiv_441 (void)
{
  extern typeof (f32xdiv (vol_var__Bool, vol_var__Float32)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Bool, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32xdiv_442 (void)
{
  extern typeof (f32xdiv (vol_var__Bool, vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Bool, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32xdiv_443 (void)
{
  extern typeof (f32xdiv (vol_var__Bool, vol_var__Float64)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Bool, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32xdiv_444 (void)
{
  extern typeof (f32xdiv (vol_var__Bool, vol_var__Float64x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Bool, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32xdiv_445 (void)
{
  extern typeof (f32xdiv (vol_var__Bool, vol_var__Float128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Bool, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_446 (void)
{
  extern typeof (f32xdiv (vol_var__Bool, vol_var_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Bool, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_447 (void)
{
  extern typeof (f32xdiv (vol_var__Bool, vol_var_signed_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Bool, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_448 (void)
{
  extern typeof (f32xdiv (vol_var__Bool, vol_var_unsigned_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Bool, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_449 (void)
{
  extern typeof (f32xdiv (vol_var__Bool, vol_var_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Bool, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_450 (void)
{
  extern typeof (f32xdiv (vol_var__Bool, vol_var_unsigned_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Bool, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_451 (void)
{
  extern typeof (f32xdiv (vol_var__Bool, vol_var_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Bool, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_452 (void)
{
  extern typeof (f32xdiv (vol_var__Bool, vol_var_unsigned_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Bool, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_453 (void)
{
  extern typeof (f32xdiv (vol_var__Bool, vol_var_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Bool, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_454 (void)
{
  extern typeof (f32xdiv (vol_var__Bool, vol_var_unsigned_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Bool, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_455 (void)
{
  extern typeof (f32xdiv (vol_var__Bool, vol_var_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Bool, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_456 (void)
{
  extern typeof (f32xdiv (vol_var__Bool, vol_var_unsigned_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Bool, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xdiv_457 (void)
{
  extern typeof (f32xdiv (vol_var__Bool, vol_var___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Bool, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xdiv_458 (void)
{
  extern typeof (f32xdiv (vol_var__Bool, vol_var_unsigned___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Bool, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_459 (void)
{
  extern typeof (f32xdiv (vol_var__Bool, vol_var_enum_e)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Bool, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_460 (void)
{
  extern typeof (f32xdiv (vol_var__Bool, vol_var__Bool)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Bool, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_461 (void)
{
  extern typeof (f32xdiv (vol_var__Bool, vol_var_bit_field)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var__Bool, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32xdiv_462 (void)
{
  extern typeof (f32xdiv (vol_var_bit_field, vol_var__Float16)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_bit_field, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32xdiv_463 (void)
{
  extern typeof (f32xdiv (vol_var_bit_field, vol_var__Float32)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_bit_field, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32xdiv_464 (void)
{
  extern typeof (f32xdiv (vol_var_bit_field, vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_bit_field, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32xdiv_465 (void)
{
  extern typeof (f32xdiv (vol_var_bit_field, vol_var__Float64)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_bit_field, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32xdiv_466 (void)
{
  extern typeof (f32xdiv (vol_var_bit_field, vol_var__Float64x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_bit_field, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32xdiv_467 (void)
{
  extern typeof (f32xdiv (vol_var_bit_field, vol_var__Float128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_bit_field, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_468 (void)
{
  extern typeof (f32xdiv (vol_var_bit_field, vol_var_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_bit_field, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_469 (void)
{
  extern typeof (f32xdiv (vol_var_bit_field, vol_var_signed_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_bit_field, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_470 (void)
{
  extern typeof (f32xdiv (vol_var_bit_field, vol_var_unsigned_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_bit_field, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_471 (void)
{
  extern typeof (f32xdiv (vol_var_bit_field, vol_var_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_bit_field, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_472 (void)
{
  extern typeof (f32xdiv (vol_var_bit_field, vol_var_unsigned_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_bit_field, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_473 (void)
{
  extern typeof (f32xdiv (vol_var_bit_field, vol_var_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_bit_field, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_474 (void)
{
  extern typeof (f32xdiv (vol_var_bit_field, vol_var_unsigned_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_bit_field, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_475 (void)
{
  extern typeof (f32xdiv (vol_var_bit_field, vol_var_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_bit_field, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_476 (void)
{
  extern typeof (f32xdiv (vol_var_bit_field, vol_var_unsigned_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_bit_field, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_477 (void)
{
  extern typeof (f32xdiv (vol_var_bit_field, vol_var_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_bit_field, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_478 (void)
{
  extern typeof (f32xdiv (vol_var_bit_field, vol_var_unsigned_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_bit_field, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xdiv_479 (void)
{
  extern typeof (f32xdiv (vol_var_bit_field, vol_var___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_bit_field, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xdiv_480 (void)
{
  extern typeof (f32xdiv (vol_var_bit_field, vol_var_unsigned___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_bit_field, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_481 (void)
{
  extern typeof (f32xdiv (vol_var_bit_field, vol_var_enum_e)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_bit_field, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_482 (void)
{
  extern typeof (f32xdiv (vol_var_bit_field, vol_var__Bool)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_bit_field, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xdiv_483 (void)
{
  extern typeof (f32xdiv (vol_var_bit_field, vol_var_bit_field)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xdiv (vol_var_bit_field, vol_var_bit_field);
}
#endif
static const struct test tests[] =
  {
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32xdiv_0, "f32xdiv", "f32xdiv (_Float16, _Float16)", FLT32X_EXT_MANT_DIG, FLT16_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32
    { test_f32xdiv_1, "f32xdiv", "f32xdiv (_Float16, _Float32)", FLT32X_EXT_MANT_DIG, FLT32_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
    { test_f32xdiv_2, "f32xdiv", "f32xdiv (_Float16, _Float32x)", FLT32X_EXT_MANT_DIG, FLT32X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64
    { test_f32xdiv_3, "f32xdiv", "f32xdiv (_Float16, _Float64)", FLT64_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
    { test_f32xdiv_4, "f32xdiv", "f32xdiv (_Float16, _Float64x)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F16
    { test_f32xdiv_5, "f32xdiv", "f32xdiv (_Float16, _Float128)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32xdiv_6, "f32xdiv", "f32xdiv (_Float16, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32xdiv_7, "f32xdiv", "f32xdiv (_Float16, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32xdiv_8, "f32xdiv", "f32xdiv (_Float16, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32xdiv_9, "f32xdiv", "f32xdiv (_Float16, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32xdiv_10, "f32xdiv", "f32xdiv (_Float16, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32xdiv_11, "f32xdiv", "f32xdiv (_Float16, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32xdiv_12, "f32xdiv", "f32xdiv (_Float16, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32xdiv_13, "f32xdiv", "f32xdiv (_Float16, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32xdiv_14, "f32xdiv", "f32xdiv (_Float16, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32xdiv_15, "f32xdiv", "f32xdiv (_Float16, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32xdiv_16, "f32xdiv", "f32xdiv (_Float16, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_f32xdiv_17, "f32xdiv", "f32xdiv (_Float16, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_f32xdiv_18, "f32xdiv", "f32xdiv (_Float16, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32xdiv_19, "f32xdiv", "f32xdiv (_Float16, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32xdiv_20, "f32xdiv", "f32xdiv (_Float16, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32xdiv_21, "f32xdiv", "f32xdiv (_Float16, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32
    { test_f32xdiv_22, "f32xdiv", "f32xdiv (_Float32, _Float16)", FLT32X_EXT_MANT_DIG, FLT32_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32xdiv_23, "f32xdiv", "f32xdiv (_Float32, _Float32)", FLT32X_EXT_MANT_DIG, FLT32_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
    { test_f32xdiv_24, "f32xdiv", "f32xdiv (_Float32, _Float32x)", FLT32X_EXT_MANT_DIG, FLT32X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64
    { test_f32xdiv_25, "f32xdiv", "f32xdiv (_Float32, _Float64)", FLT64_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
    { test_f32xdiv_26, "f32xdiv", "f32xdiv (_Float32, _Float64x)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32
    { test_f32xdiv_27, "f32xdiv", "f32xdiv (_Float32, _Float128)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32xdiv_28, "f32xdiv", "f32xdiv (_Float32, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32xdiv_29, "f32xdiv", "f32xdiv (_Float32, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32xdiv_30, "f32xdiv", "f32xdiv (_Float32, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32xdiv_31, "f32xdiv", "f32xdiv (_Float32, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32xdiv_32, "f32xdiv", "f32xdiv (_Float32, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32xdiv_33, "f32xdiv", "f32xdiv (_Float32, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32xdiv_34, "f32xdiv", "f32xdiv (_Float32, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32xdiv_35, "f32xdiv", "f32xdiv (_Float32, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32xdiv_36, "f32xdiv", "f32xdiv (_Float32, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32xdiv_37, "f32xdiv", "f32xdiv (_Float32, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32xdiv_38, "f32xdiv", "f32xdiv (_Float32, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_f32xdiv_39, "f32xdiv", "f32xdiv (_Float32, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_f32xdiv_40, "f32xdiv", "f32xdiv (_Float32, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32xdiv_41, "f32xdiv", "f32xdiv (_Float32, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32xdiv_42, "f32xdiv", "f32xdiv (_Float32, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32xdiv_43, "f32xdiv", "f32xdiv (_Float32, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
    { test_f32xdiv_44, "f32xdiv", "f32xdiv (_Float32x, _Float16)", FLT32X_EXT_MANT_DIG, FLT32X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
    { test_f32xdiv_45, "f32xdiv", "f32xdiv (_Float32x, _Float32)", FLT32X_EXT_MANT_DIG, FLT32X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32xdiv_46, "f32xdiv", "f32xdiv (_Float32x, _Float32x)", FLT32X_EXT_MANT_DIG, FLT32X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64
    { test_f32xdiv_47, "f32xdiv", "f32xdiv (_Float32x, _Float64)", FLT64_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
    { test_f32xdiv_48, "f32xdiv", "f32xdiv (_Float32x, _Float64x)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
    { test_f32xdiv_49, "f32xdiv", "f32xdiv (_Float32x, _Float128)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32xdiv_50, "f32xdiv", "f32xdiv (_Float32x, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32xdiv_51, "f32xdiv", "f32xdiv (_Float32x, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32xdiv_52, "f32xdiv", "f32xdiv (_Float32x, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32xdiv_53, "f32xdiv", "f32xdiv (_Float32x, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32xdiv_54, "f32xdiv", "f32xdiv (_Float32x, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32xdiv_55, "f32xdiv", "f32xdiv (_Float32x, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32xdiv_56, "f32xdiv", "f32xdiv (_Float32x, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32xdiv_57, "f32xdiv", "f32xdiv (_Float32x, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32xdiv_58, "f32xdiv", "f32xdiv (_Float32x, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32xdiv_59, "f32xdiv", "f32xdiv (_Float32x, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32xdiv_60, "f32xdiv", "f32xdiv (_Float32x, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_f32xdiv_61, "f32xdiv", "f32xdiv (_Float32x, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_f32xdiv_62, "f32xdiv", "f32xdiv (_Float32x, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32xdiv_63, "f32xdiv", "f32xdiv (_Float32x, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32xdiv_64, "f32xdiv", "f32xdiv (_Float32x, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32xdiv_65, "f32xdiv", "f32xdiv (_Float32x, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64
    { test_f32xdiv_66, "f32xdiv", "f32xdiv (_Float64, _Float16)", FLT64_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64
    { test_f32xdiv_67, "f32xdiv", "f32xdiv (_Float64, _Float32)", FLT64_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64
    { test_f32xdiv_68, "f32xdiv", "f32xdiv (_Float64, _Float32x)", FLT64_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32xdiv_69, "f32xdiv", "f32xdiv (_Float64, _Float64)", FLT64_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
    { test_f32xdiv_70, "f32xdiv", "f32xdiv (_Float64, _Float64x)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64
    { test_f32xdiv_71, "f32xdiv", "f32xdiv (_Float64, _Float128)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32xdiv_72, "f32xdiv", "f32xdiv (_Float64, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32xdiv_73, "f32xdiv", "f32xdiv (_Float64, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32xdiv_74, "f32xdiv", "f32xdiv (_Float64, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32xdiv_75, "f32xdiv", "f32xdiv (_Float64, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32xdiv_76, "f32xdiv", "f32xdiv (_Float64, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32xdiv_77, "f32xdiv", "f32xdiv (_Float64, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32xdiv_78, "f32xdiv", "f32xdiv (_Float64, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32xdiv_79, "f32xdiv", "f32xdiv (_Float64, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32xdiv_80, "f32xdiv", "f32xdiv (_Float64, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32xdiv_81, "f32xdiv", "f32xdiv (_Float64, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32xdiv_82, "f32xdiv", "f32xdiv (_Float64, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_f32xdiv_83, "f32xdiv", "f32xdiv (_Float64, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_f32xdiv_84, "f32xdiv", "f32xdiv (_Float64, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32xdiv_85, "f32xdiv", "f32xdiv (_Float64, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32xdiv_86, "f32xdiv", "f32xdiv (_Float64, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32xdiv_87, "f32xdiv", "f32xdiv (_Float64, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
    { test_f32xdiv_88, "f32xdiv", "f32xdiv (_Float64x, _Float16)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
    { test_f32xdiv_89, "f32xdiv", "f32xdiv (_Float64x, _Float32)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
    { test_f32xdiv_90, "f32xdiv", "f32xdiv (_Float64x, _Float32x)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
    { test_f32xdiv_91, "f32xdiv", "f32xdiv (_Float64x, _Float64)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32xdiv_92, "f32xdiv", "f32xdiv (_Float64x, _Float64x)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
    { test_f32xdiv_93, "f32xdiv", "f32xdiv (_Float64x, _Float128)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32xdiv_94, "f32xdiv", "f32xdiv (_Float64x, char)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32xdiv_95, "f32xdiv", "f32xdiv (_Float64x, signed char)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32xdiv_96, "f32xdiv", "f32xdiv (_Float64x, unsigned char)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32xdiv_97, "f32xdiv", "f32xdiv (_Float64x, short int)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32xdiv_98, "f32xdiv", "f32xdiv (_Float64x, unsigned short int)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32xdiv_99, "f32xdiv", "f32xdiv (_Float64x, int)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32xdiv_100, "f32xdiv", "f32xdiv (_Float64x, unsigned int)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32xdiv_101, "f32xdiv", "f32xdiv (_Float64x, long int)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32xdiv_102, "f32xdiv", "f32xdiv (_Float64x, unsigned long int)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32xdiv_103, "f32xdiv", "f32xdiv (_Float64x, long long int)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32xdiv_104, "f32xdiv", "f32xdiv (_Float64x, unsigned long long int)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_f32xdiv_105, "f32xdiv", "f32xdiv (_Float64x, __int128)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_f32xdiv_106, "f32xdiv", "f32xdiv (_Float64x, unsigned __int128)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32xdiv_107, "f32xdiv", "f32xdiv (_Float64x, enum e)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32xdiv_108, "f32xdiv", "f32xdiv (_Float64x, _Bool)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32xdiv_109, "f32xdiv", "f32xdiv (_Float64x, bit_field)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F16
    { test_f32xdiv_110, "f32xdiv", "f32xdiv (_Float128, _Float16)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32
    { test_f32xdiv_111, "f32xdiv", "f32xdiv (_Float128, _Float32)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
    { test_f32xdiv_112, "f32xdiv", "f32xdiv (_Float128, _Float32x)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64
    { test_f32xdiv_113, "f32xdiv", "f32xdiv (_Float128, _Float64)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
    { test_f32xdiv_114, "f32xdiv", "f32xdiv (_Float128, _Float64x)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32xdiv_115, "f32xdiv", "f32xdiv (_Float128, _Float128)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32xdiv_116, "f32xdiv", "f32xdiv (_Float128, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32xdiv_117, "f32xdiv", "f32xdiv (_Float128, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32xdiv_118, "f32xdiv", "f32xdiv (_Float128, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32xdiv_119, "f32xdiv", "f32xdiv (_Float128, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32xdiv_120, "f32xdiv", "f32xdiv (_Float128, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32xdiv_121, "f32xdiv", "f32xdiv (_Float128, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32xdiv_122, "f32xdiv", "f32xdiv (_Float128, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32xdiv_123, "f32xdiv", "f32xdiv (_Float128, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32xdiv_124, "f32xdiv", "f32xdiv (_Float128, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32xdiv_125, "f32xdiv", "f32xdiv (_Float128, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32xdiv_126, "f32xdiv", "f32xdiv (_Float128, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_f32xdiv_127, "f32xdiv", "f32xdiv (_Float128, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_f32xdiv_128, "f32xdiv", "f32xdiv (_Float128, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32xdiv_129, "f32xdiv", "f32xdiv (_Float128, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32xdiv_130, "f32xdiv", "f32xdiv (_Float128, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32xdiv_131, "f32xdiv", "f32xdiv (_Float128, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32xdiv_132, "f32xdiv", "f32xdiv (char, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32xdiv_133, "f32xdiv", "f32xdiv (char, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32xdiv_134, "f32xdiv", "f32xdiv (char, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32xdiv_135, "f32xdiv", "f32xdiv (char, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32xdiv_136, "f32xdiv", "f32xdiv (char, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32xdiv_137, "f32xdiv", "f32xdiv (char, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_138, "f32xdiv", "f32xdiv (char, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_139, "f32xdiv", "f32xdiv (char, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_140, "f32xdiv", "f32xdiv (char, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_141, "f32xdiv", "f32xdiv (char, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_142, "f32xdiv", "f32xdiv (char, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_143, "f32xdiv", "f32xdiv (char, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_144, "f32xdiv", "f32xdiv (char, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_145, "f32xdiv", "f32xdiv (char, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_146, "f32xdiv", "f32xdiv (char, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_147, "f32xdiv", "f32xdiv (char, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_148, "f32xdiv", "f32xdiv (char, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xdiv_149, "f32xdiv", "f32xdiv (char, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xdiv_150, "f32xdiv", "f32xdiv (char, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_151, "f32xdiv", "f32xdiv (char, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_152, "f32xdiv", "f32xdiv (char, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_153, "f32xdiv", "f32xdiv (char, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32xdiv_154, "f32xdiv", "f32xdiv (signed char, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32xdiv_155, "f32xdiv", "f32xdiv (signed char, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32xdiv_156, "f32xdiv", "f32xdiv (signed char, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32xdiv_157, "f32xdiv", "f32xdiv (signed char, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32xdiv_158, "f32xdiv", "f32xdiv (signed char, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32xdiv_159, "f32xdiv", "f32xdiv (signed char, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_160, "f32xdiv", "f32xdiv (signed char, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_161, "f32xdiv", "f32xdiv (signed char, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_162, "f32xdiv", "f32xdiv (signed char, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_163, "f32xdiv", "f32xdiv (signed char, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_164, "f32xdiv", "f32xdiv (signed char, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_165, "f32xdiv", "f32xdiv (signed char, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_166, "f32xdiv", "f32xdiv (signed char, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_167, "f32xdiv", "f32xdiv (signed char, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_168, "f32xdiv", "f32xdiv (signed char, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_169, "f32xdiv", "f32xdiv (signed char, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_170, "f32xdiv", "f32xdiv (signed char, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xdiv_171, "f32xdiv", "f32xdiv (signed char, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xdiv_172, "f32xdiv", "f32xdiv (signed char, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_173, "f32xdiv", "f32xdiv (signed char, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_174, "f32xdiv", "f32xdiv (signed char, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_175, "f32xdiv", "f32xdiv (signed char, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32xdiv_176, "f32xdiv", "f32xdiv (unsigned char, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32xdiv_177, "f32xdiv", "f32xdiv (unsigned char, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32xdiv_178, "f32xdiv", "f32xdiv (unsigned char, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32xdiv_179, "f32xdiv", "f32xdiv (unsigned char, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32xdiv_180, "f32xdiv", "f32xdiv (unsigned char, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32xdiv_181, "f32xdiv", "f32xdiv (unsigned char, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_182, "f32xdiv", "f32xdiv (unsigned char, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_183, "f32xdiv", "f32xdiv (unsigned char, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_184, "f32xdiv", "f32xdiv (unsigned char, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_185, "f32xdiv", "f32xdiv (unsigned char, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_186, "f32xdiv", "f32xdiv (unsigned char, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_187, "f32xdiv", "f32xdiv (unsigned char, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_188, "f32xdiv", "f32xdiv (unsigned char, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_189, "f32xdiv", "f32xdiv (unsigned char, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_190, "f32xdiv", "f32xdiv (unsigned char, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_191, "f32xdiv", "f32xdiv (unsigned char, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_192, "f32xdiv", "f32xdiv (unsigned char, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xdiv_193, "f32xdiv", "f32xdiv (unsigned char, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xdiv_194, "f32xdiv", "f32xdiv (unsigned char, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_195, "f32xdiv", "f32xdiv (unsigned char, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_196, "f32xdiv", "f32xdiv (unsigned char, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_197, "f32xdiv", "f32xdiv (unsigned char, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32xdiv_198, "f32xdiv", "f32xdiv (short int, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32xdiv_199, "f32xdiv", "f32xdiv (short int, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32xdiv_200, "f32xdiv", "f32xdiv (short int, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32xdiv_201, "f32xdiv", "f32xdiv (short int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32xdiv_202, "f32xdiv", "f32xdiv (short int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32xdiv_203, "f32xdiv", "f32xdiv (short int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_204, "f32xdiv", "f32xdiv (short int, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_205, "f32xdiv", "f32xdiv (short int, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_206, "f32xdiv", "f32xdiv (short int, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_207, "f32xdiv", "f32xdiv (short int, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_208, "f32xdiv", "f32xdiv (short int, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_209, "f32xdiv", "f32xdiv (short int, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_210, "f32xdiv", "f32xdiv (short int, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_211, "f32xdiv", "f32xdiv (short int, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_212, "f32xdiv", "f32xdiv (short int, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_213, "f32xdiv", "f32xdiv (short int, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_214, "f32xdiv", "f32xdiv (short int, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xdiv_215, "f32xdiv", "f32xdiv (short int, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xdiv_216, "f32xdiv", "f32xdiv (short int, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_217, "f32xdiv", "f32xdiv (short int, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_218, "f32xdiv", "f32xdiv (short int, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_219, "f32xdiv", "f32xdiv (short int, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32xdiv_220, "f32xdiv", "f32xdiv (unsigned short int, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32xdiv_221, "f32xdiv", "f32xdiv (unsigned short int, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32xdiv_222, "f32xdiv", "f32xdiv (unsigned short int, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32xdiv_223, "f32xdiv", "f32xdiv (unsigned short int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32xdiv_224, "f32xdiv", "f32xdiv (unsigned short int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32xdiv_225, "f32xdiv", "f32xdiv (unsigned short int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_226, "f32xdiv", "f32xdiv (unsigned short int, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_227, "f32xdiv", "f32xdiv (unsigned short int, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_228, "f32xdiv", "f32xdiv (unsigned short int, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_229, "f32xdiv", "f32xdiv (unsigned short int, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_230, "f32xdiv", "f32xdiv (unsigned short int, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_231, "f32xdiv", "f32xdiv (unsigned short int, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_232, "f32xdiv", "f32xdiv (unsigned short int, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_233, "f32xdiv", "f32xdiv (unsigned short int, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_234, "f32xdiv", "f32xdiv (unsigned short int, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_235, "f32xdiv", "f32xdiv (unsigned short int, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_236, "f32xdiv", "f32xdiv (unsigned short int, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xdiv_237, "f32xdiv", "f32xdiv (unsigned short int, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xdiv_238, "f32xdiv", "f32xdiv (unsigned short int, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_239, "f32xdiv", "f32xdiv (unsigned short int, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_240, "f32xdiv", "f32xdiv (unsigned short int, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_241, "f32xdiv", "f32xdiv (unsigned short int, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32xdiv_242, "f32xdiv", "f32xdiv (int, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32xdiv_243, "f32xdiv", "f32xdiv (int, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32xdiv_244, "f32xdiv", "f32xdiv (int, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32xdiv_245, "f32xdiv", "f32xdiv (int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32xdiv_246, "f32xdiv", "f32xdiv (int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32xdiv_247, "f32xdiv", "f32xdiv (int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_248, "f32xdiv", "f32xdiv (int, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_249, "f32xdiv", "f32xdiv (int, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_250, "f32xdiv", "f32xdiv (int, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_251, "f32xdiv", "f32xdiv (int, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_252, "f32xdiv", "f32xdiv (int, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_253, "f32xdiv", "f32xdiv (int, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_254, "f32xdiv", "f32xdiv (int, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_255, "f32xdiv", "f32xdiv (int, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_256, "f32xdiv", "f32xdiv (int, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_257, "f32xdiv", "f32xdiv (int, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_258, "f32xdiv", "f32xdiv (int, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xdiv_259, "f32xdiv", "f32xdiv (int, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xdiv_260, "f32xdiv", "f32xdiv (int, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_261, "f32xdiv", "f32xdiv (int, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_262, "f32xdiv", "f32xdiv (int, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_263, "f32xdiv", "f32xdiv (int, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32xdiv_264, "f32xdiv", "f32xdiv (unsigned int, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32xdiv_265, "f32xdiv", "f32xdiv (unsigned int, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32xdiv_266, "f32xdiv", "f32xdiv (unsigned int, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32xdiv_267, "f32xdiv", "f32xdiv (unsigned int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32xdiv_268, "f32xdiv", "f32xdiv (unsigned int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32xdiv_269, "f32xdiv", "f32xdiv (unsigned int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_270, "f32xdiv", "f32xdiv (unsigned int, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_271, "f32xdiv", "f32xdiv (unsigned int, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_272, "f32xdiv", "f32xdiv (unsigned int, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_273, "f32xdiv", "f32xdiv (unsigned int, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_274, "f32xdiv", "f32xdiv (unsigned int, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_275, "f32xdiv", "f32xdiv (unsigned int, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_276, "f32xdiv", "f32xdiv (unsigned int, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_277, "f32xdiv", "f32xdiv (unsigned int, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_278, "f32xdiv", "f32xdiv (unsigned int, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_279, "f32xdiv", "f32xdiv (unsigned int, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_280, "f32xdiv", "f32xdiv (unsigned int, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xdiv_281, "f32xdiv", "f32xdiv (unsigned int, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xdiv_282, "f32xdiv", "f32xdiv (unsigned int, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_283, "f32xdiv", "f32xdiv (unsigned int, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_284, "f32xdiv", "f32xdiv (unsigned int, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_285, "f32xdiv", "f32xdiv (unsigned int, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32xdiv_286, "f32xdiv", "f32xdiv (long int, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32xdiv_287, "f32xdiv", "f32xdiv (long int, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32xdiv_288, "f32xdiv", "f32xdiv (long int, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32xdiv_289, "f32xdiv", "f32xdiv (long int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32xdiv_290, "f32xdiv", "f32xdiv (long int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32xdiv_291, "f32xdiv", "f32xdiv (long int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_292, "f32xdiv", "f32xdiv (long int, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_293, "f32xdiv", "f32xdiv (long int, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_294, "f32xdiv", "f32xdiv (long int, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_295, "f32xdiv", "f32xdiv (long int, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_296, "f32xdiv", "f32xdiv (long int, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_297, "f32xdiv", "f32xdiv (long int, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_298, "f32xdiv", "f32xdiv (long int, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_299, "f32xdiv", "f32xdiv (long int, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_300, "f32xdiv", "f32xdiv (long int, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_301, "f32xdiv", "f32xdiv (long int, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_302, "f32xdiv", "f32xdiv (long int, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xdiv_303, "f32xdiv", "f32xdiv (long int, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xdiv_304, "f32xdiv", "f32xdiv (long int, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_305, "f32xdiv", "f32xdiv (long int, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_306, "f32xdiv", "f32xdiv (long int, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_307, "f32xdiv", "f32xdiv (long int, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32xdiv_308, "f32xdiv", "f32xdiv (unsigned long int, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32xdiv_309, "f32xdiv", "f32xdiv (unsigned long int, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32xdiv_310, "f32xdiv", "f32xdiv (unsigned long int, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32xdiv_311, "f32xdiv", "f32xdiv (unsigned long int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32xdiv_312, "f32xdiv", "f32xdiv (unsigned long int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32xdiv_313, "f32xdiv", "f32xdiv (unsigned long int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_314, "f32xdiv", "f32xdiv (unsigned long int, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_315, "f32xdiv", "f32xdiv (unsigned long int, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_316, "f32xdiv", "f32xdiv (unsigned long int, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_317, "f32xdiv", "f32xdiv (unsigned long int, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_318, "f32xdiv", "f32xdiv (unsigned long int, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_319, "f32xdiv", "f32xdiv (unsigned long int, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_320, "f32xdiv", "f32xdiv (unsigned long int, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_321, "f32xdiv", "f32xdiv (unsigned long int, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_322, "f32xdiv", "f32xdiv (unsigned long int, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_323, "f32xdiv", "f32xdiv (unsigned long int, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_324, "f32xdiv", "f32xdiv (unsigned long int, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xdiv_325, "f32xdiv", "f32xdiv (unsigned long int, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xdiv_326, "f32xdiv", "f32xdiv (unsigned long int, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_327, "f32xdiv", "f32xdiv (unsigned long int, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_328, "f32xdiv", "f32xdiv (unsigned long int, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_329, "f32xdiv", "f32xdiv (unsigned long int, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32xdiv_330, "f32xdiv", "f32xdiv (long long int, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32xdiv_331, "f32xdiv", "f32xdiv (long long int, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32xdiv_332, "f32xdiv", "f32xdiv (long long int, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32xdiv_333, "f32xdiv", "f32xdiv (long long int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32xdiv_334, "f32xdiv", "f32xdiv (long long int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32xdiv_335, "f32xdiv", "f32xdiv (long long int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_336, "f32xdiv", "f32xdiv (long long int, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_337, "f32xdiv", "f32xdiv (long long int, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_338, "f32xdiv", "f32xdiv (long long int, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_339, "f32xdiv", "f32xdiv (long long int, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_340, "f32xdiv", "f32xdiv (long long int, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_341, "f32xdiv", "f32xdiv (long long int, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_342, "f32xdiv", "f32xdiv (long long int, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_343, "f32xdiv", "f32xdiv (long long int, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_344, "f32xdiv", "f32xdiv (long long int, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_345, "f32xdiv", "f32xdiv (long long int, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_346, "f32xdiv", "f32xdiv (long long int, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xdiv_347, "f32xdiv", "f32xdiv (long long int, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xdiv_348, "f32xdiv", "f32xdiv (long long int, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_349, "f32xdiv", "f32xdiv (long long int, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_350, "f32xdiv", "f32xdiv (long long int, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_351, "f32xdiv", "f32xdiv (long long int, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32xdiv_352, "f32xdiv", "f32xdiv (unsigned long long int, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32xdiv_353, "f32xdiv", "f32xdiv (unsigned long long int, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32xdiv_354, "f32xdiv", "f32xdiv (unsigned long long int, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32xdiv_355, "f32xdiv", "f32xdiv (unsigned long long int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32xdiv_356, "f32xdiv", "f32xdiv (unsigned long long int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32xdiv_357, "f32xdiv", "f32xdiv (unsigned long long int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_358, "f32xdiv", "f32xdiv (unsigned long long int, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_359, "f32xdiv", "f32xdiv (unsigned long long int, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_360, "f32xdiv", "f32xdiv (unsigned long long int, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_361, "f32xdiv", "f32xdiv (unsigned long long int, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_362, "f32xdiv", "f32xdiv (unsigned long long int, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_363, "f32xdiv", "f32xdiv (unsigned long long int, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_364, "f32xdiv", "f32xdiv (unsigned long long int, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_365, "f32xdiv", "f32xdiv (unsigned long long int, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_366, "f32xdiv", "f32xdiv (unsigned long long int, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_367, "f32xdiv", "f32xdiv (unsigned long long int, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_368, "f32xdiv", "f32xdiv (unsigned long long int, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xdiv_369, "f32xdiv", "f32xdiv (unsigned long long int, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xdiv_370, "f32xdiv", "f32xdiv (unsigned long long int, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_371, "f32xdiv", "f32xdiv (unsigned long long int, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_372, "f32xdiv", "f32xdiv (unsigned long long int, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_373, "f32xdiv", "f32xdiv (unsigned long long int, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_f32xdiv_374, "f32xdiv", "f32xdiv (__int128, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_f32xdiv_375, "f32xdiv", "f32xdiv (__int128, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_f32xdiv_376, "f32xdiv", "f32xdiv (__int128, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_f32xdiv_377, "f32xdiv", "f32xdiv (__int128, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_f32xdiv_378, "f32xdiv", "f32xdiv (__int128, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_f32xdiv_379, "f32xdiv", "f32xdiv (__int128, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xdiv_380, "f32xdiv", "f32xdiv (__int128, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xdiv_381, "f32xdiv", "f32xdiv (__int128, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xdiv_382, "f32xdiv", "f32xdiv (__int128, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xdiv_383, "f32xdiv", "f32xdiv (__int128, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xdiv_384, "f32xdiv", "f32xdiv (__int128, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xdiv_385, "f32xdiv", "f32xdiv (__int128, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xdiv_386, "f32xdiv", "f32xdiv (__int128, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xdiv_387, "f32xdiv", "f32xdiv (__int128, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xdiv_388, "f32xdiv", "f32xdiv (__int128, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xdiv_389, "f32xdiv", "f32xdiv (__int128, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xdiv_390, "f32xdiv", "f32xdiv (__int128, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xdiv_391, "f32xdiv", "f32xdiv (__int128, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xdiv_392, "f32xdiv", "f32xdiv (__int128, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xdiv_393, "f32xdiv", "f32xdiv (__int128, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xdiv_394, "f32xdiv", "f32xdiv (__int128, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xdiv_395, "f32xdiv", "f32xdiv (__int128, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_f32xdiv_396, "f32xdiv", "f32xdiv (unsigned __int128, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_f32xdiv_397, "f32xdiv", "f32xdiv (unsigned __int128, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_f32xdiv_398, "f32xdiv", "f32xdiv (unsigned __int128, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_f32xdiv_399, "f32xdiv", "f32xdiv (unsigned __int128, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_f32xdiv_400, "f32xdiv", "f32xdiv (unsigned __int128, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_f32xdiv_401, "f32xdiv", "f32xdiv (unsigned __int128, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xdiv_402, "f32xdiv", "f32xdiv (unsigned __int128, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xdiv_403, "f32xdiv", "f32xdiv (unsigned __int128, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xdiv_404, "f32xdiv", "f32xdiv (unsigned __int128, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xdiv_405, "f32xdiv", "f32xdiv (unsigned __int128, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xdiv_406, "f32xdiv", "f32xdiv (unsigned __int128, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xdiv_407, "f32xdiv", "f32xdiv (unsigned __int128, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xdiv_408, "f32xdiv", "f32xdiv (unsigned __int128, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xdiv_409, "f32xdiv", "f32xdiv (unsigned __int128, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xdiv_410, "f32xdiv", "f32xdiv (unsigned __int128, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xdiv_411, "f32xdiv", "f32xdiv (unsigned __int128, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xdiv_412, "f32xdiv", "f32xdiv (unsigned __int128, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xdiv_413, "f32xdiv", "f32xdiv (unsigned __int128, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xdiv_414, "f32xdiv", "f32xdiv (unsigned __int128, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xdiv_415, "f32xdiv", "f32xdiv (unsigned __int128, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xdiv_416, "f32xdiv", "f32xdiv (unsigned __int128, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xdiv_417, "f32xdiv", "f32xdiv (unsigned __int128, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32xdiv_418, "f32xdiv", "f32xdiv (enum e, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32xdiv_419, "f32xdiv", "f32xdiv (enum e, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32xdiv_420, "f32xdiv", "f32xdiv (enum e, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32xdiv_421, "f32xdiv", "f32xdiv (enum e, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32xdiv_422, "f32xdiv", "f32xdiv (enum e, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32xdiv_423, "f32xdiv", "f32xdiv (enum e, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_424, "f32xdiv", "f32xdiv (enum e, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_425, "f32xdiv", "f32xdiv (enum e, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_426, "f32xdiv", "f32xdiv (enum e, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_427, "f32xdiv", "f32xdiv (enum e, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_428, "f32xdiv", "f32xdiv (enum e, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_429, "f32xdiv", "f32xdiv (enum e, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_430, "f32xdiv", "f32xdiv (enum e, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_431, "f32xdiv", "f32xdiv (enum e, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_432, "f32xdiv", "f32xdiv (enum e, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_433, "f32xdiv", "f32xdiv (enum e, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_434, "f32xdiv", "f32xdiv (enum e, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xdiv_435, "f32xdiv", "f32xdiv (enum e, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xdiv_436, "f32xdiv", "f32xdiv (enum e, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_437, "f32xdiv", "f32xdiv (enum e, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_438, "f32xdiv", "f32xdiv (enum e, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_439, "f32xdiv", "f32xdiv (enum e, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32xdiv_440, "f32xdiv", "f32xdiv (_Bool, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32xdiv_441, "f32xdiv", "f32xdiv (_Bool, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32xdiv_442, "f32xdiv", "f32xdiv (_Bool, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32xdiv_443, "f32xdiv", "f32xdiv (_Bool, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32xdiv_444, "f32xdiv", "f32xdiv (_Bool, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32xdiv_445, "f32xdiv", "f32xdiv (_Bool, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_446, "f32xdiv", "f32xdiv (_Bool, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_447, "f32xdiv", "f32xdiv (_Bool, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_448, "f32xdiv", "f32xdiv (_Bool, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_449, "f32xdiv", "f32xdiv (_Bool, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_450, "f32xdiv", "f32xdiv (_Bool, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_451, "f32xdiv", "f32xdiv (_Bool, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_452, "f32xdiv", "f32xdiv (_Bool, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_453, "f32xdiv", "f32xdiv (_Bool, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_454, "f32xdiv", "f32xdiv (_Bool, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_455, "f32xdiv", "f32xdiv (_Bool, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_456, "f32xdiv", "f32xdiv (_Bool, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xdiv_457, "f32xdiv", "f32xdiv (_Bool, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xdiv_458, "f32xdiv", "f32xdiv (_Bool, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_459, "f32xdiv", "f32xdiv (_Bool, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_460, "f32xdiv", "f32xdiv (_Bool, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_461, "f32xdiv", "f32xdiv (_Bool, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32xdiv_462, "f32xdiv", "f32xdiv (bit_field, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32xdiv_463, "f32xdiv", "f32xdiv (bit_field, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32xdiv_464, "f32xdiv", "f32xdiv (bit_field, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32xdiv_465, "f32xdiv", "f32xdiv (bit_field, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32xdiv_466, "f32xdiv", "f32xdiv (bit_field, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32xdiv_467, "f32xdiv", "f32xdiv (bit_field, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_468, "f32xdiv", "f32xdiv (bit_field, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_469, "f32xdiv", "f32xdiv (bit_field, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_470, "f32xdiv", "f32xdiv (bit_field, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_471, "f32xdiv", "f32xdiv (bit_field, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_472, "f32xdiv", "f32xdiv (bit_field, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_473, "f32xdiv", "f32xdiv (bit_field, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_474, "f32xdiv", "f32xdiv (bit_field, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_475, "f32xdiv", "f32xdiv (bit_field, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_476, "f32xdiv", "f32xdiv (bit_field, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_477, "f32xdiv", "f32xdiv (bit_field, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_478, "f32xdiv", "f32xdiv (bit_field, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xdiv_479, "f32xdiv", "f32xdiv (bit_field, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xdiv_480, "f32xdiv", "f32xdiv (bit_field, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_481, "f32xdiv", "f32xdiv (bit_field, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_482, "f32xdiv", "f32xdiv (bit_field, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xdiv_483, "f32xdiv", "f32xdiv (bit_field, bit_field)", FLT64_MANT_DIG, 0 },
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
