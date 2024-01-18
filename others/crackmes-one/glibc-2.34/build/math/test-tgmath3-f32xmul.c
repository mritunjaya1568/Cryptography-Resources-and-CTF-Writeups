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
(f32xmulf64) (_Float64 arg0 __attribute__ ((unused)), _Float64 arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT64_MANT_DIG;
  called_func_name = "f32xmul";
  return 0;
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
_Float32x
(f32xmulf64x) (_Float64x arg0 __attribute__ ((unused)), _Float64x arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT64X_MANT_DIG;
  called_func_name = "f32xmul";
  return 0;
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
_Float32x
(f32xmulf128) (_Float128 arg0 __attribute__ ((unused)), _Float128 arg1 __attribute__ ((unused)))
{
  called_mant_dig = FLT128_MANT_DIG;
  called_func_name = "f32xmul";
  return 0;
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32xmul_0 (void)
{
  extern typeof (f32xmul (vol_var__Float16, vol_var__Float16)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Float16, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32
static void
test_f32xmul_1 (void)
{
  extern typeof (f32xmul (vol_var__Float16, vol_var__Float32)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Float16, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
static void
test_f32xmul_2 (void)
{
  extern typeof (f32xmul (vol_var__Float16, vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Float16, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64
static void
test_f32xmul_3 (void)
{
  extern typeof (f32xmul (vol_var__Float16, vol_var__Float64)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Float16, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
static void
test_f32xmul_4 (void)
{
  extern typeof (f32xmul (vol_var__Float16, vol_var__Float64x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Float16, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F16
static void
test_f32xmul_5 (void)
{
  extern typeof (f32xmul (vol_var__Float16, vol_var__Float128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Float16, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32xmul_6 (void)
{
  extern typeof (f32xmul (vol_var__Float16, vol_var_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Float16, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32xmul_7 (void)
{
  extern typeof (f32xmul (vol_var__Float16, vol_var_signed_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Float16, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32xmul_8 (void)
{
  extern typeof (f32xmul (vol_var__Float16, vol_var_unsigned_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Float16, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32xmul_9 (void)
{
  extern typeof (f32xmul (vol_var__Float16, vol_var_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Float16, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32xmul_10 (void)
{
  extern typeof (f32xmul (vol_var__Float16, vol_var_unsigned_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Float16, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32xmul_11 (void)
{
  extern typeof (f32xmul (vol_var__Float16, vol_var_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Float16, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32xmul_12 (void)
{
  extern typeof (f32xmul (vol_var__Float16, vol_var_unsigned_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Float16, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32xmul_13 (void)
{
  extern typeof (f32xmul (vol_var__Float16, vol_var_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Float16, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32xmul_14 (void)
{
  extern typeof (f32xmul (vol_var__Float16, vol_var_unsigned_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Float16, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32xmul_15 (void)
{
  extern typeof (f32xmul (vol_var__Float16, vol_var_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Float16, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32xmul_16 (void)
{
  extern typeof (f32xmul (vol_var__Float16, vol_var_unsigned_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Float16, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_f32xmul_17 (void)
{
  extern typeof (f32xmul (vol_var__Float16, vol_var___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Float16, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_f32xmul_18 (void)
{
  extern typeof (f32xmul (vol_var__Float16, vol_var_unsigned___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Float16, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32xmul_19 (void)
{
  extern typeof (f32xmul (vol_var__Float16, vol_var_enum_e)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Float16, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32xmul_20 (void)
{
  extern typeof (f32xmul (vol_var__Float16, vol_var__Bool)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Float16, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32xmul_21 (void)
{
  extern typeof (f32xmul (vol_var__Float16, vol_var_bit_field)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Float16, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32
static void
test_f32xmul_22 (void)
{
  extern typeof (f32xmul (vol_var__Float32, vol_var__Float16)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Float32, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32xmul_23 (void)
{
  extern typeof (f32xmul (vol_var__Float32, vol_var__Float32)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Float32, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
static void
test_f32xmul_24 (void)
{
  extern typeof (f32xmul (vol_var__Float32, vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Float32, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64
static void
test_f32xmul_25 (void)
{
  extern typeof (f32xmul (vol_var__Float32, vol_var__Float64)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Float32, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
static void
test_f32xmul_26 (void)
{
  extern typeof (f32xmul (vol_var__Float32, vol_var__Float64x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Float32, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32
static void
test_f32xmul_27 (void)
{
  extern typeof (f32xmul (vol_var__Float32, vol_var__Float128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Float32, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32xmul_28 (void)
{
  extern typeof (f32xmul (vol_var__Float32, vol_var_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Float32, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32xmul_29 (void)
{
  extern typeof (f32xmul (vol_var__Float32, vol_var_signed_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Float32, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32xmul_30 (void)
{
  extern typeof (f32xmul (vol_var__Float32, vol_var_unsigned_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Float32, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32xmul_31 (void)
{
  extern typeof (f32xmul (vol_var__Float32, vol_var_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Float32, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32xmul_32 (void)
{
  extern typeof (f32xmul (vol_var__Float32, vol_var_unsigned_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Float32, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32xmul_33 (void)
{
  extern typeof (f32xmul (vol_var__Float32, vol_var_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Float32, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32xmul_34 (void)
{
  extern typeof (f32xmul (vol_var__Float32, vol_var_unsigned_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Float32, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32xmul_35 (void)
{
  extern typeof (f32xmul (vol_var__Float32, vol_var_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Float32, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32xmul_36 (void)
{
  extern typeof (f32xmul (vol_var__Float32, vol_var_unsigned_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Float32, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32xmul_37 (void)
{
  extern typeof (f32xmul (vol_var__Float32, vol_var_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Float32, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32xmul_38 (void)
{
  extern typeof (f32xmul (vol_var__Float32, vol_var_unsigned_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Float32, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_f32xmul_39 (void)
{
  extern typeof (f32xmul (vol_var__Float32, vol_var___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Float32, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_f32xmul_40 (void)
{
  extern typeof (f32xmul (vol_var__Float32, vol_var_unsigned___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Float32, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32xmul_41 (void)
{
  extern typeof (f32xmul (vol_var__Float32, vol_var_enum_e)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Float32, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32xmul_42 (void)
{
  extern typeof (f32xmul (vol_var__Float32, vol_var__Bool)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Float32, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32xmul_43 (void)
{
  extern typeof (f32xmul (vol_var__Float32, vol_var_bit_field)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Float32, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
static void
test_f32xmul_44 (void)
{
  extern typeof (f32xmul (vol_var__Float32x, vol_var__Float16)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Float32x, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
static void
test_f32xmul_45 (void)
{
  extern typeof (f32xmul (vol_var__Float32x, vol_var__Float32)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Float32x, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32xmul_46 (void)
{
  extern typeof (f32xmul (vol_var__Float32x, vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Float32x, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64
static void
test_f32xmul_47 (void)
{
  extern typeof (f32xmul (vol_var__Float32x, vol_var__Float64)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Float32x, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
static void
test_f32xmul_48 (void)
{
  extern typeof (f32xmul (vol_var__Float32x, vol_var__Float64x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Float32x, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
static void
test_f32xmul_49 (void)
{
  extern typeof (f32xmul (vol_var__Float32x, vol_var__Float128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Float32x, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32xmul_50 (void)
{
  extern typeof (f32xmul (vol_var__Float32x, vol_var_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Float32x, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32xmul_51 (void)
{
  extern typeof (f32xmul (vol_var__Float32x, vol_var_signed_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Float32x, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32xmul_52 (void)
{
  extern typeof (f32xmul (vol_var__Float32x, vol_var_unsigned_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Float32x, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32xmul_53 (void)
{
  extern typeof (f32xmul (vol_var__Float32x, vol_var_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Float32x, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32xmul_54 (void)
{
  extern typeof (f32xmul (vol_var__Float32x, vol_var_unsigned_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Float32x, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32xmul_55 (void)
{
  extern typeof (f32xmul (vol_var__Float32x, vol_var_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Float32x, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32xmul_56 (void)
{
  extern typeof (f32xmul (vol_var__Float32x, vol_var_unsigned_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Float32x, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32xmul_57 (void)
{
  extern typeof (f32xmul (vol_var__Float32x, vol_var_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Float32x, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32xmul_58 (void)
{
  extern typeof (f32xmul (vol_var__Float32x, vol_var_unsigned_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Float32x, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32xmul_59 (void)
{
  extern typeof (f32xmul (vol_var__Float32x, vol_var_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Float32x, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32xmul_60 (void)
{
  extern typeof (f32xmul (vol_var__Float32x, vol_var_unsigned_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Float32x, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_f32xmul_61 (void)
{
  extern typeof (f32xmul (vol_var__Float32x, vol_var___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Float32x, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_f32xmul_62 (void)
{
  extern typeof (f32xmul (vol_var__Float32x, vol_var_unsigned___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Float32x, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32xmul_63 (void)
{
  extern typeof (f32xmul (vol_var__Float32x, vol_var_enum_e)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Float32x, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32xmul_64 (void)
{
  extern typeof (f32xmul (vol_var__Float32x, vol_var__Bool)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Float32x, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32xmul_65 (void)
{
  extern typeof (f32xmul (vol_var__Float32x, vol_var_bit_field)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Float32x, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64
static void
test_f32xmul_66 (void)
{
  extern typeof (f32xmul (vol_var__Float64, vol_var__Float16)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Float64, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64
static void
test_f32xmul_67 (void)
{
  extern typeof (f32xmul (vol_var__Float64, vol_var__Float32)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Float64, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64
static void
test_f32xmul_68 (void)
{
  extern typeof (f32xmul (vol_var__Float64, vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Float64, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32xmul_69 (void)
{
  extern typeof (f32xmul (vol_var__Float64, vol_var__Float64)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Float64, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
static void
test_f32xmul_70 (void)
{
  extern typeof (f32xmul (vol_var__Float64, vol_var__Float64x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Float64, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64
static void
test_f32xmul_71 (void)
{
  extern typeof (f32xmul (vol_var__Float64, vol_var__Float128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Float64, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32xmul_72 (void)
{
  extern typeof (f32xmul (vol_var__Float64, vol_var_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Float64, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32xmul_73 (void)
{
  extern typeof (f32xmul (vol_var__Float64, vol_var_signed_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Float64, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32xmul_74 (void)
{
  extern typeof (f32xmul (vol_var__Float64, vol_var_unsigned_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Float64, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32xmul_75 (void)
{
  extern typeof (f32xmul (vol_var__Float64, vol_var_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Float64, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32xmul_76 (void)
{
  extern typeof (f32xmul (vol_var__Float64, vol_var_unsigned_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Float64, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32xmul_77 (void)
{
  extern typeof (f32xmul (vol_var__Float64, vol_var_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Float64, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32xmul_78 (void)
{
  extern typeof (f32xmul (vol_var__Float64, vol_var_unsigned_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Float64, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32xmul_79 (void)
{
  extern typeof (f32xmul (vol_var__Float64, vol_var_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Float64, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32xmul_80 (void)
{
  extern typeof (f32xmul (vol_var__Float64, vol_var_unsigned_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Float64, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32xmul_81 (void)
{
  extern typeof (f32xmul (vol_var__Float64, vol_var_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Float64, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32xmul_82 (void)
{
  extern typeof (f32xmul (vol_var__Float64, vol_var_unsigned_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Float64, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_f32xmul_83 (void)
{
  extern typeof (f32xmul (vol_var__Float64, vol_var___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Float64, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_f32xmul_84 (void)
{
  extern typeof (f32xmul (vol_var__Float64, vol_var_unsigned___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Float64, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32xmul_85 (void)
{
  extern typeof (f32xmul (vol_var__Float64, vol_var_enum_e)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Float64, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32xmul_86 (void)
{
  extern typeof (f32xmul (vol_var__Float64, vol_var__Bool)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Float64, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32xmul_87 (void)
{
  extern typeof (f32xmul (vol_var__Float64, vol_var_bit_field)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Float64, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
static void
test_f32xmul_88 (void)
{
  extern typeof (f32xmul (vol_var__Float64x, vol_var__Float16)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Float64x, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
static void
test_f32xmul_89 (void)
{
  extern typeof (f32xmul (vol_var__Float64x, vol_var__Float32)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Float64x, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
static void
test_f32xmul_90 (void)
{
  extern typeof (f32xmul (vol_var__Float64x, vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Float64x, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
static void
test_f32xmul_91 (void)
{
  extern typeof (f32xmul (vol_var__Float64x, vol_var__Float64)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Float64x, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32xmul_92 (void)
{
  extern typeof (f32xmul (vol_var__Float64x, vol_var__Float64x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Float64x, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
static void
test_f32xmul_93 (void)
{
  extern typeof (f32xmul (vol_var__Float64x, vol_var__Float128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Float64x, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32xmul_94 (void)
{
  extern typeof (f32xmul (vol_var__Float64x, vol_var_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Float64x, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32xmul_95 (void)
{
  extern typeof (f32xmul (vol_var__Float64x, vol_var_signed_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Float64x, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32xmul_96 (void)
{
  extern typeof (f32xmul (vol_var__Float64x, vol_var_unsigned_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Float64x, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32xmul_97 (void)
{
  extern typeof (f32xmul (vol_var__Float64x, vol_var_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Float64x, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32xmul_98 (void)
{
  extern typeof (f32xmul (vol_var__Float64x, vol_var_unsigned_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Float64x, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32xmul_99 (void)
{
  extern typeof (f32xmul (vol_var__Float64x, vol_var_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Float64x, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32xmul_100 (void)
{
  extern typeof (f32xmul (vol_var__Float64x, vol_var_unsigned_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Float64x, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32xmul_101 (void)
{
  extern typeof (f32xmul (vol_var__Float64x, vol_var_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Float64x, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32xmul_102 (void)
{
  extern typeof (f32xmul (vol_var__Float64x, vol_var_unsigned_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Float64x, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32xmul_103 (void)
{
  extern typeof (f32xmul (vol_var__Float64x, vol_var_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Float64x, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32xmul_104 (void)
{
  extern typeof (f32xmul (vol_var__Float64x, vol_var_unsigned_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Float64x, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_f32xmul_105 (void)
{
  extern typeof (f32xmul (vol_var__Float64x, vol_var___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Float64x, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_f32xmul_106 (void)
{
  extern typeof (f32xmul (vol_var__Float64x, vol_var_unsigned___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Float64x, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32xmul_107 (void)
{
  extern typeof (f32xmul (vol_var__Float64x, vol_var_enum_e)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Float64x, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32xmul_108 (void)
{
  extern typeof (f32xmul (vol_var__Float64x, vol_var__Bool)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Float64x, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32xmul_109 (void)
{
  extern typeof (f32xmul (vol_var__Float64x, vol_var_bit_field)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Float64x, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F16
static void
test_f32xmul_110 (void)
{
  extern typeof (f32xmul (vol_var__Float128, vol_var__Float16)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Float128, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32
static void
test_f32xmul_111 (void)
{
  extern typeof (f32xmul (vol_var__Float128, vol_var__Float32)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Float128, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
static void
test_f32xmul_112 (void)
{
  extern typeof (f32xmul (vol_var__Float128, vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Float128, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64
static void
test_f32xmul_113 (void)
{
  extern typeof (f32xmul (vol_var__Float128, vol_var__Float64)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Float128, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
static void
test_f32xmul_114 (void)
{
  extern typeof (f32xmul (vol_var__Float128, vol_var__Float64x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Float128, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32xmul_115 (void)
{
  extern typeof (f32xmul (vol_var__Float128, vol_var__Float128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Float128, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32xmul_116 (void)
{
  extern typeof (f32xmul (vol_var__Float128, vol_var_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Float128, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32xmul_117 (void)
{
  extern typeof (f32xmul (vol_var__Float128, vol_var_signed_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Float128, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32xmul_118 (void)
{
  extern typeof (f32xmul (vol_var__Float128, vol_var_unsigned_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Float128, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32xmul_119 (void)
{
  extern typeof (f32xmul (vol_var__Float128, vol_var_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Float128, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32xmul_120 (void)
{
  extern typeof (f32xmul (vol_var__Float128, vol_var_unsigned_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Float128, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32xmul_121 (void)
{
  extern typeof (f32xmul (vol_var__Float128, vol_var_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Float128, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32xmul_122 (void)
{
  extern typeof (f32xmul (vol_var__Float128, vol_var_unsigned_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Float128, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32xmul_123 (void)
{
  extern typeof (f32xmul (vol_var__Float128, vol_var_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Float128, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32xmul_124 (void)
{
  extern typeof (f32xmul (vol_var__Float128, vol_var_unsigned_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Float128, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32xmul_125 (void)
{
  extern typeof (f32xmul (vol_var__Float128, vol_var_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Float128, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32xmul_126 (void)
{
  extern typeof (f32xmul (vol_var__Float128, vol_var_unsigned_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Float128, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_f32xmul_127 (void)
{
  extern typeof (f32xmul (vol_var__Float128, vol_var___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Float128, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_f32xmul_128 (void)
{
  extern typeof (f32xmul (vol_var__Float128, vol_var_unsigned___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Float128, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32xmul_129 (void)
{
  extern typeof (f32xmul (vol_var__Float128, vol_var_enum_e)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Float128, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32xmul_130 (void)
{
  extern typeof (f32xmul (vol_var__Float128, vol_var__Bool)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Float128, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32xmul_131 (void)
{
  extern typeof (f32xmul (vol_var__Float128, vol_var_bit_field)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Float128, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32xmul_132 (void)
{
  extern typeof (f32xmul (vol_var_char, vol_var__Float16)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_char, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32xmul_133 (void)
{
  extern typeof (f32xmul (vol_var_char, vol_var__Float32)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_char, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32xmul_134 (void)
{
  extern typeof (f32xmul (vol_var_char, vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_char, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32xmul_135 (void)
{
  extern typeof (f32xmul (vol_var_char, vol_var__Float64)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_char, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32xmul_136 (void)
{
  extern typeof (f32xmul (vol_var_char, vol_var__Float64x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_char, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32xmul_137 (void)
{
  extern typeof (f32xmul (vol_var_char, vol_var__Float128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_char, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_138 (void)
{
  extern typeof (f32xmul (vol_var_char, vol_var_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_char, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_139 (void)
{
  extern typeof (f32xmul (vol_var_char, vol_var_signed_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_char, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_140 (void)
{
  extern typeof (f32xmul (vol_var_char, vol_var_unsigned_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_char, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_141 (void)
{
  extern typeof (f32xmul (vol_var_char, vol_var_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_char, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_142 (void)
{
  extern typeof (f32xmul (vol_var_char, vol_var_unsigned_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_char, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_143 (void)
{
  extern typeof (f32xmul (vol_var_char, vol_var_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_char, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_144 (void)
{
  extern typeof (f32xmul (vol_var_char, vol_var_unsigned_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_char, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_145 (void)
{
  extern typeof (f32xmul (vol_var_char, vol_var_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_char, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_146 (void)
{
  extern typeof (f32xmul (vol_var_char, vol_var_unsigned_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_char, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_147 (void)
{
  extern typeof (f32xmul (vol_var_char, vol_var_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_char, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_148 (void)
{
  extern typeof (f32xmul (vol_var_char, vol_var_unsigned_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_char, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xmul_149 (void)
{
  extern typeof (f32xmul (vol_var_char, vol_var___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_char, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xmul_150 (void)
{
  extern typeof (f32xmul (vol_var_char, vol_var_unsigned___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_char, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_151 (void)
{
  extern typeof (f32xmul (vol_var_char, vol_var_enum_e)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_char, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_152 (void)
{
  extern typeof (f32xmul (vol_var_char, vol_var__Bool)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_char, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_153 (void)
{
  extern typeof (f32xmul (vol_var_char, vol_var_bit_field)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_char, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32xmul_154 (void)
{
  extern typeof (f32xmul (vol_var_signed_char, vol_var__Float16)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_signed_char, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32xmul_155 (void)
{
  extern typeof (f32xmul (vol_var_signed_char, vol_var__Float32)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_signed_char, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32xmul_156 (void)
{
  extern typeof (f32xmul (vol_var_signed_char, vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_signed_char, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32xmul_157 (void)
{
  extern typeof (f32xmul (vol_var_signed_char, vol_var__Float64)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_signed_char, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32xmul_158 (void)
{
  extern typeof (f32xmul (vol_var_signed_char, vol_var__Float64x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_signed_char, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32xmul_159 (void)
{
  extern typeof (f32xmul (vol_var_signed_char, vol_var__Float128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_signed_char, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_160 (void)
{
  extern typeof (f32xmul (vol_var_signed_char, vol_var_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_signed_char, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_161 (void)
{
  extern typeof (f32xmul (vol_var_signed_char, vol_var_signed_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_signed_char, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_162 (void)
{
  extern typeof (f32xmul (vol_var_signed_char, vol_var_unsigned_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_signed_char, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_163 (void)
{
  extern typeof (f32xmul (vol_var_signed_char, vol_var_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_signed_char, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_164 (void)
{
  extern typeof (f32xmul (vol_var_signed_char, vol_var_unsigned_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_signed_char, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_165 (void)
{
  extern typeof (f32xmul (vol_var_signed_char, vol_var_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_signed_char, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_166 (void)
{
  extern typeof (f32xmul (vol_var_signed_char, vol_var_unsigned_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_signed_char, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_167 (void)
{
  extern typeof (f32xmul (vol_var_signed_char, vol_var_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_signed_char, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_168 (void)
{
  extern typeof (f32xmul (vol_var_signed_char, vol_var_unsigned_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_signed_char, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_169 (void)
{
  extern typeof (f32xmul (vol_var_signed_char, vol_var_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_signed_char, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_170 (void)
{
  extern typeof (f32xmul (vol_var_signed_char, vol_var_unsigned_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_signed_char, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xmul_171 (void)
{
  extern typeof (f32xmul (vol_var_signed_char, vol_var___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_signed_char, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xmul_172 (void)
{
  extern typeof (f32xmul (vol_var_signed_char, vol_var_unsigned___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_signed_char, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_173 (void)
{
  extern typeof (f32xmul (vol_var_signed_char, vol_var_enum_e)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_signed_char, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_174 (void)
{
  extern typeof (f32xmul (vol_var_signed_char, vol_var__Bool)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_signed_char, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_175 (void)
{
  extern typeof (f32xmul (vol_var_signed_char, vol_var_bit_field)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_signed_char, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32xmul_176 (void)
{
  extern typeof (f32xmul (vol_var_unsigned_char, vol_var__Float16)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_unsigned_char, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32xmul_177 (void)
{
  extern typeof (f32xmul (vol_var_unsigned_char, vol_var__Float32)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_unsigned_char, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32xmul_178 (void)
{
  extern typeof (f32xmul (vol_var_unsigned_char, vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_unsigned_char, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32xmul_179 (void)
{
  extern typeof (f32xmul (vol_var_unsigned_char, vol_var__Float64)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_unsigned_char, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32xmul_180 (void)
{
  extern typeof (f32xmul (vol_var_unsigned_char, vol_var__Float64x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_unsigned_char, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32xmul_181 (void)
{
  extern typeof (f32xmul (vol_var_unsigned_char, vol_var__Float128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_unsigned_char, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_182 (void)
{
  extern typeof (f32xmul (vol_var_unsigned_char, vol_var_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_unsigned_char, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_183 (void)
{
  extern typeof (f32xmul (vol_var_unsigned_char, vol_var_signed_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_unsigned_char, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_184 (void)
{
  extern typeof (f32xmul (vol_var_unsigned_char, vol_var_unsigned_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_unsigned_char, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_185 (void)
{
  extern typeof (f32xmul (vol_var_unsigned_char, vol_var_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_unsigned_char, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_186 (void)
{
  extern typeof (f32xmul (vol_var_unsigned_char, vol_var_unsigned_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_unsigned_char, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_187 (void)
{
  extern typeof (f32xmul (vol_var_unsigned_char, vol_var_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_unsigned_char, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_188 (void)
{
  extern typeof (f32xmul (vol_var_unsigned_char, vol_var_unsigned_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_unsigned_char, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_189 (void)
{
  extern typeof (f32xmul (vol_var_unsigned_char, vol_var_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_unsigned_char, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_190 (void)
{
  extern typeof (f32xmul (vol_var_unsigned_char, vol_var_unsigned_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_unsigned_char, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_191 (void)
{
  extern typeof (f32xmul (vol_var_unsigned_char, vol_var_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_unsigned_char, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_192 (void)
{
  extern typeof (f32xmul (vol_var_unsigned_char, vol_var_unsigned_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_unsigned_char, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xmul_193 (void)
{
  extern typeof (f32xmul (vol_var_unsigned_char, vol_var___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_unsigned_char, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xmul_194 (void)
{
  extern typeof (f32xmul (vol_var_unsigned_char, vol_var_unsigned___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_unsigned_char, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_195 (void)
{
  extern typeof (f32xmul (vol_var_unsigned_char, vol_var_enum_e)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_unsigned_char, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_196 (void)
{
  extern typeof (f32xmul (vol_var_unsigned_char, vol_var__Bool)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_unsigned_char, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_197 (void)
{
  extern typeof (f32xmul (vol_var_unsigned_char, vol_var_bit_field)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_unsigned_char, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32xmul_198 (void)
{
  extern typeof (f32xmul (vol_var_short_int, vol_var__Float16)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_short_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32xmul_199 (void)
{
  extern typeof (f32xmul (vol_var_short_int, vol_var__Float32)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_short_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32xmul_200 (void)
{
  extern typeof (f32xmul (vol_var_short_int, vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_short_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32xmul_201 (void)
{
  extern typeof (f32xmul (vol_var_short_int, vol_var__Float64)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_short_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32xmul_202 (void)
{
  extern typeof (f32xmul (vol_var_short_int, vol_var__Float64x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_short_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32xmul_203 (void)
{
  extern typeof (f32xmul (vol_var_short_int, vol_var__Float128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_short_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_204 (void)
{
  extern typeof (f32xmul (vol_var_short_int, vol_var_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_short_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_205 (void)
{
  extern typeof (f32xmul (vol_var_short_int, vol_var_signed_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_short_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_206 (void)
{
  extern typeof (f32xmul (vol_var_short_int, vol_var_unsigned_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_short_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_207 (void)
{
  extern typeof (f32xmul (vol_var_short_int, vol_var_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_short_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_208 (void)
{
  extern typeof (f32xmul (vol_var_short_int, vol_var_unsigned_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_short_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_209 (void)
{
  extern typeof (f32xmul (vol_var_short_int, vol_var_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_short_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_210 (void)
{
  extern typeof (f32xmul (vol_var_short_int, vol_var_unsigned_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_short_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_211 (void)
{
  extern typeof (f32xmul (vol_var_short_int, vol_var_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_short_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_212 (void)
{
  extern typeof (f32xmul (vol_var_short_int, vol_var_unsigned_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_short_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_213 (void)
{
  extern typeof (f32xmul (vol_var_short_int, vol_var_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_short_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_214 (void)
{
  extern typeof (f32xmul (vol_var_short_int, vol_var_unsigned_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_short_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xmul_215 (void)
{
  extern typeof (f32xmul (vol_var_short_int, vol_var___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_short_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xmul_216 (void)
{
  extern typeof (f32xmul (vol_var_short_int, vol_var_unsigned___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_short_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_217 (void)
{
  extern typeof (f32xmul (vol_var_short_int, vol_var_enum_e)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_short_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_218 (void)
{
  extern typeof (f32xmul (vol_var_short_int, vol_var__Bool)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_short_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_219 (void)
{
  extern typeof (f32xmul (vol_var_short_int, vol_var_bit_field)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_short_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32xmul_220 (void)
{
  extern typeof (f32xmul (vol_var_unsigned_short_int, vol_var__Float16)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_unsigned_short_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32xmul_221 (void)
{
  extern typeof (f32xmul (vol_var_unsigned_short_int, vol_var__Float32)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_unsigned_short_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32xmul_222 (void)
{
  extern typeof (f32xmul (vol_var_unsigned_short_int, vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_unsigned_short_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32xmul_223 (void)
{
  extern typeof (f32xmul (vol_var_unsigned_short_int, vol_var__Float64)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_unsigned_short_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32xmul_224 (void)
{
  extern typeof (f32xmul (vol_var_unsigned_short_int, vol_var__Float64x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_unsigned_short_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32xmul_225 (void)
{
  extern typeof (f32xmul (vol_var_unsigned_short_int, vol_var__Float128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_unsigned_short_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_226 (void)
{
  extern typeof (f32xmul (vol_var_unsigned_short_int, vol_var_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_unsigned_short_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_227 (void)
{
  extern typeof (f32xmul (vol_var_unsigned_short_int, vol_var_signed_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_unsigned_short_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_228 (void)
{
  extern typeof (f32xmul (vol_var_unsigned_short_int, vol_var_unsigned_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_unsigned_short_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_229 (void)
{
  extern typeof (f32xmul (vol_var_unsigned_short_int, vol_var_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_unsigned_short_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_230 (void)
{
  extern typeof (f32xmul (vol_var_unsigned_short_int, vol_var_unsigned_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_unsigned_short_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_231 (void)
{
  extern typeof (f32xmul (vol_var_unsigned_short_int, vol_var_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_unsigned_short_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_232 (void)
{
  extern typeof (f32xmul (vol_var_unsigned_short_int, vol_var_unsigned_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_unsigned_short_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_233 (void)
{
  extern typeof (f32xmul (vol_var_unsigned_short_int, vol_var_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_unsigned_short_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_234 (void)
{
  extern typeof (f32xmul (vol_var_unsigned_short_int, vol_var_unsigned_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_unsigned_short_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_235 (void)
{
  extern typeof (f32xmul (vol_var_unsigned_short_int, vol_var_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_unsigned_short_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_236 (void)
{
  extern typeof (f32xmul (vol_var_unsigned_short_int, vol_var_unsigned_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_unsigned_short_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xmul_237 (void)
{
  extern typeof (f32xmul (vol_var_unsigned_short_int, vol_var___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_unsigned_short_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xmul_238 (void)
{
  extern typeof (f32xmul (vol_var_unsigned_short_int, vol_var_unsigned___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_unsigned_short_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_239 (void)
{
  extern typeof (f32xmul (vol_var_unsigned_short_int, vol_var_enum_e)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_unsigned_short_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_240 (void)
{
  extern typeof (f32xmul (vol_var_unsigned_short_int, vol_var__Bool)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_unsigned_short_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_241 (void)
{
  extern typeof (f32xmul (vol_var_unsigned_short_int, vol_var_bit_field)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_unsigned_short_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32xmul_242 (void)
{
  extern typeof (f32xmul (vol_var_int, vol_var__Float16)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32xmul_243 (void)
{
  extern typeof (f32xmul (vol_var_int, vol_var__Float32)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32xmul_244 (void)
{
  extern typeof (f32xmul (vol_var_int, vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32xmul_245 (void)
{
  extern typeof (f32xmul (vol_var_int, vol_var__Float64)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32xmul_246 (void)
{
  extern typeof (f32xmul (vol_var_int, vol_var__Float64x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32xmul_247 (void)
{
  extern typeof (f32xmul (vol_var_int, vol_var__Float128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_248 (void)
{
  extern typeof (f32xmul (vol_var_int, vol_var_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_249 (void)
{
  extern typeof (f32xmul (vol_var_int, vol_var_signed_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_250 (void)
{
  extern typeof (f32xmul (vol_var_int, vol_var_unsigned_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_251 (void)
{
  extern typeof (f32xmul (vol_var_int, vol_var_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_252 (void)
{
  extern typeof (f32xmul (vol_var_int, vol_var_unsigned_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_253 (void)
{
  extern typeof (f32xmul (vol_var_int, vol_var_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_254 (void)
{
  extern typeof (f32xmul (vol_var_int, vol_var_unsigned_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_255 (void)
{
  extern typeof (f32xmul (vol_var_int, vol_var_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_256 (void)
{
  extern typeof (f32xmul (vol_var_int, vol_var_unsigned_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_257 (void)
{
  extern typeof (f32xmul (vol_var_int, vol_var_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_258 (void)
{
  extern typeof (f32xmul (vol_var_int, vol_var_unsigned_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xmul_259 (void)
{
  extern typeof (f32xmul (vol_var_int, vol_var___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xmul_260 (void)
{
  extern typeof (f32xmul (vol_var_int, vol_var_unsigned___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_261 (void)
{
  extern typeof (f32xmul (vol_var_int, vol_var_enum_e)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_262 (void)
{
  extern typeof (f32xmul (vol_var_int, vol_var__Bool)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_263 (void)
{
  extern typeof (f32xmul (vol_var_int, vol_var_bit_field)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32xmul_264 (void)
{
  extern typeof (f32xmul (vol_var_unsigned_int, vol_var__Float16)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_unsigned_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32xmul_265 (void)
{
  extern typeof (f32xmul (vol_var_unsigned_int, vol_var__Float32)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_unsigned_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32xmul_266 (void)
{
  extern typeof (f32xmul (vol_var_unsigned_int, vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_unsigned_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32xmul_267 (void)
{
  extern typeof (f32xmul (vol_var_unsigned_int, vol_var__Float64)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_unsigned_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32xmul_268 (void)
{
  extern typeof (f32xmul (vol_var_unsigned_int, vol_var__Float64x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_unsigned_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32xmul_269 (void)
{
  extern typeof (f32xmul (vol_var_unsigned_int, vol_var__Float128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_unsigned_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_270 (void)
{
  extern typeof (f32xmul (vol_var_unsigned_int, vol_var_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_unsigned_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_271 (void)
{
  extern typeof (f32xmul (vol_var_unsigned_int, vol_var_signed_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_unsigned_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_272 (void)
{
  extern typeof (f32xmul (vol_var_unsigned_int, vol_var_unsigned_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_unsigned_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_273 (void)
{
  extern typeof (f32xmul (vol_var_unsigned_int, vol_var_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_unsigned_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_274 (void)
{
  extern typeof (f32xmul (vol_var_unsigned_int, vol_var_unsigned_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_unsigned_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_275 (void)
{
  extern typeof (f32xmul (vol_var_unsigned_int, vol_var_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_unsigned_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_276 (void)
{
  extern typeof (f32xmul (vol_var_unsigned_int, vol_var_unsigned_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_unsigned_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_277 (void)
{
  extern typeof (f32xmul (vol_var_unsigned_int, vol_var_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_unsigned_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_278 (void)
{
  extern typeof (f32xmul (vol_var_unsigned_int, vol_var_unsigned_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_unsigned_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_279 (void)
{
  extern typeof (f32xmul (vol_var_unsigned_int, vol_var_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_unsigned_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_280 (void)
{
  extern typeof (f32xmul (vol_var_unsigned_int, vol_var_unsigned_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_unsigned_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xmul_281 (void)
{
  extern typeof (f32xmul (vol_var_unsigned_int, vol_var___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_unsigned_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xmul_282 (void)
{
  extern typeof (f32xmul (vol_var_unsigned_int, vol_var_unsigned___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_unsigned_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_283 (void)
{
  extern typeof (f32xmul (vol_var_unsigned_int, vol_var_enum_e)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_unsigned_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_284 (void)
{
  extern typeof (f32xmul (vol_var_unsigned_int, vol_var__Bool)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_unsigned_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_285 (void)
{
  extern typeof (f32xmul (vol_var_unsigned_int, vol_var_bit_field)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_unsigned_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32xmul_286 (void)
{
  extern typeof (f32xmul (vol_var_long_int, vol_var__Float16)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_long_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32xmul_287 (void)
{
  extern typeof (f32xmul (vol_var_long_int, vol_var__Float32)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_long_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32xmul_288 (void)
{
  extern typeof (f32xmul (vol_var_long_int, vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_long_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32xmul_289 (void)
{
  extern typeof (f32xmul (vol_var_long_int, vol_var__Float64)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_long_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32xmul_290 (void)
{
  extern typeof (f32xmul (vol_var_long_int, vol_var__Float64x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_long_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32xmul_291 (void)
{
  extern typeof (f32xmul (vol_var_long_int, vol_var__Float128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_long_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_292 (void)
{
  extern typeof (f32xmul (vol_var_long_int, vol_var_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_long_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_293 (void)
{
  extern typeof (f32xmul (vol_var_long_int, vol_var_signed_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_long_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_294 (void)
{
  extern typeof (f32xmul (vol_var_long_int, vol_var_unsigned_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_long_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_295 (void)
{
  extern typeof (f32xmul (vol_var_long_int, vol_var_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_long_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_296 (void)
{
  extern typeof (f32xmul (vol_var_long_int, vol_var_unsigned_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_long_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_297 (void)
{
  extern typeof (f32xmul (vol_var_long_int, vol_var_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_long_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_298 (void)
{
  extern typeof (f32xmul (vol_var_long_int, vol_var_unsigned_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_long_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_299 (void)
{
  extern typeof (f32xmul (vol_var_long_int, vol_var_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_long_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_300 (void)
{
  extern typeof (f32xmul (vol_var_long_int, vol_var_unsigned_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_long_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_301 (void)
{
  extern typeof (f32xmul (vol_var_long_int, vol_var_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_long_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_302 (void)
{
  extern typeof (f32xmul (vol_var_long_int, vol_var_unsigned_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_long_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xmul_303 (void)
{
  extern typeof (f32xmul (vol_var_long_int, vol_var___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_long_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xmul_304 (void)
{
  extern typeof (f32xmul (vol_var_long_int, vol_var_unsigned___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_long_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_305 (void)
{
  extern typeof (f32xmul (vol_var_long_int, vol_var_enum_e)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_long_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_306 (void)
{
  extern typeof (f32xmul (vol_var_long_int, vol_var__Bool)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_long_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_307 (void)
{
  extern typeof (f32xmul (vol_var_long_int, vol_var_bit_field)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_long_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32xmul_308 (void)
{
  extern typeof (f32xmul (vol_var_unsigned_long_int, vol_var__Float16)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_unsigned_long_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32xmul_309 (void)
{
  extern typeof (f32xmul (vol_var_unsigned_long_int, vol_var__Float32)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_unsigned_long_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32xmul_310 (void)
{
  extern typeof (f32xmul (vol_var_unsigned_long_int, vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_unsigned_long_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32xmul_311 (void)
{
  extern typeof (f32xmul (vol_var_unsigned_long_int, vol_var__Float64)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_unsigned_long_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32xmul_312 (void)
{
  extern typeof (f32xmul (vol_var_unsigned_long_int, vol_var__Float64x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_unsigned_long_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32xmul_313 (void)
{
  extern typeof (f32xmul (vol_var_unsigned_long_int, vol_var__Float128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_unsigned_long_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_314 (void)
{
  extern typeof (f32xmul (vol_var_unsigned_long_int, vol_var_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_unsigned_long_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_315 (void)
{
  extern typeof (f32xmul (vol_var_unsigned_long_int, vol_var_signed_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_unsigned_long_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_316 (void)
{
  extern typeof (f32xmul (vol_var_unsigned_long_int, vol_var_unsigned_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_unsigned_long_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_317 (void)
{
  extern typeof (f32xmul (vol_var_unsigned_long_int, vol_var_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_unsigned_long_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_318 (void)
{
  extern typeof (f32xmul (vol_var_unsigned_long_int, vol_var_unsigned_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_unsigned_long_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_319 (void)
{
  extern typeof (f32xmul (vol_var_unsigned_long_int, vol_var_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_unsigned_long_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_320 (void)
{
  extern typeof (f32xmul (vol_var_unsigned_long_int, vol_var_unsigned_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_unsigned_long_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_321 (void)
{
  extern typeof (f32xmul (vol_var_unsigned_long_int, vol_var_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_unsigned_long_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_322 (void)
{
  extern typeof (f32xmul (vol_var_unsigned_long_int, vol_var_unsigned_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_unsigned_long_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_323 (void)
{
  extern typeof (f32xmul (vol_var_unsigned_long_int, vol_var_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_unsigned_long_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_324 (void)
{
  extern typeof (f32xmul (vol_var_unsigned_long_int, vol_var_unsigned_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_unsigned_long_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xmul_325 (void)
{
  extern typeof (f32xmul (vol_var_unsigned_long_int, vol_var___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_unsigned_long_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xmul_326 (void)
{
  extern typeof (f32xmul (vol_var_unsigned_long_int, vol_var_unsigned___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_unsigned_long_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_327 (void)
{
  extern typeof (f32xmul (vol_var_unsigned_long_int, vol_var_enum_e)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_unsigned_long_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_328 (void)
{
  extern typeof (f32xmul (vol_var_unsigned_long_int, vol_var__Bool)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_unsigned_long_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_329 (void)
{
  extern typeof (f32xmul (vol_var_unsigned_long_int, vol_var_bit_field)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_unsigned_long_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32xmul_330 (void)
{
  extern typeof (f32xmul (vol_var_long_long_int, vol_var__Float16)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_long_long_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32xmul_331 (void)
{
  extern typeof (f32xmul (vol_var_long_long_int, vol_var__Float32)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_long_long_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32xmul_332 (void)
{
  extern typeof (f32xmul (vol_var_long_long_int, vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_long_long_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32xmul_333 (void)
{
  extern typeof (f32xmul (vol_var_long_long_int, vol_var__Float64)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_long_long_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32xmul_334 (void)
{
  extern typeof (f32xmul (vol_var_long_long_int, vol_var__Float64x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_long_long_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32xmul_335 (void)
{
  extern typeof (f32xmul (vol_var_long_long_int, vol_var__Float128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_long_long_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_336 (void)
{
  extern typeof (f32xmul (vol_var_long_long_int, vol_var_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_long_long_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_337 (void)
{
  extern typeof (f32xmul (vol_var_long_long_int, vol_var_signed_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_long_long_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_338 (void)
{
  extern typeof (f32xmul (vol_var_long_long_int, vol_var_unsigned_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_long_long_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_339 (void)
{
  extern typeof (f32xmul (vol_var_long_long_int, vol_var_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_long_long_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_340 (void)
{
  extern typeof (f32xmul (vol_var_long_long_int, vol_var_unsigned_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_long_long_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_341 (void)
{
  extern typeof (f32xmul (vol_var_long_long_int, vol_var_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_long_long_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_342 (void)
{
  extern typeof (f32xmul (vol_var_long_long_int, vol_var_unsigned_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_long_long_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_343 (void)
{
  extern typeof (f32xmul (vol_var_long_long_int, vol_var_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_long_long_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_344 (void)
{
  extern typeof (f32xmul (vol_var_long_long_int, vol_var_unsigned_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_long_long_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_345 (void)
{
  extern typeof (f32xmul (vol_var_long_long_int, vol_var_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_long_long_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_346 (void)
{
  extern typeof (f32xmul (vol_var_long_long_int, vol_var_unsigned_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_long_long_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xmul_347 (void)
{
  extern typeof (f32xmul (vol_var_long_long_int, vol_var___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_long_long_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xmul_348 (void)
{
  extern typeof (f32xmul (vol_var_long_long_int, vol_var_unsigned___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_long_long_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_349 (void)
{
  extern typeof (f32xmul (vol_var_long_long_int, vol_var_enum_e)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_long_long_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_350 (void)
{
  extern typeof (f32xmul (vol_var_long_long_int, vol_var__Bool)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_long_long_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_351 (void)
{
  extern typeof (f32xmul (vol_var_long_long_int, vol_var_bit_field)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_long_long_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32xmul_352 (void)
{
  extern typeof (f32xmul (vol_var_unsigned_long_long_int, vol_var__Float16)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_unsigned_long_long_int, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32xmul_353 (void)
{
  extern typeof (f32xmul (vol_var_unsigned_long_long_int, vol_var__Float32)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_unsigned_long_long_int, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32xmul_354 (void)
{
  extern typeof (f32xmul (vol_var_unsigned_long_long_int, vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_unsigned_long_long_int, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32xmul_355 (void)
{
  extern typeof (f32xmul (vol_var_unsigned_long_long_int, vol_var__Float64)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_unsigned_long_long_int, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32xmul_356 (void)
{
  extern typeof (f32xmul (vol_var_unsigned_long_long_int, vol_var__Float64x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_unsigned_long_long_int, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32xmul_357 (void)
{
  extern typeof (f32xmul (vol_var_unsigned_long_long_int, vol_var__Float128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_unsigned_long_long_int, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_358 (void)
{
  extern typeof (f32xmul (vol_var_unsigned_long_long_int, vol_var_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_unsigned_long_long_int, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_359 (void)
{
  extern typeof (f32xmul (vol_var_unsigned_long_long_int, vol_var_signed_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_unsigned_long_long_int, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_360 (void)
{
  extern typeof (f32xmul (vol_var_unsigned_long_long_int, vol_var_unsigned_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_unsigned_long_long_int, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_361 (void)
{
  extern typeof (f32xmul (vol_var_unsigned_long_long_int, vol_var_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_unsigned_long_long_int, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_362 (void)
{
  extern typeof (f32xmul (vol_var_unsigned_long_long_int, vol_var_unsigned_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_unsigned_long_long_int, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_363 (void)
{
  extern typeof (f32xmul (vol_var_unsigned_long_long_int, vol_var_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_unsigned_long_long_int, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_364 (void)
{
  extern typeof (f32xmul (vol_var_unsigned_long_long_int, vol_var_unsigned_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_unsigned_long_long_int, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_365 (void)
{
  extern typeof (f32xmul (vol_var_unsigned_long_long_int, vol_var_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_unsigned_long_long_int, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_366 (void)
{
  extern typeof (f32xmul (vol_var_unsigned_long_long_int, vol_var_unsigned_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_unsigned_long_long_int, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_367 (void)
{
  extern typeof (f32xmul (vol_var_unsigned_long_long_int, vol_var_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_unsigned_long_long_int, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_368 (void)
{
  extern typeof (f32xmul (vol_var_unsigned_long_long_int, vol_var_unsigned_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_unsigned_long_long_int, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xmul_369 (void)
{
  extern typeof (f32xmul (vol_var_unsigned_long_long_int, vol_var___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_unsigned_long_long_int, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xmul_370 (void)
{
  extern typeof (f32xmul (vol_var_unsigned_long_long_int, vol_var_unsigned___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_unsigned_long_long_int, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_371 (void)
{
  extern typeof (f32xmul (vol_var_unsigned_long_long_int, vol_var_enum_e)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_unsigned_long_long_int, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_372 (void)
{
  extern typeof (f32xmul (vol_var_unsigned_long_long_int, vol_var__Bool)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_unsigned_long_long_int, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_373 (void)
{
  extern typeof (f32xmul (vol_var_unsigned_long_long_int, vol_var_bit_field)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_unsigned_long_long_int, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_f32xmul_374 (void)
{
  extern typeof (f32xmul (vol_var___int128, vol_var__Float16)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var___int128, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_f32xmul_375 (void)
{
  extern typeof (f32xmul (vol_var___int128, vol_var__Float32)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var___int128, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_f32xmul_376 (void)
{
  extern typeof (f32xmul (vol_var___int128, vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var___int128, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_f32xmul_377 (void)
{
  extern typeof (f32xmul (vol_var___int128, vol_var__Float64)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var___int128, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_f32xmul_378 (void)
{
  extern typeof (f32xmul (vol_var___int128, vol_var__Float64x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var___int128, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_f32xmul_379 (void)
{
  extern typeof (f32xmul (vol_var___int128, vol_var__Float128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var___int128, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xmul_380 (void)
{
  extern typeof (f32xmul (vol_var___int128, vol_var_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var___int128, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xmul_381 (void)
{
  extern typeof (f32xmul (vol_var___int128, vol_var_signed_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var___int128, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xmul_382 (void)
{
  extern typeof (f32xmul (vol_var___int128, vol_var_unsigned_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var___int128, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xmul_383 (void)
{
  extern typeof (f32xmul (vol_var___int128, vol_var_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var___int128, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xmul_384 (void)
{
  extern typeof (f32xmul (vol_var___int128, vol_var_unsigned_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var___int128, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xmul_385 (void)
{
  extern typeof (f32xmul (vol_var___int128, vol_var_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var___int128, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xmul_386 (void)
{
  extern typeof (f32xmul (vol_var___int128, vol_var_unsigned_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var___int128, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xmul_387 (void)
{
  extern typeof (f32xmul (vol_var___int128, vol_var_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var___int128, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xmul_388 (void)
{
  extern typeof (f32xmul (vol_var___int128, vol_var_unsigned_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var___int128, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xmul_389 (void)
{
  extern typeof (f32xmul (vol_var___int128, vol_var_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var___int128, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xmul_390 (void)
{
  extern typeof (f32xmul (vol_var___int128, vol_var_unsigned_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var___int128, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xmul_391 (void)
{
  extern typeof (f32xmul (vol_var___int128, vol_var___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var___int128, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xmul_392 (void)
{
  extern typeof (f32xmul (vol_var___int128, vol_var_unsigned___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var___int128, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xmul_393 (void)
{
  extern typeof (f32xmul (vol_var___int128, vol_var_enum_e)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var___int128, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xmul_394 (void)
{
  extern typeof (f32xmul (vol_var___int128, vol_var__Bool)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var___int128, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xmul_395 (void)
{
  extern typeof (f32xmul (vol_var___int128, vol_var_bit_field)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var___int128, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
static void
test_f32xmul_396 (void)
{
  extern typeof (f32xmul (vol_var_unsigned___int128, vol_var__Float16)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_unsigned___int128, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
static void
test_f32xmul_397 (void)
{
  extern typeof (f32xmul (vol_var_unsigned___int128, vol_var__Float32)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_unsigned___int128, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
static void
test_f32xmul_398 (void)
{
  extern typeof (f32xmul (vol_var_unsigned___int128, vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_unsigned___int128, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
static void
test_f32xmul_399 (void)
{
  extern typeof (f32xmul (vol_var_unsigned___int128, vol_var__Float64)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_unsigned___int128, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
static void
test_f32xmul_400 (void)
{
  extern typeof (f32xmul (vol_var_unsigned___int128, vol_var__Float64x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_unsigned___int128, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
static void
test_f32xmul_401 (void)
{
  extern typeof (f32xmul (vol_var_unsigned___int128, vol_var__Float128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_unsigned___int128, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xmul_402 (void)
{
  extern typeof (f32xmul (vol_var_unsigned___int128, vol_var_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_unsigned___int128, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xmul_403 (void)
{
  extern typeof (f32xmul (vol_var_unsigned___int128, vol_var_signed_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_unsigned___int128, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xmul_404 (void)
{
  extern typeof (f32xmul (vol_var_unsigned___int128, vol_var_unsigned_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_unsigned___int128, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xmul_405 (void)
{
  extern typeof (f32xmul (vol_var_unsigned___int128, vol_var_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_unsigned___int128, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xmul_406 (void)
{
  extern typeof (f32xmul (vol_var_unsigned___int128, vol_var_unsigned_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_unsigned___int128, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xmul_407 (void)
{
  extern typeof (f32xmul (vol_var_unsigned___int128, vol_var_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_unsigned___int128, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xmul_408 (void)
{
  extern typeof (f32xmul (vol_var_unsigned___int128, vol_var_unsigned_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_unsigned___int128, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xmul_409 (void)
{
  extern typeof (f32xmul (vol_var_unsigned___int128, vol_var_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_unsigned___int128, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xmul_410 (void)
{
  extern typeof (f32xmul (vol_var_unsigned___int128, vol_var_unsigned_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_unsigned___int128, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xmul_411 (void)
{
  extern typeof (f32xmul (vol_var_unsigned___int128, vol_var_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_unsigned___int128, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xmul_412 (void)
{
  extern typeof (f32xmul (vol_var_unsigned___int128, vol_var_unsigned_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_unsigned___int128, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xmul_413 (void)
{
  extern typeof (f32xmul (vol_var_unsigned___int128, vol_var___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_unsigned___int128, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xmul_414 (void)
{
  extern typeof (f32xmul (vol_var_unsigned___int128, vol_var_unsigned___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_unsigned___int128, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xmul_415 (void)
{
  extern typeof (f32xmul (vol_var_unsigned___int128, vol_var_enum_e)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_unsigned___int128, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xmul_416 (void)
{
  extern typeof (f32xmul (vol_var_unsigned___int128, vol_var__Bool)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_unsigned___int128, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xmul_417 (void)
{
  extern typeof (f32xmul (vol_var_unsigned___int128, vol_var_bit_field)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_unsigned___int128, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32xmul_418 (void)
{
  extern typeof (f32xmul (vol_var_enum_e, vol_var__Float16)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_enum_e, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32xmul_419 (void)
{
  extern typeof (f32xmul (vol_var_enum_e, vol_var__Float32)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_enum_e, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32xmul_420 (void)
{
  extern typeof (f32xmul (vol_var_enum_e, vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_enum_e, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32xmul_421 (void)
{
  extern typeof (f32xmul (vol_var_enum_e, vol_var__Float64)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_enum_e, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32xmul_422 (void)
{
  extern typeof (f32xmul (vol_var_enum_e, vol_var__Float64x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_enum_e, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32xmul_423 (void)
{
  extern typeof (f32xmul (vol_var_enum_e, vol_var__Float128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_enum_e, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_424 (void)
{
  extern typeof (f32xmul (vol_var_enum_e, vol_var_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_enum_e, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_425 (void)
{
  extern typeof (f32xmul (vol_var_enum_e, vol_var_signed_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_enum_e, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_426 (void)
{
  extern typeof (f32xmul (vol_var_enum_e, vol_var_unsigned_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_enum_e, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_427 (void)
{
  extern typeof (f32xmul (vol_var_enum_e, vol_var_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_enum_e, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_428 (void)
{
  extern typeof (f32xmul (vol_var_enum_e, vol_var_unsigned_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_enum_e, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_429 (void)
{
  extern typeof (f32xmul (vol_var_enum_e, vol_var_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_enum_e, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_430 (void)
{
  extern typeof (f32xmul (vol_var_enum_e, vol_var_unsigned_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_enum_e, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_431 (void)
{
  extern typeof (f32xmul (vol_var_enum_e, vol_var_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_enum_e, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_432 (void)
{
  extern typeof (f32xmul (vol_var_enum_e, vol_var_unsigned_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_enum_e, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_433 (void)
{
  extern typeof (f32xmul (vol_var_enum_e, vol_var_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_enum_e, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_434 (void)
{
  extern typeof (f32xmul (vol_var_enum_e, vol_var_unsigned_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_enum_e, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xmul_435 (void)
{
  extern typeof (f32xmul (vol_var_enum_e, vol_var___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_enum_e, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xmul_436 (void)
{
  extern typeof (f32xmul (vol_var_enum_e, vol_var_unsigned___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_enum_e, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_437 (void)
{
  extern typeof (f32xmul (vol_var_enum_e, vol_var_enum_e)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_enum_e, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_438 (void)
{
  extern typeof (f32xmul (vol_var_enum_e, vol_var__Bool)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_enum_e, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_439 (void)
{
  extern typeof (f32xmul (vol_var_enum_e, vol_var_bit_field)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_enum_e, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32xmul_440 (void)
{
  extern typeof (f32xmul (vol_var__Bool, vol_var__Float16)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Bool, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32xmul_441 (void)
{
  extern typeof (f32xmul (vol_var__Bool, vol_var__Float32)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Bool, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32xmul_442 (void)
{
  extern typeof (f32xmul (vol_var__Bool, vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Bool, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32xmul_443 (void)
{
  extern typeof (f32xmul (vol_var__Bool, vol_var__Float64)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Bool, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32xmul_444 (void)
{
  extern typeof (f32xmul (vol_var__Bool, vol_var__Float64x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Bool, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32xmul_445 (void)
{
  extern typeof (f32xmul (vol_var__Bool, vol_var__Float128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Bool, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_446 (void)
{
  extern typeof (f32xmul (vol_var__Bool, vol_var_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Bool, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_447 (void)
{
  extern typeof (f32xmul (vol_var__Bool, vol_var_signed_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Bool, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_448 (void)
{
  extern typeof (f32xmul (vol_var__Bool, vol_var_unsigned_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Bool, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_449 (void)
{
  extern typeof (f32xmul (vol_var__Bool, vol_var_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Bool, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_450 (void)
{
  extern typeof (f32xmul (vol_var__Bool, vol_var_unsigned_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Bool, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_451 (void)
{
  extern typeof (f32xmul (vol_var__Bool, vol_var_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Bool, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_452 (void)
{
  extern typeof (f32xmul (vol_var__Bool, vol_var_unsigned_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Bool, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_453 (void)
{
  extern typeof (f32xmul (vol_var__Bool, vol_var_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Bool, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_454 (void)
{
  extern typeof (f32xmul (vol_var__Bool, vol_var_unsigned_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Bool, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_455 (void)
{
  extern typeof (f32xmul (vol_var__Bool, vol_var_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Bool, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_456 (void)
{
  extern typeof (f32xmul (vol_var__Bool, vol_var_unsigned_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Bool, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xmul_457 (void)
{
  extern typeof (f32xmul (vol_var__Bool, vol_var___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Bool, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xmul_458 (void)
{
  extern typeof (f32xmul (vol_var__Bool, vol_var_unsigned___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Bool, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_459 (void)
{
  extern typeof (f32xmul (vol_var__Bool, vol_var_enum_e)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Bool, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_460 (void)
{
  extern typeof (f32xmul (vol_var__Bool, vol_var__Bool)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Bool, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_461 (void)
{
  extern typeof (f32xmul (vol_var__Bool, vol_var_bit_field)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var__Bool, vol_var_bit_field);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
static void
test_f32xmul_462 (void)
{
  extern typeof (f32xmul (vol_var_bit_field, vol_var__Float16)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_bit_field, vol_var__Float16);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
static void
test_f32xmul_463 (void)
{
  extern typeof (f32xmul (vol_var_bit_field, vol_var__Float32)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_bit_field, vol_var__Float32);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
static void
test_f32xmul_464 (void)
{
  extern typeof (f32xmul (vol_var_bit_field, vol_var__Float32x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_bit_field, vol_var__Float32x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
static void
test_f32xmul_465 (void)
{
  extern typeof (f32xmul (vol_var_bit_field, vol_var__Float64)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_bit_field, vol_var__Float64);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
static void
test_f32xmul_466 (void)
{
  extern typeof (f32xmul (vol_var_bit_field, vol_var__Float64x)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_bit_field, vol_var__Float64x);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
static void
test_f32xmul_467 (void)
{
  extern typeof (f32xmul (vol_var_bit_field, vol_var__Float128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_bit_field, vol_var__Float128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_468 (void)
{
  extern typeof (f32xmul (vol_var_bit_field, vol_var_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_bit_field, vol_var_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_469 (void)
{
  extern typeof (f32xmul (vol_var_bit_field, vol_var_signed_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_bit_field, vol_var_signed_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_470 (void)
{
  extern typeof (f32xmul (vol_var_bit_field, vol_var_unsigned_char)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_bit_field, vol_var_unsigned_char);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_471 (void)
{
  extern typeof (f32xmul (vol_var_bit_field, vol_var_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_bit_field, vol_var_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_472 (void)
{
  extern typeof (f32xmul (vol_var_bit_field, vol_var_unsigned_short_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_bit_field, vol_var_unsigned_short_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_473 (void)
{
  extern typeof (f32xmul (vol_var_bit_field, vol_var_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_bit_field, vol_var_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_474 (void)
{
  extern typeof (f32xmul (vol_var_bit_field, vol_var_unsigned_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_bit_field, vol_var_unsigned_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_475 (void)
{
  extern typeof (f32xmul (vol_var_bit_field, vol_var_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_bit_field, vol_var_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_476 (void)
{
  extern typeof (f32xmul (vol_var_bit_field, vol_var_unsigned_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_bit_field, vol_var_unsigned_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_477 (void)
{
  extern typeof (f32xmul (vol_var_bit_field, vol_var_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_bit_field, vol_var_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_478 (void)
{
  extern typeof (f32xmul (vol_var_bit_field, vol_var_unsigned_long_long_int)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_bit_field, vol_var_unsigned_long_long_int);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xmul_479 (void)
{
  extern typeof (f32xmul (vol_var_bit_field, vol_var___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_bit_field, vol_var___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
static void
test_f32xmul_480 (void)
{
  extern typeof (f32xmul (vol_var_bit_field, vol_var_unsigned___int128)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_bit_field, vol_var_unsigned___int128);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_481 (void)
{
  extern typeof (f32xmul (vol_var_bit_field, vol_var_enum_e)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_bit_field, vol_var_enum_e);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_482 (void)
{
  extern typeof (f32xmul (vol_var_bit_field, vol_var__Bool)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_bit_field, vol_var__Bool);
}
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
static void
test_f32xmul_483 (void)
{
  extern typeof (f32xmul (vol_var_bit_field, vol_var_bit_field)) var__Float32x __attribute__ ((unused));
  vol_var__Float32x = f32xmul (vol_var_bit_field, vol_var_bit_field);
}
#endif
static const struct test tests[] =
  {
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32xmul_0, "f32xmul", "f32xmul (_Float16, _Float16)", FLT32X_EXT_MANT_DIG, FLT16_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32
    { test_f32xmul_1, "f32xmul", "f32xmul (_Float16, _Float32)", FLT32X_EXT_MANT_DIG, FLT32_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
    { test_f32xmul_2, "f32xmul", "f32xmul (_Float16, _Float32x)", FLT32X_EXT_MANT_DIG, FLT32X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64
    { test_f32xmul_3, "f32xmul", "f32xmul (_Float16, _Float64)", FLT64_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
    { test_f32xmul_4, "f32xmul", "f32xmul (_Float16, _Float64x)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F16
    { test_f32xmul_5, "f32xmul", "f32xmul (_Float16, _Float128)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32xmul_6, "f32xmul", "f32xmul (_Float16, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32xmul_7, "f32xmul", "f32xmul (_Float16, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32xmul_8, "f32xmul", "f32xmul (_Float16, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32xmul_9, "f32xmul", "f32xmul (_Float16, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32xmul_10, "f32xmul", "f32xmul (_Float16, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32xmul_11, "f32xmul", "f32xmul (_Float16, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32xmul_12, "f32xmul", "f32xmul (_Float16, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32xmul_13, "f32xmul", "f32xmul (_Float16, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32xmul_14, "f32xmul", "f32xmul (_Float16, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32xmul_15, "f32xmul", "f32xmul (_Float16, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32xmul_16, "f32xmul", "f32xmul (_Float16, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_f32xmul_17, "f32xmul", "f32xmul (_Float16, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_f32xmul_18, "f32xmul", "f32xmul (_Float16, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32xmul_19, "f32xmul", "f32xmul (_Float16, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32xmul_20, "f32xmul", "f32xmul (_Float16, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32xmul_21, "f32xmul", "f32xmul (_Float16, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32
    { test_f32xmul_22, "f32xmul", "f32xmul (_Float32, _Float16)", FLT32X_EXT_MANT_DIG, FLT32_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32xmul_23, "f32xmul", "f32xmul (_Float32, _Float32)", FLT32X_EXT_MANT_DIG, FLT32_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
    { test_f32xmul_24, "f32xmul", "f32xmul (_Float32, _Float32x)", FLT32X_EXT_MANT_DIG, FLT32X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64
    { test_f32xmul_25, "f32xmul", "f32xmul (_Float32, _Float64)", FLT64_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
    { test_f32xmul_26, "f32xmul", "f32xmul (_Float32, _Float64x)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32
    { test_f32xmul_27, "f32xmul", "f32xmul (_Float32, _Float128)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32xmul_28, "f32xmul", "f32xmul (_Float32, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32xmul_29, "f32xmul", "f32xmul (_Float32, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32xmul_30, "f32xmul", "f32xmul (_Float32, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32xmul_31, "f32xmul", "f32xmul (_Float32, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32xmul_32, "f32xmul", "f32xmul (_Float32, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32xmul_33, "f32xmul", "f32xmul (_Float32, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32xmul_34, "f32xmul", "f32xmul (_Float32, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32xmul_35, "f32xmul", "f32xmul (_Float32, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32xmul_36, "f32xmul", "f32xmul (_Float32, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32xmul_37, "f32xmul", "f32xmul (_Float32, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32xmul_38, "f32xmul", "f32xmul (_Float32, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_f32xmul_39, "f32xmul", "f32xmul (_Float32, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_f32xmul_40, "f32xmul", "f32xmul (_Float32, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32xmul_41, "f32xmul", "f32xmul (_Float32, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32xmul_42, "f32xmul", "f32xmul (_Float32, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32xmul_43, "f32xmul", "f32xmul (_Float32, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F32X
    { test_f32xmul_44, "f32xmul", "f32xmul (_Float32x, _Float16)", FLT32X_EXT_MANT_DIG, FLT32X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F32X
    { test_f32xmul_45, "f32xmul", "f32xmul (_Float32x, _Float32)", FLT32X_EXT_MANT_DIG, FLT32X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32xmul_46, "f32xmul", "f32xmul (_Float32x, _Float32x)", FLT32X_EXT_MANT_DIG, FLT32X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64
    { test_f32xmul_47, "f32xmul", "f32xmul (_Float32x, _Float64)", FLT64_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
    { test_f32xmul_48, "f32xmul", "f32xmul (_Float32x, _Float64x)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
    { test_f32xmul_49, "f32xmul", "f32xmul (_Float32x, _Float128)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32xmul_50, "f32xmul", "f32xmul (_Float32x, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32xmul_51, "f32xmul", "f32xmul (_Float32x, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32xmul_52, "f32xmul", "f32xmul (_Float32x, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32xmul_53, "f32xmul", "f32xmul (_Float32x, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32xmul_54, "f32xmul", "f32xmul (_Float32x, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32xmul_55, "f32xmul", "f32xmul (_Float32x, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32xmul_56, "f32xmul", "f32xmul (_Float32x, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32xmul_57, "f32xmul", "f32xmul (_Float32x, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32xmul_58, "f32xmul", "f32xmul (_Float32x, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32xmul_59, "f32xmul", "f32xmul (_Float32x, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32xmul_60, "f32xmul", "f32xmul (_Float32x, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_f32xmul_61, "f32xmul", "f32xmul (_Float32x, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_f32xmul_62, "f32xmul", "f32xmul (_Float32x, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32xmul_63, "f32xmul", "f32xmul (_Float32x, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32xmul_64, "f32xmul", "f32xmul (_Float32x, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32xmul_65, "f32xmul", "f32xmul (_Float32x, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64
    { test_f32xmul_66, "f32xmul", "f32xmul (_Float64, _Float16)", FLT64_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64
    { test_f32xmul_67, "f32xmul", "f32xmul (_Float64, _Float32)", FLT64_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64
    { test_f32xmul_68, "f32xmul", "f32xmul (_Float64, _Float32x)", FLT64_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32xmul_69, "f32xmul", "f32xmul (_Float64, _Float64)", FLT64_MANT_DIG, FLT64_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
    { test_f32xmul_70, "f32xmul", "f32xmul (_Float64, _Float64x)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64
    { test_f32xmul_71, "f32xmul", "f32xmul (_Float64, _Float128)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32xmul_72, "f32xmul", "f32xmul (_Float64, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32xmul_73, "f32xmul", "f32xmul (_Float64, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32xmul_74, "f32xmul", "f32xmul (_Float64, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32xmul_75, "f32xmul", "f32xmul (_Float64, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32xmul_76, "f32xmul", "f32xmul (_Float64, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32xmul_77, "f32xmul", "f32xmul (_Float64, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32xmul_78, "f32xmul", "f32xmul (_Float64, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32xmul_79, "f32xmul", "f32xmul (_Float64, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32xmul_80, "f32xmul", "f32xmul (_Float64, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32xmul_81, "f32xmul", "f32xmul (_Float64, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32xmul_82, "f32xmul", "f32xmul (_Float64, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_f32xmul_83, "f32xmul", "f32xmul (_Float64, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_f32xmul_84, "f32xmul", "f32xmul (_Float64, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32xmul_85, "f32xmul", "f32xmul (_Float64, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32xmul_86, "f32xmul", "f32xmul (_Float64, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32xmul_87, "f32xmul", "f32xmul (_Float64, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined HUGE_VAL_F64X
    { test_f32xmul_88, "f32xmul", "f32xmul (_Float64x, _Float16)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined HUGE_VAL_F64X
    { test_f32xmul_89, "f32xmul", "f32xmul (_Float64x, _Float32)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined HUGE_VAL_F64X
    { test_f32xmul_90, "f32xmul", "f32xmul (_Float64x, _Float32x)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined HUGE_VAL_F64X
    { test_f32xmul_91, "f32xmul", "f32xmul (_Float64x, _Float64)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32xmul_92, "f32xmul", "f32xmul (_Float64x, _Float64x)", FLT64X_MANT_DIG, FLT64X_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
    { test_f32xmul_93, "f32xmul", "f32xmul (_Float64x, _Float128)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32xmul_94, "f32xmul", "f32xmul (_Float64x, char)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32xmul_95, "f32xmul", "f32xmul (_Float64x, signed char)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32xmul_96, "f32xmul", "f32xmul (_Float64x, unsigned char)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32xmul_97, "f32xmul", "f32xmul (_Float64x, short int)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32xmul_98, "f32xmul", "f32xmul (_Float64x, unsigned short int)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32xmul_99, "f32xmul", "f32xmul (_Float64x, int)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32xmul_100, "f32xmul", "f32xmul (_Float64x, unsigned int)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32xmul_101, "f32xmul", "f32xmul (_Float64x, long int)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32xmul_102, "f32xmul", "f32xmul (_Float64x, unsigned long int)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32xmul_103, "f32xmul", "f32xmul (_Float64x, long long int)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32xmul_104, "f32xmul", "f32xmul (_Float64x, unsigned long long int)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_f32xmul_105, "f32xmul", "f32xmul (_Float64x, __int128)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_f32xmul_106, "f32xmul", "f32xmul (_Float64x, unsigned __int128)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32xmul_107, "f32xmul", "f32xmul (_Float64x, enum e)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32xmul_108, "f32xmul", "f32xmul (_Float64x, _Bool)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32xmul_109, "f32xmul", "f32xmul (_Float64x, bit_field)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F16
    { test_f32xmul_110, "f32xmul", "f32xmul (_Float128, _Float16)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32
    { test_f32xmul_111, "f32xmul", "f32xmul (_Float128, _Float32)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F32X
    { test_f32xmul_112, "f32xmul", "f32xmul (_Float128, _Float32x)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64
    { test_f32xmul_113, "f32xmul", "f32xmul (_Float128, _Float64)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined HUGE_VAL_F64X
    { test_f32xmul_114, "f32xmul", "f32xmul (_Float128, _Float64x)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32xmul_115, "f32xmul", "f32xmul (_Float128, _Float128)", FLT128_MANT_DIG, FLT128_MANT_DIG },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32xmul_116, "f32xmul", "f32xmul (_Float128, char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32xmul_117, "f32xmul", "f32xmul (_Float128, signed char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32xmul_118, "f32xmul", "f32xmul (_Float128, unsigned char)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32xmul_119, "f32xmul", "f32xmul (_Float128, short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32xmul_120, "f32xmul", "f32xmul (_Float128, unsigned short int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32xmul_121, "f32xmul", "f32xmul (_Float128, int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32xmul_122, "f32xmul", "f32xmul (_Float128, unsigned int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32xmul_123, "f32xmul", "f32xmul (_Float128, long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32xmul_124, "f32xmul", "f32xmul (_Float128, unsigned long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32xmul_125, "f32xmul", "f32xmul (_Float128, long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32xmul_126, "f32xmul", "f32xmul (_Float128, unsigned long long int)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_f32xmul_127, "f32xmul", "f32xmul (_Float128, __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_f32xmul_128, "f32xmul", "f32xmul (_Float128, unsigned __int128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32xmul_129, "f32xmul", "f32xmul (_Float128, enum e)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32xmul_130, "f32xmul", "f32xmul (_Float128, _Bool)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32xmul_131, "f32xmul", "f32xmul (_Float128, bit_field)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32xmul_132, "f32xmul", "f32xmul (char, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32xmul_133, "f32xmul", "f32xmul (char, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32xmul_134, "f32xmul", "f32xmul (char, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32xmul_135, "f32xmul", "f32xmul (char, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32xmul_136, "f32xmul", "f32xmul (char, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32xmul_137, "f32xmul", "f32xmul (char, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_138, "f32xmul", "f32xmul (char, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_139, "f32xmul", "f32xmul (char, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_140, "f32xmul", "f32xmul (char, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_141, "f32xmul", "f32xmul (char, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_142, "f32xmul", "f32xmul (char, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_143, "f32xmul", "f32xmul (char, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_144, "f32xmul", "f32xmul (char, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_145, "f32xmul", "f32xmul (char, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_146, "f32xmul", "f32xmul (char, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_147, "f32xmul", "f32xmul (char, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_148, "f32xmul", "f32xmul (char, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xmul_149, "f32xmul", "f32xmul (char, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xmul_150, "f32xmul", "f32xmul (char, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_151, "f32xmul", "f32xmul (char, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_152, "f32xmul", "f32xmul (char, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_153, "f32xmul", "f32xmul (char, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32xmul_154, "f32xmul", "f32xmul (signed char, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32xmul_155, "f32xmul", "f32xmul (signed char, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32xmul_156, "f32xmul", "f32xmul (signed char, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32xmul_157, "f32xmul", "f32xmul (signed char, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32xmul_158, "f32xmul", "f32xmul (signed char, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32xmul_159, "f32xmul", "f32xmul (signed char, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_160, "f32xmul", "f32xmul (signed char, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_161, "f32xmul", "f32xmul (signed char, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_162, "f32xmul", "f32xmul (signed char, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_163, "f32xmul", "f32xmul (signed char, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_164, "f32xmul", "f32xmul (signed char, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_165, "f32xmul", "f32xmul (signed char, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_166, "f32xmul", "f32xmul (signed char, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_167, "f32xmul", "f32xmul (signed char, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_168, "f32xmul", "f32xmul (signed char, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_169, "f32xmul", "f32xmul (signed char, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_170, "f32xmul", "f32xmul (signed char, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xmul_171, "f32xmul", "f32xmul (signed char, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xmul_172, "f32xmul", "f32xmul (signed char, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_173, "f32xmul", "f32xmul (signed char, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_174, "f32xmul", "f32xmul (signed char, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_175, "f32xmul", "f32xmul (signed char, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32xmul_176, "f32xmul", "f32xmul (unsigned char, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32xmul_177, "f32xmul", "f32xmul (unsigned char, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32xmul_178, "f32xmul", "f32xmul (unsigned char, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32xmul_179, "f32xmul", "f32xmul (unsigned char, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32xmul_180, "f32xmul", "f32xmul (unsigned char, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32xmul_181, "f32xmul", "f32xmul (unsigned char, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_182, "f32xmul", "f32xmul (unsigned char, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_183, "f32xmul", "f32xmul (unsigned char, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_184, "f32xmul", "f32xmul (unsigned char, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_185, "f32xmul", "f32xmul (unsigned char, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_186, "f32xmul", "f32xmul (unsigned char, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_187, "f32xmul", "f32xmul (unsigned char, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_188, "f32xmul", "f32xmul (unsigned char, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_189, "f32xmul", "f32xmul (unsigned char, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_190, "f32xmul", "f32xmul (unsigned char, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_191, "f32xmul", "f32xmul (unsigned char, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_192, "f32xmul", "f32xmul (unsigned char, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xmul_193, "f32xmul", "f32xmul (unsigned char, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xmul_194, "f32xmul", "f32xmul (unsigned char, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_195, "f32xmul", "f32xmul (unsigned char, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_196, "f32xmul", "f32xmul (unsigned char, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_197, "f32xmul", "f32xmul (unsigned char, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32xmul_198, "f32xmul", "f32xmul (short int, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32xmul_199, "f32xmul", "f32xmul (short int, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32xmul_200, "f32xmul", "f32xmul (short int, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32xmul_201, "f32xmul", "f32xmul (short int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32xmul_202, "f32xmul", "f32xmul (short int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32xmul_203, "f32xmul", "f32xmul (short int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_204, "f32xmul", "f32xmul (short int, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_205, "f32xmul", "f32xmul (short int, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_206, "f32xmul", "f32xmul (short int, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_207, "f32xmul", "f32xmul (short int, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_208, "f32xmul", "f32xmul (short int, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_209, "f32xmul", "f32xmul (short int, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_210, "f32xmul", "f32xmul (short int, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_211, "f32xmul", "f32xmul (short int, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_212, "f32xmul", "f32xmul (short int, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_213, "f32xmul", "f32xmul (short int, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_214, "f32xmul", "f32xmul (short int, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xmul_215, "f32xmul", "f32xmul (short int, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xmul_216, "f32xmul", "f32xmul (short int, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_217, "f32xmul", "f32xmul (short int, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_218, "f32xmul", "f32xmul (short int, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_219, "f32xmul", "f32xmul (short int, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32xmul_220, "f32xmul", "f32xmul (unsigned short int, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32xmul_221, "f32xmul", "f32xmul (unsigned short int, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32xmul_222, "f32xmul", "f32xmul (unsigned short int, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32xmul_223, "f32xmul", "f32xmul (unsigned short int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32xmul_224, "f32xmul", "f32xmul (unsigned short int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32xmul_225, "f32xmul", "f32xmul (unsigned short int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_226, "f32xmul", "f32xmul (unsigned short int, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_227, "f32xmul", "f32xmul (unsigned short int, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_228, "f32xmul", "f32xmul (unsigned short int, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_229, "f32xmul", "f32xmul (unsigned short int, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_230, "f32xmul", "f32xmul (unsigned short int, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_231, "f32xmul", "f32xmul (unsigned short int, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_232, "f32xmul", "f32xmul (unsigned short int, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_233, "f32xmul", "f32xmul (unsigned short int, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_234, "f32xmul", "f32xmul (unsigned short int, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_235, "f32xmul", "f32xmul (unsigned short int, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_236, "f32xmul", "f32xmul (unsigned short int, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xmul_237, "f32xmul", "f32xmul (unsigned short int, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xmul_238, "f32xmul", "f32xmul (unsigned short int, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_239, "f32xmul", "f32xmul (unsigned short int, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_240, "f32xmul", "f32xmul (unsigned short int, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_241, "f32xmul", "f32xmul (unsigned short int, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32xmul_242, "f32xmul", "f32xmul (int, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32xmul_243, "f32xmul", "f32xmul (int, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32xmul_244, "f32xmul", "f32xmul (int, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32xmul_245, "f32xmul", "f32xmul (int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32xmul_246, "f32xmul", "f32xmul (int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32xmul_247, "f32xmul", "f32xmul (int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_248, "f32xmul", "f32xmul (int, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_249, "f32xmul", "f32xmul (int, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_250, "f32xmul", "f32xmul (int, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_251, "f32xmul", "f32xmul (int, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_252, "f32xmul", "f32xmul (int, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_253, "f32xmul", "f32xmul (int, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_254, "f32xmul", "f32xmul (int, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_255, "f32xmul", "f32xmul (int, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_256, "f32xmul", "f32xmul (int, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_257, "f32xmul", "f32xmul (int, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_258, "f32xmul", "f32xmul (int, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xmul_259, "f32xmul", "f32xmul (int, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xmul_260, "f32xmul", "f32xmul (int, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_261, "f32xmul", "f32xmul (int, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_262, "f32xmul", "f32xmul (int, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_263, "f32xmul", "f32xmul (int, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32xmul_264, "f32xmul", "f32xmul (unsigned int, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32xmul_265, "f32xmul", "f32xmul (unsigned int, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32xmul_266, "f32xmul", "f32xmul (unsigned int, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32xmul_267, "f32xmul", "f32xmul (unsigned int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32xmul_268, "f32xmul", "f32xmul (unsigned int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32xmul_269, "f32xmul", "f32xmul (unsigned int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_270, "f32xmul", "f32xmul (unsigned int, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_271, "f32xmul", "f32xmul (unsigned int, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_272, "f32xmul", "f32xmul (unsigned int, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_273, "f32xmul", "f32xmul (unsigned int, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_274, "f32xmul", "f32xmul (unsigned int, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_275, "f32xmul", "f32xmul (unsigned int, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_276, "f32xmul", "f32xmul (unsigned int, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_277, "f32xmul", "f32xmul (unsigned int, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_278, "f32xmul", "f32xmul (unsigned int, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_279, "f32xmul", "f32xmul (unsigned int, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_280, "f32xmul", "f32xmul (unsigned int, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xmul_281, "f32xmul", "f32xmul (unsigned int, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xmul_282, "f32xmul", "f32xmul (unsigned int, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_283, "f32xmul", "f32xmul (unsigned int, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_284, "f32xmul", "f32xmul (unsigned int, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_285, "f32xmul", "f32xmul (unsigned int, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32xmul_286, "f32xmul", "f32xmul (long int, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32xmul_287, "f32xmul", "f32xmul (long int, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32xmul_288, "f32xmul", "f32xmul (long int, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32xmul_289, "f32xmul", "f32xmul (long int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32xmul_290, "f32xmul", "f32xmul (long int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32xmul_291, "f32xmul", "f32xmul (long int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_292, "f32xmul", "f32xmul (long int, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_293, "f32xmul", "f32xmul (long int, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_294, "f32xmul", "f32xmul (long int, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_295, "f32xmul", "f32xmul (long int, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_296, "f32xmul", "f32xmul (long int, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_297, "f32xmul", "f32xmul (long int, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_298, "f32xmul", "f32xmul (long int, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_299, "f32xmul", "f32xmul (long int, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_300, "f32xmul", "f32xmul (long int, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_301, "f32xmul", "f32xmul (long int, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_302, "f32xmul", "f32xmul (long int, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xmul_303, "f32xmul", "f32xmul (long int, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xmul_304, "f32xmul", "f32xmul (long int, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_305, "f32xmul", "f32xmul (long int, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_306, "f32xmul", "f32xmul (long int, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_307, "f32xmul", "f32xmul (long int, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32xmul_308, "f32xmul", "f32xmul (unsigned long int, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32xmul_309, "f32xmul", "f32xmul (unsigned long int, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32xmul_310, "f32xmul", "f32xmul (unsigned long int, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32xmul_311, "f32xmul", "f32xmul (unsigned long int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32xmul_312, "f32xmul", "f32xmul (unsigned long int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32xmul_313, "f32xmul", "f32xmul (unsigned long int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_314, "f32xmul", "f32xmul (unsigned long int, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_315, "f32xmul", "f32xmul (unsigned long int, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_316, "f32xmul", "f32xmul (unsigned long int, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_317, "f32xmul", "f32xmul (unsigned long int, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_318, "f32xmul", "f32xmul (unsigned long int, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_319, "f32xmul", "f32xmul (unsigned long int, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_320, "f32xmul", "f32xmul (unsigned long int, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_321, "f32xmul", "f32xmul (unsigned long int, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_322, "f32xmul", "f32xmul (unsigned long int, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_323, "f32xmul", "f32xmul (unsigned long int, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_324, "f32xmul", "f32xmul (unsigned long int, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xmul_325, "f32xmul", "f32xmul (unsigned long int, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xmul_326, "f32xmul", "f32xmul (unsigned long int, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_327, "f32xmul", "f32xmul (unsigned long int, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_328, "f32xmul", "f32xmul (unsigned long int, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_329, "f32xmul", "f32xmul (unsigned long int, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32xmul_330, "f32xmul", "f32xmul (long long int, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32xmul_331, "f32xmul", "f32xmul (long long int, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32xmul_332, "f32xmul", "f32xmul (long long int, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32xmul_333, "f32xmul", "f32xmul (long long int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32xmul_334, "f32xmul", "f32xmul (long long int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32xmul_335, "f32xmul", "f32xmul (long long int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_336, "f32xmul", "f32xmul (long long int, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_337, "f32xmul", "f32xmul (long long int, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_338, "f32xmul", "f32xmul (long long int, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_339, "f32xmul", "f32xmul (long long int, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_340, "f32xmul", "f32xmul (long long int, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_341, "f32xmul", "f32xmul (long long int, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_342, "f32xmul", "f32xmul (long long int, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_343, "f32xmul", "f32xmul (long long int, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_344, "f32xmul", "f32xmul (long long int, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_345, "f32xmul", "f32xmul (long long int, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_346, "f32xmul", "f32xmul (long long int, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xmul_347, "f32xmul", "f32xmul (long long int, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xmul_348, "f32xmul", "f32xmul (long long int, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_349, "f32xmul", "f32xmul (long long int, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_350, "f32xmul", "f32xmul (long long int, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_351, "f32xmul", "f32xmul (long long int, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32xmul_352, "f32xmul", "f32xmul (unsigned long long int, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32xmul_353, "f32xmul", "f32xmul (unsigned long long int, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32xmul_354, "f32xmul", "f32xmul (unsigned long long int, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32xmul_355, "f32xmul", "f32xmul (unsigned long long int, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32xmul_356, "f32xmul", "f32xmul (unsigned long long int, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32xmul_357, "f32xmul", "f32xmul (unsigned long long int, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_358, "f32xmul", "f32xmul (unsigned long long int, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_359, "f32xmul", "f32xmul (unsigned long long int, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_360, "f32xmul", "f32xmul (unsigned long long int, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_361, "f32xmul", "f32xmul (unsigned long long int, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_362, "f32xmul", "f32xmul (unsigned long long int, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_363, "f32xmul", "f32xmul (unsigned long long int, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_364, "f32xmul", "f32xmul (unsigned long long int, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_365, "f32xmul", "f32xmul (unsigned long long int, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_366, "f32xmul", "f32xmul (unsigned long long int, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_367, "f32xmul", "f32xmul (unsigned long long int, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_368, "f32xmul", "f32xmul (unsigned long long int, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xmul_369, "f32xmul", "f32xmul (unsigned long long int, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xmul_370, "f32xmul", "f32xmul (unsigned long long int, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_371, "f32xmul", "f32xmul (unsigned long long int, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_372, "f32xmul", "f32xmul (unsigned long long int, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_373, "f32xmul", "f32xmul (unsigned long long int, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_f32xmul_374, "f32xmul", "f32xmul (__int128, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_f32xmul_375, "f32xmul", "f32xmul (__int128, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_f32xmul_376, "f32xmul", "f32xmul (__int128, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_f32xmul_377, "f32xmul", "f32xmul (__int128, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_f32xmul_378, "f32xmul", "f32xmul (__int128, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_f32xmul_379, "f32xmul", "f32xmul (__int128, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xmul_380, "f32xmul", "f32xmul (__int128, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xmul_381, "f32xmul", "f32xmul (__int128, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xmul_382, "f32xmul", "f32xmul (__int128, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xmul_383, "f32xmul", "f32xmul (__int128, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xmul_384, "f32xmul", "f32xmul (__int128, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xmul_385, "f32xmul", "f32xmul (__int128, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xmul_386, "f32xmul", "f32xmul (__int128, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xmul_387, "f32xmul", "f32xmul (__int128, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xmul_388, "f32xmul", "f32xmul (__int128, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xmul_389, "f32xmul", "f32xmul (__int128, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xmul_390, "f32xmul", "f32xmul (__int128, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xmul_391, "f32xmul", "f32xmul (__int128, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xmul_392, "f32xmul", "f32xmul (__int128, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xmul_393, "f32xmul", "f32xmul (__int128, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xmul_394, "f32xmul", "f32xmul (__int128, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xmul_395, "f32xmul", "f32xmul (__int128, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16 && defined __SIZEOF_INT128__
    { test_f32xmul_396, "f32xmul", "f32xmul (unsigned __int128, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32 && defined __SIZEOF_INT128__
    { test_f32xmul_397, "f32xmul", "f32xmul (unsigned __int128, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X && defined __SIZEOF_INT128__
    { test_f32xmul_398, "f32xmul", "f32xmul (unsigned __int128, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64 && defined __SIZEOF_INT128__
    { test_f32xmul_399, "f32xmul", "f32xmul (unsigned __int128, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X && defined __SIZEOF_INT128__
    { test_f32xmul_400, "f32xmul", "f32xmul (unsigned __int128, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128 && defined __SIZEOF_INT128__
    { test_f32xmul_401, "f32xmul", "f32xmul (unsigned __int128, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xmul_402, "f32xmul", "f32xmul (unsigned __int128, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xmul_403, "f32xmul", "f32xmul (unsigned __int128, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xmul_404, "f32xmul", "f32xmul (unsigned __int128, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xmul_405, "f32xmul", "f32xmul (unsigned __int128, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xmul_406, "f32xmul", "f32xmul (unsigned __int128, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xmul_407, "f32xmul", "f32xmul (unsigned __int128, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xmul_408, "f32xmul", "f32xmul (unsigned __int128, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xmul_409, "f32xmul", "f32xmul (unsigned __int128, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xmul_410, "f32xmul", "f32xmul (unsigned __int128, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xmul_411, "f32xmul", "f32xmul (unsigned __int128, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xmul_412, "f32xmul", "f32xmul (unsigned __int128, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xmul_413, "f32xmul", "f32xmul (unsigned __int128, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xmul_414, "f32xmul", "f32xmul (unsigned __int128, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xmul_415, "f32xmul", "f32xmul (unsigned __int128, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xmul_416, "f32xmul", "f32xmul (unsigned __int128, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xmul_417, "f32xmul", "f32xmul (unsigned __int128, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32xmul_418, "f32xmul", "f32xmul (enum e, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32xmul_419, "f32xmul", "f32xmul (enum e, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32xmul_420, "f32xmul", "f32xmul (enum e, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32xmul_421, "f32xmul", "f32xmul (enum e, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32xmul_422, "f32xmul", "f32xmul (enum e, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32xmul_423, "f32xmul", "f32xmul (enum e, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_424, "f32xmul", "f32xmul (enum e, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_425, "f32xmul", "f32xmul (enum e, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_426, "f32xmul", "f32xmul (enum e, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_427, "f32xmul", "f32xmul (enum e, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_428, "f32xmul", "f32xmul (enum e, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_429, "f32xmul", "f32xmul (enum e, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_430, "f32xmul", "f32xmul (enum e, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_431, "f32xmul", "f32xmul (enum e, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_432, "f32xmul", "f32xmul (enum e, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_433, "f32xmul", "f32xmul (enum e, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_434, "f32xmul", "f32xmul (enum e, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xmul_435, "f32xmul", "f32xmul (enum e, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xmul_436, "f32xmul", "f32xmul (enum e, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_437, "f32xmul", "f32xmul (enum e, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_438, "f32xmul", "f32xmul (enum e, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_439, "f32xmul", "f32xmul (enum e, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32xmul_440, "f32xmul", "f32xmul (_Bool, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32xmul_441, "f32xmul", "f32xmul (_Bool, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32xmul_442, "f32xmul", "f32xmul (_Bool, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32xmul_443, "f32xmul", "f32xmul (_Bool, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32xmul_444, "f32xmul", "f32xmul (_Bool, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32xmul_445, "f32xmul", "f32xmul (_Bool, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_446, "f32xmul", "f32xmul (_Bool, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_447, "f32xmul", "f32xmul (_Bool, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_448, "f32xmul", "f32xmul (_Bool, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_449, "f32xmul", "f32xmul (_Bool, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_450, "f32xmul", "f32xmul (_Bool, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_451, "f32xmul", "f32xmul (_Bool, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_452, "f32xmul", "f32xmul (_Bool, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_453, "f32xmul", "f32xmul (_Bool, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_454, "f32xmul", "f32xmul (_Bool, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_455, "f32xmul", "f32xmul (_Bool, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_456, "f32xmul", "f32xmul (_Bool, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xmul_457, "f32xmul", "f32xmul (_Bool, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xmul_458, "f32xmul", "f32xmul (_Bool, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_459, "f32xmul", "f32xmul (_Bool, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_460, "f32xmul", "f32xmul (_Bool, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_461, "f32xmul", "f32xmul (_Bool, bit_field)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F16
    { test_f32xmul_462, "f32xmul", "f32xmul (bit_field, _Float16)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32
    { test_f32xmul_463, "f32xmul", "f32xmul (bit_field, _Float32)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F32X
    { test_f32xmul_464, "f32xmul", "f32xmul (bit_field, _Float32x)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64
    { test_f32xmul_465, "f32xmul", "f32xmul (bit_field, _Float64)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F64X
    { test_f32xmul_466, "f32xmul", "f32xmul (bit_field, _Float64x)", FLT64X_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined HUGE_VAL_F128
    { test_f32xmul_467, "f32xmul", "f32xmul (bit_field, _Float128)", FLT128_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_468, "f32xmul", "f32xmul (bit_field, char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_469, "f32xmul", "f32xmul (bit_field, signed char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_470, "f32xmul", "f32xmul (bit_field, unsigned char)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_471, "f32xmul", "f32xmul (bit_field, short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_472, "f32xmul", "f32xmul (bit_field, unsigned short int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_473, "f32xmul", "f32xmul (bit_field, int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_474, "f32xmul", "f32xmul (bit_field, unsigned int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_475, "f32xmul", "f32xmul (bit_field, long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_476, "f32xmul", "f32xmul (bit_field, unsigned long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_477, "f32xmul", "f32xmul (bit_field, long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_478, "f32xmul", "f32xmul (bit_field, unsigned long long int)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xmul_479, "f32xmul", "f32xmul (bit_field, __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128)) && defined __SIZEOF_INT128__
    { test_f32xmul_480, "f32xmul", "f32xmul (bit_field, unsigned __int128)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_481, "f32xmul", "f32xmul (bit_field, enum e)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_482, "f32xmul", "f32xmul (bit_field, _Bool)", FLT64_MANT_DIG, 0 },
#endif
#if (defined HUGE_VAL_F32X && (defined HUGE_VAL_F64 || defined HUGE_VAL_F64X || defined HUGE_VAL_F128))
    { test_f32xmul_483, "f32xmul", "f32xmul (bit_field, bit_field)", FLT64_MANT_DIG, 0 },
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
